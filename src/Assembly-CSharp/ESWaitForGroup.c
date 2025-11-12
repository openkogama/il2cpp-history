
/* Void CreateGroup(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_CreateGroup
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  transforms = (List_1_UnityEngine_Transform_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  if (((e != (EditorStateMachine *)0x0) &&
      (pSVar1 = (e->fields).selectionController, pSVar1 != (SelectionController *)0x0)) &&
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(pSVar1,(MethodInfo *)0x0),
     pHVar2 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pHStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    lStack_9 = (ulonglong)(uint)(pHVar2->fields)._version << 0x20;
    uStack_10 = 0;
    aHStack_11[0]._index = (undefined4)lStack_9;
    aHStack_11[0]._version = lStack_9._4_4_;
    aHStack_11[0]._current = (Object *)0x0;
    auStack_12._0_4_ = 0.0;
    auStack_12._4_4_ = 0.0;
    auStack_12._8_8_ = aHStack_11;
    pHStack_4 = pHVar2;
    aHStack_11[0]._set = (HashSet_1_System_Object_ *)pHVar2;
    while (bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                              (aHStack_11,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              ),
          pMVar14 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
          , bVar13 != 0) {
      if (aHStack_11[0]._current == (Object *)0x0) goto code_?;
      item = (Object *)aHStack_11[0]._current[0xd].monitor;
      if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      piVar15 = &(transforms->fields)._version;
      *piVar15 = *piVar15 + 1;
      pTVar16 = (transforms->fields)._items;
      uVar3 = (transforms->fields)._size;
      if (pTVar16 == (Transform__Array *)0x0) goto code_?;
      if (uVar3 < (uint)pTVar16->max_length) {
        (transforms->fields)._size = uVar3 + 1;
        FUN_?(pTVar16,(longlong)(int)uVar3);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)transforms,item,pMVar14->klass->rgctx_data[0xe].method);
      }
    }
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar17 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                        ((Vector3 *)auStack_12,transforms,(MethodInfo *)0x0);
    uVar18._0_4_ = pVVar17->x;
    uVar18._4_4_ = pVVar17->y;
    fVar19 = pVVar17->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar20 != (MVGameControllerBase *)0x0) &&
        (pMVar21 = (pMVar20->fields).game, pMVar21 != (MVNetworkGame *)0x0)) &&
       (pWVar22 = (pMVar21->fields).worldNetwork, pWVar22 != (WorldNetwork *)0x0)) {
      pEVar23 = (pWVar22->fields)._.InitializedGameQueryData;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar24 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pEVar23,(Delegate *)this_01,(MethodInfo *)0x0);
      pEVar25 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pDVar24 == (Delegate *)0x0) {
        (pWVar22->fields)._.InitializedGameQueryData =
             (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      }
      else {
        pEVar23 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                  FUN_?(pDVar24,
                                TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        if (pEVar23 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
          FUN_?(pDVar24,pEVar25);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        (pWVar22->fields)._.InitializedGameQueryData = pEVar23;
        pEVar25 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        lVar5 = FUN_?(pDVar24,
                               TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        if (lVar5 == 0) {
          FUN_?(pDVar24,pEVar25);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pWVar22->fields)._.InitializedGameQueryData >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar20 != (MVGameControllerBase *)0x0) &&
         (pMVar21 = (pMVar20->fields).game, pMVar21 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar21->fields).operationRequests;
        pSVar1 = (e->fields).selectionController;
        if (pSVar1 != (SelectionController *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pSVar1->fields).parentGroups != (Stack_1_System_Int32_ *)0x0) {
            groupId = FUN_?();
            this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            pMVar14 = 
            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pQVar27 = TypeInfo__UnityEngine__Quaternion->static_fields;
            pHVar2 = *(HashSet_1_MVWorldObjectClient_ **)&pQVar27->identityQuaternion;
            uVar28._0_4_ = (pQVar27->identityQuaternion).z;
            uVar28._4_4_ = (pQVar27->identityQuaternion).w;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
              VStack_30.x = (pVVar29->oneVector).x;
              VStack_30.y = (pVVar29->oneVector).y;
              VStack_30.z = (pVVar29->oneVector).z;
              auStack_12._8_4_ = fVar19;
              auStack_12._0_8_ = uVar18;
              pHStack_4 = pHVar2;
              lStack_9 = uVar28;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestBuiltInItem
                        (this_00,(BuiltInItem__Enum)CONCAT71((int7)((ulonglong)pMVar14 >> 8),2),
                         groupId,(Dictionary_2_System_Object_System_Object_ *)this_02,
                         (Vector3 *)auStack_12,(Quaternion *)&pHStack_4,&VStack_30,1,1,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_Enter
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    (e->fields)._.lockState = 1;
    pSVar1 = (e->fields).selectionController;
    if ((pSVar1 != (SelectionController *)0x0) &&
       (pHVar2 = (pSVar1->fields).selectedIDs, pHVar2 != (HashSet_1_System_Int32_ *)0x0)) {
      if (((pHVar2->fields)._count == 0) || ((pHVar2->fields)._count == 1)) {
        (e->fields)._.lockState = 0;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__EditorEvent);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((e->fields)._.lockState == 0) {
          this_02 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(e->fields)._.stateStack;
          if (this_02 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0)
          goto code_?;
          if (0 < (this_02->fields)._size) {
            aiStackX_10[0] =
                 (int32_t)mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::
                          UIElements::TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Pop
                                    (this_02,
                                     MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__
                                    );
            (e->fields)._.clearStack = 0;
            value = (Object *)FUN_?(TypeInfo__EditorEvent,aiStackX_10);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
          }
        }
        return;
      }
      pLVar3 = (List_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      FUN_?(pLVar3,MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).lockList = pLVar3;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).lockList >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      (this->fields).state = 0;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
        pEVar10 = (pMVar9->fields).OnHierarchyLockedResponse;
        this_03 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pEVar10,(Delegate *)this_03,(MethodInfo *)0x0);
        pEVar12 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        if (pDVar11 == (Delegate *)0x0) {
          (pMVar9->fields).OnHierarchyLockedResponse =
               (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
        }
        else {
          pEVar10 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)
                    FUN_?(pDVar11,TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>
                                 );
          if (pEVar10 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
            FUN_?(pDVar11,pEVar12);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pMVar9->fields).OnHierarchyLockedResponse = pEVar10;
          pEVar12 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          lVar5 = FUN_?(pDVar11,TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>)
          ;
          if (lVar5 == 0) {
            FUN_?(pDVar11,pEVar12);
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
code_?:
            FUN_?();
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&(pMVar9->fields).OnHierarchyLockedResponse >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pSVar1 = (e->fields).selectionController;
        if ((pSVar1 != (SelectionController *)0x0) &&
           (pHVar2 = (pSVar1->fields).selectedIDs, pHVar2 != (HashSet_1_System_Int32_ *)0x0)) {
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&uStack_14 >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          iStack_15 = (pHVar2->fields)._version;
          uStack_16 = 0;
          uStack_14._0_4_ = SUB84(pHVar2,0);
          uStack_14._4_4_ = (undefined4)((ulonglong)pHVar2 >> 0x20);
          uStack_17 = (undefined4)uStack_14;
          uStack_18 = uStack_14._4_4_;
          uStack_19 = 0;
          uStack_20 = 0;
          uStack_14 = 0;
          puStack_21 = &uStack_17;
          while (cVar22 = FUN_?(&uStack_17,
                                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                       ),
                pMVar23 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                cVar22 != '\0') {
            worldObjectID = (UInt32Enum__Enum)uStack_20;
            this_00 = (List_1_System_UInt32Enum_ *)(this->fields).lockList;
            if (this_00 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            piVar24 = &(this_00->fields)._version;
            *piVar24 = *piVar24 + 1;
            pUVar25 = (this_00->fields)._items;
            uVar4 = (this_00->fields)._size;
            if (pUVar25 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
            if (uVar4 < (uint)pUVar25->max_length) {
              (this_00->fields)._size = uVar4 + 1;
              if ((uint)pUVar25->max_length <= uVar4) goto code_?;
              pUVar25->vector[(int)uVar4] = (UInt32Enum__Enum)uStack_20;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
              List_1_System_UInt32Enum__AddWithResize
                        (this_00,(UInt32Enum__Enum)uStack_20,pMVar23->klass->rgctx_data[0xe].method)
              ;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar26 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (pMVar26 == (MVGameControllerBase *)0x0) goto code_?;
            pMVar27 = (pMVar26->fields).game;
            if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
            this_01 = (pMVar27->fields).operationRequests;
            if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                      (this_01,worldObjectID,1,(MethodInfo *)0x0);
          }
          pLVar3 = (this->fields).lockList;
          if (pLVar3 != (List_1_System_Int32_ *)0x0) {
            (this->fields).lockCount = (pLVar3->fields)._size;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_Execute
               (ESWaitForGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).abort == 0) {
    iVar1 = (this->fields).state;
    if (iVar1 == 0) {
      if ((this->fields).responseReceived == 0) {
        return;
      }
      ESWaitForGroup_CreateGroup(this,e,(MethodInfo *)0x0);
      (this->fields).state = 1;
      (this->fields).responseReceived = 0;
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      if ((this->fields).responseReceived == 0) {
        return;
      }
      if ((e != (EditorStateMachine *)0x0) &&
         (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
        SelectionController::SelectionController_SelectWO
                  (this_00,(this->fields).createGroupId,0,1,(MethodInfo *)0x0);
        (e->fields)._.lockState = 0;
        goto code_?;
      }
      goto code_?;
    }
    if ((this->fields).responseReceived == 0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pEVar3 = (pMVar2->fields).OnTransferWosResponse;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    pEVar5 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnTransferWosResponse =
           (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
    }
    else {
      pEVar3 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)
                FUN_?(pDVar4,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>
                             );
      if (pEVar3 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
        FUN_?(pDVar4,pEVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnTransferWosResponse = pEVar3;
      pEVar5 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
      lVar7 = FUN_?(pDVar4,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>)
      ;
      if (lVar7 == 0) {
        FUN_?(pDVar4,pEVar5);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        goto code_?;
      }
    }
    func_?();
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    iVar9 = (this->fields).createGroupId;
    pLVar10 = (this->fields).lockList;
    if ((pLVar10 != (List_1_System_Int32_ *)0x0) &&
       (worldObjects = (Int32__Array *)
                       FUN_?(pLVar10,
                                     MethodInfo__System__Collections__Generic__List<int>__ToArray__)
       , pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferWorldObjectsToGroup
                (pMVar8,iVar9,worldObjects,(MethodInfo *)0x0);
      pLVar10 = (this->fields).lockList;
      if (pLVar10 != (List_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&uStack_12 >> 0xc);
          puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar14 = *puVar13;
            LOCK();
            uVar15 = *puVar13;
            if (uVar14 == uVar15) {
              *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar14 != uVar15);
        }
        iStack_16 = (pLVar10->fields)._version;
        uStack_17 = 0;
        uStack_12._0_4_ = SUB84(pLVar10,0);
        uStack_12._4_4_ = (undefined4)((ulonglong)pLVar10 >> 0x20);
        uStack_18 = (undefined4)uStack_12;
        uStack_19 = uStack_12._4_4_;
        uStack_20 = 0;
        uStack_21 = 0;
        uStack_12 = 0;
        puStack_22 = &uStack_18;
        while (lVar7 = CONCAT44(uStack_19,uStack_18), lVar7 != 0) {
          if ((iStack_16 != *(int *)(lVar7 + 0x1c)) || (*(uint *)(lVar7 + 0x18) <= uStack_20)) {
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
                 klass->field_0x135 & 1) == 0) {
              FUN_?();
              lVar7 = CONCAT44(uStack_19,uStack_18);
            }
            if (lVar7 == 0) goto code_?;
            if (iStack_16 != *(int *)(lVar7 + 0x1c)) goto code_?;
            uStack_20 = *(int *)(lVar7 + 0x18) + 1;
            uStack_21 = uStack_21 & 0xffffffff00000000;
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership
                        (pMVar8,(this->fields).createGroupId,0,(Transform *)0x0,(MethodInfo *)0x0);
              (this->fields).state = 2;
              (this->fields).responseReceived = 0;
              return;
            }
            goto code_?;
          }
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if (lVar7 == 0) goto code_?;
          if (*(uint *)(lVar7 + 0x18) <= uStack_20) goto code_?;
          iVar9 = *(int32_t *)(lVar7 + 0x20 + (longlong)(int)uStack_20 * 4);
          uStack_21 = CONCAT44(uStack_21._4_4_,iVar9);
          uStack_20 = uStack_20 + 1;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar23 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar23 == (MVGameControllerBase *)0x0) goto code_?;
          pMVar24 = (pMVar23->fields).game;
          if (pMVar24 == (MVNetworkGame *)0x0) goto code_?;
          pMVar8 = (pMVar24->fields).operationRequests;
          if (pMVar8 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                    (pMVar8,iVar9,0,(MethodInfo *)0x0);
        }
code_?:
        FUN_?();
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else if (e != (EditorStateMachine *)0x0) {
    (e->fields)._.lockState = 0;
code_?:
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_InitializedGameQueryData
               (ESWaitForGroup *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Received_group);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 && (e != (InitializedGameQueryDataEventArgs *)0x0)))) {
    if ((pMVar3->fields)._._ActorNr_k__BackingField != (e->fields).InstigatorActorNumber) {
      return;
    }
    (this->fields).responseReceived = 1;
    pMVar4 = (e->fields).RootWO;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      bVar5 = cRam_? == '\0';
      (this->fields).createGroupId = (pMVar4->fields)._.id;
      if (bVar5) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pWVar6 = (pMVar2->fields).worldNetwork, pWVar6 != (WorldNetwork *)0x0)) {
        pEVar7 = (pWVar6->fields)._.InitializedGameQueryData;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__ESWaitForGroup__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pEVar7,(Delegate *)this_01,(MethodInfo *)0x0);
        pEVar9 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (pDVar8 == (Delegate *)0x0) {
          (pWVar6->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        }
        else {
          pEVar7 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    FUN_?(pDVar8,
                                  TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
          ;
          if (pEVar7 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            FUN_?(pDVar8,pEVar9);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (pWVar6->fields)._.InitializedGameQueryData = pEVar7;
          pEVar9 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          lVar11 = FUN_?();
          if (lVar11 == 0) {
            FUN_?(pDVar8,pEVar9);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)&(pWVar6->fields)._.InitializedGameQueryData >> 0xc);
          puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar14 = *puVar13;
            LOCK();
            uVar15 = *puVar13;
            if (uVar14 == uVar15) {
              *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (uVar14 != uVar15);
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Received_group,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WOCM_OnHierarchyLockedResponse(Object, OnHierarchyLockedEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_OnHierarchyLockedResponse
               (ESWaitForGroup *this,Object *sender,OnHierarchyLockedEventArgs *e,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WOCM_OnHierarchyLockedResponse);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_WOCM_OnHierarchyLockedResponse,(MethodInfo *)0x0);
  if (e != (OnHierarchyLockedEventArgs *)0x0) {
    if ((e->fields).success == 0) {
      pLVar1 = (this->fields).lockList;
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
          lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        iStack_8 = (pLVar1->fields)._version;
        uStack_9 = 0;
        uStack_3._0_4_ = SUB84(pLVar1,0);
        uStack_3._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
        uStack_10 = (undefined4)uStack_3;
        uStack_11 = uStack_3._4_4_;
        uStack_12 = 0;
        uStack_13 = 0;
        uStack_3 = 0;
        puStack_14 = &uStack_10;
        while (lVar4 = CONCAT44(uStack_11,uStack_10), lVar4 != 0) {
          if ((iStack_8 != *(int *)(lVar4 + 0x1c)) || (*(uint *)(lVar4 + 0x18) <= uStack_12)) {
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
                 klass->field_0x135 & 1) == 0) {
              FUN_?();
              lVar4 = CONCAT44(uStack_11,uStack_10);
            }
            if (lVar4 == 0) goto code_?;
            if (iStack_8 != *(int *)(lVar4 + 0x1c)) goto code_?;
            uStack_12 = *(int *)(lVar4 + 0x18) + 1;
            uStack_13 = uStack_13 & 0xffffffff00000000;
            (this->fields).abort = 1;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar15 != (MVGameControllerBase *)0x0) &&
                 (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                ((pMVar16->fields).worldNetwork != (WorldNetwork *)0x0)) &&
               (pMVar17 = (((pMVar16->fields).worldNetwork)->fields)._.worldObjectClientManager,
               pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0)) {
              pEVar18 = (pMVar17->fields)._.OnHierarchyLockedResponse;
              pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar19,(Object *)this,
                         MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                         ,(MethodInfo *)0x0);
              pDVar20 = mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pEVar18,(Delegate *)pUVar19,(MethodInfo *)0x0);
              pEVar21 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
              if (pDVar20 == (Delegate *)0x0) {
                (pMVar17->fields)._.OnHierarchyLockedResponse =
                     (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
              }
              else {
                pEVar18 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)
                          FUN_?(pDVar20,
                                        TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
                if (pEVar18 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
                  FUN_?(pDVar20,pEVar21);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                (pMVar17->fields)._.OnHierarchyLockedResponse = pEVar18;
                pEVar21 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
                lVar4 = FUN_?(pDVar20,
                                       TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
                if (lVar4 == 0) {
                  FUN_?(pDVar20,pEVar21);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
              }
              if (iRam_? == 0) {
                return;
              }
              uVar2 = (uint)((ulonglong)&(pMVar17->fields)._.OnHierarchyLockedResponse >> 0xc);
              lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
              return;
            }
            goto code_?;
          }
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if (lVar4 == 0) goto code_?;
          if (*(uint *)(lVar4 + 0x18) <= uStack_12) goto code_?;
          worldObjectID = *(int32_t *)(lVar4 + 0x20 + (longlong)(int)uStack_12 * 4);
          uStack_13 = CONCAT44(uStack_13._4_4_,worldObjectID);
          uStack_12 = uStack_12 + 1;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar15 == (MVGameControllerBase *)0x0) goto code_?;
          pMVar16 = (pMVar15->fields).game;
          if (pMVar16 == (MVNetworkGame *)0x0) goto code_?;
          this_00 = (pMVar16->fields).operationRequests;
          if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LockHierarchy
                    (this_00,worldObjectID,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
    else {
      piVar23 = &(this->fields).lockCount;
      *piVar23 = *piVar23 + -1;
      if (*piVar23 != 0) {
        return;
      }
      (this->fields).responseReceived = 1;
      pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar24 != (MVWorldObjectClientManager *)0x0) {
        pEVar18 = (pMVar24->fields).OnHierarchyLockedResponse;
        pUVar19 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar19,(Object *)this,
                   MethodInfo__ESWaitForGroup__WOCM_OnHierarchyLockedResponse_System__Object__OnHierarchyLockedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar20 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pEVar18,(Delegate *)pUVar19,(MethodInfo *)0x0);
        pEVar21 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
        if (pDVar20 == (Delegate *)0x0) {
          (pMVar24->fields).OnHierarchyLockedResponse =
               (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0;
        }
        else {
          pEVar18 = (EventHandler_1_OnHierarchyLockedEventArgs_ *)
                    FUN_?(pDVar20,TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>
                                 );
          if (pEVar18 == (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
            FUN_?(pDVar20,pEVar21);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          (pMVar24->fields).OnHierarchyLockedResponse = pEVar18;
          pEVar21 = TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>;
          lVar4 = FUN_?(pDVar20,TypeInfo__System__EventHandler<OnHierarchyLockedEventArgs>)
          ;
          if (lVar4 == 0) {
            FUN_?(pDVar20,pEVar21);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
        }
        if (iRam_? == 0) {
          return;
        }
        uVar2 = (uint)((ulonglong)&(pMVar24->fields).OnHierarchyLockedResponse >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
        return;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void WOCM_OnTransferWosResponse(Object, OnTransferWosResponseEventArgs) */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup_WOCM_OnTransferWosResponse
               (ESWaitForGroup *this,Object *sender,OnTransferWosResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).responseReceived = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pEVar3 = (pMVar1->fields).OnTransferWosResponse;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ESWaitForGroup__WOCM_OnTransferWosResponse_System__Object__OnTransferWosResponseEventArgs_
             ,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pEVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pEVar5 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
  if (pDVar4 == (Delegate *)0x0) {
    (pMVar1->fields).OnTransferWosResponse = (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
  }
  else {
    pEVar3 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)
             FUN_?(pDVar4,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    if (pEVar3 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
      FUN_?(pDVar4,pEVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pMVar1->fields).OnTransferWosResponse = pEVar3;
    pEVar5 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    lVar6 = FUN_?(pDVar4,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    if (lVar6 == 0) {
      FUN_?(pDVar4,pEVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar1->fields).OnTransferWosResponse >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* ESWaitForGroup() */

void Assembly-CSharp.dll::ESWaitForGroup::ESWaitForGroup__ctor
               (ESWaitForGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).lockList = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).lockList >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  (this->fields).createGroupId = -1;
  pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar4 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar10 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.logger = pIVar10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar4 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

