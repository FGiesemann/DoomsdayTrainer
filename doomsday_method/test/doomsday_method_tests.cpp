#include <gtest/gtest.h>
#include <doomsday_method/doomsday_method.h>

TEST(DoomsdayMethod, ExtractCentury) {
    EXPECT_EQ(20, doomsday::extract_century(2024));
    EXPECT_EQ(21, doomsday::extract_century(2145));
    EXPECT_EQ(16, doomsday::extract_century(1633));
    EXPECT_EQ(17, doomsday::extract_century(1700));
    EXPECT_EQ(17, doomsday::extract_century(1748));
    EXPECT_EQ( 9, doomsday::extract_century( 965));
}

TEST(DoomsdayMethod, DoomsdayForCentury) {
    EXPECT_EQ(5, doomsday::doomsday_for_century(18));
    EXPECT_EQ(3, doomsday::doomsday_for_century(19));
    EXPECT_EQ(2, doomsday::doomsday_for_century(20));
    EXPECT_EQ(0, doomsday::doomsday_for_century(21));

    EXPECT_EQ(3, doomsday::doomsday_for_century(23));
    EXPECT_EQ(2, doomsday::doomsday_for_century(16));
    EXPECT_EQ(0, doomsday::doomsday_for_century(17));
}

TEST(DoomsdayMethod, ExtractYearInCentury) {
    EXPECT_EQ(12, doomsday::extract_year_in_century(2012));
    EXPECT_EQ( 5, doomsday::extract_year_in_century(1905));
    EXPECT_EQ(85, doomsday::extract_year_in_century(1985));
    EXPECT_EQ(48, doomsday::extract_year_in_century(1748));
}

TEST(DoomsdayMethod, DoomsdayForYear) {
    EXPECT_EQ(2, doomsday::doomsday_for_year(1600));
    EXPECT_EQ(3, doomsday::doomsday_for_year(1601));
    EXPECT_EQ(4, doomsday::doomsday_for_year(2024));
    EXPECT_EQ(2, doomsday::doomsday_for_year(1933));
    EXPECT_EQ(5, doomsday::doomsday_for_year(1952));
    EXPECT_EQ(1, doomsday::doomsday_for_year(2005));
    EXPECT_EQ(3, doomsday::doomsday_for_year(1900));
    EXPECT_EQ(4, doomsday::doomsday_for_year(1748));
}

TEST(DoomsdayMethod, DoomsdayInMonth) {
    EXPECT_EQ(3, doomsday::get_doomsday_in_month(1, 2023));
    EXPECT_EQ(4, doomsday::get_doomsday_in_month(1, 2024));
    EXPECT_EQ(28, doomsday::get_doomsday_in_month(2, 2023));
    EXPECT_EQ(29, doomsday::get_doomsday_in_month(2, 2024));
    EXPECT_EQ(7, doomsday::get_doomsday_in_month(3, 2023));
    EXPECT_EQ(4, doomsday::get_doomsday_in_month(4, 2024));
    EXPECT_EQ(9, doomsday::get_doomsday_in_month(5, 1984));
    EXPECT_EQ(6, doomsday::get_doomsday_in_month(6, 2845));
    EXPECT_EQ(11, doomsday::get_doomsday_in_month(7, 1964));
    EXPECT_EQ(8, doomsday::get_doomsday_in_month(8, 1836));
    EXPECT_EQ(5, doomsday::get_doomsday_in_month(9, 1971));
    EXPECT_EQ(10, doomsday::get_doomsday_in_month(10, 2164));
    EXPECT_EQ(7, doomsday::get_doomsday_in_month(11, 2012));
    EXPECT_EQ(12, doomsday::get_doomsday_in_month(12, 2024));
}

TEST(DoomsdayMethod, IsLeapYear) {
    EXPECT_TRUE(doomsday::is_leap_year(2024));
    EXPECT_TRUE(doomsday::is_leap_year(1600));
    EXPECT_TRUE(doomsday::is_leap_year(2000));
    EXPECT_TRUE(doomsday::is_leap_year(1748));
    
    EXPECT_FALSE(doomsday::is_leap_year(2100));
    EXPECT_FALSE(doomsday::is_leap_year(1985));
}

TEST(DoomsdayMethod, Weekday) {
    EXPECT_EQ(3, doomsday::weekday( 3,  1, 2024));
    EXPECT_EQ(4, doomsday::weekday(21,  7, 2022));
    EXPECT_EQ(1, doomsday::weekday(18,  4, 2016));
    EXPECT_EQ(5, doomsday::weekday(11,  8, 2000));

    EXPECT_EQ(3, doomsday::weekday( 7,  2, 1748));
    EXPECT_EQ(6, doomsday::weekday(12, 11, 2163));
}

TEST(DoomsdayMethod, IsDoomsday) {
    EXPECT_TRUE(doomsday::is_doomsday( 3, 1, 1985));
    EXPECT_TRUE(doomsday::is_doomsday(10, 1, 1986));
    EXPECT_TRUE(doomsday::is_doomsday(11, 1, 1984));
    EXPECT_TRUE(doomsday::is_doomsday(17, 1, 2011));
    EXPECT_TRUE(doomsday::is_doomsday(21, 2, 1986));
    EXPECT_TRUE(doomsday::is_doomsday(22, 2, 1984));
    EXPECT_TRUE(doomsday::is_doomsday(14, 3, 1956));
    EXPECT_TRUE(doomsday::is_doomsday(21, 3, 1742));
    EXPECT_TRUE(doomsday::is_doomsday(28, 3, 1954));
    EXPECT_TRUE(doomsday::is_doomsday(11, 4, 1845));
    EXPECT_TRUE(doomsday::is_doomsday(18, 4, 1974));
    EXPECT_TRUE(doomsday::is_doomsday(28, 11, 1945));

    EXPECT_FALSE(doomsday::is_doomsday(5, 1, 1984));
    EXPECT_FALSE(doomsday::is_doomsday(13, 1, 2143));
    EXPECT_FALSE(doomsday::is_doomsday(5, 2, 1935));
    EXPECT_FALSE(doomsday::is_doomsday(7, 2, 2004));
    EXPECT_FALSE(doomsday::is_doomsday(26, 11, 2186));
}
