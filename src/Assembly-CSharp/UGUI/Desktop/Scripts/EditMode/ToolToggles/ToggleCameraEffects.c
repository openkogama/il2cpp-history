
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::ToolToggles::ToggleCameraEffects::
     ToggleCameraEffects_ExecuteToggleState
               (ToggleCameraEffects *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).ignoreCamEffectCallback = 1;
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  PostProcessingManager::PostProcessingManager_set_IsPostProcessEffectsEnabled
            (toggleState,(MethodInfo *)0x0);
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(toggleCallback->fields)._._.invoke_impl)
              ((toggleCallback->fields)._._.method_code,toggleState,
               (toggleCallback->fields)._._.method);
    (this->fields).ignoreCamEffectCallback = 0;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::ToolToggles::ToggleCameraEffects::
     ToggleCameraEffects_Update(ToggleCameraEffects *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggleStatHandlerBase;
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = FUN_?();
  if (pTVar1 != (ToggleStatHandlerBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,bVar2,0);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Overriding_toggle_state_while_wa);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar1->fields).waitingForToggleCallback != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    pTVar3 = pTVar1->klass;
    (pTVar1->fields).toggleState = bVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar3->vtable).__unknown.methodPtr)(pTVar1,(pTVar3->vtable).__unknown.method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

