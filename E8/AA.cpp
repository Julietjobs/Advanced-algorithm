#include <map>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define INF 0x3f3f3f3f

struct str{
    string order;
    int v;
};

bool cmp(struct str a,struct str b){
    return a.v < b.v;
}

int main(){

    int n,m;
    cin >> n >> m;
    vector<struct str> vec;
    for (int i = 0; i < m; ++i) {
        string a;
        cin >> a;
        map<char,int>mp;
        char aa = 'A', cc = 'C', gg='G',tt = 'T';
        mp[aa] = mp[cc] = mp[gg] = mp[tt] = 0;
        int ans = 0;
        for (int j = a.size()-1; j >=0; --j) {
            if (a[j] == aa){
                mp[aa]++;
            } else if (a[j] == cc){
                mp[cc]++;
                ans += mp[aa];
            } else if (a[j] == gg){
                mp[gg]++;
                ans += mp[aa]+mp[cc];
            }else{
                mp[tt]++;
                ans += mp[aa]+mp[cc]+mp[gg];
            }
        }
        vec.push_back({a,ans});
    }

    sort(vec.begin(),vec.end(), cmp);
    for (int i = 0; i < m; ++i) {
        cout << vec[i].order << endl;
    }

    return 0;
}

