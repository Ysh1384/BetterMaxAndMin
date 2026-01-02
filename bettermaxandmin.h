#ifndef BETTER_MAX_MIN
#define BETTER_MAX_MIN
template <typename T>
T max(T num) {
    return num;
}

// 递归逻辑 比较第一个参数和剩余参数的最大值
template <typename T, typename... Args>
T max(T first, Args... rest) {
    T rest_max = bmax(rest...);  // 递归调用,获取剩余参数的最大值
    return (first > rest_max) ? first : rest_max;  // 比较当前参数和剩余参数的最大值
}



// 终止条件 单个参数直接返回
template <typename T>
T min(T num) {
    return num;
}
// 递归逻辑 比较第一个参数和剩余参数的最小值
template <typename T, typename... Args>
T min(T first, Args... rest) {
    T rest_min = bmin(rest...);  // 递归获取剩余参数的最小值
    return (first < rest_min) ? first : rest_min;  // 核心 改为小于号
}
#endif
