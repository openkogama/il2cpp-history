
/* Void Indent() */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer_Indent
               (RecursiveTracer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u0009);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (0 < (this->fields)._Level_k__BackingField) {
    do {
      this_00 = (this->fields)._Text_k__BackingField;
      if (this_00 == (StringBuilder *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_00,StringLiteral_u0009,(MethodInfo *)0x0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->fields)._Level_k__BackingField);
  }
  return;
}


/* Void SaveToFile(String) */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
               (RecursiveTracer *this,String *fileName,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__StreamWriter);
    cRam_? = '\x01';
  }
  this_00 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_4(this_00,fileName,(MethodInfo *)0x0);
  uStack_1 = 1;
  pSVar4 = (this->fields)._Text_k__BackingField;
  if (pSVar4 != (StringBuilder *)0x0) {
    (*(code *)(pSVar4->klass->vtable).ToString.method)();
    if (this_00 != (StreamWriter *)0x0) {
      (*(code *)(this_00->klass->vtable).Write_3.method)();
      uStack_1 = 0xffffffff;
      if (this_00 != (StreamWriter *)0x0) {
        func_?();
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* RecursiveTracer() */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor
               (RecursiveTracer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields)._Text_k__BackingField;
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
  (this->fields)._Level_k__BackingField = 0;
  return;
}

