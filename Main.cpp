# include <Siv3D.hpp>
# include <HamFramework.hpp>
# include "Title.hpp"
# include "Game.hpp"

void Main()
{
    
    
    MiniScene<String> scene;
    
    Title title;
    Game game;
    
    scene[L"Title"] = [&]()
    {
        if(!title.update())
        {
            scene.changeState(L"Game");
        }
        
        title.draw();
    };
    
    scene[L"Game"] = [&]()
    {
        if(!game.update())
        {
            scene.changeState(L"Title");
        }
        
        game.draw();
    };
}
