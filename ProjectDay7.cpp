#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

 

int return_vec(std::vector<string> vector)
{
    
    int ran_num = rand() % (vector.size());
    return ran_num;
}



int main()
{

    std::ofstream file ("WhatYouShouldDo.txt");
    std::vector<string> to_do = {"classes", "operators", "libraries", "memory", "loops", "pointers", "references", "algorithims", "data structures", "var types", "OOPS", "OpenGL"};
    srand(time(NULL));

    file << "You need to learn more about " << to_do[return_vec(to_do)];

    file.close();

}


