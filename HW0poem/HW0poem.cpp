// HW0poem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lisa Jacklin
//CS 201
//8/28/2021
//poem piece is a section of "The Raven" by Edgar Allan Poe

#include <iostream>

using std::cin;


int main()
{
    std::cout << " Deep into that darkness peering, long I stood there wondering, fearing,\n";
    std::cout << "Doubting, dreaming dreams no mortal ever dared to dream before \n";
    std::cout << "But the silence was unbroken, and the stillness gave no token, \n";
    std::cout << "And the only word there spoken was the whispered word, “Lenore?\n";
    std::cout << "This I whispered, and an echo murmured back the word, “Lenore!”—\n";
    std::cout << "Merely this and nothing more.\n";

    std::cout << "Press ENTER to quit ";
    while (cin.get() != '\n');

}


