#include<iostream>
#include<cmath>

using namespace std;

class Point{
	
	private:
        int x, y;

	public:
        Point(int a = 0, int b = 0){ x = a; y = b; }
		
        void Print(){ cout << "(" << x << "," << y << ")\n"; }
		
        int GetX(){ return x; }
        int GetY(){ return y; }
		
};

class Square{
	
	private:
        Point a;
		
	public:
        Square(Point b) { a=b; }
        
		void Print() { cout << a.Print() << Perimeter() << '\n' << Area() << '\n'; }
        
		int Perimeter() { return 8 * abs(a.GetX()); }
        int Area() { return 4 * abs(a.GetX() * a.GetX()); }

};

int main(){
	
    Point A(3, -3);
    Square B(A);
    B.Print();

}