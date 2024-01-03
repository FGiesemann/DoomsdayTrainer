#include <gtest/gtest.h>
#include <doomsday_method/doomsday_method.h>

TEST(DoomsdayMethod, ExtractCentury) {
    EXPECT_EQ(20, doomsday::extract_century(2024));
    EXPECT_EQ(21, doomsday::extract_century(2145));
    EXPECT_EQ(16, doomsday::extract_century(1633));
    EXPECT_EQ(17, doomsday::extract_century(1700));
    EXPECT_EQ( 9, doomsday::extract_century( 965));
}

TEST(DoomsdayMethod, DoomsdayForCentury) {
    EXPECT_EQ(5, doomsday::doomsday_for_century(18));
    EXPECT_EQ(3, doomsday::doomsday_for_century(19));
    EXPECT_EQ(2, doomsday::doomsday_for_century(20));
    EXPECT_EQ(0, doomsday::doomsday_for_century(21));

    EXPECT_EQ(3, doomsday::doomsday_for_century(23));
    EXPECT_EQ(2, doomsday::doomsday_for_century(16));
}

TEST(DoomsdayMethod, ExtractYearInCentury) {
    EXPECT_EQ(12, doomsday::extract_year_in_century(2012));
    EXPECT_EQ( 5, doomsday::extract_year_in_century(1905));
    EXPECT_EQ(85, doomsday::extract_year_in_century(1985));
}

TEST(DoomsdayMethod, Weekday) {
    EXPECT_EQ(3, doomsday::weekday( 3,  1, 2024));
    EXPECT_EQ(4, doomsday::weekday(21,  7, 2022));
    EXPECT_EQ(1, doomsday::weekday(18,  4, 2016));
    EXPECT_EQ(5, doomsday::weekday(11,  8, 2000));

    EXPECT_EQ(0, doomsday::weekday( 7,  2, 1748));
    EXPECT_EQ(6, doomsday::weekday(12, 11, 2163));
}
