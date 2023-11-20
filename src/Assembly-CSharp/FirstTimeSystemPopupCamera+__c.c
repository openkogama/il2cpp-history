
/* Void <Update>b__8_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera+<>c::
     FirstTimeSystemPopupCamera_c__Update_b__8_0
               (FirstTimeSystemPopupCamera_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* FirstTimeSystemPopupCamera+<>c() */

void Assembly-CSharp.dll::FirstTimeSystemPopupCamera+<>c::FirstTimeSystemPopupCamera_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeSystemPopupCamera____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeSystemPopupCamera____c;
  value = (FirstTimeSystemPopupCamera_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__FirstTimeSystemPopupCamera____c->static_fields->__9 = value;
  func_?(TypeInfo__FirstTimeSystemPopupCamera____c->static_fields,value);
  return;
}

