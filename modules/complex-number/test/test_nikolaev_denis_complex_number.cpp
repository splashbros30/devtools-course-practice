// Copyright 2021 Denis Nikolaev

#include <gtest/gtest.h>

#include <iostream>

#include <tuple>

#include <cmath>

#include <list>

#include <limits>

#include "include/complex_number.h"

TEST(Nikolaev_Denis_ComplexNumberTest, Can_Use_List) {
    // initialization
    ComplexNumber n1(17.0, 3.0);
    ComplexNumber n2(9.0, 1.0);
    ComplexNumber n3(3.0, 4.0);
    std::list <ComplexNumber> ls;
    ls.push_back(n1);
    ls.push_back(n2);
    ls.push_back(n3);

    ASSERT_EQ(n1, *ls.begin());
}

TEST(Nikolaev_Denis_ComplexNumberTest, Copy_Constructor_And_Operator_Equal) {
    ComplexNumber a(1.3, 2.5);

    ComplexNumber b(a);
    ComplexNumber c = a;

    ASSERT_DOUBLE_EQ(a.getRe(), c.getRe());
    ASSERT_DOUBLE_EQ(a.getIm(), c.getIm());
    ASSERT_DOUBLE_EQ(a.getRe(), b.getRe());
    ASSERT_DOUBLE_EQ(a.getIm(), b.getIm());
}

TEST(Nikolaev_Denis_ComplexNumberTest, Can_Substract) {
    ComplexNumber a(3.0, 5.0);
    ComplexNumber b(2.0, 7.0);
    ComplexNumber c(17.0, 19.0);

    ComplexNumber res1(12.0, 7.0);
    ComplexNumber res2 = c - a - b;

    ASSERT_EQ(res2.getRe(), res1.getRe());
    ASSERT_EQ(res2.getIm(), res1.getIm());
}
