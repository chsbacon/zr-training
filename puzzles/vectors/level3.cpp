// figure out what is debugged

float firstvec[3];
float secondvec[3];
float resultvec[3];

firstvec[0] = 1;
firstvec[1] = 0;
firstvec[2] = 0;

secondvec[0] = 0;
secondvec[1] = 1;
secondvec[2] = 0;

mathVecCross(resultvec, firstvec, secondvec);
DEBUG(("%f, %f, %f", resultvec[0], resultvec[1], resultvec[2]));
