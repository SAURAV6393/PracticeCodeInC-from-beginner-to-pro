#include <iostream>
using namespace std;

class Player {
private:
    int score;  // Private data members
    int health;

public:
    // Setter for health
    void setHealth(int h) {
        health = h;
    }

    // Setter for score
    void setScore(int s) {
        score = s;
    }

    // Getter for health
    int getHealth() {
        return health;
    }

    // Getter for score
    int getScore() {
        return score;
    }
};

int main() {
    cout << "SAURAV RAJPUT" << endl;

    // Creating a Player object
    Player saurav;

    // Setting and displaying health
    saurav.setHealth(10);
    cout << "Player's Health: " << saurav.getHealth() << endl;

    // Setting and displaying score
    saurav.setScore(89);
    cout << "Player's Score: " << saurav.getScore() << endl;

    return 0;
}









// #include<iostream>
// using namespace std;

// class Player{
//   private:
//     int health ;
//     int age;
//     int score;
//     bool alive ;

//   public:
//     int getHealth(){
//         return health;
//     }

//     int getAge(){
//         return age;
//     }
    
//     int getScore(){
//         return score;
//     }

//     bool isAlive(){
//         return alive;
//     }

//     int setHealth(int health){
//         this->health = health;
//     }

//     int setAge(int health){
//         this->age = age;
//     }

//     int setScore(int score){
//         this->score = score;
//     }

//     bool setisAlive(bool alive){
//         this->alive = alive;
//     }

    
// };

//  int main(){
//     cout<<endl<<endl;

//     Player harsh;
//     harsh.setAge(42);
//     harsh.getHealth(78);
//     harsh.getScore(97);
//     harsh.isAlive(true);

//     Player raghav;
//     raghav.setAge(42);
//     raghav.getHealth(78);
//     raghav.getScore(97);
//     raghav.isAlive(true);

//  }