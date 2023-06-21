#include <stdio.h>

union abc{
    int a;
    int b;
};

int main(){

  union abc var;
  var.a = 90;
  union abc *pAbc = &var;
  printf("%d %c %p\n", pAbc->a, pAbc->b, pAbc);  

return 0;}