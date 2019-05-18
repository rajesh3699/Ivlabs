#include <stdio.h>
int minJumps(int arr[],int f,int l)
{
    if(f==l)
    return 0;
    
    int min=l;
    for(int i=f+1;i<=arr[f] && i<=l;i++)
    {
        int jumps=minJumps(arr,f+i,l);
        if(jumps +1 <min)
        {
            min=jumps+1;
            
        }
        
        
    }
    return min;
    
}
void scan(int m ,int x[])
{
for (int i=0;i<m;i++)
{
scanf("%d",&x[i]);
}
}

void main()
{     int n;
    scanf("%d",&n);
     int arr[n];
    scan(n,arr);
     n=sizeof(arr)/sizeof(arr[0]);
     
    printf("%d",minJumps(arr,0,n));
    
    
    
}
