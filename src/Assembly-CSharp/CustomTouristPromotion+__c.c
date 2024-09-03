
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
  method_00 = TypeInfo__CustomTouristPromotion____c;
  value = (CustomTouristPromotion_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__CustomTouristPromotion____c->static_fields->__9 = value;
  func_?(TypeInfo__CustomTouristPromotion____c->static_fields,value);
  return;
}

