#include "stdafx.h"
#include "Object.h"


Object::Object(Point _pos,Point _size)
{
	pos = _pos;
	size = _size;
	texture = Texture(L"Resources/no_image.png");
}


Object::~Object()
{
}

const Rect& Object::getCollider(int n) {
	assert(n >= 0 || n < collider.size());
	return collider[n];
}
void Object::addCollider(Point _pos, Point _size) {
	collider.push_back(Rect(_pos,_size));
}
int Object::colliders() {
	return collider.size();
}
