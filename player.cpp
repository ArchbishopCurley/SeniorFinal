#include <iostream>
#include "player.h"

using namespace std;

player::player(string init_name, int init_goals) {
	name = init_name;
	goals = init_goals;
}

string player::getName() {
	return name;
}

int player::getGoals() {
	return goals;
}

void player::score() {
	goals = goals + 1;
}

int main() {

	player p1("Ovechkin", 50);
	player p2("Crosby", 0);

	p1.score();

	cout << p1.getName() << " has " << p1.getGoals() << " goals." << endl;
	cout << p2.getName() << " has " << p2.getGoals() << " goals." << endl;
	return 0;
}
