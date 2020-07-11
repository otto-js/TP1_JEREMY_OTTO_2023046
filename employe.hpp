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
		int matricule; //doit être compris entre 10 000 et 99 999 -- comment on fait ça?
		
	public :
	
		Employe(string nom, int matricule);
		
		virtual ~Employe();

	virtual void calculerSalaire() = 0;


};

#endif
