#pragma once
#include "Node.h"
#include <unordered_map>

enum directions
{
	left = 1,
	right,
	top,
	down,
};
class snake 
{
private:
	int counter = 0;
	std::unordered_map<directions, sf::Vector2i> directionVecs;
	Node* SnakeHead;
	Node* SnakeTail;
	float speed;
	sf::Vector2i currentDirection;
	float GetDistance(const sf::Vector2f& pos1, const sf::Vector2f& pos2);
public:
	snake();
	snake(float s);
	void UpdateSnake();
	void EatApple();
	void Draw(sf::RenderWindow& window);
	sf::Vector2f getHeadPosition();
	bool hitHimSelf();
};
