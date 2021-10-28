#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct edge{
    int x;
    int y;
    int w;
    edge(int x,int y,int w){
        this->w = w;
        this->y = y;
        this->x = x;
    }
};

bool cmp(struct edge a,struct edge b){
    return a.w<b.w;
}

vector<int> boss;

int findboss(int a){
    while (boss[a]!=a) a = boss[a];
    return a;
}

int main() {

    int n;
    while (cin >> n) {

        int ans = 0;
        boss.resize(n);
        vector<struct edge> edges;
        vector<vector<int> > m(n);
        for (int i = 0; i < n; ++i) {
            m[i].resize(n);
            boss[i] = i;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int a;
                cin >> a;
                if (i > j) {
                    edges.emplace_back(i, j, a);
                }
            }
        }

        sort(edges.begin(), edges.end(), cmp);

        //int tot = 0;

        for (int i = 0; i < edges.size(); i++) {
            int x = findboss(edges[i].x);
            int y = findboss(edges[i].y);
            if (x != y) {
                ans += edges[i].w;
                boss[x] = y;
                //tot++;
            }
            //if (tot == n - 1) break;

        }

        cout << ans << endl;



    }
    return 0;
}
