/********************************************************************************
** Form generated from reading UI file 'supprimerBorne.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERBORNE_H
#define UI_SUPPRIMERBORNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_supprimerBorne
{
public:
    QLabel *label;
    QSpinBox *id;
    QPushButton *pushButton;

    void setupUi(QDialog *supprimerBorne)
    {
        if (supprimerBorne->objectName().isEmpty())
            supprimerBorne->setObjectName(QString::fromUtf8("supprimerBorne"));
        supprimerBorne->resize(400, 300);
        label = new QLabel(supprimerBorne);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 130, 221, 16));
        id = new QSpinBox(supprimerBorne);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(260, 130, 91, 26));
        pushButton = new QPushButton(supprimerBorne);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 240, 90, 28));

        retranslateUi(supprimerBorne);
        QObject::connect(pushButton, SIGNAL(clicked()), supprimerBorne, SLOT(accept()));

        QMetaObject::connectSlotsByName(supprimerBorne);
    } // setupUi

    void retranslateUi(QDialog *supprimerBorne)
    {
        supprimerBorne->setWindowTitle(QCoreApplication::translate("supprimerBorne", "supprimerBorne", nullptr));
        label->setText(QCoreApplication::translate("supprimerBorne", "Identifiant de la borne \303\240 supprimer :", nullptr));
        pushButton->setText(QCoreApplication::translate("supprimerBorne", "VALIDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supprimerBorne: public Ui_supprimerBorne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERBORNE_H
