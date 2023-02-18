// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop through rows
    for (int i = 0; i < height; i++)
    {
        // Loop through columns
        for (int j = 0; j < width; j++)
        {
            // Get RGBTriple values
            float blue = image[i][j].rgbtBlue;
            float green = image[i][j].rgbtGreen;
            float red = image[i][j].rgbtRed;
            // Calculate average
            int average = round((red + blue + green) / 3);
            // Set all values to average
            image[i][j].rgbtBlue = image[i][j].rgbtGreen = image[i]  [j].rgbtRed = average;
        }
    }
    return;
}