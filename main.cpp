#include "../includes.h"

int main(){
    sf::RenderWindow app(sf::VideoMode(800, 600), "APP");
    gameManager game;
    game.gameLoop(app);
    return 0;
}
