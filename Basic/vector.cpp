#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    vector<int> v(5,10);    // 5 elements with value 10, by default 0 but can be changed

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}