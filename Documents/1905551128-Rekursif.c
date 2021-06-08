#include <stdio.h>
int n;
int a;
int p;
int prima(int a){
    if (a<2){
       p=1;
    }else if (n%a==0){
            p=0;
          }else {
              p=1;
              prima(a-1);
            }
}
void ifthen(){
     if (p==0) {
       printf("Angka %d BUKAN merupakan bilangan PRIMA",n);
               printf("\n");
               }
     else {
          printf("Angka %d merupakan bilangan PRIMA",n);
          printf("\n");
          }
     }
int main(void){
    printf("masukan angka = ");scanf("%d",&n);
    a=n-1;
    if (n==1) {
       printf("Angka %d BUKAN merupakan bilangan PRIMA",n);
              printf("\n");
              }
    else {
    prima(a);
    ifthen();
    }

}
