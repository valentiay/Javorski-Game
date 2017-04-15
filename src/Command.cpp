//
// Created by valentiay on 4/16/17.
//

#include "../include/Commands.h"

Command::Command(Category::Type target, Action action):
    target(target),
    action(action) {}