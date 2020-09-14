// #include<iostream>
// using namespace std;

// int withoutpointers(char [],char [])
// int usingpointers(char *,char *)

// int main()
// {
//     char str1[20],ch,str2[20];
//     int i,c;
//     cout<<"Performing certain operations on strings"<<endl;
//     do{
//    cout<<"Enter the first string: "; //Asking user to enter the strings
//    cin>>str1;
//     cout<<"Enter the second string: "; 
//    cin>>str2;
//    cout<<"\nTo find length of string\nTo copy string 1 into string 2\nTo concat string 1 and string 2\nTo compare string 1 and string 2\nTo reverse the string"<<endl;
//    cout<<"1:Without using Pointers\n2:Using Pointers"<<endl; 
//    cin>>c;
//    switch(c)
//     {
//         case 1:
//         cout<<"Without using Pointers"<<endl;
//         withoutpointers(str1, str2);
//         break;
        
//         case 2:
//         cout<<"Using Pointers"<<endl;
//         usingpointers(&str1[0],&str2[0]);
//         break;
//         default: cout<<"Invalid!!"<<endl;
//     }
//     cout<<"\nDo u want to continue(y/n): ";
//      cin>>ch;
//         }
//         while(ch == 'y');
// }        
        
//     int withoutpointers(char str1[],char str2[])
//     {
//             int x,y;
//             char temp1[20],temp2[20];
//         for(x=0; str1[x] != '\0'; x++)
//         {
//                  str1[x] = temp1[x];
//         }
//         for(y=0; str2[y] != '\0'; y++)
//         {
//                  str2[y] = temp2[y];
//         }
//             int i,count_len=0;
//         for(i=0; str[i] != '\0'; i++)
//         {
//               count_len++;
//         }
//             cout<<"\nlength: "<<count_len;
   
//             int p,j;
//         for(p=0; str1[p] != '\0'; p++)
//         {
//              str2[p] = str1[p];
//         }
//             cout<<"Copied String: "<<str2;
//             cout<<"\nConcatinated String: "<<temp1<<temp2;
//             int a,b,v=0,m=0;
//         for(a=0; temp1[a] != '\0'; a++)
//         {
//              v++;
//         }
//         for(b=0; temp2[b] != '\0'; b++)
//         {
//              m++;
//         }
//         if(v > m)
//         {
//         cout<<"String 1 is greater than string 2";
//         }
//         else
//         {
//         cout<<"String 2 is greater than string 1";
//         }
//         int r,t=0;
//         for(r=0; temp1[r] != '\0'; r++)
//         {
//          t++;
//         }
//         cout<<"Reverse string is: ";
//         for(r= t-1; r>=0; r--)
//         {
//         cout<<temp1[r];
//         }
//     }
//     int usingpointers(char*a,char*b)
//    {
//       int c=0;
//     while(*a != '\0')
//     {
//         c++;
//         a++;
//     }
//     cout<<"\nlength: "<<c; 
    
//      char str4[10];
//     int i=0;
//     while(*a != '\0')
//     {
//        str4[i] = *a;
//        a++;
//        i++;
//     }
//     cout<<"\nCopied string: "<<str4;
    
//      cout<<"\nConcatinated String: ";
//     while(*a != '\0')
//     {
//         cout<<*a;
//         a++;
//     }
//     while(*b != '\0' )
//     {
//         cout<<*b;
//         b++;
//     }
    
//      int d,l,x=0,y=0;
//     for(d=0; *a != '\0'; d++)
//     {
//         x++;
//         a++;
//     }
//     for(l=0; *b != '\0'; l++)
//     {
//         y++;
//         b++;
//     }
//     if(x > y)
//     {
//         cout<<"\n String 1 is greater than string 2";
//     }
//     else
//     {
//         cout<<"\n String 2 is greater than string 1";
//     }
    
//     int k,p;
//     char str3[10];
//     for(p=0; *a != '\0'; p++) //here we cal the length of string and than reverse it
//     {
//         str3[p]=*a;
//         k++;
//         a++;
//     }
//     cout<<"\nreverse string is: ";
//     for(p= k; p>=0; p--)
//     {
//         cout<<str3[p];
//    }
//    }