/*Função recursiva que recebe um
valor inteiro positivo n e retorna o valor do
somatório:*/

#include <iostream>
using namespace std;

int soma(int);

int main(){

    int n;

    cout<<"Escolha um numero inteiro positivo:"<<endl;
    cin>>n;

    cout<<"Somatoria dos numeros inteiros no intervalo: "<<soma(n)<<endl;

    return 0;
}

int soma(int n){

    if (n==0){
        return 0;
    } else {
        return (n+soma(n - 1));
    }

}