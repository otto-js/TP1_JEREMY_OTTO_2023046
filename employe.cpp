//
//  employe.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include "employe.hpp"
#include <iostream>

	Employe::Employe(std::string nom, int matricule){
		this->nom = nom;
		this->matricule = matricule;
	}
	
	Employe::~Employe(){}
	
	std::string Employe::getNom()
	{ return this->nom;}
	
	int Employe::getMatricule()
	{ return this->matricule;}
	
	
	



