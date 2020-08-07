//
//  nouvelEmploye.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//
#include <iostream>
#include "menu.hpp"

void monMenu::afficheMenu(){
	std::cout << "Choisissez une option pour : " << std::endl;
	std::cout << "1. Ajouter un employé syndiqué" << std::endl;
	std::cout << "2. Ajouter un employé contractuel" << std::endl;
	std::cout << "3. Ajouter un employé ponctuel" << std::endl;
	std::cout << "4. Afficher la paye des employés" << std::endl;
	std::cout << "5. Quitter" << std::endl;
}

void monMenu::lireNomEtMatriculeEmploye(std::string& nom, int& matricule){
	std::cout << "Entrez le nom de l'employé  : " << std::endl;
	std::cin >> nom;
	
	std::cout << "Entrez le matricule de l'employé : " << std::endl;
	do {
		std::cin >> matricule;
		if (matricule < 10000 || matricule > 99999)
			std::cout << "Le matricule doit être compris entre 10000 et 99999" << std::endl;
	}while (matricule < 10000 || matricule > 99999);
}

 void monMenu::lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& heuresTravaillees){
	lireNomEtMatriculeEmploye(nom, matricule);
	
	std::cout << "Entrez le salaire horaire : " << std::endl;
	std::cin >> salaireHoraire;
	
	std::cout << "Entrez le nombre d'heures travaillées : " << std::endl;
	std::cin >> heuresTravaillees;
	
	std::cout << std::endl;
}

 void monMenu::lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& semainesTravaillees){
	lireNomEtMatriculeEmploye(nom, matricule);
	
	std::cout << "Entrez le montant total du contrat : " << std::endl;
	std::cin >> montantContrat;
	
	std::cout << "Entrez le nombre de semaines travaillées : " << std::endl;
	std::cin >> semainesTravaillees;
	
	std::cout << std::endl;
}

 void monMenu::lireInfosPonctuel(std::string& nom, int& matricule, double& montantPaye){
	lireNomEtMatriculeEmploye(nom, matricule);
	
	std::cout << "Entrez le montant total payé : " << std::endl;
	std::cin >> montantPaye;
	
	std::cout << std::endl;
}



