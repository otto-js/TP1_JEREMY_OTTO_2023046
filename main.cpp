//
//  main.cpp
//  TP1_JeremyLandier
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include <iostream>
#include "employe.hpp"
#include "syndique.hpp"
#include "contractuel.hpp"
#include "ponctuel.hpp"
#include "taxes.hpp"
#include "menu.hpp"
#include "equipe.hpp"

void afficheTableauPleinMessage();
void verifieValeurChoix(int choix);

int main(int argc, const char * argv[]) {

	std::string nom = "";
	int matricule = 0;
	double salaire = 0;
	double tempsTravaille = 0;
	
	Equipe mesEmployes;
  
	int choix = 0;

	monMenu::afficheMenu();
	std::cin >> choix;
	verifieValeurChoix(choix);

	while (choix !=5)
	{
		switch (choix)
		{
			case 1 :
					monMenu::lireInfosSyndique(nom,  matricule,  salaire,  tempsTravaille);
					mesEmployes.ajouteSyndique(nom, matricule, salaire, tempsTravaille);
					break;
			
			case 2 :
					monMenu::lireInfosContractuel(nom, matricule, salaire, tempsTravaille);
					mesEmployes.ajouteContractuel(nom, matricule, salaire, tempsTravaille);
					break;
			
			case 3 :
					monMenu::lireInfosPonctuel(nom, matricule, salaire);
					mesEmployes.ajoutePonctuel(nom, matricule, salaire);
					break;
			
			case 4 :
					mesEmployes.afficherEmployesInfos();
            break;
			
			default :
					std::cout << "Choix inconnu" << std::endl;
		}

	monMenu::afficheMenu();
	std::cin >> choix;
	verifieValeurChoix(choix);
	}
	std::cout << "Au revoir" << std::endl;

	return 0;
}

void verifieValeurChoix(int choix){
	while(std::cin.fail()) {
	std::cout << "Veuillez choisir une option entre 1 et 5" << std::endl;
	std::cin.clear();
	std::cin.ignore(256, '\n');
	std::cin >> choix;
	}
}




