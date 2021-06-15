
/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ContinueButtonHandler::ContinueButtonHandler_OnPointerDown
               (ContinueButtonHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData != (PointerEventData *)0x0) {
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if ((pHVar1 == (HashSet_1_System_Int32_ *)0x0) && ((this->fields).isMoveOverButton != 0)) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_cursor_lock_pointer_down,(MethodInfo *)0x0);
      if ((this->fields).OnClick != (Action *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Locking_cursor,(MethodInfo *)0x0);
        this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnClick;
        if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0)
        ;
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

