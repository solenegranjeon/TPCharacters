
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"

using namespace std; 

// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
	
  Yoshi*      character1 = new Yoshi(GREEN);
  Yoshi*      character2 = new Yoshi();
  Mario*			character3 = new Mario();
  Mario*			character4 = new Mario();
  
  std::vector<Character*> listCharacters;
  listCharacters.push_back(character1);
	listCharacters.push_back(character2);
	listCharacters.push_back(character3);
	listCharacters.push_back(character4);
    
  ofstream monFlux("speeds2.txt");
  monFlux << "Vitesses de Yoshi, Yoshi, Mario et Mario:"<< endl;
  monFlux << "Phase d'accélération:"<< endl;
  
  for(int t=0;t<10;t++){
		
		for(int i=0;i<4;i++){
			listCharacters[i]->Accelerate();
		}
		
		monFlux << "t=" << t <<" speeds:" << character1->speed() <<", " <<
		 character2->speed() <<", " << character3->speed() <<", " << 
		 character4->speed() << endl;
				
	}
	
	monFlux << "Phase de décélération :"<< endl;
  
	
	for(int t=0;t<10;t++){

		for(int i=0;i<4;i++){
			listCharacters[i]->Accelerate();
		}
		
		monFlux << "t=" << t <<" speeds:" << character1->speed() <<", " <<
		character2->speed() <<", " << character3->speed() <<", " << 
		character4->speed() << endl;
				
	}
	
  return 0;
}
