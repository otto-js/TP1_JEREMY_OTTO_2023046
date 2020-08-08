//
//  equipe.hpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-07.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef equipe_hpp
#define equipe_hpp

#include <stdio.h>
#include "employe.hpp"
#include "syndique.hpp"
#include "contractuel.hpp"
#include "ponctuel.hpp"
#include "taxes.hpp"

class Equipe {

private :
  Employe* listeEmployes[250];
  int compteur;

public :
  Equipe();
  //Equipe operator=(const Equipe& equipeACopier) ;
  ~Equipe();
  

  void ajouteSyndique(std::string nom, int matricule, double salaireHoraire, double heuresTravaillees);

  void ajouteContractuel(std::string nom, int matricule, double montantContrat, double semainesTravaillees);

  void ajoutePonctuel(std::string nom, int matricule, double montantPaye);

  void afficheTableauPleinMessage();

  void afficherEmployesInfos();
  
};

#endif /* equipe_hpp */
