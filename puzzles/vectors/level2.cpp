// Describe in words what this code does

float foo[3];
float bar[3];

foo[0] = 0.2f;
foo[1] = 0.4f;
foo[2] = 0.3f;

bar[0] = 0.1f;
bar[1] = 0.2f;
bar[2] = 0.1f;

float something = 0;

something = acosf(mathVecInner(foo, bar) / (mathVecMagnitude(foo, 3) * mathVecMagnitude(bar, 3)));
