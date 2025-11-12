
/* Void Execute() */

void Assembly-CSharp.dll::RTG::PostObjectSpawnAction::PostObjectSpawnAction_Execute
               (PostObjectSpawnAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 == (RTUndoRedo *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTUndoRedo__ActionGroup,this,0);
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
  if ((this_00->fields)._isEnabled != 0) {
    pLVar2 = (this_00->fields)._actionGroupStack;
    if (pLVar2 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
      if (((pLVar2->fields)._size != 0) &&
         ((this_00->fields)._stackPointer < (pLVar2->fields)._size + -1)) {
        startIndex = (this_00->fields)._stackPointer + 1;
        RTUndoRedo::RTUndoRedo_RemoveGroups
                  (this_00,startIndex,(pLVar2->fields)._size - startIndex,(MethodInfo *)0x0);
      }
      pLVar2 = (this_00->fields)._actionGroupStack;
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
      pOVar3 = (Object__Class *)
                FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar3,
                 MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
      bVar4 = iRam_? != 0;
      item[1].klass = pOVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)(item + 1) >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pMVar9 = 
      MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
      ;
      pOVar3 = item[1].klass;
      if (pOVar3 != (Object__Class *)0x0) {
        piVar10 = (int32_t *)((longlong)&(pOVar3->_0).namespaze + 4);
        *piVar10 = *piVar10 + 1;
        pOVar11 = ((List_1_System_Object___Fields *)&(pOVar3->_0).name)->_items;
        if (pOVar11 != (Object__Array *)0x0) {
          uVar5 = *(uint *)&(pOVar3->_0).namespaze;
          if (uVar5 < (uint)pOVar11->max_length) {
            *(uint *)&(pOVar3->_0).namespaze = uVar5 + 1;
            FUN_?(pOVar11,(longlong)(int)uVar5,this);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pOVar3,(Object *)this,
                       pMVar9->klass->rgctx_data[0xe].method);
          }
          pMVar9 = 
          MethodInfo__System__Collections__Generic__List<RTG::RTUndoRedo::ActionGroup>__Add_RTG__RTUndoRedo__ActionGroup_
          ;
          if (pLVar2 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
            piVar10 = &(pLVar2->fields)._version;
            *piVar10 = *piVar10 + 1;
            pRVar12 = (pLVar2->fields)._items;
            if (pRVar12 != (RTUndoRedo_ActionGroup__Array *)0x0) {
              uVar5 = (pLVar2->fields)._size;
              if (uVar5 < (uint)pRVar12->max_length) {
                (pLVar2->fields)._size = uVar5 + 1;
                FUN_?(pRVar12,(longlong)(int)uVar5,item);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)pLVar2,item,
                           pMVar9->klass->rgctx_data[0xe].method);
              }
              pLVar2 = (this_00->fields)._actionGroupStack;
              if (pLVar2 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
                if ((this_00->fields)._actionLimit < (pLVar2->fields)._size) {
                  RTUndoRedo::RTUndoRedo_RemoveGroups(this_00,0,1,(MethodInfo *)0x0);
                }
                pLVar2 = (this_00->fields)._actionGroupStack;
                if (pLVar2 != (List_1_RTG_RTUndoRedo_ActionGroup_ *)0x0) {
                  (this_00->fields)._stackPointer = (pLVar2->fields)._size + -1;
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* Void OnRemovedFromUndoRedoStack() */

void Assembly-CSharp.dll::RTG::PostObjectSpawnAction::
     PostObjectSpawnAction_OnRemovedFromUndoRedoStack
               (PostObjectSpawnAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._cleanupOnRemovedFromStack != 0) {
    pLVar1 = (this->fields)._spawnedParents;
    if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size != 0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = (List_1_System_Object_ *)pLVar1;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_11,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                               ), obj = LStack_11._current, bVar12 != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields)._spawnedParents;
      if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      piVar13 = &(pLVar1->fields)._version;
      *piVar13 = *piVar13 + 1;
      length = (pLVar1->fields)._size;
      (pLVar1->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::PostObjectSpawnAction::PostObjectSpawnAction_Redo
               (PostObjectSpawnAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._spawnedParents != (List_1_UnityEngine_GameObject_ *)0x0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._spawnedParents;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_8 = 0;
    LStack_1._8_8_ = pLStack_7;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_1;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), obj = LStack_1._current, bVar9 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = obj[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12);
        goto code_?;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pOVar10,1);
    }
    (this->fields)._cleanupOnRemovedFromStack = 0;
  }
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::PostObjectSpawnAction::PostObjectSpawnAction_Undo
               (PostObjectSpawnAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._spawnedParents != (List_1_UnityEngine_GameObject_ *)0x0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._spawnedParents;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_8 = 0;
    LStack_1._8_8_ = pLStack_7;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_1;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), obj = LStack_1._current, bVar9 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = obj[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12);
        goto code_?;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pOVar10,0);
    }
    (this->fields)._cleanupOnRemovedFromStack = 1;
  }
  return;
}


/* PostObjectSpawnAction(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::PostObjectSpawnAction::PostObjectSpawnAction__ctor
               (PostObjectSpawnAction *this,List_1_UnityEngine_GameObject_ *spawnedParents,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._spawnedParents = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._spawnedParents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)spawnedParents,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
            );
  bVar2 = iRam_? != 0;
  (this->fields)._spawnedParents = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._spawnedParents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

