import pytest


@pytest.mark.parametrize("value, expected", [(1, 2), (10, 11), (1000, 1001)])
def test_the_things(value, expected):
    assert value+1 == expected
