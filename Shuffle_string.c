char* restoreString(char* s, int* indices, int indicesSize) {
    char *s2=malloc(strlen(s) + 1);
    for(int i=0;i<indicesSize;i++){
        s2[indices[i]]=s[i];
    }
    s2[indicesSize]='\0';
    return s2;
}
