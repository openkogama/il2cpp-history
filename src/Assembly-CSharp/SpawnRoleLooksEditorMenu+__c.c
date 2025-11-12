
/* Void <OnSpawnRoleRedoObjectLinks>b__10_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu+<>c::
     SpawnRoleLooksEditorMenu_c__OnSpawnRoleRedoObjectLinks_b__10_0
               (SpawnRoleLooksEditorMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Info__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_As_the_avatar_was_switched_out__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_As_the_avatar_was_switched_out__,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Info__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SpawnRoleLooksEditorMenu+<>c() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu+<>c::SpawnRoleLooksEditorMenu_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SpawnRoleLooksEditorMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SpawnRoleLooksEditorMenu_c *)FUN_?(TypeInfo__SpawnRoleLooksEditorMenu____c);
  TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9 = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields >> 0xc);
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

