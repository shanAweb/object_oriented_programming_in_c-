#include<iostream>
#include<vector>
using namespace std;

class Integers{
    public:
    Integers() = default;
    void remove_duplicates(vector<int> integers){
        for (int i = 0; i<integers.size(); i++){
            if (integers[i] == integers [i+1]){
                cout << "Duplicated number is: " << integers[i] << " at index number: " << i << endl;
                integers.erase(integers.begin() + integers[i]);
            }
        }
        for (int x : integers){
            cout << x << ",";
        }
    } 
};

int main(){
    Integers i1;
    vector<int> nums = {1, 2, 3, 4, 5, 5};
    i1.remove_duplicates(nums);

    return 0;
}