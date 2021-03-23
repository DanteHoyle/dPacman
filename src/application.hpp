/*
    Header file for a C++ implementaion of Pacman
*/

#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Application
{
public:
    Application(int screenWidth, int screenHeight, int frameLimit);

    int mSreenWidth,
        mScreenHeight,
        mframeLimit;
    
    sf::RenderWindow* window;
    sf::View* camera;

    void run();

private:
    void update();

    void draw();

    void exit();

};

#endif