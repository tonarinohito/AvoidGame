#include "Game.h"
#include "DxLib.h"
bool Game::Initialize()
{

	return true;
}

void Game::Update()
{
	controller.Update();
}

void Game::Draw()
{
	controller.Draw();
}

void Game::Finalize()
{
	
}