#include "stdafx.h"
#include "game.h"
#include "iostream"
using namespace std;

Game::Game()
{
	cout << "Создан Game" << endl;
}
Game::~Game()
{
	cout << "DELETE Game" << endl;
}
void Game::print(void)
{
	cout << "" << this->get_developer();
	cout << "virtual Game" << endl;
}
Game::Game(char* string) 
{
	this->set_developer(string);

}