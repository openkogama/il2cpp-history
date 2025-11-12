
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_ExecuteToggleState
               (ToggleLogic *this,bool toggleState,UnityAction_1_System_Boolean_ *toggleCallback,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_RenderLogic(this_00,toggleState,(MethodInfo *)0x0);
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(toggleCallback->fields)._._.invoke_impl)
                ((toggleCallback->fields)._._.method_code,toggleState,
                 (toggleCallback->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_Update(ToggleLogic *this,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleStatHandlerBase;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar2 != (MainCameraManager *)0x0) && (pTVar1 != (ToggleStatHandlerBase *)0x0)) {
    bVar3 = (pMVar2->fields).isLogicRendered;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,bVar3,0);
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
    pTVar4 = pTVar1->klass;
    (pTVar1->fields).toggleState = bVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar4->vtable).__unknown.methodPtr)(pTVar1,(pTVar4->vtable).__unknown.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

