#include <stdio.h>
int main(){
    int var1, var2, var3;
    var1 = 10;
    var2 = 20;
    printf("\nVariável 1 = %i, Variável 2 = %i", var1, var2);
    var3 = var1;
    var1 = var2;
    var2 = var3;
    printf("\nVariável 1 = %i, Variável 2 = %i\n", var1, var2);
    return 0;

    
}