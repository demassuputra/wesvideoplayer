#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef char String[255];

void menuBangun();
void pilihMetode(char bangun);
void setMetodeBangun(char metode, char bangun);
double inputAngka();
void luasSegitiga();
void kllSegitiga();
void luasKetupat();
void kllKetupat();
void luasJajargenjang();
void kllJajargenjang();
void luasTrapesium();
void kllTrapesium();
void luasLingkaran();
void kllLingkaran();

int main(){
    menuBangun();
    return 0;
}

void menuBangun(){
    char bangun;
    do{
        puts("\nPilih Bangun Datar");
        puts("1. Segitiga Sembarang");
        puts("2. Belah Ketupat");
        puts("3. Jajargenjang");
        puts("4. Trapesium ");
        puts("5. Lingkaran ");
        puts("x. Exit");
        printf("Pilih : ");

        bangun = getche();

        system("cls");

        if(bangun == '1' || bangun == '2' || bangun == '3' || bangun == '4' || bangun == '5'){
            pilihMetode(bangun);
        }

    }while(tolower(bangun) != 'x');
}

void pilihMetode(char bangun){
    puts("\nPilih Metode");
    puts("1. Luas");
    puts("2. Keliling");
    puts("x. Kembali");

    printf("Pilih : ");

    char metode = getche();

    system("cls");

    if(metode == '1' || metode == '2'){
        setMetodeBangun(metode, bangun);
    }else if(tolower(metode) == 'x'){
        return;
    }else{
        pilihMetode(bangun);
    }
}

void setMetodeBangun(char metode, char bangun){
    switch(bangun){
        case '1':
            if(metode == '1') luasSegitiga();
            else kllSegitiga();
            break;
        case '2':
            if(metode == '1') luasKetupat();
            else kllKetupat();
            break;
        case '3':
            if(metode == '1') luasJajargenjang();
            else kllJajargenjang();
            break;
        case '4':
            if(metode == '1') luasTrapesium();
            else kllTrapesium();
            break;
        case '5':
            if(metode == '1') luasLingkaran();
            else kllLingkaran();
            break;
    }
}

double inputAngka(String keterangan){
    String in;

    validation:
    printf("Masukkan %s: ", keterangan);
    scanf("%s", &in);

    int i = 0;
    for(i=0; i<strlen(in); i++){
        if((in[i] < 48 || in[i] > 57) && in[i] != 46){
            printf("Hanya boleh angka. Coba lagi\n");
            goto validation;
        }
    }
    return atof(in);
}

void luasSegitiga(){
    double a = inputAngka("sisi pertama");
    double b = inputAngka("sisi kedua");
    double c = inputAngka("sisi ketiga");

    double s = (a+b+c)/2.0;
    double luas = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Luas Segitiga dengan sisi-sisi %g, %g, %g adalah %g\n", a, b, c, luas);
}

void kllSegitiga(){
    double a = inputAngka("sisi pertama");
    double b = inputAngka("sisi kedua");
    double c = inputAngka("sisi ketiga");

    double kll = a+b+c;
    printf("Keliling Segitiga dengan sisi-sisi %g, %g, dan %g adalah %g\n", a, b, c, kll);
}

void luasKetupat(){
    double a = inputAngka("diagonal pertama");
    double b = inputAngka("diagonal kedua");

    double luas = a*b/2;

    printf("Luas Ketupat dengan diagonal pertama %g dan diagonal kedua %g adalah %g\n", a, b, luas);
}

void kllKetupat(){
    double a = inputAngka("sisi");

    double kll = a*4;

    printf("Keliling Ketupat dengan sisi %g adalah %g\n", a, kll);
}

void luasJajargenjang(){
    double a = inputAngka("alas");
    double b = inputAngka("tinggi");

    double luas = a*b;

    printf("Luas Jajargenjang dengan alas %g dan tinggi %g adalah %g\n", a, b, luas);
}

void kllJajargenjang(){
    double a = inputAngka("alas");
    double b = inputAngka("sisi miring");

    double kll = 2*(a+b);

    printf("Keliling Jajargenjang dengan alas %g dan sisi miring %g adalah %g\n", a, b, kll);
}

void luasTrapesium(){
    double a = inputAngka("sisi atas");
    double b = inputAngka("sisi bawah");
    double c = inputAngka("tinggi");

    double luas = (a+b)*c/2;

    printf("Luas Trapesium dengan sisi atas %g, sisi bawah %g, dan tinggi %g adalah %g\n", a, b, c, luas);
}

void kllTrapesium(){
    double a = inputAngka("sisi pertama");
    double b = inputAngka("sisi kedua");
    double c = inputAngka("sisi ketiga");
    double d = inputAngka("sisi keempat");

    double kll = a+b+c+d;

    printf("Keliling Trapesium dengan sisi-sisi %g, %g, %g, dan %g adalah %g\n", a, b, c, d, kll);
}

void luasLingkaran(){
    double a = inputAngka("jari-jari");

    double luas = 3.14*a*a;

    printf("Luas Lingkaran dengan jari-jari %g adalah %g\n", a, luas);
}

void kllLingkaran(){
    double a = inputAngka("jari-jari");

    double kll = 2*3.14*a;

    printf("Keliling Lingkaran dengan jari-jari %g adalah %g\n", a, kll);
}

