// Ryan Dennis
// CS 4301
// PDA
 
#include <pda.h>
 
using namespace std;
 
PDA::PDA()
{
  name = "Ryan Dennis";
  labNumber = 7;
  description = "{w | w in {a, b}* and one more a's than b's}";
}
 
void PDA::initializeMachine()
{
	//machine.insert(pair<uint, TableEntry>(1, TableEntry('@', 'a', " *", 2)));
	//machine.insert(pair<uint, TableEntry>(1, TableEntry('@', 'b', " *", 5)));
		
	//machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'a', "+a", 3)));
	//machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'b', "+a", 4)));
	//machine.insert(pair<uint, TableEntry>(2, TableEntry('@', '%', " *", 0)));
	
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "+a", 3)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'a', "+a", 3)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'b', "-a", 3)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('@', '%', " *", 0)));
	
	//machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'a', "-a", 4)));
	//machine.insert(pair<uint, TableEntry>(4, TableEntry('@', '%', " *", 0)));
	
	//machine.insert(pair<uint, TableEntry>(5, TableEntry('@', 'a', "+a", 4)));

	//machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "+a", 10)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 10)));
	
	
	//machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'b', "+a", 4)));
	//machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'a', "-a", 10)));
	
	//1 - b
	//machine.insert(pair<uint, TableEntry>(5, TableEntry('@', 'a', "+a", 5)));
	//machine.insert(pair<uint, TableEntry>(5, TableEntry('a', 'a', "-a", 10)));
		
	//machine.insert(pair<uint, TableEntry>(10, TableEntry('a', 'b', "-a", 10)));
	//machine.insert(pair<uint, TableEntry>(10, TableEntry('@', '%', " *", 0)));
	
	
	// a
	machine.insert(pair<uint, TableEntry>(1, TableEntry('@', 'a', " *", 2)));
	machine.insert(pair<uint, TableEntry>(1, TableEntry('@', 'b', " *", 6)));
	
	machine.insert(pair<uint, TableEntry>(6, TableEntry('@', 'a', "+a", 4)));
	machine.insert(pair<uint, TableEntry>(6, TableEntry('@', 'b', "+a", 7)));
	machine.insert(pair<uint, TableEntry>(7, TableEntry('a', 'a', "+a", 5)));
		
	machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'a', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(2, TableEntry('@', '%', " *", 0)));
	machine.insert(pair<uint, TableEntry>(2, TableEntry('@', 'b', "+a", 4)));
	
	
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'a', "+a", 3))); // for ab - ^
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'b', "+a", 3)));
	//machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', '%', " *", 0)));
	
	//for b - a
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'b', "+a", 4)));
	machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'a', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'b', "+a", 5)));
	
	//an a that - for itself
	machine.insert(pair<uint, TableEntry>(5, TableEntry('a', 'a', "-a", 5)));
	machine.insert(pair<uint, TableEntry>(5, TableEntry('@', '%', " *", 0)));
	
	
	/*machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'a', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', 'b', "+a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "-a", 3)));
	machine.insert(pair<uint, TableEntry>(3, TableEntry('@', '%', " *", 0)));*/
	
	
	
}