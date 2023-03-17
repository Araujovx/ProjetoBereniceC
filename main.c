#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item, quantidade, pagamento, parcelas;  //Declaracao das variaveis
    float valor, total, valor_pago, juros, troco; //Declaracao de variaveis

    printf("\nItens Disponiveis para venda:\n"); //Diplay de itens disponiveis
    printf(" | Cod: 1 | Pao de Forma   | Quantidade em estoque: 02 | Preco: 7.50 \n");
    printf(" | Cod: 2 | Pao de Centeio | Quantidade em estoque: 04 | Preco: 8.69 \n");
    printf(" | Cod: 3 | Broa de Milho  | Quantidade em estoque: 01 | Preco: 5.00 \n");
    printf(" | Cod: 4 | Sonho          | Quantidade em estoque: 07 | Preco: 4.50 \n");
    printf(" | Cod: 5 | Tubaina        | Quantidade em estoque: 03 | Preco: 3.25 \n");

    printf(" \n Selecione o ITEM escolhido pelo cliente: "); //funcao selecionar o item
    scanf("%i", &item);
    getchar();

    if (item<=0 || item>=6){
        printf("\n ITEM INVALIDO, SELECIONE OUTRO ITEM:"); //Limitar os itens utilizaveis do 1 ao 5
        scanf("%i", &item);

    }

    switch (item) { //Armazenar as informacoes dos itens, e alterar a variavel valor, de acordo com o valor do item selecionado 
        
        case 1:
            valor = 7.50;
            printf(" \n Item selecionado: Pao de forma. Valor unitario: %.2f \n", valor);
            break;

        case 2:
            valor = 8.69;
            printf(" \n Item selecionado: Pao de centeio. Valor unitario: %.2f \n", valor);
            break;

        case 3:
            valor = 5.00;
            printf(" \n Item selecionado: Broa de milho. Valor unitario: %.2f \n", valor);
            break;

        case 4:
            valor = 4.50;
            printf(" \n Item selecionado: Sonho. Valor unitario: %.2f \n", valor);
             break;

        case 5:
            valor = 3.25;
            printf(" \n Item selecionado: Tubaina. Valor unitario: %.2f \n", valor);
            break;
        }

    printf("\n Digite a quantidade escolhida pelo cliente: "); // digitar a quantidade do item escolhido 
    scanf("%i", &quantidade);
    getchar();

    total = quantidade * valor; //funcao que vai definir o valor da variavel (total)
    printf("\n O valor total da compra: R$%.2f para %i itens \n", total, quantidade);

    printf("\n formas de pagamento disponiveis... \n"); //tabela com as formas de pagamento disponiveis 
    printf("\n | 1 - Dinheiro |\n");
    printf(" | 2 - a Prazo  |\n");
    printf("\n Selecione a forma de pagamento:"); // selecionar forma de pagamento desejada
    scanf("%i", &pagamento);
    getchar();

        if(pagamento == 1){ //descreve os comandos a serem seguidos caso escolha pagamendo em dinheiro
    if(total <=50 && total >0){ // alterar valor de desconto com base no valor total da compra
        total = total * 0.95;
    }else if(total >= 50 && total < 100){ // alterar valor de desconto com base no valor total da compra
        total = total * 0.90;
    }else if(total >= 100){ // alterar valor de desconto com base no valor total da compra
        total = total * 0.82;
    }
    printf(" \n Valor total: R$%.2f \n", total); // mostrar o valor total da compra ja com o desconto pre definido 
    printf(" \n Digite o valor pago pelo cliente:"); // digitar o valor dado pelo cliente (para voltar troco)
    scanf("%f", &valor_pago);
    getchar();

    troco = valor_pago - total;

    printf("\n Troco: R$%.2f \n", troco); // mostra o troco a ser devolvido ao cliente 

    }else if(pagamento == 2){ // descreve os comandos a serem seguidos caso escolha pagamento a prazo 
    printf("\nDigite o numero de parcelas:"); // digitar a quantidade de parcelas escolhidas pelo cliente
    scanf("%i", &parcelas);
    if(parcelas > 1 && parcelas <= 3){ // determina o acrescimo com base na quandidade de parcelas escolhidas
        total = total * 1.05;
        printf("total: R$%.2f\n", total); // mostra o valor total da compra ja com os acrescimos 
        printf(" \n Valor da parcela: R$%.2f \n", total/parcelas);
    }else if(parcelas > 3){ // determina o acrescimo com base na quantidade de parcelas escolhidas
        total = total * 1.08;
        printf("\n Total: R$%.2f\n", total);
        printf("\n Valor da parcela: R$%.2f \n", total/parcelas); // mostra apenas o valor do acrecsimo
    }else{
        printf("Quantidade de Parcelas invalidas!"); // mensagem disparada caso o usuario nao insira nenhuma quantidade de parcelas valida
    }
    }else{
    printf("\nForma de Pagamento invalida!"); // mensagem disparada caso o cliente nao digite uma forma de pagamento valida
}

return 0;
}
