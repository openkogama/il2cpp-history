
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_ExecuteToggleState
               (ToggleLogic *this,bool toggleState,UnityAction_1_System_Boolean_ *toggleCallback,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_00,toggleState,(MethodInfo *)0x0);
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      (*(toggleCallback->fields)._._.invoke_impl)();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_Update(ToggleLogic *this,MethodInfo *method)

{
  this_00 = (this->fields).toggleStatHandlerBase;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) && (this_00 != (ToggleStatHandlerBase *)0x0)) {
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              (this_00,(pMVar1->fields).isLogicRendered,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

