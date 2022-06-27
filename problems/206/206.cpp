#include "headers.h"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode *left=head, *right;
        head = head->next;
        while (head!= NULL) {
            right = head->next;
            head->next = left;
            left = head;
            head = right;
        }
        return left;
    }
};
TEST(206, 206)
{
    Solution s;
    vector<string> v{"a", "b"};
    EXPECT_EQ(s.wordBreak("ab", v), true);
    vector<string> v2{"aaaa", "aaa"};
    EXPECT_EQ(s.wordBreak("aaaaaaa", v2), true);
    vector<string> v3{"a",         "aa",        "aaa",     "aaaa",
                      "aaaaa",     "aaaaaa",    "aaaaaaa", "aaaaaaaa",
                      "aaaaaaaaa", "aaaaaaaaaa"};
    auto astr =
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
        "aa"
        "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
        "aa"
        "aaaaaaa";
    EXPECT_EQ(s.wordBreak(astr, v3), false);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
