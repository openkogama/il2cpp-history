
/* Void <OnPointerDown>b__4_0(IHandlePointerDownOnContextMenuButton, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuButton+<>c::ContextMenuButton_c__OnPointerDown_b__4_0
               (ContextMenuButton_c *this,IHandlePointerDownOnContextMenuButton *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IHandlePointerDownOnContextMenuButton *)
                &TypeInfo__IHandlePointerDownOnContextMenuButton;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IHandlePointerDownOnContextMenuButton *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__IHandlePointerDownOnContextMenuButton;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IHandlePointerDownOnContextMenuButton *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ContextMenuButton+<>c() */

void Assembly-CSharp.dll::ContextMenuButton+<>c::ContextMenuButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ContextMenuButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuButton____c;
  value = (ContextMenuButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ContextMenuButton____c->static_fields->__9 = value;
  func_?(TypeInfo__ContextMenuButton____c->static_fields,value);
  return;
}

