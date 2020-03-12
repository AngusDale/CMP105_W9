#include"Ball.h"

Ball::Ball(){
	velocity = sf::Vector2f(speed, 0);	
}

Ball::~Ball(){

}

void Ball::update(float dt){
	move(velocity * dt);
}