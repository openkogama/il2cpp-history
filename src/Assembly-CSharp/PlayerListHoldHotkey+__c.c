
/* Void <CreatePlayerList>b__4_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__CreatePlayerList_b__4_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <DestroyPlayerList>b__5_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__DestroyPlayerList_b__5_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnDestroy>b__6_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_0
               (PlayerListHoldHotkey_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnDestroy>b__6_1(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_1
               (PlayerListHoldHotkey_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    ppIStack_1 = (IShortcutKeyUnRegister__Class **)0x2;
    puStack_2 = (undefined *)0x12;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    return;
  }
  ppIStack_1 = (IShortcutKeyUnRegister__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnDestroy>b__6_2(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__OnDestroy_b__6_2
               (PlayerListHoldHotkey_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    ppIStack_1 = (IShortcutKeyUnRegister__Class **)0x0;
    puStack_2 = (undefined *)0x12;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    return;
  }
  ppIStack_1 = (IShortcutKeyUnRegister__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerListHoldHotkey+<>c() */

void Assembly-CSharp.dll::PlayerListHoldHotkey+<>c::PlayerListHoldHotkey_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerListHoldHotkey____c);
    cRam_? = '\x01';
  }
  value = (PlayerListHoldHotkey_c *)func_?(TypeInfo__PlayerListHoldHotkey____c);
  if (value != (PlayerListHoldHotkey_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__PlayerListHoldHotkey____c->static_fields->__9 = value;
    func_?(TypeInfo__PlayerListHoldHotkey____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

