/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *lbFont;
    QComboBox *combFontFamily;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QComboBox *combLanguage;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbAutoStartup;
    QCheckBox *cbAutoStartup;
    QLabel *label_11;
    QCheckBox *cbShadowEffect;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_13;
    QLineEdit *txtDotSize;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *vLayout;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *txtImageQ;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_17;
    QSlider *sliderImageQ;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_2;
    QComboBox *combImageType;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *combSaveDir;
    QPushButton *btnGetSaveDir;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QComboBox *combFileFormat;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbDisplayFmt;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_23;
    QCheckBox *cbUpload;
    QCheckBox *cbProxy;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *txtAuth;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QComboBox *combType;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_15;
    QLineEdit *txtProxyIP;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QLineEdit *txtProxyPort;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QPushButton *btnDesktop;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QPushButton *btnDesktopCopy;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QPushButton *btnFree;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QPushButton *btnSettings;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QPushButton *btnQuit;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hLayout;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnQtAbout;
    QPushButton *btnSaveConfig;

    void setupUi(QWidget *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(502, 471);
        verticalLayout_2 = new QVBoxLayout(SettingsWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(SettingsWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbFont = new QLabel(tab);
        lbFont->setObjectName(QString::fromUtf8("lbFont"));

        horizontalLayout->addWidget(lbFont);

        combFontFamily = new QComboBox(tab);
        combFontFamily->setObjectName(QString::fromUtf8("combFontFamily"));
        combFontFamily->setMinimumSize(QSize(200, 35));

        horizontalLayout->addWidget(combFontFamily);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_8->addWidget(label_12);

        combLanguage = new QComboBox(tab);
        combLanguage->setObjectName(QString::fromUtf8("combLanguage"));

        horizontalLayout_8->addWidget(combLanguage);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbAutoStartup = new QLabel(tab);
        lbAutoStartup->setObjectName(QString::fromUtf8("lbAutoStartup"));

        horizontalLayout_2->addWidget(lbAutoStartup);

        cbAutoStartup = new QCheckBox(tab);
        cbAutoStartup->setObjectName(QString::fromUtf8("cbAutoStartup"));

        horizontalLayout_2->addWidget(cbAutoStartup);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        cbShadowEffect = new QCheckBox(tab);
        cbShadowEffect->setObjectName(QString::fromUtf8("cbShadowEffect"));

        horizontalLayout_2->addWidget(cbShadowEffect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_18->addWidget(label_13);

        txtDotSize = new QLineEdit(tab);
        txtDotSize->setObjectName(QString::fromUtf8("txtDotSize"));
        txtDotSize->setMaxLength(30);

        horizontalLayout_18->addWidget(txtDotSize);


        verticalLayout_4->addLayout(horizontalLayout_18);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_12 = new QVBoxLayout(groupBox);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        vLayout = new QVBoxLayout();
        vLayout->setObjectName(QString::fromUtf8("vLayout"));

        verticalLayout_12->addLayout(vLayout);


        verticalLayout_4->addWidget(groupBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        txtImageQ = new QLineEdit(tab_2);
        txtImageQ->setObjectName(QString::fromUtf8("txtImageQ"));
        txtImageQ->setMaxLength(3);

        horizontalLayout_5->addWidget(txtImageQ);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        sliderImageQ = new QSlider(tab_2);
        sliderImageQ->setObjectName(QString::fromUtf8("sliderImageQ"));
        sliderImageQ->setMinimum(1);
        sliderImageQ->setMaximum(100);
        sliderImageQ->setOrientation(Qt::Horizontal);
        sliderImageQ->setInvertedControls(false);

        horizontalLayout_17->addWidget(sliderImageQ);


        verticalLayout_9->addLayout(horizontalLayout_17);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_13->addWidget(label_2);

        combImageType = new QComboBox(tab_2);
        combImageType->setObjectName(QString::fromUtf8("combImageType"));

        horizontalLayout_13->addWidget(combImageType);


        verticalLayout_9->addLayout(horizontalLayout_13);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        combSaveDir = new QComboBox(tab_2);
        combSaveDir->setObjectName(QString::fromUtf8("combSaveDir"));
        combSaveDir->setEditable(true);

        horizontalLayout_6->addWidget(combSaveDir);

        btnGetSaveDir = new QPushButton(tab_2);
        btnGetSaveDir->setObjectName(QString::fromUtf8("btnGetSaveDir"));

        horizontalLayout_6->addWidget(btnGetSaveDir);


        verticalLayout_11->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);

        combFileFormat = new QComboBox(tab_2);
        combFileFormat->setObjectName(QString::fromUtf8("combFileFormat"));

        horizontalLayout_10->addWidget(combFileFormat);


        verticalLayout_11->addLayout(horizontalLayout_10);


        verticalLayout_10->addLayout(verticalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbDisplayFmt = new QLabel(tab_2);
        lbDisplayFmt->setObjectName(QString::fromUtf8("lbDisplayFmt"));

        horizontalLayout_7->addWidget(lbDisplayFmt);


        verticalLayout_10->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_14 = new QVBoxLayout(tab_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        cbUpload = new QCheckBox(tab_5);
        cbUpload->setObjectName(QString::fromUtf8("cbUpload"));

        horizontalLayout_23->addWidget(cbUpload);

        cbProxy = new QCheckBox(tab_5);
        cbProxy->setObjectName(QString::fromUtf8("cbProxy"));

        horizontalLayout_23->addWidget(cbProxy);


        verticalLayout_14->addLayout(horizontalLayout_23);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        txtAuth = new QLineEdit(tab_5);
        txtAuth->setObjectName(QString::fromUtf8("txtAuth"));
        txtAuth->setReadOnly(false);

        horizontalLayout_4->addWidget(txtAuth);


        verticalLayout_13->addLayout(horizontalLayout_4);

        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_16 = new QVBoxLayout(groupBox_2);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_20->addWidget(label_17);

        combType = new QComboBox(groupBox_2);
        combType->addItem(QString());
        combType->addItem(QString());
        combType->setObjectName(QString::fromUtf8("combType"));

        horizontalLayout_20->addWidget(combType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_2);


        verticalLayout_16->addLayout(horizontalLayout_20);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_19->addWidget(label_15);

        txtProxyIP = new QLineEdit(groupBox_2);
        txtProxyIP->setObjectName(QString::fromUtf8("txtProxyIP"));

        horizontalLayout_19->addWidget(txtProxyIP);


        verticalLayout_15->addLayout(horizontalLayout_19);


        verticalLayout_16->addLayout(verticalLayout_15);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_21->addWidget(label_16);

        txtProxyPort = new QLineEdit(groupBox_2);
        txtProxyPort->setObjectName(QString::fromUtf8("txtProxyPort"));

        horizontalLayout_21->addWidget(txtProxyPort);


        verticalLayout_16->addLayout(horizontalLayout_21);


        verticalLayout_13->addWidget(groupBox_2);


        verticalLayout_14->addLayout(verticalLayout_13);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_16->addWidget(label_10);

        btnDesktop = new QPushButton(tab_3);
        btnDesktop->setObjectName(QString::fromUtf8("btnDesktop"));

        horizontalLayout_16->addWidget(btnDesktop);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        btnDesktopCopy = new QPushButton(tab_3);
        btnDesktopCopy->setObjectName(QString::fromUtf8("btnDesktopCopy"));

        horizontalLayout_11->addWidget(btnDesktopCopy);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_15->addWidget(label_6);

        btnFree = new QPushButton(tab_3);
        btnFree->setObjectName(QString::fromUtf8("btnFree"));

        horizontalLayout_15->addWidget(btnFree);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        btnSettings = new QPushButton(tab_3);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));

        horizontalLayout_12->addWidget(btnSettings);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_14->addWidget(label_7);

        btnQuit = new QPushButton(tab_3);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));

        horizontalLayout_14->addWidget(btnQuit);


        verticalLayout_7->addLayout(horizontalLayout_14);


        verticalLayout_8->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        hLayout = new QHBoxLayout();
        hLayout->setObjectName(QString::fromUtf8("hLayout"));

        verticalLayout_5->addLayout(hLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btnQtAbout = new QPushButton(tab_4);
        btnQtAbout->setObjectName(QString::fromUtf8("btnQtAbout"));
        btnQtAbout->setAutoDefault(false);
        btnQtAbout->setFlat(false);

        horizontalLayout_9->addWidget(btnQtAbout);


        verticalLayout_6->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addLayout(verticalLayout);

        btnSaveConfig = new QPushButton(SettingsWindow);
        btnSaveConfig->setObjectName(QString::fromUtf8("btnSaveConfig"));

        verticalLayout_2->addWidget(btnSaveConfig);


        retranslateUi(SettingsWindow);

        tabWidget->setCurrentIndex(0);
        combType->setCurrentIndex(0);
        btnQtAbout->setDefault(false);


        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "Settings", nullptr));
        lbFont->setText(QApplication::translate("SettingsWindow", "UI font:", nullptr));
        label_12->setText(QApplication::translate("SettingsWindow", "Language(restart):", nullptr));
        lbAutoStartup->setText(QApplication::translate("SettingsWindow", "Start on boot(Windows):", nullptr));
        cbAutoStartup->setText(QString());
        label_11->setText(QApplication::translate("SettingsWindow", "Shadow effect:", nullptr));
        cbShadowEffect->setText(QString());
        label_13->setText(QApplication::translate("SettingsWindow", "Dot size:", nullptr));
        groupBox->setTitle(QApplication::translate("SettingsWindow", "UI color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsWindow", "General", nullptr));
        label_3->setText(QApplication::translate("SettingsWindow", "Image quality:", nullptr));
        txtImageQ->setText(QApplication::translate("SettingsWindow", "100", nullptr));
        label_4->setText(QApplication::translate("SettingsWindow", "(1-100)", nullptr));
        label_2->setText(QApplication::translate("SettingsWindow", "Image format:", nullptr));
        label->setText(QApplication::translate("SettingsWindow", "Save file directory:", nullptr));
        btnGetSaveDir->setText(QApplication::translate("SettingsWindow", "...", nullptr));
        label_5->setText(QApplication::translate("SettingsWindow", "Save file format:", nullptr));
        lbDisplayFmt->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsWindow", "Screenshot", nullptr));
        cbUpload->setText(QApplication::translate("SettingsWindow", "Upload image to smms", nullptr));
        cbProxy->setText(QApplication::translate("SettingsWindow", "Enable proxy", nullptr));
        label_14->setText(QApplication::translate("SettingsWindow", "Smms Authorization: ", nullptr));
        txtAuth->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SettingsWindow", "Proxy Setting", nullptr));
        label_17->setText(QApplication::translate("SettingsWindow", "Type: ", nullptr));
        combType->setItemText(0, QApplication::translate("SettingsWindow", "HTTP", nullptr));
        combType->setItemText(1, QApplication::translate("SettingsWindow", "SOCKS5", nullptr));

        label_15->setText(QApplication::translate("SettingsWindow", "IP: ", nullptr));
        txtProxyIP->setText(QApplication::translate("SettingsWindow", "127.0.0.1", nullptr));
        label_16->setText(QApplication::translate("SettingsWindow", "Port: ", nullptr));
        txtProxyPort->setText(QApplication::translate("SettingsWindow", "8888", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SettingsWindow", "Upload", nullptr));
        label_10->setText(QApplication::translate("SettingsWindow", "Capture desktop:", nullptr));
        btnDesktop->setText(QApplication::translate("SettingsWindow", "Ctrl+Shift+A", nullptr));
        label_8->setText(QApplication::translate("SettingsWindow", "Capture desktop and copy:", nullptr));
        btnDesktopCopy->setText(QApplication::translate("SettingsWindow", "Ctrl+Shift+C", nullptr));
        label_6->setText(QApplication::translate("SettingsWindow", "General capture:", nullptr));
        btnFree->setText(QApplication::translate("SettingsWindow", "F1", nullptr));
        label_9->setText(QApplication::translate("SettingsWindow", "Setting dialog:", nullptr));
        btnSettings->setText(QApplication::translate("SettingsWindow", "Alt+Shift+S", nullptr));
        label_7->setText(QApplication::translate("SettingsWindow", "Quit application:", nullptr));
        btnQuit->setText(QApplication::translate("SettingsWindow", "Alt+Shift+Q", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsWindow", "Hotkey", nullptr));
        btnQtAbout->setText(QApplication::translate("SettingsWindow", "About Qt", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SettingsWindow", "About", nullptr));
        btnSaveConfig->setText(QApplication::translate("SettingsWindow", "Save configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
