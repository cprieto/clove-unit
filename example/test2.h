#include "clove.h"

CLOVE_TEST(BooleanTest) {
    CLOVE_IS_TRUE(1);
}

CLOVE_TEST(IntTest) {
    CLOVE_INT_EQ(2-1, 1);
}

CLOVE_TEST(FloatTest) {
    CLOVE_FLOAT_NE(1.0f, 1.0001f);
    CLOVE_FLOAT_EQ(1.0f, 1.000001f); //Two float are equals if their diff is <= 0.000001f 
}

CLOVE_TEST(StringTest) {
    CLOVE_STRING_NE("123", "1234");
    CLOVE_STRING_EQ("123", "123");

    const char array[] = {'1', '2', '3', '\0'};
    CLOVE_STRING_EQ(array, "123");
}

