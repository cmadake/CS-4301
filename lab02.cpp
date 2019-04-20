#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>;

using namespace std;

bool isValid(string s) {
	char b[sizeof(s)];
	//Build the char array:
	for (int i = 0; i < sizeof(s); i++) {
		b[i] = s[i];
		//cout<< b[i];
	}
	
	//Loop the char array:
	for (int i = 0; i < strlen(b); i++) {
		char current = b[i];
		//cout<< current  << " " << strlen(b) << " f ";
		//The previous char.
		char previous = ' ';
		if (i != 0) {
			previous = b[i - 1];
		}
		//The next char.
		char next = ' ';
		if (i + 1 < sizeof(s)) {
			//If we are not at the last index we set temp to the next value.
			next = b[i + 1];
			//cout << " " << next;
		}
		//If we run into a double b:
		/*if (current == 'b' && next == 'b') {
			//If there was no previous or previous was not a completing "ab".
			if (previous == ' ' || previous != 'a') {
				return false;
			}
			char nextNext = ' ';
			if (i + 2 < sizeof(s)) {
				nextNext = b[i + 2];
			}
			//If there was no next value in the array or nextNext was not an a completing "ba".
			if (nextNext == ' ' || nextNext != 'a') {
				return false;
			}
		}*/
		//If there is nothing following a b and there is not a previous a or any future chars:
		if (current == 'b' && next == 'a') {
			//cout << " WWW ";
			//return false;
			i++;
			//cout << " 1" ;
			continue;
		}
		else if (current == 'a' && next == 'b') {
			i++;
			//cout << " 2" ;
			continue;
		}
		else if (current == 'a') {
			//cout << " 3" ;
			continue;
		}
		else return false;
		//If we run into a b that is not backed or followed by an a:
/*if (b[i] == 'b' && next == 'a') {
			return false;
		}*/
	}
	//If the char array is too small to loop and we start on a 'b':
	/*if (b[0] == 'b') {
		cout << " "  << sizeof(s);
		return false;
	}*/
	return true;
}