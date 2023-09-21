#pragma once
#include <iostream>
#include <memory>
using namespace std;

class Matrix{
private:
    size_t col;
    size_t row;
    shared_ptr<float[]> ptr;
public:
    Matrix(size_t r = 3,size_t c =4):row(r),col(c),ptr(new float[row * col]{1,2,3,4}){}
    Matrix(const Matrix &r):row(r.row),col(r.col),ptr(r.ptr){}
    Matrix &operator=(const Matrix &rhs);
    friend Matrix operator+(const Matrix &lhs,const Matrix &rhs);
    friend bool check(const Matrix &lhs,const Matrix &rhs);
};

Matrix operator+(const Matrix &lhs,const Matrix &rhs);
bool check(const Matrix &lhs,const Matrix &rhs);