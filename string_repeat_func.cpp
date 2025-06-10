#include <iostream>
using namespace std;

// stringRepeat


/*

*	Function: stringRepeat
*	Description: This function takes a string and repeats it a specified number of times, with an optional separator between repetitions.
*	Parameters:
*	- string s: The string to be repeated.
*	- int n: The number of times to repeat the string (default is 2).
*	- string sep: The separator to be used between repetitions (default is an empty string).
*	- bool showEnd: If true, the last repetition will not have a separator at the end (default is true).
*	Return Value: A new string that consists of the original string repeated n times, separated by the specified separator.
*	Return Type: string

*/ 


string stringRepeat(string s, int n = 2, string sep="", bool showEnd=true){
	string sReturn;
	for (int i = 0;  i < n; i++){
		if(!showEnd){
		if (i+1 == n){
		sReturn+=s;
		}else{		
			sReturn+=s + sep;
		}
		}else{
		sReturn+=s +sep;
		}
	}
	return sReturn;
}

int main(){
	string myString = "hello";
    cout << stringRepeat(myString) << endl;	
	return 0;
}
