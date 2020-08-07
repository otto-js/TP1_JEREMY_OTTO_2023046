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

void afficherEmployesInfos(Employe* employes[], int compteur);

int main(int argc, const char * argv[]) {

	int compteur = 0;
	std::string nom = "";
	int matricule = 0;
	double salaire = 0;
	double tempsTravaille = 0;
	
	Employe* employes[250];
	
	int choix = 0;
	
	monMenu::afficheMenu();
	std::cin >> choix;
	while (choix !=5)
	{
		switch (choix)
		{
			case 1 :
					if (compteur < 250 ){
						monMenu::lireInfosSyndique(nom,  matricule,  salaire,  tempsTravaille);
						employes[compteur] = new Syndique(nom, matricule, salaire, tempsTravaille);
						compteur++;
					}
					else
						std::cout << "Plus de place disponible dans le tableau" << std::endl;
					break;
			
			case 2 :
					if (compteur < 250 ){
						monMenu::lireInfosContractuel(nom, matricule, salaire, tempsTravaille);
						employes[compteur] = new Contractuel(nom, matricule, salaire, tempsTravaille);
						compteur++;
					}
					else
						std::cout << "Plus de place disponible dans le tableau" << std::endl;
					break;
			
			case 3 :
					if (compteur < 250 ){
						monMenu::lireInfosPonctuel(nom, matricule, salaire);
						employes[compteur] = new Ponctuel(nom, matricule, salaire);
						compteur++;
					}
					else
						std::cout << "Plus de place disponible dans le tableau" << std::endl;
					break;
			
			case 4 :
					afficherEmployesInfos(employes, compteur);
					break;
			
			default :
					std::cout << "Choix inconnu" << std::endl;
		}
	monMenu::afficheMenu();
	std::cin >> choix;
	}
	std::cout << "Au revoir" << std::endl;
	
	for (int i = 0; i <= compteur; i++)
		delete employes[i];

	return 0;
}

void afficherEmployesInfos(Employe* employes[], int compteur){
	
	double salaire = 0;
	double tps = 0;
	double tvq = 0;
	
	for (int i = 0; i < compteur; i++)
	{
		salaire = employes[i]->calculeSalaire();
		tps = Taxes::calculeTPS(salaire);
		tvq = Taxes::calculeTVQ(salaire);
		std::cout << employes[i]->getNom() << " " << employes[i]->getMatricule() << std::endl;
		std::cout << "\tPaie brute de " << salaire << " $" << std::endl;
		std::cout << "\tImpôts CA de " << tps << " $" << std::endl;
		std::cout << "\tImpôts QC de " << tvq << " $" << std::endl;
		std::cout << "\tPaie nette de " << salaire - (tps+tvq) << " $" << std::endl;
		std::cout << std::endl;
	}
}

