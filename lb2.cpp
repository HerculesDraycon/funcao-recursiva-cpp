/*Função recursiva que realiza a
multiplicação entre dois valores inteiros positivos
sem utilizar o operador '*' .*/

#include <iostream>
using namespace std;

int mult(int, int);

int main(){

    int m, n;

    cout<<"Escolha um valor."<<endl;
    cin>>m;
    cout<<"Escolha outro valor."<<endl;
    cin>>n;

    cout<<"Resultado = "<<mult(m, n);

    return 0;
}

int mult(int m, int n){

    if(m==0 || n==0){
        return 0;
    } else {
        return (m+mult(m, n-1));
    }

}