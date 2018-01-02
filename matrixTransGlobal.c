/*		**********
	exercise 12b Lesson 8 - Programming in C
		Transpose Matrix Function
		 variable length arrays
		   *****	*/

#include <stdio.h>

	char matrixA[4][5] = {
				{'A', 'B', 'C', 'D', 'E'},
				{'F', 'G', 'H', 'I', 'J'},
				{'K', 'L', 'M', 'N', 'O'},
				{'P', 'Q', 'R', 'S', 'T'}
			     };

	char matrixB[5][4];

	int nRows = 4;
	int nCols = 5;

int main (void)
{

	void transposeMatrix (int nRows, int nCols, char matrixA[nRows][nCols], char matrixB[nCols][nRows]);
	void displayMatrix (int nRows, int nCols, char matrix[nRows][nCols]);

	printf ("\t\t\nMatrix Transpose\n\n");

	/*  Here the original matrix (specified in the main function) is used when calling the displayMatrix function....
		...This allows for comparison with the matrix whose display results from the transposeMatrix function call...
	*/
	displayMatrix(nRows, nCols, matrixA);
	transposeMatrix(nRows, nCols, matrixA, matrixB);

		return 0;
}


	void transposeMatrix (int nRows, int nCols, char matrixA[nRows][nCols], char matrixB[nCols][nRows])
	{
		int row, column;
		void displayMatrix (int nRows, int nCols, char matrix[nRows][nCols]);

		for (row = 0; row < nRows; row++)
		{
		    for (column = 0; column < nCols; column++)
		    {
			matrixB[column][row] = matrixA[row][column];
		    }
		} 
		displayMatrix (nCols, nRows, matrixB);
	}



	
	/* The variable names nRows and nCols could cause confusion here because they are used in both functions...
		 ...despite the fact that they represent different (in this case opposite) values....   */
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


