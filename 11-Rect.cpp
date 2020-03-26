#include<iostream>

using namespace std;

class Point{

    private:
        int x, y;
    public:
        Point(){ x = 0; y = 0;}
        Point(int X, int Y){ x = X; y = Y; }
        Point(const Point &B){ x = B.x; y = B.y; }

        void Show(){ cout << "(" << x << ";" << y << ")" << endl; }

        int GetX(){ return x; }
        int GetY(){ return y; }
        void SetX(int X) { x = X; }
        void SetY (int Y) { y = Y; }

};

class Rectangle{

    private:
        Point A;
    public:
        Rectangle(Point B){ A = B; }

        //Print функции
        void ShowPoint(){ A.Show(); }
        //Вариант с printf() и форматиране на string-ове.
        // void Show_Stuff(){

        //     printf("The corner is at: X = %d/Y = %d\n", A.GetX(), A.GetY());
        //     printf("Area is: %4.2f\n", Area());
        //     printf("Perimeter is: %4.2f\n", Perimeter());
            
        // }
        //Вариант с нормалния cout.
        void Show_Stuff(){ cout << "The corner is at: X = " << A.GetX() << "/Y = " << A.GetY() << "\nArea is: " << Area() << "\nPerimeter is: " << Perimeter() << '\n'; }

        //Варианти без използване на библиотека.(cmath)
    /// double Area(){ double area = A.GetX() * A.GetY(); area = (area < 0) ? -area : area; return area; }
    /// double Perimeter(){ double perimeter = ((A.GetX()) ? A.GetX() : -A.GetX() + (A.GetY()) ? A.GetY() : -A.GetY()) * 2; }

        //Вариант с използване на библиотека.(cmath)
        double Area(){

            double side1 = 2 * abs(A.GetX()), side2 = 2 * abs(A.GetY());
            return side1 * side2;

        }
        double Perimeter(){

            double side1 = 2 * abs(A.GetX()), side2 = 2 * abs(A.GetY());
            return ( side1 + side2 ) * 2;

        }

};

int main(){

    Point A(1, 4);
    Rectangle B(A);
    B.Show_Stuff();

}
