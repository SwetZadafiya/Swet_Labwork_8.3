#include<stdio.h>

void main(){
	
    int a,b,c,d;
    float avg,s=0;

    printf("Enter number of rows : ");
    scanf("%d",&a);
    printf("Enter number of cols : ");
    scanf("%d",&b);

    int array[a][b]; 
    
    for(c=0;c<a;c++)
	{
	    for(d=0;d<b;d++)
		{
		    printf("array[%d][%d] : ",c,d);
		    scanf("%d",&array[c][d]);
		    s=s+array[c][d];
		}
	}
	
	avg = s/(a*b);
	
	printf("Average is : %f ",avg);
}
