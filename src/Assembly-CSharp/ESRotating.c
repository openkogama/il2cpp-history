
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RotationMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rotationDegreesStep);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rotationMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  if (plVar1 != (longlong *)0x0) {
    pOVar2 = (Object *)(**(code **)(*plVar1 + 0x168))(plVar1);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar2,(MethodInfo *)0x0);
    pLVar3 = (List_1_WorldObjectClientRef_ *)FUN_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    (this->fields).targets = pLVar3;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).targets >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    if (e != (EditorStateMachine *)0x0) {
      this_00 = (e->fields).networkSelector;
      pSVar9 = (e->fields).selectionController;
      if ((pSVar9 != (SelectionController *)0x0) && (this_00 != (MVNetworkSelector *)0x0)) {
        bVar10 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(this_00,(pSVar9->fields).selectedIDs,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          return;
        }
        pDVar11 = (e->fields)._.data;
        if ((pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) && (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item(pDVar11,(Object *)StringLiteral_rotationDegreesStep,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_), pOVar2 != (Object *)0x0)) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar2);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (this->fields).rotationSpeed = *(float *)&pOVar2[1].klass;
          pDVar11 = (e->fields)._.data;
          if ((pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) && (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item(pDVar11,(Object *)StringLiteral_rotationMode,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_), pOVar2 != (Object *)0x0)) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__RotationMode->_0).element_class) {
              FUN_?(pOVar2);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            (this->fields).rotationMode = *(int32_t *)&pOVar2[1].klass;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            uStack_13 = 0;
            uStack_14 = 0;
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(&uStack_13);
            (this->fields).prevMouseX = (float)uStack_13;
            auStack_16._0_4_ = 0.0;
            auStack_16._4_4_ = 0.0;
            stack0xffffffffffffffb8 = (HashSet_1_System_Int32_ **)((ulonglong)uStack_17 << 0x20);
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
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
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(auStack_16);
            (this->fields).prevMouseY = (float)auStack_16._4_4_;
            transforms = (List_1_UnityEngine_Transform_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
            pSVar9 = (e->fields).selectionController;
            if ((pSVar9 != (SelectionController *)0x0) && (pHVar18 = (pSVar9->fields).selectedIDs, pHVar18 != (HashSet_1_System_Int32_ *)0x0)) {
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)auStack_16 >> 0xc);
                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar8 = uVar6 == *puVar7;
                  if (bVar8) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar8);
              }
              stack0xffffffffffffffb8 = (HashSet_1_System_Int32_ **)((ulonglong)(uint)(pHVar18->fields)._version << 0x20);
              uStack_19 = 0;
              lStack_20 = (longlong)stack0xffffffffffffffb8;
              uStack_21 = 0;
              auStack_16._0_4_ = 0.0;
              auStack_16._4_4_ = 0.0;
              unique0x00009c00 = &pHStack_22;
              pHStack_22 = pHVar18;
              while (cVar23 = FUN_?(&pHStack_22,MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__), pMVar24 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__, cVar23 != '\0') {
                id = (int32_t)uStack_21;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (pMVar25 == (MVGameControllerBase *)0x0) goto code_?;
                pMVar26 = (pMVar25->fields).game;
                if (pMVar26 == (MVNetworkGame *)0x0) goto code_?;
                if (((pMVar26->fields).worldNetwork == (WorldNetwork *)0x0) || (pMVar27 = (MVWorldObjectClientManager *)(((pMVar26->fields).worldNetwork)->fields)._.worldObjectClientManager, pMVar27 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                pWVar28 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef(pMVar27,id,(MethodInfo *)0x0);
                pMVar24 = MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_;
                pLVar3 = (this->fields).targets;
                if (pLVar3 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                piVar29 = &(pLVar3->fields)._version;
                *piVar29 = *piVar29 + 1;
                pWVar30 = (pLVar3->fields)._items;
                uVar4 = (pLVar3->fields)._size;
                if (pWVar30 == (WorldObjectClientRef__Array *)0x0) goto code_?;
                if (uVar4 < (uint)pWVar30->max_length) {
                  (pLVar3->fields)._size = uVar4 + 1;
                  FUN_?(pWVar30,(longlong)(int)uVar4,pWVar28);
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)pLVar3,(Object *)pWVar28,pMVar24->klass->rgctx_data[0xe].method);
                }
                pMVar24 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
                if (pWVar28 == (WorldObjectClientRef *)0x0) goto code_?;
                pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar27 == (MVWorldObjectClientManager *)0x0) goto code_?;
                pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar27,(pWVar28->fields)._.woId,pMVar24->klass->rgctx_data[1].method);
                pMVar24 = MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_;
                if (pOVar2 == (Object *)0x0) goto code_?;
                pOVar2 = (Object *)pOVar2[0xd].monitor;
                if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                piVar29 = &(transforms->fields)._version;
                *piVar29 = *piVar29 + 1;
                pTVar31 = (transforms->fields)._items;
                uVar4 = (transforms->fields)._size;
                if (pTVar31 == (Transform__Array *)0x0) goto code_?;
                if (uVar4 < (uint)pTVar31->max_length) {
                  (transforms->fields)._size = uVar4 + 1;
                  FUN_?(pTVar31,(longlong)(int)uVar4);
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)transforms,pOVar2,pMVar24->klass->rgctx_data[0xe].method);
                }
              }
              pLVar3 = (this->fields).targets;
              if (pLVar3 != (List_1_WorldObjectClientRef_ *)0x0) {
                if ((pLVar3->fields)._size == 1) {
                  if (pLVar3 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                  if ((pLVar3->fields)._size == 0) {
                    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pWVar30 = (pLVar3->fields)._items;
                  if (pWVar30 == (WorldObjectClientRef__Array *)0x0) goto code_?;
                  if ((int)pWVar30->max_length == 0) {
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pWVar28 = pWVar30->vector[0];
                  if (((pWVar28 == (WorldObjectClientRef *)0x0) || (pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0), pMVar27 == (MVWorldObjectClientManager *)0x0)) || (pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar27,(pWVar28->fields)._.woId,pMVar24->klass->rgctx_data[1].method), pOVar2 == (Object *)0x0)) goto code_?;
                  pVVar32 = (Vector3 *)(*(code *)pOVar2->klass[2]._0.typeMetadataHandle)(auStack_16,pOVar2,pOVar2->klass[2]._0.interopData);
                }
                else {
                  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pVVar32 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter((Vector3 *)auStack_16,transforms,(MethodInfo *)0x0);
                }
                fVar33 = pVVar32->z;
                fVar34 = pVVar32->y;
                (this->fields).pivot.x = pVVar32->x;
                (this->fields).pivot.y = fVar34;
                (this->fields).pivot.z = fVar33;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar25 != (MVGameControllerBase *)0x0) && (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) && ((pGVar35 = (pMVar26->fields).GameEventManager, pGVar35 != (GameEventManager *)0x0 && ((pGVar36 = (pGVar35->fields).AvatarCommandsBuildMode, pGVar36 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar37 = (pGVar36->fields).LaserCommands, pGVar37 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))))) {
                  pAVar38 = (pGVar37->fields).OnChangeState;
                  if (pAVar38 != (Action_1_LaserPointerState_ *)0x0) {
                    (*(pAVar38->fields)._._.invoke_impl)((pAVar38->fields)._._.method_code,3,(pAVar38->fields)._._.method);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar25 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((((pMVar25 != (MVGameControllerBase *)0x0) && (pMVar26 = (pMVar25->fields).game, pMVar26 != (MVNetworkGame *)0x0)) && (pGVar35 = (pMVar26->fields).GameEventManager, pGVar35 != (GameEventManager *)0x0)) && ((pGVar36 = (pGVar35->fields).AvatarCommandsBuildMode, pGVar36 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar37 = (pGVar36->fields).LaserCommands, pGVar37 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
                    pAVar39 = (pGVar37->fields).OnLaserActiveChanged;
                    if (pAVar39 != (Action_1_Boolean_ *)0x0) {
                      (*(pAVar39->fields)._._.invoke_impl)((pAVar39->fields)._._.method_code,1,(pAVar39->fields)._._.method);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Execute(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
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
  bVar2 = UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ValidateTargets((this->fields).targets,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields).xAcc;
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(&VStack_4);
      (this->fields).xAcc = ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) * (VStack_4.x - (this->fields).prevMouseX) + fVar3;
      fVar3 = (this->fields).yAcc;
      uStack_7 = 0;
      uStack_8 = 0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      fVar3 = ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) * (uStack_7._4_4_ - (this->fields).prevMouseY) + fVar3;
      (this->fields).yAcc = fVar3;
      fVar9 = ABS((this->fields).xAcc);
      pfVar10 = &(this->fields).rotateThreshold;
      bVar11 = *pfVar10 <= fVar9 && fVar9 != *pfVar10;
      fVar3 = ABS(fVar3);
      pfVar10 = &(this->fields).rotateThreshold;
      bVar12 = *pfVar10 <= fVar3 && fVar3 != *pfVar10;
      while (pMVar13 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__, bVar12 || bVar11) {
        pLVar14 = (this->fields).targets;
        if (pLVar14 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar14->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pWVar15 = (pLVar14->fields)._items;
        if (pWVar15 == (WorldObjectClientRef__Array *)0x0) goto code_?;
        if ((int)pWVar15->max_length == 0) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pWVar16 = pWVar15->vector[0];
        if ((pWVar16 == (WorldObjectClientRef *)0x0) || (this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0), this_00 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        pMVar17 = (MVWorldObjectClient *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(this_00,(pWVar16->fields)._.woId,pMVar13->klass->rgctx_data[1].method);
        bVar12 = false;
        bVar18 = false;
        bVar19 = false;
        fVar3 = (this->fields).xAcc;
        fVar3 = fVar3 / ABS(fVar3);
        fVar9 = (this->fields).yAcc;
        fVar20 = 0.0;
        pLVar14 = (this->fields).targets;
        if (pLVar14 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar14->fields)._size == 1) {
          if ((pMVar17 == (MVWorldObjectClient *)0x0) || (pTVar21 = (pMVar17->fields).transform, pTVar21 == (Transform *)0x0)) goto code_?;
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles(&VStack_23,pTVar21,(MethodInfo *)0x0);
          VStack_4.x = pVVar22->x;
          VStack_4.y = pVVar22->y;
          VStack_4.z = pVVar22->z;
          pVVar22 = MathFunctions::MathFunctions_RoundVector(&VStack_24,&VStack_4,0,(MethodInfo *)0x0);
          VStack_25.x = pVVar22->x;
          VStack_25.y = pVVar22->y;
          VStack_25.z = pVVar22->z;
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles(pMVar17,&VStack_25,(MethodInfo *)0x0);
          pTVar21 = (pMVar17->fields).transform;
          if (pTVar21 == (Transform *)0x0) goto code_?;
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles(&VStack_26,pTVar21,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar22->x;
          uStack_27._4_4_ = pVVar22->y;
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          uVar28 = FUN_?(SUB84((double)uStack_27._4_4_,0));
          FUN_?(uVar28,(double)(this->fields).rotationSpeed);
          dVar29 = (double)FUN_?();
          fVar20 = (float)dVar29;
        }
        pLVar14 = (this->fields).targets;
        if (pLVar14 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar14->fields)._size == 1) {
          if (bVar11) {
            if (pMVar17 == (MVWorldObjectClient *)0x0) goto code_?;
            if ((((pMVar17->fields).interactionFlags & 0x80) != 0) && ((this->fields).rotationMode == 0)) {
              uVar6._0_4_ = (this->fields).pivot.x;
              uVar6._4_4_ = (this->fields).pivot.y;
              fVar30 = (this->fields).pivot.z;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_32.x = (pVVar31->rightVector).x;
              VStack_32.y = (pVVar31->rightVector).y;
              VStack_32.z = (pVVar31->rightVector).z;
              VStack_33._0_8_ = uVar6;
              VStack_33.z = fVar30;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMVar17,&VStack_33,&VStack_32,-fVar3 * (this->fields).rotationSpeed - fVar20,(MethodInfo *)0x0);
              bVar12 = true;
            }
            if ((((uint)(pMVar17->fields).interactionFlags >> 8 & 1) != 0) && ((this->fields).rotationMode == 1)) {
              uVar34._0_4_ = (this->fields).pivot.x;
              uVar34._4_4_ = (this->fields).pivot.y;
              fVar30 = (this->fields).pivot.z;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_35.x = (pVVar31->upVector).x;
              VStack_35.y = (pVVar31->upVector).y;
              VStack_35.z = (pVVar31->upVector).z;
              VStack_36._0_8_ = uVar34;
              VStack_36.z = fVar30;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMVar17,&VStack_36,&VStack_35,-fVar3 * (this->fields).rotationSpeed - fVar20,(MethodInfo *)0x0);
              bVar18 = true;
            }
            if (((((uint)(pMVar17->fields).interactionFlags >> 9 & 1) != 0) && (!bVar12)) && ((this->fields).rotationMode == 2)) {
              uVar37._0_4_ = (this->fields).pivot.x;
              uVar37._4_4_ = (this->fields).pivot.y;
              fVar30 = (this->fields).pivot.z;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_38.x = (pVVar31->forwardVector).x;
              VStack_38.y = (pVVar31->forwardVector).y;
              VStack_38.z = (pVVar31->forwardVector).z;
              VStack_39._0_8_ = uVar37;
              VStack_39.z = fVar30;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMVar17,&VStack_39,&VStack_38,-fVar3 * (this->fields).rotationSpeed - fVar20,(MethodInfo *)0x0);
              bVar19 = true;
            }
            if ((bVar19 || bVar18) || bVar12) {
              pQVar40 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation(aQStack_41,pMVar17,(MethodInfo *)0x0);
              pLStack_42 = *(List_1_WorldObjectClientRef_ **)pQVar40;
              lStack_43._0_4_ = pQVar40->z;
              lStack_43._4_4_ = pQVar40->w;
              (*(pMVar17->klass->vtable).set_SyncRot.methodPtr)(pMVar17,&pLStack_42,(pMVar17->klass->vtable).set_SyncRot.method);
            }
          }
        }
        else {
          lStack_43 = 0;
          uStack_44 = 0;
          pLStack_42 = pLVar14;
          func_?(&pLStack_42);
          lStack_43 = (ulonglong)(uint)(pLVar14->fields)._version << 0x20;
          uStack_44 = 0;
          LStack_1._list = (List_1_System_Object_ *)pLStack_42;
          LStack_1._index = (undefined4)lStack_43;
          LStack_1._version = lStack_43._4_4_;
          LStack_1._current = (Object *)0x0;
          uStack_45 = 0;
          pLStack_46 = &LStack_1;
          while (bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::List_1_T_Enumerator_System_Object__MoveNext(&LStack_1,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__), bVar2 != 0) {
            if (LStack_1._current == (Object *)0x0) goto code_?;
            pMVar17 = (MVWorldObjectClient *)FUN_?();
            uVar47._0_4_ = (this->fields).pivot.x;
            uVar47._4_4_ = (this->fields).pivot.y;
            fVar30 = (this->fields).pivot.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (pMVar17 == (MVWorldObjectClient *)0x0) goto code_?;
            VStack_48.x = (pVVar31->upVector).x;
            VStack_48.y = (pVVar31->upVector).y;
            VStack_48.z = (pVVar31->upVector).z;
            VStack_49._0_8_ = uVar47;
            VStack_49.z = fVar30;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMVar17,&VStack_49,&VStack_48,-fVar3 * (this->fields).rotationSpeed - fVar20,(MethodInfo *)0x0);
            pQVar40 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation(&QStack_50,pMVar17,(MethodInfo *)0x0);
            pLStack_42 = *(List_1_WorldObjectClientRef_ **)pQVar40;
            lStack_43._0_4_ = pQVar40->z;
            lStack_43._4_4_ = pQVar40->w;
            (*(pMVar17->klass->vtable).set_SyncRot.methodPtr)(pMVar17,&pLStack_42,(pMVar17->klass->vtable).set_SyncRot.method);
          }
        }
        fVar9 = (this->fields).yAcc - (fVar9 / ABS(fVar9)) * (this->fields).rotateThreshold;
        (this->fields).yAcc = fVar9;
        fVar9 = ABS(fVar9);
        pfVar10 = &(this->fields).rotateThreshold;
        fVar3 = (this->fields).xAcc - fVar3 * (this->fields).rotateThreshold;
        (this->fields).xAcc = fVar3;
        fVar3 = ABS(fVar3);
        pfVar51 = &(this->fields).rotateThreshold;
        bVar11 = *pfVar51 <= fVar3 && fVar3 != *pfVar51;
        bVar12 = *pfVar10 <= fVar9 && fVar9 != *pfVar10;
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(&VStack_4);
      (this->fields).prevMouseX = VStack_4.x;
      uStack_7 = 0;
      uStack_8 = 0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      (this->fields).prevMouseY = uStack_7._4_4_;
      pGVar52 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar52 != (GameEventManager *)0x0) && (pGVar53 = (pGVar52->fields).AvatarCommandsBuildMode, pGVar53 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar54 = (pGVar53->fields).LaserCommands, pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        pAVar55 = (pGVar54->fields).OnUpdatePosition;
        if (pAVar55 == (Action_1_UnityEngine_Vector3_ *)0x0) {
          return;
        }
        VStack_39.x = (this->fields).pivot.x;
        VStack_39.y = (this->fields).pivot.y;
        VStack_39.z = (this->fields).pivot.z;
        (*(pAVar55->fields)._._.invoke_impl)((pAVar55->fields)._._.method_code,&VStack_39,(pAVar55->fields)._._.method);
        return;
      }
      goto code_?;
    }
  }
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Exit(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) && ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnChangeState;
    if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,0,(pAVar6->fields)._._.method);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0 && ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))))) {
      pAVar7 = (pGVar5->fields).OnLaserActiveChanged;
      if (pAVar7 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
      }
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_DoGridSnapping((this->fields).targets,(MethodInfo *)0x0);
      if (((e != (EditorStateMachine *)0x0) && (pSVar8 = (e->fields).selectionController, pSVar8 != (SelectionController *)0x0)) && ((e->fields).networkSelector != (MVNetworkSelector *)0x0)) {
        pHVar9 = (pSVar8->fields).selectedIDs;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pHVar9 == (HashSet_1_System_Int32_ *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
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
        iStack_16 = (pHVar9->fields)._version;
        puStack_17 = (undefined *)0x0;
        uStack_12._0_4_ = SUB84(pHVar9,0);
        uStack_12._4_4_ = (undefined4)((ulonglong)pHVar9 >> 0x20);
        uStack_18 = (undefined4)uStack_12;
        uStack_19 = uStack_12._4_4_;
        uStack_20 = 0;
        uStack_21 = 0;
        uStack_12 = 0;
        puStack_22 = &uStack_18;
        while( true ) {
          cVar23 = FUN_?(&uStack_18,MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__);
          if (cVar23 == '\0') {
            return;
          }
          id = (int32_t)uStack_21;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_02,id,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 == (MVGameControllerBase *)0x0) break;
          pMVar2 = (pMVar1->fields).game;
          if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
            FUN_?();
            break;
          }
          pTVar25 = (pMVar2->fields).transformNetworkManager;
          if (pTVar25 == (TransformNetworkManager *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pTVar25->fields).networkedObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove((Dictionary_2_System_Int32_System_Object_ *)this_00,id,MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          pMVar2 = (pMVar1->fields).game;
          if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          this_01 = (pMVar2->fields).operationRequests;
          if (pMVar24 == (MVWorldObjectClient *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
            FUN_?();
            goto code_?;
          }
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TransferOwnership(this_01,id,0,(pMVar24->fields).transform,(MethodInfo *)0x0);
        }
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* ESRotating() */

void Assembly-CSharp.dll::ESRotating::ESRotating__ctor(ESRotating *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).rotationSpeed = 15.0;
  (this->fields).rotationMode = 1;
  (this->fields).rotateThreshold = 10.0;
  (this->fields).mouseSensitivity = 10.0;
  this_00 = (List_1_WorldObjectClientRef_ *)FUN_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).targets = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).targets >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pWVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar5 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar3 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_01 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pIVar9 = LoggerManager::LoggerManager_GetLogger(this_01,type,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.logger = pIVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar5 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar3 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

