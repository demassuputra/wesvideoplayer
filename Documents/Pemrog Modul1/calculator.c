#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char String[255];

void startProgram();
double inputAngka();
void tambah();
void kurang();
void kali();
void bagi();
void modulus();

int main(){
    char menu;

    do{
        puts("\nKalkulator Menu");
        puts("1. Pertambahan");
        puts("2. Pengurangan");
        puts("3. Perkalian");
        puts("4. Pembagian");
        puts("5. Modulus");
        puts("x. Exit");
        printf("Pilih : ");

        menu = getche();

        system("cls");

        switch(menu){
            case '1' : tambah(); break;
            case '2' : kurang(); break;
            case '3' : kali(); break;
            case '4' : bagi(); break;
            case '5' : modulus(); break;
        }
    }while(menu != 'x');

    return 0;
}

double inputAngka(String keterangan){
    String in;

    validation:
    printf("Masukkan angka %s: ", keterangan);
    scanf("%s", &in);

    int i = 0;
    for(i=0; i<strlen(in); i++){
        if(!(i == 0 && in[i] == 45)){
            if((in[i] < 48 || in[i] > 57) && in[i] != 46){
                printf("Hanya boleh angka. Coba lagi\n");
                goto validation;
            }
        }
    }
    return atof(in);
}

void tambah(){
    double a = inputAngka("pertama");
    double b = inputAngka("kedua");

    printf("\nHasil penjumlahan %g + %g = %g\n", a, b, a+b);
}

void kurang(){
    double a = inputAngka("pertama");
    double b = inputAngka("kedua");

    printf("\nHasil pengurangan %g - %g = %g\n", a, b, a-b);
}

void kali(){
    double a = inputAngka("pertama");
    double b = inputAngka("kedua");

    printf("\nHasil perkalian %g x %g = %g\n", a, b, a*b);
}

void bagi(){
    double a = inputAngka("pertama");
    double b = inputAngka("kedua");

    printf("\nHasil pembagian %g : %g = %g\n", a, b, a/b);
}

void modulus(){
    double a = inputAngka("pertama");
    double b = inputAngka("kedua");

    printf("\nHasil modulus %g %% %g = %g\n", a, b, fmod(a, b));

}
