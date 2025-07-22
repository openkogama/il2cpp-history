
/* Void <OnSpawnRoleRedoObjectLinks>b__10_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu+<>c::
     SpawnRoleLooksEditorMenu_c__OnSpawnRoleRedoObjectLinks_b__10_0
               (SpawnRoleLooksEditorMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Info__);
    func_?(&StringLiteral_As_the_avatar_was_switched_out__);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_As_the_avatar_was_switched_out__,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Info__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SpawnRoleLooksEditorMenu+<>c() */

void Assembly-CSharp.dll::SpawnRoleLooksEditorMenu+<>c::SpawnRoleLooksEditorMenu_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SpawnRoleLooksEditorMenu____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleLooksEditorMenu____c;
  value = (SpawnRoleLooksEditorMenu_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9 = value;
  func_?(TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields,value);
  return;
}

