#include <iostream>
#include <array>

using namespace std;
const size_t SIZE = 10;
const size_t ROW = 3;
const size_t COLUMN = 3;

int sum(array<int, SIZE> array);
int max(array<int, SIZE> array);
double average(array<int, SIZE> array);
void reverse(array<int, SIZE> &array);
array<array<int, COLUMN>, ROW> transpose(array<array<int, COLUMN>, ROW> matrix);


int main(){

    array<int,SIZE> arr{1,2,3,4,5,6,7,8,9,10};
    array<array<int, COLUMN>, ROW> matrix{{{1,2,3},{4,5,6},{7,8,9}}};

    cout << sum(arr) << endl;
    cout << max(arr) << endl;
    cout << average(arr) << endl;

    reverse(arr);

    for(int elements : arr){
        cout << elements << endl;
    }

    for(int row = 0; row < matrix.size(); row++){
        for(int column = 0; column < matrix[row].size(); column++){
            cout << matrix[row][column] << " ";
        }

        cout << endl;
    }


    array<array<int, COLUMN>, ROW> result = transpose(matrix);

    for(int row = 0; row < result.size(); row++){
        for(int column = 0; column < result[row].size(); column++){
            cout << result[row][column] << " ";
        }

        cout << endl;
    }
    
    return 0;
}

int sum(array<int, SIZE> array){
    int sum = 0;

    for(int i = 0; i < array.size(); i++){
        sum += array[i];
    }

    return sum;
}

int max(array<int, SIZE> array){
    int max = array[0];

    for(int element : array){
        if(element > max){
            max = element;
        }
    }

    return max;
}


double average(array<int, SIZE> array){

    return (sum(array) / (1.0 * array.size()));
}

void reverse(array<int, SIZE> &array){
    int temp = 0;

    for(int i = 0; i < array.size() && (i < array.size() - 1 - i); i++){
        temp = array[i];
        array[i] = array[array.size() - 1 - i];
        array[array.size() - 1 - i] = temp;
    }
}

array<array<int, COLUMN>, ROW> transpose(array<array<int, COLUMN>, ROW> matrix){
    array<array<int, COLUMN>, ROW> result;

    for(int row = 0; row < matrix.size(); row++){
        for(int column = 0; column < matrix[row].size(); column++){
            result[column][row] = matrix[row][column];
        }
    }
    return result;
}