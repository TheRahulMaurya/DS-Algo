//12344321
//123**321
//12****21
//1******1

// #include<stdio.h>

// void main()
// {
// 	int i,j,k,n;

// 	printf("Enter number of rows:");
//     scanf("%d",&n);    

// 	for(i=1;i<=n;i++)
// 	{
// 		for(j=1;j<=2*n;j++)
// 		{
// 			if(j<=(n+1)-i || j>=n+i)
// 			{
// 				j<(n+1) ? (k=j) : (k=((2*n)+1)-j) ;
// 				printf("%d",k);
// 			}
// 			else
// 			printf("*");
// 		}
// 		printf("\n");
// 	}

// }


// -------------------------------------------------------------------------------




// 11111
// 1   1
// 1   1
// 1   1
// 11111


// #include<stdio.h>

// void main()
// {
// 	int i,j,n;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(i=1;i<=n;i++)
// 	{
// 		for(j=1;j<=n;j++)
// 		{
// 			if(i==1 || i==n)
// 				printf("1");

// 			else //if(i>=2 && i<=n-1)
// 				(j==1 || j==n) ? printf("1") : printf(" ") ;
// 		}
// 		printf("\n");
// 	}

// }

//-----------------------------------------------------------------------------------


//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1


// #include<stdio.h>

// void main()
// {
// 	int i,j,n,k;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(i=1;i<=n;i++)
// 	{
// 		k=1;
// 		for(j=1;j<=n;j++)
// 		{
// 			if(i<=(n/2 + 1))
// 				(j>=(n/2 + 2)-i && j<=n/2+i)  ? (printf("%d",k) && k++) : printf(" ");
// 			else 
// 				(j>=i-n/2 && j<= (2*n - n/2)-i)  ? (printf("%d",k) && k++) : printf(" ");

			
// 		}
// 		printf("\n");
// 	}

// }


//---------------------------------------------------------------------------------------------


//         1      
//       1 2 1    
//     1 2 3 2 1  
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1


// #include<stdio.h>

// void main()
// {
// 	int i,j,n,k;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(i=1;i<=n;i++)
// 	{
// 		k=1;
// 		for(j=1;j<=(2*n - 1) ; j++)
// 		{
// 			if(j>=(n+1)-i && j<=(n-1)+i)
// 			{
// 				printf("%d" , k);
// 				(j<n) ? k++ : k--;
// 			}
// 			else
// 				printf(" ");
// 		}
// 		printf("\n");
// 	}

// }



// 1 
// 2 6 
// 3 7 10 
// 4 8 11 13 
// 5 9 12 14 15


// #include<stdio.h>

// void main()
// {
// 	int i,j,n,k,m;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(i=1;i<=n;i++)
// 	{
// 		k=n-1; m=i+k;
// 		for(j=1;j<=i ; j++)
// 		{

// 			(j==1) ? printf("%d ",i) : (printf("%d ",m) && (k--) && (m=m+k) );
			
// 		}
// 		printf("\n");
// 	}

// }


//print W


// #include<stdio.h>

// void main()
// {
// 	int row,col,n;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		for(col=1;col<=n ; col++)
// 		{
// 			if(row==1 || row==n ||col==1 ||col==n || (row==col) ||(row==((n+1)-col)) || (col==((n+1)-row)))
// 				printf("*");
// 			else 
// 				printf(" ");
			
// 		}
// 		printf("\n");
// 	}

// }


//print number of w


// #include<stdio.h>

// void main()
//  {
//  	int row,col,n,counter,k;

//  	printf("Enter number of rows :");
//     scanf("%d",&n);  

//     printf("Enter number of W :");
//     scanf("%d",&counter); 

//     for(k=1;k<=counter;k++)
//     {
//  		for(row=1;row<=n;row++)
//  		{
//  			for(col=1;col<=n ; col++)
//  			{
//  				if(col==1 ||col==n || ((row==col) &&(row>=n/2)) ||( (col==((n+1)-row) && (row>=n/2))))
//  					printf("*");
//  				else 
//  					printf(" ");
				
//  			}
//  			printf("\n");
//  		}
//  	}
//  }




// WAP to create this pattern
// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
// * * * * * * * * *



// #include<stdio.h>

// void main()
// {
// 	int row,col,n;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		for(col=1;col<=n ; col++)
// 		{
// 			if(row<(n/2+1))
// 				((col<=(n/2+2)-row) || (col>=(n/2)+row)) ? printf("*") : printf(" ") ;
// 			else 
// 				((col<=row-n/2) || (col>=(2*n-n/2)-row)) ? printf("*") : printf(" ") ;
			
// 		}
// 		printf("\n");
// 	}
// }


// Ques2.
// WAP to print this pattern 
// * * * * * * * * * * * * * * * * *
//   * * * * * * *   * * * * * * *
//     * * * * *       * * * * *
//       * * *           * * *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *


// #include<stdio.h>

// void main()
// {
// 	int row,col,n;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		for(col=1;col<=(2*n-1) ; col++)
// 		{
// 			if(row<(n/2+1))
// 				( ((col>=row) && (col<=(n+1)-row)) || ((col>=(n-1)+row) && (col<=2*n-row))) ? printf("*") : printf(" ") ;
// 			else 
// 				((col>=row) && (col<=2*n-row)) ? printf("*") : printf(" ") ;
			
// 		}
// 		printf("\n");
// 	}
// }


// Ques3.
// * * * * * * * * * * * * * * * * * * * * * * * * *
//   *           *   *           *   *           *
//     *       *       *       *       *       *
//       *   *           *   *           *   *
//         *               *               *
//       *   *           *   *           *   *
//     *       *       *       *       *       *
//   *           *   *           *   *           *
// * * * * * * * * * * * * * * * * * * * * * * * * *


// #include<stdio.h>

// void main()
// {
// 	int row,col,n,k,count;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

//     printf("Enter number of X :");
//     scanf("%d",&k);

    	
// 		for(row=1;row<=n;row++)
// 		{
// 			count=0;
// 			while(count<k)
//     		{
// 			for(col=((n-1)*count+1);col<=((n-1)*(count+1)+1) ; col++)
// 			{
				
// 					((row==1) || (row==n) || (row+((n-1)*count) == col) || row==(((n-1)*(count+1)+2)-(col)) || col==(((n-1)*(count+1)+2)-(row))) ? printf("*") : printf(" ") ;
					
// 			}
// 					count++;
// 			}
// 			printf("\n");
// 		}
// }


// Ques 6.
// 7
// 7 6
// 7 6 5
// 7 6 5 4
// 7 6 5 4 3
// 7 6 5 4 3 2
// 7 6 5 4 3 2 1


// #include<stdio.h>

// void main()
// {
// 	int row,col,n,k;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		k=n;
// 		for(col=1;col<=row ; col++)
// 		{
// 			printf(" %d",k);
// 			k--;
// 		}
// 		printf("\n");
// 	}
// }


// Ques4.
// *                         *
//    *                   *
// *     *             *     *
//    *     *       *     *
// *     *      *      *     *
//    *     *       *     *
// *     *             *     *
//    *                   *
// *                         *

// #include<stdio.h>

// void main()
// {
// 	int row,col,n;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		for(col=1;col<=n ; col++)
// 		{
// 			if(row<n/2)
// 			{
// 				if(col<=row || col>=(n+1)-row)
// 				((row+col)%2==0) ? printf("*") : printf(" ") ;
// 				else
// 					printf(" ") ;
// 			}
// 			else
// 			{
// 				if(col>=row || col<=(n+1)-row)
// 				((row+col)%2==0) ? printf("*") : printf(" ") ;

// 				else
// 					printf(" ") ;
// 			}
// 		}
// 		printf("\n");
// 	}
// }



// Ques7.
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 5 6 5 4 3 2 1
// 1 2 3 4 5 6 7 6 5 4 3 2 1


// #include<stdio.h>

// void main()
// {
// 	int row,col,n,k;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		k=1;
// 		for(col=1;col<=2*row-1 ; col++)
// 		{
// 			printf(" %d",k);
// 			(col<((2*row-1)/2 + 1)) ? k++ : k--;
// 		}
// 		printf("\n");
// 	}
// }


// Ques8.
// 1 2 3 4 5 6 7
//  2 3 4 5 6 7
//   3 4 5 6 7
//    4 5 6 7
//     5 6 7
//      6 7
//       7
//      6 7
//     5 6 7
//    4 5 6 7
//   3 4 5 6 7
//  2 3 4 5 6 7
// 1 2 3 4 5 6 7


// #include<stdio.h>

// void main()
// {
// 	int row,col,n,k;

// 	printf("Enter number of rows :");
//     scanf("%d",&n);    

// 	for(row=1;row<=n;row++)
// 	{
// 		(row<n/2+1) ? k=row : (k=(n+1)-row);
// 		for(col=1;col<=n ; col++)
// 		{
// 			if(row<n/2+1)
// 			{
// 				if(col>=row && col<=(n+1)-row)
// 				((row+col)%2==0) ? (printf("%d",k) && (k++)) : printf(" ") ;
// 				else
// 					printf(" ") ;
// 			}
// 			else
// 			{
// 				if(col<=row && col>=(n+1)-row)
// 				((row+col)%2==0) ? (printf("%d",k) && (k++)) : printf(" ") ;

// 				else
// 					printf(" ") ;
// 			}
// 		}
// 		printf("\n");
// 	}
// }




