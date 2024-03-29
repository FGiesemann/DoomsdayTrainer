/* DoomsdayTrainer
 * (c) Florian Giesemann, 2024
 */

#ifndef DOOMSDAY_METHOD_DOOMSDAY_METHOD_H
#define DOOMSDAY_METHOD_DOOMSDAY_METHOD_H

namespace doomsday {

int weekday(int day, int month, int year);
int extract_century(int year);
int doomsday_for_century(int century);
int extract_year_in_century(int year);
int doomsday_for_year(int year);
int get_doomsday_in_month(int month, int year);
bool is_leap_year(int year);
bool is_doomsday(int day, int month, int year);

}

#endif
