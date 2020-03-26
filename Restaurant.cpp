#include<iostream>

class Product{

    private: std :: string name;
    private: double price;
    protected: Product(std :: string name, double price){ this -> name = name; this -> price = price; }

};

class Beverages: public Product{

    private: double milliliters;
    protected: Beverages(std :: string name, double price, double milliliters): Product(name, price){ this -> milliliters = milliliters; }
    
};

class HotBeverage: public Beverages{

    protected: HotBeverage(std :: string  name,  double  price,  double  milliliters): Beverages(name, price, milliliters){  }
    
};

class ColdBeverage: public Beverages{

    protected: ColdBeverage(std :: string name, double price, double milliliters): Beverages(name, price, milliliters){  }

};

class Coffee: public HotBeverage{

    private: double caffeine;
    public: Coffee(std :: string name, double caffeine, double price = 3.5, double milliliters = 50): HotBeverage(name, price, milliliters){ this -> caffeine = caffeine; GetProduct(); }
    public: void GetProduct() { std :: cout << "Here is your coffee!\n"; }
    
};

class Tea: public HotBeverage{

    public: Tea(std :: string name, double price,double milliliters): HotBeverage(name, price, milliliters){ GetProduct(); }
    public: void GetProduct(){ std :: cout << "Here is your tea!\n"; }
    
};

class Food: public Product{

    private: double grams;
    protected: Food(std :: string name, double price, double grams): Product (name, price){ this -> grams = grams; }
    
};

class MainDish: public Food{
    
    protected: MainDish(std :: string name,double price,double grams): Food(name, price, grams){  }
    
};

class Dessert: public Food{
    
    private: double calories;
    protected: Dessert (std :: string name,double price,double grams,double calories): Food(name, price, grams){ this -> calories = calories; }
    
};

class Starter: public Food{
    
    protected: Starter(std :: string name, double price, double grams): Food(name, price, grams){  }
    
};

class Cake: public Dessert{
    
    public: Cake(std :: string name, double price = 5, double grams = 250, double calories = 1000): Dessert(name, price, grams, calories){ GetProduct(); }
    public: void GetProduct(){ std :: cout << "Here is your cake!\n"; }
    
};

class Soup: public Starter{
    
    public: Soup(std :: string name, double price, double grams): Starter(name, price, grams){ GetProduct(); }
    public: void GetProduct(){ std :: cout << "Here is your soup!\n"; }
    
};

class Fish: public MainDish{
    
    public: Fish(std :: string name, double price, double grams = 22): MainDish(name, price, grams){ GetProduct(); }
    public: void GetProduct(){ std :: cout << "Here is your fish!\n"; }
    
};

int main (){

    Coffee coffee("Esspresso", 1,23);
    Fish fish("File ot akula", 25);
    Cake cake("Cake");
    
}