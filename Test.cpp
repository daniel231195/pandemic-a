
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;

#include "doctest.h"
#include <string>
#include <stdexcept>
#include <algorithm>
using namespace std;

TEST_CASE("Board tests") {
    Board board; 
    CHECK(board.is_clean());
    board[City::Delhi] = 1;
    CHECK_FALSE(board.is_clean());
    board[City::Kinshasa] = 12;
    CHECK_FALSE(board.is_clean());
    board[City::Manila] = 15;
    CHECK_FALSE(board.is_clean());
    board[City::Beijing] = 120;
    CHECK_FALSE(board.is_clean());
}

TEST_CASE("Player  tests") {
    Board board; 
    Player p(board,City::Johannesburg);
    CHECK_NOTHROW(p.drive(City::Manila));
    CHECK_NOTHROW(p.build());
    CHECK_NOTHROW(p.fly_charter(City::Mumbai));
    CHECK_NOTHROW(p.fly_direct(City::Sydney));
    CHECK_NOTHROW(p.treat(City::Moscow));
    CHECK_NOTHROW(p.take_card(City::Lima));
    CHECK_NOTHROW(p.role());
    CHECK_NOTHROW(p.remove_cards());
    Medic m(board,City::SanFrancisco);
    CHECK_NOTHROW(m.drive(City::Manila));
    CHECK_NOTHROW(m.build());
    CHECK_NOTHROW(m.fly_charter(City::Mumbai));
    CHECK_NOTHROW(m.fly_direct(City::Sydney));
    CHECK_NOTHROW(m.treat(City::Moscow));
    CHECK_NOTHROW(m.take_card(City::Lima));
    CHECK_NOTHROW(m.role());
    CHECK_NOTHROW(m.remove_cards());
}