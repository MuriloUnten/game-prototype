#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

namespace Managers
{
	class GraphicsManager
	{
	private:
		/* Singleton */
		static GraphicsManager* instance;
		GraphicsManager();

        float width;
        float height;
		sf::RenderWindow* window;

		sf::Clock clock;
		static float deltaTime;

	public:
		~GraphicsManager();

		static GraphicsManager* getInstance();
		static void deleteInstance();

		bool isWindowOpen();
		void clear();
		void close();
		void display();
		sf::RenderWindow* getWindow();

        void resize(float newWidth=0.0f, float newHeight=0.0f);

		void updateDeltaTime();
		static const float getDeltaTime();

	};
}// namespace Managers