//
// Created by vince on 03.04.21.
//

#ifndef TASK0_DATENSTRUKTOR_H
#define TASK0_DATENSTRUKTOR_H

#endif //TASK0_DATENSTRUKTOR_H

#include <iostream>
#include <vector>
#include <list>
#include <omp.h>
#include <algorithm>
#include "random_generator.h"
#include <string>
/*
std::vector<int> vector_erstellen(int const &gr);
*/
std::vector<std::pair<int,int>> pair_vector_erstellen(int const &gr);

std::vector<std::pair<std::string,int>> pair_vector_erstellen_string(int const &gr);

bool bin_suche(std::vector<std::pair<int,int>> const & vec, int & ziel);
/*
std::list<int> liste_erstellen(int const &gr);
*/

void test_b_v_p(std::vector<std::pair<int, int>> vec);

void test_v_p(std::vector<std::pair<int, int>> const &vec);