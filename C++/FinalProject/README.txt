Pokemon Battle

Pokemon Battle were played in a lot of different pokemon game. Either player vs player or player vs PC. The players have to use the right elements to attack the enemy pokemon or else it will not do so much damage. There are six pokemon for each player. The one who survived from the pokemon battle wins the game.

The Project is Subdivided into the following files:
 
test.cpp: Code
test.exe: Main application

We start by having a Class called Skill

Skill() - Skill Constructor

int getDmg() - return damage for calculation

int getUses() - Return Uses for calculation(often called pp in pokemon battle)

string getName() - Return skill names for printing

string getType() - Return type for damage calculation and skill assignment

void useSkill() - minus uses(pp)

void printSkill() - Print Skills for selection

Pokemon() - Pokemon Constructor

string getType() - return pokemon type for damage multiplication

int getCHealth() - Return current health for calculation

int getHealth() - Return Max Health to print

void printPokemon() - print out pokemon data

void setMove() - Assign moves

void addMove(Skill x) - Change moves

void printMove() - Print out moves

void chooseMove(int x, string t) - Damage multiplicator 

void printChooseMove(int x) - Print your move

void OprintChooseMove(int x) - Print Gymleader's move

int getDamage() - return damage for calculation

void minusDamage(Pokemon x) - Damage calculation

int getMoveUse(int x) - return uses



The main functions and class functions calls the functions listed above, till the user quits the game or till the game ends.