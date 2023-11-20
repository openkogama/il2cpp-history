
/* Void <OnClick>b__6_0(ThemeMenuButton+IClickHandler, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuButton+<>c::ThemeMenuButton_c__OnClick_b__6_0
               (ThemeMenuButton_c *this,ThemeMenuButton_IClickHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pTStack_1 = (ThemeMenuButton_IClickHandler *)&TypeInfo__ThemeMenuButton__IClickHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (ThemeMenuButton_IClickHandler *)0x0) {
    pTStack_1 = handler;
    pTStack_2 = TypeInfo__ThemeMenuButton__IClickHandler;
    uStack_3 = 0;
    func_?();
    return;
  }
  pTStack_1 = (ThemeMenuButton_IClickHandler *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThemeMenuButton+<>c() */

void Assembly-CSharp.dll::ThemeMenuButton+<>c::ThemeMenuButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeMenuButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeMenuButton____c;
  value = (ThemeMenuButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ThemeMenuButton____c->static_fields->__9 = value;
  func_?(TypeInfo__ThemeMenuButton____c->static_fields,value);
  return;
}

