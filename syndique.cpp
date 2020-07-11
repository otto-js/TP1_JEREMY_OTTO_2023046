//
//  syndique.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include <string>
#include "syndique.hpp"

using namespace std;


		Syndique::Syndique(string nom, int matricule, double salaireHoraire, double heuresTravaillees) : Employe(nom, matricule)
		{
			this->salaireHoraire = salaireHoraire;
			this->heuresTravaillees = heuresTravaillees;
		}
		
		Syndique::~Syndique()
		{
			
		}
		
		//implémenter la méthode calculerSalaire pour Syndique
		void calculerSalaire()
		{
		
		}
