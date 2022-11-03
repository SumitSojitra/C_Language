#include <stdio.h>
#include<string.h>

main()
{
    char a[100];
    int i,j=0;
    
    printf("Enter String : ");
    gets(a);

    int len=strlen(a);

    printf("Original = %s",a);
    for(i=0; i<len; i++)
    {
        if(a[i]==' ' || a[i]=='\t')
        {
            for(j=i; j<len; j++)
            {
                a[j]=a[j+1];
            }
            len--;
        }
    }
    printf("\nAfter  = %s",a);

    
}
