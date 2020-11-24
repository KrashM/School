#include<iostream>

int n, m;

class Matrix{

    private: int ** matrix;
    public: Matrix(){ }
    public: Matrix(int ** matrix){ this -> matrix = matrix; }
    public: int ** GetMatirx(){ return matrix; }
    
    public: void CreateMatrix(){ 

        matrix = new int * [n];
        for(int i = 0; i < n; i++){

            matrix[i] = new int[m];
            for(int j = 0; j < m; j++) std :: cin >> matrix[i][j];

        }

    }

    public: int ** GetTransponatedMatrix(){

        int ** transponatedMatrix = new int * [m];
        for(int i = 0; i < m; i++) {
            
            transponatedMatrix[i] = new int[n];
            for(int j = 0; j < n; j++) transponatedMatrix[i][j] = matrix[j][i];

        }

        return transponatedMatrix;

    }

    public: void Print(bool transponated){

        if(!transponated)
            for(int i = 0; i < n; i++){

                for(int j = 0; j < m; j++) std :: cout << matrix[i][j] << ' ';
                std :: cout << '\n';

            }
        else
            for(int i = 0; i < m; i++){

                for(int j = 0; j < n; j++) std :: cout << matrix[i][j] << ' ';
                std :: cout << '\n';

            }

    }

};

Matrix AddMatrixes(Matrix matrix1, Matrix matrix2){

    int ** numbers1 = matrix1.GetMatirx();
    int ** numbers2 = matrix2.GetMatirx();
    int ** result = new int * [n];
    for(int i = 0; i < n; i++){

        result[i] = new int[m];
        for(int j = 0; j < m; j++) result[i][j] = numbers1[i][j] + numbers2[i][j];

    }

    Matrix newMatrix(result);

    return newMatrix;

}

int main(){

    std :: cin >> n >> m;

    Matrix myMatrix;
    myMatrix.CreateMatrix();
    std :: cout << '\n';

    Matrix transponatedMyMatrix(myMatrix.GetTransponatedMatrix());
    transponatedMyMatrix.Print(true);
    std :: cout << '\n';

    Matrix mySecondMatrix;
    mySecondMatrix.CreateMatrix();
    std :: cout << '\n';

    Matrix resultMatrix = AddMatrixes(myMatrix, mySecondMatrix);
    resultMatrix.Print(false);
    std :: cout << '\n';

}

/*
2 3
1 2 3
4 5 6
4 3 7
5 9 1
*/