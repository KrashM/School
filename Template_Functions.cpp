#include <iostream>

using namespace std;

template <class T>
void InputArray (T* array, int n) {

    for ( int i = 0; i < n; i++ )
    cin >> array[ i ];

}

template <class T>
T Min (T* array, int n){

    T min = array[0];
    for ( int i = 0; i < n; i++ )
        if ( array[i] < min )
            min = array[i];
    return min;

}

template<class T>
T Multiplication(T* array, int n){

    T product = array[0];
    for ( int i = 1; i < n; i++ )
        product *= array[i];
    return product;

}

template<class T>
T Average(T* array, int n){

    T sum = array[0];
    for ( int i = 1; i < n; i++ )
        sum += array[i];
    T average = sum / n;
    return average;

}

template<class T>
int Elements_To_Match_Statement(T* array, int n){

    int counter = 0;
    for ( int i = 0; i < n - 1; i++ )
        if ( array[i] == array[i + 1] )
            counter++;
    return counter;

}

int main(){

    int n;
    cout << "n = "; cin >> n;
    int a[n];
    cout << "Enter " << n << " integer numbers: ";
    InputArray(a, n);

    cout << "Min. element of array is " << Min (a, n) << endl << endl;
    cout << "Product of all the elements is " << Multiplication(a, n) << '\n' << '\n';
    cout << "Average of all the elements is " << Average(a, n) << '\n' << '\n';
    cout << "Number of all the elements equal to the next one in the array is " << Elements_To_Match_Statement(a, n) << '\n' << '\n';

    cout << "n = "; cin >> n;
    double b[n];
    cout << "Enter " << n << " double numbers: ";
    InputArray(b, n);
    
    cout << "Min. element of array is " << Min (b, n) << endl << endl;
    cout << "Product of all the elements is " << Multiplication(b, n) << '\n' << '\n';
    cout << "Average of all the elements is " << Average(b, n) << '\n' << '\n';
    cout << "Number of all the elements equal to the next one in the array is " << Elements_To_Match_Statement(b, n) << '\n' << '\n';

}