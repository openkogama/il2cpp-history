
/* Void <Continue>b__4_0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::CustomTouristPromotion+<>c::CustomTouristPromotion_c__Continue_b__4_0
               (CustomTouristPromotion_c *this,ITouristAdController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (ITouristAdController *)&TypeInfo__ITouristAdController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__ITouristAdController;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (ITouristAdController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CustomTouristPromotion+<>c() */

void Assembly-CSharp.dll::CustomTouristPromotion+<>c::CustomTouristPromotion_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CustomTouristPromotion____c);
    cRam_? = '\x01';
  }
  value = (CustomTouristPromotion_c *)func_?(TypeInfo__CustomTouristPromotion____c);
  if (value != (CustomTouristPromotion_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__CustomTouristPromotion____c->static_fields->__9 = value;
    func_?(TypeInfo__CustomTouristPromotion____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

