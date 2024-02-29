#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){

    int ano;

    printf("Digite o seu ano: ");
    cin >> ano;

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("Seu ano é bissexto.");
    } else{
        printf("Esse ano não é bissexto.");
    }

    return 0;
}