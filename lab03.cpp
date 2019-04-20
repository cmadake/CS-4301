/**
  Ryan Dennis
  CS 4301
  Lab 3
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

bool isValid(string s) {
    int state = 0;
    string::iterator itr;
    for (itr = s.begin(); itr < s.end(); ++itr) {
		char letter = *itr;
        switch (state) {
		//The starting case.
        case 0:
            if (isspace(letter)) {
                state = 0;
			} else if (letter == 'a') {
				state = 1;
			} else if (letter == 'b') {
				state = 2;
			} else {
                state = 4;
			}
            break;
		//the 'a' branch:
        case 1:
            if (letter == 'a') {
				state = 1;
			} else if (letter == 'b') {
				state = 3;
			} else {
                state = 4;
			}
            break;
		//the 'b' branch:
        case 2:
           if (letter == 'a') {
				state = 3;
		   } else {
                state = 4;
		   }
            break;
        case 3:
             if (letter == 'a') {
				state = 1;
			} else if (letter == 'b') {
				state = 2;
			} else {
                state = 4;
			}
			break;
		//The everything else state.
        case 4:;
        }
	}
    return state == 0 || state == 1 || state == 3;
}