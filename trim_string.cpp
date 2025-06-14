#include <iostream>
#include <vector>
using namespace std;



// Trim [Left|Right] Characters


// ###Netric### => All => Netric
// ###Netric### => Right => ###Netric
// ###Netric### => Left => Netric###

string trim_string(string st, string direction = "All", char ch = ' '){
    string result;

    int firstCharsCount = 0;
    int lastCharsCount = 0;

    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == ch){
            firstCharsCount++;
        }else{
            break;
        }
    }

    for (int i = st.length() - 1; i >= 0; i--)
    {
        if (st[i] == ch){
            lastCharsCount++;
        }else{
            break;
        }
    }

    if (direction == "Left"){
        for (int i = firstCharsCount; i < st.length(); i++){
            result += st[i];
        }
    }

    else if (direction == "Right"){
        for (int i = 0; i < st.length() - lastCharsCount; i++){
            result += st[i];
        }
    }

      else if (direction == "All"){
        for (int i = firstCharsCount; i < st.length() - lastCharsCount; i++){
            result += st[i];
        }
    }


    return result;
}

int main(){

    cout << trim_string("###Netric###", "All", '#') << endl; // Netric
    cout << trim_string("###Netric###", "Right", '#') << endl; // ###Netric
    cout << trim_string("###Netric###", "Left", '#') << endl; // Netric###

    return 0;
}
