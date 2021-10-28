//
// 判断能不能从第一个门走到最后一个，不能就直接false
// 如果可以并且走完还大于0直接输出可以
// 如果可以但走完不大于0就找是否有大于0的环
//      如果能找到就true
//      不能就false
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
using namespace std;
vector<vector<int> > outroom;//从房间出去可以到达的房间列表
vector<vector<int> > inroom;//从哪些房间可以进入这个房间
vector<bool> visited;
map<int,int> w;
int n;
const int MIN = -10000000;

int dfs(int ans,stack<int> &sta){

    if (sta.empty()) return -1;

    if (sta.top()==n) return ans;

    int max = MIN;
    while (!sta.empty()){
        int a = sta.top();
        sta.pop();
        if (!visited[a]){
            visited[a] = true;
            for (int & i : outroom[a]) {
                sta.push(i);
            }
            int num = dfs(ans+w[a],sta);
            if (num!=-1){
                if (num>max) max = num;
            }
            visited[a] = false;
        }
    }
    return max;

}

int main(){

    cin >> n;
    while (n!=-1){
        vector<vector<int> > empty1(n+1);
        vector<vector<int> > empty2(n+1);
        vector<bool> empty3(n+1);
        map<int,int> empty4;

        outroom.swap(empty1);
        inroom.swap(empty2);
        visited.swap(empty3);
        w.swap(empty4);

        for (int i = 1; i < n+1; ++i) {
            visited[i] = false;
            int a,b,c;
            cin >> a >> b ;
            w[i] = a;
            while (b--){
                cin >> c;
                outroom[i].push_back(c);
                auto it = find(inroom[c].begin(), inroom[c].end(), i);
                if (it == inroom[c].end()){
                    inroom[c].push_back(i);
                }
            }
        }

        //判断能否到达终点
        stack<int> sta;
        sta.push(1);
        int left = dfs(0,sta);
        if (left+100>0){  //能到达终点并且剩余大于0
            cout << "winnable" << endl;
            cin >> n;
            continue;
        } else if (left == MIN){  //根本到不了终点
            cout << "hopeless" << endl;
            cin >> n;
            continue;
        }

        //判断是否有环
        bool ishuan = false;
        vector<int> rudu(n+1,0);
        vector<int> chudu(n+1,0);
        for (int i = 1; i < n+1; ++i) {
            rudu[i] = inroom[i].size();
            chudu[i] = outroom[i].size();
        }
        while (true){
            bool flag = false;
            for (int i = 1; i <= n; ++i) {
                if (rudu[i] == 0 || chudu[i]==0){
                    if (rudu[i] == 0){
                        rudu[i] = -1;
                        chudu[i] = -1;
                        for (int j : outroom[i]) {
                            if (rudu[j]>0){
                                rudu[j]--;
                                flag = true;
                            }
                        }
                    }
                    if (chudu[i] == 0){
                        chudu[i] = -1;
                        rudu[i] = -1;
                        for (int j:inroom[i]){
                            if (chudu[j]>0){
                                chudu[j]--;
                                flag = true;
                            }
                        }
                    }
                }
            }
            if (!flag) break;
        }

        int huannum = 0;
        for (int i = 1; i < n+1; ++i) {
            if (rudu[i]>0){
                huannum += w[i];
            }
        }
        if (huannum>0){
            cout << "winnable" << endl;
            cin >> n;
            continue;
        }

        cout << "hopeless" << endl;

        cin >> n;
    }
}
