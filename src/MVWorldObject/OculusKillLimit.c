
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit_GameCountersQuery_OnCounterTypeChanged
               (OculusKillLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  pOVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  cVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (cVar2 == '\0') {
      iVar3 = (e->fields).count;
    }
    else {
      this_00 = (this->fields)._.gameCounterManager;
      if (this_00 == (GameStatCounterManager *)0x0) goto code_?;
      this = (OculusKillLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
      iVar3 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_00,(GameStatCounterType__Enum)this,(e->fields).team,(MethodInfo *)0x0)
      ;
    }
    if ((pOVar1->fields)._.limit <= iVar3) {
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__System__EventArgs);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      ppOVar4 = &(pOVar1->fields)._.instigatorCounterTypeChangedEvent;
      (pOVar1->fields)._.forfilled = 1;
      *ppOVar4 = e;
      func_?(ppOVar4,e);
      pEVar5 = (pOVar1->fields)._.OnWinningConditionChanged;
      if (pEVar5 != (EventHandler_1_EventArgs_ *)0x0) {
        (*(pEVar5->fields)._._.invoke_impl)((pEVar5->fields)._._.method_code,pOVar1);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* OculusKillLimit(WinningCondition, Int32, GameStatCounterManager, Int32) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit__ctor
               (OculusKillLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_OculusKill,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return;
}

