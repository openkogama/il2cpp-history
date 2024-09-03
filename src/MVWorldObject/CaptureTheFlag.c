
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag_GameCountersQuery_OnCounterTypeChanged
               (CaptureTheFlag *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if (e == (OnCounterTypeChangedArgs *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((e->fields).count == (this->fields)._.limit) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__System__EventArgs);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._.forfilled = 1;
    (this->fields)._.instigatorCounterTypeChangedEvent = e;
    func_?(&(this->fields)._.instigatorCounterTypeChangedEvent,e);
    if ((this->fields)._.OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
      pEVar2 = (this->fields)._.OnWinningConditionChanged;
      (*(pEVar2->fields)._._.invoke_impl)
                ((pEVar2->fields)._._.method_code,this,this_00,(pEVar2->fields)._._.method);
    }
  }
  return;
}


/* CaptureTheFlag(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag__ctor
               (CaptureTheFlag *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,1,
             GameStatCounterType__Enum_FlagCaptured,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

