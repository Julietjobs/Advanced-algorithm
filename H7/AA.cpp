#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 0x3f3f3f3f

struct edge{
    int x;
    int y;
    int w;
};

bool cmp(struct edge a,struct edge b){
    return a.w<b.w;
}

vector<int> boss;

int findboss(int a){
    while (boss[a]!=a) a = boss[a];
    return a;
}

int main(){

    int n;
    cin >> n;
    boss.resize(n);
    vector<struct edge> vet;
    vector<vector<int> > m(n);
    for (int i = 0; i < n; ++i) {
        m[i].resize(n);
        boss[i] = i;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            if (i>j){
                vet.push_back({i,j,a});
                m[i][j] = a;
                m[j][i] = a;
            }
        }
    }

    int ans = 0;

    //必须链接的连上
    int l;
    cin >> l;
    for (int i = 0; i < l; ++i) {
        int a,b;
        cin >> a >> b;
        a--,b--;
        int x = findboss(a);
        int y = findboss(b);
        if (x!=y){
            boss[x] = y;
        }
    }

    sort(vet.begin(),vet.end(), cmp);
    //选最短边
    for (int i = 0; i < vet.size(); ++i) {
        int x = findboss(vet[i].x);
        int y = findboss(vet[i].y);
        if (x!=y){
            ans += vet[i].w;
            boss[x] = y;
        }
    }

    cout << ans;


}