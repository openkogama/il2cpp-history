
/* Void <DoShowing>b__7_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c::
     FirstTimeActivatableBazookaPopup_c__DoShowing_b__7_0
               (FirstTimeActivatableBazookaPopup_c *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(2,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x,1,7);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatableBazookaPopup+<>c() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c::
     FirstTimeActivatableBazookaPopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FirstTimeActivatableBazookaPopup_c *)
           FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
  TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9 = pFVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields >> 0xc)
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

