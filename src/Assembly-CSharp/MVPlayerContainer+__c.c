
/* MVPlayerContainer+<>c() */

void Assembly-CSharp.dll::MVPlayerContainer+<>c::MVPlayerContainer_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPlayerContainer____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVPlayerContainer____c;
  value = (MVPlayerContainer_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MVPlayerContainer____c->static_fields->__9 = value;
  func_?(TypeInfo__MVPlayerContainer____c->static_fields,value);
  return;
}


/* Boolean <get_ActivePlayers>b__28_0(MVPlayer) */

bool Assembly-CSharp.dll::MVPlayerContainer+<>c::MVPlayerContainer_c__get_ActivePlayers_b__28_0
               (MVPlayerContainer_c *this,MVPlayer *mvPlayer,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (mvPlayer != (MVPlayer *)0x0) {
    return (mvPlayer->fields).playerState != 3;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 <get_ActivePlayers>b__28_1(MVPlayer) */

int32_t Assembly-CSharp.dll::MVPlayerContainer+<>c::MVPlayerContainer_c__get_ActivePlayers_b__28_1
                  (MVPlayerContainer_c *this,MVPlayer *mvPlayer,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (mvPlayer != (MVPlayer *)0x0) {
    return (mvPlayer->fields)._ActorNr_k__BackingField;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

