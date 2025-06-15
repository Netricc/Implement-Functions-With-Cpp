#include <iostream>
using namespace std;



// Get Sub String

string substring(string st, int start, int end, bool inc_end){

    string result;

    for (int i = start; inc_end ? i <= end : i < end; i++){
        result += st[i];
    }

    return result;
}

int main(){


    cout << substring("Netric Master Pro", 0, 7, true) << endl; 

    return 0;
}