// Ryan Dennis
// CS 4301
// PDA
 
#include <pda.h>
 
using namespace std;
 
PDA::PDA()
{
  name = "Ryan Dennis";
  labNumber = 6;
  description = "{a^(n+1)b^2n | n >= 0}";
}
 
void PDA::initializeMachine()
{
  //5 is our default fail state:
  
  //State 1:
  //If the string is empty we fail:
  //machine.insert(pair<uint, TableEntry>(1, TableEntry('@', '%', " *", 5))); 
  //If it starts with a we go to 2:
  //machine.insert(pair<uint, TableEntry>(1, TableEntry('*', 'a', "+a", 2)));
  
  //State 2:
  /*int maxState = 3;
  for (int i = 2; i < maxState; i++) {
	machine.insert(pair<uint, TableEntry>(i, TableEntry('*', 'a', "+a", 2)));
	machine.insert(pair<uint, TableEntry>(i, TableEntry('a', 'b', "-a", 3)));
  }*/
  //If the string is empty we pass:
  //machine.insert(pair<uint, TableEntry>(2, TableEntry('*', 'a', "+a", 2)));
  //machine.insert(pair<uint, TableEntry>(2, TableEntry('a', 'b', "-a", 3)));
  
  //machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
  //machine.insert(pair<uint, TableEntry>(3, TableEntry('@', '%', " *", 0)));
  
  
	machine.insert(pair<uint, TableEntry>(1, TableEntry('@', 'a', " *", 2)));
	
	machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'a', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(2, TableEntry('@', '%', " *", 0)));
	
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', " *", 4)));
		
	machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'b', "-a", 5)));
	
    machine.insert(pair<uint, TableEntry>(5, TableEntry('a', 'b', " *", 4)));
	machine.insert(pair<uint, TableEntry>(5, TableEntry('@', '%', " *", 0)));
	
  /**
   machine.insert(pair<uint, TableEntry>(1, TableEntry('@', '%', " *", 0)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('*', 'a', "+a", 2)));
  
  machine.insert(pair<uint, TableEntry>(2, TableEntry('*', 'a', "+a", 2)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('a', 'b', "-a", 3)));
  
  machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('@', '%', " *", 0)));
  
  */
}