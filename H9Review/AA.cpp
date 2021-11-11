//
// Created by Jobs on 2021/11/11.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int x;
    int y;
};

bool cmp(node a,node b){
    return a.x < b.x;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<node> vet;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        vet.push_back({a,b});
    }
    sort(vet.begin(),vet.end(), cmp);
    int cost = 0;
    for (int i = 0; i < vet.size(); ++i) {
        if (vet[i].y>cost+vet[i].x){
            cost+=vet[i].x;
            ans++;
        }
    }
    cout << ans;
}