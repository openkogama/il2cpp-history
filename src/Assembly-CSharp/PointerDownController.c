
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_Initialize
               (PointerDownController *this,UnityAction *pointerDownCallback,MethodInfo *method)

{
  (this->fields).pointerDownCallback = pointerDownCallback;
  (this->fields).isInitialized = 1;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_OnPointerDown
               (PointerDownController *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    if (eventData == (PointerEventData *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pHVar2 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).pointerDownCallback;
      if (this_00 == (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                (this_00,(MethodInfo *)0x0);
    }
  }
  return;
}

