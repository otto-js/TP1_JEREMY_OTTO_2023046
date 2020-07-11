//
//  ponctuel.hpp
//  TP1_JeremyLandier
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef __PONCTUEL_HPP__
#define __PONCTUEL_HPP__

#include <stdio.h>
#include "employe.hpp"

class Ponctuel : public Employe
{

	private :
		double montantUnique;

	public :
		Ponctuel(string nom, int matricule, double montantUnique);
		
		virtual ~Ponctuel();
		
		void calculerSalaire();

};

#endif
