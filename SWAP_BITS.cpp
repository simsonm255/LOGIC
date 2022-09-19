#include<stdio.h>
int swap_no(int n,int p1,int p2)
{
int x=0,y=0;
int d1=n&(1<<(p1));  // to know the value in that pos
int d2=n&(1<<(p2));   // 
        if(d1){ 
          x=1;  
        printf("x set\n");
        }
        if(d2){
          y=1;
        printf("y set\n");
        }
        if(x==y){  // which check the two pos has same bits
           return n;
        printf("equal stmt");
        }    
        else{
          n^=(1<<p1);
         // printf("%d\n",n);
          n^=(1<<p2);
         // printf("%d\n",n);
        return n;
        }
}
int main()
{
int n,p1,p2;
printf("Enter no: ");
scanf("%d",&n);
printf("enter pos: ");
scanf("%d",&p1);
scanf("%d",&p2);
//int b=swap_no(n,p1,p2);
//printf("%d",&b);
printf("%d",swap_no(n,p1,p2));
}
