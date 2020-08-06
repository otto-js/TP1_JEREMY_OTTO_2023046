//
//  syndique.hpp
//  TP1_JeremyLandier
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef __SYNDIQUE_HPP__
#define __SYNDIQUE_HPP__

#include <stdio.h>
#include "employe.hpp"

class Syndique : public Employe
{

	private :
		double salaireHoraire,
				heuresTravaillees;
	
	public :
		Syndique(string nom, int matricule, double salaireHoraire, double heuresTravaillees);
		
		virtual ~Syndique();

		double calculerSalaire();

};

#endif
