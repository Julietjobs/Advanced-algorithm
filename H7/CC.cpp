//录入各个cell中心
//循环计算各个cell的距离，保存并合并相连的
//prime连接

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
#define INF 0x3f3f3f3f
#define ESP 1e-5

struct node{
    double x;
    double y;
    double z;
    double r;
};

struct edge{
    int A;
    int B;
    //struct node *A;
    //struct node *B;
    double dis;
};

bool cmp(struct edge a,struct edge b){
    return a.dis<b.dis;
}

vector<int> boss;
int findboss(int a){
    while (boss[a] != a) a = boss[a];
    return a;
}

double calDis(struct node a,struct node b){
    return sqrt( (a.x -b.x)*(a.x -b.x) + (a.y -b.y)*(a.y -b.y) + (a.z -b.z)*(a.z -b.z));
}

int main(){

    int n;
    cin >> n;
    while(n){

        boss.resize(n);
        for (int i = 0; i < n; ++i) {
            boss[i] = i;
        }
        vector<struct node> nodes;
        for (int i = 0; i < n; ++i) {
            double x,y,z,r;
            cin >> x >> y >> z >> r;
            nodes.push_back({x,y,z,r});
        }

        //求两个node之间的距离
        vector<struct edge> edges;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                double Dis = calDis(nodes[i],nodes[j]);
                double realdis = nodes[i].r+nodes[j].r;
                if ( abs(realdis-Dis) < ESP || realdis>Dis){  //如果两node之间的距离小于半径和，则两个连同；
                    int x = findboss(i);
                    int y = findboss(j);
                    if (x!=y){
                        boss[x] = y;
                    }
                }else{
                    edges.push_back({i,j,Dis-realdis}); //否认就把间距存起来，记得减去半径和
                }
            }
        }

        sort(edges.begin(),edges.end(), cmp);

        double ans = 0;
        for (int i = 0; i < edges.size(); ++i) {
            int x = findboss(edges[i].A);
            int y = findboss(edges[i].B);
            if (x!=y){
                boss[x] = y;
                ans += edges[i].dis;
            }
        }


        cout <<setiosflags(ios::fixed)<<setprecision(3)<< ans << endl;

        cin >> n;
    }

}


