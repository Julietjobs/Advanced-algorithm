//
// Created by Jobs on 2021/11/10.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> vet;
    for (int i = 0; i < n; ++i) {
        int a;cin >> a;
        vet.push_back(a);
    }

    sort(vet.begin(),vet.end());

    for (int i = 0; i < (n + 1) / 2; ++i) {
        cout << vet[i] << endl;
    }

    return 0;

}