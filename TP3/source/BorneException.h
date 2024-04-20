/**
 * \file   BorneException.h
 * \brief  Fichier contenant la déclaration de la classe BorneException et de ses héritiers
 * \author Vianney Mathon
 * \date 17-04-2024
 */

#ifndef BORNEEXCEPTION_H
#define BORNEEXCEPTION_H
#include <string>
#include <stdexcept>
/**
 * \class BorneException
 * \brief Classe de base des exceptions d'utilisation du registre de bornes.
 */
class BorneException: public std::runtime_error
{
  public:
    BorneException(const std::string& p_raison);
    
   private:
     std::string m_raison;
};

/**
 * \class BorneDejaPresenteException
 * \brief Classe pour la gestion des erreurs d'ajout de bornes.
 */
class BorneDejaPresenteException: public BorneException
{
    public:
      BorneDejaPresenteException(const std::string& p_raison);
};

/**
 * \class BorneAbsenteException
 * \brief Classe pour la gestion des erreurs de suppression de bornes.
 */
class BorneAbsenteException: public BorneException
{
    public: 
      BorneAbsenteException(const std::string& p_raison);
};

#endif /* BORNEEXCEPTION_H */

