#ifndef SQUAREMATRIX.HPP
#define SQUAREMATRIX.HPP

template <typename T>
class SquareMatrix : public Matrix<T> {
public:
    SquareMatrix(int n = 1);
};

#endif