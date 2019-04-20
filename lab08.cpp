// Ryan Dennis
// CS 4301
// PDT
 
#include <pdt.h>
 
using namespace std;
 
PDT::PDT()
{
  name = "Ryan Dennis";
  labNumber = 8;
  description = "{x,a^im | x is in {a,b}*; i, j >= 0; i = # of a's in x;";
  description += "\n          ";
  description += "j = # of b's in x; m = c^(i-j) if i > j or";
  description += "\n          ";
  description += "m = d^(j-i) if j > i or m = epsilon if i = j}";
}
 
void PDT::initializeMachine()
{
  /*
   *-----------------------------------------------------------output symbol
   *---------------------------------------------------------next state    |
   *--------------------------------------------------------push pop  |    |
   *----------------------------------------------input symbol     |  |    |
   *-----------------------------------------stack symbol    |     |  |    |
   *------------------------current state               |    |     |  |    | */
  machine.insert(pair<uint, TableEntry>(1, TableEntry('@', '%', " *", 0, '*')));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('*', 'a', "+a", 2, 'a')));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('*', 'b', "+b", 2, '*')));
  
  machine.insert(pair<uint, TableEntry>(2, TableEntry('a', 'a', "+a", 3, 'a')));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('b', 'b', "+b", 3, '*')));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('b', 'a', "+b", 3, 'a')));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('b', '*', "-b", 9, 'd')));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('a', 'b', "-a", 11, '*')));
		
  machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'b', "+a", 4, 'a')));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('a', 'a', "+a", 4, 'a')));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('a', '*', "-a", 4, 'c')));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('b', 'b', "-b", 4, 'a')));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('b', 'a', "-b", 4, 'a')));
  machine.insert(pair<uint, TableEntry>(3, TableEntry('b', '*', "-b", 4, 'd')));
  
  machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'b', "+a", 5, 'a')));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('a', 'a', "*", 10, 'a')));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('a', '*', "-a", 9, 'c')));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('b', 'a', "-b", 5, 'd')));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('b', 'b', "-b", 9, 'd')));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('b', '*', "-b", 9, 'd')));
  
  machine.insert(pair<uint, TableEntry>(5, TableEntry('a', 'b', "-a", 6, '*')));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('*', '*', " *", 9, 'd')));
  
  machine.insert(pair<uint, TableEntry>(6, TableEntry('a', 'a', "-a", 7, '*')));
  
  machine.insert(pair<uint, TableEntry>(7, TableEntry('a', 'a', "-a", 8, '*')));
  
  machine.insert(pair<uint, TableEntry>(8, TableEntry('a', 'b', "-a", 9, '*')));
  
  machine.insert(pair<uint, TableEntry>(9, TableEntry('*', '*', " *", 0, '*')));
  
  machine.insert(pair<uint, TableEntry>(10, TableEntry('a', 'b', "-a", 10, 'c')));
  machine.insert(pair<uint, TableEntry>(10, TableEntry('a', '*', "-a", 10, 'c')));
  machine.insert(pair<uint, TableEntry>(10, TableEntry('*', '*', " *", 0, '*')));
  
  machine.insert(pair<uint, TableEntry>(11, TableEntry('*', 'b', "+a", 12, 'a')));
  machine.insert(pair<uint, TableEntry>(11, TableEntry('*', '*', " *", 0, '*')));
	
  machine.insert(pair<uint, TableEntry>(12, TableEntry('a', 'a', "-a", 13, 'a')));
  
  machine.insert(pair<uint, TableEntry>(13, TableEntry('*', 'a', "*", 9, 'c')));
  
}
