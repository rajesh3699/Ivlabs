
#include<stdio.h>
#include<math.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int lengths[], int m ,int prices[]) 
{ 
   int i, j; 
   for (i = 0; i < m-1; i++)       
  
         
       for (j = 0; j < m-i-1; j++)  
           if (lengths[j] > lengths[j+1]) 
              swap(&lengths[j], &lengths[j+1]); 
              swap(&prices[j], &prices[j+1]); 
              
} 
int max(int x, int y)
{
    
    return ((x>y)?x:y);
}
int maxPrice(int m,int prices[])
{   if(m-1==0)
    {
        return prices[0];
    }
    else
   { 
    int maxValue=prices[m-1];
    for(int j=0;j<m;j++)
    {
        if(j!=m-1)
        {
            maxValue=max(maxValue,(prices[j] + maxPrice((m-1-j),prices)));
        }
    }
    return maxValue;
}
}


void scan(int m ,int x[])
{
for (int i=0;i<m;i++)
{
scanf("%d",&x[i]);
}
}



void main()
{
    
    
int m;
int n;
int lengths[m];
int prices[m];

//printf("enter length of rod");
 scanf("%d",&n);
 
//printf("enter size of length and price array");
 scanf("%d",&m);
 
//printf("enter lengths");
scan(m,lengths);

//printf("enter prices");
scan(m,prices);

bubbleSort(lengths,m,prices); 




for(int i=0;i<m;i++)
{
    printf("length=%d : prices=%d \n",lengths[i],prices[i]);
    
}

printf("%d",maxPrice(m,prices));

}
