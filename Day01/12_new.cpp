#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	���� �Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�
	-> C ��Ÿ��
*/
int main() {

	int size;
	int* p;
	printf("ũ�� �Է� > ");
	scanf_s("%d", &size);

	p = (int*)malloc(size * sizeof(int));

	//printf("%d���� ���� �Է� >", size);
	for (int i = 0; i < size; i++) {
		printf("���� %d: ", i + 1);
		scanf_s("%d", &p[i]);  // Input each number into the array
	}

	// Print the entered values
	printf("�Էµ� ����: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);

	return 0;
}