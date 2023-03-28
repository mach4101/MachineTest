int low = 0, high = n - 1, mid = low + high >> 1;

    while (low < high) {
        if (a[mid] >= k) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }