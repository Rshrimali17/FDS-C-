/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

typedef struct sparse
{
    int col,row,value;
}TERM;

void convert_sparse(int a[7][7],TERM s1[10],int m,int n,int k)
{
    s1[0].row=m;
    s1[0].col=n;
    s1[0].value=k;
    int p=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                s1[p].row=i;
                s1[p].col=j;
                s1[p].value=a[i][j];
                p++;
            }
        }
    }
}
void display(TERM s[10] , int k)
{
    cout<<"Elements of sparse matrix are: \n";
    for(int i=0;i<=k;i++)
    {
        cout<<s[i].row<<"\t"<<s[i].col<<"\t"<<s[i].value<<endl;
    }
}

void simple_transpose(TERM A[10],TERM B[10])
{
    int noterms,noc,nxt,c,Term;
    
    B[0].row=A[0].col;
    B[0].col=A[0].row;
    B[0].value=A[0].value;
    noterms=A[0].value;
    noc=A[0].col;
    if(A[0].value>0)
    {
        nxt=1;
        for(c=0;c<noc;c++)
        {
            for(Term=1;Term<=noterms;Term++)
            {
                if(A[Term].col==c)
                {
                    B[nxt].row=A[Term].col;
                    B[nxt].col=A[Term].row;
                    B[nxt].value=A[Term].value;
                    nxt++;
                }
            }
        }
    }
    display(B,nxt-1);
}

void fast_transpose(TERM A[10],TERM B[10]){
    int i,j,num_cols=A[0].col,num_terms=A[0].value;
    B[0].col=A[0].row;
    B[0].row=A[0].col;
    B[0].value=A[0].value;
    int row_terms[num_cols+1];
    int starting_pos[num_cols+1];
    if(num_terms>0){
        for(i=0;i<num_terms;i++)
            row_terms[i]=0;
        for(i=1;i<=num_terms;i++)
            row_terms[A[i].col]++;
        
        
            
        starting_pos[0]=1;
        for(i=1;i<num_terms;i++)
            starting_pos[i]=starting_pos[i-1]+row_terms[i-1];

        for (int i = 0; i < num_terms; i++)
        {
            cout << "hi : " << starting_pos[i];
        }
            
        for(i=1;i<=num_terms;i++){
            j=starting_pos[A[i].col];
            cout << " j : " << j << endl;
            B[j].row=A[i].col;
            B[j].col=A[i].row;
            B[j].value=A[i].value;
            starting_pos[A[i].col]++;
        }

        for (i = 0; i <= num_terms; i++)
        {
            cout << A[i].row <<" " << A[i].col <<  " " << A[i].value << "\n";
        }
        
        
    }
    display(B,(num_terms));
}
int main()
{
    int choice,i,j,m,n,mat[7][7];
    TERM s1[10],B[10],b[10];
    char c;
    cout<<"Enter rows\n";
    cin>>m;
    cout<<"Enter columns\n";
    cin>>n;
    cout<<"Enter matrix elements\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int k=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]!=0){
                k++;
            }
        }
    }
    do{
        cout<<"Sparse Matrix Operations:\n1.Convert to Sparse\n2.Display Sparse\n3.Simple Transpose\n4. Fast Transpose";
        cin>>choice;
        switch(choice){
            case 1:
                convert_sparse(mat,s1,m,n,k);
                break;
            case 2:
                display(s1,k);
                break;
            case 3:
                simple_transpose(s1,B);
                break;
            case 4:
                fast_transpose(s1,B);
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;
            
        }cout<<"Do you want to continue(Y/N)"<<endl;
        cin>>c;
        
    }while(c=='y' || c=='Y');

    return 0;
}


