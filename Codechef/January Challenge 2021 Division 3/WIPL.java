import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception {
        Scanner inp = new Scanner(System.in);
        int t = inp.nextInt();
        while (t-- > 0) {
            int n = inp.nextInt();
            int k = inp.nextInt();
            int[] a = new int[n];

            LinkedHashSet<Integer> hs = new LinkedHashSet<>();
            int sum = 0;
            for (int i = 0; i < n; i++) a[i] = inp.nextInt();
            Arrays.sort(a);
            hs.add(a[n - 1]);
            sum = a[n - 1];
            int p = -1;

            for (int i = n - 2; i >= 0; i--) {
                LinkedHashSet<Integer> hs1 = new LinkedHashSet<>();
                sum += a[i];

                for (Integer h : hs) {
                    int x = (int) h;
                    hs1.add(x);
                    hs1.add(a[i]);
                    hs1.add(x + a[i]);

                    if ((x + a[i] >= k) && (sum - x - a[i] >= k)) {
                        p = n - i;
                        break;
                    }
                    if (a[i] >= k && (sum - a[i]) >= k) {
                        p = n - i;
                        break;
                    }
                }

                if (p != -1) break;
                hs = hs1;
            }
            System.out.println(p);
        }
    }
}