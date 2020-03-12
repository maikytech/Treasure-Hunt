//  main.cpp
//  Game developed in C++ using the command line.
//
//  Created by Maiqui Cedeño on 10/03/20.
//  Copyright © 2020 PosetoStudio. All rights reserved.

#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    //bool isGameOver = false;
    Player hero;

    while (hero.isGameOver == false)
    {
        hero.CallInput();
    }
    
    

    return 0;
}