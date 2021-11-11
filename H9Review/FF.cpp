//
// Created by Jobs on 2021/11/11.
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    vector<int> vet;
    for (int i = 0; i < n; ++i) {
        int a;cin >> a;
        vet.push_back(a);
    }
    int max = 0;
    for (int i = 0; i < (1 << vet.size()); ++i) {
        int count = 0;
        int sum = 0;
        for (int j = 0; j < vet.size(); ++j) {
            if (i & (1 << j)){
                count++;
                sum += vet[j];
            }
        }
        if ((sum%k) == 0){
            max = max<count ? count : max;
        }
    }
    cout << max << endl;

    return 0;
}