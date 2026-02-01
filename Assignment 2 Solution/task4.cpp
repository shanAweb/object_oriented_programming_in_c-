#include<iostream>
#include<vector>
using namespace std;

class mergeVector{
    public:
    mergeVector() = default;
    vector<int> MergedVector(vector<int> num1, vector<int> num2, vector<int> num3){
        sort (num1.begin(), num1.end());
        sort (num2.begin(), num2.end());
        num3.reserve(num1.size() + num2.size());
        merge(num1.begin(), num1.end(), num2.begin(), num2.end(), back_inserter(num3));
        return num3;
    }
};
int main(){
    mergeVector o1;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3;
    vector<int> result = o1.MergedVector(v1, v2, v3);
    for (int x : result){
        cout << x << ",";
    }
    return 0;
}