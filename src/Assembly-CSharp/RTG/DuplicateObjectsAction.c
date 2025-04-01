
/* Void Execute() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Execute
               (DuplicateObjectsAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&TypeInfo__RTG__ObjectCloning);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  pTStack_7 = (Transform *)0x0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  pLVar9 = (this->fields)._rootsToDuplicate;
  if (pLVar9 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar9->fields)._size == 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if ((TypeInfo__RTG__ObjectCloning->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectCloning);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__RTG__ObjectCloning);
      cRam_? = '\x01';
    }
    if ((TypeInfo__RTG__ObjectCloning->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectCloning);
    }
    pOVar10 = TypeInfo__RTG__ObjectCloning->static_fields;
    uStack_6._0_4_ = (pOVar10->_defaultConfig).Parent;
    uStack_6._4_4_ = (pOVar10->_defaultConfig).TransformFlags;
    pTStack_7 = (Transform *)(pOVar10->_defaultConfig).Layer;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._rootsToDuplicate;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (RegexCharClass_SingleRange)auStack_11;
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                         );
      uStack_13 = 0;
      LStack_8._list = (List_1_System_Object_ *)pLVar12->_list;
      LStack_8._index = pLVar12->_index;
      LStack_8._version = pLVar12->_version;
      LStack_8._current = *(Object **)&pLVar12->_current;
      uStack_1 = 1;
      pLStack_14 = &LStack_8;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        this_01 = LStack_8._current;
        if (bVar15 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        pTStack_16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)LStack_8._current,(MethodInfo *)0x0);
        if ((RegexCharClass_SingleRange)this_01 == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        method_00 = (RegexCharClass_SingleRange)this_01;
        pTStack_7 = (Transform *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                               ((GameObject *)this_01,(MethodInfo *)0x0);
        if (pTStack_16 == (Transform *)0x0) goto code_?;
        pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTStack_16,(MethodInfo *)0x0);
        uStack_6 = CONCAT44(uStack_6._4_4_,pTVar17);
        func_?();
        pTStack_16 = pTStack_7;
        uStack_18 = uStack_6;
        if ((TypeInfo__RTG__ObjectCloning->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__RTG__ObjectCloning);
        }
        cloneConfig.Layer = (int32_t)pTStack_16;
        cloneConfig.Parent = (Transform *)(undefined4)uStack_18;
        cloneConfig.TransformFlags = uStack_18._4_4_;
        item = ObjectCloning::ObjectCloning_CloneHierarchy
                         ((GameObject *)this_01,cloneConfig,(MethodInfo *)0x0);
        pLVar9 = (this->fields)._duplicateResult;
        if (pLVar9 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar9,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 ,(MethodInfo *)method_00);
      uStack_1 = 0xffffffff;
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      }
      this_02 = (RTUndoRedo *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      if (this_02 != (RTUndoRedo *)0x0) {
        RTUndoRedo::RTUndoRedo_RecordAction(this_02,(IUndoRedoAction *)this,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnRemovedFromUndoRedoStack() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::
     DuplicateObjectsAction_OnRemovedFromUndoRedoStack
               (DuplicateObjectsAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._cleanupOnRemovedFromStack != 0) {
    method_00 = (MethodInfo *)(this->fields)._duplicateResult;
    if (method_00 == (MethodInfo *)0x0) {
code_?:
      uVar7 = func_?();
      func_?(uVar7);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (method_00->name != (char *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_10,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar9->_list;
      LStack_6._index = pLVar9->_index;
      LStack_6._version = pLVar9->_version;
      LStack_6._current = *(Object **)&pLVar9->_current;
      LStack_10._version = 0;
      uStack_1 = 1;
      LStack_10._current = (RegexCharClass_SingleRange)&LStack_6;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        obj = LStack_6._current;
        if (bVar11 == 0) break;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pLVar12 = (this->fields)._duplicateResult;
      if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      length = (pLVar12->fields)._size;
      piVar13 = &(pLVar12->fields)._version;
      *piVar13 = *piVar13 + 1;
      (pLVar12->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar12->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Redo
               (DuplicateObjectsAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields)._duplicateResult != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields)._duplicateResult,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar6->_version;
    this_00 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if (this_00 == (RegexCharClass_SingleRange)0x0) {
        func_?();
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_00,1,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    (this->fields)._cleanupOnRemovedFromStack = 0;
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Undo
               (DuplicateObjectsAction *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields)._duplicateResult != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields)._duplicateResult,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar6->_version;
    this_00 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if (this_00 == (RegexCharClass_SingleRange)0x0) {
        func_?();
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_00,0,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    (this->fields)._cleanupOnRemovedFromStack = 1;
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* DuplicateObjectsAction(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction__ctor
               (DuplicateObjectsAction *this,List_1_UnityEngine_GameObject_ *rootsToDuplicate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  method_00 = (MethodInfo *)&(this->fields)._duplicateResult;
  (this->fields)._duplicateResult = pLVar1;
  func_?(method_00,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pLVar1 = GameObjectEx::GameObjectEx_FilterParentsOnly_1
                     ((IEnumerable_1_UnityEngine_GameObject_ *)rootsToDuplicate,(MethodInfo *)0x0);
  (this->fields)._rootsToDuplicate = pLVar1;
  func_?(&this->fields);
  return;
}


/* List`1[UnityEngine.GameObject] get_DuplicateResult() */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_get_DuplicateResult
          (DuplicateObjectsAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._duplicateResult;
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
            );
  return this_00;
}

