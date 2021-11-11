//
// Created by Jobs on 2021/11/11.
//

#include <map>
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    while (n--){
        map<int,bool> mp;
        vector<int> vet;
        int m;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            int a;
            cin >> a;
            if (!mp[a]){
                mp[a] = true;
                vet.push_back(a);
            }
        }
        for (int i = 0; i < vet.size(); ++i) {
            cout << vet[i] << " ";
        }
        cout << endl;
    }

    return 0;
}