//对周围的城市依次使用dijkstra求解最短路径

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 1010
#define INF 0x3f3f3f3f

vector< vector<int> > mp(MAX);
vector<int> dis(MAX);
int total;

void dijkstra(int s){
    vector<bool> visited(MAX, false);
    visited[s] = true;
    for (int i = 1; i <= total; ++i) {
        dis[i] = mp[s][i];
    }
    for (int i = 1; i < total; ++i) {
        int min = INF;
        int index;
        for (int j = 1; j <= total ; ++j) {
            if (!visited[j] && dis[j] < min){
                index = j;min = dis[j];
            }
        }
        visited[index] = true;
        for (int j = 1; j <= total ; ++j) {
            if (!visited[j] && dis[j] > dis[index] + mp[index][j]){
                dis[j] = dis[index] + mp[index][j];
            }
        }
    }
}

int main(){

    int t,s,d;
    while (cin >> t >> s >> d){
        total = 0;
        for (int i = 0; i < MAX; ++i) {
            mp[i].resize(MAX);
            fill(mp[i].begin(),mp[i].end(),INF);
        }

        for (int i = 0; i < t; ++i) {
            int x,y,w;
            cin >> x >> y >> w;
            total = total>x?total:x;
            total = total>y?total:y;
            mp[x][y] = mp[y][x] = w;
        }
        vector<int> beginCity;
        for (int i = 0; i < s; ++i) {
            int x;
            cin >> x;
            beginCity.push_back(x);
        }
        vector<int> loveCity;
        for (int i = 0; i < d; ++i) {
            int x;
            cin >> x;
            loveCity.push_back(x);
        }

        int ans = INF;
        for (int i:beginCity) {
            dijkstra(i);
            for (int j : loveCity) {
                if (ans > dis[j]) ans = dis[j];
            }
        }
        cout << ans;

    }


}



