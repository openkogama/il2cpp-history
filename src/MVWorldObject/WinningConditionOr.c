
/* WinningConditionOr(WinningCondition, Int32, GameStatCounterManager, Boolean, GameStatCounterType,
   WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningConditionOr::WinningConditionOr__ctor
               (WinningConditionOr *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

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
  (this->fields)._.winnerConditions = this_00;
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,isBriefingNode,
             gameStatCounterType,winningConditionPresentStyle,(MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionOr::
     WinningConditionOr_winnerCondition_OnWinningConditionChanged
               (WinningConditionOr *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields)._._.OnWinningConditionChanged;
  (this->fields)._._.forfilled = 1;
  (this->fields)._._.instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)e,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}

