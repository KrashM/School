#include<iostream>
#include<vector>

class Player{

    private: string Name;
    private: string Class;
    private: string Rank = "Trial";
    private: string Description = "n/a";

    public: string Get_Name(){ return Name; }
    public: string Get_Class(){ return Class; }
    public: string Get_Rank(){ return Rank; }
    public: string Get_Description(){ return Description; }

    public: void Set_Name(string name){ this.Name = name; }
    public: void Set_Class(string class){ this.Class = class; }
    public: void Set_Rank(string rank){ this.Rank = rank; }
    public: void Set_Description(string description){ this.Description = description; }

    public: Player(string name, string class){

        this.Name = name;
        this.Class = class;

    };

    public: string ToString(){

        return std :: format("Player {}: {}\nRank: {}\nDescription: {}", this.Name, this.Class, this.Rank, this.Description);

    }

};

class Guild{

    private: vector<Player> players;
    private: string Name;
    private: int fill_level;
    private: int Capacity;


    public: Guild(string name, int capacity){

        this.Name = name;
        this.Capacity = capacity;

    };

    public: void AddPlayer(Player player){

        if(this.players.size() > this.Capacity) return;
        this.players.push_back(player);
        this.fill_level++;

    }

    public: void RemovePlayer(string name){

        for(int i = 0; i < this.fill_level; i++){

            if(this.players[i].Get_Name() == name) {

                    this.players.erase(i);
                    return;

            }

        }

    }

    public: void PromotePlayer(string name){

        for(int i = 0; i < this.fill_level; i++){

            if(this.players[i].Get_Name() == name){

                if(this.players[i].Get_Rank() == "Member") return;
                this.players[i].Set_Rank("Member");
                return;

            }

        }

    }

    public: void DemotePlayer(string name){

        for(int i = 0; i < this.fill_level; i++){

            if(this.players[i].Get_Name() == name){

                if(this.players[i].Get_Rank() == "Trial") return;
                this.players[i].Set_Rank("Trial");
                return;

            }

        }

    }

    public: void KickPlayersByClass(string class){

        vector<int> indexes;

        for(int i = 0; i < this.fill_level; i++)
            if(this.players[i].Get_Class() == class) indexes.push_back(i);

        Player kicked_players[indexes.length];

        for(int i = 0; i < indexes.size(); i++){

            kicked_players[i] =

        }

    }

};

int main(){



}
