#include<iostream>

class Trapezoid{

    private:
        double bottom_base;
        double upper_base;
        double height;
    public:
        Trapezoid(){
            this->bottom_base = 0;
            this->upper_base = 0;
            this->height = 0;
        }

        Trapezoid(double bottom_base, double upper_base, double height){

            this->set_bottom_base(bottom_base);
            this->set_upper_base(upper_base);
            this->set_height(height);

        }

        Trapezoid(Trapezoid &trap){

            this->bottom_base = trap.bottom_base;
            this->upper_base = trap.upper_base;
            this->height = trap.height;

        }



        void set_bottom_base(double bottom_base){
            this->bottom_base = bottom_base;
        }
        double get_bottom_base(){
            return this->bottom_base;
        }

        void set_upper_base(double upper_base){
            this->upper_base = upper_base;
        }
        double get_upper_base(){
            return this->upper_base;
        }

        void set_height(double height){
            this->height = height;
        }
        double get_height(){
            return this->height;
        }



        double calculate_area(){
            return (this->bottom_base + this->upper_base) / 2 * this->height;
        }

};

int main(){

    double bottom_base, upper_base, height;
    std :: cin >> bottom_base >> upper_base >> height;

    Trapezoid trap(bottom_base, upper_base, height);
    //Trapezoid trap;
    //trap.set_bottom_base(bottom_base);
    //trap.set_upper_base(upper_base);
    //trap.set_height(height);
    std :: cout << '\n' << trap.get_bottom_base() << '\n' << trap.get_upper_base() << '\n' << trap.get_height() << "\n\n" << trap.calculate_area();

}
