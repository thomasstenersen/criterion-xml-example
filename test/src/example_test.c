#include <criterion/criterion.h>


Test(example_test, test_fail)
{
    cr_assert_eq(2, 4);
}
