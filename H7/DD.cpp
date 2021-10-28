//
//用矩阵存w
//用临界数组存关系
//深度优先搜索
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define INF 0x3f3f3f3f

vector< vector<int> > vet;  //临界矩阵存w
map<int,vector<int> > list; //存与它连通的所有节点
vector<int> visited;
int dfs(int p, int layer,int ans){
    for (int i : list[p]) {  //如果现在这个节点大于两层并与1连通，直接返回
        if (i == 1 && layer>=2){
            ans += vet[i][p];
            return ans;
        }
    }

    //判断是否还有没访问的节点，如果节点都访问完了直接返回
    bool flag = true;
    for (int i : list[p]) {
        if (!visited[i]) {
            flag = false;
            break;
        }
    }
    if (flag) return -1;

    //正常情况，寻找满足条件的最小值
    int min = INF;
    for (int i : list[p]) {
        if (!visited[i]){
            visited[i] = true;

            int num = dfs(i,layer+1,ans+vet[i][p]);
            if(num!=-1){
                min = num<min?num:min;
            }
            visited[i] = false;
        }
    }

    return min;
}

int main(){

    int n,m;
    while (cin >> n >> m){
        visited.resize(n+1);
        vet.resize(n+1);
        for (int i = 1; i <= n; ++i) {
            vet[i].resize(n+1);
            fill(vet[i].begin(),vet[i].end(),INF);
            visited[i] = false;
        }


        map<int,vector<int> > empty_map;
        list.swap(empty_map);
        for (int i = 0; i < m; ++i) {
            int x,y,w;
            cin >> x >> y >> w;
            vet[x][y] = w;
            vet[y][x] = w;
            list[x].push_back(y);
            list[y].push_back(x);
        }

        int output = dfs(1,0,0 );

        if (output!=INF){
            cout << output << endl;
        }else{
            cout << "It's impossible." << endl;
        }


    }

}
