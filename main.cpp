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
#include "nouvelemploye.hpp"


private void afficheMenu();


int main(int argc, const char * argv[]) {

	int compteur = 0;
	std::string nom = "";
	int matricule = 0;
	double salaire = 0;
	double tempsTravaille = 0;
	
	Employe* employes[250];
	
	int choix = 0;
	
	afficheMenu();
	std::cin >> choix;
	while (choix !=5)
	{
		switch (choix)
		{
			case 1 :
					nouvelEmploye::lireInfosSyndique(nom,  matricule,  salaire,  tempsTravaille);
					nouvelEmploye::ajouterSyndique(employes, nom, matricule, salaire, tempsTravaille, compteur);
					compteur++;
			break;
			case 2 :
					nouvelEmploye::lireInfosContractuel(nom, matricule, salaire, tempsTravaille);
					nouvelEmploye::ajouterContractuel(employes, nom, matricule, salaire, tempsTravaille, compteur);
					compteur++;
			break;
			case 3 :
					nouvelEmploye::lireInfosPonctuel(nom, matricule, salaire);
					nouvelEmploye::ajouterPonctuel(employes, nom, matricule, salaire, compteur);
					compteur++;
			break;
			case 4 :
					nouvelEmploye::afficherEmployesInfos(employes, compteur);
			break;
			default :
					std::cout << "Choix inconnu" << std::endl;
		}
	afficheMenu();
	std::cin >> choix;
	}
	std::cout << "Au revoir" << std::endl;
	
	for (int i = 0; i <= compteur; i++)
		delete employes[i];

	return 0;
	
}

private void afficheMenu(){
	std::cout << "Choisissez une option pour : " << std::endl;
	std::cout << "1. Ajouter un employé syndiqué" << std::endl;
	std::cout << "2. Ajouter un employé contractuel" << std::endl;
	std::cout << "3. Ajouter un employé ponctuel" << std::endl;
	std::cout << "4. afficher le résultat de la paye des employés" << std::endl;
	std::cout << "5. Quitter" << std::endl;
}


