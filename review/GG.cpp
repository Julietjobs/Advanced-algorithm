//
// Created by Jobs on 2021/11/10.
//
#include <map>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    map<string,int> location;
    map<string,int> times;

    string flag;
    cin >> flag;
    transform(flag.begin(),flag.end(),flag.begin(),::tolower);

    getchar();
    string str;
    int p = 0;
    while (cin.peek()==32){
        getchar();
        p++;
    }
/***
    to
     be  or not  be is a question
  **/
    while (cin >> str){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        if (times[str]==0){
            location[str] = p;
        }
        times[str]++;
        p+= str.size();
        while (cin.peek()==32){
            getchar();
            p++;
        }
    }

    if (times[flag]){
        cout << times[flag] << " " <<location[flag];
    } else cout << "-1" ;


    return 0;
}