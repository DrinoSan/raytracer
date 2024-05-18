#include <iostream>


int main()
{   
    // Image
    int imageHeight = 256;
    int imageWidth = 256;

    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";
    // Render
    for( int j = 0; j < imageHeight; ++j )
    {
        for( int i = 0; i < imageWidth; ++i )
        {
            // Getting position relative to image dimension
            auto r = double(i) / (imageWidth - 1);
            auto g = double(j) / (imageHeight - 1);
            auto b = 0;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}