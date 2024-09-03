
/* ValueInsert AddFloat(Single) */

ValueInsert *
Assembly-CSharp.dll::ValueInsert::ValueInsert_AddFloat
          (ValueInsert *this,float input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pVVar1 = this;
  this_00 = (this->fields).values;
  this = (ValueInsert *)input;
  item = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,item,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return pVVar1;
  }
  func_?();
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
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    cRam_? = '\x01';
  }
  pVVar1 = this;
  this = (ValueInsert *)input;
  this_00 = (pVVar1->fields).values;
  item = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,item,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return pVVar1;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).values;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)input,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    return this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pVVar2 = (ValueInsert *)(*pcVar1)();
  return pVVar2;
}


/* Object[] GetValueParams() */

Object__Array *
Assembly-CSharp.dll::ValueInsert::ValueInsert_GetValueParams(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).values;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    return (Object__Array *)pMVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pOVar5 = (Object__Array *)(*pcVar4)();
  return pOVar5;
}


/* ValueInsert() */

void Assembly-CSharp.dll::ValueInsert::ValueInsert__ctor(ValueInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).values = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

