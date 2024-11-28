/*

2.輸入一個圓半徑(r)當r>=0時,計算並輸入圓的面積(pi*r*r)和周長(2*pi*r) pi =3.14,否則,輸出提示資訊

*/
#include <iostream>

int main()
{
   int r;
   printf("please input 園半徑: ");
   scanf("%d",&r);
   

   if(r>=0){
       printf("園的面積 = %f",3.14*r*r);
       printf("園的周長 = %f",2*3.14*r);
    }else{
        printf("r < 0 is wrong ");
    }
   
   
    return 0;
