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
	

	for(i=0;i<col;i++)
	{  
	    if(k%2==0)
	    {
	    	for(j=(row-1);j>=0;j--)
        	    {
        	        printf("%d",A[j][i]);
        	    }
    	    
	    }
	    else
	    {
	        for(j=0;j<row;j++)
        	    {
        	        printf("%d",A[j][i]);
        	    }
	    }
	    k++;
	    
	}
		
	return 0;
}
