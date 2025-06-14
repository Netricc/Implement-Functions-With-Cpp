#include <iostream>
using namespace std;


// Parse Integer From String


int parseInteger(string st){
    int result = 0;
    for (char c : st){
        if (c >= '0' && c <= '9'){
            result = result * 10 + (c - '0');
        }
        else{
            break;
        }
    }
    return result;
}

int main(){

    cout << parseInteger("123Hel3lo3") << endl;

    return 0;
}