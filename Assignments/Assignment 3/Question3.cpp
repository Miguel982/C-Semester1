#include <iostream>
#include <array>

using namespace std;

const int ROW = 2;
const int COLUMN = 2;

void printMatrix(array<array<int, ROW>, COLUMN>);
void fillArray(array<array<int, ROW>, COLUMN>&);
bool isIdentity(array<array<int, ROW>, COLUMN>);
int det(array<array<int, ROW>, COLUMN>);
array<array<int, ROW>, COLUMN> addArrays(array<array<int, ROW>, COLUMN>, array<array<int, ROW>, COLUMN>);
bool isEqual(array<array<int, ROW>, COLUMN>, array<array<int, ROW>, COLUMN>);

int main(){

    array<array<int, ROW>, COLUMN> matrix1;
    array<array<int, ROW>, COLUMN> matrix2;

    cout << "Enter the values for your first matrix" << endl;
    fillArray(matrix1);


    cout << "Here is your first matrix" << endl;
    printMatrix(matrix1);

    string result = isIdentity(matrix1)? "is " : "is not ";
    cout << "\nThis matrix " << result << "an identity matrix" << endl;

    cout << "\nThe determinant of the 2 by 2 matrix is: " << det(matrix1) << endl;

    cout << "\nEnter the values for your second matrix" << endl;
    fillArray(matrix2);

    cout << "Here is your second matrix: " << endl;
    printMatrix(matrix2);

    array<array<int, ROW>, COLUMN> addedMatrix = addArrays(matrix1, matrix2);
    cout << "\nThis is the result of adding your first and second matrices" << endl;
    printMatrix(addedMatrix);

    result = isEqual(matrix1, matrix2)? "are " : "are not";
    cout << "\nYour first and second matrices " << result << "equal";

    return 0;
}

void printMatrix(array<array<int, ROW>, COLUMN> matrix){
    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fillArray(array<array<int, ROW>, COLUMN>& matrix){
    cout << "Enter the value for the 1st row and 1st column in the matrix (a): ";
    cin >> matrix[0][0];

    cout << "Enter the value for the 1st row and 2nd column in the matrix (b): ";
    cin >> matrix[0][1];

    cout << "Enter the value for the 2nd row and 1st column in the matrix (c): ";
    cin >> matrix[1][0];

    cout << "Enter the value for the 2nd row and 2nd column in the matrix (d): ";
    cin >> matrix[1][1];
}

bool isIdentity(array<array<int, ROW>, COLUMN> matrix){
    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < matrix[i].size(); j++){
            if(i == j){
                if (matrix[i][j] != 1){
                    return false;
                }
            }
            else{
                if (matrix[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

int det(array<array<int, ROW>, COLUMN> matrix){
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

array<array<int, ROW>, COLUMN> addArrays(array<array<int, ROW>, COLUMN> matrix1, array<array<int, ROW>, COLUMN> matrix2){

    array<array<int, ROW>, COLUMN> result;

    for (int i = 0; i < matrix1.size(); i++){
        for (int j = 0; j < matrix1[i].size(); j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

bool isEqual(array<array<int, ROW>, COLUMN> matrix1, array<array<int, ROW>, COLUMN> matrix2){

    for (int i = 0; i < matrix1.size(); i++){
        for (int j = 0; j < matrix1[i].size(); j++){
            if (matrix1[i][j] != matrix2[i][j]){
                return false;
            }
        }
    }

    return true;
}