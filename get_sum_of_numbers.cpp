#include <iostream>
#include <vector>
using namespace std;


// Get Sum Of Numbers In Vector

int getSumNumbers(vector<int> nums, string operation = "+"){
    int result = operation == "*" ? 1 : 0;

    for (int i = 0; i < nums.size(); i++){
        if (operation == "+"){
            result += nums[i];
        }else if(operation == "-"){
            result -= nums[i];
        }else if(operation == "*"){
            result *= nums[i];
        }else{
            cout << "getSumNumbers : Operation Issus!";
            result = 0;
        }
    }

    return result;
}


int main(){

    cout << getSumNumbers({1, 2, 6, 1, 2, 2}, "*") << endl; // 48
    cout << getSumNumbers({1, 2, 6, 1, 2, 2}, "-") << endl; // -14
    cout << getSumNumbers({1, 2, 6, 1, 2, 2}, "+"); // 14
    return 0;
}