#include <iostream>
#include <Eigen/Dense>


void factorize(Eigen::Matrix3d const& matrix) {
    std::cout << "============\nOriginal matrix\n";
    std::cout << matrix << '\n';

    Eigen::PartialPivLU<Eigen::Matrix3d> partial_lu{matrix};
    std::cout << "Partial pivot\n";
    std::cout << partial_lu.matrixLU() << '\n';

    Eigen::FullPivLU<Eigen::Matrix3d> full_lu{matrix};
    std::cout << "Full pivot\n";
    std::cout << full_lu.matrixLU() << '\n';

    std::cout << "\n\n";
}


int main() {
    Eigen::Matrix3d matrix;

    matrix << 
        1, -1, 0,
        -1, 2, -1,
        0, -1, 100;
    factorize(matrix);

    matrix << 
        1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    factorize(matrix);

    matrix <<
        1, 2, 3,
        1, 2, 3,
        5, 9, 10;
    factorize(matrix);

    matrix <<
        0, 3, 5,
        0, 7, 10,
        0, 15, 17;
    factorize(matrix);
}
