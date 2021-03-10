//mopacInput.h

/*********************************************************************/
/* This source code file is part of LQQCMMtools software project created 
 * by Igor Barden Grillo at Federal University of Paraíba. 
 * barden.igor@gmail.com ( Personal e-mail ) 
 * igor.grillo@acad.pucrs.br ( Academic e-mail )
 * quantum-chem.pro.br ( group site )
 * IgorChem ( Git Hub account )
 */ 

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */
 
/*********************************************************************/

#ifndef MOPAC_INPUT
#define MOPAC_INPUT

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "../include/global.h"
#include "../include/system.h"

class system;

//===========================
enum MopacMulti{
	SINGLET, DOUBLET, TRIPLET,
	QUARTET, QUINTET,	
	NumOFStates
};
/----------------------------
enum Hamiltonian{
	AM1, RM1, PM3, PM6,	PM7,	
	NumOfHamiltonians
};
/----------------------------
enum MopacRuntype{
	SCF, OPT,	
	NumOfRtyps
};

//==============================================
class mopac_input{
	public:
		unsigned int charge;
		bool COSMO;
		bool MOZYME;
		MopacMulti multiplicity;
		Hamiltonian method;
		MopacRuntype rtype;
		std::ostream out_file;
		std::vector<std::string> keywords;
		mopac_input();
		~mopac_input();
		mopac_input(const mopac_input& rhs) delete;
		mopac_input& operator=(const mopac_input& rhs) delete;
		void check_options();
		void init(int chg, unsigned int mpcty, std::string solvent, std::string lmo, std::string Method );
		void write_file( system& molecule,std::string out_name );
		void read_from_input(const char* inp_file, std::string out_name);
};
//////////////////////////////////////////////////

#endif