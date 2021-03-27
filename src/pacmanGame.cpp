#include <SFML/Graphics.hpp>
#include <vector>
#include "pacmanGame.hpp"


PacmanGame::PacmanGame(int screenWidth, int screenHeight, int frameLimit)
{
    mWindow = new sf::RenderWindow(sf::VideoMode(screenWidth, screenHeight), "dPacMan");
    mWindow->setFramerateLimit(frameLimit);

}

PacmanGame::~PacmanGame()
{
    delete mWindow;
}

void PacmanGame::run()
{
    /* init stuff */

    while (gameIsOver == false)
    {
        update();
        draw();
    }
}

// function runs once per frame and updates game logic
void PacmanGame::update()
{
    // check events



    return;
}


// draws everything to the screen 
void PacmanGame::draw()
{
    return;
}