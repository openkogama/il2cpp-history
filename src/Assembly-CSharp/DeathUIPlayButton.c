
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::DeathUIPlayButton::DeathUIPlayButton_OnPointerDown
               (DeathUIPlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
      return;
    }
    if ((this->fields).deathUIController != (DeathUIController *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar2 != (ILockCursorManager *)0x0) {
        func_?(3,TypeInfo__ILockCursorManager);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
           this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          FirstTimeChildDestroyedCallback::FirstTimeChildDestroyedCallback_OnDestroy
                    ((FirstTimeChildDestroyedCallback *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

