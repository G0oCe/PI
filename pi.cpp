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

int main() {
    cpp_dec_float_100 sum = 0;

    for (int k = 0; k < 190; ++k) {
        cpp_dec_float_100 numerator = boost_factorial(4 * k) * (1103 + 26390 * k);
        cpp_dec_float_100 denominator = pow(boost_factorial(k), 4) * pow(396, 4 * k);

        sum += numerator / denominator;
    }

    cpp_dec_float_100 result = (2 * sqrt(2) / 9801) * sum;
    result = 1 / result;

    std::cout << "PI = " << boost::math::constants::pi<cpp_dec_float_100>() << "  Boost library\n";
    std::cout << "PI = " << result << "  Ramanujan\n";

    return 0;
}
