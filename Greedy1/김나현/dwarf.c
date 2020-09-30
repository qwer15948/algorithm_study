#include <stdio.h>

int main() {

	int dwarf[9];
	int realDwarf[7];

	for(int i=0;i<9;i++)
		scanf("%d", &dwarf[i]);

	for (int i = 0; i < 3; i++) {
		for (int b = i + 1; b < 4; b++) {
			for (int c = b + 1; c < 5; c++) {
				for (int d = c + 1; d < 6; d++) {
					for (int e = d + 1; e < 7; e++) {
						for (int f = e + 1; f < 8; f++) {
							for (int g = f + 1; g < 9; g++) {
								if (dwarf[i] + dwarf[b] + dwarf[c] + dwarf[d] + dwarf[e] + dwarf[f] + dwarf[g] == 100) {
									printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dwarf[i], dwarf[b], dwarf[c], dwarf[d], dwarf[e], dwarf[f], dwarf[g]);
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}