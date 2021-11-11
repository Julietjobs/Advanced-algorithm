//
// Created by Jobs on 2021/11/11.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string input;
    cin >> input;
    bool  flag = false;
    for (int i = 1; i < input.size()/2; ++i) {
        string prefix = input.substr(0,i);
        string suffix = input.substr(input.size()-i);
        string x = input.substr(i,input.size()-i-1);
        if (prefix == suffix && x.find(prefix)!=x.npos){
            cout << prefix;
            flag = true;
            break;
        }
    }
    if (!flag) cout << "Just a legend\n";

}