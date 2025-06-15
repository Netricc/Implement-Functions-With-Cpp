#include <iostream>

using namespace std;


int words_counter(string st, char seperator = ' ' ){
    int count = 0;
    auto& sep = seperator; // alias for seperator

    for (int i = 0; i < st.length(); i++){
        if (st[i] == sep){
            count += 1;
        }
    }

    count += 1;

    return count;

}

int main(){

    cout << words_counter("Netric'Master'Hello'World'Test'Function j'f", '\'') << endl; // output : 7
    return 0;
}