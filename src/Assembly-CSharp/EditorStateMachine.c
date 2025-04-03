
/* Void DeSelectAll() */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAll
               (EditorStateMachine *this,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object != (SelectionController *)0x0) {
    uStack_1 = 0xffffffff;
    puStack_2 = &DAT_?;
    uStack_3 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_3;
    puStack_4 = &stack0xffffffb4;
    puVar5 = &stack0xffffffb4;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      cRam_? = '\x01';
      puVar5 = puStack_4;
    }
    puStack_4 = puVar5;
    method_00 = (MethodInfo *)(object->fields).selectedIDs;
    if (method_00 != (MethodInfo *)0x0) {
      pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         (&HStack_7,(HashSet_1_System_UInt32_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      HStack_8._set = pHVar6->_set;
      HStack_8._index = pHVar6->_index;
      HStack_8._version = pHVar6->_version;
      HStack_8._current = pHVar6->_current;
      HStack_7._version = 0;
      uStack_1 = 1;
      HStack_7._current = (uint32_t)&HStack_8;
      while (bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                     UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                               (&HStack_8,
                                MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                               ), id = HStack_8._current, bVar9 != 0) {
        uStack_10 = HStack_8._current;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar11 == (MVWorldObjectClientManager *)0x0) goto code_?;
        method_00 = (MethodInfo *)0x0;
        pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar11,id,(MethodInfo *)0x0);
        if (pMVar12 == (MVWorldObject *)0x0) goto code_?;
        (*pMVar12->klass[1].vtable.PartialUpdateWOData.methodPtr)();
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pAStack_13 = (Action_2_Object_WorldObjectDestroyedEventArgs_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pAStack_13,(Object *)object,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar11 == (MVWorldObjectClientManager *)0x0) goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (pMVar11,uStack_10,pAStack_13,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&HStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
                 method_00);
      uStack_1 = 0xffffffff;
      this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                (object->fields).selectedIDs;
      if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar14 = func_?(&stack0xffffffa4);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAllExcept
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    *unaff_FS_OFFSET = (int32_t)&stack0xfffffff0;
    pMVar1 = (MethodInfo *)&stack0xffffffb0;
    pMVar2 = (MethodInfo *)&stack0xffffffb0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                     );
      func_?(&TypeInfo__System__Predicate<int>);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      func_?(&
                      MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                     );
      func_?(&TypeInfo__SelectionController____c__DisplayClass27_0);
      cRam_? = '\x01';
      pMVar2 = pMVar1;
    }
    value = (Object *)func_?(TypeInfo__SelectionController____c__DisplayClass27_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,(ExceptionArgument__Enum)value,pMVar2);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)id;
      pHVar3 = (HashSet_1_System_UInt32_ *)(this_00->fields).selectedIDs;
      if (pHVar3 != (HashSet_1_System_UInt32_ *)0x0) {
        pMVar2 = (MethodInfo *)&UNK_?;
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                HashSet_1_System_UInt32__Contains
                          (pHVar3,id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar4 == 0) {
          SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = id;
          return;
        }
        pHVar3 = (HashSet_1_System_UInt32_ *)(this_00->fields).selectedIDs;
        if (pHVar3 != (HashSet_1_System_UInt32_ *)0x0) {
          pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             (&HStack_6,pHVar3,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_7._set = pHVar5->_set;
          HStack_7._index = pHVar5->_index;
          HStack_7._version = pHVar5->_version;
          HStack_7._current = pHVar5->_current;
          HStack_6._version = 0;
          HStack_6._current = (uint32_t)&HStack_7;
          while (bVar4 = System.Core.dll::System::Collections::Generic::
                         HashSet`1[T]+Enumerator[System::UInt32]::
                         HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                   (&HStack_7,
                                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                   ), id_00 = HStack_7._current, bVar4 != 0) {
            if ((InvokerMethod)HStack_7._current != pMVar2->invoker_method) {
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
              in_stack_9 = (MethodInfo *)0x0;
              pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar8,id_00,(MethodInfo *)0x0);
              if (pMVar10 == (MVWorldObject *)0x0) goto code_?;
              func_?();
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
              woDestroyedEventHandler =
                   (Action_2_Object_WorldObjectDestroyedEventArgs_ *)&UNK_?;
              pMVar2 = 
              MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_01,(Object *)&UNK_?,
                         MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
              MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                        (pMVar8,id_00,woDestroyedEventHandler,(MethodInfo *)0x0);
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&HStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,in_stack_9);
          pHVar3 = _UNK_?;
          this_02 = (Predicate_1_UInt32_ *)func_?();
          HStack_6._current = (uint32_t)&UNK_?;
          mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                    (this_02,(Object *)pMVar2,
                     MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                     ,(MethodInfo *)0x0);
          if (pHVar3 != (HashSet_1_System_UInt32_ *)0x0) {
            puVar11 = &UNK_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__RemoveWhere
                      (pHVar3,this_02,
                       MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                      );
            *unaff_FS_OFFSET = (int32_t)puVar11;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectWorldObject
               (EditorStateMachine *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  object = (this->fields).selectionController;
  if (object != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      cRam_? = '\x01';
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      (*(code *)(wo->klass->vtable).DeSelect.method)(wo,(wo->klass->vtable).AddPreviewBox.methodPtr)
      ;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      woID = (wo->fields)._.id;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)object,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (this_01,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                   (MethodInfo *)0x0);
        this_00 = (HashSet_1_System_UInt32_ *)(object->fields).selectedIDs;
        if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
          HashSet_1_System_UInt32__Remove
                    (this_00,(wo->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_EnterGroup
               (EditorStateMachine *this,MVGroup *group,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    SelectionController::SelectionController_PushWOParents
              (this_00,(MVWorldObjectClient *)group,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroup
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
      func_?(&StringLiteral_Trying_to_exit_root_group_);
      cRam_? = '\x01';
    }
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
    if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      if ((pSVar1->fields)._size < 2) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
        pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
        if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                  TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                            (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          return TVar2.m_Index;
        }
      }
      else {
        TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Pop
                          (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this_00,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                    (this_01,TVar2.m_Index,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02
                     ,(MethodInfo *)0x0);
          return TVar2.m_Index;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_ExitGroupToRoot
                  (EditorStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
      cRam_? = '\x01';
    }
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
    while (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      if ((pSVar1->fields)._size < 2) {
        pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
        if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                  TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                            (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          return TVar2.m_Index;
        }
        break;
      }
      if (pSVar1 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) break;
      TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
              TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Pop
                        (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_01,TVar2.m_Index,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
      pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_IsSelected
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    uStack_1 = 0xffffffff;
    puStack_2 = &DAT_?;
    uStack_3 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_3;
    puStack_4 = &stack0xffffffbc;
    puVar5 = &stack0xffffffbc;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      ppMStack_6 = &MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__;
      func_?();
      cRam_? = '\x01';
      puVar5 = puStack_4;
    }
    puStack_4 = puVar5;
    this_01 = (HashSet_1_System_UInt32_ *)(this_00->fields).selectedIDs;
    if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         (&HStack_8,this_01,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      method_00 = (MethodInfo *)pHVar7->_version;
      parentId = pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 1;
      HStack_8._current = (uint32_t)&stack0xffffffc8;
      do {
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                          ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
      } while ((id != parentId) &&
              (bVar9 = SelectionController::SelectionController_IsChildOf
                                 (this_00,id,parentId,(MethodInfo *)0x0), bVar9 == 0));
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
                 method_00);
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  uVar10 = func_?(&ppMStack_6);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
}


/* WorldObjectClientRef Select(Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select
          (EditorStateMachine *this,bool addToSelection,int32_t layerMask,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 == (SelectionController *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pWVar2 = (WorldObjectClientRef *)(*pcVar1)();
    return pWVar2;
  }
  func_?(&stack0xffffffb4,0,0x48);
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)0x0,layerMask,
                     (MethodInfo *)0x0);
  if (bVar3 != 0) {
    hit.point.y = in_stack_4;
    hit.point.x = in_stack_5;
    hit.point.z = (float)in_stack_6;
    hit.normal.x = fStack_7;
    hit.normal.y = fStack_8;
    hit.normal.z = (float)IStack_9._0_4_;
    hit.cubePos._0_4_ = stack0xffffffd0;
    hit._28_4_ = iStack_10;
    hit.face = uStack_11;
    hit._36_4_ = iStack_12;
    hit.woId = (int32_t)pCStack_13;
    hit.cube = (Cube *)fStack_14;
    hit.distance = (float)pCStack_15;
    hit.collider = (Collider *)pTStack_16;
    hit.transform = (Transform *)uStack_17;
    hit._60_4_ = (int)iStack_18;
    hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_18 >> 0x20);
    hit.interactionFlags._4_4_ = _addToSelection;
    pWVar2 = SelectionController::SelectionController_Select_1(this_00,hit,1,0,in_stack_6);
    return pWVar2;
  }
  return (WorldObjectClientRef *)0x0;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_SelectWO
          (EditorStateMachine *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      func_?(&
                      MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     );
      func_?(&StringLiteral__that_is_owned_by_another_acotr);
      func_?(&StringLiteral__outside_the_parent_group_);
      func_?(&StringLiteral_Trying_to_select_WO_);
      cRam_? = '\x01';
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,id,(MethodInfo *)0x0);
    if (addToSelection == 0) {
      SelectionController::SelectionController_DeSelectAllExcept(this_00,id,(MethodInfo *)0x0);
    }
    if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
    iVar2 = (this_02->fields)._.ownerActorNr;
    if (iVar2 != 0) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_03 == (MVNetworkGame *)0x0) ||
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
         pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
      if (iVar2 != (pMVar3->fields)._._ActorNr_k__BackingField) {
        id = 0;
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&id,(MethodInfo *)0x0);
        id = 0;
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Trying_to_select_WO_,pSVar4,
                            StringLiteral__that_is_owned_by_another_acotr,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar5 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
    if (pSVar5 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
               TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                         (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      bVar7 = MVGroup::MVGroup_IsDescendant(TVar6.m_Index,id,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        _showVisuals = (String *)0x0;
        _addToSelection = (String *)0x0;
        id = 8;
        bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_02,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          method = (MethodInfo *)&UNK_?;
          pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&id,(MethodInfo *)0x0);
          method = (MethodInfo *)&UNK_?;
          SelectionController::SelectionController_get_ParentGroupID(this_00,(MethodInfo *)0x0);
          method = (MethodInfo *)&UNK_?;
          str3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          method = (MethodInfo *)StringLiteral__outside_the_parent_group_;
          _addToSelection = StringLiteral_Trying_to_select_WO_;
          id = (int32_t)&UNK_?;
          _showVisuals = pSVar4;
          pSVar4 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Trying_to_select_WO_,pSVar4,
                              StringLiteral__outside_the_parent_group_,str3,(MethodInfo *)0x0);
code_?:
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          pWVar8 = MVWorldObjectClientManager::
                    MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
          return pWVar8;
        }
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar5 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_00->fields).parentGroups;
      if (pSVar5 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                 TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                           (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        if (TVar6.m_Index != (this_02->fields)._.groupId) {
          SelectionController::SelectionController_PushWOParents
                    (this_00,this_02,0,(MethodInfo *)0x0);
        }
        this_01 = (this_00->fields).selectedIDs;
        if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_01,(this_02->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          woID = (this_02->fields)._.id;
          this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_04,(Object *)this_00,
                     MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                      (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                       (MethodInfo *)0x0);
            pMVar9 = this_02->klass;
            if (showVisuals == 0) {
              _addToSelection = (String *)(pMVar9->vtable).Select_1.methodPtr;
              id = (int32_t)this_02;
              (*(code *)(pMVar9->vtable).Select.method)();
            }
            else {
              _addToSelection = (String *)(pMVar9->vtable).DeSelect.methodPtr;
              id = _UNK_?;
              (*(code *)(pMVar9->vtable).Select_1.method)();
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
              pWVar8 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar1,(this_02->fields)._.id,(MethodInfo *)0x0);
              return pWVar8;
            }
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?(&stack0xfffffff0);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  pWVar8 = (WorldObjectClientRef *)(*pcVar11)();
  return pWVar8;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Select_1
          (EditorStateMachine *this,VoxelHit hit,bool addToSelection,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    pWVar1 = SelectionController::SelectionController_Select_1(this_00,hit,1,0,unaff_EBP);
    return pWVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar3)();
  return pWVar1;
}


/* EditorStateMachine(GameObject) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor
               (EditorStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingStateMachine);
    func_?(&TypeInfo__MVNetworkSelector);
    func_?(&TypeInfo__SelectionController);
    cRam_? = '\x01';
  }
  esm = this;
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  pGVar1 = gameObject;
  ppGVar2 = &(esm->fields).gameObject;
  *ppGVar2 = gameObject;
  func_?(ppGVar2,gameObject);
  this_00 = (CubeModelingStateMachine *)func_?(TypeInfo__CubeModelingStateMachine);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingEvent);
    func_?(&TypeInfo__CubeModelingTransitionTable);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    cRam_? = '\x01';
  }
  (this_00->fields).useLasers = 1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(0x15,(MethodInfo *)0x0);
  (this_00->fields).currentMaterialId = OVar3;
  FSMEntity::FSMEntity__ctor((FSMEntity *)this_00,(MethodInfo *)0x0);
  ppGVar2 = &(this_00->fields).gameObject;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  this_01 = (CubeModelingTransitionTable *)func_?(TypeInfo__CubeModelingTransitionTable);
  CubeModelingTransitionTable::CubeModelingTransitionTable__ctor(this_01,(MethodInfo *)0x0);
  ppSVar4 = &(this_00->fields)._.transitionTable;
  *ppSVar4 = (StateTransitionTable *)this_01;
  func_?(ppSVar4,this_01);
  this = (EditorStateMachine *)0x0;
  value = (Object *)func_?(TypeInfo__CubeModelingEvent,&this);
  FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  ppCStack6 = &(this_00->fields).mainCamera;
  *ppCStack6 = pCVar5;
  func_?();
  method = (MethodInfo *)&(esm->fields).cubeModelingStateMachine;
  *(CubeModelingStateMachine **)method = this_00;
  gameObject = (GameObject *)&UNK_?;
  pCStack7 = this_00;
  func_?();
  gameObject = (GameObject *)TypeInfo__MVNetworkSelector;
  this = (EditorStateMachine *)&UNK_?;
  this_02 = (EditorStateMachine *)func_?();
  this = (EditorStateMachine *)0x0;
  MVNetworkSelector::MVNetworkSelector__ctor((MVNetworkSelector *)this_02,esm,(MethodInfo *)0x0);
  (esm->fields).networkSelector = (MVNetworkSelector *)this_02;
  this = this_02;
  func_?();
  this_03 = (SelectionController *)func_?(TypeInfo__SelectionController);
  SelectionController::SelectionController__ctor(this_03,(MethodInfo *)0x0);
  ppSVar8 = &(esm->fields).selectionController;
  *ppSVar8 = this_03;
  func_?(ppSVar8,this_03);
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  ppMStack10 = &(esm->fields).weCamera;
  *ppMStack10 = pMVar9;
  func_?();
  (esm->fields)._GridMode_k__BackingField = 1;
  (esm->fields)._MuzzleEditMode_k__BackingField = 0;
  return;
}


/* EditorStateMachine(GameObject, Vector3) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_1
               (EditorStateMachine *this,GameObject *gameObject,Vector3 avatarEditModeCenterPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditorStateTransitionTableUUI);
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (CEEditorStateTransitionTableUUI *)
            func_?(TypeInfo__CEEditorStateTransitionTableUUI);
  CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
            (this_00,avatarEditModeCenterPos,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields)._.transitionTable;
  *ppSVar1 = (StateTransitionTable *)this_00;
  func_?(ppSVar1,this_00);
  return;
}


/* EditorStateMachine(GameObject, ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine__ctor_2
               (EditorStateMachine *this,GameObject *gameObject,
               ContextMenuController *contextMenuController,GizmoController *gizmoController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorStateTransitionTable3D);
    cRam_? = '\x01';
  }
  EditorStateMachine__ctor(this,gameObject,(MethodInfo *)0x0);
  this_00 = (EditorStateTransitionTable3D *)func_?(TypeInfo__EditorStateTransitionTable3D);
  EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
            (this_00,contextMenuController,gizmoController,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields)._.transitionTable;
  *ppSVar1 = (StateTransitionTable *)this_00;
  func_?(ppSVar1,this_00);
  return;
}


/* EditorEvent get_CurEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_CurEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pEStack_1 = (EditorEvent__Enum__Class *)&TypeInfo__EditorEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.curEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEStack_1 = (EditorEvent__Enum__Class *)pOVar2;
      pEVar3 = (EditorEvent__Enum *)func_?();
      return *pEVar3;
    }
    pEStack_1 = TypeInfo__EditorEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    EVar6 = (*pcVar5)();
    return EVar6;
  }
  pEStack_1 = (EditorEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  EVar6 = (*pcVar5)();
  return EVar6;
}


/* EditorEvent get_NextEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_NextEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pEStack_1 = (EditorEvent__Enum__Class *)&TypeInfo__EditorEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.nextEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEStack_1 = (EditorEvent__Enum__Class *)pOVar2;
      pEVar3 = (EditorEvent__Enum *)func_?();
      return *pEVar3;
    }
    pEStack_1 = TypeInfo__EditorEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    EVar6 = (*pcVar5)();
    return EVar6;
  }
  pEStack_1 = (EditorEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  EVar6 = (*pcVar5)();
  return EVar6;
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroup
                    (EditorStateMachine *this,MethodInfo *method)

{
  pMVar1 = (MVGroup__Class *)(this->fields).selectionController;
  if (pMVar1 != (MVGroup__Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGroup);
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pMVar1->_0).namespaze;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      id = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
           Stack_1_UnityEngine_UIElements_TextureId__Peek
                     (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = (MVGroup *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id.m_Index,(MethodInfo *)0x0);
        if (pMVar2 == (MVGroup *)0x0) {
          return (MVGroup *)0x0;
        }
        bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
        pMVar1 = TypeInfo__MVGroup;
        if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] == TypeInfo__MVGroup)) {
          return pMVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pMStack4 = pMVar1;
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVGroup *)(*pcVar5)();
  return pMVar2;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupID
                  (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pSVar1->fields).parentGroups;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
              TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                        (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      return TVar2.m_Index;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_ParentGroupIsRoot() */

bool Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
               (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pSVar1->fields).parentGroups;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
              TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                        (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                           (this_01,(MethodInfo *)0x0);
        if (pMVar3 != (MVGroup *)0x0) {
          return TVar2.m_Index == (pMVar3->fields)._._.id;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* EditorEvent get_PrevEvent() */

EditorEvent__Enum
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_PrevEvent
          (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pEStack_1 = (EditorEvent__Enum__Class *)&TypeInfo__EditorEvent;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.prevEvent;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
      pEStack_1 = (EditorEvent__Enum__Class *)pOVar2;
      pEVar3 = (EditorEvent__Enum *)func_?();
      return *pEVar3;
    }
    pEStack_1 = TypeInfo__EditorEvent;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    EVar6 = (*pcVar5)();
    return EVar6;
  }
  pEStack_1 = (EditorEvent__Enum__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  EVar6 = (*pcVar5)();
  return EVar6;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SelectedWOs
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    method_00 = (MethodInfo *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                     );
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__
                     );
      func_?(&TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
      cRam_? = '\x01';
    }
    pHVar2 = (HashSet_1_MVWorldObjectClient_ *)
             func_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object___ctor
              ((HashSet_1_System_Object_ *)pHVar2,
               MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
    this_00 = (HashSet_1_System_UInt32_ *)(pSVar1->fields).selectedIDs;
    if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
      pHVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd4,this_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      pOStack_4 = (Object__Class *)pHVar3->_set;
      id = pHVar3->_current;
      while( true ) {
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                          ((HashSet_1_T_Enumerator_System_UInt32_ *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar5 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = method_00;
          return pHVar2;
        }
        uVar6 = id;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
           (item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,id,(MethodInfo *)0x0),
           pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) break;
        method_00 = (MethodInfo *)&UNK_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                  ((HashSet_1_System_Object_ *)pHVar2,(Object *)item,
                   MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                  );
        id = uVar6;
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pHVar2 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar7)();
  return pHVar2;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
          (EditorStateMachine *this,MethodInfo *method)

{
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                     );
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
      func_?(&StringLiteral_Trying_to_access_single_selected);
      cRam_? = '\x01';
    }
    pHVar2 = (pSVar1->fields).selectedIDs;
    if (pHVar2 != (HashSet_1_System_Int32_ *)0x0) {
      if ((pHVar2->fields)._count != 1) {
        if (0 < (pHVar2->fields)._count) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Trying_to_access_single_selected,(MethodInfo *)0x0);
        }
        return (MVWorldObjectClient *)0x0;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = System.Core.dll::System::Linq::Enumerable::Enumerable_First_1
                     ((IEnumerable_1_System_Object_ *)(pSVar1->fields).selectedIDs,
                      int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                     );
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,(int32_t)id,(MethodInfo *)0x0);
        return pMVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}


/* Void set_MuzzleEditMode(Boolean) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_set_MuzzleEditMode
               (EditorStateMachine *this,bool value,MethodInfo *method)

{
  (this->fields)._MuzzleEditMode_k__BackingField = value;
  return;
}

