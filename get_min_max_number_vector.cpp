#include <iostream>
#include <vector>
using namespace std;

// Get Minimum Number in Vector 

double getMin(vector<double> nums){
    double min = nums[0];

    for (int i = 0; i < nums.size(); i++){
        if (min > nums[i]){
            min = nums[i];
        }
    }

    return min;
}


// Get Maximum Number in Vector 

double getMax(vector<double> nums){
    double max = nums[0];

    for (int i = 0; i < nums.size(); i++){
        if (max < nums[i]){
            max = nums[i];
        }
    }

    return max;
}



int main(){

    vector<double> myVector = {4.3, 9.6, 3.1, 4.2, 3.09 };

    cout << "Minimum: " << getMin(myVector) << endl;
    cout << "Maximum: " << getMax(myVector);

    return 0;
}