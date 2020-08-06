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
		const static double TAUX_TPS;
		const static double TAUX_TVQ;
	
		Employe(string nom, int matricule);
		
		virtual ~Employe();
		
		string getNom();
		int getMatricule();

		virtual double calculerSalaire() = 0;
		
		/*double calculerTPS(double salaireBrut);
		double calculerTVQ(double salaireBrut);
*/
};

#endif
