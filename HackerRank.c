#include<stdio.h>

int whatToPut(int row, int column, int highest){
    if (row >= highest){
        row = 2*highest - 2 - row;
    }
    if (column >= highest){
        column = 2*highest - 2 - column;
    }
    
    int leastInRow = highest - row;
    
    if(highest-column >= leastInRow){
        return highest-column;
    }
    else{
        return leastInRow;
    }
    
}


int main(){

    int highest;
    scanf("%d",&highest);

    for (int i = 0; i < 2*highest - 1; i++){
        for(int j=0; j < 2*highest-1; j++){
            if(i==0 || i == 2*highest - 2 || j==0 || j==2*highest - 2){
                printf("%d ",highest);
            }
            else{
                printf("%d ",whatToPut(i, j, highest));
            }
            
        }
        printf("\n");
    }
    
}



// 3 2 1 2 3
// 3 2 1 2 3
// 3 2 1 2 3
// 3 2 1 2 3
// 3 2 1 2 3


// 