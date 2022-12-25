#pragma once

#include "GraphicsManager.hpp"


class Game
{
private:
    Managers::GraphicsManager* graphics;

public:
    Game();
    ~Game();
    void execute();
};