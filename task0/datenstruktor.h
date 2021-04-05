//
// Created by vince on 03.04.21.
//

#ifndef TASK0_DATENSTRUKTOR_H
#define TASK0_DATENSTRUKTOR_H

#endif //TASK0_DATENSTRUKTOR_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <omp.h>
/*
std::vector<int> vector_erstellen(int const &gr);

std::vector<std::pair<int,int>> pair_vector_erstellen(int const &gr);
*/
std::map<int,int> map_erstellen(int const &gr);

std::unordered_map<int,int> u_map_erstellen(int const &gr);
/*
std::list<int> liste_erstellen(int const &gr);
*/
void test_m(std::map<int,int> const &map);

void test_um(std::unordered_map<int,int> const &map);