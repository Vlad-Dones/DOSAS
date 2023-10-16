/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameAuthentication;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameCentral;
    QVBoxLayout *verticalLayoutFrameCentral;
    QLabel *labelSecondTitle;
    QFrame *frameLoginGeneral;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelCurPswHeader;
    QFrame *frameCurrPsw;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEditUser;
    QFrame *lineUser;
    QFrame *framePswGeneral;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelPswTitile;
    QFrame *framePsw;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEditPasswd;
    QPushButton *toolButtonShowPsw;
    QFrame *linePsw;
    QFrame *framePswConfirmGeneral;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelPassRetypeDesc;
    QFrame *frameConfirmPsw;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditPasswdRetype;
    QPushButton *pushButtonShowPswRetype;
    QFrame *linePswConfirm;
    QFrame *frameMsg;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelMsgIcon;
    QLabel *labelMsg;
    QSpacerItem *verticalSpacer;
    QFrame *frameButtons;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(480, 640);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameAuthentication = new QFrame(LoginDialog);
        frameAuthentication->setObjectName(QString::fromUtf8("frameAuthentication"));
        frameAuthentication->setStyleSheet(QString::fromUtf8("QFrame#frameAuthentication{\n"
"\n"
"border:0  px solid #33a5cd;\n"
"\n"
"border-radius: 0px;\n"
"}\n"
"\n"
"*{\n"
"background: #FFFFFF;\n"
"border-radius: 10px;\n"
"}"));
        frameAuthentication->setFrameShape(QFrame::NoFrame);
        frameAuthentication->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameAuthentication);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(17, 30, 15, 8);
        frameCentral = new QFrame(frameAuthentication);
        frameCentral->setObjectName(QString::fromUtf8("frameCentral"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCentral->sizePolicy().hasHeightForWidth());
        frameCentral->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        frameCentral->setFont(font);
        frameCentral->setFrameShape(QFrame::NoFrame);
        frameCentral->setFrameShadow(QFrame::Raised);
        verticalLayoutFrameCentral = new QVBoxLayout(frameCentral);
        verticalLayoutFrameCentral->setSpacing(18);
        verticalLayoutFrameCentral->setObjectName(QString::fromUtf8("verticalLayoutFrameCentral"));
        verticalLayoutFrameCentral->setContentsMargins(13, 0, 15, 0);
        labelSecondTitle = new QLabel(frameCentral);
        labelSecondTitle->setObjectName(QString::fromUtf8("labelSecondTitle"));
        labelSecondTitle->setStyleSheet(QString::fromUtf8("font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 14px;\n"
"line-height: 105%;\n"
"\n"
"\n"
"color: #232323;"));

        verticalLayoutFrameCentral->addWidget(labelSecondTitle);

        frameLoginGeneral = new QFrame(frameCentral);
        frameLoginGeneral->setObjectName(QString::fromUtf8("frameLoginGeneral"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameLoginGeneral->sizePolicy().hasHeightForWidth());
        frameLoginGeneral->setSizePolicy(sizePolicy1);
        frameLoginGeneral->setMinimumSize(QSize(0, 49));
        frameLoginGeneral->setFrameShape(QFrame::NoFrame);
        frameLoginGeneral->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frameLoginGeneral);
        verticalLayout_10->setSpacing(14);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        labelCurPswHeader = new QLabel(frameLoginGeneral);
        labelCurPswHeader->setObjectName(QString::fromUtf8("labelCurPswHeader"));
        labelCurPswHeader->setMinimumSize(QSize(0, 13));
        labelCurPswHeader->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 105%;\n"
"\n"
"color: rgba(35, 35, 35, 0.38);"));

        verticalLayout_10->addWidget(labelCurPswHeader);

        frameCurrPsw = new QFrame(frameLoginGeneral);
        frameCurrPsw->setObjectName(QString::fromUtf8("frameCurrPsw"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frameCurrPsw->sizePolicy().hasHeightForWidth());
        frameCurrPsw->setSizePolicy(sizePolicy2);
        frameCurrPsw->setMinimumSize(QSize(0, 19));
        frameCurrPsw->setFrameShape(QFrame::NoFrame);
        frameCurrPsw->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frameCurrPsw);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEditUser = new QLineEdit(frameCurrPsw);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setMinimumSize(QSize(0, 18));
        lineEditUser->setContextMenuPolicy(Qt::CustomContextMenu);
        lineEditUser->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 15px;\n"
"line-height: 105%;\n"
"\n"
"color: rgb(0, 0, 0);"));
        lineEditUser->setMaxLength(32);

        horizontalLayout_10->addWidget(lineEditUser);


        verticalLayout_10->addWidget(frameCurrPsw);

        lineUser = new QFrame(frameLoginGeneral);
        lineUser->setObjectName(QString::fromUtf8("lineUser"));
        lineUser->setMinimumSize(QSize(0, 1));
        lineUser->setMaximumSize(QSize(16777215, 1));
        lineUser->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	background: rgba(35, 35, 35, 0.09);\n"
"}\n"
"\n"
"*:hover{\n"
"	background: rgba(35, 35, 35, 0.24);\n"
"}"));
        lineUser->setFrameShape(QFrame::HLine);
        lineUser->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(lineUser);


        verticalLayoutFrameCentral->addWidget(frameLoginGeneral);

        framePswGeneral = new QFrame(frameCentral);
        framePswGeneral->setObjectName(QString::fromUtf8("framePswGeneral"));
        sizePolicy1.setHeightForWidth(framePswGeneral->sizePolicy().hasHeightForWidth());
        framePswGeneral->setSizePolicy(sizePolicy1);
        framePswGeneral->setMinimumSize(QSize(0, 49));
        framePswGeneral->setFrameShape(QFrame::StyledPanel);
        framePswGeneral->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(framePswGeneral);
        verticalLayout_12->setSpacing(14);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelPswTitile = new QLabel(framePswGeneral);
        labelPswTitile->setObjectName(QString::fromUtf8("labelPswTitile"));
        labelPswTitile->setMinimumSize(QSize(0, 13));
        labelPswTitile->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 105%;\n"
"\n"
"color: rgba(35, 35, 35, 0.38);"));

        verticalLayout_12->addWidget(labelPswTitile);

        framePsw = new QFrame(framePswGeneral);
        framePsw->setObjectName(QString::fromUtf8("framePsw"));
        framePsw->setMinimumSize(QSize(0, 20));
        framePsw->setFrameShape(QFrame::NoFrame);
        framePsw->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(framePsw);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        lineEditPasswd = new QLineEdit(framePsw);
        lineEditPasswd->setObjectName(QString::fromUtf8("lineEditPasswd"));
        lineEditPasswd->setMinimumSize(QSize(0, 18));
        lineEditPasswd->setContextMenuPolicy(Qt::CustomContextMenu);
        lineEditPasswd->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 15px;\n"
"line-height: 105%;\n"
"\n"
"color: rgb(0, 0, 0);"));
        lineEditPasswd->setMaxLength(32);

        horizontalLayout_12->addWidget(lineEditPasswd);

        toolButtonShowPsw = new QPushButton(framePsw);
        toolButtonShowPsw->setObjectName(QString::fromUtf8("toolButtonShowPsw"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButtonShowPsw->sizePolicy().hasHeightForWidth());
        toolButtonShowPsw->setSizePolicy(sizePolicy3);
        toolButtonShowPsw->setMinimumSize(QSize(18, 16));
        toolButtonShowPsw->setMaximumSize(QSize(20, 25));
        QFont font1;
        font1.setPointSize(12);
        toolButtonShowPsw->setFont(font1);
        toolButtonShowPsw->setCursor(QCursor(Qt::PointingHandCursor));
        toolButtonShowPsw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 0px solid #E6E7E8;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"image:  url( :/resources/img/visibility_off_24px.png);\n"
"}\n"
"QPushButton:!checked{\n"
"image:  url( :/resources/img/visibility_24px.png);\n"
"}\n"
"\n"
"QPushButton:checked:hover{\n"
"image:  url( :/resources/img/visibility_off_hover_24px.png);\n"
"}\n"
"QPushButton:!checked:hover{\n"
"image:  url( :/resources/img/visibility_hover_24px.png);\n"
"}\n"
"\n"
"QPushButton:checked:pressed{\n"
"image:  url( :/resources/img/visibility_off_press_24px.png);\n"
"}\n"
"QPushButton:!checked:pressed{\n"
"image:  url( :/resources/img/visibility_press_24px.png);\n"
"}"));
        toolButtonShowPsw->setIconSize(QSize(0, 0));
        toolButtonShowPsw->setCheckable(true);
        toolButtonShowPsw->setAutoDefault(true);
        toolButtonShowPsw->setFlat(false);

        horizontalLayout_12->addWidget(toolButtonShowPsw);


        verticalLayout_12->addWidget(framePsw);

        linePsw = new QFrame(framePswGeneral);
        linePsw->setObjectName(QString::fromUtf8("linePsw"));
        linePsw->setMinimumSize(QSize(0, 1));
        linePsw->setMaximumSize(QSize(16777215, 1));
        linePsw->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	background: rgba(35, 35, 35, 0.09);\n"
"}\n"
"\n"
"*:hover{\n"
"	background: rgba(35, 35, 35, 0.24);\n"
"}"));
        linePsw->setFrameShape(QFrame::HLine);
        linePsw->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(linePsw);


        verticalLayoutFrameCentral->addWidget(framePswGeneral);

        framePswConfirmGeneral = new QFrame(frameCentral);
        framePswConfirmGeneral->setObjectName(QString::fromUtf8("framePswConfirmGeneral"));
        sizePolicy1.setHeightForWidth(framePswConfirmGeneral->sizePolicy().hasHeightForWidth());
        framePswConfirmGeneral->setSizePolicy(sizePolicy1);
        framePswConfirmGeneral->setMinimumSize(QSize(0, 49));
        framePswConfirmGeneral->setFrameShape(QFrame::NoFrame);
        framePswConfirmGeneral->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(framePswConfirmGeneral);
        verticalLayout_9->setSpacing(14);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelPassRetypeDesc = new QLabel(framePswConfirmGeneral);
        labelPassRetypeDesc->setObjectName(QString::fromUtf8("labelPassRetypeDesc"));
        labelPassRetypeDesc->setMinimumSize(QSize(0, 13));
        labelPassRetypeDesc->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 12px;\n"
"line-height: 105%;\n"
"\n"
"color: rgba(35, 35, 35, 0.38);"));

        verticalLayout_9->addWidget(labelPassRetypeDesc);

        frameConfirmPsw = new QFrame(framePswConfirmGeneral);
        frameConfirmPsw->setObjectName(QString::fromUtf8("frameConfirmPsw"));
        frameConfirmPsw->setMinimumSize(QSize(0, 19));
        frameConfirmPsw->setFrameShape(QFrame::NoFrame);
        frameConfirmPsw->setFrameShadow(QFrame::Raised);
        frameConfirmPsw->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(frameConfirmPsw);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEditPasswdRetype = new QLineEdit(frameConfirmPsw);
        lineEditPasswdRetype->setObjectName(QString::fromUtf8("lineEditPasswdRetype"));
        lineEditPasswdRetype->setMinimumSize(QSize(0, 18));
        lineEditPasswdRetype->setContextMenuPolicy(Qt::CustomContextMenu);
        lineEditPasswdRetype->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 15px;\n"
"line-height: 105%;\n"
"\n"
"color: rgb(0, 0, 0);"));
        lineEditPasswdRetype->setMaxLength(32);

        horizontalLayout_7->addWidget(lineEditPasswdRetype);

        pushButtonShowPswRetype = new QPushButton(frameConfirmPsw);
        pushButtonShowPswRetype->setObjectName(QString::fromUtf8("pushButtonShowPswRetype"));
        pushButtonShowPswRetype->setMinimumSize(QSize(18, 16));
        pushButtonShowPswRetype->setMaximumSize(QSize(20, 25));
        pushButtonShowPswRetype->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonShowPswRetype->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 0px solid #E6E7E8;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"image:  url( :/resources/img/visibility_off_24px.png);\n"
"}\n"
"QPushButton:!checked{\n"
"image:  url( :/resources/img/visibility_24px.png);\n"
"}\n"
"\n"
"QPushButton:checked:hover{\n"
"image:  url( :/resources/img/visibility_off_hover_24px.png);\n"
"}\n"
"QPushButton:!checked:hover{\n"
"image:  url( :/resources/img/visibility_hover_24px.png);\n"
"}\n"
"\n"
"QPushButton:checked:pressed{\n"
"image:  url( :/resources/img/visibility_off_press_24px.png);\n"
"}\n"
"QPushButton:!checked:pressed{\n"
"image:  url( :/resources/img/visibility_press_24px.png);\n"
"}"));
        pushButtonShowPswRetype->setIconSize(QSize(0, 0));
        pushButtonShowPswRetype->setCheckable(true);

        horizontalLayout_7->addWidget(pushButtonShowPswRetype);


        verticalLayout_9->addWidget(frameConfirmPsw);

        linePswConfirm = new QFrame(framePswConfirmGeneral);
        linePswConfirm->setObjectName(QString::fromUtf8("linePswConfirm"));
        linePswConfirm->setMinimumSize(QSize(0, 1));
        linePswConfirm->setMaximumSize(QSize(16777215, 1));
        linePswConfirm->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	background: rgba(35, 35, 35, 0.09);\n"
"}\n"
"\n"
"*:hover{\n"
"	background: rgba(35, 35, 35, 0.24);\n"
"}"));
        linePswConfirm->setFrameShape(QFrame::HLine);
        linePswConfirm->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(linePswConfirm);


        verticalLayoutFrameCentral->addWidget(framePswConfirmGeneral);

        frameMsg = new QFrame(frameCentral);
        frameMsg->setObjectName(QString::fromUtf8("frameMsg"));
        sizePolicy1.setHeightForWidth(frameMsg->sizePolicy().hasHeightForWidth());
        frameMsg->setSizePolicy(sizePolicy1);
        frameMsg->setMinimumSize(QSize(0, 18));
        QFont font2;
        font2.setPointSize(10);
        frameMsg->setFont(font2);
        frameMsg->setFrameShape(QFrame::NoFrame);
        frameMsg->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frameMsg);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        labelMsgIcon = new QLabel(frameMsg);
        labelMsgIcon->setObjectName(QString::fromUtf8("labelMsgIcon"));
        labelMsgIcon->setMinimumSize(QSize(20, 20));
        labelMsgIcon->setMaximumSize(QSize(20, 20));
        labelMsgIcon->setFont(font2);
        labelMsgIcon->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/warning_24px.png")));
        labelMsgIcon->setScaledContents(false);

        horizontalLayout_13->addWidget(labelMsgIcon);

        labelMsg = new QLabel(frameMsg);
        labelMsg->setObjectName(QString::fromUtf8("labelMsg"));
        labelMsg->setStyleSheet(QString::fromUtf8("\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 105%;\n"
"\n"
"color: rgb(231, 65, 23);"));

        horizontalLayout_13->addWidget(labelMsg);


        verticalLayoutFrameCentral->addWidget(frameMsg);


        verticalLayout_3->addWidget(frameCentral);

        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer);

        frameButtons = new QFrame(frameAuthentication);
        frameButtons->setObjectName(QString::fromUtf8("frameButtons"));
        sizePolicy1.setHeightForWidth(frameButtons->sizePolicy().hasHeightForWidth());
        frameButtons->setSizePolicy(sizePolicy1);
        frameButtons->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(70, 71, 73);\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(221, 42, 19);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	color: rgb(146, 150, 160);\n"
"	background-color: rgb(224, 225, 227);\n"
"}\n"
""));
        frameButtons->setFrameShape(QFrame::NoFrame);
        frameButtons->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frameButtons);
        horizontalLayout_9->setSpacing(11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        pushButtonOK = new QPushButton(frameButtons);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setMinimumSize(QSize(90, 40));
        pushButtonOK->setMaximumSize(QSize(175, 16777215));
        pushButtonOK->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonOK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"background: #4169E1;\n"
"border-radius: 5px;\n"
"\n"
"\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 14px;\n"
"line-height: 105%;\n"
"\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background: #0000F6;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #0000CD;\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"			\n"
"	color: rgba(0, 0, 0, 0.24);\n"
"	background: #DEDEDE;\n"
"    border: 0px solid rgba(35, 35, 35, 0.24);\n"
"}\n"
""));

        horizontalLayout_9->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(frameButtons);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(90, 40));
        pushButtonCancel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid rgba(35, 35, 35, 0.15);\n"
"border-radius: 5px;\n"
"background: #FFFFFF;\n"
"\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 14px;\n"
"\n"
"text-align: center;\n"
"color: #000000;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: #D7D7D7;\n"
"border: 1px solid rgba(215, 215, 215, 0.09);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border: 0px solid rgba(35, 35, 35, 0.09);\n"
"background: rgba(215, 215, 215, 0.12);\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"			\n"
"	color: rgba(0, 0, 0, 0.24);\n"
"	background: #DEDEDE;\n"
"    border: 0px solid rgba(35, 35, 35, 0.24);\n"
"}\n"
""));
        pushButtonCancel->setAutoDefault(false);

        horizontalLayout_9->addWidget(pushButtonCancel);


        verticalLayout_3->addWidget(frameButtons);


        verticalLayout->addWidget(frameAuthentication);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        labelSecondTitle->setText(QString());
        labelCurPswHeader->setText(QCoreApplication::translate("LoginDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        labelPswTitile->setText(QCoreApplication::translate("LoginDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        toolButtonShowPsw->setText(QString());
        labelPassRetypeDesc->setText(QCoreApplication::translate("LoginDialog", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        pushButtonShowPswRetype->setText(QString());
        labelMsgIcon->setText(QString());
        labelMsg->setText(QCoreApplication::translate("LoginDialog", "---", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("LoginDialog", "\320\236\320\232", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("LoginDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
