class point {
private:
	int x, y;
public:
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	point() {
		x = (new Date()).getTime() % 800;
		y = (new Date()).getTime() % 600;
	}
	void try_pick_up(int x, int y) {
		if (this->x == x && this->y == y) {
			x = (new Date()).getTime() % 800;
			y = (new Date()).getTime() % 600;
		}
	}
};


class plaer {
private:
	int x, y;
public:
	plaer():x(400),y(300){}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void move_left() {
		if (x>0) x -= 1;
	}
	void move_right() {
		if (x<800)x += 1;
	}
	void move_down() {
		if (y>0)y -= 1;
	}
	void move_up() {
		if (y<600)y += 1;
	}
};