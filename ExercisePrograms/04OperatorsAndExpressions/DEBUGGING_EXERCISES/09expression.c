int main()
{
    // a = b++ -c*2
    int a, b, c;
    a = b++ -c*2;
}

/* errors:
    1. 'a' undeclared
    2. 'b' undeclared
    3. 'c' undeclared
    4. expected ';' before '}' token
    Declaring the variables and terminating the statement with semi-colon */