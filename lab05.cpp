// Ryan Dennis
// CS 4301
// FSA sample
 
#include <fsa.h>
 
using namespace std;
 
FSA::FSA()
{
  name = "Ryan Dennis";
  labNumber = 5;
  description = "{x | x is a valid hexadecimal integer constant in MASM}";
}
 
void FSA::initializeMachine()
{
  //STATE 1:
  
  // check for signs.
  machine.insert(pair<uint, TableEntry>(1, TableEntry('+', 2)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('-', 2)));
  // check for digits:
  for (char ch = '0'; ch <= '9'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(1, TableEntry(ch, 4)));
  }
  for (char ch = 'a'; ch <= 'f'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(1, TableEntry(ch, 10)));
  }
  for (char ch = 'A'; ch <= 'F'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(1, TableEntry(ch, 10)));
  }
  machine.insert(pair<uint, TableEntry>(1, TableEntry('h', 10)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('H', 10)));
  machine.insert(pair<uint, TableEntry>(1, TableEntry('%', 10)));
	  
  //STATE 2:
  
  // check for signs.
  machine.insert(pair<uint, TableEntry>(2, TableEntry('+', 10)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('-', 10)));
  // check for digits:
  for (char ch = '0'; ch <= '9'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(2, TableEntry(ch, 4)));
  }
  for (char ch = 'a'; ch <= 'f'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(2, TableEntry(ch, 10)));
  }
  for (char ch = 'A'; ch <= 'F'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(2, TableEntry(ch, 10)));
  }
  machine.insert(pair<uint, TableEntry>(2, TableEntry('h', 10)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('H', 10)));
  machine.insert(pair<uint, TableEntry>(2, TableEntry('%', 10)));
  
  //STATE 4:
  
  // check for signs.
  machine.insert(pair<uint, TableEntry>(4, TableEntry('+', 10)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('-', 10)));
  // check for digits:
  for (char ch = '0'; ch <= '9'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(4, TableEntry(ch, 4)));
  }
  for (char ch = 'a'; ch <= 'f'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(4, TableEntry(ch, 4)));
  }
  for (char ch = 'A'; ch <= 'F'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(4, TableEntry(ch, 4)));
  }
  machine.insert(pair<uint, TableEntry>(4, TableEntry('h', 5)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('H', 5)));
  machine.insert(pair<uint, TableEntry>(4, TableEntry('%', 10)));
  
  //STATE 5:
  
  // check for signs.
  machine.insert(pair<uint, TableEntry>(5, TableEntry('+', 10)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('-', 10)));
  // check for digits:
  for (char ch = '0'; ch <= '9'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(5, TableEntry(ch, 10)));
  }
  for (char ch = 'a'; ch <= 'f'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(5, TableEntry(ch, 10)));
  }
  for (char ch = 'A'; ch <= 'F'; ++ch) {
	  machine.insert(pair<uint, TableEntry>(5, TableEntry(ch, 10)));
  }
  machine.insert(pair<uint, TableEntry>(5, TableEntry('h', 10)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('H', 10)));
  machine.insert(pair<uint, TableEntry>(5, TableEntry('%', 0)));
  
}