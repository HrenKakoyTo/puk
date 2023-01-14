#include <time.h>
#include <random>

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
		x = rand() % 800;
		y = rand() % 600;
	}
	void try_pick_up(int x, int y) {
        if (this->x <= x + 60 && this->x + 100 >= x && this->y <= y + 40 && this->y + 80 >= y)
        {
            this->x = rand() % 800;
			this->y = rand() % 600;
		}
	}
};


class player {
private:
	int x, y;
public:
	player():x(400),y(300){}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void move_left() {
		if (x>0) x -= 2;
	}
	void move_right() {
		if (x<800)x += 2;
	}
	void move_down() {
        if (y<600)y += 2;
    }
	void move_up() {
        if (y>0)y -= 2;
    }
};
