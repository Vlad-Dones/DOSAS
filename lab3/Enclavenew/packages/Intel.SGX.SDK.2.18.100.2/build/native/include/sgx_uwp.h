/*
 *   Copyright(C) 2011-2018 Intel Corporation All Rights Reserved.
 *
 *   The source code, information  and  material ("Material") contained herein is
 *   owned  by Intel Corporation or its suppliers or licensors, and title to such
 *   Material remains  with Intel Corporation  or its suppliers or licensors. The
 *   Material  contains proprietary information  of  Intel or  its  suppliers and
 *   licensors. The  Material is protected by worldwide copyright laws and treaty
 *   provisions. No  part  of  the  Material  may  be  used,  copied, reproduced,
 *   modified, published, uploaded, posted, transmitted, distributed or disclosed
 *   in any way  without Intel's  prior  express written  permission. No  license
 *   under  any patent, copyright  or  other intellectual property rights  in the
 *   Material  is  granted  to  or  conferred  upon  you,  either  expressly,  by
 *   implication, inducement,  estoppel or  otherwise.  Any  license  under  such
 *   intellectual  property  rights must  be express  and  approved  by  Intel in
 *   writing.
 *
 *   *Third Party trademarks are the property of their respective owners.
 *
 *   Unless otherwise  agreed  by Intel  in writing, you may not remove  or alter
 *   this  notice or  any other notice embedded  in Materials by Intel or Intel's
 *   suppliers or licensors in any way.
 *
 */

#pragma once

#ifndef SGX_UWP_H
#define SGX_UWP_H

/**
*
* This header file provides helper functions that use QueryOptionalDelayLoadedAPI() to check 
* for functions that are exported from sgx_urts.dll and sgx_uae_service.dll.
* UWP Applications should use these "from_app" APIs and delay-load those two DLLs instead
* of using the regular APIs.
*
*/

#include <sgx_urts.h>
#include <sgx_uae_service.h>

#include <libloaderapi2.h>
EXTERN_C IMAGE_DOS_HEADER __ImageBase;

#define SGX_QUERY_STR(s) #s
#define SGX_URTS_QUERY( lpProcName ) IsUrtsApiAvailable( SGX_QUERY_STR(lpProcName) )
#define SGX_UAE_QUERY( lpProcName )  IsUaeApiAvailable( SGX_QUERY_STR(lpProcName) )

#if __cplusplus
extern "C"
{
#endif

    static BOOL IsUrtsApiAvailable(LPCSTR lpProcName)
    {
        return QueryOptionalDelayLoadedAPI((HMODULE)(&__ImageBase), "sgx_urts.dll", lpProcName, 0);
    }

    static BOOL IsUaeApiAvailable(LPCSTR lpProcName)
    {
        return QueryOptionalDelayLoadedAPI((HMODULE)(&__ImageBase), "sgx_uae_service.dll", lpProcName, 0);
    }

    static sgx_status_t SGXAPI sgx_create_enclavew_from_app(const LPCWSTR file_name, const int debug, sgx_launch_token_t *launch_token, int *lauch_token_updated, sgx_enclave_id_t *enclave_id, sgx_misc_attribute_t *misc_attr)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_URTS_QUERY(sgx_create_enclavew);
        }
        if (isApiAvailable)
        {
            return sgx_create_enclavew(file_name, debug, launch_token, lauch_token_updated, enclave_id, misc_attr);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_create_enclavea_from_app(const LPCSTR file_name, const int debug, sgx_launch_token_t *launch_token, int *lauch_token_updated, sgx_enclave_id_t *enclave_id, sgx_misc_attribute_t *misc_attr)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_URTS_QUERY(sgx_create_enclavea);
        }
        if (isApiAvailable)
        {
            return sgx_create_enclavea(file_name, debug, launch_token, lauch_token_updated, enclave_id, misc_attr);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_destroy_enclave_from_app(const sgx_enclave_id_t enclave_id)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_URTS_QUERY(sgx_destroy_enclave);
        }
        if (isApiAvailable)
        {
            return sgx_destroy_enclave(enclave_id);
        }

        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_get_quote_from_app(
        const sgx_report_t *p_report,
        sgx_quote_sign_type_t quote_type,
        const sgx_spid_t *p_spid,
        const sgx_quote_nonce_t *p_nonce,
        const uint8_t *p_sig_rl,
        uint32_t sig_rl_size,
        sgx_report_t *p_qe_report,
        sgx_quote_t *p_quote,
        uint32_t quote_size)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_get_quote);
        }
        if (isApiAvailable)
        {
            return sgx_get_quote(
                p_report,
                quote_type,
                p_spid,
                p_nonce,
                p_sig_rl,
                sig_rl_size,
                p_qe_report,
                p_quote,
                quote_size
            );
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_init_quote_from_app(sgx_target_info_t *p_target_info, sgx_epid_group_id_t *p_gid)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_init_quote);
        }
        if (isApiAvailable)
        {
            return sgx_init_quote(p_target_info, p_gid);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_report_attestation_status_from_app(const sgx_platform_info_t* p_platform_info, int attestation_status, sgx_update_info_bit_t* p_update_info)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_report_attestation_status);
        }
        if (isApiAvailable)
        {
            return sgx_report_attestation_status(p_platform_info, attestation_status, p_update_info);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_check_update_status_from_app(const sgx_platform_info_t* p_platform_info, sgx_update_info_bit_t* p_update_info, uint32_t config, uint32_t* p_status)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_check_update_status);
        }
        if (isApiAvailable)
        {
            return sgx_check_update_status(p_platform_info, p_update_info, config, p_status);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_get_ps_cap_from_app(sgx_ps_cap_t* p_sgx_ps_cap)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_get_ps_cap);
        }
        if (isApiAvailable)
        {
            return sgx_get_ps_cap(p_sgx_ps_cap);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_calc_quote_size_from_app(const uint8_t *p_sig_rl, uint32_t sig_rl_size, uint32_t* p_quote_size)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_calc_quote_size);
        }
        if (isApiAvailable)
        {
            return sgx_calc_quote_size(p_sig_rl, sig_rl_size, p_quote_size);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_enable_device_from_app(sgx_device_status_t* sgx_device_status)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_enable_device);
        }
        if (isApiAvailable)
        {
            return sgx_enable_device(sgx_device_status);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_register_wl_cert_chainw_from_app(const LPCWSTR CertChainPath)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_register_wl_cert_chainw);
        }
        if (isApiAvailable)
        {
            return sgx_register_wl_cert_chainw(CertChainPath);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_register_wl_cert_chaina_from_app(const LPCSTR CertChainPath)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_register_wl_cert_chaina);
        }
        if (isApiAvailable)
        {
            return sgx_register_wl_cert_chaina(CertChainPath);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_get_whitelist_size_from_app(uint32_t* p_whitelist_size)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_get_whitelist_size);
        }
        if (isApiAvailable)
        {
            return sgx_get_whitelist_size(p_whitelist_size);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

    static sgx_status_t SGXAPI sgx_get_whitelist_from_app(uint8_t* p_whitelist, uint32_t whitelist_size)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_get_whitelist);
        }
        if (isApiAvailable)
        {
            return sgx_get_whitelist(p_whitelist, whitelist_size);
        }
        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }


    static sgx_status_t SGXAPI sgx_get_extended_epid_group_id_from_app(uint32_t* p_extended_epid_group_id)
    {
        static BOOL isApiAvailable = FALSE;
        if (!isApiAvailable)
        {
            isApiAvailable = SGX_UAE_QUERY(sgx_get_extended_epid_group_id);
        }
        if (isApiAvailable)
        {
            return sgx_get_extended_epid_group_id(p_extended_epid_group_id);
        }

        return SGX_ERROR_FEATURE_NOT_SUPPORTED;
    }

#if __cplusplus
};
#endif


#ifdef UNICODE
#define sgx_create_enclave_from_app  sgx_create_enclavew_from_app
#define sgx_register_wl_cert_chain_from_app sgx_register_wl_cert_chainw_from_app
#else
#define sgx_create_enclave_from_app  sgx_create_enclavea_from_app
#define sgx_register_wl_cert_chain_from_app sgx_register_wl_cert_chaina_from_app
#endif



#endif
