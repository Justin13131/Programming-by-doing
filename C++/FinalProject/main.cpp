#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <iomanip>
#include <stdio.h>
using namespace std;

class Skill{
    private:
        string name;
        int uses;
        int damage;
        string type; //fire water grass normal rock
    public:
        Skill();
        Skill(string skill_name, int skill_uses, int skill_damage, string skill_type) {
            name = skill_name;
            uses = skill_uses;
            damage = skill_damage;
            type = skill_type;
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
            cout << "You use " << name << ", the opponent takes " << damage << " damage.";
        }
        void opponentSkill() {
            cout << "The opponent uses " << name << ", you take " << damage << " damage.";
        }
        // void printSkill(){
        //     cout << "Name: " << name << endl;
        //     cout <<" Uses: " << uses << "\t Damage:" << damage << "\t Type: " << type<<endl;
        // }

};

class Pokemon{
    private:
        int currenthealth; //
        int maxhealth; // 100-300
        double attack; // 0.5 - 1.5
        string type; //fire / water / grass /  normal / rock
        Skill skill_moves[4];
    public: 
        Pokemon();
        Pokemon(int h, int a, string t){
        maxhealth = h;
        currenthealth = h;
        attack = a;
        type = t;
    }
    void printMove(){ //print out moves
        cout << "\n1. " << skill_moves[0].getName() << " " << skill_moves[0].getUses() << " , " << skill_moves[0].getDmg() << " , " << skill_moves[0].getType();
        cout << "\n2. " << skill_moves[1].getName() << " " << skill_moves[1].getUses() << " , " << skill_moves[1].getDmg() << " , " << skill_moves[1].getType();
        cout << "\n3. " << skill_moves[2].getName() << " " << skill_moves[2].getUses() << " , " << skill_moves[2].getDmg() << " , " << skill_moves[2].getType();
        cout << "\n4. " << skill_moves[3].getName() << " " << skill_moves[3].getUses() << " , " << skill_moves[3].getDmg() << " , " << skill_moves[3].getType();
    }
    string getType(){
        return type;
    }

    int getCHealth(){
        return currenthealth;
    }

    int getHealth(){
        return maxhealth;
    }

    void printPokemon(){
        cout << "Health " << currenthealth << "/" << maxhealth << "\tType " << type;
    }

    void setMove(){ //preset the moves
        for(int i=0;i<4;i++){
            skill_moves[i] = Skill ("null", 1, 1, "null");
        }
    }

    void addMove(Skill x){ //change moves
        if(skill_moves[0].getName() == skill_moves[3].getName()){
            skill_moves[0] = x;
        }else if(skill_moves[1].getName() == skill_moves[2].getName()){
            skill_moves[1] = x;
        }else if(skill_moves[2].getName() == skill_moves[3].getName()){
            skill_moves[2] = x;
        }else if(skill_moves[3].getName() != skill_moves[2].getName()){
            skill_moves[3] = x;
        }

    }


};
int typecomparison(string type, string type2) {
    /* Fire > Grass x1.5
    Fire > Water x0.5

    Grass > Water x1.5
    Grass > Fire x0.5
    Water > Fire x1.5
    Water > Grass x0.5

    Fire > Rock x0.5
    Normal > Rock x0.5
    Water > Rock x1.5
    Grass > Rock x1.5
    Rock > Fire x1.5
    Rock > Normal x1
    Rock > Water x1
    Rock > Grass x1
    Everything else is x1 */
    double dmg;
    if(type == "fire") {
        if(type2 == "grass"){
            dmg = 1.5;
            return dmg;
        }else if(type2 == "water"){
            dmg = 0.5;
            return dmg;
        }else if(type2 == "rock"){
            dmg = 0.5;
            return dmg;
        }
    }else if(type == "grass"){
        if(type2 == "water"){
            dmg = 1.5;
            return dmg;
        }else if(type2 == "fire"){
            dmg = 0.5;
            return dmg;
        }else if(type2 == "rock"){
            dmg = 1.5;
            return dmg;
        }
    }else if(type == "water"){
        if(type2 == "fire"){
            dmg = 1.5;
            return dmg;
        }else if(type2 == "grass"){
            dmg = 0.5;
            return dmg;
        }else if(type2 == "rock"){
            dmg = 1.5;
            return dmg;
        }
    }else if(type == "normal"){
        if(type2 == "rock"){
            dmg = 0.5;
            return dmg;
        }
    }else if(type == "rock"){
        if(type2 == "fire"){
            dmg = 1.5;
            return dmg;
        }else if(type2 == "normal"){
            dmg = 1;
            return dmg;
        }else if(type2 == "water"){
            dmg = 1;
            return dmg;
        }else if(type2 == "grass"){
            dmg = 1;
            return dmg;
        }
    }
}

int main(){
    srand(time(NULL));
    int moveR;
    Skill skills[181] = {
        Skill("Pound", 35, 40, "Normal"),
        Skill("Double Slap", 10, 15, "Normal"),
        Skill("Comet Punch", 15, 18, "Normal"),
        Skill("Mega Punch", 20, 80, "Normal"),
        Skill("Pay Day", 20, 40, "Normal"),
        Skill("Fire Punch", 15, 75, "Fire"),
        Skill("Scratch", 35, 40, "Normal"),
        Skill("Vise Grip", 30, 55, "Normal"),
        Skill("Razor Wind", 10, 80, "Normal"),
        Skill("Cut", 30, 50, "Normal"),
        Skill("Bind", 20, 15, "Normal"),
        Skill("Slam", 20, 80, "Normal"),
        Skill("Stomp", 20, 65, "Normal"),
        Skill("Mega Kick", 5, 120, "Normal"),
        Skill("Headbutt", 15, 70, "Normal"),
        Skill("Horn Attack", 25, 65, "Normal"),
        Skill("Fury Attack", 20, 15, "Normal"),
        Skill("Tackle", 35, 40, "Normal"),
        Skill("Body Slam", 15, 85, "Normal"),
        Skill("Wrap", 20, 15, "Normal"),
        Skill("Take Down", 20, 90, "Normal"),
        Skill("Thrash", 10, 120, "Normal"),
        Skill("Double-Edge", 15, 120, "Normal"),
        Skill("Ember", 25, 40, "Fire"),
        Skill("Flamethrower", 15, 90, "Fire"),
        Skill("Water Gun", 25, 40, "Water"),
        Skill("Hydro Pump", 5, 110, "Water"),
        Skill("Surf", 15, 90, "Water"),
        Skill("Bubble Beam", 20, 65, "Water"),
        Skill("Hyper Beam", 5, 150, "Normal"),
        Skill("Strength", 15, 80, "Normal"),
        Skill("Absorb", 25, 20, "Grass"),
        Skill("Mega Drain", 15, 40, "Grass"),
        Skill("Razor Leaf", 25, 55, "Grass"),
        Skill("Solar Beam", 10, 120, "Grass"),
        Skill("Petal Dance", 10, 120, "Grass"),
        Skill("Fire Spin", 15, 35, "Fire"),
        Skill("Rock Throw", 15, 50, "Rock"),
        Skill("Quick Attack", 30, 40, "Normal"),
        Skill("Rage", 20, 20, "Normal"),
        Skill("Egg Bomb", 10, 100, "Normal"),
        Skill("Fire Blast", 5, 110, "Fire"),
        Skill("Waterfall", 15, 80, "Water"),
        Skill("Clamp", 15, 35, "Water"),
        Skill("Swift", 20, 60, "Normal"),
        Skill("Skull Bash", 10, 130, "Normal"),
        Skill("Spike Cannon", 15, 20, "Normal"),
        Skill("Constrict", 35, 10, "Normal"),
        Skill("Barrage", 20, 15, "Normal"),
        Skill("Bubble", 30, 40, "Water"),
        Skill("Dizzy Punch", 10, 70, "Normal"),
        Skill("Crabhammer", 10, 100, "Water"),
        Skill("Fury Swipes", 15, 18, "Normal"),
        Skill("Rock Slide", 10, 75, "Rock"),
        Skill("Hyper Fang", 15, 80, "Normal"),
        Skill("Tri Attack", 10, 80, "Normal"),
        Skill("Slash", 20, 70, "Normal"),
        Skill("Struggle", 1, 50, "Normal"),
        Skill("Flame Wheel", 25, 60, "Fire"),
        Skill("Snore", 15, 50, "Normal"),
        Skill("Octazooka", 10, 65, "Water"),
        Skill("Giga Drain", 10, 75, "Grass"),
        Skill("False Swipe", 40, 40, "Normal"),
        Skill("Sacred Fire", 5, 100, "Fire"),
        Skill("Rapid Spin", 40, 50, "Normal"),
        Skill("Hidden Power", 15, 60, "Normal"),
        Skill("Extreme Speed", 5, 80, "Normal"),
        Skill("Ancient Power", 5, 60, "Rock"),
        Skill("Whirlpool", 15, 35, "Water"),
        Skill("Fake Out", 10, 40, "Normal"),
        Skill("Uproar", 10, 90, "Normal"),
        Skill("Facade", 20, 70, "Normal"),
        Skill("Smelling Salts", 10, 70, "Normal"),
        Skill("Eruption", 5, 150, "Fire"),
        Skill("Secret Power", 20, 70, "Normal"),
        Skill("Dive", 10, 80, "Water"),
        Skill("Blaze Kick", 10, 85, "Fire"),
        Skill("Needle Arm", 15, 60, "Grass"),
        Skill("Hyper Voice", 10, 90, "Normal"),
        Skill("Crush Claw", 10, 75, "Normal"),
        Skill("Blast Burn", 5, 150, "Fire"),
        Skill("Hydro Cannon", 5, 150, "Water"),
        Skill("Weather Ball", 10, 50, "Normal"),
        Skill("Overheat", 5, 130, "Fire"),
        Skill("Rock Tomb", 15, 60, "Rock"),
        Skill("Water Spout", 5, 150, "Water"),
        Skill("Muddy Water", 10, 90, "Water"),
        Skill("Bullet Seed", 30, 25, "Grass"),
        Skill("Frenzy Plant", 5, 150, "Grass"),
        Skill("Covet", 25, 60, "Normal"),
        Skill("Magical Leaf", 20, 60, "Grass"),
        Skill("Leaf Blade", 15, 90, "Grass"),
        Skill("Rock Blast", 10, 25, "Rock"),
        Skill("Water Pulse", 20, 60, "Water"),
        Skill("Brine", 10, 65, "Water"),
        Skill("Last Resort", 5, 140, "Normal"),
        Skill("Flare Blitz", 15, 120, "Fire"),
        Skill("Aqua Tail", 10, 90, "Water"),
        Skill("Seed Bomb", 15, 80, "Grass"),
        Skill("Power Gem", 20, 80, "Rock"),
        Skill("Energy Ball", 10, 90, "Grass"),
        Skill("Giga Impact", 5, 150, "Normal"),
        Skill("Fire Fang", 15, 65, "Fire"),
        Skill("Rock Climb", 20, 90, "Normal"),
        Skill("Lava Plume", 15, 80, "Fire"),
        Skill("Leaf Storm", 5, 130, "Grass"),
        Skill("Power Whip", 10, 120, "Grass"),
        Skill("Rock Wrecker", 5, 150, "Rock"),
        Skill("Stone Edge", 5, 100, "Rock"),
        Skill("Judgment", 10, 100, "Normal"),
        Skill("Wood Hammer", 15, 120, "Grass"),
        Skill("Aqua Jet", 20, 40, "Water"),
        Skill("Head Smash", 5, 150, "Rock"),
        Skill("Double Hit", 10, 35, "Normal"),
        Skill("Magma Storm", 5, 100, "Fire"),
        Skill("Seed Flare", 5, 120, "Grass"),
        Skill("Smack Down", 15, 50, "Rock"),
        Skill("Flame Burst", 15, 70, "Fire"),
        Skill("Flame Charge", 20, 50, "Fire"),
        Skill("Round", 15, 60, "Normal"),
        Skill("Echoed Voice", 15, 40, "Normal"),
        Skill("Chip Away", 20, 70, "Normal"),
        Skill("Scald", 15, 80, "Water"),
        Skill("Incinerate", 15, 60, "Fire"),
        Skill("Retaliate", 5, 70, "Normal"),
        Skill("Inferno", 5, 100, "Fire"),
        Skill("Water Pledge", 10, 80, "Water"),
        Skill("Fire Pledge", 10, 80, "Fire"),
        Skill("Grass Pledge", 10, 80, "Grass"),
        Skill("Horn Leech", 10, 75, "Grass"),
        Skill("Razor Shell", 10, 75, "Water"),
        Skill("Leaf Tornado", 10, 65, "Grass"),
        Skill("Tail Slap", 10, 25, "Normal"),
        Skill("Head Charge", 15, 120, "Normal"),
        Skill("Searing Shot", 5, 100, "Fire"),
        Skill("Techno Blast", 5, 120, "Normal"),
        Skill("Relic Song", 10, 75, "Normal"),
        Skill("Blue Flare", 5, 130, "Fire"),
        Skill("Fiery Dance", 10, 80, "Fire"),
        Skill("V-create", 5, 180, "Fire"),
        Skill("Fusion Flare", 5, 100, "Fire"),
        Skill("Petal Blizzard", 15, 90, "Grass"),
        Skill("Boomburst", 10, 140, "Normal"),
        Skill("Diamond Storm", 5, 100, "Rock"),
        Skill("Steam Eruption", 5, 110, "Water"),
        Skill("Water Shuriken*", 20, 15, "Water"),
        Skill("Mystical Fire", 10, 75, "Fire"),
        Skill("Hold Back", 40, 40, "Normal"),
        Skill("Origin Pulse", 10, 110, "Water"),
        Skill("Sparkling Aria", 10, 90, "Water"),
        Skill("Solar Blade", 10, 125, "Grass"),
        Skill("Leafage", 40, 40, "Grass"),
        Skill("Fire Lash", 15, 80, "Fire"),
        Skill("Burn Up", 5, 130, "Fire"),
        Skill("Revelation Dance", 15, 90, "Normal"),
        Skill("Trop Kick", 15, 70, "Grass"),
        Skill("Oceanic Operetta", 1, 195, "Water"),
        Skill("Pulverizing Pancake", 1, 210, "Normal"),
        Skill("Shell Trap", 5, 150, "Fire"),
        Skill("Accelerock", 20, 40, "Rock"),
        Skill("Liquidation", 10, 85, "Water"),
        Skill("Multi-Attack", 10, 120, "Normal"),
        Skill("Mind Blown", 5, 150, "Fire"),
        Skill("Splishy Splash", 15, 90, "Water"),
        Skill("Bouncy Bubble", 15, 90, "Water"),
        Skill("Sizzly Slide", 15, 90, "Fire"),
        Skill("Sappy Seed", 15, 90, "Grass"),
        Skill("Snipe Shot", 15, 80, "Water"),
        Skill("Fishious Rend", 10, 85, "Water"),
        Skill("Drum Beating", 10, 80, "Grass"),
        Skill("Snap Trap", 15, 35, "Grass"),
        Skill("Pyro Ball", 5, 120, "Fire"),
        Skill("Branch Poke", 40, 40, "Grass"),
        Skill("Apple Acid", 10, 80, "Grass"),
        Skill("Grav Apple", 10, 80, "Grass"),
        Skill("Meteor Beam", 10, 120, "Rock"),
        Skill("Grassy Glide", 20, 70, "Grass"),
        Skill("Terrain Pulse", 10, 50, "Normal"),
        Skill("Burning Jealousy", 5, 70, "Fire"),
        Skill("Flip Turn", 20, 60, "Water"),
        Skill("Surging Strikes", 5, 25, "Water")
    };
    string types[5] = {"Fire", "Water", "Grass", "Normal", "Rock"};
    Pokemon player[6];
    Pokemon gymleader[6];
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

    cout << "Welcome to the Pokemon Game" << endl;
    int p =0;
    int o=0;
    while(p!=6 && o!=6){
        //print pokemon
        cout <<"\n\nYour send out a Pokemon\n";
        player[p].printPokemon();
        if(player[p].getCHealth() == player[p].getHealth()){
            player[p].setMove();
            moveR = rand()%112 + 73;
            while(skills[moveR].getType() != player[p].getType()){
                moveR = rand()%112 + 73;
            }
            player[p].addMove(skills[moveR]);
            for(int i=1;i<4;i++){
                moveR = rand()%185;
                while(skills[moveR].getType() != player[p].getType() && moveR > 73){
                    moveR = rand()%185;
                }
                player[p].addMove(skills[moveR]);
            }
        }
        player[p].printMove();

        //opponet's pokemon
        cout <<"\n\nYour Opponent sends of a Pokemon\n";
        gymleader[o].printPokemon();
        if(gymleader[o].getCHealth() == gymleader[o].getHealth()){
            gymleader[o].setMove();
            moveR = rand()%112 + 73;
            while(skills[moveR].getType() != gymleader[o].getType()){
                moveR = rand()%112 + 73;
            }
            gymleader[o].addMove(skills[moveR]);
            for(int i=1;i<4;i++){
                moveR = rand()%185;
                while(skills[moveR].getType() != gymleader[o].getType() && moveR > 73){
                    moveR = rand()%185;
                }
                gymleader[o].addMove(skills[moveR]);
            }
        }
        
        //you choose move and execute it
        int choosemove;
        int cm = 0;
        do{
            cout << "Choose your move(1, 2, 3, 4): ";
            cin >> choosemove;
            cout << endl;
            player[0].printPokemon();
            cm++;
        }while(cm = 0);
        
    }
}