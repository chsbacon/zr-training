// What is the output of the following code?

int mode = 3;
if (sqrt(mode) > 1.5f) {
  mode = 5;
}

switch(mode) {
  case 3:
    DEBUG(("what what"));
  case 5:
    DEBUG(("oh yeah"));
  case 6:
    DEBUG(("hello"));
    break;
  default:
    DEBUG(("hi"));
}
