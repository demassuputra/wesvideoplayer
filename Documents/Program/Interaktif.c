#include <stdio.h>

int fibonacci(int n);

void main()
{
 int urfib,bil,ulangi;
 do
 {

  printf("Cari urutan fibonacci ke? ");
  scanf("%d",&bil);
  urfib=fibonacci(bil);
  printf("\n\nUrutan fibonacci ke %d adalah: %d",bil,urfib);
  printf("\n\nApakah anda ingin mengulangi?");
  printf("\n1.YA");
  printf("\n2.TIDAK(keluar)");
  printf("\npilihan anda? ");
  scanf("%d",&ulangi);
 }
 while(ulangi==1);
}

int fibonacci(int n)
{
 int fibonac1=0,fibonac2=1,urutan,fibonac;
 for(urutan=1;urutan<=n;urutan++)
 {
  fibonac=fibonac1+fibonac2;
  fibonac2=fibonac1;
  fibonac1=fibonac;
  printf("\nurutan fibonaci ke %d, adalah %d",urutan,fibonac);
 }
 return (fibonac);
}
