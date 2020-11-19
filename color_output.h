#include<iostream>
using namespace std;

/*
############## This is a simple program that can print out text to the terminal ##################
i based the program of the regular command that allows you to print color to the terminal like so:

res = "\033[1;36mThis is cyan text!\033[0m";

but i found this annoying to do multiple times so i made this .
*/
void print_color(string txt, string color)
{
    string color_codes[] = {"30","31","32","33","34","35","36","37"};
    string color_names[] = {"black","red","green","yellow","blue","magenta", "cyan","white"};
    string res;
    bool found = false;
    int x = sizeof(color_codes) / sizeof(color_codes[0]);
    int ran_int = rand()%x;
    for(int i = 0; i < x ; i++){
    if(color_names[i] == color){
    res = "\033[1;"+color_codes[i]+"m"+txt+ "\033[0m";
    found = true;
    }
    }
    /*
    cout<<found;
    if(found == false){
        cout << "\033[1;"+color_codes[ran_int]+"mThe color wasnt found.\033[0m\n";
    }*/
    cout<<res;
}
void text_background(string txt, string color)
{
    string color_codes[] = {"30","31","32","33","34","35","36","37"};
    string color_names[] = {"black","red","green","yellow","blue","magenta", "cyan","white"};
    string res;
    bool found = false;
    int x = sizeof(color_codes) / sizeof(color_codes[0]);
    int ran_int = rand() % x;
    for(int i = 0; i < x; i++){
    if(color_names[i] == color){
    res = "\033[7;"+color_codes[i]+"m"+txt+ "\033[0m";
    }
    }/*
    if(found == false){
        cout << "\033[7;"+color_codes[ran_int]+"mThe color wasnt found.\033[0m\n";
    }*/
    cout<<res;
    

}

