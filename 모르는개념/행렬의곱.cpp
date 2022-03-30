#include <stdio.h>

using namespace std;

int main()
{
    int a[2][2] = {{1,2}, {2,3}};
    int b[2][2] = {{3,4},{4,5}};
    int res1[2][2];
    
    int c[3][3] = {{1,3,4},{5,6,7},{3,2,1}};
    int d[3][3] = {{2,4,5},{3,6,7},{4,3,2}};
    int res2[3][3];
    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            res1[i][j] = a[i][0]*b[0][j] + a[1][i]*b[j][1];
        }
    }

    for(int row = 0; row<3; row++)
    {
        for(int col = 0; col<3; col++)
        {
            int sum = 0;
            for(int n =0; n<3; n++)
            {
                sum = sum + c[row][n]*d[n][col];
            }
            res2[row][col] = sum;
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++) printf("%d ", res1[i][j]);
        printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i<3; i++){
        for(int j = 0; j<3; j++) printf("%d ", res2[i][j]);
        printf("\n");
    }
}