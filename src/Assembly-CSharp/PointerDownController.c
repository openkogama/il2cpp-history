
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_Initialize
               (PointerDownController *this,UnityAction *pointerDownCallback,MethodInfo *method)

{
  (this->fields).pointerDownCallback = pointerDownCallback;
  func_?(&(this->fields).pointerDownCallback,pointerDownCallback);
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
  if ((this->fields).isInitialized != 0) {
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      if (eventData == (PointerEventData *)0x0) goto code_?;
      if ((eventData->fields)._button_k__BackingField != 0) {
        return;
      }
    }
    pUVar2 = (this->fields).pointerDownCallback;
    if (pUVar2 == (UnityAction *)0x0) {
code_?:
      ppMStack_1 = (MVGameControllerBase__Class **)&stack0xfffffffc;
      uVar3 = func_?(&puStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppMStack_1 = (pUVar2->fields)._._.method;
    puStack_6 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
  }
  return;
}

