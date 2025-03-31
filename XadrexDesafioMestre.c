 /* Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

Movimentação das Peças:

Bispo: 5 casas na diagonal direita para cima Torre: 5 casas para a direita Rainha: 8 casas para a esquerda Cavalo: 1 vez em L para cima à direita Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.*/

void Torre (int  t ) 
{
    if(t > 0) 
    {
    printf("Direita para cima \n");
    Torre(t - 1);
}
}
void Rainha (int  r )
{
    if(r > 0)
    {
    printf("Direita \n");
    Torre(r - 1);

}
}
void Cavalo (int  c )
{
    printf("Direita para cima\n");
}
void Bispo (int  b )
{
    printf("Direita para cima\n");
}

int main(){

    int torre = 5 , rainha = 8, bispo = 5, cavalo = 0; //1 vez em L para cima à direita Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

    for (int bispod = 0; bispod <= 5 ; bispod++)
    {
        for (int bispoC = 0; bispoC < 1  ; bispoC++)
        {
            printf("Cima - ");
        }
     printf("Direita\n")   ;
    } 
    printf("Movimentação Bispo Finalizada.\n\n");
    
    printf("## Movimentação Torre ##.\n");
    Torre(torre); // movimentação torre

    printf("## Movimentação Rainha ##.\n");
    Rainha(rainha);







    return 0;
}