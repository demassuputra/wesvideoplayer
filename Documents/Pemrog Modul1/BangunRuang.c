#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef char String[255];

void menuBangun();
void pilihMetode(char bangun);
void setMetodeBangun(char metode, char bangun);
double inputAngka();
double volumeTabung();
double luasTabung();
double volumeBola();
double luasBola();
double volumeLimasSegi4();
double luasLimasSegi4();
double volumePrismaSegi3();
double luasPrismaSegi3();
double volumeKerucut();
double luasKerucut();
double luasSegi3(double a, double b, double c);

int main(){
    menuBangun();
    return 0;
}

void menuBangun(){
    char bangun;
    do{
        puts("\nPilih Bangun Ruang");
        puts("1. Tabung");
        puts("2. Bola");
        puts("3. Limas Segiempat");
        puts("4. Prisma Segitiga");
        puts("5. Kerucut");
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
    puts("\nPilih metode");
    puts("1. Volume");
    puts("2. Luas Permukaan");
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
            if(metode == '1') printf("Volume tabung sebesar %g\n", volumeTabung());
            else printf("Luas Permukaan Tabung sebesar %g\n", luasTabung());
            break;
        case '2':
            if(metode == '1') printf("Volume Bola sebesar %g\n", volumeBola());
            else printf("Luas Permukaan Bola sebesar %g\n", luasBola());
            break;
        case '3':
            if(metode == '1') printf("Volume Limas Segiempat sebesar %g\n", volumeLimasSegi4());
            else printf("Luas Permukaan Limas Segiempat sebesar %g\n", luasLimasSegi4());
            break;
        case '4':
            if(metode == '1') printf("Volume Prisma Segitiga sebesar %g\n", volumePrismaSegi3());
            else printf("Luas Permukaan Prisma Segitiga sebesar %g\n", luasPrismaSegi3());
            break;
        case '5':
            if(metode == '1') printf("Volume Kerucut sebesar %g\n", volumeKerucut());
            else printf("Luas Permukaan Kerucut sebesar %g\n", luasKerucut());
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

double volumeTabung(){
    double r = inputAngka("jari-jari");
    double t = inputAngka("tinggi");

    return 3.14*r*r*t;
}

double luasTabung(){
    double r = inputAngka("jari-jari");
    double t = inputAngka("tinggi");

    return 2*3.14*r*(r+t);
}

double volumeBola(){
    double r = inputAngka("jari-jari");

    return 3.14*r*r*r*4/3;
}

double luasBola(){
    double r = inputAngka("jari-jari");

    return 4*3.14*r*r;
}

double volumeLimasSegi4(){
    double s = inputAngka("sisi alas");
    double t = inputAngka("tinggi");

    return s*s*t/3;
}

double luasLimasSegi4(){
    double s = inputAngka("sisi alas");
    double t = inputAngka("tinggi segitiga");

    return (s*s)+((s*t/2)*4);
}

double volumePrismaSegi3(){
    double a = inputAngka("sisi pertama segitiga");
    double b = inputAngka("sisi kedua segitiga");
    double c = inputAngka("sisi ketiga segitiga");
    double tP = inputAngka("tinggi prisma");

    return luasSegi3(a, b, c)*tP;
}

double luasPrismaSegi3(){
    double a = inputAngka("sisi pertama segitiga");
    double b = inputAngka("sisi kedua segitiga");
    double c = inputAngka("sisi ketiga segitiga");
    double t = inputAngka("tinggi prisma");

    return (luasSegi3(a, b, c)*2) + (a*t + b*t + c*t);
}

double volumeKerucut(){
    double r = inputAngka("jari-jari");
    double t = inputAngka("tinggi");

    return 3.14*r*r*t/3;
}

double luasKerucut(){
    double r = inputAngka("jari-jari");
    double s = inputAngka("garis pelukis");

    return 3.14*r*(r+s);
}

double luasSegi3(double a, double b, double c){
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

