#pragma once
class Object
{
private:
	std::vector<Rect> collider;
public:
	Object();
	~Object();
	Point pos;
	Point size;
	Texture texture;
	const Rect& getCollider(int);
	void addCollider(Point, Point);
	int colliders();
};