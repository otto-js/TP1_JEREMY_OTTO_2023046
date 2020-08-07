//
//  syndique.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include <iostream>
#include "syndique.hpp"

	Syndique::Syndique(std::string nom, int matricule, double salaireHoraire, double heuresTravaillees) : Employe(nom, matricule){
		this->salaireHoraire = salaireHoraire;
		this->heuresTravaillees = heuresTravaillees;
	}

	double Syndique::calculeSalaire(){
		return this->salaireHoraire * this->heuresTravaillees;
	}
