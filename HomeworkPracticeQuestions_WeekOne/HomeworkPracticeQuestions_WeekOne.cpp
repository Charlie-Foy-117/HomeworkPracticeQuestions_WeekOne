// HomeworkPracticeQuestions_WeekOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //problem one : Area of a rectangle
    /*
    int length, width, area;

    std::cout << "Please enter the length of the rectangle" << std::endl;
    std::cin >> length;
    std::cout << "Please enter the width of the rectangle" << std::endl;
    std::cin >> width;
    area = length * width;
    std::cout << "The area of the rectangle is " << area << std::endl;

    */


    //problem two : Time Conversion
    float hours;
    float minutes;
    float seconds;
    std::string choice;

    std::cout << "Would you like to convert hours(h), minutes(m) or seconds(s)" << std::endl;
    std::cin >> choice;
    if (choice == "h")
    {
        std::cout << "Enter the number of hours you wish to convert" << std::endl;
        std::cin >> hours;
        minutes = hours * 60;
        seconds = hours * 360;
        std::cout << "Hours " << hours << std::endl
            << "Minutes " << minutes << std::endl
            << "Seconds " << seconds << std::endl;
    }
    if (choice == "m")
    {
        std::cout << "Enter the number of minutes you wish to convert" << std::endl;
        std::cin >> minutes;
        hours = minutes / 60;
        seconds = minutes * 60;
        std::cout << "Hours " << hours << std::endl
            << "Minutes " << minutes << std::endl
            << "Seconds " << seconds << std::endl;
    }
    if (choice == "s")
    {
        std::cout << "Enter the number of seconds you wish to convert" << std::endl;
        std::cin >> seconds;
        minutes = seconds / 60;
        hours = seconds / 360;
        std::cout << "Hours " << hours << std::endl
            << "Minutes " << minutes << std::endl
            << "Seconds " << seconds << std::endl;
    }
    else
    {
        std::cout << "You did not pick a compatible option please try again" << std::endl;
    }
    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
