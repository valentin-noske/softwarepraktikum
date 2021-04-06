//
// Created by vince on 06.04.21.
//

#ifndef TASK0_UMAP_H
#define TASK0_UMAP_H

#endif //TASK0_UMAP_H

#include <iostream>
#include <unordered_map>
#include <omp.h>
#include <string>
#include "random_generator.h"

std::unordered_map<int,int> u_map_erstellen(int const &gr);

std::unordered_map<std::string,int> u_map_erstellen_strings(int const &gr);
/*
std::list<int> liste_erstellen(int const &gr);
*/

void test_um(std::unordered_map<int,int> const &map);