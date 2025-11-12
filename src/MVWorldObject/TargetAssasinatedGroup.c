
/* TargetAssasinatedGroup(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
               (TargetAssasinatedGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningConditionGroup::WinningConditionGroup__ctor
            ((WinningConditionGroup *)this,parent,id,gameCounterManager,1,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),1),
             CONCAT31((int3)((uint)in_stack_2 >> 8),1),(MethodInfo *)0x0);
  return;
}

