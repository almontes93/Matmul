/*
	Alyssia Bushue
	CS 102-03
	3-23-2020
	Desktop Compiler: TDM-GCC 9.2.0
	Description: A c-program that implements 2-Dimensional Matrix multiplication.
*/

#include <stdio.h>

int main()
{
	int m1Columns = 0, m1Rows = 0, m2Columns = 0, m2Rows = 0, sum = 0; //Initializing the variables and setting to 0.

	do //Do while loop to get user input. 
		{

			printf("Please ensure the number of columns in the first matrix is equal to the amount of rows in the second.\n\n");

			printf("Please enter how many columns are in the first matrix: ");
			scanf("%d", &m1Columns);
			printf("Please enter how many rows are in the first matrix: ");
			scanf("%d", &m1Rows);

			printf("Please enter how many columns are in the second matrix: ");
			scanf("%d", &m2Columns);
			printf("Please enter how many rows are in the second matrix: ");
			scanf("%d", &m2Rows);
		}while(m1Columns != m2Rows);

	int matrix1[m1Rows][m1Columns], matrix2[m2Rows][m2Columns], product[m1Rows][m2Columns]; //Initializing the arrays that will be needed. 

	printf("\n\nPlease fill in the first matrix\n\n");

	for(int i = 0 ; i < m1Rows ; i++) //For loop to get input for the first matrix rows. 
		{
			for(int z = 0 ; z < m1Columns ; z++) //For loop to get the input for the first matrix columns. 
				{
					printf("Row: %d of %d Column: %d of %d\nEnter an integer: ",(i+1),m1Rows,(z+1),m1Columns);
					scanf("%d", &matrix1[i][z]);
				}
		}

	printf("\n\nPlease fill in the second matrix\n\n"); //Print statement for the second matrix.

	for(int i = 0 ; i < m2Rows ; i++) //For loop for the second matrix rows.
		{
			for(int z = 0 ; z < m2Columns ; z++) //For loop for the second matrix columns. 
				{
					printf("Row: %d of %d Column: %d of %d\nEnter an integer: ",(i+1),m2Rows,(z+1),m2Columns);
					scanf("%d", &matrix2[i][z]);
				}
		}

	for (int x = 0; x < m1Rows; x++) //For loops that are used for the calculation of rows and columns.
		{
			for (int y = 0; y < m1Columns; y++)
				{
					for (int z = 0; z < m2Rows; z++)
						{
							sum = sum + matrix1[x][z]*matrix2[z][y]; //The equation that produces the sum. 
						}

					product[x][y] = sum;
					sum = 0;
				}
		}
		
	printf("\n\n\n\n\nThe product of the two entered matrix is: \n\n"); 
	
	for(int i = 0 ; i < m1Rows ; i++) //For loop that outputs the results. 
		{
			for(int z = 0 ; z < m1Columns ; z++)
				{
					printf("%d\t", product[i][z]);
				}
			printf("\n");
		}

	return 0;
}
