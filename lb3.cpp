/*Função recursiva que recebe um
valor inteiro positivo n, e imprime a contagem
regressiva a partir deste valor. Por exemplo, se o
usuário digitar 5, o programa irá imprimir 5, 4, 3, 2, 1, 0.*/

#include <iostream>
using namespace std;

int dec(int);

int main(){

    int n;

    cout<<"Escolha um numero inteiro positivo."<<endl;
    cin>>n;

    cout<<"Contagem regressiva: "<<n<<" ";
    cout<<dec(n);

    return 0;
}

int dec(int n){

    if(n==0){
        return n;
    } else {
        cout<<n-1<<" ";
        return dec(n-1);
    }

}