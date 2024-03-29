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


#ifndef _IAS_RA_H
#define _IAS_RA_H

#include "ecp.h"

// This data structures in this file are for demonstration only.
// See the IAS API for the full definition of the Attestation data structures

typedef enum {
    IAS_QUOTE_OK,
    IAS_QUOTE_SIGNATURE_INVALID,
    IAS_QUOTE_GROUP_REVOKED,
    IAS_QUOTE_SIGNATURE_REVOKED,
    IAS_QUOTE_KEY_REVOKED,
    IAS_QUOTE_SIGRL_VERSION_MISMATCH,
    IAS_QUOTE_GROUP_OUT_OF_DATE,
} ias_quote_status_t;

typedef enum {
    IAS_PSE_OK,
    IAS_PSE_DESC_TYPE_NOT_SUPPORTED,
    IAS_PSE_ISVSVN_OUT_OF_DATE,
    IAS_PSE_MISCSELECT_INVALID,
    IAS_PSE_ATTRIBUTES_INVALID,
    IAS_PSE_MRSIGNER_INVALID,
    IAS_PS_HW_GID_REVOKED,
    IAS_PS_HW_PRIVKEY_RLVER_MISMATCH,
    IAS_PS_HW_SIG_RLVER_MISMATCH,
    IAS_PS_HW_CA_ID_INVALID,
    IAS_PS_HW_SEC_INFO_INVALID,
    IAS_PS_HW_PSDA_SVN_OUT_OF_DATE,
} ias_pse_status_t;

// Revocation Reasons from RFC5280
typedef enum {
    IAS_REVOC_REASON_NONE,
    IAS_REVOC_REASON_KEY_COMPROMISE,
    IAS_REVOC_REASON_CA_COMPROMISED,
    IAS_REVOC_REASON_SUPERCEDED,
    IAS_REVOC_REASON_CESSATION_OF_OPERATION,
    IAS_REVOC_REASON_CERTIFICATE_HOLD,
    IAS_REVOC_REASON_PRIVILEGE_WITHDRAWN,
    IAS_REVOC_REASON_AA_COMPROMISE,
} ias_revoc_reason_t;

// These status should align with the definition in IAS API spec
#define ISVSVN_SIZE         2
#define PSDA_SVN_SIZE       4
#define GID_SIZE            4
#define PSVN_SIZE           18

#define SAMPLE_HASH_SIZE    32  // SHA256
#define SAMPLE_MAC_SIZE     16  // Message Authentication Code
                                // - 16 bytes

#define SAMPLE_REPORT_DATA_SIZE         64

typedef uint8_t             sample_measurement_t[SAMPLE_HASH_SIZE];
typedef uint8_t             sample_mac_t[SAMPLE_MAC_SIZE];
typedef uint8_t             sample_report_data_t[SAMPLE_REPORT_DATA_SIZE];
typedef uint16_t            sample_prod_id_t;

#define SAMPLE_CPUSVN_SIZE  16

typedef uint8_t             sample_cpu_svn_t[SAMPLE_CPUSVN_SIZE];
typedef uint16_t            sample_isv_svn_t;

typedef struct sample_attributes_t
{
    uint64_t                flags;
    uint64_t                xfrm;
} sample_attributes_t;

typedef struct sample_report_body_t {
    sample_cpu_svn_t        cpu_svn;        // (  0) Security Version of the CPU
    uint8_t                 reserved1[32];  // ( 16)
    sample_attributes_t     attributes;     // ( 48) Any special Capabilities
                                            //       the Enclave possess
    sample_measurement_t    mr_enclave;     // ( 64) The value of the enclave's
                                            //       ENCLAVE measurement
    uint8_t                 reserved2[32];  // ( 96)
    sample_measurement_t    mr_signer;      // (128) The value of the enclave's
                                            //       SIGNER measurement
    uint8_t                 reserved3[32];  // (160)
    sample_measurement_t    mr_reserved1;   // (192)
    sample_measurement_t    mr_reserved2;   // (224)
    sample_prod_id_t        isv_prod_id;    // (256) Product ID of the Enclave
    sample_isv_svn_t        isv_svn;        // (258) Security Version of the
                                            //       Enclave
    uint8_t                 reserved4[60];  // (260)
    sample_report_data_t    report_data;    // (320) Data provided by the user
} sample_report_body_t;

#pragma pack(push, 1)

typedef struct _ias_att_report_t
{
    uint32_t                id;
    ias_quote_status_t      status;
    uint32_t                revocation_reason;
    ias_platform_info_blob_t    info_blob;
    ias_pse_status_t        pse_status;
} ias_att_report_t;

typedef uint8_t sample_epid_group_id_t[4];

typedef struct sample_spid_t
{
    uint8_t                 id[16];
} sample_spid_t;

typedef struct sample_basename_t
{
    uint8_t                 name[32];
} sample_basename_t;


typedef struct sample_quote_nonce_t
{
    uint8_t                 rand[16];
} sample_quote_nonce_t;

#define SAMPLE_QUOTE_UNLINKABLE_SIGNATURE 0
#define SAMPLE_QUOTE_LINKABLE_SIGNATURE   1

typedef struct sample_quote_t {
    uint16_t                version;                // 0
    uint16_t                sign_type;              // 2
    sample_epid_group_id_t  epid_group_id;          // 4
    sample_isv_svn_t        qe_svn;                 // 8
    sample_isv_svn_t        pce_svn;                // 10
    uint32_t                extended_epid_group_id; // 12
    sample_basename_t       basename;               // 16
    sample_report_body_t    report_body;            // 48
    uint32_t                signature_len;          // 432
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning ( disable:4200 )
#endif
    uint8_t                 signature[];            // 436
#ifdef _MSC_VER
#pragma warning(pop)
#endif
} sample_quote_t;

#pragma pack(pop)

#ifdef  __cplusplus
extern "C" {
#endif

int ias_enroll(int sp_credentials, sample_spid_t* spid,
               int* authentication_token);
int ias_get_sigrl(const sample_epid_group_id_t gid, uint32_t* p_sig_rl_size,
               uint8_t** p_sig_rl);
int ias_verify_attestation_evidence(const sample_quote_t* p_isv_quote,
               uint8_t* pse_manifest,
               ias_att_report_t* attestation_verification_report);
#ifdef  __cplusplus
}
#endif

#endif
