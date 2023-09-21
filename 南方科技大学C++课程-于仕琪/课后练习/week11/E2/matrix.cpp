#include "matrix.hpp"

Matrix& Matrix::operator=(const Matrix &rhs)
{
    col = rhs.col;
    row = rhs.row;
    ptr = rhs.ptr;
    return *this;
}

Matrix operator+(const Matrix &lhs,const Matrix &rhs)
{
    if(!check(lhs,rhs))
        throw runtime_error("Matrix行列不匹配");
    Matrix c(lhs.row,lhs.col);
    size_t n = lhs.row * lhs.col;
    for(size_t i = 0; i < n; ++i)
    {
        c.ptr[i] = lhs.ptr[i] + rhs.ptr[i];
    }
    return c;
}
bool check(const Matrix &lhs,const Matrix &rhs)
{
    return lhs.col == rhs.col&&lhs.row == rhs.row;
}