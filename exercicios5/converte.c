int temperatura(int opcao, int temperatura){
    if (opcao == 1){
        return((temperatura*(9/5))+32);
    }
    else
        return((temperatura-32)*(5/9));
}

int distancia(int opcao, int distancia){
    if (opcao == 1)
    {
        return(distancia*3.281);
    }
    else
    {
        return(distancia/3.281);
    }
}

int peso(int opcao, int peso){
    if (opcao == 1)
    {
        return(peso*2.205);
    }
    else{
        return(peso/2.205);
    }
    
}