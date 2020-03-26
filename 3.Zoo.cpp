#include<iostream>

class Animal{

    private: std :: string name;
    public: Animal(std :: string name){ this -> name = name; }
    public: std :: string GetName(){ return name; }

};

class Reptile: public Animal{

    public: Reptile(std :: string name): Animal(name){ }

};

class Lizard: public Reptile{

    public: Lizard(std :: string name): Reptile(name){ }

};

class Snake: public Reptile{

    public: Snake(std :: string name): Reptile(name){ }

};

class Mammal: public Animal{

    public: Mammal(std :: string name): Animal(name){ }

};

class Gorilla: public Mammal{

    public: Gorilla(std :: string name): Mammal(name){ }

};

class Bear: public Mammal{

    public: Bear(std :: string name): Mammal(name){ }

};


int main(){

    Bear mybear("Heidi");
    std :: cout << mybear.GetName();

}
