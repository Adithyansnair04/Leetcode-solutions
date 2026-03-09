class Solution {
public:
    int findPeak(MountainArray &mountainArr) {
        int left = 0;
        int right = mountainArr.length() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                left = mid + 1;
            else
                right = mid;
        }

        return left;
    }

    int binarySearch(MountainArray &mountainArr, int target, int left, int right, bool asc) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = mountainArr.get(mid);

            if (val == target)
                return mid;

            if (asc) {
                if (val < target)
                    left = mid + 1;
                else
                    right = mid - 1;
            } else {
                if (val < target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {

        int peak = findPeak(mountainArr);

        int leftSearch = binarySearch(mountainArr, target, 0, peak, true);
        if (leftSearch != -1)
            return leftSearch;

        return binarySearch(mountainArr, target, peak + 1, mountainArr.length() - 1, false);
    }
};
