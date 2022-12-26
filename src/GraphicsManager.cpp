#include "GraphicsManager.hpp"


namespace Managers
{
    GraphicsManager* GraphicsManager::instance = NULL;
    float GraphicsManager::deltaTime = 0;

    /* Singleton */
    GraphicsManager* GraphicsManager::getInstance()
    {
        if (instance == NULL)
        {
            instance = new GraphicsManager();
        }
        return instance;
    }


    void GraphicsManager::deleteInstance()
    {
        if (instance)
            delete instance;
    }
    
    
    GraphicsManager::GraphicsManager():
    width(1280.0f),
    height(720.0f),
    window(new sf::RenderWindow(sf::VideoMode(width, height), "CHANGE THIS TITLE"))
    {

    }


    GraphicsManager::~GraphicsManager()
    {
        delete window;
        window = NULL;
        instance = NULL;
    }


    bool GraphicsManager::isWindowOpen()
    {
        return (window->isOpen());
    }


    void GraphicsManager::clear()
    {
        if (isWindowOpen())
            window->clear();
    }


    void GraphicsManager::close()
    {
        if (isWindowOpen())
            window->close();
    }

    /* Displays the window to the screen */
    void GraphicsManager::display()
    {
        if (isWindowOpen())
            window->display();
    }


    sf::RenderWindow* GraphicsManager::getWindow()
    {
        return window;
    }

    /* Takes the new resolution and resizes the window */
    void resize(float newWidth, float newHeight)
    {
        //TODO Implemennt
    }


    void GraphicsManager::updateDeltaTime()
    {
        deltaTime = clock.restart().asSeconds();
        if(deltaTime > 0.1f)
            deltaTime = 0.1f;

    }


    const float GraphicsManager::getDeltaTime()
    {
        return deltaTime;
    }

}// namespace Managers