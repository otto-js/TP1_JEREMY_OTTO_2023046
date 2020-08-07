//
//  contractuel.hpp
//  TP1_JeremyLandier
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef __CONTRACTUEL_HPP__
#define __CONTRACTUEL_HPP__

#include <stdio.h>
#include "employe.hpp"

class Contractuel : public Employe
{

	private :
		int montantFixe,
			nbreSemaines;

	public :
		Contractuel(std::string nom, int matricule, int montantFixe, int nbreSemaines);
		
		double calculeSalaire();

};
#endif
