
/* Int32 <GetAvatars>b__5_0(AvatarRepositoryItem) */

int32_t Assembly-CSharp.dll::AvatarRepository+<>c::AvatarRepository_c__GetAvatars_b__5_0
                  (AvatarRepository_c *this,AvatarRepositoryItem *x,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (x != (AvatarRepositoryItem *)0x0) {
    return (x->fields).slotPosition;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* AvatarRepository+<>c() */

void Assembly-CSharp.dll::AvatarRepository+<>c::AvatarRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarRepository____c);
    cRam_? = '\x01';
  }
  value = (AvatarRepository_c *)func_?(TypeInfo__AvatarRepository____c);
  if (value != (AvatarRepository_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__AvatarRepository____c->static_fields->__9 = value;
    func_?(TypeInfo__AvatarRepository____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

