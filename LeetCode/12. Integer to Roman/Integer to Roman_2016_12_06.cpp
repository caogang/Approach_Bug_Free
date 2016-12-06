string intToRoman(int num) {
	int Num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string Roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	string ret = "";
	int times = 0;
	while (num > 0) {
		times = num / Num[i];
		num %= Num[i];
		while (times--) {
			ret += Roman[i];
		}
		i++;
	}
	return ret;
}