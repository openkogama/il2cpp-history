
/* ValueInsert AddFloat(Single) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddFloat
          (ValueInsert *this,float input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = this;
  this_00 = (this->fields).values;
  this = (ValueInsert *)input;
  item = func_?(TypeInfo__System__Single,&this);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,item,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pVVar1 = (ValueInsert *)(*pcVar2)();
  return pVVar1;
}


/* ValueInsert AddInt(Int32) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddInt
          (ValueInsert *this,int32_t input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = this;
  this = (ValueInsert *)input;
  this_00 = (pVVar1->fields).values;
  item = func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,item,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pVVar1 = (ValueInsert *)(*pcVar2)();
  return pVVar1;
}


/* ValueInsert AddString(String) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddString
          (ValueInsert *this,String *input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).values;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)input,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pVVar2 = (ValueInsert *)(*pcVar1)();
  return pVVar2;
}


/* Object[] GetValueParams() */

Object__Array *
Assembly-CSharp.dll::ValueInsert::ValueInsert_GetValueParams(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).values;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    return (Object__Array *)pVVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object__Array *)(*pcVar2)();
  return pOVar3;
}


/* ValueInsert() */

void Assembly-CSharp.dll::ValueInsert::ValueInsert__ctor(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  (this->fields).values = (List_1_System_Object_ *)this_00;
  return;
}

