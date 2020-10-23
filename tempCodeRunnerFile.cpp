// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int i, len, temp, firstIndex, secondIndex;
//     bool descStart = false, descEnd = false, finalCheck=true;
//     cin >> len;
//     int arr[len];
//     cin >> arr[0];
//     for(i=1; i<len; i++){
//         cin >> arr[i];
//         if(descEnd){
//             if(arr[i] < arr[i-1]){
//                 finalCheck = false;
//             }
//         }
//         else{
//             if(descStart){
//                 if(arr[i] > arr[i-1]){
//                     descEnd = true;
//                     secondIndex = i-1;
//                 }
//             }
//             else{
//                 if(arr[i] < arr[i-1]){
//                     descStart = true;
//                     firstIndex = i-1;
//                 }
//             }
//         }

//     }


//     if(finalCheck){
//         if(firstIndex == 0 || secondIndex == len-1){
//             if(firstIndex == 0 && secondIndex == len-1){
//                 cout << "yes\nreverse" << firstIndex+1 << " " << secondIndex +1; 
//             }
//             else if(firstIndex == 0){
//                 if(arr[secondIndex+1] >= arr[firstIndex]){
//                     cout << "yes\nreverse" << firstIndex+1 << " " << secondIndex+1;
//                 }
//             }
//             else{
//                 if(arr[firstIndex-1] <= arr[secondIndex]){
//                     cout << "yes\nreverse" << firstIndex+1 << " " << secondIndex+1;
//                 }
//             }
//         }
//         else if((arr[firstIndex - 1] <= arr[secondIndex]) && (arr[secondIndex+1] >= arr[firstIndex])){
//             cout << "yes\n" <<  "reverse " << firstIndex+1 << " " << secondIndex+1;
//         }
//         else{

//         }
//     }
//     else{
//         // check swap
//     }
    

// }

// ----------------------------------------------------------------------------------------
    
// #include <bits/stdc++.h>
// using namespace std;
// int len;

// bool checkSwap(int arr[]){
//     int i, unusual[2], secUnusual, unusualCount = 0;
//     if(arr[0] > arr[1]){
//         unusual[0] = 0;
//         unusualCount ++;
//     }
//     for(i=1; i<len-2; i++){
//         if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
//             if(unusual < 2){
//                 unusual[unusualCount] = i;
//                 unusualCount ++;
//             }
//             else{
//                 return false;
//             }

//         }
//     }
//     if(unusualCount<2){
//         if(arr[len-1] < arr[len-2]){
//             unusual[unusualCount] = len-1;
//             unusualCount ++;
//         }
//     }
//     else{
//         return false;
//     }

//     if(unusualCount == 1 || unusualCount == 2){
//         if(unusual[0] == 0 || unusual[1] == len-1){
//             if(unusual[0] == 0 && unusual[1] == len-1){
//                 cout << "yes\nswap 1 " << len; 
//             }
//             else if(unusual[0] == 0){
//                 if(unusual[0] <= unusual[unusual[1]+1]){
//                     cout << "yes\nswap 1" << un
//                 }
//             }
//         }
//     }


// }

// bool checkReverse(int arr[]){
//     int i, firstIndex, secondIndex;
//     bool descStart = false, descEnd = false, check = false;

//     for(i = 1; i < len; i++){
//         if(descEnd){
//             if(arr[i] < arr[i-1]){
//                 check = false;
//             }
//         }
//         else{
//             if(descStart){
//                 if(arr[i] > arr[i-1]){
//                     descEnd = true;
//                     secondIndex = i-1;
//                 }
//             }
//             else{
//                 if(arr[i] < arr[i-1]){
//                     descStart = true;
//                     firstIndex = i-1;
//                 }
//             }
//         }
//     }


//     if(check){
//         if(firstIndex == 0 || secondIndex == len-1){
//             if(firstIndex == 0 && secondIndex == len-1){
//                 cout << "yes\nreverse " << firstIndex+1 << " " << secondIndex +1; 
//             }
//             else if(firstIndex == 0){
//                 if(arr[secondIndex+1] >= arr[firstIndex]){
//                     cout << "yes\nreverse " << firstIndex+1 << " " << secondIndex+1;
//                 }
//             }
//             else{
//                 if(arr[firstIndex-1] <= arr[secondIndex]){
//                     cout << "yes\nreverse " << firstIndex+1 << " " << secondIndex+1;
//                 }
//             }
//         }
//         else if((arr[firstIndex - 1] <= arr[secondIndex]) && (arr[secondIndex+1] >= arr[firstIndex])){
//             cout << "yes\nreverse " << firstIndex+1 << " " << secondIndex+1;
//         }

//         return true;
//     }
//     else{
//         return false;
//     }

// }


// int main(){
//     int i;
//     cin >> len;
//     int arr[len];
//     for(i=0; i<len; i++){
//         cin >> arr[i];
//     }




// }
    