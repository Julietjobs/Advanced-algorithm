//
// Created by Jobs on 2021/11/10.
//

#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vet;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        vet.push_back(a);
    }

    int ans = 0;
    bool flag = true;
    while (flag){
        flag = false;
        for (int i = 0; i < n-1; ++i) {
            if (vet[i]>vet[i+1]){
                swap(vet[i],vet[i+1]);
                ans++;
                flag = true;
            }
        }
    }

    cout << ans;

    return 0;
}
