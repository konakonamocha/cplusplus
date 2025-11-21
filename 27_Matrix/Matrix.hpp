#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix {
public:
    Matrix(int rows = 1, int cols = 1);

    virtual ~Matrix();
    Matrix(const Matrix<T>& m);
    Matrix& operator=(const Matrix<T>& other);

    void print() const;
    Matrix<T> load(const char *filename);

private:
    int rows, cols;
    T **data;
};

#endif