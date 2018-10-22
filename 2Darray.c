#include <stdio.h>

int main() {
	int row,col,i,j,k,z;
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
	
    z=row;
    
	for(i=0;i<row;i++)
	{   k=z;
		while(k>0)
		{
    	    for(j=0;j<col;j++)
    	    {
    	        printf("%d",A[i][j]);
    	    }
	    	printf("\n");
	    k--;
		}
		z--;
	}
		
	return 0;
}
