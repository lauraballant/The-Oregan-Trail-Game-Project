#include <iostream>
#include <fstream>
#include <string> 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

//class Player
class Player
{
    private: 
    string name; //name of the player
    int playerHealth; //health of the player, using int type
    
    public: 
    Player(); //default constructor
    Player(string playerName, int healthOfPlayer); //constructor
    void setPlayerName(string names); //set player name
    string getPlayerName(); //get player name
    void setHealth(int number); //set health of player
    int getHealth(); //get health of player
};
Player::Player()
{
    name = "NONE"; //set name to "NONE"
    playerHealth = 0; //player heath is 0
}
Player::Player(string playerName, int healthOfPlayer) //two input values, name, and health of player
{
    //set equal to the data members
    name = playerName; 
    playerHealth = healthOfPlayer;
}
void Player::setPlayerName(string names)
{
    name = names; 
}
string Player::getPlayerName()
{
    return name; 
}
void Player::setHealth(int number)
{
    playerHealth = number;
}
int Player::getHealth()
{
    return playerHealth;
}

//class Milestones, this is for types of milestones, like fort, river, and landmark
class Milestones
{
    private: 
    string landmarkName; //string type, name of the landmark
    string landmarkType; //type of landmark: fort, river, landmark
    float miles; //number of miles that the landmark is at
    
    public: 
    Milestones(); 
    Milestones(string nameOfLandmark, string typeOfLandmark, float numMiles); //take in name of landmark, type of landmark, and miles
    void setLandmarkName(string landName); //getters and setters for the data members
    string getLandmarkName();
    void setMiles(float numOfMiles);
    float getMiles();
    void setLandmarkType(string typeLandmark);
    string getLandmarkType();
};
Milestones::Milestones()
{
    landmarkName = "NONE"; //set landmark name to "NONE"
    landmarkType = "NONE"; //set landmark name to "NONE"
    miles = 0.0; //miles to 0.0 miles
}
Milestones::Milestones(string nameOfLandmark, string typeOfLandmark, float numMiles)
{
    landmarkName = nameOfLandmark; //constructor sets input parameters to data members
    landmarkType = typeOfLandmark;
    miles = numMiles;
}
void Milestones::setLandmarkName(string landName)
{
    landmarkName = landName; 
}
string Milestones::getLandmarkName()
{
    return landmarkName; 
}
void Milestones::setMiles(float numOfMiles)
{
    miles = numOfMiles; 
}
float Milestones::getMiles()
{
    return miles; 
}
void Milestones::setLandmarkType(string typeLandmark)
{
    landmarkType = typeLandmark;
}
string Milestones::getLandmarkType()
{
    return landmarkType; 
}

//class date, this keeps track of the time, in months, date, and year
class Date
{
  private: 
  string month; //name of month
  int day; //current day of the month
  int year; //what year it is
  int maxDay; //maxDay represents the maximum number of days in a certain month, March = 31, April = 30, etc.
  
  public:
  Date();
  Date(string months, int days, int numMaxDay); //takes in name of month, the current day of the month, and max number of days in that month
  void setMonth(string monthName); //getters and setters for the data members
  string getMonth();
  void setDay(int numDays);
  int getDay();
  int getYear();
  void setmaxDay(int dayMax); 
  int getmaxDay();
  int Split(string sentence2, char w, string myArray[], int max); //split function to parse a line
};
Date::Date()
{
    month = "NONE"; //set month to "NONE"
    day = 0; //day is equal to 0
    year = 1847; //year is equal to 1847, year never changes in game
}
Date::Date(string months, int days, int numMaxDay)
{
    month = months; //constructor takes in input parameters and sets them equal to the data members
    day = days; 
    maxDay = numMaxDay;
}
void Date::setMonth(string monthName)
{
    month = monthName; 
}
string Date::getMonth()
{
    return month; 
}
void Date::setDay(int numDays)
{
    day = numDays;
}
int Date::getDay()
{
    return day; 
}
int Date::getYear()
{
    return year; 
}
void Date::setmaxDay(int dayMax)
{
    maxDay = dayMax;
}
int Date::getmaxDay()
{
    return maxDay; 
}

//class store, this is for everything that a person buys at the store, ox, food, bullets, etc.
class Store
{
    private: 
    float cash; //amount of money player has
    float oxen; //number of ox
    int food; //number of food
    int bullets; //number of bullets
    int wheels; //number of wagon wheels
    int axles; //number of axels
    int tongues; //number of tongues
    int medicalKit; //number of medical kits
    
    public: 
    Store(); //default constructor
    //constructor takes in all the data members
    Store(float money1, float yoke1, int numFood1, int numBullets, int numWheels1, int numAxels1, int numTongues1, int kit1); 
    void setCash(float money); //getters and setters for all the data members
    float getCash();
    void setOxen(float yoke);
    float getOxen();
    void setFood(int numFood);
    int getFood();
    void setBullets(int numBullets);
    int getBullets();
    void setWheels(int numWheels);
    int getWheels();
    void setAxels(int numAxels);
    int getAxels();
    void setTongues(int numTongues);
    int getTongues();
    void setMedicalKit(int kit);
    int getMedicalKit();
    
};
Store::Store()
{
    cash = 0.0; //default constructor sets all the data members to 0
    oxen = 0.0;
    food = 0;
    bullets = 0;
    wheels = 0;
    axles = 0;
    tongues = 0;
    medicalKit = 0;
}
Store::Store(float money1, float yoke1, int numFood1, int numBullets, int numWheels1, int numAxels1, int numTongues1, int kit1)
{
    cash = money1; //input parameters are set to the data members
    oxen = 2*yoke1; //specifically, for oxen, the store asks how many yoke they want and each yoke has 2 oxen in it. That's why oxen is equal to 2*yoke
    food = numFood1;
    bullets = numBullets;
    wheels = numWheels1;
    axles = numAxels1;
    tongues = numTongues1;
    medicalKit = kit1;
}
void Store::setCash(float money)
{
    cash = money; 
}
float Store::getCash()
{
    return cash; 
}
void Store::setOxen(float yoke)
{
    oxen = 2*yoke; 
}
float Store::getOxen()
{
    return oxen; 
}
void Store::setFood(int numFood)
{
    food = numFood;
}
int Store::getFood()
{
    return food; 
}
void Store::setBullets(int numBullets)
{
    bullets = numBullets; 
}
int Store::getBullets()
{
    return bullets;
}
void Store::setWheels(int numWheels)
{
    wheels = numWheels;
}
int Store::getWheels()
{
    return wheels;
}
void Store::setAxels(int numAxels)
{
    axles = numAxels;
}
int Store::getAxels()
{
    return axles;
}
void Store::setTongues(int numTongues)
{
    tongues = numTongues;
}
int Store::getTongues()
{
    return tongues;
}
void Store::setMedicalKit(int kit)
{
    medicalKit = kit;
}
int Store::getMedicalKit()
{
    return medicalKit;
}

//class Game, this is for everything that is needed for playing the game, everything for rest, hunt, continue, misfortunes, raider attacks, and quit
class Game
{
    private: 
    Player players[5]; //create an array of objects type player class, the players[] array stores the names and healths of the players
    Store stores[2]; //create array of objects type store class, the stores[] array is so I can do stores[0].getOxen(), so basically use the setters and getters functions from store class
    Milestones milestones[15]; //create array of objects type milestones class, allows me to access milestones: landmark name, type, and how many miles is it from independence city
    Date dates[12]; //create an array of objects date type date class, allows me to access, the month's date, year, and number of days it has in that month
    int numPlayers; //index of players[] array
    int numDate; //index of dates[] array
    int numberOfMiles; //index of milestones[] array
    float currentMileage; //number of miles travelled
    int currentDay; //represents the day of the month (NOT the number of days travelled)
    int numberOfdays; //number of days the players has travelled
    int numAlive; //number of people who are alive
    
    public:
    Game(); //default constructor
    void loadPlayers(string namePlayer); //loads the info from players, when they are asked to input name
    void playGame(); //this implements the entire game, this is kind of like my int main() function, this does rest, continue, hunt, and quit
    void loadMonths(); //loads the info from the months.txt file, it loads month names and their maxDays
    void loadMilestones(); //loads all the info from milestones.txt
    void beginningOfGame(); //this implements the beginning of the game, when the player is asked their names, start dates, and goes to the store
    int priceCheck(float itemCost); //this checks the price of the item that the players wants to purchase
    int checkMiles(float currentMiles); //this checks the current mileage that player has travelled
    void checkDates(int currentDays); //this makes so that the dates are correct, like months and days
    void statusUpdate(); //this implements the status update
    int checkWin(float mileage, int days1); //this checks if the player wins, reaches oregon city at the correct time
    void landmarks(); //this implements what the game does at different landmark types: river, fort, landmark
    void store1(float priceIncrease); //this is the stores along the way at different forts
    int foodCheck(int numbFood); //this checks if players are out of food
    void hunt(); //implements what game does when player chooses to hunt
    void misfortunes(); //implements what game does when misfortunes occur
    void health(); //updates the health of players
    void raider(float raiderMiles); //raider attacks
    void quitGame(); //when player decides to quit game, results.txt
};
int randomNumbers(int min, int max) //random Numbers
{
    // rand() % (max-min+1) + min
    return (rand() % (max-min+1)) + min;
}
void Game::health()
{
    for(int i = 0; i < numAlive; i++)
    {
        if(players[0].getHealth() == 1)
        {
            players[0].setHealth(2);
        }
    }
}
Game::Game()
{
    //sets all the data members to 0
    //numAlive is set to 5 because there are 5 players at the beginning of the game
    numPlayers = 0;
    numDate = 0;
    numberOfMiles = 0;
    currentMileage = 0.0;
    currentDay = 0;
    numberOfdays = 0;
    numAlive = 5;
}

void Game::loadPlayers(string namePlayer)
{
    //this loads players when they first start the game
    Player newPlayer(namePlayer, 2); //creates a newPlayer with player name and health = 2 (2 represents a fully healthy player)
    players[numPlayers] = newPlayer; //set that players[] element to the new player object
    numPlayers++; //add 1 to numPlayers
}
int Split(string sentence2, char w, string myArray[], int max)
{
    int i = 0; //intitalize variable i, integer type. i variable is for index a string
    string y; //declare variable y, string type. "string y" is the substring that the compiler extracts fromm the input string
    int x = 0; //intialize variable x to 0. variable x is the position after each delimiter in the input string
    int count = 0; //intialize variable count, "count" counts the number of substrings extracted in the input string. count is also the element position in the array
    
    if(sentence2 == "") //check if the input string is empty
    {
        return 0; 
    }
    while (i < sentence2.length()) //while i is less than the string length, this has compiler keep checking each position
    {
       if(sentence2[i] == w) //check if the position in the string is equal to the character delimiter
       {
           y = sentence2.substr(x,i - x); //create a substring, x represents the position after the delimiter, and "i-x" makes the compiler extract the entire substring without including any delimiters
           x = 1 + i; //x equals 1 more than variable i, this is so that when the compiler extracts a substring, the compiler starts right after the delimiter, variable i represents the position that the delimiter is found in
           myArray[count] = y; //at a certain element, the substring "y" is stored in the array
           count++; //add one to count
       }
        else if(i == sentence2.length() -1) //if the compiler is at the last position in the input string
        {
            y = sentence2.substr(x, i - x+1); //compiler stores the substring after the last delimiter in the input string
            myArray[count] = y; //store the last substring in the array
        }
       i++; //add 1 to i everytime, so compiler keeps checking each position in the string
    }
    count = count + 1; //outside while loop, count equals count + 1, because in while loop count only counts the number of character delimiters. there is always 1 more substring than the number of delimiters
    return count; //return the number of substrings extracted
}
void Game::loadMonths() //loads the months from the months.txt file
{
    ifstream myfile; //open file
    string line; 
    char w = ',';
    string myArray[2]; //for the split function
    int i = 0;
    myfile.open("months.txt"); //open file months.txt
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            Split(line, w, myArray, 2); //parse the file
            string month = myArray[0]; //myArray[0] stores the name of the month
            string day = myArray[1]; //myArray[1] stores the number of days in the month
            int days = stoi(day); //change the string to an int type
            
            Date newDate(month, 0, days); //create a new object, date class
            dates[i] = newDate; //set the new object to the dates[] array
            i++;
        }
    }
    else
    {
        cout << "Error!" << endl;
    }
    myfile.close(); 
}
void Game::loadMilestones() //load the milestones from milestones.txt
{
    ifstream myfile; //open file
    string line; 
    char w = ',';
    char x = ' ';
    int i = 0;
    string myArray[2];
    string myArray2[3];
    myfile.open("milestones.txt");
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            Split(line, w, myArray, 2); //split line
            string name = myArray[0]; //name of the landmark
            string type = myArray[1]; //stores the rest of the file, that has the number of miles and type
            int y = Split(type, x, myArray2, 3); //splits the second part of the file, and y stores the number of strings extracted
            string numMiles = myArray2[0]; //stores number of miles, string type
            int z = stoi(numMiles); //changes it to integer value
            if(y == 1) //if there is one word
            {
                string type1 = "landmark"; //type is landmark
                Milestones newMilestones(name, type1, z);
                milestones[i] = newMilestones; //sets the newMilestones to the array
                i++;
            }
            else if(y == 2) //if there is 2 words
            {
                string type2 = "fort"; //type is fort
                Milestones newMilestones1(name, type2, z);
                milestones[i] = newMilestones1; //sets new Milestones to the array
                i++;
            }
            else if(y == 3) //if there is 3 words
            {
                string type3 = "river"; //type is river
                Milestones newMilestones2(name, type3, z);
                milestones[i] = newMilestones2; //sets new milestones to the array
                i++;
            }
        }
    }
    else
    {
        cout << "Error!" << endl; //if file doesn't open, print out error
    }
    myfile.close(); //close file
}
int Game::priceCheck(float itemCost) //checks the price of the item the player wants to buy
{
    float cash1 = stores[0].getCash();
    if(itemCost <= cash1) //if cost of item is than or equal to the cash the player 
    {
        float newCash = cash1 - itemCost; //subtract the item cost from the number of cash the player has
        stores[0].setCash(newCash);
        return 2;
    }
    else if(itemCost > cash1) //if item cost is more than the player's cash, return -1
    {
        return -1;
    }
}
int Game::foodCheck(int numbFood) //check if player runs out of food
{
    int food1 = stores[0].getFood();
    if(numbFood > food1) //if the amount of food the player eats or wants is more than the amount of food they have
    {
        return -6; //return -6
    }
    else
    {
        int newFood = stores[0].getFood() - numbFood; //subtract amount of food the player wants from the existing amount of food
        stores[0].setFood(newFood);
        return 11;
    }
}
int Game::checkMiles(float currentMiles) //checks the current mileage
{
    //this checks if the player is travelling miles that are beyond the next milestone
    if(currentMiles < milestones[numberOfMiles].getMiles()) //if player is not at the next milestone
    {
        return -2; //return -2
    }
    else if(currentMiles >= milestones[numberOfMiles].getMiles()) //if player is beyond the next milestone
    {
        numberOfMiles++; //add 1 to number of miles, this makes is so that the milestone is changed to the next one, it changes the index
        return -3; //return -3
    }
}
void Game::checkDates(int currentDays) //check the curreent day
{
    //this function makes it so the compiler correctly changes the months, days, and years
    //helps the status update displayed to the player
    if(currentDays > dates[numDate].getmaxDay()) //if current day goes beyond the month's max day, like for April its 30(max day)
    {
        currentDay = currentDay - dates[numDate].getmaxDay(); //then reset the current day
        numDate++; //add 1 to numDate
    }
}
int Game::checkWin(float mileage, int days1) //check if the player wins
{
    if(days1 > 275) //275 represents the number of days that the player has to arrive at Oregon City, if player goes beyond November 30th
    {
        if(mileage < 2040) //if miles is less than 2040, then player didn't get to oregon city in time
        {
            cout << "You didn't get to Oregon City in time! End of Game!" << endl; //end of game
            quitGame();
            exit(0); //exit the code
        }
        if(mileage >= 2040) //if miles is more than or equal to 2040, then they have reached oregon city
        {
            cout << "Congratulations you made it to Oregon City!!!! Have a great time in the city!" << endl;
            quitGame(); //quit game
            exit(0); //exit code
        }
    }
    else if(days1 <= 275) //if it is not yet, november 30th
    {
        if(mileage >= 2040) //and they made it to oregon city
        {
            cout << "Congratulations you made it to Oregon City!!!! Have a great time in the City!" << endl; //win game
            quitGame(); //quit game
            exit(0); //exit code
        }
        else if(mileage < 2040) //if player isn't to oregon city or it's not november 30th yet
        {
            return -5; //return -5
        }
    }
}
int puzzle() //puzzle for player when there are raider attacks and hunting
{
    int num = 0; 
    int count = 0; //counts the number of times that the player guesses the number
    srand(time(0));
    num = randomNumbers(1,10); //random number between 1-10
    string guess; 
    cout << "Hi! My name is Louis. I have a number between 1 and 10. You have three chances to guess my number." << endl;
    cout << "Enter a number: " << endl;
    getline(cin, guess);
    int guess1 = stoi(guess);
    while(guess1 != num && count < 2) //while the guess isn't the same as the puzzle and their guesses are less than three
    {
        string guess2; 
        count++; //add 1 to count
        cout << "Whoops! You guessed wrong. Try again." << endl; //they guessed wrong
        cout << "Enter a number: " << endl;
        getline(cin, guess2);
        guess1 = stoi(guess2);
    }
    if(guess1 == num && count < 3) //if player guesses correctly
    {
        cout << "You guessed correctly. You won!" << endl; //they win
        return 100; //they return 100
    }
}
void Game::quitGame() //this is a function that is implemented when player loses game or they quit the game
{
    cout << endl; //print out the final statistics of the game
    cout << "Final Statistics of Oregon Trail Game: " << endl;
    cout << "Leader: " << players[0].getPlayerName() << endl;
    cout << "Miles traveled: " << currentMileage << " miles" << endl;
    cout << "Food: " << stores[0].getFood() << " lbs" << endl;
    cout << "Cash: $" << stores[0].getCash() << endl;
    
    ofstream myfile3; //open results.txt file
    myfile3.open("results.txt", ios::out | ios:: app);
    if(myfile3.is_open())
    {
        //write the final statistics in the file
        myfile3 << endl;
        myfile3 << "------------------------------------------------" << endl;
        myfile3 << " Oregon Trail Game Results: " << endl;
        int i = 0;
        while(i < 5)
        {
            myfile3 << " Player Name " << i+1 << ": " << players[i].getPlayerName() << " Health: " << players[i].getHealth() << endl;
            i++;
        }
        myfile3 << " Miles traveled: " << currentMileage << " miles" << endl;
        myfile3 << " Food: " << stores[0].getFood() << " lbs" << endl;
        myfile3 << " Cash: $" << stores[0].getCash() << endl;
        myfile3 << " Bullets: " << stores[0].getBullets() << endl;
        myfile3 << " Number of oxen: " << stores[0].getOxen() << endl;
        myfile3 << " Number of wheels: " << stores[0].getWheels() << endl;
        myfile3 << " Number of axles: " << stores[0].getAxels() << endl;
        myfile3 << " Number of tongues: " << stores[0].getTongues() << endl;
        myfile3 << " Number of medical kits: " << stores[0].getMedicalKit() << endl;
    }
    
    myfile3.close();
}
void Game::statusUpdate() //updates the player the current status of everything they have
{
    cout << "-------------------------------------" << endl;
    cout << " Status Update: " << endl;
    cout << " " << dates[numDate].getMonth() << " " << currentDay << ", 1847" << endl;
    cout << " Miles traveled: " << currentMileage << endl;
    float y = milestones[numberOfMiles].getMiles() - currentMileage;
    cout << " Next landmark is in " << y << " miles." << endl;
    cout << " Food: " << stores[0].getFood() << " lbs" << endl;
    cout << " Bullets: " << stores[0].getBullets() << endl;
    cout << " Number of oxen: " << stores[0].getOxen() << endl;
    cout << " Number of wheels: " << stores[0].getWheels() << endl;
    cout << " Number of axles: " << stores[0].getAxels() << endl;
    cout << " Number of tongues: " << stores[0].getTongues() << endl;
    cout << " Number of medical kits: " << stores[0].getMedicalKit() << endl;
    cout << " Cash: $" << stores[0].getCash() << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
}
void Game::landmarks() //computes the landmarls, river, fort, landmark
{
    cout << "However, you have arrived at " << milestones[numberOfMiles-1].getLandmarkName() << ". What do you want to do?" << endl;
    currentMileage = milestones[numberOfMiles-1].getMiles();
    int restHealth = 0; //rest health represents how many times the player chooses to rest
    if(milestones[numberOfMiles-1].getLandmarkType() == "landmark") //if the it is type "landmark"
    {
        string choices1;
        cout << "Do you want to (r) rest for 1 day or (c) continue?" << endl; //ask if they want to rest or continue
        getline(cin, choices1);
        while(choices1 == "r")
        {
            int numFood = 3*numAlive; //number of food they eat each day
            int z = foodCheck(numFood); //check if they have enough food
            if(z == -6)
            {
                cout << "You have ran out of food! End of game!" << endl; //if they don't, they do not have enough food, end of game
                quitGame();
                exit(0);
            }
            else
            {
                currentDay = currentDay+1; //update current day and number of days by 1
                numberOfdays = numberOfdays+1;
                restHealth++; //adds 1 to rest health, counts number of days they rest
                cout << "Do you want to (r) rest for 1 day or (c) continue?" << endl;
                getline(cin, choices1);
            }
        }
        if(restHealth > 1)
        {
            health(); //if the rest days are more than 1, update the healths of the player
        }
    }
    else if(milestones[numberOfMiles-1].getLandmarkType() == "river") //if the milestone is type "river"
    {
        string choices2;
        cout << "Do you want to (c) cross the river or (r) rest for 1 day?" << endl;
        getline(cin, choices2);
        while(choices2 == "r") //while they choose to rest
        {
            
            int numFood1 = 3*numAlive; //calculate food 
            int x = foodCheck(numFood1); //check if they have enough food
            if(x == -6)
            {
                cout << "You have ran out of food! End of game!" << endl;
                quitGame();
                exit(0);
            }
            else
            {
                restHealth++; //add 1 to rest health
                currentDay = currentDay+1; //add 1 to current day and number of days
                numberOfdays = numberOfdays+1;
                cout << "You have rested for 1 day." << endl;
                cout << "Do you want to (c) cross the river or (r) rest for 1 day?" << endl;
                getline(cin, choices2);
            }
        }
        if(restHealth > 1)
        {
            health(); //if number of rest days is over 2, then update the healths of the players
        }
        int num = numberOfMiles-1;
        if(num == 0 || num == 8 || num == 11) //if num is equal to 0,8, or 11--this is the indexes of the milestones that have a river more than 3 ft deep
        {
            cout << "The river is deeper than 3 feet. It will require a ferry to cross the river. The ferry costs $10 per person." << endl;
            float cost = numAlive*10;
            int y = priceCheck(cost); //check if they have enough money to cross the river
            if(y == -1)
            {
                cout << "You do not have enough money to cross the river! End of game!" << endl;
                quitGame(); //exit game if they don't have enough money
                exit(0);
            }
            else if(y == 2)
            {
                cout << "You have sucessfully crossed the river." << endl;
            }
        }
        else
        {
            cout << "You have successfully crossed the river." << endl;
        }
    }
    else if(milestones[numberOfMiles-1].getLandmarkType() == "fort") //if type is "fort"
    {
        string fort1;
        cout << "Do you want to (r) rest for 1 day, (v) visit store, or (c) continue journey?" << endl;
        getline(cin, fort1);
        while(fort1 == "r" || fort1 == "v" || fort1 == "c")
        {
            if(fort1 == "r") //player chooses to rest
            {
                int numFood2 = 3*numAlive; //calculate the number of food they want to eat
                int u = foodCheck(numFood2); //check if they have enough food
                if(u == -6)
                {
                    cout << "You have ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else
                {
                    restHealth++; //add 1 to resthealth, counts number of days they rest
                    currentDay = currentDay + 1; //add 1 to current day and number of days
                    numberOfdays = numberOfdays + 1;
                    cout << "Do you want to (r) rest for 1 day, (v) visit store, or (c) continue journey?" << endl;
                    getline(cin, fort1);
                }
            }
            else if(fort1 == "v" ) //if player wants to visit store
            {
                float increase; //float increase = the increase of the prices at the stores
                int x = numberOfMiles-1; //checks the index of the milestones[] array, compiler checks which store they are at
                if(x == 2)
                {
                    increase = 1.25; //if player is at first fort, increase is equal to 1.25(increase in price is by %25)
                    store1(increase); //call store function
                }
                else if(x == 4)
                {
                    increase = 1.50; //if player is at the second fort, increase = 50% 
                    store1(increase);
                }
                else if(x == 7)
                {
                    increase = 1.75; //if player is at third fort, increase is by 75%
                    store1(increase);
                }
                else if(x == 10) //if player is at fourth fort, the increase is by 100%
                {
                    increase = 2.0;
                    store1(increase);
                }
                else if(x == 12) //if player is at fift fort, the price increases by 125%
                {
                    increase = 2.25; 
                    store1(increase);
                }
                else if(x == 14)
                {
                    increase = 2.5; //if player is at sixth fort, the price increases by 150%
                    store1(increase);
                }
                cout << "Do you want to (r) rest for 1 day, (v) visit store, or (c) continue journey?" << endl;
                getline(cin, fort1);
            }
            else if(fort1 == "c") //if they want to continue journey
            {
                break; //exit while loop
            }
        }
        if(restHealth > 1)
        {
            health(); //if the number of days they rested for is more than 1, then update the health of the players
        }
    }
        
}
void Game::hunt() //implements when player wants to hunt
{
    int count = 0;  //since a max of five animals can appear, count counts the number of times an animal shows up
    int num = 0; //random number
    int animals = 0; //animals counts if they have encountered an animal
    int numMoose = -1; //keeps track if player encounters a moose
    int numBear = -1; //bear
    int numDeer = -1; //deer
    int numFox = -1; //fox
    int numRabbit = -1; //rabbit
    int huntDay = 0; //hunt day keeps track if the player chooses to hunt the animal
    srand(time(0));
    num = randomNumbers(-50,100); //random number generator, calculates what animal the player is going to hunt
    for(int count = 0; count < 5; count++) //if count is less than 5
    {
        string hunt; 
        int x;
        int randNum = 0; //random number
        int newFood; //amount of food that the player gained
        int newBullet; //amount of bullets that the player gained
        if(num > 0 && num < 6 && numMoose == -1) //if they haven't hunted a moose yet
        {
            cout << "You got lucky! You encountered a moose!" << endl;
            numMoose = 1; //set numMoose to 1, so the player doesn't hunt another moose again
            cout << "Do you want to hunt: (1) Yes (2) No ?" << endl;
            getline(cin, hunt);
            if(hunt == "1") //if they want to hunt
            {
                if(stores[0].getBullets() < 12) //check if they have enough bullets
                {
                    cout << "You don't have enough bullets. Hunt unsuccessful!" << endl;
                }
                else
                {
                    cout << "You need to solve a puzzle first to continue hunting." << endl;
                    x = puzzle(); //solve a puzzle, if x is equal to 100, player wins the puzzle
                    if(x == 100)
                    {
                        cout << "You've successfully hunted a moose." << endl;
                        randNum = 0;
                        srand(time(0));
                        randNum = randomNumbers(300,600); //calculate the food they get from huting
                        newFood = stores[0].getFood() + randNum; 
                        stores[0].setFood(newFood); //sets the food
                        newBullet = stores[0].getBullets() - 12; //sets the bullets
                        stores[0].setBullets(newBullet);
                    }
                    else
                    {
                        cout << "You lost!" << endl; //lost the puzzle
                    }
                }
                huntDay++; //huntDay + 1;
            }
        }
        else if(num >= 6 && num < 13 && numBear == -1) //if they have never hunted a bear
        {
            cout << "You got lucky! You encountered a bear!" << endl;
            numBear = 1;
            cout << "Do you want to hunt: (1) Yes (2) No ?" << endl;
            getline(cin, hunt);
            if(hunt == "1")
            {
                if(stores[0].getBullets() < 10) //don't have enough bullets
                {
                    cout << "You don't have enough bullets. Hunt unsuccessful!" << endl;
                    
                }
                else
                {
                    cout << "You need to solve a puzzle first to continue hunting." << endl;
                    x = puzzle();
                    if(x == 100) //if they win the puzzle
                    {
                        cout << "You've successfully hunted a bear." << endl;
                        randNum = 0;
                        srand(time(0));
                        randNum = randomNumbers(100,250); //number of food they gain from hunting
                        newFood = stores[0].getFood() + randNum; //set food and bullets
                        stores[0].setFood(newFood);
                        newBullet = stores[0].getBullets() - 10;
                        stores[0].setBullets(newBullet);
                    }
                    else
                    {
                        cout << "You lost!" << endl;
                    }
                }
                huntDay++;
            }
        }
        else if(num >= 13 && num < 28 && numDeer == -1) //if they have never encountered a deer previously
        {
            cout << "You got lucky! You encountered a deer!" << endl;
            numDeer = 1;
            cout << "Do you want to hunt: (1) Yes (2) No ?" << endl;
            getline(cin, hunt);
            if(hunt == "1")
            {
                if(stores[0].getBullets() < 5) //check if they have enough bullets
                {
                    cout << "You don't have enough bullets. Hunt unsuccessful!" << endl;
                    
                }
                else
                {
                    cout << "You need to solve a puzzle first to continue hunting." << endl;
                    x = puzzle();
                    if(x == 100) // if they win the puzzle
                    {
                        cout << "You've successfully hunted a deer." << endl;
                        randNum = 0;
                        srand(time(0));
                        randNum = randomNumbers(30,55); //number of food they get from hunting
                        newFood = stores[0].getFood() + randNum; //set the food and bullets
                        stores[0].setFood(newFood);
                        newBullet = stores[0].getBullets() - 5;
                        stores[0].setBullets(newBullet);
                    }
                    else
                    {
                        cout << "You lost!" << endl;
                    }
                }
                huntDay++; //add 1 to huntDay
            }
        }
        else if(num >= 28 && num < 53 && numFox == -1) //if they have never encountered a fox
        {
            cout << "You got lucky! You encountered a fox!" << endl;
            numFox = 1;
            cout << "Do you want to hunt: (1) Yes (2) No ?" << endl;
            getline(cin, hunt);
            if(hunt == "1") //if they choose to hunt
            {
                if(stores[0].getBullets() < 8) //check if they have enough bullets
                {
                    cout << "You don't have enough bullets. Hunt unsuccessful!" << endl;
                    
                }
                else
                {
                    cout << "You need to solve a puzzle first to continue hunting." << endl;
                    x = puzzle();
                    if(x == 100) //if they solve the puzzle correctly
                    {
                        cout << "You have successfully hunted a fox." << endl;
                        newFood = stores[0].getFood() + 5; //set the food and bullets
                        stores[0].setFood(newFood);
                        newBullet = stores[0].getBullets() - 8;
                        stores[0].setBullets(newBullet);
                    }
                    else
                    {
                        cout << "You lose!" << endl;
                    }
                }
                huntDay++; //add 1 to hunt day
            }
        }
        else if(num >=53 && num < 101 && numRabbit == -1) //if they have never hunted a rabbit, and never encountered it before
        {
            cout << "You got lucky! You encountered a rabbit!" << endl;
            numRabbit = 1;
            cout << "Do you want to hunt: (1) Yes (2) No ?" << endl;
            getline(cin, hunt);
            if(hunt == "1") //if they want to hunt
            {
                if(stores[0].getBullets() < 10) //check if they have enough bullets
                {
                    cout << "You don't have enough bullets. Hunt unsuccessful!" << endl;
                }
                else
                {
                    cout << "You need to solve a puzzle first to continue hunting." << endl; 
                    x = puzzle();
                    if(x == 100) //if they win the puzzle
                    {
                        cout << "You've successfully hunted a rabbit." << endl;
                        newFood = stores[0].getFood() + 2; //set food and bullets
                        stores[0].setFood(newFood);
                        newBullet = stores[0].getBullets() - 10;
                        stores[0].setBullets(newBullet);
                    }
                    else
                    {
                        cout << "You lose!" << endl;
                    }
                }
                huntDay++; //add 1 to hunt day
            }
            
        }
        else if(num < 1)
        {
            animals++;
        }
        srand(time(0));
        num = randomNumbers(1,100); //compiler generates another random number
    }
    if(animals == 5) //if variable animals = 5, that means they didn't encounter any animal on the hunt
    {
        cout << "You have encountered no animal on the hunt. Continue on your journey to Oregon City." << endl;
    }
    else if(huntDay > 0) //if they hunted animals, huntDay represents if they chose to hunt
    {
        string foodChoice;
        int y; 
        int numFood; //amount of food the family eats
        cout << "It's the end of the hunting day. You can decide to celebrate!" << endl;
        cout << "How well do you want to eat tonight: " << endl;
        cout << "(1) Poorly: 2 lbs of food, per person" << endl;
        cout << "(2) Moderately: 3 lbs of food, per person" << endl;
        cout << "(3) Well: 5 lbs of food, per person" << endl;
        getline(cin, foodChoice);
        if(foodChoice == "1") //if choice is 1
        {
            numFood = 2*numAlive; //calculates the food that the family has to eat
            y = foodCheck(numFood); //checks if they have enough food
            if(y == -6) //if they don't have enough food
            {
                cout << "You don't have enough food to eat! You cannot continue. End of game!" << endl;
                quitGame();
                exit(0);
            }
            else //if they do have enough food
            {
                if(stores[0].getFood() > 1000) //if the amount of food they have is more than 1000
                {
                    cout << "You have too much food to carry. The wagon cannot hold more than 1000 lbs of food." << endl;
                    cout << "You have to leave the rest of the food behind." << endl;
                    cout << "Continue on your journey to Oregon City." << endl;
                }
                else
                {
                    cout << "Continue on your journey to Oregon City." << endl;
                }
            }
        }
        else if(foodChoice == "2")
        {
            numFood = 3*numAlive; //calculate food they want to eat
            y = foodCheck(numFood); //calculate if they have enough food
            if(y == -6)
            {
                cout << "You don't have enough food to eat! You cannot continue. End of game!" << endl;
                quitGame();
                exit(0);
            }
            else
            {
                if(stores[0].getFood() > 1000) //if they have more than 1000 of food
                {
                    cout << "You have too much food to carry. The wagon cannot hold more than 1000 lbs of food." << endl;
                    cout << "You have to leave the rest of the food behind." << endl;
                    cout << "Continue on your journey to Oregon City." << endl;
                }
                else
                {
                    cout << "Continue on your journey to Oregon City." << endl;
                }
            }
        }
        else if(foodChoice == "3") 
        {
            numFood = 5*numAlive; //calculate number of food
            y = foodCheck(numFood); //check if they have enough food
            if(y == -6)
            {
                cout << "You don't have enough food to eat. You cannot continue. End of game!" << endl;
                quitGame();
                exit(0);
            }
            else
            {
                for(int i = 0; i < 5; i++)
                {
                    if(players[i].getHealth() == 1)
                    {
                        players[i].setHealth(2);
                    }
                }
                if(stores[0].getFood() > 1000)
                {
                    cout << "You have too much food to carry. The wagon cannot hold more than 1000 lbs of food." << endl;
                    cout << "You have to leave the rest of the food behind." << endl;
                    cout << "Continue on your journey to Oregon City." << endl;
                }
                else
                {
                    cout << "Continue on your journey to Oregon City." << endl;
                }
            }
        }
        
    }
}
void Game::raider(float raiderMiles)
{
    cout << endl;
    //calculate the raider attack probability
    float x = (raiderMiles/100) - 4;
    float z = pow(x, 2);
    float y = z + 72;
    float w = z + 12;
    float t = (y/w) - 1;
    float final = t/10;
    float final2 = final*100;
    float num = 0.0;
    srand(time(0));
    num = randomNumbers(0.0,100.0); //random number generator
    if(final2 != 0 && num > 1 && num < final2) //if the random number falls within the raider probability
    {
        string survive; 
        cout << "Raiders ahead! They look hostile!" << endl;
        cout << "Do you want to (1) run, (2) attack, or (3) surrender?" << endl;
        getline(cin, survive);
        if(survive == "1")
        {
            cout << "You barely escaped, but you had to leave 1 ox, 10 lbs of food, and 1 wagon part." << endl;
            int s = foodCheck(10);
            //if they do not have enough food for the raiders to take or they do not have any oxen
            if(s == -6 || stores[0].getOxen() == 0)
            {
                cout << "Because of the raiders, you do not have enough food or oxen to continue on your journey. End of game!" << endl;
                quitGame();
                exit(0);
            }
            float z = stores[0].getOxen() - 1;
            float p = z/2;
            stores[0].setOxen(p);
            int wagonPart = 0;
            srand(time(0));
            wagonPart = randomNumbers(1,3); //random generator, this chooses which wagon part they had to leave 
            if(wagonPart == 1)
            {
                if(stores[0].getAxels() == 0) //if they already have 0 axles
                {
                    cout << "You do not have enough wagon parts to continue on your journey to Oregon City! End of game!" << endl;
                    quitGame(); //game ends
                    exit(0);
                }
                int d = stores[0].getAxels() - 1; //otherwise set axles
                stores[0].setAxels(d);
            }
            else if(wagonPart == 2) 
            {
                if(stores[0].getWheels() == 0) //if they have 0 wheels already
                {
                    cout << "You do not have enough wagon parts to continue on your journey to Oregon City! End of game!" << endl;
                    quitGame(); //end of game
                    exit(0);
                }
                int h = stores[0].getWheels() - 1; //set wheels
                stores[0].setWheels(h);
            }
            else if(wagonPart == 3)
            {
                if(stores[0].getTongues() == 0) //if you already have 0 tongues
                {
                    cout << "You do not have enough wagon parts to continue on your journey to Oregon City! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                int k = stores[0].getTongues() - 1; //set the tongues
                stores[0].setTongues(k);
            }
        }
        else if(survive == "2")
        {
            int raiderBullet1; //if they want to survive
            int v = puzzle(); //present a puzzle
            if(v == 100) //if they win the puzzle
            {
                cout << "You successfully attacked the raiders! You gain 50 lbs of food and 50 bullets from them." << endl;
                int raiderFood = stores[0].getFood() + 50; //set the food and bullets
                stores[0].setFood(raiderFood);
                int raiderBullet = stores[0].getBullets() + 50;
                stores[0].setBullets(raiderBullet);
            }
            else
            {
                cout << "You were unsuccessful in the attack." << endl; //if they didn't win the game
                float reserve = (stores[0].getCash())/4;
                stores[0].setCash(reserve); //set the amount of money
                cout << "You have lost a quarter of your cash reserves." << endl;
                int bullet1 = stores[0].getBullets();
                if(bullet1 < 50)
                {
                    cout << "You have lost all your bullets." << endl;
                    stores[0].setBullets(0); //set bullets
                }
                else if(bullet1 > 50)
                {
                    cout << "You have lost 50 bullets." << endl; //set bullets
                    raiderBullet1 = stores[0].getBullets() - 50;
                    stores[0].setBullets(raiderBullet1);
                }
            }
        }
        else if(survive == "3") //if they choose to surrender
        {
            float reserve1 = (stores[0].getCash())/4; //set the cash
            stores[0].setCash(reserve1);
            cout << "You have lost a quarter of your cash reserves." << endl;
        }
        
    }
}
void Game::misfortunes() //misfortunes function
{
    cout << endl;
    int num = 0;
    srand(time(0));
    num = randomNumbers(1,5); //random number chooses which misfortune they get
    if(num == 1)
    {
        int disease = 0;
        disease = randomNumbers(1,6); //disease chooses which disease player gets
        int num2 = 0;
        srand(time(0));
        num2 = randomNumbers(1, numAlive-1);
        if(disease == 1)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has typhoid!" << endl; 
            if(num2 == 0) //if the leader gets sick
            {
                if(players[num2].getHealth() == 1) //if the leader is already sick
                {
                    //leader dies, end game
                    cout << "You have died of typhoid! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    //if the player is not already sick
                    players[num2].setHealth(1); //set health to 1
                    if(stores[0].getMedicalKit() > 0) 
                    {
                        string health1;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl; //ask if the user wants to use the medical kit
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health1);
                        if(health1 == "y") //if yes
                        {
                            players[num2].setHealth(2); //set the player's health back to 2
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
            else //if any other player, besides the leader gets sick
            {
                if(players[num2].getHealth() == 1) //if the player was already sick
                {
                    cout << players[num2].getPlayerName() << " dies of typhoid!" << endl; //the player dies
                    
                    //the player who dies, is then sent to the last element of the array
                    //this is so that players who die are at the end of the array and all the alive players are near the front of the array
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2) //if player was healhty
                { 
                    players[num2].setHealth(1); //set health to 1
                    if(stores[0].getMedicalKit() > 0) //if they have a medical kit
                    {
                        string health; //ask the user if they want to cure the player
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y") //if yes
                        {
                            players[num2].setHealth(2); //set the health of the player back to 2
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
        }
        //the process repeats for all the diseases
        else if(disease == 2)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has cholera!" << endl;
            if(num2 == 0)
            {
                if(players[num2].getHealth() == 1)
                {
                    //leader dies, end game
                    cout << "You have died of cholera! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    players[num2].setHealth(1);
                }
            }
            else
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << players[num2].getPlayerName() << " dies of cholera!" << endl;
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2)
                {
                    players[num2].setHealth(1);
                    if(stores[0].getMedicalKit() > 0)
                    {
                        string health;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y")
                        {
                            players[num2].setHealth(2);
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
        }
        else if(disease == 3)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has diarrhea!" << endl;
            if(num2 == 0)
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << "You have died of diarrhea! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    players[num2].setHealth(1);
                }
            }
            else
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << players[num2].getPlayerName() << " dies of diarrhea!" << endl;
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2)
                {
                    players[num2].setHealth(1);
                    if(stores[0].getMedicalKit() > 0)
                    {
                        string health;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y")
                        {
                            players[num2].setHealth(2);
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
        }
        else if(disease == 4)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has the measles!" << endl;
            if(num2 == 0)
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << "You have died of the measles! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    players[num2].setHealth(1);
                }
            }
            else
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << players[num2].getPlayerName() << " dies of the measles!" << endl;
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2)
                {
                    players[num2].setHealth(1);
                    if(stores[0].getMedicalKit() > 0)
                    {
                        string health;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y")
                        {
                            players[num2].setHealth(2);
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
        }
        else if(disease == 5)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has the dysentery!" << endl;
            if(num2 == 0)
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << "You have died of dysentery! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    players[num2].setHealth(1);
                }
            }
            else
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << players[num2].getPlayerName() << " dies of the dysentery!" << endl;
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2)
                {
                    players[num2].setHealth(1);
                    if(stores[0].getMedicalKit() > 0)
                    {
                        string health;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y")
                        {
                            players[num2].setHealth(2);
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
        }
        else if(disease == 5)
        {
            cout << "Oh no! " << players[num2].getPlayerName() << " has the fever!" << endl;
            if(num2 == 0)
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << "You have died of the fever! Since you're the leader, your family cannot go on! End of game!" << endl;
                    quitGame();
                    exit(0);
                    //results.txt
                }
                else 
                {
                    players[num2].setHealth(1);
                }
            }
            else
            {
                if(players[num2].getHealth() == 1)
                {
                    cout << players[num2].getPlayerName() << " dies of the fever!" << endl;
                    players[num2].setHealth(-1);
                    string tempName = players[num2].getPlayerName();
                    int tempHealth = players[num2].getHealth();
                    string tempName2 = players[numAlive-1].getPlayerName();
                    int tempHealth2 = players[numAlive-1].getHealth();
                    players[numAlive-1].setPlayerName(tempName);
                    players[numAlive-1].setHealth(tempHealth);
                    players[num2].setPlayerName(tempName2);
                    players[num2].setHealth(tempHealth2);
                    numAlive = numAlive - 1;
                }
                else if(players[num2].getHealth() == 2)
                {
                    players[num2].setHealth(1);
                    if(stores[0].getMedicalKit() > 0)
                    {
                        string health;
                        cout << players[num2].getPlayerName() << " is not doing so well." << endl;
                        cout << "Do you want to use the medical kit, so " << players[num2].getPlayerName() << " can recover back to full health?" << endl;
                        cout << "Enter (y)es, or (n)o: " << endl;
                        getline(cin, health);
                        if(health == "y")
                        {
                            players[num2].setHealth(2);
                            int newKit = stores[0].getMedicalKit() - 1;
                            stores[0].setMedicalKit(newKit);
                        }
                        
                    }
                }
            }
            
        }
    }
    else if(num == 2) //if the num is 2
    {
        //they lose an oxen
        float l = stores[0].getOxen() - 1;
        float b = l/2;
        stores[0].setOxen(b);
        cout << "Oh no! One of the oxen has died! You have " << stores[0].getOxen() << " oxen left." << endl;
        if(stores[0].getOxen() == 0) //if they have no oxen already 
        {
            cout << "All of your oxen has died! You can't continue your journey. End of game!" << endl;
            quitGame(); //end of game
            exit(0);
            //results.txt
        }
    }
    else if(num == 3) //if num is 3
    {
        
        int numthef = 0;
        srand(time(0));
        numthef = randomNumbers(10,25); //calculate the number of food the thief stole
        int x = foodCheck(numthef);
        if(x == -6) //if they do not have enough food to go on
        {
            cout << "The thief took all your food. You cannot continue. End of Game!" << endl;
            quitGame(); //end of game
            exit(0);
        }
        else
        {
            cout << "Oh no! Last night you got attacked by a thief! They took " << numthef << " lbs of food." << endl;
        }
    }
    else if(num == 4) //if num is 4
    {
        cout << "Oh no! One of your wheels is broken!" << endl;
        if(stores[0].getWheels() == 0 || stores[0].getAxels() == 0 || stores[0].getTongues() == 0)
        {
            cout << "You do not have any spare wagon parts to fix the wheel. You can't continue. End of game!" << endl;
            quitGame();
            exit(0);
        }
        else
        {
            //set the wheels, axles, and tongues
            int newWheels = stores[0].getWheels() - 1;
            stores[0].setWheels(newWheels);
            int newAx = stores[0].getAxels() - 1;
            stores[0].setAxels(newAx);
            int newTongue = stores[0].getTongues() - 1;
            stores[0].setTongues(newTongue);
            cout << "Since you had all spare wagon parts, the wagon is all fixed up now!" << endl;
        }
    }
    else if(num ==5)
    {
        int goodFood;
        int k;
        int weather = 0;
        srand(time(0));
        weather = randomNumbers(1,5); //random generator to calculate which bad weather is happening
        {
            if(weather == 1)
            {
                cout << "Oh no! The weather is rotten! It's raining heavily!" << endl;
                cout << "You need to wait until the weather passes." << endl;
                currentDay = currentDay + 1; //set number of days and current day up by 1
                numberOfdays = numberOfdays + 1;
                goodFood = 3*numAlive;
                k = foodCheck(goodFood); //check if they have enough food
                if(k == -6)
                {
                    cout << "You ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                
            }
            //repeats process for all the weathers
            else if(weather == 2)
            {
                cout << "Oh no! The weather is rotten! It's hailing!" << endl;
                cout << "You need to wait until the weather passes." << endl;
                currentDay = currentDay + 1;
                numberOfdays = numberOfdays + 1;
                goodFood = 3*numAlive;
                k = foodCheck(goodFood);
                if(k == -6)
                {
                    cout << "You ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
            }
            else if(weather == 3)
            {
                cout << "Oh no! The weather is rotten! There's a huge storm!" << endl;
                cout << "You need to wait until the weather passes." << endl;
                currentDay = currentDay + 3;
                numberOfdays = numberOfdays + 3;
                goodFood = 3*numAlive*3;
                k = foodCheck(goodFood);
                if(k == -6)
                {
                    cout << "You ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                for(int i = 0; i < numAlive; i++)
                {
                    if(players[i].getHealth() == 1)
                    {
                        players[i].setHealth(2);
                    }
                }
            }
            else if(weather == 4)
            {
                cout << "Oh no! The weather is rotten! There's a blizzard!" << endl;
                cout << "You need to wait until the weather passes." << endl;
                currentDay = currentDay + 3;
                numberOfdays = numberOfdays + 3;
                goodFood = 3*numAlive*3;
                k = foodCheck(goodFood);
                if(k == -6)
                {
                    cout << "You ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                for(int r = 0; r < numAlive; r++)
                {
                    if(players[r].getHealth() == 1)
                    {
                        players[r].setHealth(2);
                    }
                }
            }
            else if(weather == 5)
            {
                cout << "Oh no! The weather is rotten! There's a hurricane!" << endl;
                cout << "You need to wait until the weather passes." << endl;
                currentDay = currentDay + 7;
                numberOfdays = numberOfdays + 7;
                goodFood = 3*numAlive*7;
                k = foodCheck(goodFood);
                if(k == -6)
                {
                    cout << "You ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                for(int w = 0; w < numAlive; w++)
                {
                    if(players[w].getHealth() == 1)
                    {
                        players[w].setHealth(2);
                    }
                }
            }
        }
    }
}
void Game::store1(float priceIncrease) //"store1" presents the player with the different kinds of stores, with varying prices, input parameter is the price increase
{
    float currentBill = 0.0;
    string option;
    cout << "Hi again! It's Matt. This is another general store along the way to Oregon City." << endl;
    cout << "You can buy oxen, food, ammunition, and miscellaneous supplies. The prices are a higher than the previous store." << endl;
    cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
    cout << "Enter a number: " << endl;
    getline(cin, option);
    
    //other than the price increase, this follows the same code as in the function "beginningOfGame()"
    //asks how much the user wants to buy, if they do not have enough cash or food is over 1000, they are asked to input again
    //else, the compiler sets all the oxen, food, bullets, wagon parts, and miscellaneous correctly
    
    while(option == "1" || option == "2" || option == "3" || option == "4" || option == "5")
    {
        //all the prices are multiplied by the price increase
        if(option == "1")
        {
            string yoke;
            cout << "There are 2 oxen in a yoke. The price of each yoke is $" << 40.0*priceIncrease << "." << endl;
            cout << "How many yoke do you wish to buy?" << endl;
            getline(cin, yoke);
            float numYoke = stof(yoke);
            float x = numYoke*40.0*priceIncrease; //the prices are multiplied by the price increase
            int y = priceCheck(x);
            while(y == -1)
            {
                string item; 
                cout << "You do not have enough money. How many yoke do you wish to buy?" << endl;
                getline(cin, item);
                numYoke = stof(item);
                x = numYoke*40.0*priceIncrease;
                y = priceCheck(x);
            }
            if(y == 2)
            {
                float f = (stores[0].getOxen())/2;
                numYoke = numYoke + f;
                stores[0].setOxen(numYoke);
                currentBill = currentBill + x; 
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
            }
        }
        else if(option == "2")
        {
            string pounds;
            cout << "My price for food is " << 50*priceIncrease << " cents per pound." << endl;
            cout << "How many pounds of food do you want?" << endl;
            getline(cin, pounds);
            int numPound = stoi(pounds);
            int newPounds = stores[0].getFood() + numPound;
            float foodCost = numPound*0.5*priceIncrease;
            while(newPounds > 1000 || foodCost > stores[0].getCash()) 
            {
                    string foodPounds; 
                    cout << "You do not have enough money or your wagon cannot hold more than 1000 lbs. How many pounds of food do you wish to buy?" << endl;
                    getline(cin, foodPounds);
                    numPound = stoi(foodPounds);
                    newPounds = stores[0].getFood() + numPound;
                    foodCost = numPound*0.5*priceIncrease;
            }
                priceCheck(foodCost);
                stores[0].setFood(newPounds);
                currentBill = currentBill + foodCost;
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
        }
        else if(option == "3")
        {
            string bullets;
            cout << "I sell ammunition in boxes of 20 bullets. Each box costs $" << 2*priceIncrease << ". How many boxes do you want?" << endl;
            getline(cin, bullets);
            int bullet = stoi(bullets);
            float costBullet = bullet*2.0*priceIncrease;
            int e = priceCheck(costBullet);
            while(e == -1)
            {
                string numberOfBullets; 
                cout << "You do not have enough money. How many boxes do you want?" << endl;
                getline(cin, numberOfBullets);
                bullet = stoi(numberOfBullets);
                costBullet = bullet*2.0*priceIncrease;
                e = priceCheck(costBullet);
            }
            if(e == 2)
            {
                bullet = bullet*20;
                bullet = bullet + stores[0].getBullets();
                stores[0].setBullets(bullet);
                currentBill = currentBill + costBullet; 
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
            }
        }
        else if(option == "4")
        {
                string wheels;
                cout << "It's a good idea to have a few spare parts for your wagon. Parts: wheels, axles, and tongues. Each cost $" << 20*priceIncrease << "." << endl;
                cout << "How many wagon wheels do you want?" << endl;
                getline(cin, wheels);
                int numWheels = stoi(wheels);
                float costWheels = numWheels*20.0*priceIncrease;
                int r = priceCheck(costWheels);
                while(r == -1)
                {
                    string numbWheels; 
                    cout << "You do not have enough money. How many wagon wheels?" << endl;
                    getline(cin, numbWheels);
                    numWheels = stoi(numbWheels);
                    costWheels = numWheels*2.0*priceIncrease;
                    r = priceCheck(costWheels);
                }
                if(r == 2)
                {
                    numWheels = numWheels + stores[0].getWheels();
                    stores[0].setWheels(numWheels);
                    currentBill = currentBill + costWheels; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string axles1;
                cout << "How many wagon axles do you want?" << endl;
                getline(cin, axles1);
                int numAxels = stoi(axles1);
                float costAxels = numAxels*20.0*priceIncrease;
                int t = priceCheck(costAxels);
                while(t == -1)
                {
                    string axels1; 
                    cout << "You do not have enough money. How many wagon axles?" << endl;
                    getline(cin, axels1);
                    numAxels = stoi(axels1);
                    costAxels = numAxels*20.0*priceIncrease;
                    t = priceCheck(costAxels);
                }
                if(t == 2)
                {
                    numAxels = numAxels + stores[0].getAxels();
                    stores[0].setAxels(numAxels);
                    currentBill = currentBill + costAxels; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string tongues;
                cout << "How many wagon tongues do you want?" << endl;
                getline(cin, tongues);
                int numTongues = stoi(tongues);
                float costTongues = numTongues*20.0*priceIncrease;
                int u = priceCheck(costTongues);
                while(u == -1)
                {
                    string tongues1;
                    cout << "You do not have enough money. How many wagon tongues?" << endl;
                    getline(cin, tongues1);
                    numTongues = stoi(tongues1);
                    costTongues = numTongues*2.0*priceIncrease;
                    u = priceCheck(costTongues);
                }
                if(u == 2)
                {
                    numTongues = numTongues + stores[0].getTongues();
                    stores[0].setTongues(numTongues);
                    currentBill = currentBill + costTongues; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string kits; 
                cout << "It also may be a good idea to have a medical kit. Each kit cost $" << 25*priceIncrease << ". How many medical kits do you want?" << endl;
                getline(cin, kits);
                int numKits = stoi(kits);
                float costKits = numKits*25.0*priceIncrease;
                int o = priceCheck(costKits);
                while(o == -1)
                {
                    string kits1; 
                    cout << "You do not have enough money. How many medical kits?" << endl;
                    getline(cin, kits1);
                    numKits = stoi(kits1);
                    costKits = numKits*25.0*priceIncrease;
                    o = priceCheck(costKits);
                }
                if(o == 2)
                {
                    numKits = numKits + stores[0].getMedicalKit();
                    stores[0].setMedicalKit(numKits);
                    currentBill = currentBill + costKits; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
        }
        else if(option == "5")
        {
            cout << "Final Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
            break;
        }
    }
}
void Game::beginningOfGame() //this function implements the very beginning of the game
{
    float currentBill = 0.0; //current bill is set to 0
    //compiler asks the names of all the players
    //for each player name, it loads the players info into the players[] array using function "loadPlayers(string)"
    string nameLeader; 
    cout << "What is the first name of the wagon leader?" << endl;
    getline(cin, nameLeader);
    loadPlayers(nameLeader);
    
    string name2;
    cout << "What is the first name of the second member in your party?" << endl;
    getline(cin, name2);
    loadPlayers(name2);
    
    string name3; 
    cout << "What is the first name of the third member in your party?" << endl;
    getline(cin, name3);
    loadPlayers(name3);
    
    string name4;
    cout << "What is the first name of the fourth member in your party?" << endl;
    getline(cin, name4);
    loadPlayers(name4);
    
    Store newStore(1400, 0.0, 0, 0, 0, 0, 0, 0); //creates a new store object
    stores[0] = newStore; //sets the store[0] array to the new object
    string name5;
    cout << "What is the first name of the fifth member in your party?" << endl;
    getline(cin, name4);
    loadPlayers(name4);
    
    string startDate;
    //asks the user to put in a start date
    cout << "It is 1847. Your jumping off place for Oregon is Independence, Missouri." << endl;
    cout << "Your default start date is March 28, 1847. You can choose another start date: March 1, 1847, May 1, 1847." << endl;
    cout << "Which start day do you want: " << endl;
    cout << "(1) March 28, 1847" << endl;
    cout << "(2) March 1, 1847" << endl;
    cout << "(3) May 1, 1847" << endl;
    getline(cin, startDate);
    if(startDate == "1") //if start date is march 28
    {
        currentDay = 28; //current and number of days is set to 28
        numberOfdays = 28;
        numDate = 0; //numDate is 0, represents the index of the dates[] array
    }
    else if(startDate == "2")
    {
        currentDay = 1; //sets current and number of Days to 1
        numberOfdays = 1;
        numDate = 0; //sets numdate to 0
    }
    else if(startDate == "3")
    {
        currentDay = 1; //for May 1, current day is set to 1
        numberOfdays = 62; //number of days is set to 62
        numDate = 2; //numDate set to 2
    }
    cout << "Before leaving Independence, you should buy equipment and supplies." << endl;
    string option;
    cout << "You can buy whatever you need at the General Store." << endl;
    cout << "Hi, I'm Matt. So you're going to Oregon? I can fix you up with what you need: " << endl;
    cout << "You saved $1600 to spend for the trip, and you've just paid $200 for a wagon. You currently have $1400." << endl;
    cout << "You will need to spend the rest of your money on the following items: " << endl;
    cout << "Oxen--You can spend $100-$200 on your team. The more you spend, the faster you'll go because you'll have better animals." << endl;
    cout << "Food--The more you have, the less chance there is of getting sick." << endl;
    cout << "Ammunition--You will need bullets for attacks by animals and bandits, and for hunting food." << endl;
    cout << "Miscellaneous Supplies--This includes medicine and other things you will need for sickness and emergency repairs." << endl;
    cout << "You can spend all your money before you start your trip, or you can save some of your cash to spend at forts along the way when you run low." << endl;
    cout << "However, items cost more at forts later on. You can also go hunting along the way to get more food." << endl;
    cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
    cout << "Enter a number: " << endl;
    getline(cin, option);
    
    while(option == "1" || option == "2" || option == "3" || option == "4" || option == "5")
    {
        if(option == "1")
        {
            string yoke;
            cout << "There are 2 oxen in a yoke. The price of each yoke is $40. I recommend at least 3 yoke." << endl;
            cout << "How many yoke do you wish to buy?" << endl;
            getline(cin, yoke);
            float numYoke = stof(yoke);
            float x = numYoke*40.0; //calculates the price
            int y = priceCheck(x); //check if they have enough money
            while(y == -1)
            {
                string item; 
                cout << "You do not have enough money. How many yoke do you wish to buy?" << endl;
                getline(cin, item);
                numYoke = stof(item);
                x = numYoke*40.0;
                y = priceCheck(x);
            }
            if(y == 2)
            {
                float f = (stores[0].getOxen())/2; //sets the oxen 
                float newYokes = numYoke + f;
                stores[0].setOxen(newYokes);
                currentBill = currentBill + x; //calculates the current bill
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
            }
        }
        else if(option == "2")
        {
            string pounds;
            cout << "I recommend you take at least 100 pounds of food for each person in your family." << endl;
            cout << "I see that you have 5 people in all. You'll need flour, sugar, bacon, and coffee. My price is 50 cents per pound." << endl;
            cout << "How many pounds of food do you want?" << endl;
            getline(cin, pounds);
            int numPound = stoi(pounds);
            int newPounds = stores[0].getFood() + numPound; //calculates the number of food
            float foodCost = numPound*0.5; //food cost
            
            while(newPounds > 1000 || foodCost > stores[0].getCash())  //if food is more than 1000 pounds, or the player does not have enough money
            {
                    string foodPounds; 
                    cout << "You do not have enough money or your wagon cannot hold more than 1000 lbs. How many pounds of food do you wish to buy?" << endl;
                    getline(cin, foodPounds);
                    numPound = stoi(foodPounds);
                    newPounds = stores[0].getFood() + numPound;
                    foodCost = numPound*0.5;
            }
                priceCheck(foodCost); //set cost 
                stores[0].setFood(newPounds); //set food
                currentBill = currentBill + foodCost; //set current bill
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
        }
        else if(option == "3")
        {
            string bullets;
            cout << "I sell ammunition in boxes of 20 bullets. Each box costs $2. How many boxes do you want?" << endl;
            getline(cin, bullets);
            int bullet = stoi(bullets);
            float costBullet = bullet*2.0;
            int e = priceCheck(costBullet); //price check
            while(e == -1)
            {
                string numberOfBullets; 
                cout << "You do not have enough money. How many boxes do you want?" << endl;
                getline(cin, numberOfBullets);
                bullet = stoi(numberOfBullets);
                costBullet = bullet*2.0;
                e = priceCheck(costBullet);
            }
            if(e == 2)
            {
                bullet = bullet*20; //sets the number of bullets
                int newBullets = stores[0].getBullets() + bullet;
                stores[0].setBullets(newBullets);
                currentBill = currentBill + costBullet; //current bill
                cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
            }
        }
        else if(option == "4")
        {
            //asks the user for how many wheels, axles, tongues, and medical kits they want
                string wheels;
                cout << "It's a good idea to have a few spare parts for your wagon. Parts: wheels, axles, and tongues. Each cost $20." << endl;
                cout << "How many wagon wheels do you want?" << endl;
                getline(cin, wheels);
                int numWheels = stoi(wheels);
                float costWheels = numWheels*20.0;
                int r = priceCheck(costWheels);
                while(r == -1)
                {
                    string numbWheels; 
                    cout << "You do not have enough money. How many wagon wheels?" << endl;
                    getline(cin, numbWheels);
                    numWheels = stoi(numbWheels);
                    costWheels = numWheels*2.0;
                    r = priceCheck(costWheels);
                }
                if(r == 2)
                {
                    int newWheels = stores[0].getWheels() + numWheels;
                    stores[0].setWheels(newWheels);
                    currentBill = currentBill + costWheels; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string axles1;
                cout << "How many wagon axles do you want?" << endl;
                getline(cin, axles1);
                int numAxels = stoi(axles1);
                float costAxels = numAxels*20.0;
                int t = priceCheck(costAxels);
                while(t == -1)
                {
                    string axels1; 
                    cout << "You do not have enough money. How many wagon axles?" << endl;
                    getline(cin, axels1);
                    numAxels = stoi(axels1);
                    costAxels = numAxels*20.0;
                    t = priceCheck(costAxels);
                }
                if(t == 2)
                {
                    int newAxles = stores[0].getAxels() + numAxels;
                    stores[0].setAxels(newAxles);
                    currentBill = currentBill + costAxels; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string tongues;
                cout << "How many wagon tongues do you want?" << endl;
                getline(cin, tongues);
                int numTongues = stoi(tongues);
                float costTongues = numTongues*20.0;
                int u = priceCheck(costTongues);
                while(u == -1)
                {
                    string tongues1;
                    cout << "You do not have enough money. How many wagon tongues?" << endl;
                    getline(cin, tongues1);
                    numTongues = stoi(tongues1);
                    costTongues = numTongues*2.0;
                    u = priceCheck(costTongues);
                }
                if(u == 2)
                {
                    int newTongues = stores[0].getTongues() + numTongues;
                    stores[0].setTongues(newTongues);
                    currentBill = currentBill + costTongues; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                string kits; 
                cout << "It also may be a good idea to have a medical kit. Each kit cost $25. How many medical kits do you want?" << endl;
                getline(cin, kits);
                int numKits = stoi(kits);
                float costKits = numKits*25.0;
                int o = priceCheck(costKits);
                while(o == -1)
                {
                    string kits1; 
                    cout << "You do not have enough money. How many medical kits?" << endl;
                    getline(cin, kits1);
                    numKits = stoi(kits1);
                    costKits = numKits*25.0;
                    o = priceCheck(costKits);
                }
                if(o == 2)
                {
                    int newKits = stores[0].getMedicalKit() + numKits;
                    stores[0].setMedicalKit(newKits);
                    currentBill = currentBill + costKits; 
                    cout << "Total Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                }
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
        }
        else if(option == "5")
        {
            float numOxen = stores[0].getOxen();
            if(numOxen == 0)
            {
                cout << "You currently have 0 oxen. You need 2 oxen to pull the wagon." << endl;
                cout << "Which item would you like to buy: (1) Oxen, (2) Food, (3) Bullets, (4) Miscellaneous Supplies, or do you want to (5) Leave the store?" << endl;
                cout << "Enter a number: " << endl;
                getline(cin, option);
            }
            else if(numOxen > 0)
            {
                cout << "Final Bill: $" << currentBill << " Amount you have: $" << stores[0].getCash() << endl;
                break;
            }
        }
    }
}
void Game::playGame()
{
    beginningOfGame();
    cout << "                                                                                               " << endl;
    cout << "Well then, you're ready to start. You need to arrive at Oregon City by November 30th safely." << endl;
    cout << "Make sure to have enough food, oxen, and keep your wagon intact. Good luck! You have a long and difficult journey ahead of you." << endl;
    cout << "                                                                                                 " << endl;
    statusUpdate();
    string choices;
    cout << endl;
    cout << "What do you want to do: " << endl;
    cout << "(1) Rest " << endl;
    cout << "(2) Continue on Trail" << endl;
    cout << "(3) Hunt" << endl;
    cout << "(4) Quit Game" << endl;
    getline(cin, choices);
    while(choices == "1" || choices == "2" || choices == "3" || choices == "4")
    {
        int numMisfortune = 0; //random number for misfortunes
        if(choices == "1")
        {
            checkDates(currentDay); //check current day
            statusUpdate(); //status update
            int num = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num = randomNumbers(1,3); //update the number of resting days
            numberOfdays = numberOfdays + num;
            currentDay = currentDay + num;
            int x = checkWin(currentMileage, numberOfdays); //check if player won
            if(x == -5)
            {
                cout << "You have rested for " << num << " days." << endl;
                cout << endl;
                int numFood = 3*numAlive*num; //check number of food
                int z = foodCheck(numFood);
                if(z == -6)
                {
                    cout << "You have ran out of food! End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                else if(z == 11)
                {
                    if(num == 2) //if player has rested for 2 days, then players who are sick are up to full health
                    {
                        for(int i = 0; i < 5; i++)
                        {
                            if(players[i].getHealth() == 1)
                            {
                            players[i].setHealth(2);
                            }
                        }
                    }
                }
                srand(time(0));
                numMisfortune = randomNumbers(1,100);
                if(numMisfortune > 0 && numMisfortune <= 30) //calculates the chance that misfortunes will occur
                {
                    misfortunes();
                }
                raider(currentMileage); //raider attacks
                int prize = 0;
                srand(time(0));
                prize = randomNumbers(1,100); //this calculates the chance that the player recieves good fortune
                if(prize > 0 && prize < 26)
                {
                    float chest;
                    if(numAlive > 1)
                    {
                        cout << "The family discovered a lost pirate treasure chest! Your cash reserves increase by $1000." << endl;
                        chest = stores[0].getCash() + 1000;
                        stores[0].setCash(chest);
                    }
                    else 
                    {
                        cout << "You discovered a lost pirate treasure chest! Your cash reserves increase by $1000" << endl;
                        chest = stores[0].getCash() + 1000;
                        stores[0].setCash(chest);
                    }
                }
                cout << endl;
                cout << "What do you want to do: " << endl;
                cout << "(1) Rest " << endl;
                cout << "(2) Continue on Trail" << endl;
                cout << "(3) Hunt" << endl;
                cout << "(4) Quit Game" << endl;
                getline(cin, choices);
            }
        }
        else if(choices == "2")
        {
            checkDates(currentDay); //checks current day
            statusUpdate(); //status update
            int num1 = 0;
            // need to write before calling rand() to seed the random number generator
            srand(time(0));
            num1 = randomNumbers(90,220); //update miles
            currentMileage = currentMileage + num1;
            numberOfdays = numberOfdays + 14;
            currentDay = currentDay + 14;
            int y = checkWin(currentMileage, numberOfdays); //check if they won
            if(y == -5)
            {
                int newFood1 = 3*numAlive*14;
                int q = foodCheck(newFood1); //check if they have enough food
                if(q == -1)
                {
                    cout << "You do not have enough food to eat. End of game!" << endl;
                    quitGame();
                    exit(0);
                }
                else
                {
                    //print number of miles the player travels
                    cout << "You continue on your journey to Oregon City for " << num1 << " miles." << endl;
                    cout << ". . . . . . . . . . . . .. .. .. .. .. .. .. .. ... ... ... .... .... ....." << endl;
                    cout << endl;
                    int w = checkMiles(currentMileage); //check miles
                    if(w == -3)
                    {
                        cout << "You were prepared to travel " << num1 << " miles." << endl;
                        landmarks(); //if they passed a landmark
                    }
                    srand(time(0));
                    numMisfortune = randomNumbers(1,100); //misfortunes
                    if(numMisfortune > 0 && numMisfortune <= 30)
                    {
                        misfortunes();
                    }
                    raider(currentMileage);
                    int prize = 0;
                    srand(time(0));
                    prize = randomNumbers(1,100);
                    if(prize > 0 && prize < 26)
                    {
                        float chest;
                        if(numAlive > 1)
                        {
                            cout << "The family discovered a lost pirate treasure chest! Your cash reserves increase by $1000." << endl;
                            chest = stores[0].getCash() + 1000;
                            stores[0].setCash(chest);
                        }
                        else 
                        {
                            cout << "You discovered a lost pirate treasure chest! Your cash reserves increase by $1000" << endl;
                            chest = stores[0].getCash() + 1000;
                            stores[0].setCash(chest);
                        }
                    }
                    cout << endl;
                    cout << "What do you want to do: " << endl;
                    cout << "(1) Rest " << endl;
                    cout << "(2) Continue on Trail" << endl;
                    cout << "(3) Hunt" << endl;
                    cout << "(4) Quit Game" << endl;
                    getline(cin, choices);
                }
            }
            
        }
        else if(choices == "3")
        {
            checkDates(currentDay);
            statusUpdate();
            numberOfdays = numberOfdays + 1;
            currentDay = currentDay + 1;
            int r = checkWin(currentMileage, numberOfdays);
            if(r == -5)
            {
                hunt(); //implement hunt function
                srand(time(0));
                numMisfortune = randomNumbers(1,100); //misfortunes
                if(numMisfortune > 0 && numMisfortune <= 30)
                {
                    misfortunes();
                }
                raider(currentMileage); //raider attacks
                int prize = 0;
                srand(time(0));
                prize = randomNumbers(1,100);
                if(prize > 0 && prize < 26)
                {
                    float chest;
                    if(numAlive > 1)
                    {
                        cout << "The family discovered a lost pirate treasure chest! Your cash reserves increase by $1000." << endl;
                        chest = stores[0].getCash() + 1000;
                        stores[0].setCash(chest);
                    }
                    else 
                    {
                        cout << "You discovered a lost pirate treasure chest! Your cash reserves increase by $1000" << endl;
                        chest = stores[0].getCash() + 1000;
                        stores[0].setCash(chest);
                    }
                }
                cout << endl;
                cout << "What do you want to do: " << endl;
                cout << "(1) Rest " << endl;
                cout << "(2) Continue on Trail" << endl;
                cout << "(3) Hunt" << endl;
                cout << "(4) Quit Game" << endl;
                getline(cin, choices);
            }
        }
        else if(choices == "4")
        {
            //quit the entire game
            cout << "The travelling party has cut their trip short! Try to see Oregon City another time!" << endl;
            quitGame();
            exit(0);
        }
    }
}
int main() // int main function
{
    Game game1;
    game1.loadMilestones();
    game1.loadMonths();
    game1.playGame();
}