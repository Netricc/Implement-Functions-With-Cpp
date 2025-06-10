#include <iostream>
using namespace std;


// zFill

string zFill(string st, int width, string fill = "0"){
    int stringlength = st.length();
    string result;
    if (stringlength < width){
        int loops = width - stringlength;
        
        for (int i = 0; i < loops; i++){
            result += fill;
        }

    }

    return result + st;
}

int main(){

    

    cout << zFill("50", 5) << endl;
    cout << zFill("560", 5) << endl;
    cout << zFill("5094", 5);

}