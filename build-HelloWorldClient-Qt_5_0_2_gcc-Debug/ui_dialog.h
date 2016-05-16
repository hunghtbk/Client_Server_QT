/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QTextEdit *textEditIP;
    QTextEdit *textEditPort;
    QLabel *label_2;
    QPushButton *pushButtonConnect;
    QTextEdit *textEditMesage;
    QLabel *label_3;
    QPushButton *pushButtonSend;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(517, 338);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 61, 16));
        textEditIP = new QTextEdit(Dialog);
        textEditIP->setObjectName(QStringLiteral("textEditIP"));
        textEditIP->setGeometry(QRect(110, 20, 281, 31));
        textEditPort = new QTextEdit(Dialog);
        textEditPort->setObjectName(QStringLiteral("textEditPort"));
        textEditPort->setGeometry(QRect(110, 70, 281, 31));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 16));
        pushButtonConnect = new QPushButton(Dialog);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(310, 120, 75, 23));
        textEditMesage = new QTextEdit(Dialog);
        textEditMesage->setObjectName(QStringLiteral("textEditMesage"));
        textEditMesage->setGeometry(QRect(110, 190, 281, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 61, 16));
        pushButtonSend = new QPushButton(Dialog);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(310, 240, 75, 23));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 270, 67, 17));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 240, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p>IP Address</p></body></html>", 0));
        textEditIP->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">127.0.0.1</p></body></html>", 0));
        textEditPort->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5002</p></body></html>", 0));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p>Port</p></body></html>", 0));
        pushButtonConnect->setText(QApplication::translate("Dialog", "Connect", 0));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p>Message</p></body></html>", 0));
        pushButtonSend->setText(QApplication::translate("Dialog", "Send", 0));
        label_4->setText(QApplication::translate("Dialog", "Client", 0));
        pushButton->setText(QApplication::translate("Dialog", "exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
