#include <iostream>
#include "vector.h"
#include "map.h"
#include "umap.h"

int main() {

    for(int i = 10; i < 100000000; i*=100) {
        auto x = pair_vector_erstellen(i);
        test_b_v_p(x);
        //test_v_p(x);
        test_m(map_erstellen(i));
        test_um(u_map_erstellen(i));
    }





    return 0;
}
