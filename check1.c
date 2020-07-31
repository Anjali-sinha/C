struct my_struct;{
    int i=7;
    float f=999.99;
}var;

int main()
{
    var.i=5;
    printf("%d%.2f",var.i,var.f)
    return(0);
}
