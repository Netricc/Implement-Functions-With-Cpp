#include <iostream>
using namespace std;


// IsNaN => Is Not a Number

// "123G4" => Is not a Number => True
// "1234" => Is Number => False


bool isNaN(string st){
    bool result = false;
    for (char c : st){
        if (!(c >= '0' && c <= '9')){
            result = true;
            break;
        }
    }
    return result;
}

int main(){


    cout << isNaN("123G4") << endl; // 1 True
    cout << isNaN("1234"); // 0 False
    return 0;
}