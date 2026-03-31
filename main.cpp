#include <iostream>

int main()
{
    std::cout << "Enter the height of the tower : ";
    int height{};
    std::cin >> height;

    std::cout << "At 0 seconds, the height of the ball is : " << height << " metres.\n";

    for (int x{1}; x <= 5; x++)
    {
        double distance_fallen{ 9.8 * x * x / 2 };
        double current_height{ static_cast<double>(height) - distance_fallen };
        if (current_height > 0.0)
            std::cout << "At " << x << " seconds, the height of the ball is : " << current_height << " metres.\n";
        else
            std::cout << "The ball is at the ground.";
    }

    return 0;
}