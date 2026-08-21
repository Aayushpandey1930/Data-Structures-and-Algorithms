class Solution {
public:
    using ll = long long;

    ll gcd(ll a, ll b) {
        while (b) {
            ll temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    ll lcm(ll a, ll b) {
        return a / gcd(a, b) * b;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        int n = coins.size();

        ll left = 1;
        ll right = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        auto check = [&](ll x) {
            ll count = 0;

            // Generate all subsets
            for (int mask = 1; mask < (1 << n); mask++) {

                ll common = 1;
                int bits = 0;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        common = lcm(common, coins[i]);
                        bits++;

                        if (common > x)
                            break;
                    }
                }

                if (common > x)
                    continue;

                ll multiples = x / common;

                // Inclusion-Exclusion
                if (bits % 2 == 1)
                    count += multiples;
                else
                    count -= multiples;
            }

            return count >= k;
        };

        // Binary search
        while (left < right) {
            ll mid = left + (right - left) / 2;

            if (check(mid))
                right = mid;
            else
                left = mid + 1;
        }

        return left;
    }
};