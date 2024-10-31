/********************************************************************************
** Form generated from reading UI file 'ajoutBorneFontaine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTBORNEFONTAINE_H
#define UI_AJOUTBORNEFONTAINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ajoutBorneFontaine
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
    QLineEdit *ville;
    QLineEdit *arrondissement;
    QSpinBox *id;
    QSpinBox *longitude;
    QSpinBox *latitude;
    QPushButton *pushButton;

    void setupUi(QDialog *ajoutBorneFontaine)
    {
        if (ajoutBorneFontaine->objectName().isEmpty())
            ajoutBorneFontaine->setObjectName(QString::fromUtf8("ajoutBorneFontaine"));
        ajoutBorneFontaine->resize(526, 480);
        label = new QLabel(ajoutBorneFontaine);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 81, 16));
        label_2 = new QLabel(ajoutBorneFontaine);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 201, 16));
        label_3 = new QLabel(ajoutBorneFontaine);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 141, 16));
        label_4 = new QLabel(ajoutBorneFontaine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 190, 81, 16));
        label_5 = new QLabel(ajoutBorneFontaine);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 240, 71, 16));
        label_6 = new QLabel(ajoutBorneFontaine);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 290, 58, 16));
        label_7 = new QLabel(ajoutBorneFontaine);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 340, 131, 16));
        idvp = new QLineEdit(ajoutBorneFontaine);
        idvp->setObjectName(QString::fromUtf8("idvp"));
        idvp->setGeometry(QRect(240, 80, 211, 28));
        nomtopo = new QLineEdit(ajoutBorneFontaine);
        nomtopo->setObjectName(QString::fromUtf8("nomtopo"));
        nomtopo->setGeometry(QRect(240, 130, 211, 28));
        ville = new QLineEdit(ajoutBorneFontaine);
        ville->setObjectName(QString::fromUtf8("ville"));
        ville->setGeometry(QRect(240, 280, 211, 28));
        arrondissement = new QLineEdit(ajoutBorneFontaine);
        arrondissement->setObjectName(QString::fromUtf8("arrondissement"));
        arrondissement->setGeometry(QRect(240, 330, 211, 28));
        id = new QSpinBox(ajoutBorneFontaine);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(240, 30, 81, 26));
        longitude = new QSpinBox(ajoutBorneFontaine);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setGeometry(QRect(240, 180, 81, 26));
        latitude = new QSpinBox(ajoutBorneFontaine);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        latitude->setGeometry(QRect(240, 230, 81, 26));
        pushButton = new QPushButton(ajoutBorneFontaine);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 420, 90, 28));

        retranslateUi(ajoutBorneFontaine);
        QObject::connect(pushButton, SIGNAL(clicked()), ajoutBorneFontaine, SLOT(valider()));

        QMetaObject::connectSlotsByName(ajoutBorneFontaine);
    } // setupUi

    void retranslateUi(QDialog *ajoutBorneFontaine)
    {
        ajoutBorneFontaine->setWindowTitle(QCoreApplication::translate("ajoutBorneFontaine", "ajoutBorneFontaine", nullptr));
        label->setText(QCoreApplication::translate("ajoutBorneFontaine", "Identifiant :", nullptr));
        label_2->setText(QCoreApplication::translate("ajoutBorneFontaine", "Identifiant de la voie publique :", nullptr));
        label_3->setText(QCoreApplication::translate("ajoutBorneFontaine", "Nom topographique :", nullptr));
        label_4->setText(QCoreApplication::translate("ajoutBorneFontaine", "Longitude :", nullptr));
        label_5->setText(QCoreApplication::translate("ajoutBorneFontaine", "Latitude :", nullptr));
        label_6->setText(QCoreApplication::translate("ajoutBorneFontaine", "Ville :", nullptr));
        label_7->setText(QCoreApplication::translate("ajoutBorneFontaine", "Arrondissement :", nullptr));
        pushButton->setText(QCoreApplication::translate("ajoutBorneFontaine", "VALIDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajoutBorneFontaine: public Ui_ajoutBorneFontaine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTBORNEFONTAINE_H
