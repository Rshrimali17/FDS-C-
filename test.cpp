#include <bits/stdc++.h>
using namespace std;


int main() {
    int s[6] = {1, 2, 3, 4, 5, 5};
    int *p = &s[0];
    // s ++;
    // *s = 'm';
    cout << p[0];


    // long noOfCases;
    // cin >> noOfCases;

    // while(noOfCases != 0){
    //     string str;
    //     cin >> str;
    //     long halfLen = str.length()/2, i, noOfQuesmarks = 0, ans, noOfCombi = 1;
    //     bool noAns = false;

    //     for(i=0; i<halfLen; i++){
    //         if(str[i] == '?' && str[i+halfLen] == '?'){
    //             noOfCombi = noOfCombi*2;
    //             noOfQuesmarks += 2;
    //         }
    //         else if(str[i] == '?' || str[i+halfLen] == '?'){
    //             noOfQuesmarks += 1;
    //         }
    //         else if(str[i] != str[i+halfLen]){
    //             noAns = true;
    //         }
            
    //     }

    //     if(noAns){
    //         noOfCombi = 0;
    //     }
        
    //     ans = pow(2, noOfQuesmarks) - noOfCombi;
    //     cout << (ans)%1000000007 << endl;



    //     noOfCases --;
    // }

    return 0;
}    
