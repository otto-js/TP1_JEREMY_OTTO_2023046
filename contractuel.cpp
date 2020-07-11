//
//  contractuel.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-07-10.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include "contractuel.hpp"

	Contractuel::Contractuel(string nom, int matricule, int montantFixe, int nbreSemaines) : Employe(nom, matricule)
	{
		this->montantFixe = montantFixe;
		this->nbreSemaines = nbreSemaines;
	}

	Contractuel::~Contractuel()
	{
	
	}
	
			//implémenter la méthode calculerSalaire pour Syndique
		void calculerSalaire()
		{
		
		}
