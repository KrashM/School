#include <vector>
#include <iostream>
#include <algorithm>

class Polynomial{

    private:
        int * polynomial_indexes;

    public:
        Polynomial(int * indexes){ polynomial_indexes = indexes; }

        int * GetIndexes(){ return polynomial_indexes; }

};

int n, m;

void Devision(Polynomial poly1, Polynomial poly2, int * devided, int * remainder){

    int size = std :: max(n, m);
    int * indexes1 = poly1.GetIndexes();
    int * indexes2 = poly2.GetIndexes();
    for(int i = 0; i < size; i++) {

        devided[i] = i <= std :: min(n, m) && indexes2[i] != 0 ? indexes1[i] / indexes2[i] : 0;
        remainder[i] = i <= std :: min(n, m) && indexes2[i] != 0 ? indexes1[i] % indexes2[i] : indexes1[i];

    }

}

void Print(int * indexes){

    for(int i = std :: max(n, m) - 1; i > -1; i--)
        std :: cout << indexes[i] << ' ';
    std :: cout << '\n';

}

int main(){

    std :: cin >> n;
    int * indexes1 = new int[n];
    for(int i = n - 1; i > -1; i--) std :: cin >> indexes1[i];

    std :: cin >> m;
    int * indexes2 = new int[m];
    for(int i = m - 1; i > -1; i--) std :: cin >> indexes2[i];

    Polynomial poly1(indexes1), poly2(indexes2);

    int * devided = new int[n];
    int * remainder = new int[n];
    Devision(poly1, poly2, devided, remainder);
    Print(devided);
    Print(remainder);

}
/*
3
5 3 -1
3
-2 1 5

4
5 3 -1 6
3
-2 1 5

3
5 3 -1
4
-2 1 5 8

5
4 -5 7 6 4
3
6 9 7
*/
