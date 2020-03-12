//  Player.h
//  Game developed in C++ using the command line.
//
//  Created by Maiqui Cedeño on 10/03/20.
//  Copyright © 2020 PosetoStudio. All rights reserved.

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:

    bool isGameOver = false;

    Player();
    void CallInput();

protected:

    int horizontal;
    int vertical;

};

#endif

