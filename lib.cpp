using namespace std;
//Svolgimento richiesta principale: trovare il numero maggiore inserito
float num_maggiore (float numeri[], int dim){
    float b=0;
    b=numeri [0];
    for (int j=0; j<dim; j++){
        if (b<numeri [j]){
            b=numeri [j];
        }
    }
    return b;
}
