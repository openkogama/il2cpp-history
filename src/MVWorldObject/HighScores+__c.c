
/* Int32 <GenerateActorScores>b__7_1(ScoreActorEntry) */

int32_t MVWorldObject.dll::HighScores+<>c::HighScores_c__GenerateActorScores_b__7_1
                  (HighScores_c *this,ScoreActorEntry *x,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (x != (ScoreActorEntry *)0x0) {
    return (x->fields).counter;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* HighScores+<>c() */

void MVWorldObject.dll::HighScores+<>c::HighScores_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HighScores____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HighScores____c;
  value = (HighScores_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__HighScores____c->static_fields->__9 = value;
  func_?(TypeInfo__HighScores____c->static_fields,value);
  return;
}

