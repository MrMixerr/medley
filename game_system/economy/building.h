#include <iomanip>
#include <iostream>


using namespace std;

const int name_size = 5;


string building_names[name_size] = { "Quit", "Lumbermill" , "Farm", "Cheat", "No name buidling" };

double climate_test = 50;
int happy_test = 10;
int buidlings=0;
int coin=100;
bool is_built = false;


void Building_list(){


    printf("the buildings you have: %i", buidlings);
}
    


void Build_something(int coin, int happy, char Names[]){     
    int user_input;


    printf("The list of buildings: \n");
    for(int i=0; i<name_size; i++){
        printf("%c", Names[i]);
    }

    if (coin>100)
    {
        printf("%c was built", Names[user_input]);
    } else{
        printf("Purcahse failed, not enough coins");
    }
    
}

double Building_output(int happy, double climate){
    double output;
    return (happy*climate/2.05); // this is how much output is going to be produced after 1 day 
    // idk what the 2.05 stand for 

}
