//main.cpp

/*********************************************************************/
/* This source code file is part of LQQCMModels software project created 
 * by Igor Barden Grillo at Federal University of Paraíba. 
 * barden.igor@gmail.com ( Personal e-mail ) 
 * igor.grillo@acad.pucrs.br ( Academic e-mail )
 * quantum-chem.pro.br ( group site )
 * IgorChem ( Git Hub account )
 */ 

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */
 
/***********************************/

#include <iostream>
#include "../include/interface.h"

/***********************************/
int main(int argc, char** argv){
	interface program(argc,argv);
	//program.test();
	program.run();
	return 0;	
}
//======================================= 