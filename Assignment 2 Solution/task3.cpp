#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class RotateIntegers{
    public:
    RotateIntegers() = default;
    void VectorRotate(vector<int> nums, int k){
        int n = nums.size();
        k %= n;
        rotate(nums.begin(), nums.begin() + (n-k), nums.end());
        cout << "=====Rotate Vector=====" << endl;
        for (int x : nums){
            cout << x << ",";
        }
    }
};

int main(){
    RotateIntegers r1;
    vector<int> nums = {1, 2, 3, 4, 5};
    r1.VectorRotate(nums, 4);
    return 0;
}