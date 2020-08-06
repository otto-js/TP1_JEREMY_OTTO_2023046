//
//  nouvelEmploye.hpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef nouvelEmploye_hpp
#define nouvelEmploye_hpp

#include <stdio.h>
#include "employe.hpp"
#include "syndique.hpp"
#include "contractuel.hpp"
#include "ponctuel.hpp"
#include "taxes.hpp"

class nouvelEmploye{

public :
	static void afficheMenu();
	static void lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& nbrHeuresTravaillees);
	static void lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& nbrSemainesTravaillees);
	static void lireInfosPonctuel(std::string& nom, int& matricule, double& montantContrat);
	static void ajouterSyndique(Employe* employes[], std::string nom, int matricule, double salaireHoraire, double nbrHeuresTravaillees, int compteur);
	static void ajouterContractuel(Employe* employes[], std::string nom, int matricule, double montantContrat, double nbrSemainesTravaillees, int compteur);
	static void ajouterPonctuel(Employe* employes[], std::string nom, int matricule, double montantPaye, int compteur);
	static void afficherEmployesInfos(Employe* employes[], int compteur);

};
#endif 
