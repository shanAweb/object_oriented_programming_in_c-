#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Dynamic{
    public:
        Dynamic() = default;
        vector<int> Initial_vector(vector<int>& dynamic_array){
            return dynamic_array;
        }
        vector<int> push_function(vector<int>& dynamic_array, int num){
           dynamic_array.push_back(num);
            return dynamic_array;
        }
        vector<int> pop_function(vector<int>& dynamic_array){
            dynamic_array.pop_back();
            return dynamic_array;
        }
        int capacity_function(vector<int>& dynamic_array){
            return dynamic_array.capacity();
        }
        vector<int> erase_function(vector<int>& dynamic_array){
            dynamic_array.erase(dynamic_array.begin() + 1);
            return dynamic_array;
        }
        int size_function(vector<int>& dynamic_array){
            return dynamic_array.size();
        }
        vector<int> insert_function(vector<int>& dynamic_array, int number, int place){
            dynamic_array.insert(dynamic_array.begin(), +place, number);
            return dynamic_array;
        }

};

int main(){
    Dynamic d1;
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> result = d1.Initial_vector(v1);
    cout << "==== Initial Vector ====" << endl;
    for (int x : result){
        cout << x << ",";
    }
    cout << endl;
    result = d1.push_function(v1, 6);
    cout << "==== Vector with a push ====" << endl;
    for (int x : result){
        cout << x << ",";
    }
    cout << endl;
    result = d1.pop_function(v1);
    cout << "==== Vector with a pop ====" << endl;
    for (int x : result){
        cout << x << ",";
    }
    cout << endl;
    result = d1.capacity_function(v1);
    cout << "==== Vector capacity ====" << endl;
    for (int x : result){
        cout << x << ",";
    }
    return 0;
}