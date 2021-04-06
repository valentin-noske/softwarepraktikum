//
// Created by vince on 06.04.21.
//

#include "map.h"


std::map<int,int> map_erstellen(int const &gr){
    std::map<int,int> m_daten;
    int i = 0;
    while(i < gr) {
        m_daten.emplace(i, rand() % gr);
        ++i;
    }
    return m_daten;
}


void test_m(std::map<int,int> const &map){
    double start, end;
    int s = map.size();
    double c = 0;
    std::cout<<"map mit "<<s<<" Elementen"<<"\n";
    start = omp_get_wtime();
    for(int i = 0; i < s; ++i){
        int r = rand() % 2*s +s;
        auto it = map.find(r);
        if(it != map.end()) ++c;
    }
    end = omp_get_wtime();
    std::cout<<"Treffeq: "<<c/s<<" Zeit: "<<end-start<<"\n";
    c = 0;
    start = omp_get_wtime();
    for(int i = 0; i < s; ++i){
        int r = rand() % 2*s;
        auto it = map.find(r);
        if(it != map.end()) ++c;
    }
    end = omp_get_wtime();
    std::cout<<"Treffeq: "<<c/s<<" Zeit: "<<end-start<<"\n";
    c = 0;
    start = omp_get_wtime();
    for(int i = 0; i < s; ++i){
        int r = rand() % s;
        auto it = map.find(r);
        if(it != map.end()) ++c;
    }
    end = omp_get_wtime();
    std::cout<<"Treffeq: "<<c/s<<" Zeit: "<<end-start<<"\n";
}
