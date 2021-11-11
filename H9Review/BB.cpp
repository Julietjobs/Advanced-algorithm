//
// Created by Jobs on 2021/11/11.
//
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct node{
    int ai;
    int bi;
};

int limit,n,m;
vector<node> vet;
vector<node> ans;

bool cmp(node a,node b){
    return a.ai > b.ai;
}

int dfs(int layer,int sum,int p,int weight){
    if (weight>limit){
        return -1;
    }
    if (layer==m){
        return sum;
    }
    if (p>=vet.size() && layer <m){
        return -1;
    }

    for (; p < vet.size(); ++p) {
        ans.push_back(vet[p]);
        int a = dfs(layer+1,vet[p].ai+sum,p+1,weight+vet[p].bi);
        if (a!=-1){
            return a;
        } else{
            ans.pop_back();
        }
    }
    return -1;
}

int main(){

    cin >> limit >> n >> m;

    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        vet.push_back({a,b});
    }
    sort(vet.begin(),vet.end(), cmp);
    dfs(0,0,0,0);

    int leng = ans.size();
    if (leng%2 == 0){
        int out = (ans[leng/2-1].ai + ans[leng/2].ai)/2;
        cout << out << endl;
    }else{
        cout << ans[(leng+1)/2 -1].ai << endl;
    }

    return 0;

}
