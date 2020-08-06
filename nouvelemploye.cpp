//
//  nouvelEmploye.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//
#include <iostream>
#include "nouvelemploye.hpp"


 void nouvelEmploye::lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& heuresTravaillees){
	std::cout << "Entrez le nom de l'employé syndiqué : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé syndiqué : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le salaire horaire de l'employé syndiqué : " << std::endl;
	std::cin >> salaireHoraire;
	std::cout << "Entrez le nombre d'heures travaillées de l'employé syndiqué : " << std::endl;
	std::cin >> heuresTravaillees;
	std::cout << std::endl;
}

 void nouvelEmploye::lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& semainesTravaillees){
	std::cout << "Entrez le nom de l'employé contractuel : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé contractuel : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le montant du contrat de l'employé contractuel : " << std::endl;
	std::cin >> montantContrat;
	std::cout << "Entrez le nombre de semaines travaillées par l'employé contractuel : " << std::endl;
	std::cin >> semainesTravaillees;
	std::cout << std::endl;
}

 void nouvelEmploye::lireInfosPonctuel(std::string& nom, int& matricule, double& montantPaye){
	std::cout << "Entrez le nom de l'employé ponctuel : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé ponctuel : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le montant payé à l'employé ponctuel : " << std::endl;
	std::cin >> montantPaye;
	std::cout << std::endl;
}


 void nouvelEmploye::ajouterSyndique(Employe* employes[], std::string nom, int matricule, double salaireHoraire, double nbrHeuresTravaillees, int compteur){
	employes[compteur] = new Syndique(nom, matricule, salaireHoraire, nbrHeuresTravaillees);
}

 void nouvelEmploye::ajouterContractuel(Employe* employes[], std::string nom, int matricule, double montantContrat, double nbrSemainesTravaillees, int compteur){
	employes[compteur] = new Contractuel(nom, matricule, montantContrat, nbrSemainesTravaillees);
}

 void nouvelEmploye::ajouterPonctuel(Employe* employes[], std::string nom, int matricule, double montantPaye, int compteur){
	employes[compteur] = new Ponctuel(nom, matricule, montantPaye);
}

 void nouvelEmploye::afficherEmployesInfos(Employe* employes[], int compteur){
	
	double salaire = 0;
	double tps = 0;
	double tvq = 0;
	
	for (int i = 0; i < compteur; i++)
	{
		salaire = employes[i]->calculerSalaire();
		tps = Taxes::calculeTPS(salaire);
		tvq = Taxes::calculeTVQ(salaire);
		std::cout << employes[i]->getNom() << " " << employes[i]->getMatricule() << std::endl;
		std::cout << "\tPaie brute de " << salaire << "$" << std::endl;
		std::cout << "\tImpôts CA de " << tps << "$" << std::endl;
		std::cout << "\tImpôts QC de " << tvq << "$" << std::endl;
		std::cout << "\tPaie nette de " << salaire - (tps+tvq) << "$" << std::endl;
		std::cout << std::endl;
	}
}

