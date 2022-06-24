/*Sadika Islam Tisha
Id:221-35-872*/
#include<stdio.h>
 int main()
{
 	int rows, columns;

	int a[5][5] = {{10, 20}, {30, 70}, {40,50}, {60,80}, {90,100}};

	printf("Printing the 2D Array\n");
 	for(int rows = 0; rows < 5; rows++)
  	{
  		for(int columns = 0; columns < 2; columns++)
  		{
  			printf("%d  ", a[rows][columns]);
		}
   		printf("\n");
  	}

 	return 0;
}
