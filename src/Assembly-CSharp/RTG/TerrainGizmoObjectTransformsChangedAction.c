
/* Void Execute() */

void Assembly-CSharp.dll::RTG::TerrainGizmoObjectTransformsChangedAction::
     TerrainGizmoObjectTransformsChangedAction_Execute
               (TerrainGizmoObjectTransformsChangedAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoObjectTransformsChangedAction::
     TerrainGizmoObjectTransformsChangedAction_Redo
               (TerrainGizmoObjectTransformsChangedAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._postChangeTransformSnapshots;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      LocalTransformSnapshot::LocalTransformSnapshot_Apply
                ((LocalTransformSnapshot *)LStack_8._current,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoObjectTransformsChangedAction::
     TerrainGizmoObjectTransformsChangedAction_Undo
               (TerrainGizmoObjectTransformsChangedAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._preChangeTransformSnapshots;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::LocalTransformSnapshot>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      LocalTransformSnapshot::LocalTransformSnapshot_Apply
                ((LocalTransformSnapshot *)LStack_8._current,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* TerrainGizmoObjectTransformsChangedAction(List`1[RTG.LocalTransformSnapshot],
   List`1[RTG.LocalTransformSnapshot]) */

void Assembly-CSharp.dll::RTG::TerrainGizmoObjectTransformsChangedAction::
     TerrainGizmoObjectTransformsChangedAction__ctor
               (TerrainGizmoObjectTransformsChangedAction *this,
               List_1_RTG_LocalTransformSnapshot_ *preChangeTransformSnapshots,
               List_1_RTG_LocalTransformSnapshot_ *postChangeTransformSnapshots,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
  collection = &this->fields;
  collection->_preChangeTransformSnapshots = pLVar1;
  func_?(collection,pLVar1);
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List__);
  method_00 = (MethodInfo *)&(this->fields)._postChangeTransformSnapshots;
  *(List_1_RTG_LocalTransformSnapshot_ **)method_00 = pLVar1;
  func_?(method_00,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)
           func_?(TypeInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,
             (IEnumerable_1_System_Object_ *)preChangeTransformSnapshots,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
            );
  collection->_preChangeTransformSnapshots = pLVar1;
  func_?();
  pLVar1 = (List_1_RTG_LocalTransformSnapshot_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::LocalTransformSnapshot>__List_System__Collections__Generic__IEnumerable<RTG::LocalTransformSnapshot>_
            );
  (this->fields)._postChangeTransformSnapshots = pLVar1;
  func_?();
  return;
}

