
/* Void Update() */

void Assembly-CSharp.dll::DisableInput::DisableInput_Update(DisableInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,CONCAT71((int7)((ulonglong)method >> 8),1),
             (pMVar1->klass->vtable).set_IsSuppressed.method);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >> 0xc)
    ;
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
  }
  return;
}

