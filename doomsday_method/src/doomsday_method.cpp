/* DoomsdayTrainer
 * (c) Florian Giesemann, 2024
 */

#include "doomsday_method/doomsday_method.h"

#include <cmath>

namespace doomsday {

int weekday(int day, int month, int year) {
    int century = extract_century(year);
    return -1;
}

int extract_century(int year) {
    return year / 100;
}

} // namespace doomsday
