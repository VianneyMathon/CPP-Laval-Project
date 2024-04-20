/********************************************************************************
** Form generated from reading UI file 'ajoutBorneStationnement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTBORNESTATIONNEMENT_H
#define UI_AJOUTBORNESTATIONNEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ajoutBorneStationnement
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *idvp;
    QLineEdit *nomtopo;
    QLineEdit *coterue;
    QSpinBox *id;
    QSpinBox *longitude;
    QSpinBox *latitude;
    QSpinBox *numborne;
    QPushButton *pushButton;

    void setupUi(QDialog *ajoutBorneStationnement)
    {
        if (ajoutBorneStationnement->objectName().isEmpty())
            ajoutBorneStationnement->setObjectName(QString::fromUtf8("ajoutBorneStationnement"));
        ajoutBorneStationnement->resize(526, 462);
        label = new QLabel(ajoutBorneStationnement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        label_2 = new QLabel(ajoutBorneStationnement);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 211, 16));
        label_3 = new QLabel(ajoutBorneStationnement);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 141, 16));
        label_4 = new QLabel(ajoutBorneStationnement);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 71, 16));
        label_5 = new QLabel(ajoutBorneStationnement);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 230, 61, 16));
        label_6 = new QLabel(ajoutBorneStationnement);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 280, 141, 16));
        label_7 = new QLabel(ajoutBorneStationnement);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 330, 101, 16));
        idvp = new QLineEdit(ajoutBorneStationnement);
        idvp->setObjectName(QString::fromUtf8("idvp"));
        idvp->setGeometry(QRect(310, 70, 181, 28));
        nomtopo = new QLineEdit(ajoutBorneStationnement);
        nomtopo->setObjectName(QString::fromUtf8("nomtopo"));
        nomtopo->setGeometry(QRect(310, 120, 181, 28));
        coterue = new QLineEdit(ajoutBorneStationnement);
        coterue->setObjectName(QString::fromUtf8("coterue"));
        coterue->setGeometry(QRect(310, 320, 181, 28));
        id = new QSpinBox(ajoutBorneStationnement);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(310, 20, 61, 26));
        longitude = new QSpinBox(ajoutBorneStationnement);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setGeometry(QRect(310, 170, 61, 26));
        latitude = new QSpinBox(ajoutBorneStationnement);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        latitude->setGeometry(QRect(310, 220, 61, 26));
        numborne = new QSpinBox(ajoutBorneStationnement);
        numborne->setObjectName(QString::fromUtf8("numborne"));
        numborne->setGeometry(QRect(310, 270, 61, 26));
        pushButton = new QPushButton(ajoutBorneStationnement);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 390, 90, 28));

        retranslateUi(ajoutBorneStationnement);
        QObject::connect(pushButton, SIGNAL(clicked()), ajoutBorneStationnement, SLOT(valider()));

        QMetaObject::connectSlotsByName(ajoutBorneStationnement);
    } // setupUi

    void retranslateUi(QDialog *ajoutBorneStationnement)
    {
        ajoutBorneStationnement->setWindowTitle(QCoreApplication::translate("ajoutBorneStationnement", "ajoutBorneStationnement", nullptr));
        label->setText(QCoreApplication::translate("ajoutBorneStationnement", "identifiant :", nullptr));
        label_2->setText(QCoreApplication::translate("ajoutBorneStationnement", "identifiant de la voie publique :", nullptr));
        label_3->setText(QCoreApplication::translate("ajoutBorneStationnement", "nom topographique :", nullptr));
        label_4->setText(QCoreApplication::translate("ajoutBorneStationnement", "longitude :", nullptr));
        label_5->setText(QCoreApplication::translate("ajoutBorneStationnement", "latitude :", nullptr));
        label_6->setText(QCoreApplication::translate("ajoutBorneStationnement", "Num\303\251ro de borne :", nullptr));
        label_7->setText(QCoreApplication::translate("ajoutBorneStationnement", "C\303\264t\303\251 de la rue :", nullptr));
        pushButton->setText(QCoreApplication::translate("ajoutBorneStationnement", "VALIDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajoutBorneStationnement: public Ui_ajoutBorneStationnement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTBORNESTATIONNEMENT_H
