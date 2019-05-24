/*
funcion ordenar

i-->    7
        21
        5
        83
        12
        9


*/
void ordenar(int *arr,int cant){

    int i,k,aux;

    for(i = 0; i < cant-1; i++ ){

        for(k = i+1; k < cant ; k++){

            if(arr[i] < arr[k]){

                aux = arr[i];
                arr[i] = arr[k];
                arr[k] = aux;

            }

        }


    }


}

void ordenar(int *arr,int cant,in sz, int (*f_comp(void *, void *))){    //con nomenclatura tipo puntero, sz es el tamaño

    int i,k,h;
    char *pk, *pi
    char aux;

    for(i = 0; i < cant-1; i++ ){

        for(k = i+1; k < cant ; k++){

            pk = (char *) arr + (k * sz);
            pi = (char *) arr + (i * sz);

            ok(aca va algo)

            for(h = 0; h < sz ; h++){

                aux = *(pk+h);
                *(pk+h) = *(pi+h);
                *(pi+h) = aux;

            }
        }


    }
  
}

/*----- PUntero a estructura ----*/

int comp2(pepe *a, pepe *b){

    if(a->legajo < b->legajo){

        return 1;
    }

}
