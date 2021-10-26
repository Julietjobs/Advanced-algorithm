#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    while (n!=0&&m!=0){

        map<int,vector<int> > mp;
        for (int i = 0; i < m; ++i) {
            int a,b;
            cin >> a >> b;
            mp[a].push_back(b);
        }

        map<int,vector<int> > ans;

        for (int i = 0; i < n; ++i) {
            map<int,bool> visited;
            queue<int> que;
            que.push(i+1);
            visited[i+1] = true;
            while (!que.empty()){
                int top = que.front();
                que.pop();
                for (int j : mp[top]) {
                    if (!visited[j]){
                        que.push(j);
                        ans[i+1].push_back(j);
                        visited[j] = true;
                    }
                }
            }
        }

        bool flag = true;
        for (int i = 0; i < n; ++i) {
            if (ans[i+1].size()!=n-1){
                flag = false;
                break;
            }
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;

        cin >> n >> m ;
    }

}
