//
// Created by vince on 03.04.21.
//

#include "vector.h"



std::vector<int> vector_erstellen(int const &gr);

std::vector<std::pair<int,int>> pair_vector_erstellen(int const &gr){
    std::vector<std::pair<int,int>> v_daten;
    v_daten.reserve(gr);
    int i = 0;
    while(i < gr) {
        std::pair<int,int> foo{i, rand() % gr};
        v_daten.push_back(foo);
        ++i;
    }
    return v_daten;
}


/*
std::list<int> liste_erstellen(int const &gr);

*/

void test_v_p(std::vector<std::pair<int, int>> const vec) {
    double start, end;
    int s = vec.size();
    double c = 0;
    std::cout << "vector&pair mit " << s << " Elementen" << "\n";
    start = omp_get_wtime();
    for (int i = 0; i < s; ++i) {
        int r = rand() % 2 * s + s;
        for(auto x:vec){
            if (x.first == r){
                ++c;
                break;
            }
        }
    }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";
    c = 0;
    start = omp_get_wtime();
    for(int i = 0; i < s; ++i) {
        int r = rand() % 2 * s;
        for (auto x:vec) {
            if (x.first == r) {
                ++c;
                break;
            }
        }
    }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";
    c = 0;
    start = omp_get_wtime();
    for (int i = 0; i < s; ++i) {
        int r = rand() % s;
        for (auto x:vec) {
            if (x.first == r) {
                ++c;
                break;
            }
        }
    }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";
}

