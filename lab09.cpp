// Ryan Dennis
// CS 4301
// Lab 09
 
#include <turing.h>
 
using namespace std;
 
Turing::Turing()
{
  name = "Ryan Dennis";
  labNumber = 9;
  description = "{(x=, x=a^ib^jc^k) | x is in {a,b,c}*,";
  description += "\n          ";
  description += "i = # of a's in x,";
  description += "\n          ";
  description += "j = # of b's in x, and";
  description += "\n          ";
  description += "k = # of c's in x}";
}
 
void Turing::initializeMachine()
{
  /*
   *-------------------------------------------------------next state
   *-----------------------------------------------------------------move  |
   *--------------------------------------------------write character  |   | 
   *----------------------------------------------read character  |    |   |
   *--------------------------------------------current state  |   |    |   | 	*/
  /*machine.insert(pair<uint, TableEntry>(1, TableEntry(' ', ' ',  1, 1)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('x', ' ', -1, 2)));
  
  machine.insert(pair<uint, TableEntry>(2, TableEntry(' ', 'x', -1, 3)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('x', 'x', -1, 2)));
  
  machine.insert(pair<uint, TableEntry>(3, TableEntry(' ', 'x',  1, 4)));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('x', 'x', -1, 3)));
  
  machine.insert(pair<uint, TableEntry>(4, TableEntry(' ', ' ',  1, 5)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('x', 'x',  1, 4)));

  machine.insert(pair<uint, TableEntry>(5, TableEntry(' ', ' ',  0, 0)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('x', ' ', -1, 2)));*/
  
  //Trim the ~
  machine.insert(pair<uint, TableEntry>(1, TableEntry(' ', ' ',  1, 1)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('x', 'x', 2, 2)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('a', 'a', 2, 3)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('b', 'b', 2, 4)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('c', 'c', 1, 10)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry(' ', 'x',  -1, 0)));
  machine.insert(pair<uint, TableEntry>(3, TableEntry(' ', 'a',  -1, 0)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry(' ', 'b',  -1, 0)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry(' ', 'c',  -1, 0)));
  machine.insert(pair<uint, TableEntry>(10, TableEntry('b', 'b', 1, 11)));
  machine.insert(pair<uint, TableEntry>(10, TableEntry('b', 'b', 1, 11)));
  machine.insert(pair<uint, TableEntry>(11, TableEntry('a', 'a', 2, 13)));
  machine.insert(pair<uint, TableEntry>(13, TableEntry(' ', 'a',  1, 14)));
  machine.insert(pair<uint, TableEntry>(14, TableEntry(' ', 'b',  1, 15)));
  machine.insert(pair<uint, TableEntry>(15, TableEntry(' ', 'c',  -1, 0)));
  
}