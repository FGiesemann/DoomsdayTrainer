/* DoomsdayTrainer
 * (c) Florian Giesemann, 2024
 */

#include "doomsday_method/doomsday_method.h"

#include <cmath>

namespace doomsday {

int weekday(int day, int month, int year) {
    int century = extract_century(year);
    int d_c = doomsday_for_century(century);
    int year_in_century = extract_year_in_century(year);
    return -1;
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

} // namespace doomsday
