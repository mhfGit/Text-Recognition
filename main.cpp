#include "stdafx.h"
#include <iostream>
#include <fstream>

#define WIDTH	28
#define HEIGHT	28
int main()
{
	std::fstream input_file("trainingimages.txt");
	char img[784];
	while (!input_file.eof()) {
		input_file.get(img, WIDTH*HEIGHT);
		for (int i = 0; i < WIDTH; i++) {
			for (int j = 0; j < WIDTH; j++) {
				std::cout << img[i * WIDTH + j];
			}
			std::cout << "\n";
		}

	}
	input_file.close();
	return 0;
}



