
/* Void Register() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Register
               (OverrideMaterials *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).overrideMaterials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      OverrideMaterial::OverrideMaterial_Register
                ((OverrideMaterial *)LStack_6._current,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Update
               (OverrideMaterials *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__IO__StreamWriter);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Dumping_override_materials_to_sq);
    func_?(&StringLiteral_Materials_txt);
    cRam_? = '\x01';
  }
  if ((this->fields).dumpToSql == 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Dumping_override_materials_to_sq,(MethodInfo *)0x0);
  str0 = ::StringLiteral__;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).overrideMaterials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffcc,this_00,
                        MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                       );
    RVar5 = pLVar4->_current;
    uStack_1 = 1;
    while( true ) {
      bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                        );
      if (bVar6 == 0) break;
      if (RVar5 == (RegexCharClass_SingleRange)0x0) {
        str1 = (String *)0x0;
      }
      else {
        str1 = (String *)func_?();
      }
      RVar5.First = 0;
      RVar5.Last = 0;
      str0 = mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
               ,in_stack_7);
    uStack_1 = 0xffffffff;
    this_01 = (StreamWriter *)func_?();
    mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_5
              (this_01,StringLiteral_Materials_txt,0,(MethodInfo *)0x0);
    uStack_1 = 4;
    if (this_01 != (StreamWriter *)0x0) {
      (*(code *)(this_01->klass->vtable).WriteLine_1.method)(this_01);
      uStack_1 = 0xffffffff;
      if (this_01 != (StreamWriter *)0x0) {
        func_?(0);
      }
      (this->fields).dumpToSql = 0;
      goto code_?;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* OverrideMaterials() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials__ctor
               (OverrideMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<OverrideMaterial>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<OverrideMaterial>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_OverrideMaterial_ *)
            func_?(TypeInfo__System__Collections__Generic__List<OverrideMaterial>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<OverrideMaterial>__List__);
  (this->fields).overrideMaterials = this_00;
  func_?(&(this->fields).overrideMaterials,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

