#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;


void check_create_file(string file_name );
void check_if_new();


void check_create_file(string file_name, int save_num){
    ifstream file("./Storage/"+ save_num +file_name + ".txt");

    try{ 
        if(file.fail()){
            file.open("./Storage/"+ save_num + file_name+".txt", fstream::out);
        } else{
            printf("this works???");
        }
    }
    catch (int err_code){
        printf("Something broke :((((((( \nError code: %i",err_code );
    }
}
void check_if_new(){ // new player check in lmao
    int n_saves; int user_input;
    int new_save_int;
    ifstream save_finder("/Storage/0/create_new_save.txt");
    ofstream new_save("/Storage/0/create_new_save.txt");
    
    save_finder >> n_saves;
    save_finder >> new_save_int;
    

    printf("Do you wanna make a new save??? \n 1: Yes %5 2: No ");
    cin >> user_input;
    if(user_input==1){
        new_save_int+=1;
        new_save << 0 << endl;
        new_save << new_save_int;

        printf("New save made: %i \n", new_save_int);

        check_create_file("starter.txt",new_save_int);
        


    } else if (user_input==2) {
        printf("LOOOOOL NOOO");
    }

    else{
        exit(0);
    }
    save_finder.close();
    new_save.close();
}