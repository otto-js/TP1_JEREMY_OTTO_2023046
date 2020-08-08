//
//  equipe.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-07.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//


#include <iostream>
#include "equipe.hpp"

  Equipe::Equipe() {
    for (int i = 0; i < 250; i++)
    this->listeEmployes[i] = nullptr;
    this->compteur = 0;
  }

  Equipe::~Equipe() {
    for (int i = 0; i < this->compteur; i++){
      delete listeEmployes[i];
    }
  }
  
//Je sais que je devrais redéfinir le constructeur par copie et l'opérateur d'assignation puisque ma classe a un tableau de pointeurs, mais je n'ai pas réussi.

 //J'ai essayé de redéfinir l'opérateur  car j'ai un tableau de pointeurs dans ma classe mais ça ne marche pas mon affaire
 /* Equipe Equipe::operator= (const Equipe& equipeACopier) {
		Equipe temp;
		for (int i = 0; i < equipeACopier.compteur; i++){
		temp.listeEmployes[i] = equipeACopier.listeEmployes[i];
		std::cout << temp.listeEmployes[i] << std::endl;
		 }
		 std::cout << " est passé par là" << std::endl;
		 return temp;
	}*/
  
  void Equipe::ajouteSyndique(std::string nom, int matricule, double salaireHoraire, double heuresTravaillees) {
    if (this->compteur < 250){
      listeEmployes[this->compteur] = new Syndique(nom, matricule, salaireHoraire, heuresTravaillees);
      this->compteur++;
    }
    else
      afficheTableauPleinMessage();
  }

  void Equipe::ajouteContractuel(std::string nom, int matricule, double montantContrat, double semainesTravaillees) {
    if (this->compteur < 250){
      listeEmployes[this->compteur] = new Contractuel(nom, matricule, montantContrat, semainesTravaillees);
      this->compteur++;
    }
    else
      afficheTableauPleinMessage();
  }

  void Equipe::ajoutePonctuel(std::string nom, int matricule, double montantPaye){
    if (this->compteur < 250){
      listeEmployes[this->compteur] = new Ponctuel(nom, matricule, montantPaye);
      this->compteur++;
    }
    else
      afficheTableauPleinMessage();
  }

  void Equipe::afficheTableauPleinMessage() {
	std::cout << "Limtite d'espace disponible dans le tableau atteinte" << std::endl;
  }

  void Equipe::afficherEmployesInfos(){
    
    double salaire = 0;
    double tps = 0;
    double tvq = 0;
    
    for (int i = 0; i < this->compteur; i++)
    {
      salaire = this->listeEmployes[i]->calculeSalaire();
      tps = Taxes::calculeTPS(salaire);
      tvq = Taxes::calculeTVQ(salaire);
      std::cout << this->listeEmployes[i]->getNom() << " " << this->listeEmployes[i]->getMatricule() << std::endl;
      std::cout << "\tPaie brute de " << salaire << " $" << std::endl;
      std::cout << "\tImpôts CA de " << tps << " $" << std::endl;
      std::cout << "\tImpôts QC de " << tvq << " $" << std::endl;
      std::cout << "\tPaie nette de " << salaire - (tps+tvq) << " $" << std::endl;
      std::cout << std::endl;
    }
  }

