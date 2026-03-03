//1545. Find Kth Bit in Nth Binary String

class Solution {
public:
    char findKthBit(int n, int k) {
        
        // Base case:
        // S1 = "0"
        if (n == 1)
            return '0';

        /*
            Length of Sn = 2^n - 1
            Middle index (1-based) = 2^(n-1)

            Instead of computing full length,
            we directly compute middle:
        */
        int mid = 1 << (n - 1);   // 2^(n-1)

        /*
            Structure of Sn:

            Sn = S(n-1) + "1" + reverse(invert(S(n-1)))

            So positions:
            1 .... mid-1      → left part (S(n-1))
            mid               → always '1'
            mid+1 .... end    → right part
        */

        // Case 1: k is exactly the middle element
        if (k == mid)
            return '1';

        // Case 2: k is in the left half
        if (k < mid)
            return findKthBit(n - 1, k);

        /*
            Case 3: k is in the right half

            Right half is:
            reverse(invert(S(n-1)))

            So two operations happen:
            1) Mirror index
            2) Invert bit
        */

        // Mirror index calculation
        int mirroredIndex = 2 * mid - k;

        // Recursively find the mirrored bit
        char bit = findKthBit(n - 1, mirroredIndex);

        // Invert the bit
        return (bit == '0') ? '1' : '0';
    }
};

class Solution {
public:
    char findKthBit(int n, int k) {
        
        bool flip = false;  // track how many times we need to invert

        while (n > 1) {
            
            int mid = 1 << (n - 1);  // 2^(n-1)

            if (k == mid) {
                // middle element is always '1'
                return flip ? '0' : '1';
            }

            if (k > mid) {
                // move to mirrored index
                k = 2 * mid - k;

                // toggle flip because right half is inverted
                flip = !flip;
            }

            // move one level up
            n--;
        }

        // base case: S1 = "0"
        return flip ? '1' : '0';
    }
};