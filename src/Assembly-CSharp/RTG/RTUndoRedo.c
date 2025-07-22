
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
       ((this->fields)._stackPointer < (pLVar1->fields)._size + -1)) {
      startIndex = (this->fields)._stackPointer + 1;
      RTUndoRedo_RemoveGroups
                (this,startIndex,(((this->fields)._actionGroupStack)->fields)._size - startIndex,
                 (MethodInfo *)0x0);
    }
    pLVar1 = (this->fields)._actionGroupStack;
    this_00 = (RTUndoRedo_ActionGroup *)func_?(TypeInfo__RTG__RTUndoRedo__ActionGroup);
    RTUndoRedo+ActionGroup::RTUndoRedo_ActionGroup__ctor(this_00,action,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)this_00,
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._isEnabled != 0) {
    pLVar7 = (this->fields)._actionGroupStack;
    if (pLVar7 == (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((pLVar7->fields)._size != 0) &&
       ((this->fields)._stackPointer != (pLVar7->fields)._size + -1)) {
      RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields)._actionGroupStack,(this->fields)._stackPointer + 1,
                          MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                         );
      this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__RTG__YesNoAnswer);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
        pCVar10 = (this->fields).CanUndoRedo;
        (*(pCVar10->fields)._._.invoke_impl)
                  ((pCVar10->fields)._._.method_code,1,this_00,(pCVar10->fields)._._.method);
      }
      if (this_00 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)
      goto code_?;
      if (*(char *)((int)&(this_00->fields)._._defaultValue_k__BackingField + 1) == '\0') {
        piVar11 = &(this->fields)._stackPointer;
        *piVar11 = *piVar11 + 1;
        if ((RVar9 == (RegexCharClass_SingleRange)0x0) ||
           (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)((int)RVar9 + 8)
            == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
        pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_13,
                             *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                              ((int)RVar9 + 8),
                             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                            );
        LStack_6._list = (List_1_System_Object_ *)pLVar12->_list;
        LStack_6._index = pLVar12->_index;
        LStack_6._version = pLVar12->_version;
        LStack_6._current = *(Object **)&pLVar12->_current;
        LStack_13._version = 0;
        uStack_1 = 1;
        LStack_13._current = (RegexCharClass_SingleRange)&LStack_6;
        while( true ) {
          bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                            );
          pOVar15 = LStack_6._current;
          if (bVar14 == 0) break;
          if ((this->fields).RedoStart != (RedoStartHandler *)0x0) {
            pRVar16 = (this->fields).RedoStart;
            (*(pRVar16->fields)._._.invoke_impl)
                      ((pRVar16->fields)._._.method_code,LStack_6._current,
                       (pRVar16->fields)._._.method);
          }
          if ((RegexCharClass_SingleRange)pOVar15 == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          func_?(2,TypeInfo__RTG__IUndoRedoAction,pOVar15);
          if ((this->fields).RedoEnd != (RedoEndHandler *)0x0) {
            pRVar17 = (this->fields).RedoEnd;
            (*(pRVar17->fields)._._.invoke_impl)
                      ((pRVar17->fields)._._.method_code,pOVar15,(pRVar17->fields)._._.method);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
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
    this_00 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
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
      if (this_00 !=
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) {
        method_01 = (MethodInfo *)&UNK_?;
        pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_9,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            this_00,
                            MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetEnumerator__
                           );
        uStack_10 = 0;
        LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
        LStack_6._index = pLVar8->_index;
        LStack_6._version = pLVar8->_version;
        LStack_6._current = *(Object **)&pLVar8->_current;
        pLStack_11 = &LStack_6;
        uStack_1 = 0;
        while( true ) {
          uStack_1._0_1_ = 1;
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pLStack_11,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) ||
             (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
               ((int)LStack_6._current + 8) ==
              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) break;
          method_00 = (MethodInfo *)&UNK_?;
          pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffff9c,
                              *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **
                               )((int)LStack_6._current + 8),
                              MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                             );
          LStack_9._version = 0;
          RVar13 = pLVar8->_current;
          uStack_1._0_1_ = 3;
          LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffac;
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffac,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                              );
            if (bVar12 == 0) break;
            if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
            func_?(3,TypeInfo__RTG__IUndoRedoAction,RVar13);
          }
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffac,
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (((this->fields)._isEnabled == 0) || ((this->fields)._stackPointer < 0)) goto code_?;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._actionGroupStack;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields)._stackPointer,
                       MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                      );
    this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__RTG__YesNoAnswer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
    if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
      pCVar8 = (this->fields).CanUndoRedo;
      (*(pCVar8->fields)._._.invoke_impl)
                ((pCVar8->fields)._._.method_code,0,this_01,(pCVar8->fields)._._.method);
    }
    if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      if (*(char *)((int)&(this_01->fields)._._defaultValue_k__BackingField + 1) == '\0') {
        piVar9 = &(this->fields)._stackPointer;
        *piVar9 = *piVar9 + -1;
        if ((RVar7 == (RegexCharClass_SingleRange)0x0) ||
           (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)((int)RVar7 + 8)
            == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
        pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_11,
                             *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                              ((int)RVar7 + 8),
                             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                            );
        LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
        LStack_6._index = pLVar10->_index;
        LStack_6._version = pLVar10->_version;
        LStack_6._current = *(Object **)&pLVar10->_current;
        LStack_11._version = 0;
        uStack_1 = 1;
        LStack_11._current = (RegexCharClass_SingleRange)&LStack_6;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                            );
          pOVar13 = LStack_6._current;
          if (bVar12 == 0) break;
          if ((this->fields).UndoStart != (UndoStartHandler *)0x0) {
            pUVar14 = (this->fields).UndoStart;
            (*(pUVar14->fields)._._.invoke_impl)
                      ((pUVar14->fields)._._.method_code,LStack_6._current,
                       (pUVar14->fields)._._.method);
          }
          if ((RegexCharClass_SingleRange)pOVar13 == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          func_?(1,TypeInfo__RTG__IUndoRedoAction,pOVar13);
          if ((this->fields).UndoEnd != (UndoEndHandler *)0x0) {
            pUVar15 = (this->fields).UndoEnd;
            (*(pUVar15->fields)._._.invoke_impl)
                      ((pUVar15->fields)._._.method_code,pOVar13,(pUVar15->fields)._._.method);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
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
    bVar1 = RTInput::RTInput_IsKeyPressed(KeyCode__Enum_LeftShift,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  RTUndoRedo_Redo(this,(MethodInfo *)0x0);
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
  (this->fields)._actionGroupStack = this_00;
  func_?(&(this->fields)._actionGroupStack,this_00);
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
  a = (this->fields).CanUndoRedo;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CanUndoRedoHandler__Class *)pDVar1->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CanUndoRedoHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CanUndoRedoHandler *)func_?(&(this->fields).CanUndoRedo,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
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
  a = (this->fields).RedoEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RedoEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__RedoEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RedoEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RedoEndHandler *)func_?(&(this->fields).RedoEnd,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
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
  a = (this->fields).RedoStart;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RedoStartHandler__Class *)pDVar1->klass == TypeInfo__RTG__RedoStartHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RedoStartHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RedoStartHandler *)func_?(&(this->fields).RedoStart,pDVar2,a);
    bVar5 = pRVar4 == a;
    a = pRVar4;
    if (bVar5) {
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
  a = (this->fields).UndoEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((UndoEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__UndoEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__UndoEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar4 = (UndoEndHandler *)func_?(&(this->fields).UndoEnd,pDVar2,a);
    bVar5 = pUVar4 == a;
    a = pUVar4;
    if (bVar5) {
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
  a = (this->fields).UndoStart;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((UndoStartHandler__Class *)pDVar1->klass == TypeInfo__RTG__UndoStartHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__UndoStartHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar4 = (UndoStartHandler *)func_?(&(this->fields).UndoStart,pDVar2,a);
    bVar5 = pUVar4 == a;
    a = pUVar4;
    if (bVar5) {
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
  source = (this->fields).CanUndoRedo;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CanUndoRedoHandler__Class *)pDVar1->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CanUndoRedoHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CanUndoRedoHandler *)func_?(&(this->fields).CanUndoRedo,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
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
  source = (this->fields).RedoEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RedoEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__RedoEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RedoEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RedoEndHandler *)func_?(&(this->fields).RedoEnd,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
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
  source = (this->fields).RedoStart;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((RedoStartHandler__Class *)pDVar1->klass == TypeInfo__RTG__RedoStartHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__RedoStartHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pRVar4 = (RedoStartHandler *)func_?(&(this->fields).RedoStart,pDVar2,source);
    bVar5 = pRVar4 == source;
    source = pRVar4;
    if (bVar5) {
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
  source = (this->fields).UndoEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((UndoEndHandler__Class *)pDVar1->klass == TypeInfo__RTG__UndoEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__UndoEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar4 = (UndoEndHandler *)func_?(&(this->fields).UndoEnd,pDVar2,source);
    bVar5 = pUVar4 == source;
    source = pUVar4;
    if (bVar5) {
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
  source = (this->fields).UndoStart;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((UndoStartHandler__Class *)pDVar1->klass == TypeInfo__RTG__UndoStartHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__UndoStartHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar4 = (UndoStartHandler *)func_?(&(this->fields).UndoStart,pDVar2,source);
    bVar5 = pUVar4 == source;
    source = pUVar4;
    if (bVar5) {
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

