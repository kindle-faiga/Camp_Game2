#include "Game.hpp"

bool Game::update()
{
    if(MouseL.down())
    {
        return false;
    }
    
    return true;
}

void Game::draw()
{
    Circle(Cursor::Pos(),10).draw();
}
