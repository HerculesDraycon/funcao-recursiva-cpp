/*Função recursiva que recebe um valor inteiro
positivo n, e imprime a contagem progressiva começando
de 0 até este valor. Por exemplo, se o usuário digitar 5, o
programa irá imprimir 0, 1, 2, 3, 4, 5.*/

#include <iostream>
using namespace std;

int pro(int);

int main(){

    int n;

    cout<<"Escolha um numero inteiro positivo."<<endl;
    cin>>n;

    cout<<"Contagem progressiva: ";
    cout<<pro(n);

    return 0;
}

int pro(int n){

    if(n>=0){
        pro(n-1);
        cout<<n<<" ";
    }

}