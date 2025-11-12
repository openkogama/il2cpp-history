
/* Void OnDisable() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_OnDisable(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = CrossPlatformInputManager::CrossPlatformInputManager_GetButton(pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = (this->fields).Name;
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    CrossPlatformInputManager::CrossPlatformInputManager_SetButtonUp(pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetAxisNegativeState() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_SetAxisNegativeState(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar2->klass->vtable).__unknown_7.methodPtr)
              (pVVar2,pSVar1,(pVVar2->klass->vtable).__unknown_7.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisNeutralState() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_SetAxisNeutralState(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar2->klass->vtable).__unknown_8.methodPtr)
              (pVVar2,pSVar1,(pVVar2->klass->vtable).__unknown_8.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAxisPositiveState() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_SetAxisPositiveState(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar2->klass->vtable).__unknown_6.methodPtr)
              (pVVar2,pSVar1,(pVVar2->klass->vtable).__unknown_6.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetDownState() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_SetDownState(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar2->klass->vtable).__unknown_4.methodPtr)
              (pVVar2,pSVar1,(pVVar2->klass->vtable).__unknown_4.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetUpState() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::ButtonHandler::
     ButtonHandler_SetUpState(ButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).Name;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pVVar2->klass->vtable).__unknown_5.methodPtr)
              (pVVar2,pSVar1,(pVVar2->klass->vtable).__unknown_5.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

