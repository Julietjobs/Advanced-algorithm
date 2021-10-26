#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> boss;


int findboss(int n){
    while (boss[n]!=n){
        n = boss[n];
    }
    return n;
}

int main(){
    int n,m;
    while (cin >> n >> m){

        boss.resize(n+1);
        bool flag = true;
        long long int ans=0;
        map<int,int>mp;
        for (int i = 0; i < n; ++i) {
            mp[i+1] = 888;
            boss[i+1] = i+1;
        }
        for (int i = 0; i < m; ++i) {
            int a,b;
            cin >> a >> b;
            mp[a] = mp[b]+1;
            if (findboss(a)!= findboss(b)){
                boss[b] = a;
            }else{
                flag = false;
            }
        }
        if (flag){
            for (int i = 0; i < n; ++i) {
                ans += mp[i+1];
            }
            cout << ans << endl;
        } else{
            cout << -1 << endl;
        }
    }

}