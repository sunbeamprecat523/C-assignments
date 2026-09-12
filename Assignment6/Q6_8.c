#include <stdio.h>

void print_below_1000(int n)
{
    const char *one[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    const char *teen[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    const char *ten[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (n >= 100) {
        printf("%s Hundred", one[n / 100]);
        n %= 100;
        if (n) printf(" ");
    }

    if (n >= 20) {
        printf("%s", ten[n / 10]);
        if (n % 10) printf(" %s", one[n % 10]);
    } else if (n >= 10) {
        printf("%s", teen[n - 10]);
    } else if (n > 0) {
        printf("%s", one[n]);
    }
}

void print_words(long long n)
{
    if (n == 0) {
        printf("Zero");
        return;
    }

    if (n < 0) {
        printf("Minus ");
        n = -n;
    }

    if (n >= 1000000000) {
        print_below_1000((int)(n / 1000000000));
        printf(" Billion ");
        n %= 1000000000;
    }
    if (n >= 1000000) {
        print_below_1000((int)(n / 1000000));
        printf(" Million ");
        n %= 1000000;
    }
    if (n >= 1000) {
        print_below_1000((int)(n / 1000));
        printf(" Thousand ");
        n %= 1000;
    }
    if (n > 0) print_below_1000((int)n);
}

int main(void)
{
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);

    print_words(n);
    printf("\n");
    return 0;
}
