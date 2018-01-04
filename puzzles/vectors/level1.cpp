// What is the output of the following code?

float myPos[3];
float itemPos[3];
float relativePosition[3];

myPos[0] = 0.1f;
myPos[1] = 0.2f;
myPos[2] = 0.3f;

itemPos[0] = -0.1f;
itemPos[1] = -0.1f;
itemPos[2] = -0.1f;

relativePosition[0] = itemPos[0] - myPos[0];
relativePosition[1] = itemPos[1] - myPos[1];
relativePosition[2] = itemPos[2] - myPos[2];

DEBUG(("relativePosition: %f %f %f", relativePosition[0],
relativePosition[1], relativePosition[2]));
