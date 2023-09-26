/*
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n) {
  if (n <= 0) return NULL;
  for (int i = 0; i < n; i++) {
    *s++ = b;
}
}
