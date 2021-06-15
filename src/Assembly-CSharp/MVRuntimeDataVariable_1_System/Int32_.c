
/* MVRuntimeDataVariable`1[System.Int32](String, Single, Dictionary`2[System.Object,System.Object],
   Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
     MVRuntimeDataVariable_1_System_Int32___ctor
               (MVRuntimeDataVariable_1_System_Int32_ *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
              ((MVRuntimeDataVariable *)this,variableId,sendInterval,initialRuntimeData,writeThrough
               ,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Value() */

int32_t Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
        MVRuntimeDataVariable_1_System_Int32__get_Value
                  (MVRuntimeDataVariable_1_System_Int32_ *this,MethodInfo *method)

{
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    unaff_ESI = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                          ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    unaff_EDI = **(int **)(method->name + 0x60);
    if ((*(byte *)(unaff_EDI + 0xbe) & 1) == 0) {
      func_?(unaff_EDI);
    }
    if (unaff_ESI != (Object *)0x0) {
      if ((unaff_ESI->klass->_0).element_class == *(Il2CppClass **)(unaff_EDI + 0x20)) {
        piVar1 = (int32_t *)func_?(unaff_ESI);
        return *piVar1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Value(Int32) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[System::Int32]::
     MVRuntimeDataVariable_1_System_Int32__set_Value
               (MVRuntimeDataVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  iVar1 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  value_00 = (Object *)func_?(iVar1,&value);
  if (this != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              ((MVRuntimeDataVariable *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

