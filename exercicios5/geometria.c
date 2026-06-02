int AreaCirculo(int Raio){
    const float pi = 3.14;
    return((Raio*Raio)*pi);
}

int PerimetroCirculo(int Raio){
    const float pi = 3.14;
    return(Raio*2*pi);
}

int AreaRetangulo(int Base, int Altura){
    return(Base*Altura);
}

int PerimetroRetangulo(int Base, int Altura){
    return((2*Base)+(2*Altura));
}

int AreaTriangulo(int Base, int Altura){
    return((Base*Altura)/2);
}

int PerimetroTriangulo(int LadoA, int LadoB, int LadoC){
    return(LadoA+LadoB+LadoC);
}
