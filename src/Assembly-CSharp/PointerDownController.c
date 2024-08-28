
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_Initialize
               (PointerDownController *this,UnityAction *pointerDownCallback,MethodInfo *method)

{
  ppUVar1 = &(this->fields).pointerDownCallback;
  *ppUVar1 = pointerDownCallback;
  func_?(ppUVar1,pointerDownCallback);
  (this->fields).isInitialized = 1;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_OnPointerDown
               (PointerDownController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  bVar2 = (this->fields).isInitialized;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (bVar2 == 0) {
      return;
    }
    if (eventData == (PointerEventData *)0x0) goto code_?;
    if ((eventData->fields)._button_k__BackingField != 0) {
      return;
    }
  }
  else if (bVar2 == 0) {
    return;
  }
  pUVar3 = (this->fields).pointerDownCallback;
  if (pUVar3 != (UnityAction *)0x0) {
    ppMStack_1 = (pUVar3->fields)._._.method;
    puStack_4 = (pUVar3->fields)._._.method_code;
    (*(pUVar3->fields)._._.invoke_impl)();
    return;
  }
code_?:
  ppMStack_1 = (MVGameControllerBase__Class **)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

