//
//  main.cpp
//  practice
//
//  Created by Bianca Amoako on 4/21/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v ={1, 5, 3, 19};
    vector<int> :: iterator  ip = v.begin();
    v.insert(ip, 34);
    for(ip = v.begin() ; ip != v.end(); ++ip){
        sort(v.begin(), v.end());
        cout << *ip << " ";
    }
}
