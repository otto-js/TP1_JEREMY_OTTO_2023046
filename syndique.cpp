//
//  syndique.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include <string>
#include <iostream>
#include "syndique.hpp"


		

Syndique::Syndique(string nom, int matricule, double salaireHoraire, double heuresTravaillees) : Employe(nom, matricule)
{
	this->salaireHoraire = salaireHoraire;
	this->heuresTravaillees = heuresTravaillees;
}


		
double Syndique::calculerSalaire()
{
		//employé payé à l'heure
		//paie pour une semaine définie par un taux horaire et un nombre d'heure travaillées pendant la dernière semaine
		return this->salaireHoraire * this->heuresTravaillees;
		}
