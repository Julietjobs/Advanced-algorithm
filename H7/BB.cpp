#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 1. 先进行一边最短路径，记住长度和里面包含的边
 2. 把其中某一条边屏蔽了 然后再进行求最短路径
 3. 如果此时长度与之前的长度相等 则不唯一
 **/

#define INF 0x3f3f3f3f

struct edge{
    int x;
    int y;
    int w;
    bool isopen;
};

bool cmp(struct edge a,struct edge b){
    return a.w<b.w;
}

vector<int> boss;

int findboss(int a){
    while (boss[a]!=a) a = boss[a];
    return a;
}

int findboss2(vector<int> boss2,int a){
    while (boss2[a]!=a) a = boss2[a];
    return a;
}

int main(){


    int cases;
    cin >> cases;
    while (cases--){
        int n,m;
        cin >> n >> m;
        boss.resize(n+1);
        vector< vector<int> > mp(n+1);
        vector<struct edge> edges;
        for (int i = 1; i <= n; ++i) {
            mp[i].resize(n+1);
            fill(mp[i].begin(),mp[i].end(),INF);
            boss[i] = i;
        }
        for (int i = 0; i < m; ++i) {
            int x,y,w;
            cin >> x >> y >> w;
            edges.push_back({x,y,w, true});
            mp[x][y] = w;
            mp[y][x] = w;
        }

        sort(edges.begin(),edges.end(), cmp);

        //找出最短路径，并记录所经过的边和最小值
        vector<struct edge> minset;
        int minnum = 0;
        for (int i = 0; i < edges.size(); ++i) {
            int x = findboss(edges[i].x);
            int y = findboss(edges[i].y);
            if (x!=y){
                boss[x] = y;
                minnum+=edges[i].w;
                minset.push_back(edges[i]);
            }
        }

        bool ans = true;
        //一次关闭一条边，求出关闭后的最小值
        for (int i = 0; i < minset.size(); ++i) {
            int closedX = minset[i].x;
            int closedY = minset[i].y;
            vector<int> boss2(n+1);
            for (int j = 1; j <= n; ++j) {
                boss2[j] = j;
            }
            int min = 0;
            int edgeConut = 0;
            for (int j = 0; j < edges.size(); ++j) {
                if (edges[j].x == closedX && edges[j].y == closedY) continue;
                int x = findboss2(boss2,edges[j].x);
                int y = findboss2(boss2,edges[j].y);
                if (x!=y){
                    boss2[x] = y;
                    min+=edges[j].w;
                    edgeConut++;
                }
            }
            //如果边数相同切最小值也相同，则不唯一
            if (edgeConut == minset.size() && min == minnum){
                ans = false;
                break;
            }
        }

        if (ans) cout << minnum << endl;
        else cout << "Not Unique!" << endl;


    }

    return 0;

}
