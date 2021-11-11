//
// Created by Jobs on 2021/11/10.
//

#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> boss;

int findboss(int a){
    while (boss[a]!=a) a = boss[a];
    return a;
}

int main(){

    int n, m;
    while (cin >> n >> m){
        boss.resize(n+1);
        for (int i = 0; i < n + 1; ++i) {
            boss[i] = i;
        }

        for (int i = 0; i < m; ++i) {
            int a,b;
            cin >> a >> b;
            int x = findboss(a);
            int y = findboss(b);
            if (x!=y) boss[x] = y;
        }
        set<int> ans;
        for (int i = 1; i < n + 1; ++i) {
            ans.insert(findboss(i));
        }
        cout << ans.size()-1 << endl;

    }

    return 0;
}