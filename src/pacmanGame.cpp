#include <SFML/Graphics.hpp>
#include <vector>
#include "pacmanGame.hpp"


PacmanGame::PacmanGame(int screenWidth, int screenHeight, int frameLimit)
{
    mWindow = new sf::RenderWindow(sf::VideoMode(screenWidth, screenHeight), "dPacMan");
    mWindow->setFramerateLimit(frameLimit);

    mScreenWidth = screenWidth;
    mScreenHeight = screenHeight;
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
    sf::Event ev;
    while (mWindow->pollEvent(ev))
    {
        switch (ev.type)
        {
            case sf::Event::Closed:
                gameIsOver = true;
                mWindow->close();
                break;
        }
    }
    return;
}


// draws everything to the screen
void PacmanGame::draw()
{
    mWindow->clear(sf::Color::Black);

    /*
    render stuff
    */

   mWindow->display();
   return;
}
