#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> v1; //default empty vector
    vector<int> v2(5); //integer vector with 5 elements
    vector<int> v3(5, 10); // 5 values with 10 initializing for each element
    vector<int> v4 = {1, 2, 3}; //vector with values

    // Adding new values in vector
    v1.push_back(5);
    v1.push_back(10);

    //  The above 2 push backs will make the vector: 5, 10

    v1.pop_back();

    // The above pop will remove the 10, so the vector remains with 5 only;

    cout << "V1 is" << endl;
    for (int x : v1){
        cout << x << endl;
    }
    cout << "Vector 4 values are: " << endl;
    for (int x : v4){
        cout << x << endl;
    }
}