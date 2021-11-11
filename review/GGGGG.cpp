//
// Created by Jobs on 2021/11/10.
//

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

char input[1000100];

int main(){

    string n;
    //string input;

    cin >> n;
    getchar();
    int p = 0;
    gets(input);
    //getline(cin,input);
    int count = 0;
    for (int i = 0; i < 1000100; ++i) {
        if (input[i] == '\0') break;
        count++;
    }

    transform(n.begin(),n.end(),n.begin(),::tolower);

    for (int i = 0; i < count; ++i) {
        if (input[i]>='A' && input[i]<='Z'){
            input[i] = input[i] + 'a' - 'A';
        }
    }


    cout << input << endl;

    int location = -1;
    int times = 0;
    while (p<count){
        int first,last;
        while (p<count && input[p]==' ')p++;
        first = p;
        while (p<count && input[p]!=' ')p++;
        last = p;
        string word = "";
        for (int i = 0; i < last - first; ++i) {
            word += input[i+first];
        }
        //string word = input.substr(first,last-first);
        transform(word.begin(),word.end(),word.begin(),::tolower);
        if (word == n){
            if (location==-1)location = first;
            times++;
            //cout << times << endl;

        }

    }
    //cout << p << " " << input.size() << endl;
    if (location!=-1){
        cout << times << " " <<location ;
    }else cout << "-1";

    //I
    //heloo oa isd s d   ii Is io i ioi iioi ooooi

    return 0;
}