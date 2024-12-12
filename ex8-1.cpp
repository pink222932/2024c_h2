
/*
20. 主函式輸入 高與寬，編寫程式，其中自定義一函式，算矩形面積

*/
#include <iostream>
int area(int h,int w){
    return h * w;
}

int main()
{
    int h,w;
    printf("please input int h:\n");
    scanf ("%d",&h);
      printf("please input int w:\n");
scanf ("%d",&w);
 printf("area =%d\n",area(h,w));
    return 0;
}
