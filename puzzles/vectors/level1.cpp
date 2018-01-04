// What is the output of the following code?

float myPos[3];
float itemPos[3];
float relativePos[3];

myPos[0] = 0.1f;
myPos[1] = 0.2f;
myPos[2] = 0.3f;

itemPos[0] = -0.1f;
itemPos[1] = -0.1f;
itemPos[2] = -0.1f;

mathVecSubtract(relativePos, itemPos, myPos, 3);

DEBUG(("relativePosition: %f %f %f", relativePos[0],
relativePos[1], relativePos[2]));
