#include <iostream>
#include <vector>
using namespace std;
#define INF 0x3f3f3f3f

int main(){

    int t,n;
    cin >> t >> n;

    vector< vector<int> > vet(n+1);
    for (int i = 0; i < n+1; ++i) {
        vet[i].resize(n+1);
        fill(vet[i].begin(),vet[i].end(),INF);
    }

    for (int i = 0; i < t; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        if (c<vet[a][b]){
            vet[a][b] = c;
            vet[b][a] = c;
        }
    }

    vector<int> min(n+1,INF);
    vector<bool> isvisit(n+1, false);


    isvisit[1] = true;
    for (int i = 1; i <= n; ++i) {
        min[i] = vet[1][i];
    }

    int ans = 0;
    for (int i = 1; i < n ; ++i) {
        int minn = INF,temp;
        for (int j = 2; j <= n; ++j) {   //找权值最小的点
            if (!isvisit[j] && min[j]<minn){
                minn = min[j];
                temp = j;
            }
        }
        ans += minn;
        isvisit[temp] = true;
        for (int j = 1; j < n+1; ++j) { //利用新点改变其他不在最小生成树中的点的边
            if (!isvisit[j] && min[j] > vet[temp][j]) min[j] = vet[temp][j];
        }
    }

    cout << ans;
    return 0;

}
