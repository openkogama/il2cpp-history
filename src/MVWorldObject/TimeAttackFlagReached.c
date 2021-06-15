
/* TimeAttackFlagReached(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TimeAttackFlagReached::TimeAttackFlagReached__ctor
               (TimeAttackFlagReached *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_TimeAttackFlag,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

