
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::FlagReached::FlagReached_GameCountersQuery_OnCounterTypeChanged
               (FlagReached *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__System__EventArgs);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  ppOVar1 = &(this->fields)._.instigatorCounterTypeChangedEvent;
  (this->fields)._.forfilled = 1;
  *ppOVar1 = e;
  func_?(ppOVar1,e);
  pEVar2 = (this->fields)._.OnWinningConditionChanged;
  if (pEVar2 != (EventHandler_1_EventArgs_ *)0x0) {
    (*(pEVar2->fields)._._.invoke_impl)
              ((pEVar2->fields)._._.method_code,this,this_00,(pEVar2->fields)._._.method);
  }
  return;
}


/* FlagReached(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::FlagReached::FlagReached__ctor
               (FlagReached *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Flag,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

