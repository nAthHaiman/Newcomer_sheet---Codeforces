//prepared by haiman

#include <stdio.h>

int main()
    {
        int a,b,c;
        char d,e;
        scanf("%d %c %d %c %d",&a,&d,&b,&e,&c);
        if(d=='+')
        {
            if(a+b==c)
            printf("Yes\n");
            else
                printf("%d\n",a+b);
        }
         if(d=='*')
        {
            if(a*b==c)
            printf("Yes\n");
            else
                printf("%d\n",a*b);
        }
         if(d=='-')
        {
            if(a-b==c)
            printf("Yes\n");
            else
                printf("%d\n",a-b);
        }
        return 0;
    }
