#include <iostream>

using namespace std;

string parse_string(string st){
    string result;

    for (int i = 0; i < st.length(); i++){
        if (st[i] == '='){
            result += ": ";
            continue;
        }

        if (st[i] == '&'){
            result += "\n";
            continue;
        }
        result += st[i];
    }
    return result;
}

int main(){
    cout << parse_string("first=Netric&seconde=Master&third=Pro") << endl;
    return 0;
}