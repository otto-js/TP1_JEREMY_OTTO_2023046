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



 void monMenu::lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& heuresTravaillees){
	std::cout << "Entrez le nom de l'employé syndiqué : " << std::endl;
	std::cin >> nom;
	
	std::cout << "Entrez le matricule de l'employé syndiqué : " << std::endl;
	do {
		std::cin >> matricule;
		if (matricule < 10000 || matricule > 99999)
			std::cout << "Le matricule doit être compris entre 10000 et 99999" << std::endl;
	}while (matricule < 10000 || matricule > 99999);
	
	std::cout << "Entrez le salaire horaire de l'employé syndiqué : " << std::endl;
	std::cin >> salaireHoraire;
	
	std::cout << "Entrez le nombre d'heures travaillées de l'employé syndiqué : " << std::endl;
	std::cin >> heuresTravaillees;
	
	std::cout << std::endl;
}



 void monMenu::lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& semainesTravaillees){
	std::cout << "Entrez le nom de l'employé contractuel : " << std::endl;
	std::cin >> nom;
	
	std::cout << "Entrez le matricule de l'employé contractuel : " << std::endl;
	do {
		std::cin >> matricule;
		if (matricule < 10000 || matricule > 99999)
			std::cout << "Le matricule doit être compris entre 10000 et 99999" << std::endl;
	}while (matricule < 10000 || matricule > 99999);
	
	std::cout << "Entrez le montant du contrat de l'employé contractuel : " << std::endl;
	std::cin >> montantContrat;
	
	std::cout << "Entrez le nombre de semaines travaillées par l'employé contractuel : " << std::endl;
	std::cin >> semainesTravaillees;
	
	std::cout << std::endl;
}



 void monMenu::lireInfosPonctuel(std::string& nom, int& matricule, double& montantPaye){
	std::cout << "Entrez le nom de l'employé ponctuel : " << std::endl;
	std::cin >> nom;
	
	std::cout << "Entrez le matricule de l'employé ponctuel : " << std::endl;
	do {
		std::cin >> matricule;
		if (matricule < 10000 || matricule > 99999)
			std::cout << "Le matricule doit être compris entre 10000 et 99999" << std::endl;
	}while (matricule < 10000 || matricule > 99999);
	
	std::cout << "Entrez le montant payé à l'employé ponctuel : " << std::endl;
	std::cin >> montantPaye;
	
	std::cout << std::endl;
}



