#include <iostream>
using namespace std;

// Reverse a String

string reverseString(string st){
    string result;
    for (int i = 0; i < st.length(); i++){
        result += st[st.length() - i -1];
    }

    return result;
}

int main(){
    cout << reverseString("hello"); // olleh
    return 0;
}