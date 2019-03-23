/*
@Author Jonathan Silva
@Date   23/03/2019
@Brief    Fazer uma função recursiva que permita inverter um número inteiro N. Ex 1234 - 4321
**/
#include <stdio.h>
#include <math.h>

/*
@Brief  Inverte um valor, trocando o digito de última posição para a primeira e assim sucessivamente.
@param  {value}     Valor q será invertido.
@param  {dig}       Quantidade de dígitos do valor q será invertido.
**/
int inversion(int value, int dig){
    int valorInvertido = 0;
    if(value == 0)//Condição de parada
        return valorInvertido;

    valorInvertido = value%10 * pow(10,dig)  + valorInvertido; //Valor invertido
    printf("%d\n", valorInvertido); // Teste de Mesa
    return valorInvertido + inversion(value/10,dig-1); 
}


/*
@Brief      Conta a quantidade de digitos de um valor inteiro.
@param  {value}     Valor q terá a qnt de dígitos contados.
**/
int numDIG(int value){
    int cont = 0;
    while(value > 0){
        value = value/10;
        cont++;
    }
    return cont;
}



int main(){
    int valorInicial = 8321;
    int num = numDIG(valorInicial);
    int valorInvertido = inversion(valorInicial,num-1);
    printf("Numero de digitos => %d\n", num);
    printf("ValorInicial => %d\n", valorInicial);
    printf("ValorInvertido => %d\n", valorInvertido);

}