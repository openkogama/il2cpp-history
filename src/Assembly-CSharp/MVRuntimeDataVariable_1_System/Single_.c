
/* Single get_Value() */

float Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Single]::
      MVRuntimeDataVariable_1_System_Single__get_Value
                (MVRuntimeDataVariable_1_System_Single_ *this,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    unaff_ESI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    unaff_EDI = **(int **)(method->name + 0x60);
    if ((*(byte *)(unaff_EDI + 0xbe) & 1) == 0) {
      func_?(unaff_EDI);
    }
    if (unaff_ESI != (Object *)0x0) {
      if ((unaff_ESI->klass->_0).element_class == *(Il2CppClass **)(unaff_EDI + 0x20)) {
        pfVar1 = (float *)func_?(unaff_ESI);
        return *pfVar1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Single]::
     MVRuntimeDataVariable_1_System_Single__set_Value
               (MVRuntimeDataVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  iVar1 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  value_00 = (Object *)func_?(iVar1,&value);
  if (this != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              ((MVRuntimeDataVariable *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

