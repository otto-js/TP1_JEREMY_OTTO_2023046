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

using namespace std;

class Employe {

	protected :
		string nom;
		int matricule;
	public :
	
		Employe(string nom, int matricule);
		
		virtual ~Employe();
		
		string getNom();
		int getMatricule();

		virtual double calculerSalaire() = 0;
};

#endif
