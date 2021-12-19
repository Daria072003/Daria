#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>

typedef unsigned long ulong;

RgbImg toGrayscale(RgbImg const &image)
{
    RgbImg output = copyRgbImg(image);

    for (ulong row = 0; row < image.height; ++row)
    {
        for (ulong col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
            output.pixels[row][col] = {gray, gray, gray};
        }
    }

    return output;
}

int main(int argc, char const *argv[])
{
    RgbImg input = readRgbImg("MARBLES.bmp");
    RgbImg gray = toGrayscale(input);

    writeRgbImg("MARBLES_gray.bmp", gray);

    deleteRgbImg(input);
    deleteRgbImg(gray);

    return 0;
}
