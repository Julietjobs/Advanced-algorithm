#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




struct edge{
    int x;
    int y;
    int w;
};
bool cmp(struct edge a,struct edge b){
    return a.w>b.w;
}

vector<bool> isvisit;
vector<int> boss;
int findboss(int a){
    while (boss[a]!=a) a = boss[a];
    return a;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<struct edge> vet(n+1);
    isvisit.resize(n+1);
    boss.resize(n+1);
    for (int i = 1; i <= n; ++i) {
        isvisit[i] = false;
        boss[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        vet.push_back({a,b,c});
    }
    sort(vet.begin(),vet.end(), cmp);

    int ans = 0;

    for (auto & i : vet) {
        int x = findboss(i.x);
        int y = findboss(i.y);
        if (x!=y){
            boss[x] = y;
            ans+=i.w;
        }
    }

    cout << ans;

}