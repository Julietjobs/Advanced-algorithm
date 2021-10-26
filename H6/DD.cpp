#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
using namespace std;

int main(){
    string a;
    while (cin >> a){
        map<char,vector<char> > mp;
        while (a!="0"){
            char first,last;
            first = a[0];
            last = a[a.size()-1];
            mp[first].push_back(last);
            cin >> a;
        }
        queue<char> que;
        map<char,bool> visited;
        que.push('b');
        visited['b'] = true;
        bool flag = false;
        while (!que.empty()){
            char top = que.front();
            que.pop();
            for (char one : mp[top]) {
                if (one == 'm')flag = true;
                if (visited[one]!= true){
                    que.push(one);
                    visited[one] = true;
                }
            }
            if (flag) break;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No";
    }
}