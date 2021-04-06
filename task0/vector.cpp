//
// Created by vince on 03.04.21.
//

#include "vector.h"




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

bool bin_suche(std::vector<std::pair<int,int>> const &vec, int  & ziel){
    int r_g = vec.size()-1;
    int l_g = 0;
    while(l_g <= r_g){
        int m = l_g + ((r_g - l_g)/2);
        if(vec[m].first == ziel) return true;
        else{
            if (vec[m].first > ziel) r_g = m;
            else l_g = m+1;
        }
    }
    return false;
}


void test_b_v_p(std::vector<std::pair<int, int>> const &vec) {
    double start, end;
    int s = vec.size();
    double c = 0;
    std::cout << "vector&pair binärsuche mit " << s << " Elementen" << "\n";
    start = omp_get_wtime();
    for (int i = 0; i < s; ++i) {
        int r = rand() % 2 * s + s;
        if(bin_suche(vec,r)) ++c;
        }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";

    c = 0;
    start = omp_get_wtime();
    for(int i = 0; i < s; ++i) {
        int r = rand() % 2 * s;
        if(bin_suche(vec,r)) ++c;
    }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";
    c = 0;
    start = omp_get_wtime();
    for (int i = 0; i < s; ++i) {
        int r = rand() % s;
        if(bin_suche(vec,r)) ++c;
    }
    end = omp_get_wtime();
    std::cout << "Treffeq: " << c / s << " Zeit: " << end - start << "\n";
}


void test_v_p(std::vector<std::pair<int, int>> const &vec) {
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

