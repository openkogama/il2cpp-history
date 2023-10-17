
/* Void <Update>b__9_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight+<>c::
     FirstTimeSystemPopupMovementHeight_c__Update_b__9_0
               (FirstTimeSystemPopupMovementHeight_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x20;
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


/* FirstTimeSystemPopupMovementHeight+<>c() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight+<>c::
     FirstTimeSystemPopupMovementHeight_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeSystemPopupMovementHeight____c);
    cRam_? = '\x01';
  }
  value = (FirstTimeSystemPopupMovementHeight_c *)
          func_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c);
  if (value != (FirstTimeSystemPopupMovementHeight_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9 = value;
    func_?(TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

