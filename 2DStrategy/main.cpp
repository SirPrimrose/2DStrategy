#include "Game.h"

Game *game = nullptr;

int main(int argc, char *argv[]) {
	// Game Loop
	game = new Game();

	game->init("PrimEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while (game->running()) {
		// handle user input
		game->handleEvents();
		game->update();
		game->render();

		//update all objects

		//render changes
	}

	game->clean();

	return 0;
}
