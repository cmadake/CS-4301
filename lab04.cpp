// Ryan Dennis
// CS 4301
// FSA sample
 
#include <fsa.h>
 
using namespace std;
 
FSA::FSA()
{
  name = "Ryan Dennis";
  labNumber = 4;
  description = "{x | x is in {0, 1}+, and the number of 0's ";
  description += "preceding each 1 in x is odd}";
}
 
void FSA::initializeMachine()
{
  machine.insert(pair<uint, TableEntry>(1, TableEntry('0', 3)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('1', 2)));

  //2 has no branches:
  machine.insert(pair<uint, TableEntry>(2, TableEntry('0', 2)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('1', 2)));
  
  machine.insert(pair<uint, TableEntry>(3, TableEntry('0', 5)));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('1', 4)));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('%', 0)));
  
  machine.insert(pair<uint, TableEntry>(4, TableEntry('0', 3)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('1', 2)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('%', 0)));
  
  machine.insert(pair<uint, TableEntry>(5, TableEntry('0', 3)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('1', 2)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('%', 0)));
  
}