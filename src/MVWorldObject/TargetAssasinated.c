
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated_GameCountersQuery_OnCounterTypeChanged
               (TargetAssasinated *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

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
  if (((e->fields).actorNumber == (this->fields).assassinatorActorNumber) &&
     ((e->fields).otherID == (this->fields).assassineeActorNumber)) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__System__EventArgs);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields)._.instigatorCounterTypeChangedEvent;
    (this->fields)._.forfilled = 1;
    *ppOVar2 = e;
    func_?(ppOVar2,e);
    pEVar3 = (this->fields)._.OnWinningConditionChanged;
    if (pEVar3 != (EventHandler_1_EventArgs_ *)0x0) {
      (*(pEVar3->fields)._._.invoke_impl)
                ((pEVar3->fields)._._.method_code,this,this_00,(pEVar3->fields)._._.method);
    }
  }
  return;
}


/* TargetAssasinated(WinningCondition, Int32, GameStatCounterManager, Int32, Int32) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated__ctor
               (TargetAssasinated *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t assassinatorActorNumber,
               int32_t assassineeActorNumber,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,0,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  (this->fields).assassinatorActorNumber = assassinatorActorNumber;
  (this->fields).assassineeActorNumber = assassineeActorNumber;
  return;
}

