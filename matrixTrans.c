/*		**********
	exercise 12 Lesson 8 - Programming in C
		Transpose Matrix Function
		   *****	*/

#include <stdio.h>

int main (void)
{

	void transposeMatrix (char matrixA[4][5], char matrixB[5][4]);
	void displayMatrix (int nRows, int nCols, char matrix[nRows][nCols]);

	printf ("\t\t\nMatrix Transpose\n\n");

	char matrixA[4][5] = {
				{'A', 'B', 'C', 'D', 'E'},
				{'F', 'G', 'H', 'I', 'J'},
				{'K', 'L', 'M', 'N', 'O'},
				{'P', 'Q', 'R', 'S', 'T'}
			     };

	char matrixB[5][4];

	displayMatrix(4, 5, matrixA);
	transposeMatrix(matrixA, matrixB);

		return 0;
}


	void transposeMatrix (char matrixA[4][5], char matrixB[5][4])
	{
		int row, column;
		void displayMatrix (int nRows, int nCols, char matrix[nRows][nCols]);

		for (row = 0; row < 4; row++)
		{
		    for (column = 0; column < 5; column++)
		    {
			matrixB[column][row] = matrixA[row][column];
		    }
		} 
		displayMatrix (5, 4, matrixB);
	}



	void displayMatrix (int nRows, int nCols, char matrix[nRows][nCols])
	{
	    int row, column;

	    for ( row = 0; row < nRows; row++ )
		{
		    for (column = 0; column < nCols; column++)
		         printf("%5c", matrix[row][column]);
		
		
		    printf ("\n");
		}

		printf("\n\n\n");
	}


