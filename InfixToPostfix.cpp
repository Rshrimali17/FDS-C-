// #include<bits/stdc++.h>
// using namespace std;

// stack <char> s;


// int priority(char oper){
//     if(oper == '+' || oper == '-'){
//         return (1);
//     }

//     if(oper == '*' || oper == '/'){
//         return (2);
//     }

//     if(oper == '^'){
//         return (3);
//     }

//     return 0;
// }


// string convert(string infix){
//     int i = 0;
//     string postfix = "";

//     while(infix[i] != '\0'){
//         // cout << infix[i] << endl;
//         // cout << postfix << endl;
//         if(infix[i] >= 'A' && infix[i] <= 'Z' || infix[i] >= 'a' && infix[i] <= 'z'){
//             postfix += infix[i]; 
//         }
//         else if(infix[i] == ')'){
//             while(s.top() != '('){
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//         else if(infix[i] == ']'){
//             while(s.top() != '['){
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//         else if(infix[i] == '}'){
//             while(s.top() != '{'){
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//         else{
//             if(s.empty()){
//                 s.push(infix[i]);
//             }
//             else{
//                 // if(priority(infix[i]) > priority(s.top())){
//                 //     s.push(infix[i]);
//                 // }
//                 // else{
//                 //     while(!s.empty()){
//                 //         postfix += s.top();
//                 //         s.pop();
//                 //     }
//                 //     s.push(infix[i]);
//                 // }
//                 while(priority(infix[i]) <= priority(s.top())){
//                     postfix += s.top();
//                     s.pop();
//                     if(s.empty()){
//                         break;
//                     }
//                 }
//                 s.push(infix[i]);
//             }
//         }
// //  || s.top() == '(' || s.top() == '{' || s.top() == '['
//         i ++;
//     }
//     while(!s.empty()){
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }


// int main(){
//     string infix, postfix;
//     cin >> infix;
//     // cout << infix;
//     postfix = convert(infix);
//     cout << postfix;
// }




#include <iostream>
using namespace std;

struct Process{
    char name;
    int arrivalTime;
    int newArrivvalTime;
    
    int burstTime;
    int burstLeft;
    
    int exitTime;
    bool notDone = true;
};


int findShortestSJF(Process *index, int noOfProcess, int time);
int findFirstArrived(Process *index, int noOfProcess, int previous);
bool allNotDone(Process *index, int noOfProcess);
void RR(Process *index, int noOfProcess, int timeQuan);
void FCFS(Process *index, int noOfProcess);
void SJF(Process *index, int noOfProcess);
void giveSpaces(int count);
void displayTable(Process *index, int noOfProcess);



int main(){
    int method, timeQuan;
    cout << "Enter method : " << endl;
    cout << "1 : First in first out (FIFO)" << endl;
    cout << "2 : Shortest job first (SJF)" << endl;
    cout << "3 : Shortest time to completion first (STCF)" << endl;
    cout << "4 : Round Robbin (RR)" << endl;
    cout << "Choice : ";

    cin >> method; 
    if(method == 4){
        cout << "Enter time quantum : ";
        cin >> timeQuan;
    }

    int noOfProcess;
    cout << "\nEnter number of process : ";
    cin >> noOfProcess;
    Process mainArr[noOfProcess];

    for (int i = 0; i < noOfProcess; i++){
        cout << "Process " << i+1 << " :-" << endl; 
        cout << "    Enter process char (A, B....) : ";
        cin >> mainArr[i].name;
        cout << "    Enter arrival time : ";
        cin >> mainArr[i].arrivalTime;
        cout << "    Enter Burst time : ";
        cin >> mainArr[i].burstTime;
    
        mainArr[i].burstLeft = mainArr[i].burstTime;
        mainArr[i].newArrivvalTime = mainArr[i].arrivalTime;
        cout << "\n\n";
    }

    switch (method){
        case 1:
            FCFS(mainArr, noOfProcess);
            break;
        
        case 2:
            SJF(mainArr, noOfProcess);
            break;

        case 3:
            STCF(mainArr, noOfProcess);
            break;

        case 4:
            RR(mainArr, noOfProcess, timeQuan);
            break;

        default:
            cout << "Invalid input, using FIFO method" << endl;
            FCFS(mainArr, noOfProcess);
            break;
    }
    displayTable(mainArr, noOfProcess);    
}


int findShortestSJF(Process *index, int noOfProcess, int time){
    int count = 0;
    int leastTime, leastIndex = -1;


    for (int i = 0 ; i < noOfProcess; i++){
        if(index->notDone){
            if(index->newArrivvalTime <= time){
                if (count == 0){
                    leastTime = index->burstLeft;
                    leastIndex = i;
                    count ++;
                }
                else{
                    if(leastTime > index->burstLeft){
                        leastTime = index->burstLeft;
                        leastIndex = i;
                    }
                }
            }   
        }
        index += 1;
    }

    return leastIndex;
    
}


int findFirstArrived(Process *index, int noOfProcess, int previous){
    int firstIndex;
    int leastValue;
    int i;
    int count = 0;
    
    index += previous + 1;

    for (i = previous + 1; i < noOfProcess; i++){
        
        if(index->notDone){
            if (count == 0){
                leastValue = index->newArrivvalTime;
                firstIndex = i;
                count ++ ;
            }
            else{
                if (leastValue > index->newArrivvalTime){
                    firstIndex = i;
                    leastValue = index->newArrivvalTime;
                }
            }
        }
        index += 1;
    }

    index -= noOfProcess;

    for (i = 0 ; i < previous + 1; i++){
        if(index->notDone){
            if (count == 0){
                leastValue = index->newArrivvalTime;
                firstIndex = i;
                count ++ ;
            }
            else{
                if (leastValue > index->newArrivvalTime){
                    firstIndex = i;
                    leastValue = index->newArrivvalTime;
                }
            }
        }
        index += 1;
    }

    // cout << firstIndex << "    " << (index-noOfProcess+firstIndex)->newArrivvalTime << endl;

    return firstIndex;
}


bool allNotDone(Process *index, int noOfProcess){
    for (int i = 0; i < noOfProcess; i++){
        if (index->notDone){
            return true;
        }
        index ++;
    }
    return false;
}


void RR(Process *index, int noOfProcess, int timeQuan){
    int time = 0;
    int firstArrived = -1;
    while (allNotDone(index, noOfProcess)){
        firstArrived = findFirstArrived(index, noOfProcess, firstArrived);
        Process *temp = index;
        temp += firstArrived;

// when processor has no process
        if(temp->newArrivvalTime > time){
            time = temp->newArrivvalTime;
        }

        if(temp->burstLeft < timeQuan){
            time += temp->burstLeft;
            temp->burstLeft -= temp->burstLeft;
        }
        else{
            time += timeQuan;
            temp->burstLeft -= timeQuan;
        }

        temp->newArrivvalTime = time;
        if (temp->burstLeft == 0){
            temp->exitTime = time;
            temp->notDone = false;
        }

    }
    

}


void FCFS(Process *index, int noOfProcess){
    int time = 0;
    // int firstArrived = -1;
    while (allNotDone(index, noOfProcess)){
        int firstArrived = findFirstArrived(index, noOfProcess, -1);
        Process *temp = index;
        temp += firstArrived;

        if(temp->arrivalTime > time){
            time = temp->arrivalTime;
        }

        time += temp->burstTime;
        temp->exitTime = time;
        temp->notDone = false;
    }
    cout << "Total time = " << time << endl;
}


void SJF(Process *index, int noOfProcess){
    int time = 0, firstArrived;
    while (allNotDone(index, noOfProcess)){
        firstArrived = findShortestSJF(index, noOfProcess, time);
        Process *temp = index;
        temp += firstArrived;

        if(firstArrived == -1){
            time += 1;
            continue;
        }

        time += temp->burstTime;
        temp->exitTime = time;
        temp->notDone = false;
    }
    
}


void giveSpaces(int count){
    for (int i = 0; i < count; i++){
        cout << " ";
    }
}


// 4 10 8 14
void displayTable(Process *index, int noOfProcess){
    float totalTAT = 0, totalWaiting = 0;
    cout << "\nId  Arrival   Burst   Turn-around   Waiting time\n" << endl;
    for (int i = 0; i < noOfProcess; i++){
        cout << index->name << "      " << index->arrivalTime;
        giveSpaces(10 - to_string(index->arrivalTime).length());
        cout << index->burstTime;
        giveSpaces(8 - to_string(index->burstTime).length());
        int tat = index->exitTime - index->arrivalTime;
        cout << tat;
        giveSpaces(14 - to_string(tat).length());
        cout << tat-index->burstTime;

        totalTAT += tat;
        totalWaiting = totalWaiting + tat - index->burstTime;

        index ++;
        cout << "\n";
    }

    float avgTAT = totalTAT/noOfProcess;
    float avgWaiting = totalWaiting/noOfProcess;

    cout << "Avg turn around time = " << avgTAT << endl;
    cout << "Avg waiting time = " << avgWaiting << endl;
    
}


