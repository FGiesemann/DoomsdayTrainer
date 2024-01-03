/* DoomsdayTrainer
 * (c) Florian Giesemann, 2024
 */

#ifndef DOOMSDAY_METHOD_DOOMSDAY_METHOD_H
#define DOOMSDAY_METHOD_DOOMSDAY_METHOD_H

namespace doomsday {

int weekday(int day, int month, int year);
int extract_century(int year);
int doomsday_for_century(int century);

}

#endif
