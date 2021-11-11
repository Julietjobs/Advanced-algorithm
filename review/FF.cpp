//
// Created by Jobs on 2021/11/10.
//

#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    vector<int> vet;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        vet.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int a = abs(vet[i]-vet[j]);
            if ( a == c || -a == c){
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}