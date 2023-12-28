#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/constants/constants.hpp>

using boost::multiprecision::cpp_dec_float_100; // Adjust the precision as needed

cpp_dec_float_100 boost_factorial(int n) {
    cpp_dec_float_100 result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

