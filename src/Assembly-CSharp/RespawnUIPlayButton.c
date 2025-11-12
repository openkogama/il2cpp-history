
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::RespawnUIPlayButton::RespawnUIPlayButton_OnPointerDown
               (RespawnUIPlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((eventData->fields)._button_k__BackingField != 0) {
    return;
  }
  if ((this->fields).respawnUIController == (DeathUIController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar2 == (MVGameControllerDesktop *)0x0) ||
       (pIVar3 = (pMVar2->fields).lockCursorManager, pIVar3 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar3,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
       (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
      (pGVar6 = (pMVar5->fields).GameEventManager, pGVar6 != (GameEventManager *)0x0)) &&
     (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
     pGVar7 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar7->fields).OnSetRespawnWhenPossible != (Action *)0x0) {
      pAVar8 = (pGVar7->fields).OnSetRespawnWhenPossible;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar8->fields)._._.invoke_impl)
                ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
      return;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

