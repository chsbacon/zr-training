// what does this output?

int multiply(int number)
{
    if (number >= 1){
        return number*multiply(number-1);
    }
    else{
        return 1;
    }
}

DEBUG(("Result is: %d", multiply(6)));

// Bonus: what is the name of this operation?
