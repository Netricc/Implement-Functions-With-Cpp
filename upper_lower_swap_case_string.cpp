#include <iostream>
#include <vector>

using namespace std;

// String To Upper Case and Lower Case and Swap Case

string upperLowerSwapCaseString(string st, string caseType){

    string result;

    if (caseType == "upper"){
        for (char c : st){
            if (c >= 'a' && c <= 'z'){
                c-=32;
            }
            result += c;
        }
    }else if(caseType == "lower"){
        for (char c : st){
            if (c >= 'A' && c <= 'Z'){
                c+=32;
            }
            result += c;
        }

    }else if(caseType == "swap"){
        for (char c : st){
            if (c >= 'A' && c <= 'Z'){
                c+=32;
            }
            else if (c >= 'a' && c <= 'z'){
                c-=32;
            }
            result += c;
        }
    }

    return result;
}

int main(){

    cout << upperLowerSwapCaseString("HellO", "swap");
    return 0;
}