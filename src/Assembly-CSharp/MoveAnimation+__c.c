
/* Int32 <Awake>b__8_0(KeyFrameCallback, KeyFrameCallback) */

int32_t Assembly-CSharp.dll::MoveAnimation+<>c::MoveAnimation_c__Awake_b__8_0
                  (MoveAnimation_c *this,KeyFrameCallback *a,KeyFrameCallback *b,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((a != (KeyFrameCallback *)0x0) && (b != (KeyFrameCallback *)0x0)) {
    return (a->fields).keyFrameIndex - (b->fields).keyFrameIndex;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* MoveAnimation+<>c() */

void Assembly-CSharp.dll::MoveAnimation+<>c::MoveAnimation_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MoveAnimation____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MoveAnimation____c;
  value = (MoveAnimation_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MoveAnimation____c->static_fields->__9 = value;
  func_?(TypeInfo__MoveAnimation____c->static_fields,value);
  return;
}

