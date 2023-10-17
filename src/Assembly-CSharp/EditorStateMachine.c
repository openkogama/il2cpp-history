
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
    HStack_6._set = (HashSet_1_System_Int32_ *)0x0;
    HStack_6._index = 0;
    HStack_6._version = 0;
    HStack_6._current = 0;
    method_00 = (MethodInfo *)(object->fields).selectedIDs;
    if (method_00 != (MethodInfo *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
               HashSet_1_System_Object__GetEnumerator
                         (&HStack_8,(HashSet_1_System_Object_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      HStack_6._set = (HashSet_1_System_Int32_ *)pHVar7->_set;
      HStack_6._index = pHVar7->_index;
      HStack_6._version = pHVar7->_version;
      HStack_6._current = (int32_t)pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 1;
      HStack_8._current = (Object *)&HStack_6;
      while (bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                     Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                               (&HStack_6,
                                MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                               ), id = HStack_6._current, bVar9 != 0) {
        pOStack_10 = (Object *)HStack_6._current;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
        method_00 = (MethodInfo *)0x0;
        pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,id,(MethodInfo *)0x0);
        if (pMVar11 == (MVWorldObject *)0x0) goto code_?;
        (*(code *)pMVar11->klass[1].vtable.TraverseRecursiveTail.method)();
        pMStack_12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if ((this_02 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)object,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0), pMStack_12 == (MVWorldObjectClientManager *)0x0))
        goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (pMStack_12,(int32_t)pOStack_10,
                   (Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&HStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
                 method_00);
      uStack_1 = 0xffffffff;
      this_00 = (HashSet_1_UnityEngine_Vector3_ *)(object->fields).selectedIDs;
      if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar13 = func_?(&stack0xffffffa4);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_DeSelectAllExcept
               (EditorStateMachine *this,int32_t id,MethodInfo *method)

{
  this_00 = (this->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int32_t)&stack0xfffffff0;
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
    }
    HStack_2._set = (HashSet_1_System_Int32_ *)0x0;
    HStack_2._index = 0;
    HStack_2._version = 0;
    HStack_2._current = 0;
    value = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__SelectionController____c__DisplayClass27_0);
    if (value != (HashSet_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
      (value->fields)._buckets = (Int32__Array *)id;
      this_01 = (this_00->fields).selectedIDs;
      pHStack_3 = value;
      if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
        pMVar1 = (MethodInfo *)&UNK_?;
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__Contains
                          (this_01,id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar4 == 0) {
          SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = id;
          return;
        }
        this_02 = (HashSet_1_System_Object_ *)(this_00->fields).selectedIDs;
        if (this_02 != (HashSet_1_System_Object_ *)0x0) {
          pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                   HashSet_1_System_Object__GetEnumerator
                             (&HStack_6,this_02,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_2._set = (HashSet_1_System_Int32_ *)pHVar5->_set;
          HStack_2._index = pHVar5->_index;
          HStack_2._version = pHVar5->_version;
          HStack_2._current = (int32_t)pHVar5->_current;
          HStack_6._version = 0;
          HStack_6._current = (Object *)&HStack_2;
          while (bVar4 = System.Core.dll::System::Collections::Generic::
                         HashSet`1[T]+Enumerator[System::Int32]::
                         HashSet_1_T_Enumerator_System_Int32__MoveNext
                                   (&HStack_2,
                                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                   ), id_00 = HStack_2._current, bVar4 != 0) {
            if ((Object *)HStack_2._current != (Object *)pMVar1->invoker_method) {
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
              in_stack_8 = (MethodInfo *)0x0;
              pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar7,id_00,(MethodInfo *)0x0);
              if (pMVar9 == (MVWorldObject *)0x0) goto code_?;
              func_?();
              MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
              if (this_03 == (UnityAction_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              pMVar7 = (MVWorldObjectClientManager *)&UNK_?;
              woID = this_03;
              pMVar1 = 
              MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_03,(Object *)&UNK_?,
                         MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                         ,(MethodInfo *)0x0);
              if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
              MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                        (pMVar7,(int32_t)woID,
                         (Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_03,(MethodInfo *)0x0
                        );
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&HStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,in_stack_8);
          pHStack_3 = _UNK_?;
          this_04 = (Predicate_1_Int32Enum_ *)func_?();
          if (this_04 != (Predicate_1_Int32Enum_ *)0x0) {
            mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                      (this_04,(Object *)pMVar1,
                       MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                       ,(MethodInfo *)0x0);
            if (pHStack_3 != (HashSet_1_System_Int32_ *)0x0) {
              puVar10 = &UNK_?;
              System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
              HashSet_1_System_Int32__RemoveWhere
                        (pHStack_3,(Predicate_1_Int32_ *)this_04,
                         MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                        );
              *unaff_FS_OFFSET = (int32_t)puVar10;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
      (*(wo->klass->vtable).DeSelect.methodPtr)(wo,(wo->klass->vtable).DeSelect.method);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      woID = (wo->fields)._.id;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
      if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)object,
                   MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                    (this_01,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                     (MethodInfo *)0x0);
          this_00 = (object->fields).selectedIDs;
          if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__Remove
                      (this_00,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
            return;
          }
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
    this_01 = (Stack_1_System_Int32Enum_ *)(this_00->fields).parentGroups;
    if (this_01 != (Stack_1_System_Int32Enum_ *)0x0) {
      if ((this_01->fields)._size < 2) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
        this_02 = (Stack_1_System_Object_ *)(this_00->fields).parentGroups;
        if (this_02 != (Stack_1_System_Object_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                   Stack_1_System_Object__Peek
                             (this_02,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          return (int32_t)pOVar1;
        }
      }
      else if (this_01 != (Stack_1_System_Int32Enum_ *)0x0) {
        woID = mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
               Stack_1_System_Int32Enum__Pop
                         (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_04 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                 );
        if (this_04 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_04,(Object *)this_00,
                     MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     ,(MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      (this_03,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                       (MethodInfo *)0x0);
            return woID;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
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
    pSVar1 = (this_00->fields).parentGroups;
    if (pSVar1 != (Stack_1_System_Int32_ *)0x0) {
      while (this_01 = (Stack_1_System_Object_ *)(this_00->fields).parentGroups,
            1 < (pSVar1->fields)._size) {
        if (this_01 == (Stack_1_System_Object_ *)0x0) goto code_?;
        woID = mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
               Stack_1_System_Int32Enum__Pop
                         ((Stack_1_System_Int32Enum_ *)this_01,
                          MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                                 );
        if ((this_03 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this_00,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0), this_02 == (MVWorldObjectClientManager *)0x0))
        goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (this_02,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_03,
                   (MethodInfo *)0x0);
        pSVar1 = (this_00->fields).parentGroups;
        if (pSVar1 == (Stack_1_System_Int32_ *)0x0) goto code_?;
      }
      if (this_01 != (Stack_1_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                 Stack_1_System_Object__Peek
                           (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return (int32_t)pOVar2;
      }
    }
  }
code_?:
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
    this_01 = (HashSet_1_System_Object_ *)(this_00->fields).selectedIDs;
    if (this_01 != (HashSet_1_System_Object_ *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
               HashSet_1_System_Object__GetEnumerator
                         (&HStack_8,this_01,
                          MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
      method_00 = (MethodInfo *)pHVar7->_version;
      parentId = pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 1;
      HStack_8._current = (Object *)&stack0xffffffc8;
      do {
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                          ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
      } while (((Object *)id != parentId) &&
              (bVar9 = SelectionController::SelectionController_IsChildOf
                                 (this_00,id,(int32_t)parentId,(MethodInfo *)0x0), bVar9 == 0));
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if ((this_02->fields)._.ownerActorNr != 0) {
      iVar2 = (this_02->fields)._.ownerActorNr;
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
    pSVar5 = (Stack_1_System_Object_ *)(this_00->fields).parentGroups;
    if (pSVar5 != (Stack_1_System_Object_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                Stack_1_System_Object__Peek
                          (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      bVar7 = MVGroup::MVGroup_IsDescendant((int32_t)pOVar6,id,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        _showVisuals = (String *)0x0;
        _addToSelection = (MethodInfo *)0x0;
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
          _addToSelection = (MethodInfo *)StringLiteral_Trying_to_select_WO_;
          id = (int32_t)&UNK_?;
          _showVisuals = pSVar4;
          pSVar4 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Trying_to_select_WO_,pSVar4,
                              StringLiteral__outside_the_parent_group_,str3,(MethodInfo *)0x0);
code_?:
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
      pSVar5 = (Stack_1_System_Object_ *)(this_00->fields).parentGroups;
      if (pSVar5 != (Stack_1_System_Object_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                  Stack_1_System_Object__Peek
                            (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        if (pOVar6 != (Object *)(this_02->fields)._.groupId) {
          SelectionController::SelectionController_PushWOParents
                    (this_00,this_02,0,(MethodInfo *)0x0);
        }
        this_01 = (HashSet_1_System_Object_ *)(this_00->fields).selectedIDs;
        if (this_01 != (HashSet_1_System_Object_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    (this_01,(Object *)(this_02->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          woID = (this_02->fields)._.id;
          this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          if ((this_04 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_04,(Object *)this_00,
                         MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                         ,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClientManager *)0x0)) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                      (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_04,
                       (MethodInfo *)0x0);
            pMVar9 = this_02->klass;
            if (showVisuals == 0) {
              _addToSelection = (pMVar9->vtable).Select.method;
              id = (int32_t)this_02;
              (*(pMVar9->vtable).Select.methodPtr)();
            }
            else {
              _addToSelection = (pMVar9->vtable).Select_1.method;
              id = _UNK_?;
              (*(pMVar9->vtable).Select_1.methodPtr)();
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


/* Void Update() */

void Assembly-CSharp.dll::EditorStateMachine::EditorStateMachine_Update
               (EditorStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IState);
    cRam_? = '\x01';
  }
  if ((this->fields)._.currentState != (IState *)0x0) {
    func_?(1,TypeInfo__IState,(this->fields)._.currentState,this);
  }
  return;
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
  (esm->fields).gameObject = gameObject;
  func_?(&(esm->fields).gameObject,gameObject);
  this_00 = (CubeModelingStateMachine *)func_?(TypeInfo__CubeModelingStateMachine);
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CubeModelingEvent);
      func_?(&TypeInfo__CubeModelingTransitionTable);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
            ObscuredByte_op_Implicit(0x15,(MethodInfo *)0x0);
    *(ObscuredByte *)&(this_00->fields).currentMaterialId.currentCryptoKey = OVar2;
    (this_00->fields).useLasers = 1;
    FSMEntity::FSMEntity__ctor((FSMEntity *)this_00,(MethodInfo *)0x0);
    (this_00->fields).gameObject = pGVar1;
    func_?(&(this_00->fields).gameObject,pGVar1);
    this_01 = (CubeModelingTransitionTable *)func_?(TypeInfo__CubeModelingTransitionTable);
    if (this_01 != (CubeModelingTransitionTable *)0x0) {
      CubeModelingTransitionTable::CubeModelingTransitionTable__ctor(this_01,(MethodInfo *)0x0);
      (this_00->fields)._.transitionTable = (StateTransitionTable *)this_01;
      func_?(&this_00->fields,this_01);
      this = (EditorStateMachine *)0x0;
      value = (Object *)func_?(TypeInfo__CubeModelingEvent,&this);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      (this_00->fields).mainCamera = pCVar3;
      func_?(&(this_00->fields).mainCamera,pCVar3);
      (esm->fields).cubeModelingStateMachine = this_00;
      func_?(&(esm->fields).cubeModelingStateMachine,this_00);
      this_02 = (MVNetworkSelector *)func_?(TypeInfo__MVNetworkSelector);
      if (this_02 != (MVNetworkSelector *)0x0) {
        MVNetworkSelector::MVNetworkSelector__ctor(this_02,esm,(MethodInfo *)0x0);
        (esm->fields).networkSelector = this_02;
        func_?(&(esm->fields).networkSelector,this_02);
        this_03 = (SelectionController *)func_?(TypeInfo__SelectionController);
        if (this_03 != (SelectionController *)0x0) {
          SelectionController::SelectionController__ctor(this_03,(MethodInfo *)0x0);
          (esm->fields).selectionController = this_03;
          func_?(&(esm->fields).selectionController,this_03);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          (esm->fields).weCamera = pMVar4;
          func_?(&(esm->fields).weCamera,pMVar4);
          (esm->fields)._GridMode_k__BackingField = 1;
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
  if (this_00 != (CEEditorStateTransitionTableUUI *)0x0) {
    CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
              (this_00,avatarEditModeCenterPos,(MethodInfo *)0x0);
    (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this_00 != (EditorStateTransitionTable3D *)0x0) {
    EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
              (this_00,contextMenuController,gizmoController,(MethodInfo *)0x0);
    (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  pSVar1 = (this->fields).selectionController;
  if (pSVar1 != (SelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGroup);
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_System_Object_ *)(pSVar1->fields).parentGroups;
    if (this_00 != (Stack_1_System_Object_ *)0x0) {
      id = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
           Stack_1_System_Object__Peek
                     (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = (MVGroup *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(int32_t)id,(MethodInfo *)0x0);
        if (pMVar2 == (MVGroup *)0x0) {
          return (MVGroup *)0x0;
        }
        if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (pMVar2->klass->_1).typeHierarchyDepth)
           && ((MVGroup__Class *)
               (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
               TypeInfo__MVGroup)) {
          return pMVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVGroup *)(*pcVar3)();
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
    this_00 = (Stack_1_System_Object_ *)(pSVar1->fields).parentGroups;
    if (this_00 != (Stack_1_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
               Stack_1_System_Object__Peek
                         (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      return (int32_t)pOVar2;
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
    this_00 = (Stack_1_System_Object_ *)(pSVar1->fields).parentGroups;
    if (this_00 != (Stack_1_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
               Stack_1_System_Object__Peek
                         (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                           (this_01,(MethodInfo *)0x0);
        if (pMVar3 != (MVGroup *)0x0) {
          return pOVar2 == (Object *)(pMVar3->fields)._._.id;
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
    HStack_2._set = (HashSet_1_System_Int32_ *)0x0;
    HStack_2._index = 0;
    HStack_2._version = 0;
    HStack_2._current = 0;
    this_01 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
    if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
      this_00 = (HashSet_1_System_Object_ *)(pSVar1->fields).selectedIDs;
      if (this_00 != (HashSet_1_System_Object_ *)0x0) {
        pHVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                 HashSet_1_System_Object__GetEnumerator
                           ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd0,this_00,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        HStack_2._set = (HashSet_1_System_Int32_ *)pHVar3->_set;
        HStack_2._index = pHVar3->_index;
        HStack_2._version = pHVar3->_version;
        HStack_2._current = (int32_t)pHVar3->_current;
        while( true ) {
          bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                            (&HStack_2,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          id = HStack_2._current;
          if (bVar4 == 0) {
            puVar5 = &UNK_?;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&HStack_2,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,unaff_EBP);
            *unaff_FS_OFFSET = puVar5;
            return (HashSet_1_MVWorldObjectClient_ *)this_01;
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 == (MVWorldObjectClientManager *)0x0) break;
          item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,id,(MethodInfo *)0x0);
          unaff_EBP = (MethodInfo *)&UNK_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Add
                    ((HashSet_1_System_Object_ *)this_01,(Object *)item,
                     MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pHVar7 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar6)();
  return pHVar7;
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Trying_to_access_single_selected,(MethodInfo *)0x0);
        }
        return (MVWorldObjectClient *)0x0;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = System.Core.dll::System::Linq::Enumerable::Enumerable_First
                     ((IEnumerable_1_System_Int32_ *)(pSVar1->fields).selectedIDs,
                      int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                     );
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,id,(MethodInfo *)0x0);
        return pMVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar3;
}

