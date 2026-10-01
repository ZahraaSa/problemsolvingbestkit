// دالة تحسب تكامل كثير الحدود من 0 إلى أي نقطة t
/* 
double evaluate_integral_at(double t) {
    double total_area = 0;
    double current_power = t; // يمثل t^(i+1)
    
    for (int i = 0; i < v.size(); i++) {
    // حساب المساحة تحت المنحنى لكل حد من كثير الحدود   
        total_area += (v[i] * current_power) / (i + 1);
        current_power *= t;
    }
    return total_area;
}

// الدالة الأساسية لحساب المساحة المحصورة بين الحدين a و b
double get_exact_integral(double a, double b) {
    return evaluate_integral_at(b) - evaluate_integral_at(a);
}
*/
/*

// دالة لحساب التكامل العددي باستخدام قاعدة سمبسون
// مودقيقة كتير 

template <typename F>
double quad(double a, double b, F func, const int n_steps = 1000) {
    double h = (b - a) / 2 / n_steps;
    double res = func(a) + func(b);
    rep(i, 1, n_steps * 2) {
        res += func(a + i * h) * (i & 1 ? 4 : 2);
    }
    return res * h / 3;
}

*/