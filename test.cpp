#include <iostream>
#include <string>         

using namespace std;

int main() {
    struct Class{
        int Roll_no;
        string Name;
        float Marks; 
    };
    Class S1;
    S1.Name = "Shlok";
    S1.Roll_no = 71;
    S1.Marks = 99.5;
    cout << "Name : " << S1.Name << endl ;
    cout << "Roll No. : " << S1.Roll_no << endl ;
    cout << "Marks : " << S1.Marks << endl ;

    int var = 10, *ptr, **pptr;
    ptr = &var;
    pptr = &ptr;

    cout << "Value of var = " << var << endl;
    cout << "Value of ptr = " << ptr << endl;
    cout << "Value of var from ptr = " << *ptr << endl;
    cout << "Value of pptr = " << pptr << endl;
    cout << "Value of ptr from pptr = " << *pptr << endl;

    int arr[3] = {1, 2, 3};
    ptr = arr;

    for(int i=0; i<3; i++){
        cout << *(++ptr) << endl;
    }

}
