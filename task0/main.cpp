#include <iostream>
#include "datenstruktor.h"
int main() {
    for(int i = 10; i <= 1000000; i*=100) {
        test_m(map_erstellen(i));
        test_um(u_map_erstellen(i));
    }
    return 0;
}
