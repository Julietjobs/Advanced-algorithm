#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int casess;
    cin >> casess;
    while (casess--){
        map<int,vector<int> > row;
        map<int,vector<int> > col;
        map<int,int> fruit;  //fruit value
        int N,M,K;
        int fruitID = 0;
        cin >> N >> M >> K;
        for (int i = 0; i < K; ++i) {
            int x,y,c;
            cin >> x >> y >> c;
            fruit[fruitID] = c;
            row[x].push_back(fruitID);
            col[y].push_back(fruitID);
            fruitID++;
        }
        int T;
        cin >> T;
        cout << "Case #"<<casess+1 << ":"<<endl;
        while (T--){
            int q,a,b;
            cin >> q >> a >> b;
            if (q == 1){
                vector<int> temp;
                temp = row[a];
                row[a] = row[b];
                row[b] = temp;
            } else if (q == 2){
                vector<int> temp;
                temp = col[a];
                col[a] = col[b];
                col[b] = temp;
            } else{
                int energy = -1;
                for (int i = 0; i < row[a].size(); ++i) {
                    auto it = find(col[b].begin(),col[b].end(),row[a][i]);
                    if (it != col[b].end()){
                        energy = fruit[row[a][i]];
                    }
                }
                if (energy<0) cout << 0 << endl;
                else cout<< energy << endl;
            }
        }
    }

    return 0;
}
