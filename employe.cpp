//
//  employe.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include "employe.hpp"
#include <iostream>

	const double Employe::TAUX_TPS = 0.15;
	const double Employe::TAUX_TVQ = 0.15;

	Employe::Employe(string nom, int matricule)
	{
		this->nom = nom;
		this->matricule = matricule;
	}
	
	Employe::~Employe()
	{
		std::cout << "effacé employé" << std::endl;
	}
	
	string Employe::getNom() { return this->nom;}
	
	int Employe::getMatricule() { return this->matricule;}
	
	
	/*//Les deux opérations sont faites avec des taux égaux mais séparées si les taux venaient à être différent dans le futur
	double Employe::calculerTPS(double salaireBrut){
		return salaireBrut * TAUX_TPS;
	}
	double Employe::calculerTVQ(double salaireBrut){
		return salaireBrut * TAUX_TVQ;
	}*/
	



