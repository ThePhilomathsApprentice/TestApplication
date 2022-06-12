#include "pch.h"
#include "../TestApplication/solution.h"

class SolutionTest : public ::testing::Test {
protected:
    void SetUp() override {
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(1);
    }

    // void TearDown() override {}

    Solution S1;
    std::vector<int> v1;
};

TEST_F(SolutionTest, SolutionTest_SANITY) {
    EXPECT_EQ(3, v1.size());

    std::vector<int> v2 = S1.getRow(2);
    ASSERT_EQ(v1.size(), v2.size()) << "Vectors v1 and v2 are of unequal length.";

    for (int i = 0; i < v2.size(); ++i) {
        EXPECT_EQ(v1[i], v2[i]) << "Vectors v1 and v2 differ at index " << i;
    }

}

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}