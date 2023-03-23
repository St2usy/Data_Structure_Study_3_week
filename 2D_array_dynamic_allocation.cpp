#include <iostream>

int** alloc2DInt(int rows, int cols) {
	if (rows <= 0 || cols <= 0) return NULL;

	int** mat = new int* [rows];

	for (int i = 0; i < rows; i++) {
		mat[i] = new int[cols];
	}

	return mat;
}

void free2DInt(int** mat, int rows = 0, int cols = 0) {
	if (mat != NULL) {
		for (int i = 0; i < rows; i++)
			delete[] mat[i];
		delete[] mat;
	}
}

void set2DRandom(int** mat, int rows, int cols) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			mat[i][j] = rand() % 100;
}

void print2DInt(int** mat, int rows, int cols) {
	std::cout << "��: " << rows << "��: " << cols << std::endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j];
		std::cout << std::endl;
	}
}

void main() {
	int** mat;
	int rows;
	int cols;

	std::cout << "��� ���� ũ�⸦ �Է��Ͻÿ�: ";
	std::cin >> rows >> cols;

	mat = alloc2DInt(rows, cols);
	set2DRandom(mat, rows, cols);
	print2DInt(mat, rows, cols);
	free2DInt(mat, rows, cols);
}