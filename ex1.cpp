/*Função recursiva que recebe dois inteiros
positivos, i e j, e retorna i elevado a j.*/

#include <iostream>
using namespace std;

int potencia(int, int);

int main(){

    int i, j;

    cout<<"Escolha a base."<<endl;
    cin>>i;
    cout<<"Escolha a potencia."<<endl;
    cin>>j;

    cout<<"Resultado = "<<potencia(i,j);

    return 0;
}

int potencia(int i, int j){

    if(j == 0){
        return 1;
    } else {
        return i*potencia(i, j-1);
    }
    
}