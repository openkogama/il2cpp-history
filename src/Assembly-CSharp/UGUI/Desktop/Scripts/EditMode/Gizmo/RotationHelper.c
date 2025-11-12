
/* Void DoGridSnapping(List`1[WorldObjectClientRef]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_DoGridSnapping(List_1_WorldObjectClientRef_ *targets,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    cVar1 = FUN_?(0,TypeInfo__IEditModeUI);
    uVar2 = _UNK_?;
    if (cVar1 == '\0') {
      uVar2 = _UNK_?;
    }
    if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
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
                   ((ulonglong)(uint)(targets->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = (List_1_System_Object_ *)targets;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                          );
        pOVar13 = LStack_11._current;
        pMVar14 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
        if (bVar12 == 0) {
          return;
        }
        if (LStack_11._current == (Object *)0x0) break;
        this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this == (MVWorldObjectClientManager *)0x0) {
          FUN_?();
          break;
        }
        pOVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (this,*(int32_t *)&pOVar13[1].klass,pMVar14->klass->rgctx_data[1].method);
        if (pOVar13 != (Object *)0x0) {
          puVar15 = (undefined8 *)
                   (*(code *)pOVar13->klass[1].vtable.Finalize.method)
                             (auStack_16,pOVar13,pOVar13->klass[1].vtable.GetHashCode.methodPtr);
          uStack_17 = *puVar15;
          uStack_18 = *(undefined4 *)(puVar15 + 1);
          puVar15 = (undefined8 *)
                   (**(code **)&pOVar13->klass[3]._1.cctor_finished_or_no_cctor)
                             (auStack_19,pOVar13,uVar2,&uStack_17,pOVar13->klass[3]._1.cctor_thread);
          uStack_20 = *puVar15;
          uStack_21 = *(undefined4 *)(puVar15 + 1);
          (**(code **)&pOVar13->klass[2]._0.byval_arg.attrs)
                    (pOVar13,&uStack_20,pOVar13->klass[2]._0.this_arg.data.dummy);
        }
      }
      FUN_?();
      FUN_?();
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Vector3 GetPivot(List`1[WorldObjectClientRef], List`1[UnityEngine.Transform]) */

Vector3 * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
          RotationHelper_GetPivot
                    (Vector3 *__return_storage_ptr__,List_1_WorldObjectClientRef_ *targets,
                    List_1_UnityEngine_Transform_ *targetTransforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
    if ((targets->fields)._size != 1) {
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                         (&VStack_3,targetTransforms,(MethodInfo *)0x0);
code_?:
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
    if ((targets->fields)._size == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar6)();
      return pVVar2;
    }
    pWVar7 = (targets->fields)._items;
    if (pWVar7 != (WorldObjectClientRef__Array *)0x0) {
      if ((int)pWVar7->max_length == 0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        pVVar2 = (Vector3 *)(*pcVar6)();
        return pVVar2;
      }
      pWVar8 = pWVar7->vector[0];
      if (pWVar8 != (WorldObjectClientRef *)0x0) {
        this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this != (MVWorldObjectClientManager *)0x0) {
          pOVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                             (this,(pWVar8->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
          if (pOVar9 != (Object *)0x0) {
            pVVar2 = (Vector3 *)
                     (*(code *)pOVar9->klass[2]._0.typeMetadataHandle)
                               (&VStack_3,pOVar9,pOVar9->klass[2]._0.interopData);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar6)();
  return pVVar2;
}


/* Boolean IsRotationInvalid() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_IsRotationInvalid(RotationHelper *this,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if ((pEVar1 != (EditorStateMachine *)0x0) &&
     (pSVar2 = (pEVar1->fields).selectionController, this = (RotationHelper *)0x0,
     pSVar2 != (SelectionController *)0x0)) {
    method = (MethodInfo *)(pSVar2->fields).selectedIDs;
    this_00 = (pEVar1->fields).networkSelector;
    this = (RotationHelper *)0x0;
    if (this_00 != (MVNetworkSelector *)0x0) {
      bVar3 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                        (this_00,(HashSet_1_System_Int32_ *)method,(MethodInfo *)0x0);
      return bVar3 ^ 1;
    }
  }
  FUN_?(this,method);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_ResetRotation(RotationHelper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
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
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  pEVar2 = (this->fields).editorStateMachine;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    pMVar3 = (pEVar2->fields).networkSelector;
    pSVar4 = (pEVar2->fields).selectionController;
    if ((pSVar4 != (SelectionController *)0x0) && (pMVar3 != (MVNetworkSelector *)0x0)) {
      bVar5 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                         (pMVar3,(pSVar4->fields).selectedIDs,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      targets = (HashSet_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)targets,
                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
      pEVar2 = (this->fields).editorStateMachine;
      if (((pEVar2 != (EditorStateMachine *)0x0) &&
          (pSVar4 = (pEVar2->fields).selectionController, pSVar4 != (SelectionController *)0x0)) &&
         (pHVar6 = (pSVar4->fields).selectedIDs, pHVar6 != (HashSet_1_System_Int32_ *)0x0)) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pHStack_8 >> 0xc);
          lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        lStack_13 = (ulonglong)(uint)(pHVar6->fields)._version << 0x20;
        uStack_14 = 0;
        aLStack_15[0]._index = (undefined4)lStack_13;
        aLStack_15[0]._version = lStack_13._4_4_;
        aLStack_15[0]._current = (Object *)0x0;
        uStack_16 = 0;
        pLStack_17 = aLStack_15;
        pHStack_8 = pHVar6;
        aLStack_15[0]._list = (List_1_System_Object_ *)pHVar6;
        while (cVar18 = FUN_?(aLStack_15), cVar18 != '\0') {
          id = (int32_t)aLStack_15[0]._current;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar19 == (MVGameControllerBase *)0x0) goto code_?;
          pMVar20 = (pMVar19->fields).game;
          if (pMVar20 == (MVNetworkGame *)0x0) goto code_?;
          if (((pMVar20->fields).worldNetwork == (WorldNetwork *)0x0) ||
             (pMVar21 = (MVWorldObjectClientManager *)
                        (((pMVar20->fields).worldNetwork)->fields)._.worldObjectClientManager,
             pMVar21 == (MVWorldObjectClientManager *)0x0)) goto code_?;
          item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                           (pMVar21,id,(MethodInfo *)0x0);
          pMVar22 = 
          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
          ;
          if (targets == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          piVar23 = (int32_t *)((longlong)&(targets->fields)._slots + 4);
          *piVar23 = *piVar23 + 1;
          pWVar24 = (WorldObjectClientRef__Array *)(targets->fields)._buckets;
          uVar7 = *(uint *)&(targets->fields)._slots;
          if (pWVar24 == (WorldObjectClientRef__Array *)0x0) goto code_?;
          if (uVar7 < (uint)pWVar24->max_length) {
            *(uint *)&(targets->fields)._slots = uVar7 + 1;
            FUN_?();
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)targets,(Object *)item,
                       pMVar22->klass->rgctx_data[0xe].method);
          }
        }
        bVar5 = RotationHelper_ValidateTargets
                           ((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        if (targets != (HashSet_1_System_Int32_ *)0x0) {
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&pHStack_8 >> 0xc);
            lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          lStack_13 = (ulonglong)(uint)*(int32_t *)((longlong)&(targets->fields)._slots + 4) << 0x20
          ;
          uStack_14 = 0;
          LStack_1._index = (undefined4)lStack_13;
          LStack_1._version = lStack_13._4_4_;
          LStack_1._current = (Object *)0x0;
          uStack_16 = 0;
          pLStack_17 = &LStack_1;
          pHStack_8 = targets;
          LStack_1._list = (List_1_System_Object_ *)targets;
          while (bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    (&LStack_1,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                                    ), pOVar25 = LStack_1._current,
                pMVar22 = 
                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__,
                bVar5 != 0) {
            if (LStack_1._current == (Object *)0x0) goto code_?;
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar21 == (MVWorldObjectClientManager *)0x0) goto code_?;
            this_00 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                                (pMVar21,*(int32_t *)&pOVar25[1].klass,
                                 pMVar22->klass->rgctx_data[1].method);
            if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
            MVWorldObjectClient::MVWorldObjectClient_ResetRotation(this_00,(MethodInfo *)0x0);
            pQVar26 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                                ((Quaternion *)&pHStack_8,this_00,(MethodInfo *)0x0);
            fStack_27 = pQVar26->x;
            fStack_28 = pQVar26->y;
            fStack_29 = pQVar26->z;
            fStack_30 = pQVar26->w;
            (*(this_00->klass->vtable).set_SyncRot.methodPtr)(this_00,&fStack_27);
          }
          RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0);
          pEVar2 = (this->fields).editorStateMachine;
          if (pEVar2 != (EditorStateMachine *)0x0) {
            pMVar3 = (pEVar2->fields).networkSelector;
            pSVar4 = (((this->fields).editorStateMachine)->fields).selectionController;
            if ((pSVar4 != (SelectionController *)0x0) && (pMVar3 != (MVNetworkSelector *)0x0)) {
              MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                        (pMVar3,(pSVar4->fields).selectedIDs,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void RotateStep(RotationMode, Single) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_RotateStep
               (RotationHelper *this,RotationMode__Enum rotationMode,float rotationSpeed,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
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
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  pEVar2 = (this->fields).editorStateMachine;
  if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
  pMVar3 = (pEVar2->fields).networkSelector;
  pSVar4 = (pEVar2->fields).selectionController;
  if ((pSVar4 == (SelectionController *)0x0) || (pMVar3 == (MVNetworkSelector *)0x0))
  goto code_?;
  bVar5 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                     (pMVar3,(pSVar4->fields).selectedIDs,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  targets = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)targets,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  pHStack_6 = targets;
  transforms = (List_1_UnityEngine_Transform_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pEVar2 = (this->fields).editorStateMachine;
  uStack_7 = transforms;
  if (((pEVar2 == (EditorStateMachine *)0x0) ||
      (pSVar4 = (pEVar2->fields).selectionController, pSVar4 == (SelectionController *)0x0)) ||
     (pHVar8 = (pSVar4->fields).selectedIDs, pHVar8 == (HashSet_1_System_Int32_ *)0x0))
  goto code_?;
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&pHStack_10 >> 0xc);
    uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar12 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  lStack_15 = (ulonglong)(uint)(pHVar8->fields)._version << 0x20;
  uStack_16 = 0;
  lStack_17 = lStack_15;
  uStack_18 = 0;
  auStack_19._0_4_ = 0.0;
  auStack_19._4_4_ = 0.0;
  auStack_19._8_8_ = &pHStack_20;
  pHStack_10 = pHVar8;
  pHStack_20 = pHVar8;
  while (cVar21 = FUN_?(&pHStack_20,
                                MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                               ), cVar21 != '\0') {
    id = (int32_t)uStack_18;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar22 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar22 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar23 = (pMVar22->fields).game;
    if (pMVar23 == (MVNetworkGame *)0x0) goto code_?;
    if (((pMVar23->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (pMVar24 = (MVWorldObjectClientManager *)
                  (((pMVar23->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar24 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pWVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                        (pMVar24,id,(MethodInfo *)0x0);
    pMVar26 = 
    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_;
    if (targets == (HashSet_1_System_Int32_ *)0x0) goto code_?;
    piVar27 = (int32_t *)((longlong)&(targets->fields)._slots + 4);
    *piVar27 = *piVar27 + 1;
    pWVar28 = (WorldObjectClientRef__Array *)(targets->fields)._buckets;
    uVar9 = *(uint *)&(targets->fields)._slots;
    if (pWVar28 == (WorldObjectClientRef__Array *)0x0) goto code_?;
    if (uVar9 < (uint)pWVar28->max_length) {
      *(uint *)&(targets->fields)._slots = uVar9 + 1;
      FUN_?(pWVar28,(longlong)(int)uVar9,pWVar25);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)targets,(Object *)pWVar25,
                 pMVar26->klass->rgctx_data[0xe].method);
    }
    pMVar26 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    if (pWVar25 == (WorldObjectClientRef *)0x0) goto code_?;
    pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pOVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                        (pMVar24,(pWVar25->fields)._.woId,pMVar26->klass->rgctx_data[1].method);
    pMVar26 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
    ;
    if (pOVar29 == (Object *)0x0) goto code_?;
    pOVar29 = (Object *)pOVar29[0xd].monitor;
    if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
    piVar27 = &(transforms->fields)._version;
    *piVar27 = *piVar27 + 1;
    pTVar30 = (transforms->fields)._items;
    uVar9 = (transforms->fields)._size;
    if (pTVar30 == (Transform__Array *)0x0) goto code_?;
    if (uVar9 < (uint)pTVar30->max_length) {
      (transforms->fields)._size = uVar9 + 1;
      FUN_?(pTVar30,(longlong)(int)uVar9);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)transforms,pOVar29,pMVar26->klass->rgctx_data[0xe].method)
      ;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar26 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if (targets == (HashSet_1_System_Int32_ *)0x0) goto code_?;
  if (*(int *)&(targets->fields)._slots == 1) {
    if (*(int *)&(targets->fields)._slots == 0) goto code_?;
    pWVar28 = (WorldObjectClientRef__Array *)(targets->fields)._buckets;
    if (pWVar28 == (WorldObjectClientRef__Array *)0x0) goto code_?;
    if ((int)pWVar28->max_length == 0) goto code_?;
    pWVar25 = pWVar28->vector[0];
    if (((pWVar25 == (WorldObjectClientRef *)0x0) ||
        (pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar24 == (MVWorldObjectClientManager *)0x0)) ||
       (pOVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar24,(pWVar25->fields)._.woId,pMVar26->klass->rgctx_data[1].method),
       pOVar29 == (Object *)0x0)) goto code_?;
    pVVar31 = (Vector3 *)
              (*(code *)pOVar29->klass[2]._0.typeMetadataHandle)
                        (auStack_19,pOVar29,pOVar29->klass[2]._0.interopData);
  }
  else {
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar31 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                        ((Vector3 *)auStack_19,transforms,(MethodInfo *)0x0);
  }
  fVar32 = pVVar31->z;
  uVar33._0_4_ = pVVar31->x;
  uVar33._4_4_ = pVVar31->y;
  bVar5 = RotationHelper_ValidateTargets((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0)
  ;
  pMVar26 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  if (bVar5 == 0) {
    return;
  }
  if (*(int *)&(targets->fields)._slots == 0) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar34 = (code *)swi(3);
    (*pcVar34)();
    return;
  }
  pWVar28 = (WorldObjectClientRef__Array *)(targets->fields)._buckets;
  if (pWVar28 == (WorldObjectClientRef__Array *)0x0) goto code_?;
  if ((int)pWVar28->max_length == 0) {
code_?:
    FUN_?();
    pcVar34 = (code *)swi(3);
    (*pcVar34)();
    return;
  }
  pWVar25 = pWVar28->vector[0];
  if ((pWVar25 == (WorldObjectClientRef *)0x0) ||
     (pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar24 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pMVar35 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                      (pMVar24,(pWVar25->fields)._.woId,pMVar26->klass->rgctx_data[1].method);
  uVar9 = _UNK_?;
  if (*(int *)&(targets->fields)._slots == 1) {
    if ((pMVar35 == (MVWorldObjectClient *)0x0) ||
       (this_00 = (pMVar35->fields).transform, this_00 == (Transform *)0x0))
    goto code_?;
    pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                        ((Vector3 *)auStack_19,this_00,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar31->x;
    uStack_7._4_4_ = pVVar31->y;
    fStack_36 = pVVar31->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar37 = (double)FUN_?(SUB84((double)(float)uStack_7,0),0);
    dVar38 = (double)FUN_?(SUB84((double)uStack_7._4_4_,0),0);
    dVar39 = (double)FUN_?(SUB84((double)fStack_36,0),0);
    fStack_36 = (float)dVar39;
    uStack_7 = (List_1_UnityEngine_Transform_ *)CONCAT44((float)dVar38,(float)dVar37);
    MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
              (pMVar35,(Vector3 *)&uStack_7,(MethodInfo *)0x0);
    if (*(int *)&(targets->fields)._slots != 1) goto code_?;
    if (pMVar35 == (MVWorldObjectClient *)0x0) goto code_?;
    if ((((pMVar35->fields).interactionFlags & 0x80) == 0) || (rotationMode != RotationMode__Enum_X)
       ) {
      uVar9 = (uint)(pMVar35->fields).interactionFlags;
      if ((((uVar9 >> 8 & 1) == 0) || (rotationMode != RotationMode__Enum_Y)) &&
         (((uVar9 >> 9 & 1) == 0 || (rotationMode != RotationMode__Enum_Z))))
      goto code_?;
    }
    else {
      rotationMode = RotationMode__Enum_X;
    }
    auStack_19._8_4_ = fVar32;
    auStack_19._0_8_ = uVar33;
    MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
              (pMVar35,(Vector3 *)auStack_19,rotationMode,rotationSpeed * _UNK_? - 0.0,
               (MethodInfo *)0x0);
    pQVar40 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)&pHStack_10,pMVar35,(MethodInfo *)0x0);
    fStack_41 = pQVar40->x;
    fStack_42 = pQVar40->y;
    fStack_43 = pQVar40->z;
    fStack_44 = pQVar40->w;
    (*(pMVar35->klass->vtable).set_SyncRot.methodPtr)(pMVar35);
  }
  else {
code_?:
    if (iRam_? != 0) {
      uVar45 = (uint)((ulonglong)&pHStack_10 >> 0xc);
      uVar11 = (ulonglong)((uVar45 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar45 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    uVar45 = _UNK_?;
    lStack_15 = (ulonglong)(uint)*(int32_t *)((longlong)&(targets->fields)._slots + 4) << 0x20;
    uStack_16 = 0;
    LStack_1._index = (undefined4)lStack_15;
    LStack_1._version = lStack_15._4_4_;
    LStack_1._current = (Object *)0x0;
    uStack_46 = 0;
    pLStack_47 = &LStack_1;
    pHStack_10 = targets;
    LStack_1._list = (List_1_System_Object_ *)targets;
    while (bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                              ), pOVar29 = LStack_1._current,
          pMVar26 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__,
          bVar5 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar35 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                          (pMVar24,*(int32_t *)&pOVar29[1].klass,
                           pMVar26->klass->rgctx_data[1].method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar35 == (MVWorldObjectClient *)0x0) goto code_?;
      uStack_7 = *(List_1_UnityEngine_Transform_ **)
                    &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      fStack_36 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
      auStack_19._8_4_ = fVar32;
      auStack_19._0_8_ = uVar33;
      MVWorldObjectClient::MVWorldObjectClient_RotateAround
                (pMVar35,(Vector3 *)auStack_19,(Vector3 *)&uStack_7,
                 (float)(uVar9 ^ uVar45) * rotationSpeed - 0.0,(MethodInfo *)0x0);
      pQVar40 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          ((Quaternion *)&pHStack_10,pMVar35,(MethodInfo *)0x0);
      fStack_41 = pQVar40->x;
      fStack_42 = pQVar40->y;
      fStack_43 = pQVar40->z;
      fStack_44 = pQVar40->w;
      (*(pMVar35->klass->vtable).set_SyncRot.methodPtr)(pMVar35,&fStack_41);
    }
  }
code_?:
  RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0);
  pEVar2 = (this->fields).editorStateMachine;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    pMVar3 = (pEVar2->fields).networkSelector;
    pSVar4 = (((this->fields).editorStateMachine)->fields).selectionController;
    if ((pSVar4 != (SelectionController *)0x0) && (pMVar3 != (MVNetworkSelector *)0x0)) {
      MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                (pMVar3,(pSVar4->fields).selectedIDs,(MethodInfo *)0x0);
      return;
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
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Boolean ValidateTargets(List`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_ValidateTargets(List_1_WorldObjectClientRef_ *targets,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (targets == (List_1_WorldObjectClientRef_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pLStack_6 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(targets->fields)._version << 0x20);
    uStack_7 = 0;
    LStack_8._8_8_ = pLStack_6;
    LStack_8._current = (Object *)0x0;
    uStack_2 = 0;
    pLStack_6 = &LStack_8;
    LStack_8._list = (List_1_System_Object_ *)targets;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                        );
      pOVar10 = LStack_8._current;
      pMVar11 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
      if (bVar9 == 0) {
        return 1;
      }
      if (LStack_8._current == (Object *)0x0) break;
      this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this == (MVWorldObjectClientManager *)0x0) goto code_?;
      pOVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                         (this,*(int32_t *)&pOVar10[1].klass,pMVar11->klass->rgctx_data[1].method);
      if (pOVar10 == (Object *)0x0) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar9 = (*pcVar12)();
  return bVar9;
}

