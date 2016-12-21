#include "stdafx.h"
#include <windows.h>
#include "png.h"
int main()
{
	PNG imgin;
	imgin.readFromFile("0_test_ver1.png");

	/*Test correctness of contents in PNG*/
	size_t width = imgin.width();
	size_t height = imgin.height();
	std::cout << width << " " << height << "\n";
	RGBAPixel *curr_pix = imgin(0, 0);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			RGBAPixel *curr_pix = imgin(j, i);
			std::cout << curr_pix->red << " " << curr_pix->green << " " << curr_pix->blue << "\n";
		}
	}
    return 0;
}

