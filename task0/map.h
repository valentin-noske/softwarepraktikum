//
// Created by vince on 06.04.21.
//

#ifndef TASK0_MAP_H
#define TASK0_MAP_H

#endif //TASK0_MAP_H

#include <iostream>
#include <map>
#include <omp.h>
#include <string>
#include "random_generator.h"

std::map<int,int> map_erstellen(int const &gr);

std::map<std::string,int> map_erstellen_strings(int const &gr);

void test_m(std::map<int,int> const &map);
