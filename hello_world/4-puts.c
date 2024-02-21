#!/bin/bash
gcc -o puzzle -xc - <<<'#include <stdio.h>
int main() { return puts("Programming is like building a multilingual puzzle"), 0; }'
