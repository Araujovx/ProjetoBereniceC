#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item, quantidade, pagamento, parcelas;
    float valor, total, valor_pago, juros, troco;

    printf("\nItens Disponiveis para venda:\n");
    printf(" | Cod: 1 | Pao de Forma   | Quantidade em estoque: 02 | Preco: 7.50 \n");
    printf(" | Cod: 2 | Pao de Centeio | Quantidade em estoque: 04 | Preco: 8.69 \n");
    printf(" | Cod: 3 | Broa de Milho  | Quantidade em estoque: 01 | Preco: 5.00 \n");
    printf(" | Cod: 4 | Sonho          | Quantidade em estoque: 07 | Preco: 4.50 \n");
    printf(" | Cod: 5 | Tubaina        | Quantidade em estoque: 03 | Preco: 3.25 \n");

    printf(" \n Selecione o ITEM escolhido pelo cliente: ");
    scanf("%i", &item);
    getchar();

    if (item<=0 || item>=6){
        printf("\n ITEM INVALIDO, SELECIONE OUTRO ITEM:");
        scanf("%i", &item);

    }

    switch (item)
    {
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

    printf("\n Digite a quantidade escolhida pelo cliente: ");
    scanf("%i", &quantidade);
    getchar();

    total = quantidade * valor;
    printf("\n O valor total da compra: R$%.2f para %i itens \n", total, quantidade);

    printf("\n formas de pagamento disponiveis... \n");
    printf(" | 1 - Dinheiro |\n");
    printf(" | 2 - a Prazo  |\n");
    printf("\n Selecione a forma de pagamento:");
    scanf("%i", &pagamento);
    getchar();

       if(pagamento == 1){
    if(total <=50 && total >0){
        total = total * 0.95;
    }else if(total >= 50 && total < 100){
        total = total * 0.90;
    }else if(total >= 100){
        total = total * 0.82;
    }
    printf(" \n Valor total: R$%.2f \n", total);
    printf(" \n Digite o valor pago pelo cliente:");
    scanf("%f", &valor_pago);
    getchar();

    troco = valor_pago - total;

    printf("\n Troco: R$%.2f \n", troco);
}else if(pagamento == 2){
    printf("Digite o numero de parcelas: \n");
    scanf("%i", &parcelas);
    if(parcelas > 1 && parcelas <= 3){
        total = total * 1.05;
        printf("total: R$%.2f\n", total);
        printf(" \n Valor da parcela: R$%.2f \n", total/parcelas);
    }else if(parcelas > 3){
        total = total * 1.08;
        printf("total: R$%.2f\n", total);
        printf(" \n Valor da parcela: R$%.2f \n", total/parcelas);
    }else{
        printf("Parcelamento invalido");
    }
}else{
    printf("\nPagamento invalido");
}

return 0;
}
