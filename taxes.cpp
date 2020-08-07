//
//  taxes.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#include <stdio.h>
#include "taxes.hpp"

const double Taxes::TPS = 0.15;
const double Taxes::TVQ = 0.15;


	double Taxes::calculeTPS(double montantATaxer) {
		return montantATaxer * TPS;
	}
	double Taxes::calculeTVQ(double montantATaxer) {
		return montantATaxer * TVQ;
	}
//ces deux méthodes performent le même calcul mais sont séparées pour anticiper une modification des taux des taxes fédérales et provinciales
