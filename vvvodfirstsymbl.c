void input(char a[]) {
    int c, i = 0;
    while((c = getchar()) != '\n') {
        a[i++] = c;
    }
    a[i] = '\0';
}
