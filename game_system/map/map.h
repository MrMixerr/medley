#include <iomanip>
#include <iostream>

using namespace std;

void Game_map();
void Load_the_map(int h, int w);




void Game_map(){
    int width = 10; 
    int height = 10;

    Load_the_map(height,width);

}


void Load_the_map(int h, int w){ 
    char alpab[26];
    
    for(int ch='a'; ch<='z'; ch++){
        alpab[ch-'a']=ch;
    }
    
    for(int i=0; i<=h; i++){
        printf("%-2i",i);

        for(int j=0; j<=w; j++){
            if(i<1){
                printf("%3c ",alpab[j]);
            } else{
                printf("%4s", "[ ]");
            }
            
        }
        printf(" \n");
    }

}