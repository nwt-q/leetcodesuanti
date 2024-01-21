/判断是否为数字字符
int main() {
	char s[20];
	scanf_s("%s", &s);
	for (int i = 0; i < sizeof(s)-1; i++) {
		if (isdigit(s[i]) != 0) {
			printf("%c", s[i]);
		}
	}
}
