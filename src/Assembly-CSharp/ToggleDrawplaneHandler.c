
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleDrawplaneHandler::ToggleDrawplaneHandler_ExecuteToggleState
               (ToggleDrawplaneHandler *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  DrawPlane::DrawPlane_ToggleDrawPlane((MethodInfo *)0x0);
  bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(toggleCallback->fields)._._.invoke_impl)
              ((toggleCallback->fields)._._.method_code,bVar1,(toggleCallback->fields)._._.method);
    pGVar2 = (this->fields).drawPlaneControls;
    if (pGVar2 != (GameObject *)0x0) {
      pGVar2 = (GameObject *)
               mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                         ((Void *)pGVar2,(MethodInfo *)0x0);
      bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ToggleDrawplaneHandler::ToggleDrawplaneHandler_OnEnable
               (ToggleDrawplaneHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).toggleStatHandlerBase;
  bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (this_00 != (ToggleStatHandlerBase *)0x0) {
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState(this_00,bVar1,(MethodInfo *)0x0);
    pGVar2 = (this->fields).drawPlaneControls;
    if (pGVar2 != (GameObject *)0x0) {
      pGVar2 = (GameObject *)
               mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                         ((Void *)pGVar2,(MethodInfo *)0x0);
      bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

