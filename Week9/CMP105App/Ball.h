#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include "SFML/Graphics.hpp"

class Ball : public GameObject
{
public:
	Ball(); 
	~Ball(); 

	void update(float dt) override;

private:
	float speed;
	sf::Texture ballTexture;
};

