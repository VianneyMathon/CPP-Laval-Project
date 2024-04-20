/********************************************************************************
** Form generated from reading UI file 'fenetrePrincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetrePrincipale
{
public:
    QAction *actionSupprimer_borne;
    QAction *actionQuitter;
    QAction *actionBorne_fontaine;
    QAction *actionBorne_de_stationnement;
    QWidget *centralwidget;
    QTextEdit *affichage;
    QMenuBar *menubar;
    QMenu *menuOp_rations;
    QMenu *menuAjouter_borne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fenetrePrincipale)
    {
        if (fenetrePrincipale->objectName().isEmpty())
            fenetrePrincipale->setObjectName(QString::fromUtf8("fenetrePrincipale"));
        fenetrePrincipale->resize(800, 600);
        actionSupprimer_borne = new QAction(fenetrePrincipale);
        actionSupprimer_borne->setObjectName(QString::fromUtf8("actionSupprimer_borne"));
        actionQuitter = new QAction(fenetrePrincipale);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionBorne_fontaine = new QAction(fenetrePrincipale);
        actionBorne_fontaine->setObjectName(QString::fromUtf8("actionBorne_fontaine"));
        actionBorne_de_stationnement = new QAction(fenetrePrincipale);
        actionBorne_de_stationnement->setObjectName(QString::fromUtf8("actionBorne_de_stationnement"));
        centralwidget = new QWidget(fenetrePrincipale);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        affichage = new QTextEdit(centralwidget);
        affichage->setObjectName(QString::fromUtf8("affichage"));
        affichage->setGeometry(QRect(0, 0, 531, 571));
        fenetrePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fenetrePrincipale);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuOp_rations = new QMenu(menubar);
        menuOp_rations->setObjectName(QString::fromUtf8("menuOp_rations"));
        menuAjouter_borne = new QMenu(menuOp_rations);
        menuAjouter_borne->setObjectName(QString::fromUtf8("menuAjouter_borne"));
        fenetrePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(fenetrePrincipale);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        fenetrePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuOp_rations->menuAction());
        menuOp_rations->addSeparator();
        menuOp_rations->addAction(menuAjouter_borne->menuAction());
        menuOp_rations->addAction(actionSupprimer_borne);
        menuOp_rations->addAction(actionQuitter);
        menuAjouter_borne->addAction(actionBorne_fontaine);
        menuAjouter_borne->addAction(actionBorne_de_stationnement);

        retranslateUi(fenetrePrincipale);
        QObject::connect(actionQuitter, SIGNAL(triggered()), fenetrePrincipale, SLOT(close()));
        QObject::connect(actionBorne_fontaine, SIGNAL(triggered()), fenetrePrincipale, SLOT(dialogAddFontaine()));
        QObject::connect(actionBorne_de_stationnement, SIGNAL(triggered()), fenetrePrincipale, SLOT(dialogAddStationnement()));
        QObject::connect(actionSupprimer_borne, SIGNAL(triggered()), fenetrePrincipale, SLOT(dialogSuppBorne()));

        QMetaObject::connectSlotsByName(fenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *fenetrePrincipale)
    {
        fenetrePrincipale->setWindowTitle(QCoreApplication::translate("fenetrePrincipale", "fenetrePrincipale", nullptr));
        actionSupprimer_borne->setText(QCoreApplication::translate("fenetrePrincipale", "Supprimer borne", nullptr));
        actionQuitter->setText(QCoreApplication::translate("fenetrePrincipale", "Quitter", nullptr));
        actionBorne_fontaine->setText(QCoreApplication::translate("fenetrePrincipale", "Borne fontaine", nullptr));
        actionBorne_de_stationnement->setText(QCoreApplication::translate("fenetrePrincipale", "Borne de stationnement", nullptr));
        affichage->setHtml(QCoreApplication::translate("fenetrePrincipale", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Bienvenue dans l'interface d'\303\251dition de registre de bornes.</span></p></body></html>", nullptr));
        menuOp_rations->setTitle(QCoreApplication::translate("fenetrePrincipale", "Op\303\251rations", nullptr));
        menuAjouter_borne->setTitle(QCoreApplication::translate("fenetrePrincipale", "Ajouter borne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fenetrePrincipale: public Ui_fenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
