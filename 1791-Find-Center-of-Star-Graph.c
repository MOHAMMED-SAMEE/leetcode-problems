int findCenter(int** edges, int edgesSize, int* edgesColSize){
    int centro;
    int coluna = 0; 
    int candidato = edges[0][coluna];
    int n = 0;
    for(int l = 0; l < edgesSize; l++){
        for(int c = 0; c < edgesColSize[l]; c++){
            if(candidato == edges[l][c]){
                centro = edges[l][c];
                n++;
            }
        }
        if((l == edgesSize-1) && (n < edgesSize)){
            l = 0;
            candidato = edges[0][coluna+1];
        }
    }
    return centro;
}