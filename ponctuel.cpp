//
//  ponctuel.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include "ponctuel.hpp"
#include <iostream>


	Ponctuel::Ponctuel(std::string nom, int matricule, double montantUnique) : Employe(nom, matricule){
		this->montantUnique = montantUnique;
	}
	
	double Ponctuel::calculeSalaire(){
		return montantUnique;
	}
