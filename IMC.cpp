#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    float peso, altura;

    printf("Digite o seu peso (kg): ");
    cin >> peso;

    printf("\nDigite a sua altura (m): ");
    cin >> altura;

    float imc = peso/((altura)*(altura));

    if(imc < 17){
        printf("Muito abaixo do peso");
    } else if(imc < 18.5){
        printf("Abaixo do peso");
    } else if(imc < 25){
        printf("Peso normal");
    } else if(imc < 30){
        printf("Acima do peso");
    } else if(imc < 35){
        printf("Obesidade");
    } else if(imc < 40){
        printf("Obesidade severa");
    } else{
        printf("Obesidade mórbida");
    }

    return 0;
}
