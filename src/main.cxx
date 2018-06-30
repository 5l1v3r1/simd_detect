/* Main.cpp
 * 
 * Author           : Alexander J. Yee
 * Modified         : Dendi Suhubdy
 * Date Created     : 04/17/2015
 * Last Modified    : 06/30/2018
 * 
 */

#include <iostream>

#include "cpu_x86.h"

using std::cout;
using std::endl;
using namespace simd_detect;

int main(){

    cout << "CPU Vendor String: " << cpu_x86::get_vendor_string() << endl;
    cout << endl;

    cpu_x86::print_host();

#if _WIN32
    system("pause");
#endif
}
