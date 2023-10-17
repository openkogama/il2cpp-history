
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
  pSVar1 = TM::TM__(StringLiteral_Info__,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (x->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar5 = &(x->klass->vtable).Create_3 + x->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*pVVar5->methodPtr)(x,pVVar5->method,pSVar1);
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
  value = (SpawnRoleLooksEditorMenu_c *)func_?(TypeInfo__SpawnRoleLooksEditorMenu____c);
  if (value != (SpawnRoleLooksEditorMenu_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields->__9 = value;
    func_?(TypeInfo__SpawnRoleLooksEditorMenu____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

