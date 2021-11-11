//
// Created by Jobs on 2021/11/11.
//

// 图的连通注意这个点到它自己的距离为0

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define INF 0x3f3f3f3f

int main(){

    int n, m, s, t;
    while (cin >> n >> m >> s >> t){

        vector< vector<int> > graph(n+1);
        vector<bool> visit(n+1, false);
        for (int i = 0; i < n+1; ++i) {
            graph[i].resize(n+1);
            fill(graph[i].begin(),graph[i].end(),INF);
            graph[i][i] = 0;
        }
        for (int i = 0; i < m; ++i) {
            int a,b,v;
            cin >> a >> b >> v;
            if (v < graph[a][b]){
                graph[a][b] = graph[b][a] = v;
            }
        }
        vector<int> dis(n+1);
        visit[s] = true;
        for (int i = 1; i < n+1; ++i) {
            if (!visit[i]){
                dis[i] = graph[s][i];
            }
        }
        for (int i = 1; i < n+1; ++i) {
            int min = INF;
            int minindex;
            int flag = true;
            for (int j = 1; j < n+1; ++j) {
                if (!visit[j] && dis[j]<min){
                    min = dis[j];
                    minindex = j;
                    flag = false;
                }
            }
            if (flag) break;
            visit[minindex] = true;
            for (int j = 1; j < n + 1; ++j) {
                if (!visit[j] && dis[j] > dis[minindex]+graph[minindex][j]){
                    dis[j] = dis[minindex]+graph[minindex][j];
                }
            }
        }

        if (dis[t]>=INF){
            cout << "-1" << endl;
        }else{
            cout << dis[t] << endl;
        }
    }

    return 0;
}
