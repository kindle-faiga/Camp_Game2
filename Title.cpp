#include "Title.hpp"

bool Title::update()
{
    if(MouseL.down())
    {
        return false;
    }
    
    return true;
}

void Title::draw()
{
    Circle(Cursor::Pos(),50).draw();
}
