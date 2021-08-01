//prepared by haiman

#include <stdio.h>

int main()
    {
        int a[3],b[3],i,j,k;

        for (i = 0; i < 3; i++)
            {scanf("%d", &a[i]);
            b[i]=a[i];}
        for (i = 0; i < 3;i++)
        {
            for (j = i + 1; j < 3;j++)
            {
                if (a[i] > a[j])
                {
                    k =  a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }
        for (i = 0; i < 3; i++)
            printf("%d\n",a[i]);
            printf("\n");
            for (i = 0; i < 3; i++)
            printf("%d\n",b[i]);
return 0;
    }
