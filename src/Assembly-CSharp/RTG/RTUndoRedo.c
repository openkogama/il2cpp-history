
/* Void ClearActions() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_ClearActions
               (RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._actionGroupStack;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    RTUndoRedo_RemoveGroups(this,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
    (this->fields)._stackPointer = -1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_OnValidate
               (RTUndoRedo *this,MethodInfo *method)

{
  iVar1 = (this->fields)._actionLimit;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._actionGroupStack;
  if (pLVar2 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    RTUndoRedo_RemoveGroups(this,0,(pLVar2->fields)._size,(MethodInfo *)0x0);
    (this->fields)._stackPointer = -1;
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    (this->fields)._actionLimit = iVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RecordAction(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_RecordAction
               (RTUndoRedo *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTUndoRedo__ActionGroup);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__Add_RTG__RTUndoRedo__ActionGroup_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  pLVar1 = (this->fields)._actionGroupStack;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    if (((pLVar1->fields)._size != 0) &&
       (iVar2 = (this->fields)._stackPointer, iVar2 < (pLVar1->fields)._size + -1)) {
      iVar2 = iVar2 + 1;
      RTUndoRedo_RemoveGroups(this,iVar2,(pLVar1->fields)._size - iVar2,(MethodInfo *)0x0);
    }
    value = (Object *)func_?((this->fields)._actionGroupStack);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__)
      ;
      func_?(&TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
      cRam_? = '\x01';
    }
    this_01 = TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>;
    this_00 = (Object__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
    pOVar3 = value + 1;
    pOVar3->klass = this_00;
    func_?(pOVar3,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,in_stack_4);
    if ((pOVar3->klass != (Object__Class *)0x0) &&
       (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pOVar3->klass,(Object *)action,
                   MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
                  ), this_01 != (List_1_RTG_IUndoRedoAction___Class *)0x0)) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,value,
                 MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__Add_RTG__RTUndoRedo__ActionGroup_
                );
      pLVar1 = (this->fields)._actionGroupStack;
      if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
        if ((this->fields)._actionLimit < (pLVar1->fields)._size) {
          RTUndoRedo_RemoveGroups(this,0,1,(MethodInfo *)0x0);
        }
        pLVar1 = (this->fields)._actionGroupStack;
        if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
          (this->fields)._stackPointer = (pLVar1->fields)._size + -1;
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Redo(RTUndoRedo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IUndoRedoAction);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields)._isEnabled != 0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields)._actionGroupStack;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this_00->fields)._size != 0) &&
       (iVar7 = (this->fields)._stackPointer, iVar7 != (this_00->fields)._size + -1)) {
      LStack_8._current =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,iVar7 + 1,
                      MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                     );
      this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__RTG__YesNoAnswer);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
      pCVar9 = (this->fields).CanUndoRedo;
      if (pCVar9 != (CanUndoRedoHandler *)0x0) {
        (*(pCVar9->fields)._._.invoke_impl)
                  ((pCVar9->fields)._._.method_code,1,this_02,(pCVar9->fields)._._.method);
      }
      if (this_02 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)
      goto code_?;
      if (*(char *)((int)&(this_02->fields)._._defaultValue_k__BackingField + 1) == '\0') {
        piVar10 = &(this->fields)._stackPointer;
        *piVar10 = *piVar10 + 1;
        if ((LStack_8._current == (RegexCharClass_SingleRange)0x0) ||
           (this_01 = ((Object *)((int)LStack_8._current + 8))->klass,
           this_01 == (Object__Class *)0x0)) goto code_?;
        pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_8,
                             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_01,
                             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                            );
        LStack_12._list = (List_1_System_Object_ *)pLVar11->_list;
        LStack_12._index = pLVar11->_index;
        LStack_12._version = pLVar11->_version;
        LStack_12._current = *(Object **)&pLVar11->_current;
        LStack_8._version = 0;
        uStack_1 = 1;
        LStack_8._current = (RegexCharClass_SingleRange)&LStack_12;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_12,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                            );
          pOVar14 = LStack_12._current;
          if (bVar13 == 0) break;
          pRVar15 = (this->fields).RedoStart;
          if (pRVar15 != (RedoStartHandler *)0x0) {
            (*(pRVar15->fields)._._.invoke_impl)
                      ((pRVar15->fields)._._.method_code,LStack_12._current,
                       (pRVar15->fields)._._.method);
          }
          if ((RegexCharClass_SingleRange)pOVar14 == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          func_?(2,TypeInfo__RTG__IUndoRedoAction,pOVar14);
          pRVar16 = (this->fields).RedoEnd;
          if (pRVar16 != (RedoEndHandler *)0x0) {
            (*(pRVar16->fields)._._.invoke_impl)
                      ((pRVar16->fields)._._.method_code,pOVar14,(pRVar16->fields)._._.method);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_12,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                   ,unaff_EDI);
      }
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void RemoveGroups(Int32, Int32) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_RemoveGroups
               (RTUndoRedo *this,int32_t startIndex,int32_t count,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IUndoRedoAction);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetRange_int__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__RemoveRange_int__int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  pLVar7 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)(this->fields)._actionGroupStack;
  if (pLVar7 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__GetRange
                        (pLVar7,startIndex,count,
                         MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetRange_int__int_
                        );
    pLVar7 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)(this->fields)._actionGroupStack;
    if (pLVar7 != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__RemoveRange
                (pLVar7,startIndex,count,
                 MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__RemoveRange_int__int_
                );
      if (this_01 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        method_01 = (MethodInfo *)&UNK_?;
        pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_9,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetEnumerator__
                           );
        uStack_10 = 0;
        RVar11 = pLVar8->_current;
        pOStack_12 = (Object *)&stack0xffffffac;
        uStack_1 = 0;
        while( true ) {
          uStack_1._0_1_ = 1;
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffac,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__MoveNext__
                            );
          if (bVar13 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (pOStack_12,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if ((RVar11 == (RegexCharClass_SingleRange)0x0) ||
             (this_00 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                         ((int)RVar11 + 8),
             this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          break;
          method_00 = (MethodInfo *)&UNK_?;
          pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffff9c,this_00,
                              MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                             );
          LStack_9._version = 0;
          LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
          LStack_6._index = pLVar8->_index;
          LStack_6._version = pLVar8->_version;
          LStack_6._current = *(Object **)&pLVar8->_current;
          uStack_1._0_1_ = 3;
          LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                              );
            if (bVar13 == 0) break;
            if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
            goto code_?;
            func_?(3,TypeInfo__RTG__IUndoRedoAction,LStack_6._current);
          }
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                     ,method_00);
        }
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Undo(RTUndoRedo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IUndoRedoAction);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                   );
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (((this->fields)._isEnabled == 0) || (index = (this->fields)._stackPointer, index < 0))
  goto code_?;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._actionGroupStack;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    LStack_6._current =
         mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
         RegexCharClass+SingleRange]::
         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                   (this_00,index,
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                   );
    this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__RTG__YesNoAnswer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
    pCVar7 = (this->fields).CanUndoRedo;
    if (pCVar7 != (CanUndoRedoHandler *)0x0) {
      (*(pCVar7->fields)._._.invoke_impl)
                ((pCVar7->fields)._._.method_code,0,this_02,(pCVar7->fields)._._.method);
    }
    if (this_02 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      if (*(char *)((int)&(this_02->fields)._._defaultValue_k__BackingField + 1) == '\0') {
        piVar8 = &(this->fields)._stackPointer;
        *piVar8 = *piVar8 + -1;
        if ((LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
           (this_01 = ((Object *)((int)LStack_6._current + 8))->klass,
           this_01 == (Object__Class *)0x0)) goto code_?;
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_6,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                           );
        LStack_10._list = (List_1_System_Object_ *)pLVar9->_list;
        LStack_10._index = pLVar9->_index;
        LStack_10._version = pLVar9->_version;
        LStack_10._current = *(Object **)&pLVar9->_current;
        LStack_6._version = 0;
        uStack_1 = 1;
        LStack_6._current = (RegexCharClass_SingleRange)&LStack_10;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_10,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                            );
          pOVar12 = LStack_10._current;
          if (bVar11 == 0) break;
          pUVar13 = (this->fields).UndoStart;
          if (pUVar13 != (UndoStartHandler *)0x0) {
            (*(pUVar13->fields)._._.invoke_impl)
                      ((pUVar13->fields)._._.method_code,LStack_10._current,
                       (pUVar13->fields)._._.method);
          }
          if ((RegexCharClass_SingleRange)pOVar12 == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          func_?(1,TypeInfo__RTG__IUndoRedoAction,pOVar12);
          pUVar14 = (this->fields).UndoEnd;
          if (pUVar14 != (UndoEndHandler *)0x0) {
            (*(pUVar14->fields)._._.invoke_impl)
                      ((pUVar14->fields)._._.method_code,pOVar12,(pUVar14->fields)._._.method);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                   ,unaff_EDI);
      }
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Update_SystemCall
               (RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,unaff_ESI);
  if (bVar1 == 0) {
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_Z,(MethodInfo *)0x0);
    if ((bVar1 != 0) &&
       (bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftControl,(MethodInfo *)0x0),
       bVar1 != 0)) goto code_?;
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_Y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    keyCode = KeyCode__Enum_LeftControl;
  }
  else {
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_Z,(MethodInfo *)0x0);
    if (((bVar1 != 0) &&
        (bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftControl,(MethodInfo *)0x0),
        bVar1 != 0)) &&
       (bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftShift,(MethodInfo *)0x0), bVar1 != 0
       )) {
code_?:
      RTUndoRedo_Undo(this,(MethodInfo *)0x0);
      return;
    }
    bVar1 = RTInput::RTInput_WasKeyPressedThisFrame(KeyCode__Enum_Y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    keyCode = KeyCode__Enum_LeftShift;
  }
  bVar1 = RTInput::RTInput_IsKeyPressed(keyCode,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    RTUndoRedo_Redo(this,(MethodInfo *)0x0);
  }
  return;
}


/* RTUndoRedo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo__ctor(RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  (this->fields)._actionLimit = 0x32;
  this_00 = (List_1_RTG_RTUndoRedo_ActionGroup_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__List__);
  ppLVar1 = &(this->fields)._actionGroupStack;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields)._stackPointer = -1;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
  }
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor
            ((Singleton_1_System_Object_ *)this,
             MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__MonoSingleton__);
  return;
}


/* Void add_CanUndoRedo(CanUndoRedoHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_CanUndoRedo
               (RTUndoRedo *this,CanUndoRedoHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CanUndoRedoHandler);
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUndoRedo;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CanUndoRedoHandler__Class *)pDVar2->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CanUndoRedoHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CanUndoRedoHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_RedoEnd(RedoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_RedoEnd
               (RTUndoRedo *this,RedoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RedoEndHandler);
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoEnd;
  a = *ppRVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((RedoEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__RedoEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__RedoEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar5 = (RedoEndHandler *)func_?(ppRVar1,pDVar3,a);
    bVar6 = pRVar5 == a;
    a = pRVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_RedoStart(RedoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_RedoStart
               (RTUndoRedo *this,RedoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RedoStartHandler);
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoStart;
  a = *ppRVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((RedoStartHandler__Class *)pDVar2->klass == TypeInfo__RTG__RedoStartHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__RedoStartHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar5 = (RedoStartHandler *)func_?(ppRVar1,pDVar3,a);
    bVar6 = pRVar5 == a;
    a = pRVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_UndoEnd(UndoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_UndoEnd
               (RTUndoRedo *this,UndoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoEnd;
  a = *ppUVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((UndoEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__UndoEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__UndoEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar5 = (UndoEndHandler *)func_?(ppUVar1,pDVar3,a);
    bVar6 = pUVar5 == a;
    a = pUVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_UndoStart(UndoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_UndoStart
               (RTUndoRedo *this,UndoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UndoStartHandler);
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoStart;
  a = *ppUVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((UndoStartHandler__Class *)pDVar2->klass == TypeInfo__RTG__UndoStartHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__UndoStartHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar5 = (UndoStartHandler *)func_?(ppUVar1,pDVar3,a);
    bVar6 = pUVar5 == a;
    a = pUVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_CanUndoRedo(CanUndoRedoHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_CanUndoRedo
               (RTUndoRedo *this,CanUndoRedoHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CanUndoRedoHandler);
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUndoRedo;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CanUndoRedoHandler__Class *)pDVar2->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CanUndoRedoHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CanUndoRedoHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_RedoEnd(RedoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_RedoEnd
               (RTUndoRedo *this,RedoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RedoEndHandler);
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoEnd;
  source = *ppRVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((RedoEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__RedoEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__RedoEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar5 = (RedoEndHandler *)func_?(ppRVar1,pDVar3,source);
    bVar6 = pRVar5 == source;
    source = pRVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_RedoStart(RedoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_RedoStart
               (RTUndoRedo *this,RedoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RedoStartHandler);
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoStart;
  source = *ppRVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((RedoStartHandler__Class *)pDVar2->klass == TypeInfo__RTG__RedoStartHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__RedoStartHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pRVar5 = (RedoStartHandler *)func_?(ppRVar1,pDVar3,source);
    bVar6 = pRVar5 == source;
    source = pRVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_UndoEnd(UndoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_UndoEnd
               (RTUndoRedo *this,UndoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoEnd;
  source = *ppUVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((UndoEndHandler__Class *)pDVar2->klass == TypeInfo__RTG__UndoEndHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__UndoEndHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar5 = (UndoEndHandler *)func_?(ppUVar1,pDVar3,source);
    bVar6 = pUVar5 == source;
    source = pUVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_UndoStart(UndoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_UndoStart
               (RTUndoRedo *this,UndoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UndoStartHandler);
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoStart;
  source = *ppUVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((UndoStartHandler__Class *)pDVar2->klass == TypeInfo__RTG__UndoStartHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__UndoStartHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar5 = (UndoStartHandler *)func_?(ppUVar1,pDVar3,source);
    bVar6 = pUVar5 == source;
    source = pUVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_ActionLimit(Int32) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_set_ActionLimit
               (RTUndoRedo *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._actionGroupStack;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    RTUndoRedo_RemoveGroups(this,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
    (this->fields)._stackPointer = -1;
    if (value < 2) {
      value = 1;
    }
    (this->fields)._actionLimit = value;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

