#include <iostream>
#include <vector>
using namespace std;

// Clean String
// "Netrc//''00°°Master@#$Pro__--" => Netrc00MasterPro__
string clean_string(string st, bool keepnums = true, vector<char> keepLetters = {}){
    string result;

    for (char c : st){
        bool added = false;
        
        // Check if it's a letter
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            result += c;
            added = true;
        }
        // Check if it's a number and we want to keep numbers
        else if(keepnums && c >= '0' && c <= '9'){
            result += c;
            added = true;
        }
        
        // Check if it's in the keepLetters vector (only if not already added)
        if (!added) {
            for(int i = 0; i < keepLetters.size(); i++){
                if(keepLetters[i] == c){
                    result += c;
                    break; // Important: break to avoid duplicates
                }
            }
        }
    }

    return result;
}

int main() {
    // Test the function
    cout << clean_string("Netric//''00°°Master@#$Pro__--", true, {'_', '\'', '-' }) << endl; 
    // Should output: Netric''00MasterPro__--
    
    return 0;

}