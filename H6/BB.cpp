#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;



int main(){
    int n;
    cin >> n;
    while (n){
        set<string> st;
        int ID=0;
        map<string,int> mp;
        int ans=0;
        for (int i = 0; i < n; ++i) {
            string a,b;
            cin >> a >> b;
            st.insert(a);
            st.insert(b);
            mp[b]++;
        }
        for (auto i = st.begin(); i !=st.end() ; ++i) {
            if (mp[*i]<1) ans++;
        }
        if (ans==1){
            cout << "Yes";
        }else{
            cout << "No";
        }
        cout << endl;

        cin >> n;

    }
}