#include <stdio.h>

int main ()
{
    float IMC, PESO, ALTURA;

    printf("cual es tu peso en kg:");
    scanf("%f" ,&PESO);

    printf("cual es tu altura en metros:");
    scanf("%f" ,&ALTURA);

    IMC=PESO/(ALTURA*ALTURA);

    if (IMC<=18.4){
            printf("Bajo peso");
    }else if (IMC>=18.5&&IMC<=24.9){
        printf("Normal");
    }else if(IMC>=25.0&&IMC<=29.9){
        printf("Sobre peso");
    }else if(IMC>=30.0&&IMC<=34.9){
        printf("Obesidad clase 1");
    }else if(IMC>=35.00&&IMC<=39.9){
        printf("Obesidad clase 2");
    }else if(IMC>=40){
        printf("Obesidad clase 3");
    }else  {
        printf("No esta");
    }
 return 0;

}
