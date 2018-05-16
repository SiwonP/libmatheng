/**
 * @author Simon Petit
 *
 * @file 
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

#include "vector.h"

#include "types.h"

/**
 * @brief Create a null matrix.
 *
 * @param[in] size_n Number of rows.
 * @param[in] size_m Number of columns.
 *
 * @return A matrix pointer.
 *
 * @relates matrix
 */
matrix *matrix_zeros(int size_n, int size_m);

/**
 * @brief Create the Identity matrix.
 *
 * @param[in] size Number of rows/columns.
 * @return A square matrix pointer.
 *
 * @relates matrix
 */
matrix *matrix_identity(int size);

/**
 * @brief Get the number of rows of the matrix.
 *
 * @param[in] m A matrix pointer.
 * @return The number of rows of the matrix.
 *
 * @relates matrix
 */
int get_number_of_rows(matrix *m);

/**
 * @brief Get the number of columns of the matrix.
 *
 * @param[in] m A matrix pointer.
 * @return The number of columns of the matrix.
 *
 * @relates matrix
 */
int get_number_of_columns(matrix *m);

/**
 * @brief Get the i-th row of the matrix as a vector object.
 *
 * @param[in] m A matrix pointer.
 * @param[in] i The row index to get.
 *
 * @return The i-th row of the matrix as a vector.
 *
 * @relates matrix
 */
vector *get_row(matrix *m, int i);

/**
 * @brief Get the j-th columns of the matrix as a vector object.
 *
 * @param[in] m A matrix pointer.
 * @param[in] j The column index to get.
 *
 * @return The j-th column of the matrix a vector.
 *
 * @relates matrix
 */
vector *get_column(matrix *m, int j);

/**
 * @brief Get the element [i,j] of the matrix.
 *
 * @param[in] m A matrix pointer.
 * @param[in] i The row index.
 * @param[in] j The column index.
 *
 * @return The i-th,j-th element.
 *
 * @relates matrix
 */
double matrix_get(matrix *m, int i, int j);

/**
 * @brief Change the value of element [i,j].
 *
 * @param[in] m A matrix pointer.
 * @param[in] i The row index.
 * @param[in] j The column index.
 * @param[in] x The new value.
 *
 * @relates matrix
 */
void matrix_set(matrix *m, int i, int j, double x);

/**
 * @brief Add two matrices.
 *
 * @param[in] m A matrix pointer.
 * @param[in] n A matrix pointer.
 * @param[out] o A matrix pointer.
 *
 * @returns 0 if the addition can't be made because of dimension 
 * incompatibility, 1 otherwise.
 *
 * @relates matrix
 */
int matrix_add(matrix *m, matrix *n, matrix *o);

/**
 * @brief Subtract two matrices.
 *
 * @param[in] m A matrix pointer.
 * @param[in] n A matrix pointer.
 * @param[out] o A matrix pointer.
 *
 * @returns 0 if the subtraction can't be made because of dimension 
 * incompatibilyt, 1 otherwise.
 *
 * @relates matrix
 */
int matrix_sub(matrix *m, matrix *n, matrix *o);

/**
 * @brief Multiplication of two matrices.
 *
 * @param[in] m A matrix pointer.
 * @param[in] n A matrix pointer.
 * @param[out] o A matrix pointer.
 *
 * @return 0 if the multiplication can't be mage because of dimension
 * incompatibility, 1 otherwise.
 *
 * @relates matrix
 */
int matrix_mul(matrix *m, matrix *n, matrix *o);

/**
 * @brief Compute the determinant.
 *
 * @param[in] m A matrix pointer.
 *
 * @return The determinant.
 *
 * @relates matrix
 */
double determinant(matrix *m);

/**
 * @brief Compute the trace, ie the sum of the diagonal elements
 * 
 * @param[in] m A matrix pointer.
 *
 * @return The trace.
 *
 * @relates matrix
 */
double trace(matrix *m);

/**
 * @brief Determine if a matrix is diagonal.
 *
 * @param[in] m A matrix pointer.
 *
 * @return 1 if diagonal, 0 otherwise.
 */
int is_diagonal(matrix *m);

/**
 * @brief Destroy the matrix object and free the memory
 *
 * @param[in] m Matrix pointer.
 * 
 * @relates matrix
 */
void matrix_free(matrix *m);

#endif
