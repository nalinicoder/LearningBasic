#include<stdio.h>
int main()
{
    int matrix[10][10];
    int i,j,row,col;
    int sparse_count=0;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the element of the matrix\n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
                sparse_count++;
            }
        }
    }
    if(sparse_count>(row*col)/2)
    {
        printf("This matrix is sparse matrix\n");
    }
    else
    {
        printf("This matrix is not sparse matrix\n");
    }
    printf("The number is zero element %d",sparse_count);
}