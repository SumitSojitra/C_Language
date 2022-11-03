#include <stdio.h>
#include <string.h>
 
main()
{
    char a[100],c;  
    int  i,j,k=0;
 
    printf("Enter string : ");
    gets(a); 
    
    for(i=0;a[i];i++)
    {
    	if(!(a[i]==c))
    	{
    		for(j=i+1;a[j];j++)
            {
            	if(a[i]==a[j])
            	   a[j]=c;
		    }	
		}
    }
 
    for(i=0;a[i];i++)
    {
     	a[i]=a[i+k];
     	if(a[i]==c)
     	{
		  k++;
		  i--;
		}
    }
    printf("removing duplicates :");
 	puts(a);   
}

