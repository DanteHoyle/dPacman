/*
    Header file for a C++ implementaion of Pacman
*/

#ifndef PACMANGAME_HPP
#define PACMANGAME_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

namespace DPC
{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 1280;
    const int FRAME_LIMIT = 60;
}

class PacmanGame
{
public:
    // Game State Enums
    enum gameState
    {
        MENU,
        PLAY,
        PAUSE,
        END
    };
    enum ghostState
    {
        CHASE,
        SCATTER,
        FRIGHTENED
    };

    PacmanGame(int screenWidth, int screenHeight, int frameLimit);

    int mSreenWidth,
        mScreenHeight,
        mframeLimit;
    
    sf::RenderWindow* mWindow;

    gameState mGameState;
    ghostState mGhostState;
    bool gameIsOver = false;

    void run();

private:
    void update();

    void draw();

    void exit();

};



#endif