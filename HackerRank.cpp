#include <bits/stdc++.h> 
using namespace std; 
  
// A function to find factorial of a given number 
unsigned long int factorial(unsigned int n) 
{ 
    unsigned long int res = 1; 
  
    // Calculate value of [1*(2)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (int i = 1; i <= n; ++i) 
    { 
        res *= i; 
    } 
  
    return res; 
} 
  
unsigned long int binomialCoeff(unsigned int n, unsigned int k) 
{ 
    unsigned long int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
  
  
// A Binomial coefficient based function to find nth catalan 
// number in O(n) time 
unsigned long int catalan(unsigned int n) 
{ 
    // Calculate value of 2nCn 
    unsigned long int c = binomialCoeff(2*n, n); 
  
    // return 2nCn/(n+1) 
    return c/(n+1); 
} 
  
// A function to count number of BST with n nodes  
// using catalan 
unsigned long int countBST(unsigned int n) 
{ 
    // find nth catalan number 
    unsigned long int count = catalan(n); 
  
    // return nth catalan number 
    return count; 
} 
  
// A function to count number of binary trees with n nodes  
unsigned long int countBT(unsigned int n) 
{ 
    // find count of BST with n numbers 
    unsigned long int count = catalan(n); 
  
    // return count * n! 
    return count * factorial(n); 
} 
  
// Driver Program to test above functions 
int main() 
{ 
  
    int count1,count2, n = 5; 
  
    // find count of BST and binary trees with n nodes 
        count1 = countBST(n); 
        count2 = countBT(n);  
      
    // print count of BST and binary trees with n nodes 
    cout<<"Count of BST with "<<n<<" nodes is "<<count1<<endl; 
        cout<<"Count of binary trees with "<<n<<" nodes is "<<count2; 
  
    return 0; 
} 

//  -------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int noOfBuildings, i, j, k;
//     cin >> noOfBuildings;
//     int arr[noOfBuildings],  maxAns =  noOfBuildings;

//     for(i=0; i<noOfBuildings; i++){
//         cin >> arr[i];
//     } 

//     for(j = 2; j <= arr[0]; j ++){
//         for(k=0; k<noOfBuildings; k++){
//             if(arr[k] < j){
//                 break;
//             }
//         }  
//         maxAns = max(((k)*j), maxAns);
//     }

//     for(i=1; i<noOfBuildings; i++){
        
//         if(arr[i] > arr[i-1]){
//             for(j = arr[i-1]+1; j <= arr[i]; j ++){
//                 for(k=i; k<noOfBuildings; k++){
//                     if(arr[k] < j){
//                         break;
//                     }
//                 }       
//                 maxAns = max(((k-i)*j), maxAns);
//                 cout << i << " " << j << " " << k << " " << maxAns << endl;
//             }
//         }
//     }

//     cout << maxAns;

// }

//  ---------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;


// int downToZero(int n) {
//     int count = 0, i;
//     while(n != 0){
//         vector <int> store;
//         for(i=2; i<= n/2; i++){
//             if(n%i == 0){
//                 store.push_back(i);
//             }
//         }

//         cout << n << " => ";
//         int len = store.size();

//         if(len == 0){
//             count ++;
//             n--;
//         }
//         else{
//             count ++;
//             n = store[len/2];
//         }
//         // else{
//         //     count ++;
//         //     n = store[store.size()/2];
//         // }

//         // store.clear() ;
//     }
//     return count;
// }

// int main(){
//     int noOfCases, n;
//     // cin >> noOfCases;
//     // while (noOfCases != 0){
//         cin >> n;
//         cout << downToZero(n) << endl;

//         // noOfCases --;
//     // }
// }


// --------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// long long int maxSum, ans;


// void checkStack(vector<long long int> vA, vector<long long int> vB, long long int count, long long int temp){
//     long long int store;
//     store = vA.back();
    
// }


// int main(){
    // long long int noOfCases, lenA, lenB, temp;
    // cin >> noOfCases;
    // while (noOfCases != 0){
    //     cin >> lenA >> lenB >> maxSum;
    //     vector <long long int> vA, vB;
    //     ans = lenA + lenB;

    //     while(lenA != 0){
    //         cin >> temp;
    //         vA.insert(vA.begin(), temp);
    //         lenA --;
    //     }

    //     while(lenB != 0){
    //         cin >> temp;
    //         vB.insert(vB.begin(), temp);
    //         lenB--;
    //     }

    //     temp = 0;
        

    //     noOfCases --;
    // }
    // for(char i='a'; i<='z'; i++){
    //     cout << i << endl;
    // }
    // cout << (char)90;
// }


// --------------------------------------------------------------

// Can use stack instead of vector

// #include <bits/stdc++.h>
// using namespace std;


//long long int getGreatestlong long int ht1,long long int ht2,long long int ht3){
//     return ht1 > ht2 ? (ht1 > ht3 ? 1 : 3) : (ht2 > ht3 ? 2 : 3);
// }


//long long int main(){
//    long long int len1, len2, len3, ht1 = 0, ht2 = 0, ht3 = 0, temp;
//     cin >> len1 >> len2 >> len3;

//     vector long long int> cy1, cy2, cy3;
//     while(len1 != 0){
//         cin >> temp;
//         ht1 += temp;
//         cy1.insert(cy1.begin(), temp);
//         len1--;
//     }

//     while(len2 != 0){
//         cin >> temp;
//         ht2 += temp;
//         cy2.insert(cy2.begin(), temp);
//         len2--;
//     }

//     while(len3 != 0){
//         cin >> temp;
//         ht3 += temp;
//         cy3.insert(cy3.begin(), temp);
//         len3--;
//     }

//     while(ht1 == ht2 && ht2 == ht3){
//        long long int greatest = getGreatest(ht1, ht2, ht3);
//         switch (greatest){
//             case 1:
//                 ht1 -= cy1[cy1.size()-1];
//                 cy1.pop_back();
//                 break;
            
//             case 2:
//                 ht2 -= cy2[cy2.size()-1];
//                 cy2.pop_back();
//                 break;

//             case 3:
//                 ht3 -= cy3[cy3.size()-1];
//                 cy3.pop_back();
//                 break;

//         }
//     }

//     cout << ht1;


// }



// --------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// string isBalanced(string str) {
//     vector <char> s;
//    long long int i;
//     for(i=0; i<str.length(); i++){
//        long long int len = s.size();

//         if(s.empty()){
//             if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
//                 return "NO";
//             }
//         }
        
//         if(str[i] == ')'){
//             if(s[len-1] == '('){
//                 s.pop_back();
//             }
//             else{
//                 return "NO";
//             }
//         }
//         else if(str[i] == '}'){
//             if(s[len-1] == '{'){
//                 s.pop_back();
//             }
//             else{
//                 return "NO";
//             }
//         }
//         else if(str[i] == ']'){
//             if(s[len-1] == '['){
//                 s.pop_back();
//             }
//             else{
//                 return "NO";
//             }
//         }
//         else{
//             s.push_back(str[i]);
//         }
//     }

//     if(s.empty()){
//         return "YES";
//     }
//     else{
//         return "NO";
//     }

// }


//long long int main(){
//    long long int noOfCases;
//     cin >> noOfCases;
//     while (noOfCases != 0){
//         string str;
//         cin >> str;

//         cout << isBalanced(str) << endl;

//         noOfCases--;
//     }
// }


//  ------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

 
// long longlong long int getIndex(vector<long longlong long int> v, long longlong long int input){
//     long longlong long int index, first = v[v.size()-2], second = v[v.size()-1], i;
//     if(input >= second){
//         return -1;
//     }
//     else{
//         for(i=v.size()-1; i>0; i--){
//             if(input < second && input >= first){
//                 return i;
//             }
//             second = v[i-1];
//             first = v[i-2];
//         }
//         return 0;
//     }
// }
 
 
//long long int main()
// {
// long longlong long int input, i, len, index, sum = 0, j, temp = 0;
//    cin >> len;
//    vector<long longlong long int> arr;
//    for(i=0; i<len; i++){
//        cin >> input;
//        if(i==0){
//            arr.push_back(input);
//        }
//        else if(i==1){
//            if(arr[0] > input){
//                arr.insert(arr.begin(), input);
//            }
//            else{
//                arr.push_back(input);
//            }
//        }
//        else{
//            index = getIndex(arr, input);
//            if(index == -1){
//                arr.push_back(input);
//                sum += temp + input*arr.size();
//                continue;
//            }
//            else{
//                arr.insert(arr.begin()+index, input);
//            }
//        }
       
//        temp = 0;
       
//        for(j=0; j<arr.size(); j++){
//            temp += (j+1)*arr[j];
//        }
       
//        sum += temp;
//    }
    
//    cout << sum%1000000007; 
// }



// ----------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// struct struc{
//    long long int num;
//     string str;
// };

//long long int main(){
//    long long int i, j, len;
//     string temp;
//     cin >> len;
//     struc arr[len]; 

//     for(i = 0; i < len/2; i++){
//         cin >> arr[i].num >> temp;
//         arr[i].str = "-";
//     }

//     for(i = len/2; i < len; i++){
//         cin >> arr[i].num >> arr[i].str;
//     }

//     for(i = 0; i<len; i++){
//         for(j = 0; j<len-1; j++){
//             if(arr[j+1].num < arr[j].num){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     for(i=0; i< len; i++){
//         cout << arr[i].str << " ";
//     }



// }


//  ---------------------------------------------------------------------------------------------------------


//long long int main(){
//    long long int noOfCases, len, temp, i;
//     cin >> noOfCases;
//     while (noOfCases != 0){
//         cin >> len;
//         for(i=1; i<=len; i++){
//             cin >> temp;
//             if(temp%i != 0){
//                 break;
//             }
//         }
//         if(i == len+1){
//             cout << "YES\n";
//         }
//         else{
//             cout << "NO\n";
//         }
//     }
// }



//  ---------------------------------------------------------------------------------------------------------


//long long int main() {
//    long long int noOfCases, mainRows, mainCol, searchRows, searchCol, i, j, p, q;
//     cin >> noOfCases;

//     while (noOfCases != 0){
//         bool notFound = true;
//         cin >> mainRows >> mainCol;
//        long long int mainArr[mainRows][mainCol];

//         for(i = 0; i<mainRows; i++){
//             for(j = 0; j<mainCol; j++){
//                 scanf("%1d" ,&mainArr[i][j]);
//             }
//         }

//         cin >> searchRows >> searchCol;
//        long long int searchArr[searchRows][searchCol];

//         for(i = 0; i<searchRows; i++){
//             for(j = 0; j<searchCol; j++){
//                 scanf("%1d",&searchArr[i][j]);
//             }
//         }

//         for(i = 0; i <= mainRows-searchRows; i++){
//             for(j = 0; j <= mainCol-searchCol; j++){
//                 if(notFound){
//                     if(mainArr[i][j] == searchArr[0][0]){
//                         for(p = 0; p<searchRows; p++){
//                             for(q = 0; q<searchCol; q++){
//                                 if(mainArr[i+p][j+q] != searchArr[p][q]){
//                                     break;
//                                 }
//                             }
//                             if(q != searchCol){
//                                 break;
//                             }
//                         }
//                         if(p == searchRows){
//                             notFound = false;
//                         }
//                     }
//                 }
//                 else{
//                     break;
//                 }
//             }
//             if(j != mainCol-searchCol+1){
//                 break;
//             }
//         }

//         if(notFound){
//             cout << "NO" << endl;
//         }
//         else{
//             cout << "YES" << endl;
//         }

//         noOfCases -= 1;

//     }


// }


// 1
// 10 10
// 7 2 8 3 4 5 5 8 6 4
// 6 7 3 1 1 5 8 6 1 9 
// 8 9 8 8 2 4 2 6 4 3
// 3 8 3 0 5 8 9 3 2 4
// 2 2 2 9 5 0 5 8 1 3
// 5 6 3 3 8 4 5 3 7 4
// 6 4 7 3 5 3 0 2 9 3 
// 7 0 5 3 1 0 6 6 0 1
// 0 8 3 4 2 8 2 9 5 6
// 4 6 0 7 9 2 4 1 3 7
// 3 4
// 9 5 0 5
// 3 8 4 5
// 3 5 3 0

