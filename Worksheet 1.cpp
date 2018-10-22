#include <iostream>



int main() {

    double Width;
    double Height;
    double Length;
    double Volume;
    double Surface_Area;

    // Ask user for Width, Height and Length

    std::cout <<  "We are going to build a cuboid -";


    std::cout << "Please enter Width";
    std::cin >> Width;



    std::cout << "Please enter Height";
    std::cin >> Height;



    std::cout << "Please enter Length";
    std::cin >> Length;

    // Calculate

    Volume = Width * Height * Length;
    Surface_Area = 2 * Length * Width + 2 * Length * Height + 2 * Height * Width;


    std::cout << "The Volume of the Cuboid is:" << Volume
              << ", The Surface Area of the Cuboid is:" << Surface_Area << std::endl;

    system("PAUSE");

    return(0);
};
