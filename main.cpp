#include <iostream>

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds)
{
    const double gravity { 9.8 };

    const double fallDistance { gravity * (seconds * seconds) / 2.0 };
    const double ballHeight { towerHeight - fallDistance };

    if (ballHeight < 0.0)
        return 0.0;

    return ballHeight;
}

void printBallHeight(double ballHeight, int seconds)
{
    if (ballHeight > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
    printBallHeight(ballHeight, seconds);
}

int main()
{
    const double towerHeight{ getTowerHeight() };

    int num_seconds{};
    std::cout << "Enter number of seconds : " << "\n";
    std::cin >> num_seconds;
    for (int i{0}; i<=num_seconds;i++) {
        calculateAndPrintBallHeight(towerHeight,i);
    }

    return 0;
}