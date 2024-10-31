/**
 * \file   BorneException.h
 * \brief  Implantation de la classe BorneException et de ses héritiers
 * \author Vianney Mathon
 * \date 17-04-2024
 */

#include "BorneException.h"
using namespace std;

/**
 * \brief Constructeur de la classe de base ContratException
 * \param p_raison une cdc représentant l'erreur
 */
BorneException::BorneException(const string& p_raison):runtime_error(p_raison){}

/**
 * \brief Constructeur de la classe héritière BorneDejaPresenteException
 * \param p_raison une cdc représentant l'erreur
 */
BorneDejaPresenteException::BorneDejaPresenteException(const string& p_raison):
    BorneException(p_raison){}

/**
 * \brief Constructeur de la classe héritière BorneAbsenteException
 * \param p_raison une cdc représentant l'erreur
 */
BorneAbsenteException::BorneAbsenteException(const string& p_raison):
    BorneException(p_raison){}

