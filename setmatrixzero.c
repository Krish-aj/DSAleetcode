void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    bool row[matrixSize];
    bool column[*matrixColSize];
    for (int i=0;i<matrixSize;i++) row[i]=false;
    for(int j=0;j<*matrixColSize;j++) column[j]=false;

    for (int i=0;i<matrixSize;i++){
        for(int j=0;j<*matrixColSize;j++){
            if(matrix[i][j]==0){
                row[i]=true;
                column[j]=true;
            }
        }
    }
        
 for(int i=0;i<matrixSize;i++){
    for(int j=0;j<*matrixColSize;j++){
        if(row[i]||column[j]){
            matrix[i][j]=0;
        }
    }
}
}
