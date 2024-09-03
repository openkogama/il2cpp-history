
/* Boolean <UpdateMoveables>b__11_0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MoveableController+<>c::MoveableController_c__UpdateMoveables_b__11_0
               (MoveableController_c *this,KeyValuePair_2_System_Int32_MVMovable_ x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (x.value != (MVMovable *)0x0) {
    return ((x.value)->fields).parentMover == (MVMovable *)0x0;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* MoveableController+<>c() */

void Assembly-CSharp.dll::MoveableController+<>c::MoveableController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MoveableController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MoveableController____c;
  value = (MoveableController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MoveableController____c->static_fields->__9 = value;
  func_?(TypeInfo__MoveableController____c->static_fields,value);
  return;
}

