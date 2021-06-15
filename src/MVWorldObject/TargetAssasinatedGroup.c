
/* TargetAssasinatedGroup(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
               (TargetAssasinatedGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_IWinningCondition_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
            );
  (this->fields)._._.winnerConditions = this_00;
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,1,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

