#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *dosyaInput = fopen("input.txt", "r");
    FILE *dosyaOutput = fopen ("output.txt", "w");

    if (dosyaInput == NULL){
        printf("Dosya okunmasinda hata\n");
        (void)getchar();
        exit (0);
    }

    int kelimeSayisi=0;
    int paragrafSayisi=0;
    int cevrilenSayi=0;
    int sayi=0;
    int sayi2=0;
    char ch;
    char harf;
    char ononcekic = '\n';
    char oncekic = '\n'; //onceki iki degeride kontrol etme verileri

    int a=0;int b=0;int c=0;int d=0;int e=0;int f=0;int g=0;int h=0;int i=0;int j=0;int k=0;int l=0;
    int m=0;int n=0;int o=0;int p=0;int q=0;int r=0;int s=0;int t=0;int u=0;int v=0;int w=0;int x=0;
    int y=0;int z=0;

    while ((ch = fgetc(dosyaInput))!=EOF){
        if(ch == ' ' && oncekic != ' '){ //bosluga göre kelime sayisini bulma eger art arda bosluk geliyorsa bu hatayý kontrol etme
            ++kelimeSayisi;
            if(ononcekic == '\n' && oncekic == '\n'){ // önceki iki karaktere bakarak paragraf sayisi belirleme
                ++paragrafSayisi;
            }
        }

        ononcekic = oncekic;
        oncekic = ch;

        if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){ //rakam kontrolu
            sayi2 = sayi2 * 10 + ch - '0'; //art arda gelen rakamlari basamakli tek sayi haline cevirme
        }
        else{
            sayi = sayi2;
            sayi2 = 0;
            if(sayi != 0){cevrilenSayi++;}
            while(sayi != 0){ //basamakli tek sayiyi degerine göre azaltarak roma rakamý ile yazdýrma
                if (sayi >= 1000){
                   fprintf (dosyaOutput, "M");
                   sayi -= 1000;
                }
                else if (sayi >= 900){
                   fprintf (dosyaOutput, "CM");
                   sayi -= 900;
                }
                else if (sayi >= 500){
                   fprintf (dosyaOutput, "D");
                   sayi -= 500;
                }
                else if (sayi >= 400){
                   fprintf (dosyaOutput, "CD");
                   sayi -= 400;
                }
                else if (sayi >= 100){
                   fprintf (dosyaOutput, "C");
                   sayi -= 100;
                }
                else if (sayi >= 90){
                   fprintf (dosyaOutput, "XC");
                   sayi -= 90;
                }
                else if (sayi >= 50){
                   fprintf (dosyaOutput, "L");
                   sayi -= 50;
                }
                else if (sayi >= 40){
                   fprintf (dosyaOutput, "XL");
                   sayi -= 40;
                }
                else if (sayi >= 10){
                   fprintf (dosyaOutput, "X");
                   sayi -= 10;
                }
                else if (sayi >= 9){
                   fprintf (dosyaOutput, "IX");
                   sayi -= 9;
                }
                else if (sayi >= 5){
                   fprintf (dosyaOutput, "V");
                   sayi -= 5;
                }
                else if (sayi >= 4){
                   fprintf (dosyaOutput, "IV");
                   sayi -= 4;
                }
                else if (sayi >= 1){
                   fprintf (dosyaOutput, "I");
                   sayi -= 1;
                }
            }
            fprintf (dosyaOutput, "%c" ,ch);
        }
        if (ch=='a'||ch=='A'){a++;}else if (ch=='b'||ch=='B'){b++;}else if (ch=='c'||ch=='C'){c++;}else if (ch=='d'||ch=='D'){d++;}
        else if (ch=='e'||ch=='E'){e++;}else if (ch=='f'||ch=='F'){f++;}else if (ch=='g'||ch=='G'){g++;}else if (ch=='h'||ch=='H'){h++;}
        else if (ch=='i'||ch=='I'){i++;}else if (ch=='j'||ch=='J'){j++;}else if (ch=='k'||ch=='K'){k++;}else if (ch=='l'||ch=='L'){l++;}
        else if (ch=='m'||ch=='M'){m++;}else if (ch=='n'||ch=='N'){n++;}else if (ch=='o'||ch=='O'){o++;}else if (ch=='p'||ch=='P'){p++;}
        else if (ch=='q'||ch=='Q'){q++;}else if (ch=='r'||ch=='R'){r++;}else if (ch=='s'||ch=='S'){s++;}else if (ch=='t'||ch=='T'){t++;}
        else if (ch=='u'||ch=='U'){u++;}else if (ch=='v'||ch=='V'){v++;}else if (ch=='w'||ch=='W'){w++;}else if (ch=='x'||ch=='X'){x++;}
        else if (ch=='y'||ch=='Y'){y++;}else if (ch=='z'||ch=='Z'){z++;}
    }

    fprintf(dosyaOutput,"\nKelime sayisi: %d \n", kelimeSayisi-cevrilenSayi);
    fprintf(dosyaOutput,"Paragraf sayisi: %d \n", paragrafSayisi);
    fprintf(dosyaOutput,"Roma rakamina cevrilen sayi miktari: %d \n\n", cevrilenSayi);

    fprintf(dosyaOutput,"%d tane A harfi var. \n",a);fprintf(dosyaOutput,"%d tane B harfi var. \n",b);
    fprintf(dosyaOutput,"%d tane C harfi var. \n",c);fprintf(dosyaOutput,"%d tane D harfi var. \n",d);
    fprintf(dosyaOutput,"%d tane E harfi var. \n",e);fprintf(dosyaOutput,"%d tane F harfi var. \n",f);
    fprintf(dosyaOutput,"%d tane G harfi var. \n",g);fprintf(dosyaOutput,"%d tane H harfi var. \n",h);
    fprintf(dosyaOutput,"%d tane I harfi var. \n",i);fprintf(dosyaOutput,"%d tane J harfi var. \n",j);
    fprintf(dosyaOutput,"%d tane K harfi var. \n",k);fprintf(dosyaOutput,"%d tane L harfi var. \n",l);
    fprintf(dosyaOutput,"%d tane M harfi var. \n",m);fprintf(dosyaOutput,"%d tane N harfi var. \n",n);
    fprintf(dosyaOutput,"%d tane O harfi var. \n",o);fprintf(dosyaOutput,"%d tane P harfi var. \n",p);
    fprintf(dosyaOutput,"%d tane Q harfi var. \n",q);fprintf(dosyaOutput,"%d tane R harfi var. \n",r);
    fprintf(dosyaOutput,"%d tane S harfi var. \n",s);fprintf(dosyaOutput,"%d tane T harfi var. \n",t);
    fprintf(dosyaOutput,"%d tane U harfi var. \n",u);fprintf(dosyaOutput,"%d tane V harfi var. \n",v);
    fprintf(dosyaOutput,"%d tane W harfi var. \n",w);fprintf(dosyaOutput,"%d tane X harfi var. \n",x);
    fprintf(dosyaOutput,"%d tane Y harfi var. \n",y);fprintf(dosyaOutput,"%d tane Z harfi var. \n",z);

    fclose(dosyaInput);
    fclose(dosyaOutput);

    printf("Bilgiler aktarildi...\n");


    return 0;
}


