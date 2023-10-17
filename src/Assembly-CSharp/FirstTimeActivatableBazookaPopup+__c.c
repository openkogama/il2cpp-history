
/* Void <DoShowing>b__7_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c::
     FirstTimeActivatableBazookaPopup_c__DoShowing_b__7_0
               (FirstTimeActivatableBazookaPopup_c *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    ppIStack_1 = (IPlayerInventory__Class **)0x7;
    puStack_2 = (undefined *)0x1;
    pIStack_3 = x;
    func_?(2,TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableBazookaPopup+<>c() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c::
     FirstTimeActivatableBazookaPopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    cRam_? = '\x01';
  }
  value = (FirstTimeActivatableBazookaPopup_c *)
          func_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
  if (value != (FirstTimeActivatableBazookaPopup_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9 = value;
    func_?(TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

