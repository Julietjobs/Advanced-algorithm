//
// Created by Jobs on 2021/11/11.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string turn(int a,int n){
    //将十进制数转换成n进制
    string ans = "";
    if (a == 0) {
        ans += '0';
        return ans;
    }
    while (true){
        int t=a%n;
        if(t>=0&&t<=9)	ans+=t+'0';
        else ans+=t-10+'A';
        a/=n;
        if (a == 0){
            break;
        }
    }
    return ans;
}

int main(){

    int n;string input;
    cin >> n >> input;
    //cout << turn(15,16);
    bool flag = false;
    for (int i = 2; i < 17; ++i) {
        string str = "";
        for (int j = 1; j < n; ++j) {
            str += turn(j,i);
        }
        int a = str.find(input);
        if (a != str.npos) {
            flag = true;
            break;
        }
    }

    if (flag){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }

    return 0;
}