//
//
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> boss;

int findboss(int a){
    while (boss[a] != a) a = boss[a];
    return a;
}

int main(){

    int n, m, p;
    cin >> n >> m >> p;
    boss.resize(n+1);
    for (int i = 1; i <= n; ++i) {
        boss[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        int x = findboss(a);
        int y = findboss(b);
        if (x!=y){
            boss[x] = y;
        }
    }
    for (int i = 0; i < p; ++i) {
        int a, b;
        cin >> a >> b;
        int x = findboss(a);
        int y = findboss(b);
        if (x==y){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }

    return 0;
}
