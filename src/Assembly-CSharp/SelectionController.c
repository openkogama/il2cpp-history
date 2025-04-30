
/* Void DeSelectAll() */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAll
               (SelectionController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields).selectedIDs;
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
    while( true ) {
      bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        (&HStack_8,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      id = HStack_8._current;
      if (bVar9 == 0) break;
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pAStack_13,(Object *)this,
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
              (this->fields).selectedIDs;
    if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DeSelectAllExcept(Int32) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectAllExcept
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  pEStack_1 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0xffffffff;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
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
  method_00 = TypeInfo__SelectionController____c__DisplayClass27_0;
  pAStack_4 = (Action_2_Object_WorldObjectDestroyedEventArgs___Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pAStack_4,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pAStack_4 != (Action_2_Object_WorldObjectDestroyedEventArgs___Class *)0x0) {
    (pAStack_4->_0).name = (char *)id;
    pHVar5 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
    if (pHVar5 != (HashSet_1_System_UInt32_ *)0x0) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
              HashSet_1_System_UInt32__Contains
                        (pHVar5,id,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar6 == 0) {
        SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = fStack_3;
        return;
      }
      pHVar5 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
      if (pHVar5 != (HashSet_1_System_UInt32_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
        HashSet_1_System_UInt32__GetEnumerator
                  ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffcc,pHVar5,
                   MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
        pEStack_1 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x1;
        pMVar7 = (MVWorldObjectClientManager *)&stack0xffffffbc;
        while( true ) {
          this_02 = (Queue_1_System_Int32_ *)&stack0xffffffbc;
          bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            ((HashSet_1_T_Enumerator_System_UInt32_ *)this_02,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar6 == 0) break;
          if (this_02 != (Queue_1_System_Int32_ *)(pAStack_4->_0).name) {
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar7,(int32_t)this_02,(MethodInfo *)0x0);
            if (pMVar8 == (MVWorldObject *)0x0) goto code_?;
            func_?();
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pAStack_4 = TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>;
            this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_00,(Object *)this,
                       MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
            MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                      (pMVar7,(int32_t)this_02,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)0x0
                       ,(MethodInfo *)0x0);
          }
        }
        pEStack_1 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,(MethodInfo *)pMVar7);
        pEStack_1 = (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0xffffffff;
        pHVar5 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
        this_01 = (Predicate_1_UInt32_ *)func_?();
        mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                  (this_01,(Object *)pAStack_4,
                   MethodInfo__SelectionController____c__DisplayClass27_0___DeSelectAllExcept_b__0_int_
                   ,(MethodInfo *)0x0);
        if (pHVar5 != (HashSet_1_System_UInt32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
          HashSet_1_System_UInt32__RemoveWhere
                    (pHVar5,this_01,
                     MethodInfo__System__Collections__Generic__HashSet<int>__RemoveWhere_System__Predicate<int>_
                    );
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DeSelectWorldObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::SelectionController::SelectionController_DeSelectWorldObject
               (SelectionController *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    func_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    (*(code *)(wo->klass->vtable).DeSelect.method)(wo,(wo->klass->vtable).AddPreviewBox.methodPtr);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    woID = (wo->fields)._.id;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                (this_01,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
      this_00 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
      if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
        HashSet_1_System_UInt32__Remove
                  (this_00,(wo->fields)._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EnterGroup(MVGroup) */

void Assembly-CSharp.dll::SelectionController::SelectionController_EnterGroup
               (SelectionController *this,MVGroup *group,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  SelectionController_PushWOParents(this,(MVWorldObjectClient *)group,1,(MethodInfo *)0x0);
  return;
}


/* Int32 ExitGroup() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroup
                  (SelectionController *this,MethodInfo *method)

{
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
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    if ((pSVar1->fields)._size < 2) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Trying_to_exit_root_group_,(MethodInfo *)0x0);
      pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
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
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                  (this_00,TVar2.m_Index,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                   (MethodInfo *)0x0);
        return TVar2.m_Index;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 ExitGroupToRoot() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_ExitGroupToRoot
                  (SelectionController *this,MethodInfo *method)

{
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
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  do {
    if (pSVar1 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    if ((pSVar1->fields)._size < 2) {
      pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
      if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar4 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                          (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        return TVar4.m_Index;
      }
      goto code_?;
    }
    if (pSVar1 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
    TVar4 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
            ::Stack_1_UnityEngine_UIElements_TextureId__Pop
                      (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,TVar4.m_Index,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  } while( true );
}


/* Boolean IsChildOf(Int32, Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf
               (SelectionController *this,int32_t childId,int32_t parentId,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,childId,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      parent = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,parentId,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        iVar3 = (pMVar2->fields).groupId;
        if (iVar3 == -1) {
          return 0;
        }
        if (parent != (MVWorldObjectClient *)0x0) {
          if (iVar3 == (parent->fields)._.id) {
            return 1;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            child = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar1,(pMVar2->fields).groupId,(MethodInfo *)0x0);
            bVar4 = SelectionController_IsChildOf_1
                              ((SelectionController *)0x0,child,parent,(MethodInfo *)0x0);
            return bVar4;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean IsChildOf(MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsChildOf_1
               (SelectionController *this,MVWorldObjectClient *child,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  if (child != (MVWorldObjectClient *)0x0) {
    iVar1 = (child->fields)._.groupId;
    if (iVar1 == -1) {
      return 0;
    }
    if (parent != (MVWorldObjectClient *)0x0) {
      if (iVar1 == (parent->fields)._.id) {
        return 1;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        child_00 = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,(child->fields)._.groupId,(MethodInfo *)0x0);
        bVar2 = SelectionController_IsChildOf_1(this,child_00,parent,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsSelected(Int32) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_IsSelected
               (SelectionController *this,int32_t id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
  if (this_00 == (HashSet_1_System_UInt32_ *)0x0) {
    uVar6 = func_?();
    func_?(uVar6);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
           HashSet_1_System_UInt32__GetEnumerator
                     (&HStack_10,this_00,
                      MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  method_00 = (MethodInfo *)pHVar9->_version;
  parentId = pHVar9->_current;
  HStack_10._version = 0;
  uStack_1 = 1;
  HStack_10._current = (uint32_t)&stack0xffffffc8;
  do {
    bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]::
            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc8,
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                      );
    if (bVar8 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
                 method_00);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    if (id == parentId) break;
    bVar8 = SelectionController_IsChildOf(this,id,parentId,(MethodInfo *)0x0);
  } while (bVar8 == 0);
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffffc8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
             method_00);
  *unaff_FS_OFFSET = uStack_3;
  return 1;
}


/* Void PushWOParents(MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::SelectionController::SelectionController_PushWOParents
               (SelectionController *this,MVWorldObjectClient *wo,bool addAsParent,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    func_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    func_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    func_?(&
                    MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    cRam_? = '\x01';
  }
  pSVar4 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  while (pSVar4 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    if ((pSVar4->fields)._size < 2) {
      this_00 = (Queue_1_System_Int32_ *)
                func_?(TypeInfo__System__Collections__Generic__Queue<int>);
      System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::
      Object]::ReadOnlyCollectionBuilder_1_System_Object___ctor
                ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((wo != (MVWorldObjectClient *)0x0) && (pMVar5 != (MVWorldObjectClientManager *)0x0)) &&
         (this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,(wo->fields)._.groupId,(MethodInfo *)0x0),
         this_01 != (MVWorldObjectClient *)0x0)) goto code_?;
      break;
    }
    if (pSVar4 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) break;
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
    Stack_1_UnityEngine_UIElements_TextureId__Pop
              (pSVar4,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    pSVar4 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_?:
  iVar7 = (this_01->fields)._.id;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (pMVar5,(MethodInfo *)0x0), pMVar8 == (MVGroup *)0x0))
  goto code_?;
  if (iVar7 == (pMVar8->fields)._._.id) {
    if (this_00 != (Queue_1_System_Int32_ *)0x0) goto code_?;
    goto code_?;
  }
  bVar9 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_01,InteractionFlags__Enum_DontPushGroupToSelectionStack,(MethodInfo *)0x0)
  ;
  if (bVar9 == 0) {
    if (this_00 == (Queue_1_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
    Queue_1_System_Int32__Enqueue
              (this_00,(this_01->fields)._.id,
               MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
     (this_01 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar5,(this_01->fields)._.groupId,(MethodInfo *)0x0),
     this_01 == (MVWorldObjectClient *)0x0)) goto code_?;
  goto code_?;
code_?:
  if ((this_00->fields)._size == 0) goto code_?;
  pSVar4 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  TVar10.m_Index =
       mscorlib.dll::System::Collections::Generic::Queue`1[System::Int32]::
       Queue_1_System_Int32__Dequeue
                 (this_00,MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
  if (pSVar4 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
  Stack_1_UnityEngine_UIElements_TextureId__Push
            (pSVar4,TVar10,MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
  goto code_?;
code_?:
  if (addAsParent != 0) {
    pSVar4 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
    if (pSVar4 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
    Stack_1_UnityEngine_UIElements_TextureId__Push
              (pSVar4,(TextureId)(wo->fields)._.id,
               MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
  }
  pSVar4 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (pSVar4 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
    Stack_1_UnityEngine_UIElements_TextureId__GetEnumerator
              ((Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId_ *)&stack0xffffffd0,pSVar4,
               MethodInfo__System__Collections__Generic__Stack<int>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[UnityEngine::
              UIElements::TextureId]::
              Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId__MoveNext
                        ((Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
        BindingRestrictions+TestBuilder+AndNode]::
        Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                  ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
                   &stack0xffffffc0,
                   MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__Dispose__)
        ;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      TVar10 = mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[UnityEngine::
              UIElements::TextureId]::
              Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId__get_Current
                        ((Stack_1_T_Enumerator_UnityEngine_UIElements_TextureId_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__get_Current__
                        );
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar5 == (MVWorldObjectClientManager *)0x0) break;
      MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                (pMVar5,TVar10.m_Index,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_02,
                 (MethodInfo *)0x0);
    }
  }
  goto code_?;
}


/* WorldObjectClientRef Select(Boolean, Boolean, Int32) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select
          (SelectionController *this,bool addToSelection,bool showVisuals,int32_t layerMask,
          MethodInfo *method)

{
  func_?(&stack0xffffffb4,0,0x48);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)0x0,layerMask,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    hit.point.y = in_stack_2;
    hit.point.x = in_stack_3;
    hit.point.z = in_stack_4;
    hit.normal.x = (float)in_stack_5;
    hit.normal.y = fStack_6;
    hit.normal.z = (float)IStack_7._0_4_;
    hit.cubePos._0_4_ = stack0xffffffd0;
    hit._28_4_ = iStack_8;
    hit.face = uStack_9;
    hit._36_4_ = iStack_10;
    hit.woId = (int32_t)pCStack_11;
    hit.cube = (Cube *)fStack_12;
    hit.distance = (float)pCStack_13;
    hit.collider = (Collider *)pTStack_14;
    hit.transform = (Transform *)uStack_15;
    hit._60_4_ = (int)iStack_16;
    hit.interactionFlags._0_4_ = (float)((ulonglong)iStack_16 >> 0x20);
    hit.interactionFlags._4_4_ = _addToSelection;
    pWVar17 = SelectionController_Select_1(this,hit,showVisuals,0,in_stack_5);
    return pWVar17;
  }
  return (WorldObjectClientRef *)0x0;
}


/* Boolean SelectParent(Boolean) */

bool Assembly-CSharp.dll::SelectionController::SelectionController_SelectParent
               (SelectionController *this,bool showVisuals,MethodInfo *method)

{
  SelectionController_DeSelectAll(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    cRam_? = '\x01';
  }
  pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
            ::Stack_1_UnityEngine_UIElements_TextureId__Peek
                      (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_00,(MethodInfo *)0x0);
      if (pMVar3 != (MVGroup *)0x0) {
        if (TVar2.m_Index == (pMVar3->fields)._._.id) {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar1 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
        if (pSVar1 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                  TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                            (pSVar1,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          pWVar4 = SelectionController_SelectWO(this,TVar2.m_Index,0,showVisuals,(MethodInfo *)0x0);
          return pWVar4 != (WorldObjectClientRef *)0x0;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* WorldObjectClientRef SelectWO(Int32, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_SelectWO
          (SelectionController *this,int32_t id,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
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
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,id,(MethodInfo *)0x0);
    if (addToSelection == 0) {
      SelectionController_DeSelectAllExcept(this,id,(MethodInfo *)0x0);
    }
    if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
    iVar2 = (this_01->fields)._.ownerActorNr;
    if (iVar2 != 0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame *)0x0) goto code_?;
      pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
      if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
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
    pSVar5 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
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
                          (this_01,InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          method = (MethodInfo *)&UNK_?;
          pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&id,(MethodInfo *)0x0);
          method = (MethodInfo *)&UNK_?;
          SelectionController_get_ParentGroupID(this,(MethodInfo *)0x0);
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
      pSVar5 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
      if (pSVar5 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar6 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                 TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                           (pSVar5,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        if (TVar6.m_Index != (this_01->fields)._.groupId) {
          SelectionController_PushWOParents(this,this_01,0,(MethodInfo *)0x0);
        }
        this_00 = (this->fields).selectedIDs;
        if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_00,(this_01->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          woID = (this_01->fields)._.id;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                     ,(MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                      (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_03,
                       (MethodInfo *)0x0);
            pMVar9 = this_01->klass;
            if (showVisuals == 0) {
              _addToSelection = (String *)(pMVar9->vtable).Select_1.methodPtr;
              id = (int32_t)this_01;
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
                                 (pMVar1,(this_01->fields)._.id,(MethodInfo *)0x0);
              return pWVar8;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pWVar8 = (WorldObjectClientRef *)(*pcVar10)();
  return pWVar8;
}


/* WorldObjectClientRef Select(VoxelHit, Boolean, Boolean) */

WorldObjectClientRef *
Assembly-CSharp.dll::SelectionController::SelectionController_Select_1
          (SelectionController *this,VoxelHit hit,bool addToSelection,bool showVisuals,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
    func_?(&StringLiteral_Could_not_find_appropriate_group);
    cRam_? = '\x01';
  }
  if ((hit._60_4_ & 1) == 0) {
    pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                       ((MethodInfo *)0x0);
    return pWVar1;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,hit._36_4_,(MethodInfo *)0x0);
    if ((hit._60_4_ & 0x10) == 0) {
      if ((pMVar2 == (MVWorldObject *)0x0) ||
         (this_00 = (this->fields).parentGroups, this_00 == (Stack_1_System_Int32_ *)0x0))
      goto code_?;
      bVar3 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
              Stack_1_System_Int32__Contains
                        (this_00,(pMVar2->fields).groupId,
                         MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
      if ((bVar3 != 0) || ((hit._60_4_ & 8) != 0)) {
        pWVar1 = SelectionController_SelectWO
                           (this,(pMVar2->fields).id,hit.interactionFlags._4_1_,addToSelection,
                            (MethodInfo *)0x0);
        return pWVar1;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
    if ((this_01 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) &&
       (currentParent =
             mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
             ::Stack_1_UnityEngine_UIElements_TextureId__Peek
                       (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Peek__),
       pMVar2 != (MVWorldObject *)0x0)) {
      id = MVGroup::MVGroup_GetGroupAbove
                     (currentParent.m_Index,(pMVar2->fields).id,
                      InteractionFlags__Enum_DirectlySelectable,(MethodInfo *)0x0);
      if (id != -1) {
        pWVar1 = SelectionController_SelectWO
                           (this,id,hit.interactionFlags._4_1_,addToSelection,(MethodInfo *)0x0);
        return pWVar1;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Could_not_find_appropriate_group,(MethodInfo *)0x0);
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      return pWVar1;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pWVar1 = (WorldObjectClientRef *)(*pcVar4)();
  return pWVar1;
}


/* Void WOCM_WorldObjectDestroyedHandler(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::SelectionController::SelectionController_WOCM_WorldObjectDestroyedHandler
               (SelectionController *this,Object *sender,WorldObjectDestroyedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    cRam_? = '\x01';
  }
  bVar1 = false;
  if ((e != (WorldObjectDestroyedEventArgs *)0x0) &&
     (pHVar2 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs,
     pHVar2 != (HashSet_1_System_UInt32_ *)0x0)) {
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__Contains
                      (pHVar2,(e->fields).WordObjectID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar3 != 0) {
      pHVar2 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
      bVar1 = true;
      if (pHVar2 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
      HashSet_1_System_UInt32__Remove
                (pHVar2,(e->fields).WordObjectID,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    }
    this_00 = (this->fields).parentGroups;
    if (this_00 != (Stack_1_System_Int32_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
              Stack_1_System_Int32__Contains
                        (this_00,(e->fields).WordObjectID,
                         MethodInfo__System__Collections__Generic__Stack<int>__Contains_int_);
      if (bVar3 == 0) {
        if (!bVar1) {
          return;
        }
      }
      else {
        do {
          this_01 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
          iVar4 = (e->fields).WordObjectID;
          if (this_01 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
          TVar5 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                  TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Pop
                            (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
        } while (iVar4 != TVar5.m_Index);
      }
      pEVar6 = (this->fields).SelectedWorldObjectDeleted;
      if (pEVar6 != (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
        (*(pEVar6->fields)._._.invoke_impl)
                  ((pEVar6->fields)._._.method_code,this,e,(pEVar6->fields)._._.method);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SelectionController() */

void Assembly-CSharp.dll::SelectionController::SelectionController__ctor
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Stack__);
    func_?(&TypeInfo__System__Collections__Generic__Stack<int>);
    func_?(&
                    MethodInfo__SelectionController____c____ctor_b__19_0_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&TypeInfo__SelectionController____c);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).selectedIDs = this_01;
  func_?(&this->fields,this_01);
  this_02 = (Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
            func_?(TypeInfo__System__Collections__Generic__Stack<int>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor
            (this_02,MethodInfo__System__Collections__Generic__Stack<int>__Stack__);
  ppSVar1 = &(this->fields).parentGroups;
  *ppSVar1 = (Stack_1_System_Int32_ *)this_02;
  func_?(ppSVar1,this_02);
  if ((TypeInfo__SelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SelectionController____c);
  }
  this_03 = TypeInfo__SelectionController____c->static_fields->__9__19_0;
  if (this_03 == (EventHandler_1_WorldObjectDestroyedEventArgs_ *)0x0) {
    if ((TypeInfo__SelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SelectionController____c);
    }
    object = TypeInfo__SelectionController____c->static_fields->__9;
    this_03 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)
              func_?(TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)this_03,(Object *)object,
               MethodInfo__SelectionController____c____ctor_b__19_0_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    TypeInfo__SelectionController____c->static_fields->__9__19_0 = this_03;
    func_?(&TypeInfo__SelectionController____c->static_fields->__9__19_0,this_03);
  }
  method_00 = (MethodInfo *)&(this->fields).SelectedWorldObjectDeleted;
  *(EventHandler_1_WorldObjectDestroyedEventArgs_ **)method_00 = this_03;
  func_?(method_00,this_03);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_04 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                       (this_04,(MethodInfo *)0x0);
    if ((pMVar2 != (MVGroup *)0x0) && (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0))
    {
      mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
      Stack_1_UnityEngine_UIElements_TextureId__Push
                (this_00,(TextureId)(pMVar2->fields)._._.id,
                 MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_add_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
  return;
}


/* MVGroup get_ParentGroup() */

MVGroup * Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroup
                    (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGroup);
    cRam_? = '\x01';
  }
  this_01 = (MVGroup__Class *)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    id = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
         Stack_1_UnityEngine_UIElements_TextureId__Peek
                   (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    if (this_01 != (MVGroup__Class *)0x0) {
      pMVar1 = (MVGroup *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         ((MVWorldObjectClientManager *)this_01,id.m_Index,(MethodInfo *)0x0);
      if (pMVar1 == (MVGroup *)0x0) {
        return (MVGroup *)0x0;
      }
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      this_01 = TypeInfo__MVGroup;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] == TypeInfo__MVGroup)) {
        return pMVar1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pMStack3 = this_01;
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar1 = (MVGroup *)(*pcVar4)();
  return pMVar1;
}


/* Int32 get_ParentGroupID() */

int32_t Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroupID
                  (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
            ::Stack_1_UnityEngine_UIElements_TextureId__Peek
                      (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    return TVar1.m_Index;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean get_ParentGroupIsRoot() */

bool Assembly-CSharp.dll::SelectionController::SelectionController_get_ParentGroupIsRoot
               (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this->fields).parentGroups;
  if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
            ::Stack_1_UnityEngine_UIElements_TextureId__Peek
                      (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVGroup *)0x0) {
        return TVar1.m_Index == (pMVar2->fields)._._.id;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* HashSet`1[MVWorldObjectClient] get_SelectedWOs() */

HashSet_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SelectedWOs
          (SelectionController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  pHVar4 = (HashSet_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)pHVar4,
             MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__HashSet__);
  this_00 = (HashSet_1_System_UInt32_ *)(this->fields).selectedIDs;
  if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
    pHVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffd4,this_00,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    id = pHVar5->_current;
    uStack_1 = 1;
    while( true ) {
      bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]
              ::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                        ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   ,in_stack_7);
        *unaff_FS_OFFSET = uStack_3;
        return pHVar4;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) break;
      item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,id,(MethodInfo *)0x0);
      if (pHVar4 == (HashSet_1_MVWorldObjectClient_ *)0x0) break;
      in_stack_7 = (MethodInfo *)&UNK_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Object_ *)pHVar4,(Object *)item,
                 MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__Add_MVWorldObjectClient_
                );
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pHVar4 = (HashSet_1_MVWorldObjectClient_ *)(*pcVar8)();
  return pHVar4;
}


/* MVWorldObjectClient get_SingleSelectedWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::SelectionController::SelectionController_get_SingleSelectedWO
          (SelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&StringLiteral_Trying_to_access_single_selected);
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).selectedIDs;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if ((pHVar1->fields)._count != 1) {
      if (0 < (pHVar1->fields)._count) {
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
                   ((IEnumerable_1_System_Object_ *)(this->fields).selectedIDs,
                    int_MethodInfo__System__Linq__Enumerable__First<int>_System__Collections__Generic__IEnumerable<int>_
                   );
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,(int32_t)id,(MethodInfo *)0x0);
      return pMVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar2;
}


/* Void remove_SelectedWorldObjectDeleted(EventHandler`1[WorldObjectDestroyedEventArgs]) */

void Assembly-CSharp.dll::SelectionController::SelectionController_remove_SelectedWorldObjectDeleted
               (SelectionController *this,EventHandler_1_WorldObjectDestroyedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).SelectedWorldObjectDeleted;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<WorldObjectDestroyedEventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_WorldObjectDestroyedEventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}

