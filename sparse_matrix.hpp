/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 Satish Kumar
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */
#include <iostream>
#include <stdio.h>
#include <ctime>
#include "cstdlib"
#include <occa.hpp>
#include "cpu.hpp"
using namespace std;

// sparse_Matrix_Matrix_Multiplication : This function is dot product of sparse matrix and sparse matrix both in CSR format
void sparse_Matrix_Matrix_Multiplication(int row, int colume, int row2ndmatrix, int colume2ndmatrix, occa::memory o_a, occa::memory o_b, occa::memory o_ab, occa::device device);

// sparse_Matrix_Vector_Multiplication : This function is dot product of sparse matrix in CSR format and vector
void sparse_Matrix_Vector_Multiplication(int row, int colume, occa::memory o_a, occa::memory o_b, occa::memory o_ab, occa::device device);

// sparse_Add_Sub_Matrix : This function is addition and subtraction of sparse matrix and sparse matrix both in CSR format
void sparse_Add_Sub_Matrix(int row, int colume, int row2ndmatrix, int colume2ndmatrix, occa::memory o_a, occa::memory o_b, occa::memory o_ab, occa::device device, int operation);
