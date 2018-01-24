some kind of functional nesting

// What will this code return?

int a(int number1, int number2){
    return((number1 * number2) % 2);
}

int b(int number3, int number4){
    return(number3 + a(number3, number4-1));
}

int c(int number5, int number6){
    return(a(b(number5, number6), number5) * b(number6, number5)); 
}

DEBUG(("Answer is: %d", c(3, 5)));

// extra bonus, tell me what this program will debug for any two arguments, arg1 and arg2.
