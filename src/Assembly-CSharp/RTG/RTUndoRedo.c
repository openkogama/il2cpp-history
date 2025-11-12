
/* Void ClearActions() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_ClearActions
               (RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._actionGroupStack;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    RTUndoRedo_RemoveGroups(this,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
    (this->fields)._stackPointer = -1;
    return;
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                 );
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RecordAction(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_RecordAction
               (RTUndoRedo *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTUndoRedo__ActionGroup);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__Add_RTG__RTUndoRedo__ActionGroup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled != 0) {
    pLVar1 = (this->fields)._actionGroupStack;
    if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
      if (((pLVar1->fields)._size != 0) &&
         ((this->fields)._stackPointer < (pLVar1->fields)._size + -1)) {
        startIndex = (this->fields)._stackPointer + 1;
        RTUndoRedo_RemoveGroups
                  (this,startIndex,(pLVar1->fields)._size - startIndex,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields)._actionGroupStack;
      item = (Object *)FUN_?(TypeInfo__RTG__RTUndoRedo__ActionGroup);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar2 = (Object__Class *)
                FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar2,
                 MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
      bVar3 = iRam_? != 0;
      item[1].klass = pOVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)(item + 1) >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pMVar8 = 
      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
      ;
      pOVar2 = item[1].klass;
      if (pOVar2 != (Object__Class *)0x0) {
        piVar9 = (int32_t *)((longlong)&(pOVar2->_0).namespaze + 4);
        *piVar9 = *piVar9 + 1;
        pOVar10 = ((List_1_System_Object___Fields *)&(pOVar2->_0).name)->_items;
        if (pOVar10 != (Object__Array *)0x0) {
          uVar4 = *(uint *)&(pOVar2->_0).namespaze;
          if (uVar4 < (uint)pOVar10->max_length) {
            *(uint *)&(pOVar2->_0).namespaze = uVar4 + 1;
            FUN_?(pOVar10,(longlong)(int)uVar4,action);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pOVar2,(Object *)action,
                       pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = 
          MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__Add_RTG__RTUndoRedo__ActionGroup_
          ;
          if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
            piVar9 = &(pLVar1->fields)._version;
            *piVar9 = *piVar9 + 1;
            pRVar11 = (pLVar1->fields)._items;
            if (pRVar11 != (RTUndoRedo_ActionGroup__Array *)0x0) {
              uVar4 = (pLVar1->fields)._size;
              if (uVar4 < (uint)pRVar11->max_length) {
                (pLVar1->fields)._size = uVar4 + 1;
                FUN_?(pRVar11,(longlong)(int)uVar4,item);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)pLVar1,item,
                           pMVar8->klass->rgctx_data[0xe].method);
              }
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
        }
      }
    }
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Redo(RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IUndoRedoAction);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  pLVar1 = (this->fields)._actionGroupStack;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    if ((this->fields)._stackPointer == (pLVar1->fields)._size + -1) {
      return;
    }
    iVar2 = (this->fields)._stackPointer;
    if ((uint)(pLVar1->fields)._size <= iVar2 + 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pRVar4 = (pLVar1->fields)._items;
    if (pRVar4 != (RTUndoRedo_ActionGroup__Array *)0x0) {
      if ((uint)pRVar4->max_length <= iVar2 + 1U) {
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pRVar5 = pRVar4->vector[(longlong)iVar2 + 1];
      lVar6 = FUN_?();
      if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
        pCVar7 = (this->fields).CanUndoRedo;
        (*(pCVar7->fields)._._.invoke_impl)
                  ((pCVar7->fields)._._.method_code,1,lVar6,(pCVar7->fields)._._.method);
      }
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x11) != '\0') {
          return;
        }
        piVar8 = &(this->fields)._stackPointer;
        *piVar8 = *piVar8 + 1;
        if ((pRVar5 != (RTUndoRedo_ActionGroup *)0x0) &&
           (LStack_9._list = (List_1_System_Object_ *)(pRVar5->fields).Actions,
           LStack_9._list != (List_1_System_Object_ *)0x0)) {
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&uStack_11 >> 0xc);
            puVar12 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar13 = *puVar12;
              LOCK();
              uVar14 = *puVar12;
              if (uVar13 == uVar14) {
                *puVar12 = uVar13 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (uVar13 != uVar14);
          }
          pLStack_15 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)((LStack_9._list)->fields)._version << 0x20);
          uStack_16 = 0;
          LStack_9._8_8_ = pLStack_15;
          LStack_9._current = (Object *)0x0;
          uStack_11 = 0;
          pLStack_15 = &LStack_9;
          while( true ) {
            bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_9,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                               );
            pOVar18 = LStack_9._current;
            if (bVar17 == 0) {
              return;
            }
            if ((this->fields).RedoStart != (RedoStartHandler *)0x0) {
              pRVar19 = (this->fields).RedoStart;
              (*(pRVar19->fields)._._.invoke_impl)
                        ((pRVar19->fields)._._.method_code,LStack_9._current,
                         (pRVar19->fields)._._.method);
            }
            if (pOVar18 == (Object *)0x0) break;
            FUN_?(2,TypeInfo__RTG__IUndoRedoAction,pOVar18);
            if ((this->fields).RedoEnd != (RedoEndHandler *)0x0) {
              pRVar20 = (this->fields).RedoEnd;
              (*(pRVar20->fields)._._.invoke_impl)
                        ((pRVar20->fields)._._.method_code,pOVar18,(pRVar20->fields)._._.method);
            }
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveGroups(Int32, Int32) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_RemoveGroups
               (RTUndoRedo *this,int32_t startIndex,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IUndoRedoAction);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetRange_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetRange_int__int_;
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  pLVar3 = (this->fields)._actionGroupStack;
  if (pLVar3 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    if (startIndex < 0) {
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowIndexArgumentOutOfRange_NeedNonNegNumException((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (count < 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                (ExceptionArgument__Enum_count,
                 ExceptionResource__Enum_ArgumentOutOfRange_NeedNonNegNum,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pLVar3->fields)._size - startIndex < count) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentException
                (ExceptionResource__Enum_Argument_InvalidOffLen,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar5 = MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__GetRange_int__int_
             ->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)FUN_?(pvVar5);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (this_01,count,pMVar1->klass->rgctx_data[0x26].method);
    if (this_01 !=
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) {
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar3->fields)._items,startIndex,(Array *)(this_01->fields)._items,0,
                 count,(MethodInfo *)0x0);
      (this_01->fields)._size = count;
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)(this->fields)._actionGroupStack;
      if (this_00 !=
          (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
        RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
        List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__RemoveRange
                  (this_00,startIndex,count,
                   MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__RemoveRange_int__int_
                  );
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
          lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(this_01->fields)._version << 0x20);
        uStack_13 = 0;
        LStack_14._8_8_ = pLStack_12;
        LStack_14._current = (Object *)0x0;
        uStack_7 = 0;
        pLStack_12 = &LStack_14;
        LStack_14._list = (List_1_System_Object_ *)this_01;
        while( true ) {
          bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_14,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::RTUndoRedo::ActionGroup>__MoveNext__
                            );
          if (bVar15 == 0) {
            return;
          }
          if (LStack_14._current == (Object *)0x0) break;
          pOVar16 = LStack_14._current[1].klass;
          if (pOVar16 == (Object__Class *)0x0) {
code_?:
            FUN_?();
            break;
          }
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&pOStack_17 >> 0xc);
            lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          lStack_18 = (ulonglong)*(uint *)((longlong)&(pOVar16->_0).namespaze + 4) << 0x20;
          uStack_19 = 0;
          LStack_2._index = (undefined4)lStack_18;
          LStack_2._version = lStack_18._4_4_;
          LStack_2._current = (Object *)0x0;
          uStack_20 = 0;
          pLStack_21 = &LStack_2;
          pOStack_17 = pOVar16;
          LStack_2._list = (List_1_System_Object_ *)pOVar16;
          while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_2,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                   ), bVar15 != 0) {
            if (LStack_2._current == (Object *)0x0) {
              FUN_?();
              FUN_?();
              goto code_?;
            }
            FUN_?(3,TypeInfo__RTG__IUndoRedoAction);
          }
        }
        FUN_?();
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Undo(RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IUndoRedoAction);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return;
  }
  if ((this->fields)._stackPointer < 0) {
    return;
  }
  pLVar1 = (this->fields)._actionGroupStack;
  uVar2 = (this->fields)._stackPointer;
  if (pLVar1 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pRVar4 = (pLVar1->fields)._items;
    if (pRVar4 != (RTUndoRedo_ActionGroup__Array *)0x0) {
      if ((uint)pRVar4->max_length <= uVar2) {
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pRVar5 = pRVar4->vector[uVar2];
      lVar6 = FUN_?();
      if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
        pCVar7 = (this->fields).CanUndoRedo;
        (*(pCVar7->fields)._._.invoke_impl)
                  ((pCVar7->fields)._._.method_code,0,lVar6,(pCVar7->fields)._._.method);
      }
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x11) == '\0') {
          piVar8 = &(this->fields)._stackPointer;
          *piVar8 = *piVar8 + -1;
          if ((pRVar5 == (RTUndoRedo_ActionGroup *)0x0) ||
             (LStack_9._list = (List_1_System_Object_ *)(pRVar5->fields).Actions,
             LStack_9._list == (List_1_System_Object_ *)0x0)) goto code_?;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&uStack_10 >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
          pLStack_14 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)((LStack_9._list)->fields)._version << 0x20);
          uStack_15 = 0;
          LStack_9._8_8_ = pLStack_14;
          LStack_9._current = (Object *)0x0;
          uStack_10 = 0;
          pLStack_14 = &LStack_9;
          while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    (&LStack_9,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                    ), pOVar17 = LStack_9._current, bVar16 != 0) {
            if ((this->fields).UndoStart != (UndoStartHandler *)0x0) {
              pUVar18 = (this->fields).UndoStart;
              (*(pUVar18->fields)._._.invoke_impl)
                        ((pUVar18->fields)._._.method_code,LStack_9._current,
                         (pUVar18->fields)._._.method);
            }
            if (pOVar17 == (Object *)0x0) goto code_?;
            FUN_?(1,TypeInfo__RTG__IUndoRedoAction,pOVar17);
            if ((this->fields).UndoEnd != (UndoEndHandler *)0x0) {
              pUVar19 = (this->fields).UndoEnd;
              (*(pUVar19->fields)._._.invoke_impl)
                        ((pUVar19->fields)._._.method_code,pOVar17,(pUVar19->fields)._._.method);
            }
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_Update_SystemCall
               (RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar1 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar1 = (code *)FUN_?(&UNK_?);
      if (pcVar1 == (code *)0x0) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x7a);
    if (cVar3 != '\0') {
      bVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                         (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__RTG__IUndoRedoAction);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__RTG__YesNoAnswer);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields)._isEnabled == 0) {
          return;
        }
        if ((this->fields)._stackPointer < 0) {
          return;
        }
        pLVar5 = (this->fields)._actionGroupStack;
        uVar6 = (this->fields)._stackPointer;
        if (pLVar5 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
          if ((uint)(pLVar5->fields)._size <= uVar6) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pRVar7 = (pLVar5->fields)._items;
          if (pRVar7 != (RTUndoRedo_ActionGroup__Array *)0x0) {
            if ((uint)pRVar7->max_length <= uVar6) {
              FUN_?();
code_?:
              FUN_?();
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pRVar8 = pRVar7->vector[uVar6];
            lVar9 = FUN_?();
            if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
              pCVar10 = (this->fields).CanUndoRedo;
              (*(pCVar10->fields)._._.invoke_impl)
                        ((pCVar10->fields)._._.method_code,0,lVar9,(pCVar10->fields)._._.method);
            }
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x11) == '\0') {
                piVar11 = &(this->fields)._stackPointer;
                *piVar11 = *piVar11 + -1;
                if ((pRVar8 == (RTUndoRedo_ActionGroup *)0x0) ||
                   (LStack_12._list = (List_1_System_Object_ *)(pRVar8->fields).Actions,
                   LStack_12._list == (List_1_System_Object_ *)0x0)) goto code_?;
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)&uStack_13 >> 0xc);
                  puVar14 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar15 = *puVar14;
                    LOCK();
                    uVar16 = *puVar14;
                    if (uVar15 == uVar16) {
                      *puVar14 = uVar15 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar15 != uVar16);
                }
                pLStack_17 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)(uint)((LStack_12._list)->fields)._version << 0x20);
                puStack_18 = (undefined *)0x0;
                LStack_12._8_8_ = pLStack_17;
                LStack_12._current = (Object *)0x0;
                uStack_13 = 0;
                pLStack_17 = &LStack_12;
                while (bVar4 = mscorlib.dll::System::Collections::Generic::
                                List`1[T]+Enumerator[System::Object]::
                                List_1_T_Enumerator_System_Object__MoveNext
                                          (&LStack_12,
                                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                          ), pOVar19 = LStack_12._current, bVar4 != 0) {
                  if ((this->fields).UndoStart != (UndoStartHandler *)0x0) {
                    pUVar20 = (this->fields).UndoStart;
                    (*(pUVar20->fields)._._.invoke_impl)
                              ((pUVar20->fields)._._.method_code,LStack_12._current,
                               (pUVar20->fields)._._.method);
                  }
                  if (pOVar19 == (Object *)0x0) goto code_?;
                  FUN_?(1,TypeInfo__RTG__IUndoRedoAction,pOVar19);
                  if ((this->fields).UndoEnd != (UndoEndHandler *)0x0) {
                    pUVar21 = (this->fields).UndoEnd;
                    (*(pUVar21->fields)._._.invoke_impl)
                              ((pUVar21->fields)._._.method_code,pOVar19,
                               (pUVar21->fields)._._.method);
                  }
                }
              }
              return;
            }
          }
        }
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pcVar1 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar1 = (code *)FUN_?(&UNK_?);
      if (pcVar1 == (code *)0x0) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x79);
    if (cVar3 != '\0') {
      bVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                         (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__Dispose__
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__RTG__IUndoRedoAction);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__GetEnumerator__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__RTG__YesNoAnswer);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields)._isEnabled == 0) {
          return;
        }
        pLVar5 = (this->fields)._actionGroupStack;
        if (pLVar5 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
          if ((pLVar5->fields)._size == 0) {
            return;
          }
          if ((this->fields)._stackPointer == (pLVar5->fields)._size + -1) {
            return;
          }
          iVar22 = (this->fields)._stackPointer;
          if ((uint)(pLVar5->fields)._size <= iVar22 + 1U) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pRVar7 = (pLVar5->fields)._items;
          if (pRVar7 != (RTUndoRedo_ActionGroup__Array *)0x0) {
            if ((uint)pRVar7->max_length <= iVar22 + 1U) {
              FUN_?();
code_?:
              FUN_?();
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pRVar8 = pRVar7->vector[(longlong)iVar22 + 1];
            lVar9 = FUN_?();
            if ((this->fields).CanUndoRedo != (CanUndoRedoHandler *)0x0) {
              pCVar10 = (this->fields).CanUndoRedo;
              (*(pCVar10->fields)._._.invoke_impl)
                        ((pCVar10->fields)._._.method_code,1,lVar9,(pCVar10->fields)._._.method);
            }
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x11) != '\0') {
                return;
              }
              piVar11 = &(this->fields)._stackPointer;
              *piVar11 = *piVar11 + 1;
              if ((pRVar8 != (RTUndoRedo_ActionGroup *)0x0) &&
                 (LStack_12._list = (List_1_System_Object_ *)(pRVar8->fields).Actions,
                 LStack_12._list != (List_1_System_Object_ *)0x0)) {
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)&uStack_13 >> 0xc);
                  puVar14 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar15 = *puVar14;
                    LOCK();
                    uVar16 = *puVar14;
                    if (uVar15 == uVar16) {
                      *puVar14 = uVar15 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar15 != uVar16);
                }
                pLStack_17 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)(uint)((LStack_12._list)->fields)._version << 0x20);
                puStack_18 = (undefined *)0x0;
                LStack_12._8_8_ = pLStack_17;
                LStack_12._current = (Object *)0x0;
                uStack_13 = 0;
                pLStack_17 = &LStack_12;
                while( true ) {
                  bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     (&LStack_12,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IUndoRedoAction>__MoveNext__
                                     );
                  pOVar19 = LStack_12._current;
                  if (bVar4 == 0) {
                    return;
                  }
                  if ((this->fields).RedoStart != (RedoStartHandler *)0x0) {
                    pRVar23 = (this->fields).RedoStart;
                    (*(pRVar23->fields)._._.invoke_impl)
                              ((pRVar23->fields)._._.method_code,LStack_12._current,
                               (pRVar23->fields)._._.method);
                  }
                  if (pOVar19 == (Object *)0x0) break;
                  FUN_?(2,TypeInfo__RTG__IUndoRedoAction,pOVar19);
                  if ((this->fields).RedoEnd != (RedoEndHandler *)0x0) {
                    pRVar24 = (this->fields).RedoEnd;
                    (*(pRVar24->fields)._._.invoke_impl)
                              ((pRVar24->fields)._._.method_code,pOVar19,
                               (pRVar24->fields)._._.method);
                  }
                }
                goto code_?;
              }
            }
          }
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}


/* RTUndoRedo() */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo__ctor(RTUndoRedo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._isEnabled = 1;
  (this->fields)._actionLimit = 0x32;
  this_00 = (List_1_RTG_RTUndoRedo_ActionGroup_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._actionGroupStack = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._actionGroupStack >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields)._stackPointer = -1;
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Void add_CanUndoRedo(CanUndoRedoHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_CanUndoRedo
               (RTUndoRedo *this,CanUndoRedoHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CanUndoRedoHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUndoRedo;
  a = (this->fields).CanUndoRedo;
  do {
    pCVar2 = (CanUndoRedoHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CanUndoRedoHandler *)0x0;
    if (pCVar2 != (CanUndoRedoHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CanUndoRedoHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_RedoEnd(RedoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_RedoEnd
               (RTUndoRedo *this,RedoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RedoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoEnd;
  a = (this->fields).RedoEnd;
  do {
    pRVar2 = (RedoEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RedoEndHandler *)0x0;
    if (pRVar2 != (RedoEndHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RedoEndHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RedoEndHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = a == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Void add_RedoStart(RedoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_RedoStart
               (RTUndoRedo *this,RedoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RedoStartHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoStart;
  a = (this->fields).RedoStart;
  do {
    pRVar2 = (RedoStartHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RedoStartHandler *)0x0;
    if (pRVar2 != (RedoStartHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RedoStartHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RedoStartHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = a == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = a;
    }
    UNLOCK();
    pRVar3 = a;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != a;
    a = pRVar3;
  } while (bVar5);
  return;
}


/* Void add_UndoEnd(UndoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_UndoEnd
               (RTUndoRedo *this,UndoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UndoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoEnd;
  a = (this->fields).UndoEnd;
  do {
    pUVar2 = (UndoEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pUVar3 = (UndoEndHandler *)0x0;
    if (pUVar2 != (UndoEndHandler *)0x0) {
      if (pUVar2->klass == TypeInfo__RTG__UndoEndHandler) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UndoEndHandler *)0x0) {
        FUN_?(pUVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pUVar2 = *ppUVar1;
    bVar5 = a == pUVar2;
    if (bVar5) {
      *ppUVar1 = pUVar3;
      pUVar2 = a;
    }
    UNLOCK();
    pUVar3 = a;
    if (!bVar5) {
      pUVar3 = pUVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppUVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pUVar3 != a;
    a = pUVar3;
  } while (bVar5);
  return;
}


/* Void add_UndoStart(UndoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_add_UndoStart
               (RTUndoRedo *this,UndoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UndoStartHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoStart;
  a = (this->fields).UndoStart;
  do {
    pUVar2 = (UndoStartHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pUVar3 = (UndoStartHandler *)0x0;
    if (pUVar2 != (UndoStartHandler *)0x0) {
      if (pUVar2->klass == TypeInfo__RTG__UndoStartHandler) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UndoStartHandler *)0x0) {
        FUN_?(pUVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pUVar2 = *ppUVar1;
    bVar5 = a == pUVar2;
    if (bVar5) {
      *ppUVar1 = pUVar3;
      pUVar2 = a;
    }
    UNLOCK();
    pUVar3 = a;
    if (!bVar5) {
      pUVar3 = pUVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppUVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pUVar3 != a;
    a = pUVar3;
  } while (bVar5);
  return;
}


/* Void remove_CanUndoRedo(CanUndoRedoHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_CanUndoRedo
               (RTUndoRedo *this,CanUndoRedoHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CanUndoRedoHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUndoRedo;
  source = (this->fields).CanUndoRedo;
  do {
    pCVar2 = (CanUndoRedoHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CanUndoRedoHandler *)0x0;
    if (pCVar2 != (CanUndoRedoHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CanUndoRedoHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CanUndoRedoHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_RedoEnd(RedoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_RedoEnd
               (RTUndoRedo *this,RedoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RedoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoEnd;
  source = (this->fields).RedoEnd;
  do {
    pRVar2 = (RedoEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RedoEndHandler *)0x0;
    if (pRVar2 != (RedoEndHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RedoEndHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RedoEndHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = source == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}


/* Void remove_RedoStart(RedoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_RedoStart
               (RTUndoRedo *this,RedoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RedoStartHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppRVar1 = &(this->fields).RedoStart;
  source = (this->fields).RedoStart;
  do {
    pRVar2 = (RedoStartHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pRVar3 = (RedoStartHandler *)0x0;
    if (pRVar2 != (RedoStartHandler *)0x0) {
      if (pRVar2->klass == TypeInfo__RTG__RedoStartHandler) {
        pRVar3 = pRVar2;
      }
      if (pRVar3 == (RedoStartHandler *)0x0) {
        FUN_?(pRVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pRVar2 = *ppRVar1;
    bVar5 = source == pRVar2;
    if (bVar5) {
      *ppRVar1 = pRVar3;
      pRVar2 = source;
    }
    UNLOCK();
    pRVar3 = source;
    if (!bVar5) {
      pRVar3 = pRVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppRVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pRVar3 != source;
    source = pRVar3;
  } while (bVar5);
  return;
}


/* Void remove_UndoEnd(UndoEndHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_UndoEnd
               (RTUndoRedo *this,UndoEndHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UndoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoEnd;
  source = (this->fields).UndoEnd;
  do {
    pUVar2 = (UndoEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pUVar3 = (UndoEndHandler *)0x0;
    if (pUVar2 != (UndoEndHandler *)0x0) {
      if (pUVar2->klass == TypeInfo__RTG__UndoEndHandler) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UndoEndHandler *)0x0) {
        FUN_?(pUVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pUVar2 = *ppUVar1;
    bVar5 = source == pUVar2;
    if (bVar5) {
      *ppUVar1 = pUVar3;
      pUVar2 = source;
    }
    UNLOCK();
    pUVar3 = source;
    if (!bVar5) {
      pUVar3 = pUVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppUVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pUVar3 != source;
    source = pUVar3;
  } while (bVar5);
  return;
}


/* Void remove_UndoStart(UndoStartHandler) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_remove_UndoStart
               (RTUndoRedo *this,UndoStartHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__UndoStartHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppUVar1 = &(this->fields).UndoStart;
  source = (this->fields).UndoStart;
  do {
    pUVar2 = (UndoStartHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pUVar3 = (UndoStartHandler *)0x0;
    if (pUVar2 != (UndoStartHandler *)0x0) {
      if (pUVar2->klass == TypeInfo__RTG__UndoStartHandler) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UndoStartHandler *)0x0) {
        FUN_?(pUVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pUVar2 = *ppUVar1;
    bVar5 = source == pUVar2;
    if (bVar5) {
      *ppUVar1 = pUVar3;
      pUVar2 = source;
    }
    UNLOCK();
    pUVar3 = source;
    if (!bVar5) {
      pUVar3 = pUVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppUVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pUVar3 != source;
    source = pUVar3;
  } while (bVar5);
  return;
}


/* Void set_ActionLimit(Int32) */

void Assembly-CSharp.dll::RTG::RTUndoRedo::RTUndoRedo_set_ActionLimit
               (RTUndoRedo *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__get_Count__
                 );
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

