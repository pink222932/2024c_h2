#include <iostream>

int main()
{
  int x,y;
  
  printf("please input int x=");
  scanf("%d",&x);
  printf("please input int y=");
  scanf("%d",&y);
  printf("x+y= %d\n",x+y); // x-y,x*y,x/y,x=y
  printf("x-y= %d\n",x-y);
  printf("x*y= %d\n",x*y);
  printf("x/y= %d\n",x/y);
  printf("x mod y= %d\n",x%y);
  x += 3;
  printf("x= %d\n",x);
   
    return 0;
}
