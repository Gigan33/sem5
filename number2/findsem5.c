
int finder(char a[], char b[]) {
    int i, j;
    for(i = 0; a[i] != '\0'; i++) {
        for(j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j])
                return i;
        }
    }
    return -1;
}
