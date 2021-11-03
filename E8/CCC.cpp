//按位，从一位子字符串开始，循环判断这个子字符串是不是唯一存在，如果唯一，直接输出

#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<string> vec;
    string input;
    while (cin >> input) {
        vec.push_back(input);
    }
    map<int,string> ans;
    vector<bool> visit(vec.size(),false);
    map<string,int> prefix;
    int nums = vec.size();
    int index = 1;
    while (nums){
        for (int i = 0; i < vec.size(); ++i) {
            if (!visit[i]){
                prefix[vec[i].substr(0,index)]++;
            }
        }
        for (int i = 0; i < vec.size(); ++i) {
            if (!visit[i] && prefix[vec[i].substr(0,index)] == 1){ //如果子字符串唯一
                ans[i] = vec[i].substr(0,index);
                visit[i] = true;
                nums--;
            }else if (!visit[i] && index == vec[i].size()){  //子字符串长度与原字符串本身长度相比
                ans[i] = vec[i];
                visit[i] = true;
                nums--;
            }
        }
        index++;
    }
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " " << ans[i] << endl;
    }

    return 0;
}