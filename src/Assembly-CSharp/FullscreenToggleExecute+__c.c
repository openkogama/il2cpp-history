
/* Void <ExecuteToggleState>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::
     FullscreenToggleExecute_c__ExecuteToggleState_b__3_0
               (FullscreenToggleExecute_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_is_not_supported_in_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Fullscreen_is_not_supported_in_u000A,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Error,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FullscreenToggleExecute+<>c() */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::FullscreenToggleExecute_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullscreenToggleExecute____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FullscreenToggleExecute_c *)FUN_?(TypeInfo__FullscreenToggleExecute____c);
  TypeInfo__FullscreenToggleExecute____c->static_fields->__9 = pFVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__FullscreenToggleExecute____c->static_fields >> 0xc);
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

