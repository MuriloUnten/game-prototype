#include "Game.hpp"


Game::Game():
graphics(Managers::GraphicsManager::getInstance())
{


    execute();
}


Game::~Game()
{

}


void Game::execute()
{
    while (graphics->isWindowOpen())
    {
        // TODO switch to EventsManager
        /*-------------------------------------------------------------*/
        sf::Event event;
        while(graphics->getWindow->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                {
                    graphics->close();
                    exit(1);
                }
        }
        /*-------------------------------------------------------------*/

        graphics->updateDeltaTime();
        graphics->clear();
        graphics->display();
    }
}