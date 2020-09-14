#include <iostream>
#include<string>
using namespace std;


struct studentData{
    int roll_no;
    string name;
    float marks;
};

struct studentData arr[30];
int count = 5;


int checkRollNo (int roll_no){
    for (int i = 0; i < count; i++){
        if (arr[i].roll_no == roll_no){
            return i;
        }
    }
    return -1;
};



bool addRecord (){
    int checkRoll;
    cout << "\nEnter roll number : ";
    cin >> checkRoll;
    
    if (checkRollNo (checkRoll) == -1){
        arr[count].roll_no = checkRoll;

        cout << "Enter marks : ";
        cin >> arr[count].marks;    

        cout << "Enter name : " ;
        string name;
        // getline(cin, name);
        cin >> name;
        arr[count].name = name;

        return true;
    }
    else{
        cout << "Roll number already exists, please try again." << endl;
        return false;
    }

};



void displayData (){
    cout << "\nRoll No    Name                Marks" << endl;


    for (int i = 0; i < count; i++){

        if(arr[i].roll_no > 0){
            string strRoll = " ";
            strRoll += to_string(arr[i].roll_no);

            while (strRoll.length() < 11)
            {
                strRoll += " ";
            }
            
            
            cout << strRoll << arr[i].name;
            for (int space = arr[i].name.length(); space < 20; space++){
                cout << " ";
            }
            cout << arr[i].marks << endl;
        }
    }
}


void searchRollNo(){
    cout << "\nEnter roll number : ";
    int checkRoll;
    cin >> checkRoll;

    int index = checkRollNo(checkRoll);
    if (index == -1){
        cout << "Record Not found." << endl;
    } 
    else{
        cout << "Name : " << arr[index].name << endl;
        cout << "Marks : " << arr[index].marks << endl;
    }
    
    

}


void deleteRecord(){
    cout << "\nEnter the roll number to be deleted : ";
    int checkRoll;
    cin >> checkRoll;
    int toDelete = checkRollNo (checkRoll);
    if (toDelete != -1){
        
        arr[toDelete].roll_no = -1;
        cout << "Roll number '" << checkRoll << "' record deleted." << endl; 
    }
    else{
        cout << "Roll number '"<< checkRoll << "' dosent exist." << endl;
    }
    
}


int main(){
    

    arr[0].name = "Shlok Zanwar";
    arr[0].roll_no = 1;
    arr[0].marks = 10;

    arr[1].name = "Rohan Gupta";
    arr[1].roll_no = 2;
    arr[1].marks = 9.5;

    arr[2].name = "Sidd Jain";
    arr[2].roll_no = 3;
    arr[2].marks = 9;

    arr[3].name = "Rishi Shrimali";
    arr[3].roll_no = 4;
    arr[3].marks = 8.5;

    arr[4].name = "Aditya Gambhir";
    arr[4].roll_no = 5;
    arr[4].marks = 8;


    while (true){

        cout << "\nEnter operation you want to perform : " << endl;
        cout << "1 : Add new record" << endl;
        cout << "2 : Display all record" << endl;
        cout << "3 : Search record" << endl;
        cout << "4 : Delete a record" << endl;
        cout << "0 : Quit" << endl;

        int task;
        cin >> task;

        switch (task){
            case 1:
                if (addRecord()){
                    count += 1;
                }
                
                break;

            case 2:
                displayData();
                break;

            case 3:
                searchRollNo();
                break;

            case 4:
                deleteRecord();
                break;

            case 0:
                cout << "\nThank You !" << endl; 
                exit(0);
                break;    
            
            default:
                cout << "\nInvalid Input, please try again." << endl;
                break;
        }
        cout << "\n<---------------------------------------------->\n";
    }
}
