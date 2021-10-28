#include <iostream>
#include <vector>
using namespace std;
#define INF 0x3f3f3f3f

int dis[1005];
vector< vector<int> > vet;
void dijkstra(int n)
{
    int visit[1001]={0};
    int min,i,j,k;
    visit[1]=1;
    for(i=1;i<n;++i)
    {
        min=INF;
        k=1;
        for(j=1;j<=n;++j)
        {
            if(!visit[j]&&min>dis[j])
            {
                min=dis[j];
                k=j;
            }
        }
        visit[k]=1;
        for(j=1;j<=n;++j)
        {
            if(!visit[j]&&dis[j]>dis[k]+vet[k][j])
                dis[j]=dis[k]+vet[k][j];
        }
    }
    printf("%d\n",dis[n]);
}


int main(){

    int t,n;
    cin >> t >> n;

    vet.resize(n+1);
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

    for(int i=1;i<=n;++i)
        dis[i]=vet[1][i];
    dijkstra(n);


    return 0;

}
