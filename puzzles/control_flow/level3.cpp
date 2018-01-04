// What does the program debug?

bool drilling = true;
bool dropping = false;
bool guarding = true;
bool picking = false;

int drillcount = 0;

drillcount = (guarding xor drilling) ? 3 : 5;
DEBUG(("%d", drillcount));
