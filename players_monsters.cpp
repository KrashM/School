#include<iostream>
using namespace std;
class Hero{
    private:
        string Username;
        int Level;
    public:
        Hero(string username, int level){ Username = username; Level = level; }
        void Print(){ cout << "Hello! I'm " << Username << " and my level is " << Level << '.' << '\n'; }
};
class Elf: public Hero{
    public: Elf(string username, int level): Hero(username, level){  }
};
class Wizard: public Hero{
    public: Wizard(string username, int level): Hero(username, level){  }
};
class Knight: public Hero{
    public: Knight(string username, int level): Hero(username, level){  }
};
class MuseElf: public Elf{
    public: MuseElf(string username, int level): Elf(username, level){  }
};
class DarkWizard: public Wizard{
    public: DarkWizard(string username, int level): Wizard(username, level){  }
};
class DarkKnight: public Knight{
    public: DarkKnight(string username, int level): Knight(username, level){  }
};
class SoulMaster: public DarkWizard{
    public: SoulMaster(string username, int level): DarkWizard(username, level){  }
};
class BladeKnight: public DarkKnight{
    public: BladeKnight(string username, int level): DarkKnight(username, level){  }
};

int main(){
    Hero myHero("Hercules", 100);
    Elf myElf("Dobby", 11);
    Wizard myWizard("Harry", 88);
    Knight myKnight("Arthur", 57);
    MuseElf myMuseElf("Eameyo", 80);
    DarkWizard myDarkWizard("Voldemort", 13);
    DarkKnight myDarkKnight("Garen", 86);
    SoulMaster mySoulMaster("Merlin", 96);
    BladeKnight myBladeKnight("Darius", 90);

    myHero.Print();
    myElf.Print();
    myWizard.Print();
    myKnight.Print();
    myMuseElf.Print();
    myDarkWizard.Print();
    myDarkKnight.Print();
    mySoulMaster.Print();
    myBladeKnight.Print();
}
