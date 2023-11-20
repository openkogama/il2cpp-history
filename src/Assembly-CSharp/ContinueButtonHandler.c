
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ContinueButtonHandler::ContinueButtonHandler_OnPointerDown
               (ContinueButtonHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Locking_cursor);
    func_?(&StringLiteral_cursor_lock_pointer_down);
    cRam_? = '\x01';
  }
  if (eventData != (PointerEventData *)0x0) {
    if (((eventData->fields)._button_k__BackingField == 0) && ((this->fields).isMoveOverButton != 0)
       ) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_cursor_lock_pointer_down,(MethodInfo *)0x0);
      if ((this->fields).OnClick != (Action *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Locking_cursor,(MethodInfo *)0x0);
        pAVar1 = (this->fields).OnClick;
        if (pAVar1 == (Action *)0x0) goto code_?;
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

