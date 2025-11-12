
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_Initialize
               (PointerDownController *this,UnityAction *pointerDownCallback,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).pointerDownCallback = pointerDownCallback;
  if (bVar1) {
    (this->fields).isInitialized = 1;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).pointerDownCallback >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).isInitialized = 1;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PointerDownController::PointerDownController_OnPointerDown
               (PointerDownController *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      if (eventData == (PointerEventData *)0x0) goto code_?;
      if ((eventData->fields)._button_k__BackingField != 0) {
        return;
      }
    }
    pUVar1 = (this->fields).pointerDownCallback;
    if (pUVar1 == (UnityAction *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}

