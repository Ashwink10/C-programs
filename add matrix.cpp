#include <stdio.h>
int main()
{
    // 2d array
    int ROW,COL;
    int a[ROW][COL];
    int *p = NULL; 
    int iRow =0, iCol =0;
    int sum=0;
    p= &a[0][0]; 
	printf("\n Enter the number of rows:");
	scanf("%d",&ROW);
	printf("\n ENter the number of column:");
	scanf("%d",&COL);
    for (iRow = 0; iRow < ROW; ++iRow) 
    {
        for (iCol = 0; iCol < COL; ++iCol)
        {
        	printf("\n Enter the array element in [%d] and [%d]:",iRow,iCol);
        	scanf("%d",&*(p+ ( iRow * COL) + iCol));
        }
    }
    printf("\n The Matrix are:\n");
    for(iRow=0;iRow<ROW;++iRow)
    {
    	for(iCol=0;iCol<COL;++iCol)
    	{
    		printf("%d\t",*(p+ ( iRow * COL) + iCol));
		}
		printf("\n");
	}
    for (iRow = 0; iRow < ROW; ++iRow) 
    {
        for (iCol = 0; iCol < COL; ++iCol)
        {
            if(iRow==iCol)
            {
            sum=sum+*(p+ ( iRow * COL) + iCol);
            
            }
        }
    }
    printf("\n Sum of the diagonal=%d",sum);
    return 0;
}
