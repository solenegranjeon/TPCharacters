
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>

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
  Yoshi*      character2 = new Yoshi(*character1);
  Mario*			character3 = new Mario();
  Mario*			character4 = new Mario(*character3);
  
  //Il est possible de faire un vecteur ou une liste
  //Avec un vecteur on accède aux élèments avec []
  //Avec la liste on peut utiliser auto
  
  std::list<Character*> listCharacters;
  listCharacters.push_back(character1);
	listCharacters.push_back(character2);
	listCharacters.push_back(character3);
	listCharacters.push_back(character4);
    
  ofstream monFlux("speeds2.txt");
  monFlux << "Vitesses de Yoshi, Yoshi, Mario et Mario:"<< endl;
  
  for(int t=0;t<10;t++){
		
		//~ //Using a vector
		//~ for(int i=0;i<4;i++){
			//~ listCharacters[i]->Accelerate();
		//~ }
		
		//~ //Using a vector and iterators: it is a pointer to the character pointer
		//~ for(std::vector<Character*>::iterator it = listCharacters.begin() ; it != listCharacters.end(); ++it){
			//~ (*it)->Accelerate();
		//~ }
		
		//Using a list
		for(auto ch: listCharacters){
			ch->Accelerate();
		}
		
		monFlux << t << " " << character1->speed()<< " " << character2->speed() 
		<< " " << character3->speed() << " " << character4->speed() << endl;
				
	}
	
	for(int t=0;t<10;t++){

		//~ //Using a vector
		//~ for(int i=0;i<4;i++){
			//~ listCharacters[i]->Break();
		//~ }
		
		//~ //Using a vector and iterators: it is a pointer to the character pointer
		//~ for(std::vector<Character*>::iterator it = listCharacters.begin() ; it != listCharacters.end(); ++it){
			//~ (*it)->Break();
		//~ }
		
		//Using a list
		for(auto ch: listCharacters){
			ch->Break();
		}
		
		monFlux << t << " " << character1->speed()<< " " << character2->speed() 
		<< " " << character3->speed() << " " << character4->speed() << endl;
				
	}
	
  return 0;
}
