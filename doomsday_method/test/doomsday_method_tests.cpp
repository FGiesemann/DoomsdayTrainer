#include <gtest/gtest.h>
#include <doomsday_method/doomsday_method.h>

TEST(DoomsdayMethod, Weekday) {
    EXPECT_EQ(3, doomsday::weekday( 3,  1, 2024));
    EXPECT_EQ(4, doomsday::weekday(21,  7, 2022));
    EXPECT_EQ(1, doomsday::weekday(18,  4, 2016));
    EXPECT_EQ(5, doomsday::weekday(11,  8, 2000));

    EXPECT_EQ(0, doomsday::weekday( 7,  2, 1748));
    EXPECT_EQ(6, doomsday::weekday(12, 11, 2163));
}
