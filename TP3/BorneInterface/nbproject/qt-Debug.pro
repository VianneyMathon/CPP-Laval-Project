# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = BorneInterface
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += /home/etudiant/Documents/tp3-integration-equipe-212/TP3/BorneInterface/fenetrePrincipale.cpp ajoutBorneFontaine.cpp ajoutBorneStationnement.cpp main.cpp supprimerBorne.cpp
HEADERS += /home/etudiant/Documents/tp3-integration-equipe-212/TP3/BorneInterface/fenetrePrincipale.h ajoutBorneFontaine.h ajoutBorneStationnement.h supprimerBorne.h
FORMS += /home/etudiant/Documents/tp3-integration-equipe-212/TP3/BorneInterface/fenetrePrincipale.ui ajoutBorneFontaine.ui ajoutBorneStationnement.ui supprimerBorne.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += ../source 
LIBS += ../source/dist/Debug/GNU-Linux/libsource.a  
