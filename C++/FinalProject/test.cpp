#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int who = 0;
class Skill{
    private:
    string name;
    int uses;
    int damage;
    string type;

    public:
    Skill(){}
    Skill(string n, int u, int d, string t){
        name = n;
        uses = u;
        damage = d;
        type = t;
    }

    int getDmg(){
        return damage;
    }
    int getUses(){
        return uses;
    }
    string getName(){
        return name;
    }
    string getType(){
        return type;
    }

    void useSkill(){
        uses--;
    }

    void printSkill(){
        cout<<left<<setw(25)<<setfill(' ')<<("["+name+"]");
        cout<<" Uses: " << uses << "\t Damage:" << damage << "\t Type: " << type<<endl;
    }
};

class Pokemon{
    private:
    int chealth;
    int maxhealth; // 100-300
    int attack; // 0.5 - 1.5
    string type; //fire / water / grass /  normal
    Skill moves[4];
    int damage;
    string moveName;

    public:
    Pokemon(){};
    Pokemon(int h, int a, string t){
        maxhealth = h;
        chealth = h;
        attack = a;
        type = t;
    }
    //Return type
    string getType(){
        return type;
    }
    //Return current health
    int getCHealth(){
        return chealth;
    }
    //return health
    int getHealth(){
        return maxhealth;
    }
    //Print data
    void printPokemon(){
        cout << "Health " << chealth << "/" << maxhealth << "\tType " << type;
    }

    void setMove(){ //preset the moves
        for(int i=0;i<4;i++){
            moves[i] = Skill ("null", 1, 1, "null");
        }
    }

    void addMove(Skill x){ //change moves
        if(moves[0].getName() == moves[3].getName()){
            moves[0] = x;
        }else if(moves[1].getName() == moves[2].getName()){
            moves[1] = x;
        }else if(moves[2].getName() == moves[3].getName()){
            moves[2] = x;
        }else if(moves[3].getName() != moves[2].getName()){
            moves[3] = x;
        }

    }

    void printMove(){ //print out moves
        cout << "\n1. " << moves[0].getName() << " " << moves[0].getUses() << " , " << moves[0].getDmg() << " , " << moves[0].getType();
        cout << "\n2. " << moves[1].getName() << " " << moves[1].getUses() << " , " << moves[1].getDmg() << " , " << moves[1].getType();
        cout << "\n3. " << moves[2].getName() << " " << moves[2].getUses() << " , " << moves[2].getDmg() << " , " << moves[2].getType();
        cout << "\n4. " << moves[3].getName() << " " << moves[3].getUses() << " , " << moves[3].getDmg() << " , " << moves[3].getType();
    }


    void chooseMove(int x, string t){ //damage multiplier
        damage =0;
        if(t == "Grass" && moves[x].getType() == "Fire"){
            damage = moves[x].getDmg() * 1.5;
        }else if(t == "Fire" && moves[x].getType() == "Grass"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Water" && moves[x].getType() == "Grass"){
            damage = moves[x].getDmg() * 1.5;
        }else if(t == "Grass" && moves[x].getType() == "Water"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Fire" && moves[x].getType() == "Water"){
            damage = moves[x].getDmg() * 1.5;
        }else if(t == "Water" && moves[x].getType() == "Fire"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Rock" && moves[x].getType() == "Fire"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Rock" && moves[x].getType() == "Normal"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Rock" && moves[x].getType() == "Water"){
            damage = moves[x].getDmg() * 1.5;
        }else if(t == "Rock" && moves[x].getType() == "Grass"){
            damage = moves[x].getDmg() * 0.5;
        }else if(t == "Fire" && moves[x].getType() == "Rock"){
            damage = moves[x].getDmg() * 1.5;
        }else{
            damage = moves[x].getDmg();
        }
        moveName = moves[x].getName();
        
    }
    //Print your move
    void printChooseMove(int x){
        cout << "You use " << moveName  << ", the opponent takes " << damage << " damage.\n";
        moves[x].useSkill();
    }
    //Pring opponent move
    void OprintChooseMove(int x){
        cout << "Your opponent uses " << moveName  << ", you take " << damage << " damage.\n";
        moves[x].useSkill();
    }
    //Get Damage
    int getDamage(){
        return damage;
    }
    //Do damage
    void minusDamage(Pokemon x){
        chealth = chealth - x.getDamage();
    }
    //Get the move used
    int getMoveUse(int x){
        return moves[x].getUses();
    }
};

int main(){
    //list of moves
    Skill movelist[]={
        Skill ("Pound",35, 40, "Normal"),
        Skill ("Double Slap",10, 15, "Normal"),
        Skill ("Comet Punch",15, 18, "Normal"),
        Skill ("Mega Punch",20, 80, "Normal"),
        Skill ("Pay Day",20, 40, "Normal"),
        Skill ("Scratch",35, 40, "Normal"),
        Skill ("Terrain Pulse",10, 50, "Normal"),
        Skill ("Vise Grip",30, 55, "Normal"),
        Skill ("Razor Wind",10, 80, "Normal"),
        Skill ("Cut",30, 50, "Normal"),
        Skill ("Bind",20, 15, "Normal"),
        Skill ("Slam",20, 80, "Normal"),
        Skill ("Stomp",20, 65, "Normal"),
        Skill ("Mega Kick",5, 120, "Normal"),
        Skill ("Hyper Beam",5, 150, "Normal"),
        Skill ("Strength",15, 80, "Normal"),
        Skill ("Headbutt",15, 70, "Normal"),
        Skill ("Swift",20, 60, "Normal"),
        Skill ("Pulverizing Pancake",1, 210, "Normal"),
        Skill ("Skull Bash",10, 130, "Normal"),
        Skill ("Spike Cannon",15, 20, "Normal"),
        Skill ("Constrict",35, 10, "Normal"),
        Skill ("Barrage",20, 15, "Normal"),
        Skill ("Quick Attack",30, 40, "Normal"),
        Skill ("Rage",20, 20, "Normal"),
        Skill ("Self-Destruct",5, 200, "Normal"),
        Skill ("Dizzy Punch",10, 70, "Normal"),
        Skill ("Egg Bomb",10, 100, "Normal"),
        Skill ("Horn Attack",25, 65, "Normal"),
        Skill ("Fury Attack",20, 15, "Normal"),
        Skill ("Tackle",35, 40, "Normal"),
        Skill ("Body Slam",15, 85, "Normal"),
        Skill ("Wrap",20, 15, "Normal"),
        Skill ("Explosion",5, 250, "Normal"),
        Skill ("Fury Swipes",15, 18, "Normal"),
        Skill ("Hyper Fang",15, 80, "Normal"),
        Skill ("Tri Attack",10, 80, "Normal"),
        Skill ("Uproar",10, 90, "Normal"),
        Skill ("Slash",20, 70, "Normal"),
        Skill ("Snore",15, 50, "Normal"),
        Skill ("Techno Blast",5, 120, "Normal"),
        Skill ("Relic Song",10, 75, "Normal"),
        Skill ("Struggle",1, 50, "Normal"),
        Skill ("Take Down",20, 90, "Normal"),
        Skill ("Thrash",10, 120, "Normal"),
        Skill ("Hyper Voice",10, 90, "Normal"),
        Skill ("Crush Claw",10, 75, "Normal"),
        Skill ("Retaliate",5, 70, "Normal"),
        Skill ("Weather Ball",10, 50, "Normal"),
        Skill ("Rapid Spin",40, 50, "Normal"),
        Skill ("Hidden Power",15, 60, "Normal"),
        Skill ("Extreme Speed",5, 80, "Normal"),
        Skill ("False Swipe",40, 40, "Normal"),
        Skill ("Giga Impact",5, 150, "Normal"),
        Skill ("Facade",20, 70, "Normal"),
        Skill ("Tail Slap",10, 25, "Normal"),
        Skill ("Head Charge",15, 120, "Normal"),
        Skill ("Double Hit",10, 35, "Normal"),
        Skill ("Revelation Dance",15, 90, "Normal"),
        Skill ("Judgment",10, 100, "Normal"),
        Skill ("Smelling Salts",10, 70, "Normal"),
        Skill ("Double-Edge",15, 120, "Normal"),
        Skill ("Feint",10, 30, "Normal"),
        Skill ("Hold Back",40, 40, "Normal"),
        Skill ("Last Resort",5, 140, "Normal"),
        Skill ("Fake Out",10, 40, "Normal"),
        Skill ("Secret Power",20, 70, "Normal"),
        Skill ("Rock Climb",20, 90, "Normal"),
        Skill ("Covet",25, 60, "Normal"),
        Skill ("Boomburst",10, 140, "Normal"),
        Skill ("Round",15, 60, "Normal"),
        Skill ("Multi-Attack",10, 120, "Normal"),
        Skill ("Echoed Voice",15, 40, "Normal"),
        Skill ("Chip Away",20, 70, "Normal"),
        Skill ("Ember",25, 40, "Fire"),
        Skill ("Flamethrower",15, 90, "Fire"),
        Skill ("Fire Punch",15, 75, "Fire"),
        Skill ("Water Gun",25, 40, "Water"),
        Skill ("Hydro Pump",5, 110, "Water"),
        Skill ("Surf",15, 90, "Water"),
        Skill ("Bubble Beam",20, 65, "Water"),
        Skill ("Absorb",25, 20, "Grass"),
        Skill ("Mega Drain",15, 40, "Grass"),
        Skill ("Razor Leaf",25, 55, "Grass"),
        Skill ("Vine Whip",25, 45, "Grass"),
        Skill ("Solar Beam",10, 120, "Grass"),
        Skill ("Petal Dance",10, 120, "Grass"),
        Skill ("Fire Spin",15, 35, "Fire"),
        Skill ("Fire Blast",5, 110, "Fire"),
        Skill ("Waterfall",15, 80, "Water"),
        Skill ("Clamp",15, 35, "Water"),
        Skill ("Bubble",30, 40, "Water"),
        Skill ("Crabhammer",10, 100, "Water"),
        Skill ("Flame Wheel",25, 60, "Fire"),
        Skill ("Octazooka",10, 65, "Water"),
        Skill ("Giga Drain",10, 75, "Grass"),
        Skill ("Sacred Fire",5, 100, "Fire"),
        Skill ("Whirlpool",15, 35, "Water"),
        Skill ("Heat Wave",10, 95, "Fire"),
        Skill ("Eruption",5, 150, "Fire"),
        Skill ("Dive",10, 80, "Water"),
        Skill ("Blaze Kick",10, 85, "Fire"),
        Skill ("Needle Arm",15, 60, "Grass"),
        Skill ("Blast Burn",5, 150, "Fire"),
        Skill ("Hydro Cannon",5, 150, "Water"),
        Skill ("Overheat",5, 130, "Fire"),
        Skill ("Water Spout",5, 150, "Water"),
        Skill ("Muddy Water",10, 90, "Water"),
        Skill ("Bullet Seed",30, 25, "Grass"),
        Skill ("Frenzy Plant",5, 150, "Grass"),
        Skill ("Magical Leaf",20, 60, "Grass"),
        Skill ("Leaf Blade",15, 90, "Grass"),
        Skill ("Water Pulse",20, 60, "Water"),
        Skill ("Brine",10, 65, "Water"),
        Skill ("Flare Blitz",15, 120, "Fire"),
        Skill ("Aqua Tail",10, 90, "Water"),
        Skill ("Seed Bomb",15, 80, "Grass"),
        Skill ("Energy Ball",10, 90, "Grass"),
        Skill ("Fire Fang",15, 65, "Fire"),
        Skill ("Lava Plume",15, 80, "Fire"),
        Skill ("Leaf Storm",5, 130, "Grass"),
        Skill ("Power Whip",10, 120, "Grass"),
        Skill ("Wood Hammer",15, 120, "Grass"),
        Skill ("Aqua Jet",20, 40, "Water"),
        Skill ("Magma Storm",5, 100, "Fire"),
        Skill ("Seed Flare",5, 120, "Grass"),
        Skill ("Flame Burst",15, 70, "Fire"),
        Skill ("Flame Charge",20, 50, "Fire"),
        Skill ("Scald",15, 80, "Water"),
        Skill ("Incinerate",15, 60, "Fire"),
        Skill ("Inferno",5, 100, "Fire"),
        Skill ("Water Pledge",10, 80, "Water"),
        Skill ("Fire Pledge",10, 80, "Fire"),
        Skill ("Grass Pledge",10, 80, "Grass"),
        Skill ("Horn Leech",10, 75, "Grass"),
        Skill ("Razor Shell",10, 75, "Water"),
        Skill ("Leaf Tornado",10, 65, "Grass"),
        Skill ("Searing Shot",5, 100, "Fire"),
        Skill ("Blue Flare",5, 130, "Fire"),
        Skill ("Fiery Dance",10, 80, "Fire"),
        Skill ("V-create",5, 180, "Fire"),
        Skill ("Fusion Flare",5, 100, "Fire"),
        Skill ("Petal Blizzard",15, 90, "Grass"),
        Skill ("Steam Eruption",5, 110, "Water"),
        Skill ("Water Shuriken*",20, 15, "Water"),
        Skill ("Mystical Fire",10, 75, "Fire"),
        Skill ("Origin Pulse",10, 110, "Water"),
        Skill ("Sparkling Aria",10, 90, "Water"),
        Skill ("Solar Blade",10, 125, "Grass"),
        Skill ("Leafage",40, 40, "Grass"),
        Skill ("Fire Lash",15, 80, "Fire"),
        Skill ("Burn Up",5, 130, "Fire"),
        Skill ("Trop Kick",15, 70, "Grass"),
        Skill ("Oceanic Operetta",1, 195, "Water"),
        Skill ("Shell Trap",5, 150, "Fire"),
        Skill ("Liquidation",10, 85, "Water"),
        Skill ("Mind Blown",5, 150, "Fire"),
        Skill ("Splishy Splash",15, 90, "Water"),
        Skill ("Bouncy Bubble",15, 90, "Water"),
        Skill ("Sizzly Slide",15, 90, "Fire"),
        Skill ("Sappy Seed",15, 90, "Grass"),
        Skill ("Snipe Shot",15, 80, "Water"),
        Skill ("Fishious Rend",10, 85, "Water"),
        Skill ("Drum Beating",10, 80, "Grass"),
        Skill ("Snap Trap",15, 35, "Grass"),
        Skill ("Pyro Ball",5, 120, "Fire"),
        Skill ("Branch Poke",40, 40, "Grass"),
        Skill ("Apple Acid",10, 80, "Grass"),
        Skill ("Grav Apple",10, 80, "Grass"),
        Skill ("Grassy Glide",20, 70, "Grass"),
        Skill ("Burning Jealousy",5, 70, "Fire"),
        Skill ("Flip Turn",20, 60, "Water"),
        Skill ("Surging Strikes",5, 25, "Water"),
        Skill ("Rock Throw",15, 50, "Rock"),
        Skill ("Rock Slide",10, 75, "Rock"),
        Skill ("Ancient Power",5, 60, "Rock"),
        Skill ("Rock Tomb",15, 60, "Rock"),
        Skill ("Rock Blast",10, 25, "Rock"),
        Skill ("Power Gem",20, 80, "Rock"),
        Skill ("Rock Wrecker",5, 150, "Rock"),
        Skill ("Stone Edge",5, 100, "Rock"),
        Skill ("Head Smash",5, 150, "Rock"),
        Skill ("Smack Down",15, 50, "Rock"),
        Skill ("Diamond Storm",5, 100, "Rock"),
        Skill ("Accelerock",20, 40, "Rock"),
        Skill ("Meteor Beam",10, 120, "Rock"),
    };
    int moveR;
    string types[5] = {"Fire", "Water", "Grass", "Normal", "Rock"};
    Pokemon player[6];
    Pokemon gymleader[6];

    //set the three pokemons
    srand(time(NULL));
    for(int i=0; i<6; i++){
        int typeR = rand()%4;
        int maxhealthR = rand()%200 + 100;
        float attackR = (rand()% 10 + 5)/10;
        player[i] = Pokemon(maxhealthR, attackR, types[typeR]);
    }
    for(int i=0; i<6; i++){
        int typeR = rand()%4;
        int maxhealthR = rand()%200 + 100;
        float attackR = rand()% 1 + 0.5;
        gymleader[i] = Pokemon(maxhealthR, attackR, types[typeR]);
    }

    int p =0;
    int o=0;
    while(p!=6 && o!=6){
        //set/print your pokemon
        cout <<"\n\nYour send out a Pokemon\n";
        player[p].printPokemon();
        if(player[p].getCHealth() == player[p].getHealth()){
            player[p].setMove();
            moveR = rand()%112 + 73;
            while(movelist[moveR].getType() != player[p].getType()){
                moveR = rand()%112 + 73;
            }
            player[p].addMove(movelist[moveR]);
            for(int i=1;i<4;i++){
                moveR = rand()%185;
                while(movelist[moveR].getType() != player[p].getType() && moveR > 73){
                    moveR = rand()%185;
                }
                player[p].addMove(movelist[moveR]);
            }
        }
        player[p].printMove();

        //opponet set pokemon
        cout <<"\n\nYour Opponent sends of a Pokemon\n";
        gymleader[o].printPokemon();
        if(gymleader[o].getCHealth() == gymleader[o].getHealth()){
            gymleader[o].setMove();
            moveR = rand()%112 + 73;
            while(movelist[moveR].getType() != gymleader[o].getType()){
                moveR = rand()%112 + 73;
            }
            gymleader[o].addMove(movelist[moveR]);
            for(int i=1;i<4;i++){
                moveR = rand()%185;
                while(movelist[moveR].getType() != gymleader[o].getType() && moveR > 73){
                    moveR = rand()%185;
                }
                gymleader[o].addMove(movelist[moveR]);
            }
        }
        //The game
        int choosemove;
        int cm = 0;
        int dmg;
        do{
            cout << endl << "Choose your move(1, 2, 3, 4): ";
            cin >> choosemove;
            choosemove--;
            cout << endl;
            player[p].chooseMove(choosemove, gymleader[o].getType()); //Player move
            player[p].printChooseMove(choosemove);
            gymleader[o].minusDamage(player[p]);
            cout << endl << "It's gymleader's turn." << endl;
            choosemove = rand()%4+1;
            choosemove--;
            gymleader[o].chooseMove(choosemove, player[p].getType());//Gymleader move
            gymleader[o].OprintChooseMove(choosemove);
            player[p].minusDamage(gymleader[o]);
            if(player[p].getCHealth() <= 0){
                cm++;
                p++;
            }else if(gymleader[o].getCHealth() <= 0){
                cm++;
                o++;
            }
        }while(cm = 0);
        if(p>6){
            who++;
        }if(o>6){
            who--;
        }
    }
    if(who = 1){//Who won
        cout << endl << "You Lose the Game!";
    }else if(who = -1){
        cout << endl << "You Won the Game!";
    }
}