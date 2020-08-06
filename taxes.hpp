//
//  taxes.h
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//

#ifndef taxes_h
#define taxes_h

class Taxes {

	private :
		static const double TPS;
		static const double TVQ;
		
	public :
		static double calculeTPS(double montantATaxer);
		static double calculeTVQ(double montantATaxer);

};


#endif /* taxes_h */
