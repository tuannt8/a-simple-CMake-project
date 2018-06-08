#include "lib.h"
#include <iostream>
#include <sub_lib_1/lib.h>

namespace lib_2 {
void show_case(){
    std::cout << "I am library number 2" << std::endl;
}
void show_all(){
    lib_1::show_case();
    lib_2::show_case();
}
}
