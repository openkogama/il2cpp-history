
/* Void <CreatePlayerList>b__4_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__CreatePlayerList_b__4_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0xc,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <DestroyPlayerList>b__5_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__DestroyPlayerList_b__5_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0xc,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnDestroy>b__6_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0xc,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnDestroy>b__6_1(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_1
               (PlayerListHoldHotkey_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,x,0x12,2);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnDestroy>b__6_2(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_2
               (PlayerListHoldHotkey_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,x,0x12,0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PlayerListHoldHotkey+<>c() */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerListHoldHotkey____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PlayerListHoldHotkey_c *)FUN_?(TypeInfo__PlayerListHoldHotkey____c);
  TypeInfo__PlayerListHoldHotkey____c->static_fields->__9 = pPVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__PlayerListHoldHotkey____c->static_fields >> 0xc);
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

