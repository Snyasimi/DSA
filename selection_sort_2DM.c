#include<stdio.h>

int main(){

    int Row,Cols,temp,min_index;

    printf("Enter the number of rows:\n");
    scanf("%d",&Row);

    printf("Enter the number of columns:\n");
    scanf("%d",&Cols);

    int Array[Row][Cols];

    printf("Enter elements of the array\n");

    for(int i = 0; i < Row ; i++ )
    {

        for(int j = 0 ; j < Cols ; j++)
        {
            printf("Enter Element [%d][%d] :\n",i,j);
            scanf("%d",&Array[i][j]);

        }

    }

    for(int k = 0; k < Row ; k++ )
    {

        for(int l = 0 ; l < Cols ; l++)
        {

            printf("%d,\t",Array[k][l]);

        }

        printf("\n");

    } 


    //SORTING THE ITEMS 
    for(int k = 0; k < Row ; k++ )
    //ROW LOOP
    {

        for(int l = 0 ; l < Cols ; l++)
        //COLUMN LOOP
        {

            for(int a = 0; a < Cols -1 ; a++)
            //WALK COLUMN LOOP
            {
                min_index = a;

                for(int b = a+1 ; b < Cols ; b++)
                //COMPARING LOOP
                {
                    if(Array[k][min_index] > Array[k][b])
                    {
                        min_index = b;
                    }

                }

                temp = Array[k][a];

                Array[k][a] = Array[k][min_index];

                Array[k][min_index]  =  temp;


            }

        }

    }

    printf("Elements saved\nPrinting sorted array\n");

    for(int k = 0; k < Row ; k++ )
    {

        for(int l = 0 ; l < Cols ; l++)
        {

            printf("%d,\t",Array[k][l]);

        }

        printf("\n");

    }

    return 0;


}