
/* TargetAssasinatedGroup(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
               (TargetAssasinatedGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningConditionGroup::WinningConditionGroup__ctor
            ((WinningConditionGroup *)this,parent,id,gameCounterManager,1,1,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

