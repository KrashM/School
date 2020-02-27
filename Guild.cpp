#include<iostream>
#include<vector>

class Player{

    private: std :: string Name;
    private: std :: string Class;
    private: std :: string Rank = "Trial";
    private: std :: string Description = "n/a";

    public: std :: string Get_Name(){ return Name; }
    public: std :: string Get_Class(){ return Class; }
    public: std :: string Get_Rank(){ return Rank; }
    public: std :: string Get_Description(){ return Description; }

    public: void Set_Name(std :: string Name){ this -> Name = Name; }
    public: void Set_Class(std :: string Class){ this -> Class = Class; }
    public: void Set_Rank(std :: string Rank){ this -> Rank = Rank; }
    public: void Set_Description(std :: string Description){ this -> Description = Description; }

    public: Player(std :: string Name, std :: string Class){ this -> Name = Name; this -> Class = Class; };
    public: Player(){ this -> Name = ""; this -> Class = ""; };

    public: std :: string ToString(){ return "Player " + Name + ": " + Class + "\nRank: " + Rank + "\nDescription: " + Description; }

};

class Guild{

    private: std :: vector<Player> players;
    private: std :: string Name;
    private: int Count = 0;
    private: int Capacity;


    public: Guild(std :: string Name, int Capacity){ this -> Name = Name; this -> Capacity = Capacity; };
    public: int Get_Count(){ return Count; }

    public: void AddPlayer(Player player){

        if(players.size() > Capacity) return;
        players.push_back(player);
        Count++;

    }

    public: bool RemovePlayer(std :: string name){

        for(int i = 0; i < Count; i++)
            if(players[i].Get_Name() == name) {

                    players.erase(players.begin() + i);
                    return true;

            }
        return false;

    }

    public: void PromotePlayer(std :: string name){

        for(int i = 0; i < Count; i++)
            if(players[i].Get_Name() == name) {

                if(players[i].Get_Rank() == "Member") return;
                players[i].Set_Rank("Member");
                return;

            }

    }

    public: void DemotePlayer(std :: string name){

        for(int i = 0; i < Count; i++)
            if(players[i].Get_Name() == name) {

                if(players[i].Get_Rank() == "Trial") return;
                players[i].Set_Rank("Trial");
                return;

            }

    }

    public: Player * KickPlayersByClass(std :: string Class){

        int indexes[players.size()], index = 0, index_in_players = 0;

        for(int i = 0; i < Count; i++){

            if(players[i].Get_Class() == Class) {

                indexes[index] = index_in_players;
                index++;

            }

            index_in_players++;

        }

        Player kicked_players[index];

        for(int i = 0; i < index; i++){

            kicked_players[i] = players[indexes[i]];
            players.erase(players.begin() + indexes[i]);
            Count--;

        }

        return kicked_players;

    }

    public: std :: string Report(){

        std :: string repo = "Players in the guild: " + Name;
        for(int i = 0; i < Count; i++) repo += '\n' + players[i].Get_Name();
        return repo;

    }

};

int main(){

    Guild guild = Guild("Weekend Raiders", 20);
    Player player = Player("Mark", "Rouge");

    std :: cout << player.ToString() << '\n';

    guild.AddPlayer(player);

    std :: cout << guild.Get_Count() << '\n';
    std :: cout << guild.RemovePlayer("Gosho") << '\n';

    Player firstPlayer = Player("Pep", "Warrior");
    Player secondPlayer = Player("Lizzy", "Priest");
    Player thirdPlayer = Player("Mike", "Rogue");
    Player fourthPlayer = Player("Marlin", "Mage");

    secondPlayer.Set_Description("Best healer EU");

    guild.AddPlayer(firstPlayer);
    guild.AddPlayer(secondPlayer);
    guild.AddPlayer(thirdPlayer);
    guild.AddPlayer(fourthPlayer);

    guild.PromotePlayer("Lizzy");

    std :: cout << guild.RemovePlayer("Pep") << '\n';

    Player *kickedPlayers = guild.KickPlayersByClass("Rogue");

    for(int i = 0; i < sizeof(kickedPlayers); i++){

        if(i == sizeof(kickedPlayers) - 1) std :: cout << kickedPlayers[i].Get_Name() << '\n';
        std :: cout << kickedPlayers[i].Get_Name() << " , ";

    }
    std :: cout << guild.Report() << '\n';

}
