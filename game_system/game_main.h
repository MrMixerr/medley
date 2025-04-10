#include <iomanip>
#include <iostream>
#include "map/map.h"
#include "economy/building.h"


using namespace std;

void Execute_game();

void Execute_game(){
    int input;
    printf("SELECT:");
    cin >> input;
    switch (input)
    {
    case 1:
        Game_map();
        break;
    case 2:
        
        break;
    default:
        exit(0);
        break;
    }
    
    
}   

