#include <stdio.h>

#define MAX 1000010
#define MOD 1000000007

long long fact[MAX];
long long inv_fact[MAX];

long long power(long long a, long long b) {
    long long result = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) result = (result * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

void precompute() {
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    inv_fact[MAX - 1] = power(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 1; i--) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}

long long combination(int n, int k) {
    if (k > n || k < 0) return 0;
    return (((fact[n] * inv_fact[k]) % MOD) * inv_fact[n - k]) % MOD;
}

int main() {
    int itr;
    scanf("%d", &itr);

    precompute();

    for (int i = 0; i < itr; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%lld", combination(n, k));
        if (i != itr - 1) printf("\n");
    }

    return 0;
}
