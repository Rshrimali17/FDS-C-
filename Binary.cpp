#include <iostream>

using namespace std;

int len(char str[]) {
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}

void copy_str(char str1[])
{
    char str2[10];
    int i;
    for(i=0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    cout<<"\nCopied string without pointer: "<<str2;
}

char concat(char tar[10],char src[10])
{
    int i,j;
    for(i = 0;tar[i] != '\0';i++);
    for(j = 0;src[j] != '\0';j++,i++) {
        tar[i] = src[j];
    }
    tar[i] = '\0';
    cout <<"\nconcat without pointer:"<<tar;
}


int comp(char str1[],char str2[])
{
    int i = len(str1);
    int j = len(str2);
    
    if(i > j) {
        cout<<"\nwithout pointer String 1 is greater than string 2";
    }
    else if(i < j) {
        cout<<"\nwithout pointer String 2 is greater than string 1";
    }
    else {
        for(i = 0;str1[i] != '\0';i++) {
            if (str1[i] > str2[i]) {
                cout<<"\nwithout pointer String 1 is greater than string 2";
            }
            else if (str1[i] < str2[i]) {
                cout<<"\nwithout pointer String 2 is greater than string 1";
            }
            else {
                cout<<"\nwithout pointer both strings are equal";
            }
        }
    }
}

int rev(char str[])
{
    char revstr[10];
    int i,x=0;
    for(i=0; str[i] != '\0'; i++);
    cout<<"without pointer Reverse string is: ";
    for(i= i-1; i>=0; i--,x++)
    {
        revstr[x] = str[i];
    }
    revstr[x] = '\0';
    cout<<revstr;
}

int len1(char *j)//pointer function
{
    int c;
    for(c=0;*j != '\0';c++,j++);
    cout<<"\nWith pointer length: "<<c;
}

int copy_str1(char *j)//copy string 1 into string 2 with help of pointer
{
    char str2[10];
    int i;
    for(i = 0;*j != '\0';j++,i++) {
        str2[i] = *j;
    }
    cout<<"\nCopied string with pointer: "<<str2;
}

int concat1(char *j,char *k) //concat two strings using pointer
{
    cout<<"\nWith pointer: ";
    char str[10];
    int i;
    // for(i = 0;*j != '\0';j++,i++) {
    //     str[i] = *j;
    // }
    // for(;*k != '\0';k++,i++) {
    //     str[i] = *k;
    // }
    // str[i] = '\0';
    cout<<*j;
}

int comp1(char *j,char *k) //here we compare two string with the help of pointer
{
    
    int m=*j;
    int n=*k;
    int i,l,x=0,y=0;
    for(i=0; *j != '\0'; i++)
    {
        x++;
        j++;
    }
    for(l=0; *k != '\0'; l++)
    {
        y++;
        k++;
    }
    if(x > y)
    {
        cout<<"\nwith pointer String 1 is greater than string 2";
    }
    else if(x < y)
    {
        cout<<"\nwith pointer String 2 is greater than string 1";
    }
    else
    {
        for( ;m!='\0'; i++,m++,n++)
    {
        if(m>n)
        {
            cout<<"\nwith pointer String 1 is greater than string 2";
            break;
        }
        else
        {
         cout<<"\nwith pointer String 2 is greater than string 1";
         break;
        }
    }
    }
}

int rev1(char *j) //with using pointer reverse the string
{
    int x,i;
    char str1[10];
    for(i=0; *j != '\0'; i++,j++); //here we calculate the length of string and than reverse it
    
    cout<<"\nwith pointer reverse string is: ";
    for(j = j-1; i>=0; i--,j--)
    {
        str1[i] = *j;
    }
    str1[i] = '\0';
    cout<<str1[i];
}

int main()
{
    char str1[10],ch,str2[10],*j;
    int i,opt,stlen;
    do {
        cout<<"Enter the string: "; //Asking user to enter first string
        cin>>str1;
   
        cout<<"\n1:To find length of string\n2:To copy string 1 into string 2\n3:To concat string 1 and string 2\n4:To compare string 1 and string 2\n5:To reverse the string"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1: 
                stlen = len(str1);  // call by value (without pointer)
                cout<<"\nlength without pointer : "<<stlen;
                len1(str1); //call by refrence (using pointer)
                break;
            case 2: 
                copy_str(str1);  // call by refernce (without pointer)
                copy_str1(&str1[0]);  // call by refernce (using pointer)
                break;
            case 3:
                cout<<"Please enter second that you want to concate: ";
                cin>>str2;
                cout<<str1;
                concat(str1, str2);    // call by refernce (without pointer)
                concat1(str1, str2);  // call by refernce (using pointer)
                cout<<str1;
                break;
            case 4: cout<<"Please enter second that you want to compare: ";
                cin>>str2;
                comp(str1,str2);  // call by refernce (withot pointer)
                comp1(&str1[0],&str2[0]);  // call by refernce (using pointer)
                break;
            case 5: rev(str1);  // call by refernce (without pointer)
                rev1(&str1[0]);  // call by refernce (using pointer)
                break;
            default: 
                cout<<"Invalid!!"<<endl;
    }
    cout<<"\nDo u want to continue(y/n): ";
    cin>>ch;
   }while(ch == 'y');

}