//
//  employe.hpp
//  TP1_JeremyLandier
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef __EMPLOYE_HPP__
#define __EMPLOYE_HPP__

#include <stdio.h>
#include <string>

class Employe {

	protected :
		std::string nom;
		int matricule;
	public :
	
		Employe(std::string nom, int matricule);
		
		virtual ~Employe();
		
		std::string getNom() const;
		int getMatricule() const;

		virtual double calculeSalaire() = 0;
};
#endif
