
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::AllCollectiblesCollected::
     AllCollectiblesCollected_GameCountersQuery_OnCounterTypeChanged
               (AllCollectiblesCollected *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

{
  pAVar1 = this;
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
      this = (AllCollectiblesCollected *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
      iVar3 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_00,(GameStatCounterType__Enum)this,(e->fields).team,(MethodInfo *)0x0)
      ;
    }
    if ((pAVar1->fields)._.limit <= iVar3) {
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__System__EventArgs);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      ppOVar4 = &(pAVar1->fields)._.instigatorCounterTypeChangedEvent;
      (pAVar1->fields)._.forfilled = 1;
      *ppOVar4 = e;
      func_?(ppOVar4,e);
      pEVar5 = (pAVar1->fields)._.OnWinningConditionChanged;
      if (pEVar5 != (EventHandler_1_EventArgs_ *)0x0) {
        (*(pEVar5->fields)._._.invoke_impl)((pEVar5->fields)._._.method_code,pAVar1);
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


/* AllCollectiblesCollected(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected__ctor
               (AllCollectiblesCollected *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Collectible,
             WinningConditionPresentStyle__Enum_MultipleWinners,(MethodInfo *)0x0);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected_get_HighScores
          (AllCollectiblesCollected *this,MethodInfo *method)

{
  this_00 = (this->fields)._.gameCounterManager;
  this = (AllCollectiblesCollected *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar1 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                       (this_00,(GameStatCounterType__Enum)this,0,
                        WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
    return pHVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pHVar1 = (HighScores *)(*pcVar3)();
  return pHVar1;
}

