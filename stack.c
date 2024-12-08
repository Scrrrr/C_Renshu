void push(int S[], int value)
{
    S[--S[0]] = value;
}

int pop(int S[])
{
    return S[S[0]++];
}

int main()
{
    int S[8];
    S[0] = sizeof(S)/sizeof(S[0]);
    push(S,4);
    push(S,3);
    push(S,8);
    pop(S);
    pop(S);
    push(S,7);
    push(S,1);
    pop(S);
    push(S,99);

    
}