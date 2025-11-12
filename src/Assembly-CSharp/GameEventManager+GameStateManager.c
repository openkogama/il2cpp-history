
/* Void NotifyGameStateType(MVGameStateType) */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::
     GameEventManager_GameStateManager_NotifyGameStateType
               (GameEventManager_GameStateManager *this,MVGameStateType__Enum gameState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__set_ValueSet_MV__Common__MVGameStateType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameStateType;
  if (pGVar1 != (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)0x0)
  {
    pAVar2 = (pGVar1->fields)._.OnChange;
    (pGVar1->fields)._.value = gameState;
    if (pAVar2 != (Action_1_MV_Common_MVGameStateType_ *)0x0) {
      pAVar2 = (pGVar1->fields)._.OnChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,gameState,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameEventManager+GameStateManager() */

void Assembly-CSharp.dll::GameEventManager+GameStateManager::GameEventManager_GameStateManager__ctor
               (GameEventManager_GameStateManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)
           FUN_?(
                        TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                        );
  bVar2 = iRam_? != 0;
  (pGVar1->fields)._.value = 0;
  (this->fields).gameStateType = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameStateType >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}

