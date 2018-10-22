// #Question#BCAMP
// WAP to print a matrjx in reverse wave form.
// Input : 1  2  3  4
//           5  6  7  8
//           9  10 11 12
//           13 14 15 16
// Output :
// 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1


#include <stdio.h>

int main() {
	int row,col,i,j,k=3;
	printf("\nEnter Row limit : ");
	scanf("%d",&row);
	printf("\nEnter Col limit : ");
	scanf("%d",&col);
	
	int A[row][col];
	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
	    {
	        scanf("%d",&A[i][j]);
	    }
	}
	

	for(i=col-1;i>=0;i--)
	{  
	    if(k%2==0)
	    {
	    	for(j=(row-1);j>=0;j--)
        	    {
        	        printf(" %d",A[j][i]);
        	    }
    	    
	    }
	    else
	    {
	        for(j=0;j<row;j++)
        	    {
        	        printf(" %d",A[j][i]);
        	    }
	    }
	    k++;
	    
	}
		
	return 0;
}
