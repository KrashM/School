#include<iostream>
#include<cmath>

class Point{

    //Полета за кординати.
    private: int x = 0, y = 0;

    //Конструктор със стойности.
    //Не е задължително да се използва this ->,
    //стига имената на променливите, които се подават на конструктора и тези които са в класа, да не съвпадат.
    public: Point(int x, int y){ this -> x = x; this -> y = y; }

    //Празен конструктор.
    public: Point(){  }

    //Get-ери и Set-ери.
    public: void SetX(int x){ this -> x = x; }
    public: void SetY(int y){ this -> y = y; }
    public: int GetX(){ return x; }
    public: int GetY(){ return y; }

};

class Rectangle{

    //Полета за лице и обиколка.
    private: double area, perimeter;
    //Инстанция на класа Point/вторият ъгъл на квадратът с кординати (0, 0) по подразбиране.
    private: Point corner;

    //Варианти без използване на библиотека.(cmath)
    ///private: void GetArea(){ area = corner.GetX() * corner.GetY(); area = (area < 0) ? -area : area; }
    ///private: void GetPerimeter(){ perimeter = ((corner.GetX()) ? corner.GetX() : -corner.GetX() + (corner.GetY()) ? corner.GetY() : -corner.GetY()) * 2; }
    
    //Вариант с използване на библиотека.(cmath)
    private: void GetArea(){ area = abs(corner.GetX() * corner.GetY()) * 4; }
    private: void GetPerimeter(){ perimeter = (abs(corner.GetX()) + abs(corner.GetY())) * 4; }

    //Конструкторът на Rectangle, като в него задаваме кординатите на вторият му ъгъл и смятаме лицето и обиколката в него.
    public: Rectangle(int x, int y){ corner.SetX(x); corner.SetY(y); GetArea(); GetPerimeter(); }

    //Вариант с printf() и форматиране на string-ове.
    ///public: void Print(){ printf("The corner is at: X = %d/Y = %d\n", corner.GetX(), corner.GetY()); printf("Area is: %4.2f\n", area); printf("Perimeter is: %4.2f\n", perimeter); }
    //Вариант с нормалния cout.
    public: void Print(){ std :: cout << "The corner is at: X = " << corner.GetX() << "/Y = " << corner.GetY() << "\nArea is: " << area << "\nPerimeter is: " << perimeter << '\n'; }

};

int main(){

    Rectangle rect(1, 4);
    rect.Print();

}