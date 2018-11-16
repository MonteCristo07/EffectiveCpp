#include <stdio.h>
#include "item02.h"

using namespace EffectiveCpp;

void GamePlayer::print()
{
    printf("Current number of GamePlayer: %d \n", NumTurns);
}

const double CostEstimate::FudgeFactor = 1.5234;
