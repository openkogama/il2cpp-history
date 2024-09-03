
/* Int32 <Clone>b__15_0(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup+<>c::MVGroup_c__Clone_b__15_0
                  (MVGroup_c *this,MVWorldObjectClient *w1,MVWorldObjectClient *w2,
                  MethodInfo *method)

{
  if (w1 != (MVWorldObjectClient *)0x0) {
    w1 = (MVWorldObjectClient *)(w1->fields)._.id;
    if (w2 != (MVWorldObjectClient *)0x0) {
      iVar1 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                        ((Int32 *)&w1,(w2->fields)._.id,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* MVGroup+<>c() */

void Assembly-CSharp.dll::MVGroup+<>c::MVGroup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGroup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVGroup____c;
  value = (MVGroup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MVGroup____c->static_fields->__9 = value;
  func_?(TypeInfo__MVGroup____c->static_fields,value);
  return;
}

