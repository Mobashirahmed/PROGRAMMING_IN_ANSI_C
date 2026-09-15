int main()
{
    // p * = x/y;
    // int p * = x/y;
    // int p *= x/y;
    int x, y, p; 
    // int p *= x/y;
    p *= x/y;
}

/* errors:
    1. unknown type name 'p'
    2. expected identifier or '(' before '=' token
    Giving datatype to the variable 'p' doesn't justify the statement
    3. expected '=', ',', ';', 'asm' or '__attribute__' before '*' token
    4. expected expression before '=' token
    5. 'x' undeclared
    Removing the space between the tokens '*' and '=' justify error no. 4
    6. 'y' undeclared
    7. 'p' undeclared
    Declaring the variables and removing the space between the tokens '*' and '=' resolves all the error */