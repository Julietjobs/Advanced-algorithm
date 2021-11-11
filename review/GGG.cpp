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


    int times;
    int location;

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
     be  or not to be is a question
  **/
    cin >> str;
    while (str!="?"){
        transform(str.begin(),str.end(),str.begin(),::tolower);
        if (str == flag && times==0){
            location = p;
        }
        if (str == flag){
            times++;
        }
        p+= str.size();
        while (cin.peek()==32){
            getchar();
            p++;
        }
        cin >> str;
    }

    if (times){
        cout << times << " " <<location;
    } else cout << "-1" ;


    return 0;
}