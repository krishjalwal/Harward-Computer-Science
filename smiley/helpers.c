#include "helpers.h"
void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++) // Loop through image height
    {
        for (int j = 0; j < width; j++) // Loop through image width
        {
            if (image[j][i].rgbtBlue == 0 && image[j][i].rgbtGreen == 0 && image[j][i].rgbtRed == 0)
            {

                image[j][i].rgbtBlue = 127;
                image[j][i].rgbtGreen = 0;
                image[j][i].rgbtRed = 255;
            }
        }
    }
}