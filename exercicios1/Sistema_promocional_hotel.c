//Sistema promocional do hotel
//Tiago Brandão Nogueira
//13/03/2026
//Um hotel deseja fazer uma promoção especial de final de semana, concedendo um
//desconto de 25% na diária. O hotel possui 40 apartamentos e o valor normal da diária por
//apartamento é R$ 267,00. Implemente um programa para calcular:
//a) Valor promocional da diária.
//b) Valor total a ser arrecadado caso a ocupação neste final de semana (2 diárias por
//apartamento) atinja 100%.
//c) Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
//d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja
//100%
#include <stdio.h>
int main(){
//Declaração de variáveis
    float valor_normal, valor_desconto, valorarrecadado, valor70, valor_sem_prom, valordiferencasprom;
    valor_normal = 267;
//Lógica do programa
    valor_desconto = valor_normal * 0.75;
    valorarrecadado = valor_desconto * 80;
    valor70 = valor_desconto * (0.70 * 80);
    valor_sem_prom = valor_normal * 80;
    valordiferencasprom = valor_normal * 80 - valor_desconto * 80;
//Exibição do programa
    printf("\nO valor promocional da diaria: %.2f"
        "o valor total a ser arrecadado com ocupacao completa nesse fim de semana: %.2f\n" 
        "valor total com ocupacao em 70 por cento: %.2f, valor arrecadado caso fosse fora da promocao: %.2f\n"
        "diferenca entre lucro com promocao - sem promocao: %.2f", valor_desconto, valorarrecadado, valor70, valor_sem_prom, valordiferencasprom);
    return 0;
}