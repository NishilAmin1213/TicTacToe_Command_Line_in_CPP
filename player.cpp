//
// Created by nishil on 28/08/2020.
//

#include "player.h"

player::player(string name, int num, string tok): name(name), num(num), tok(tok){
    cout << "Player "<< (num + 1) << ": " << name << " has been created."  << endl;
};
