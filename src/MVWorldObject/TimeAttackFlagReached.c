
/* TimeAttackFlagReached(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TimeAttackFlagReached::TimeAttackFlagReached__ctor
               (TimeAttackFlagReached *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),8),
             CONCAT31((int3)((uint)in_stack_2 >> 8),1),(MethodInfo *)0x0);
  return;
}

