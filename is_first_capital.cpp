#include <iostream>
#include <string>
using namespace std;

bool isFirstCapital(string st) {
    bool allCaps = true;

    for (char ch : st){
        if (ch == ' '){
            continue;
        }else if (ch >= 'a' && ch <= 'z'){
            allCaps = false;
            return false;
            }else{
            allCaps = true;
        }

    }
    
    
    return true;

    return 0;
}

int main() {
    cout << boolalpha << isFirstCapital("HEY HOW ARE YOU") << endl;  // true 
    cout << boolalpha << isFirstCapital("I Am GOOD") << endl;  // false

    return 0;
}

