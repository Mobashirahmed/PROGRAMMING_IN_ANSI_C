int main()
{
    int x = 10;
    float y = 4.25;
    // x = y%x;
    x = (int)y%x;
}

/* errors:
    1. invalid operands to binary % (have 'float' and 'int')
    This error can be resolved by casting the float operand to int */