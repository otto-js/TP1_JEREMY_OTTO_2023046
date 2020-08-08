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

class monMenu{

	public :
		//affichage options menu
		static void afficheMenu();
		
		//lecture informations fournies par utilisateur pour employés syndiqué, contractuel et ponctuel
		static void lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& nbrHeuresTravaillees);
		static void lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& nbrSemainesTravaillees);
		static void lireInfosPonctuel(std::string& nom, int& matricule, double& montantContrat);
		
	private :
		static void lireNomEtMatriculeEmploye(std::string& nom, int& matricule);
};
#endif 
