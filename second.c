//指针实现99乘法表
#include<stdio.h>
int main()
{  int i,j;
   int *num = &i;
   int *num2 = &j;
   for(*num= 1; *num <= 9; (*num)++){
      for(*num2= 1; *num2 <= *num; (*num2)++){
         printf("%d * %d = %d\t",*num,*num2,(*num2)*(*num));
        
      }
      printf("\n");
    }
    getchar();
   return 0;
}
