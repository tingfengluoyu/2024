#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // ����stdlib.h��ʹ��abs����

int gcd(int a, int b);
int lcm(int a, int b);

struct fraction {
    int numerator, denominator;
};

int main() {
    fraction a, b, he, cha;
    scanf("%d %d", &a.numerator, &a.denominator);
    scanf("%d %d", &b.numerator, &b.denominator);

    he.denominator = lcm(a.denominator, b.denominator);
    cha.denominator = lcm(a.denominator, b.denominator);

    a.numerator *= he.denominator / a.denominator;
    b.numerator *= he.denominator / b.denominator;

    he.numerator = a.numerator + b.numerator;
    cha.numerator = a.numerator - b.numerator;

    // Լ��
    int common_divisor = gcd(abs(he.denominator), abs(he.numerator));
    he.denominator /= common_divisor;
    he.numerator /= common_divisor;

    common_divisor = gcd(abs(cha.denominator), abs(cha.numerator));
    cha.denominator /= common_divisor;
    cha.numerator /= common_divisor;

    // ȷ����ĸΪ����
    he.denominator = abs(he.denominator);
    cha.denominator = abs(cha.denominator);

    // ���������������ȷ������ֻ�����ڷ���ǰ
    if (he.numerator < 0) {
        printf("-");
    }
    printf("%d %d\n", abs(he.numerator), he.denominator);

    if (cha.numerator < 0) {
        printf("-");
    }
    printf("%d %d\n", abs(cha.numerator), cha.denominator);

    return 0;
}

int gcd(int a, int b) {
    a = abs(a); // ȷ��GCD����������Ϊ�Ǹ���
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    a = abs(a); // ȷ��LCM����������Ϊ�Ǹ���
    b = abs(b);
    return (a / gcd(a, b)) * b; // �������
}