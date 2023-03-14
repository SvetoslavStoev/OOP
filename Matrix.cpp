#include <iostream>
#include "Matrix.h"
#include <exception>
void Matrix::destroy() {
	int** m_data = new int* [m_rows]; 
	for (int i = 0; i < m_rows; i++) {
		m_data[i] = new int[m_cols]; 
	}
	for (int i = 0; i < m_rows; i++) {
		delete[] m_data[i];
	}
	delete[] m_data;
}

void Matrix::copy(const Matrix& other) {
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
}

Matrix::Matrix(int rows, int cols) {
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = 0;
		}
	}
}

Matrix& Matrix::operator=(const Matrix& other) {
	if (this != &other) {
		m_rows = other.m_rows;
		m_cols = other.m_cols;
		destroy();
		int** m_data = new int* [other.m_rows]; 
		for (int i = 0; i < other.m_rows; i++) {
			m_data[i] = new int[other.m_cols]; 
		}
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_data[i][j] = other.m_data[i][j];
			}
		}
	}

	return *this;
}

Matrix& Matrix::operator=(Matrix&& other) {
	if (this != &other) {
		m_rows = other.m_rows;
		m_cols = other.m_cols;
		destroy();
		int** m_data = new int* [other.m_rows];
		for (int i = 0; i < other.m_rows; i++) {
			m_data[i] = new int[other.m_cols];
		}
		m_data = std::move(other.m_data);
	}

	return *this;
}

Matrix::~Matrix() {
	destroy();
}

Matrix::Matrix(const Matrix& other) {
	copy(other);
}

void print(const Matrix& matrix) {
	for (int i = 0; i < matrix.m_rows; i++)
	{
		for (int j = 0; j < matrix.m_cols; j++)
		{
			std::cout << matrix.m_data[i][j] << std::endl;
		}
	}
}

Matrix transpose(const Matrix& matrix) {
	for (int i = 0; i < matrix.m_rows; i++)
	{
		for (int j = 0; j < matrix.m_cols; j++)
		{
			matrix.m_data[i][j] = matrix.m_data[j][i];
		}
	}
	return matrix;
}

Matrix Matrix::operator+(const Matrix& other) const {
	if (m_rows != other.m_rows||m_cols!=other.m_cols) {
		std::exception("The matrices must have an equal amount of rows and collumns.");
	}

	Matrix newMatrix = { m_rows,m_cols };

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			newMatrix.m_data[i][j] = m_data[i][j] + other.m_data[i][j];
		}
	}

	return newMatrix;
}

Matrix Matrix::operator-(const Matrix& other) const {
	if (m_rows != other.m_rows || m_cols != other.m_cols) {
		std::exception("The matrices must have an equal amount of rows and collumns.");
	}

	Matrix newMatrix = { m_rows,m_cols };

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			newMatrix.m_data[i][j] = m_data[i][j] - other.m_data[i][j];
		}
	}

	return newMatrix;
}

Matrix Matrix::operator*(const Matrix& other) const {
	if (m_rows != other.m_rows || m_cols != other.m_cols) {
		std::exception("The matrices must have an equal amount of rows and collumns.");
	}

	Matrix newMatrix = { m_rows,m_cols };

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			newMatrix.m_data[i][j] = m_data[i][j] * other.m_data[i][j];
		}
	}

	return newMatrix;
}

int& Matrix::operator()(int row, int col) {

}

bool Matrix::operator==(const Matrix& other) const {
	if (m_rows != other.m_rows || m_cols != other.m_cols) {
		std::exception("The matrices must have an equal amount of rows and collumns.");
	}
	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			if (m_data[i][j] != other.m_data[i][j]) {
				return false;
			}
		}
	}
	return true;
}

