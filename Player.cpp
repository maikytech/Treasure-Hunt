//  Player.cpp
//  Game developed in C++ using the command line.
//
//  Created by Maiqui Cedeño on 10/03/20.
//  Copyright © 2020 PosetoStudio. All rights reserved.

#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    horizontal = 0;
    vertical = 0;

}

void Player::CallInput()
{
    char userInput = ' ';
    cin >> userInput;

    switch (userInput)
    {
    case 'w':
        vertical++;
        cout << vertical << endl;
        break;

    case 's':
        vertical--;
        cout << vertical << endl;
        break;

    case 'a':
        horizontal--;
        cout << horizontal << endl;
        break;

    case 'd':
        horizontal++;
        cout << horizontal << endl;
        break;

    case 'e':
        isGameOver = true;
        break;
    
    default:
        break;
    }
}