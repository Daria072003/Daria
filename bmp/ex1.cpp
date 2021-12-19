#include "BmpStructures.h"
#include "ImgFunctions.h"

typedef unsigned long ulong;

const RGB RED = {0, 0, 255};
const RGB ORANGE = {0, 127, 255};
const RGB YELLOW = {0, 255, 255};
const RGB GREEN = {0, 255, 0};
const RGB BLUE = {255, 0, 0};
const RGB INDIGO = {130, 0, 75};
const RGB VIOLET = {255, 0, 143};

const RGB RAINBOW[7] = {RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET};

int main()
{
    RgbImg image = createRgbImg(100, 700, { 0,0,0 });

    for (ulong i = 0; i < 7; ++i)
    {
        for (ulong col = 0; col < 700; ++col)
        {
            for (ulong row = 0; row < 100; ++row)
            {
                auto color_num = col / 100;
                image.pixels[row][col] = RAINBOW[color_num];
            }
        }
    }

    writeRgbImg("rainbow.bmp", image);
    deleteRgbImg(image);

    return 0;
}
