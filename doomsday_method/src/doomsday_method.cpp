/* DoomsdayTrainer
 * (c) Florian Giesemann, 2024
 */

#include "doomsday_method/doomsday_method.h"

#include <cmath>

namespace doomsday {

int weekday(int day, int month, int year) {
    int doomsday = doomsday_for_year(year);
    int doomsday_in_month = get_doomsday_in_month(month, year);

    int w = (doomsday + (day - doomsday_in_month));
    while (w < 0) {
        w += 7;
    }
    return w % 7;
}

int extract_century(int year) {
    return year / 100;
}

int doomsday_for_century(int century) {
    return (9 - 2 * (century % 4)) % 7;
}

int extract_year_in_century(int year) {
    return year % 100;
}

int doomsday_for_year(int year) {
    int century = extract_century(year);
    int d_c = doomsday_for_century(century);
    int year_in_century = extract_year_in_century(year);
    return (year_in_century + year_in_century / 4 + d_c) % 7;
}

int get_doomsday_in_month(int month, int year) {
    if (month == 1) {
        return is_leap_year(year) ? 4 : 3;
    } else if (month == 2) {
        return is_leap_year(year) ? 29 : 28;
    } else if (month == 3) {
        return 7;
    } else if (month == 5) {
        return 9;
    } else if (month == 7) {
        return 11;
    } else if (month == 9) {
        return 5;
    } else if (month == 11) {
        return 7;
    } else {
        return month;
    }
}

bool is_leap_year(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    } else {
        return year % 4 == 0;
    }
}

bool is_doomsday(int day, int month, int year) {
    int doomsday = get_doomsday_in_month(month, year);
    int o = day - doomsday;
    while (o < 0) {
        o += 7;
    }
    return o % 7 == 0;
}

} // namespace doomsday
