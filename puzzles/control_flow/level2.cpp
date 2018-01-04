// What is the output of the following code?

int mode = 3;
if (1 and 2) {
  mode = 5;
}
else if (1 bitand 2) {
  mode = 6;
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
