
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Enter
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
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
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TranslateData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TranslateData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TranslateMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_moveWithAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ownership_request_failed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_translateMode);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) goto code_?;
  cVar2 = FUN_?(0,TypeInfo__IEditModeUI);
  fVar3 = _UNK_?;
  if (cVar2 == '\0') {
    fVar3 = _UNK_?;
  }
  (this->fields).gridSize = fVar3;
  if (((e == (EditorStateMachine *)0x0) ||
      (pDVar4 = (e->fields)._.data, pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0)) ||
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar4,(Object *)StringLiteral_translateMode,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar5 == (Object *)0x0)) goto code_?;
  if ((pOVar5->klass->_0).element_class != (TypeInfo__TranslateMode->_0).element_class) {
    FUN_?(pOVar5);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->fields).translateMode = *(int32_t *)&pOVar5[1].klass;
  pDVar4 = (e->fields)._.data;
  if ((pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar4,(Object *)StringLiteral_moveWithAvatar,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar5 == (Object *)0x0)) goto code_?;
  if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar5,lRam_?);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->fields).moveWithAvatar = *(bool *)&pOVar5[1].klass;
  (this->fields).initialDistance = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStack_7 = (MonitorData *)0x0;
  uStack_8._0_4_ = 0.0;
  uStack_8._4_4_ = 0.0;
  uStack_9._0_4_ = 0.0;
  uStack_9._4_4_ = 0.0;
  uStack_10._0_2_ = 0;
  uStack_10._2_2_ = 0;
  uStack_10._4_2_ = 0;
  uStack_10._6_2_ = 0;
  uStack_11._0_4_ = 0;
  uStack_11._4_1_ = 0;
  uStack_11._5_3_ = 0;
  uStack_12._0_4_ = 0;
  uStack_12._4_4_ = 0;
  pCStack_13 = (Cube *)0x0;
  uStack_14._0_4_ = 0.0;
  uStack_14._4_4_ = 0;
  pCStack_15 = (Collider *)0x0;
  pTStack_16 = (Transform *)0x0;
  iStack_17 = 0;
  bVar18 = EditModeObjectPicker::EditModeObjectPicker_Pick
                     ((VoxelHit *)&pMStack_7,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                      (MethodInfo *)0x0);
  if ((bVar18 == 0) || ((Int32Enum__Enum)uStack_12 == 0xffffffff)) {
code_?:
    fVar3 = ESTranslate_GetInitialAvatarMoveObjectDistance(this,e,(MethodInfo *)0x0);
  }
  else {
    pSVar19 = (e->fields).selectionController;
    if ((pSVar19 == (SelectionController *)0x0) ||
       (this_00 = (HashSet_1_System_Int32Enum_ *)(pSVar19->fields).selectedIDs,
       this_00 == (HashSet_1_System_Int32Enum_ *)0x0)) {
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
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
             HashSet_1_System_Int32Enum__Contains
                       (this_00,(Int32Enum__Enum)uStack_12,
                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar18 == 0) goto code_?;
    fVar3 = (float)uStack_8;
    uStack_20 = pMStack_7;
    pSVar21 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((pSVar21 == (SpawnRoleDataMediator *)0x0) ||
        (pSVar22 = (pSVar21->fields).position,
        pSVar22 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) ||
       (pSVar23 = (pSVar22->fields)._.subscribableVariable,
       pSVar23 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    uVar24 = (pSVar23->fields)._.value.x;
    uVar25 = (pSVar23->fields)._.value.y;
    fStack_26 = fVar3 - (pSVar23->fields)._.value.z;
    uStack_20 = (MonitorData *)
                 CONCAT44(uStack_20._4_4_ - (float)uVar25,(float)uStack_20 - (float)uVar24);
    fVar3 = (float)FUN_?(&uStack_20);
  }
  (this->fields).initialDistance = fVar3;
  (this->fields).recalcLocalDirCamToObjects = 1;
  pLVar27 = (List_1_TranslateData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<TranslateData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar27,
             MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  (this->fields).translateDatas = pLVar27;
  if (iRam_? != 0) {
    uVar28 = (uint)((ulonglong)&(this->fields).translateDatas >> 0xc);
    uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
    do {
      uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
      puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
      LOCK();
      bVar32 = uVar30 == *puVar31;
      if (bVar32) {
        *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
      }
      UNLOCK();
    } while (!bVar32);
  }
  pLVar33 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar33,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targets = pLVar33;
  if (iRam_? != 0) {
    uVar28 = (uint)((ulonglong)&(this->fields).targets >> 0xc);
    uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
    do {
      uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
      puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
      LOCK();
      bVar32 = uVar30 == *puVar31;
      if (bVar32) {
        *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
      }
      UNLOCK();
    } while (!bVar32);
  }
  pMVar34 = (e->fields).weCamera;
  if (pMVar34 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_IgnoreInputTypes
              (pMVar34,IgnoreInputTypes__Enum_Avatar|IgnoreInputTypes__Enum_MouseScroll,
               (MethodInfo *)0x0);
    this_01 = (e->fields).networkSelector;
    pSVar19 = (e->fields).selectionController;
    if ((pSVar19 != (SelectionController *)0x0) && (this_01 != (MVNetworkSelector *)0x0)) {
      bVar18 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                         (this_01,(pSVar19->fields).selectedIDs,(MethodInfo *)0x0);
      if (bVar18 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Ownership_request_failed,(MethodInfo *)0x0);
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar35 != (MVGameControllerBase *)0x0) &&
          (pMVar36 = (pMVar35->fields).game, pMVar36 != (MVNetworkGame *)0x0)) &&
         ((pGVar37 = (pMVar36->fields).GameEventManager, pGVar37 != (GameEventManager *)0x0 &&
          ((pGVar38 = (pGVar37->fields).AvatarCommandsBuildMode,
           pGVar38 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
           (pGVar39 = (pGVar38->fields).LaserCommands,
           pGVar39 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))
          ))) {
        pAVar40 = (pGVar39->fields).OnChangeState;
        if (pAVar40 != (Action_1_LaserPointerState_ *)0x0) {
          (*(pAVar40->fields)._._.invoke_impl)((pAVar40->fields)._._.method_code,3);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar35 != (MVGameControllerBase *)0x0) &&
             (pMVar36 = (pMVar35->fields).game, pMVar36 != (MVNetworkGame *)0x0)) &&
            (pGVar37 = (pMVar36->fields).GameEventManager, pGVar37 != (GameEventManager *)0x0)) &&
           ((pGVar38 = (pGVar37->fields).AvatarCommandsBuildMode,
            pGVar38 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
            (pGVar39 = (pGVar38->fields).LaserCommands,
            pGVar39 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
           )) {
          pAVar41 = (pGVar39->fields).OnLaserActiveChanged;
          if (pAVar41 != (Action_1_Boolean_ *)0x0) {
            (*(pAVar41->fields)._._.invoke_impl)((pAVar41->fields)._._.method_code,1);
          }
          pSVar19 = (e->fields).selectionController;
          if ((pSVar19 != (SelectionController *)0x0) &&
             (pHVar42 = (pSVar19->fields).selectedIDs, pHVar42 != (HashSet_1_System_Int32_ *)0x0)) {
            if (iRam_? != 0) {
              uVar28 = (uint)((ulonglong)&uStack_43 >> 0xc);
              uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
              do {
                uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
                puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
                LOCK();
                bVar32 = uVar30 == *puVar31;
                if (bVar32) {
                  *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
                }
                UNLOCK();
              } while (!bVar32);
            }
            pLStack_44 = (List_1_T_Enumerator_System_Object_ *)
                          ((ulonglong)(uint)(pHVar42->fields)._version << 0x20);
            uStack_45 = 0;
            LStack_46._8_8_ = pLStack_44;
            LStack_46._current = (Object *)0x0;
            uStack_43 = 0;
            pLStack_44 = &LStack_46;
            LStack_46._list = (List_1_System_Object_ *)pHVar42;
            while (cVar2 = FUN_?(&LStack_46), cVar2 != '\0') {
              key = (int32_t)LStack_46._current;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (pMVar35 == (MVGameControllerBase *)0x0) goto code_?;
              pMVar36 = (pMVar35->fields).game;
              if (pMVar36 == (MVNetworkGame *)0x0) goto code_?;
              if (((pMVar36->fields).worldNetwork == (WorldNetwork *)0x0) ||
                 (pMVar47 = (((pMVar36->fields).worldNetwork)->fields)._.worldObjectClientManager,
                 pMVar47 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOStackX_20 = (Object *)0x0;
              this_02 = (pMVar47->fields)._.worldObjects;
              if (this_02 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,&pOStackX_20,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
              pOVar5 = pOStackX_20;
              pMVar48 = 
              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              ;
              pLVar33 = (this->fields).targets;
              if (pLVar33 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
              piVar49 = &(pLVar33->fields)._version;
              *piVar49 = *piVar49 + 1;
              pMVar50 = (pLVar33->fields)._items;
              uVar28 = (pLVar33->fields)._size;
              if (pMVar50 == (MVWorldObjectClient__Array *)0x0) goto code_?;
              if (uVar28 < (uint)pMVar50->max_length) {
                (pLVar33->fields)._size = uVar28 + 1;
                FUN_?(pMVar50);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)pLVar33,pOStackX_20,
                           pMVar48->klass->rgctx_data[0xe].method);
              }
              pLVar27 = (this->fields).translateDatas;
              pOVar51 = (Object *)FUN_?();
              pMVar52 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pOVar5 == (Object *)0x0) goto code_?;
              if (pMVar52 == (MVWorldObjectClientManager *)0x0) goto code_?;
              pOVar53 = (Object__Class *)
                        MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar52,*(int32_t *)&pOVar5[1].klass,(MethodInfo *)0x0);
              pOVar51[1].klass = pOVar53;
              if (iRam_? != 0) {
                uVar28 = (uint)((ulonglong)(pOVar51 + 1) >> 0xc);
                uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                do {
                  uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
                  puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
                  LOCK();
                  bVar32 = uVar30 == *puVar31;
                  if (bVar32) {
                    *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar32);
              }
              puVar54 = (undefined8 *)
                        (*(code *)pOVar5->klass[1].vtable.Finalize.method)
                                  (auStack_55,pOVar5,pOVar5->klass[1].vtable.GetHashCode.methodPtr
                                  );
              uStack_20 = (MonitorData *)*puVar54;
              fStack_26 = *(float *)(puVar54 + 1);
              pOVar51[1].monitor = uStack_20;
              *(float *)&pOVar51[2].klass = fStack_26;
              pcVar6 = *(code **)&pOVar5->klass[3]._1.cctor_finished_or_no_cctor;
              puVar54 = (undefined8 *)
                        (*pcVar6)(auStack_56,pOVar5,pcVar6,&uStack_20,
                                   pOVar5->klass[3]._1.cctor_thread);
              uVar57 = *(undefined4 *)(puVar54 + 1);
              *(undefined8 *)((longlong)&pOVar51[2].klass + 4) = *puVar54;
              *(undefined4 *)((longlong)&pOVar51[2].monitor + 4) = uVar57;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
              *(undefined8 *)((longlong)&pOVar51[3].monitor + 4) =
                   *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
              *(float *)((longlong)&pOVar51[4].klass + 4) = fVar3;
              pOVar51[3].klass = *(Object__Class **)((longlong)&pOVar51[2].klass + 4);
              *(undefined4 *)&pOVar51[3].monitor =
                   *(undefined4 *)((longlong)&pOVar51[2].monitor + 4);
              pMVar48 = 
              MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_;
              if (pLVar27 == (List_1_TranslateData_ *)0x0) goto code_?;
              piVar49 = &(pLVar27->fields)._version;
              *piVar49 = *piVar49 + 1;
              pTVar58 = (pLVar27->fields)._items;
              uVar28 = (pLVar27->fields)._size;
              if (pTVar58 == (TranslateData__Array *)0x0) goto code_?;
              if (uVar28 < (uint)pTVar58->max_length) {
                (pLVar27->fields)._size = uVar28 + 1;
                FUN_?();
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)pLVar27,pOVar51,
                           pMVar48->klass->rgctx_data[0xe].method);
              }
            }
            pMVar34 = (e->fields).weCamera;
            if (((pMVar34 != (MainCameraManager *)0x0) &&
                (pTVar59 = (pMVar34->fields).tertiaryCamera, pTVar59 != (Transform *)0x0)) &&
               (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar59,(MethodInfo *)0x0),
               this_04 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_04,1,(MethodInfo *)0x0);
              pMVar34 = (e->fields).weCamera;
              if (pMVar34 != (MainCameraManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pTVar59 = (pMVar34->fields).tertiaryCamera;
                if (pTVar59 != (Transform *)0x0) {
                  this_05 = (Camera *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_GetComponent_1
                                      ((Component *)pTVar59,
                                       UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                                      );
                  pMVar34 = (e->fields).weCamera;
                  if ((pMVar34 != (MainCameraManager *)0x0) && (this_05 != (Camera *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_SetReplacementShader
                              (this_05,(pMVar34->fields).transparentMultiplyColor,::StringLiteral__,
                               (MethodInfo *)0x0);
                    pHVar42 = (HashSet_1_System_Int32_ *)
                              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                    FUN_?(pHVar42,
                                  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__)
                    ;
                    (this->fields).woIds = pHVar42;
                    if (iRam_? != 0) {
                      uVar28 = (uint)((ulonglong)&(this->fields).woIds >> 0xc);
                      uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                      do {
                        uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
                        puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
                        LOCK();
                        bVar32 = uVar30 == *puVar31;
                        if (bVar32) {
                          *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar32);
                    }
                    pLVar27 = (this->fields).translateDatas;
                    if (pLVar27 != (List_1_TranslateData_ *)0x0) {
                      if (iRam_? != 0) {
                        uVar28 = (uint)((ulonglong)&uStack_43 >> 0xc);
                        uVar29 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
                        do {
                          uVar30 = *(ulonglong *)(uVar29 * 8 + 0xADDR);
                          puVar31 = (ulonglong *)(uVar29 * 8 + 0xADDR);
                          LOCK();
                          bVar32 = uVar30 == *puVar31;
                          if (bVar32) {
                            *puVar31 = uVar30 | 1L << (uVar28 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar32);
                      }
                      pLStack_44 = (List_1_T_Enumerator_System_Object_ *)
                                    ((ulonglong)(uint)(pLVar27->fields)._version << 0x20);
                      uStack_45 = 0;
                      LStack_1._8_8_ = pLStack_44;
                      LStack_1._current = (Object *)0x0;
                      uStack_43 = 0;
                      pLStack_44 = &LStack_1;
                      LStack_1._list = (List_1_System_Object_ *)pLVar27;
                      while (bVar18 = mscorlib.dll::System::Collections::Generic::
                                      List`1[T]+Enumerator[System::Object]::
                                      List_1_T_Enumerator_System_Object__MoveNext
                                                (&LStack_1,
                                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                                ), pOVar5 = LStack_1._current, bVar18 != 0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if (pMVar35 == (MVGameControllerBase *)0x0) goto code_?;
                        pMVar36 = (pMVar35->fields).game;
                        if (pMVar36 == (MVNetworkGame *)0x0) goto code_?;
                        pMVar52 = (MVWorldObjectClientManager *)0x0;
                        if ((pMVar36->fields).worldNetwork != (WorldNetwork *)0x0) {
                          pMVar52 = (MVWorldObjectClientManager *)
                                    (((pMVar36->fields).worldNetwork)->fields)._.
                                    worldObjectClientManager;
                        }
                        if (pOVar5 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?();
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar48 = 
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        pOVar53 = pOVar5[1].klass;
                        if (pOVar53 == (Object__Class *)0x0) goto code_?;
                        this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                            ((MethodInfo *)0x0);
                        if (this_06 == (MVWorldObjectClientManager *)0x0) goto code_?;
                        pOVar51 = MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                            (this_06,*(int32_t *)&(pOVar53->_0).name,
                                             pMVar48->klass->rgctx_data[1].method);
                        if (pOVar51 == (Object *)0x0) goto code_?;
                        if (pMVar52 == (MVWorldObjectClientManager *)0x0) goto code_?;
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
                                  (pMVar52,*(int32_t *)&pOVar51[1].klass,(this->fields).woIds,
                                   (MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?();
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar48 = 
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        pOVar53 = pOVar5[1].klass;
                        if (pOVar53 == (Object__Class *)0x0) goto code_?;
                        pMVar52 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                            ((MethodInfo *)0x0);
                        if (pMVar52 == (MVWorldObjectClientManager *)0x0) goto code_?;
                        pOVar5 = MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                            (pMVar52,*(int32_t *)&(pOVar53->_0).name,
                                             pMVar48->klass->rgctx_data[1].method);
                        if (pOVar5 == (Object *)0x0) goto code_?;
                        pTVar59 = (Transform *)pOVar5[0xd].monitor;
                        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                  (pTVar59,1,(MethodInfo *)0x0);
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar60 = func_?(&UNK_?);
                        FUN_?(uVar60,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if ((((pMVar35 != (MVGameControllerBase *)0x0) &&
                           (pMVar36 = (pMVar35->fields).game, pMVar36 != (MVNetworkGame *)0x0)) &&
                          (this_03 = (pMVar36->fields).playerContainer,
                          this_03 != (MVPlayerContainer *)0x0)) &&
                         (((pMVar61 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                                (this_03,(MethodInfo *)0x0),
                           pMVar61 != (MVLocalPlayer *)0x0 &&
                           (pSVar21 = (pMVar61->fields).spawnRoleDataMediator,
                           pSVar21 != (SpawnRoleDataMediator *)0x0)) &&
                          ((pSVar22 = (pSVar21->fields).position,
                           pSVar22 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_
                                      *)0x0 &&
                           (pSVar23 = (pSVar22->fields)._.subscribableVariable,
                           pSVar23 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)))))) {
                        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                             ->klass->field_0x135 & 1) == 0) {
                          FUN_?();
                        }
                        fVar3 = (pSVar23->fields)._.value.z;
                        fVar62 = (pSVar23->fields)._.value.y;
                        (this->fields).originPrevFrame.x = (pSVar23->fields)._.value.x;
                        (this->fields).originPrevFrame.y = fVar62;
                        (this->fields).originPrevFrame.z = fVar3;
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
                        bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                                           (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,
                                            (MethodInfo *)0x0);
                        (this->fields).enteredStateWithPointerSelectReleased = bVar18;
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
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Execute
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ESTranslate_IsValid(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (e != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((this->fields).enteredStateWithPointerSelectReleased == 0) {
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
      bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                         (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
    pVVar2 = ESTranslate_GetDeltaMouse(&VStack_3,this,e,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fStack_5 = pVVar2->z;
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Up,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).recalcLocalDirCamToObjects = 1;
    }
    pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
        (pSVar7 = (pSVar6->fields).position,
        pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
       (pSVar8 = (pSVar7->fields)._.subscribableVariable,
       pSVar8 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uVar9 = (pSVar8->fields)._.value.x;
      uVar10 = (pSVar8->fields)._.value.y;
      VStack_3.x = (this->fields).originPrevFrame.x;
      VStack_3.y = (this->fields).originPrevFrame.y;
      fVar11 = (pSVar8->fields)._.value.z;
      fVar12 = (float)uVar9 - VStack_3.x;
      fVar13 = (this->fields).originPrevFrame.z;
      fVar14 = (float)uVar10 - VStack_3.y;
      pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
          (pSVar7 = (pSVar6->fields).position,
          pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0))
         && (pSVar8 = (pSVar7->fields)._.subscribableVariable,
            pSVar8 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        fVar15 = fStack_5;
        fVar16 = (pSVar8->fields)._.value.z;
        fVar17 = (pSVar8->fields)._.value.y;
        targetIndex = 0;
        (this->fields).originPrevFrame.x = (pSVar8->fields)._.value.x;
        (this->fields).originPrevFrame.y = fVar17;
        (this->fields).originPrevFrame.z = fVar16;
        pLVar18 = (this->fields).translateDatas;
        if (pLVar18 != (List_1_TranslateData_ *)0x0) {
          fVar16 = uStack_4._4_4_;
          do {
            if ((pLVar18->fields)._size <= targetIndex) {
              ESTranslate_UpdateLaserPosition(this,(this->fields).targets,(MethodInfo *)0x0);
              (this->fields).enteredStateWithPointerSelectReleased = 0;
              return;
            }
            if ((this->fields).moveWithAvatar != 0) {
              if (((this->fields).translateDatas == (List_1_TranslateData_ *)0x0) ||
                 (lVar19 = FUN_?(), lVar19 == 0)) break;
              *(ulonglong *)(lVar19 + 0x18) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(lVar19 + 0x18) >> 0x20) + fVar14,
                            fVar12 + (float)*(undefined8 *)(lVar19 + 0x18));
              *(float *)(lVar19 + 0x20) = (fVar11 - fVar13) + *(float *)(lVar19 + 0x20);
            }
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                               (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              pLVar18 = (this->fields).translateDatas;
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (lVar19 = FUN_?(pLVar18,targetIndex), lVar19 == 0)) break;
              *(ulonglong *)(lVar19 + 0x18) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(lVar19 + 0x18) >> 0x20) + fVar16,
                            (float)uStack_4 + (float)*(undefined8 *)(lVar19 + 0x18));
              *(float *)(lVar19 + 0x20) = *(float *)(lVar19 + 0x20) + fVar15;
            }
            else {
              ESTranslate_RotateWithCamera(this,e,targetIndex,(MethodInfo *)0x0);
            }
            pLVar18 = (this->fields).translateDatas;
            if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                (lVar19 = FUN_?(pLVar18,targetIndex),
                (this->fields).translateDatas == (List_1_TranslateData_ *)0x0)) ||
               (pTVar20 = (TranslateData *)FUN_?(), pTVar20 == (TranslateData *)0x0)) break;
            pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0);
            pLVar18 = (this->fields).translateDatas;
            fVar17 = (this->fields).gridSize;
            if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                (lVar22 = FUN_?(pLVar18,targetIndex), lVar22 == 0)) ||
               (pMVar21 == (MVWorldObjectClient *)0x0)) break;
            uStack_23 = *(undefined8 *)(lVar22 + 0x18);
            uStack_24 = *(undefined4 *)(lVar22 + 0x20);
            puVar25 = (undefined8 *)
                      (*(pMVar21->klass->vtable).GetClosestGridPoint.methodPtr)
                                (auStack_26,pMVar21,(ulonglong)(uint)fVar17,&uStack_23,
                                 (pMVar21->klass->vtable).GetClosestGridPoint.method);
            uVar27 = *(undefined4 *)(puVar25 + 1);
            if (lVar19 == 0) break;
            *(undefined8 *)(lVar19 + 0x24) = *puVar25;
            *(undefined4 *)(lVar19 + 0x2c) = uVar27;
            pLVar18 = (this->fields).translateDatas;
            fVar17 = (this->fields).gridSize;
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               (lVar19 = FUN_?(pLVar18,targetIndex), lVar19 == 0)) break;
            pLVar18 = (this->fields).translateDatas;
            uStack_28 = *(undefined8 *)(lVar19 + 0x30);
            fVar29 = *(float *)(lVar19 + 0x38);
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               (lVar19 = FUN_?(pLVar18,targetIndex), lVar19 == 0)) break;
            fStack_30 = fVar29 - *(float *)(lVar19 + 0x20);
            uStack_31 = CONCAT44(uStack_28._4_4_ -
                                  (float)((ulonglong)*(undefined8 *)(lVar19 + 0x18) >> 0x20),
                                  (float)uStack_28 - (float)*(undefined8 *)(lVar19 + 0x18));
            fVar29 = (float)FUN_?(&uStack_31);
            if ((this->fields).translateDatas == (List_1_TranslateData_ *)0x0) break;
            if (fVar17 < fVar29) {
              pTVar20 = (TranslateData *)FUN_?();
              if (pTVar20 == (TranslateData *)0x0) break;
              pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0);
              pLVar18 = (this->fields).translateDatas;
              if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                  (lVar19 = FUN_?(pLVar18,targetIndex), lVar19 == 0)) ||
                 (pMVar21 == (MVWorldObjectClient *)0x0)) break;
              uStack_32 = *(undefined8 *)(lVar19 + 0x24);
              uStack_33 = *(undefined4 *)(lVar19 + 0x2c);
              (*(pMVar21->klass->vtable).set_SyncPos.methodPtr)(pMVar21,&uStack_32);
              pLVar18 = (this->fields).translateDatas;
              if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
              lVar19 = FUN_?(pLVar18,targetIndex);
              pLVar18 = (this->fields).translateDatas;
              if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                  (lVar22 = FUN_?(pLVar18,targetIndex), lVar22 == 0)) ||
                 (uVar27 = *(undefined4 *)(lVar22 + 0x2c), lVar19 == 0)) break;
              *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(lVar22 + 0x24);
              *(undefined4 *)(lVar19 + 0x38) = uVar27;
              pLVar18 = (this->fields).translateDatas;
              if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                  (lVar19 = FUN_?(pLVar18,targetIndex),
                  (this->fields).translateDatas == (List_1_TranslateData_ *)0x0)) ||
                 ((lVar22 = FUN_?(), lVar22 == 0 ||
                  (uVar27 = *(undefined4 *)(lVar22 + 0x2c), lVar19 == 0)))) break;
              *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar22 + 0x24);
              *(undefined4 *)(lVar19 + 0x20) = uVar27;
              if ((this->fields).playTranslateSounds != 0) {
                if ((((this->fields).translateDatas != (List_1_TranslateData_ *)0x0) &&
                    (pTVar20 = (TranslateData *)FUN_?(), pTVar20 != (TranslateData *)0x0))
                   && (pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0),
                      pMVar21 != (MVWorldObjectClient *)0x0)) {
                  puVar25 = (undefined8 *)
                            (*(pMVar21->klass->vtable).get_WorldPosition_1.methodPtr)
                                      (auStack_34,pMVar21,
                                       (pMVar21->klass->vtable).get_WorldPosition_1.method);
                  uVar35 = *puVar25;
                  fVar17 = *(float *)(puVar25 + 1);
                  if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pVVar2 = &VStack_3;
                  bVar1 = 1;
                  fVar29 = 0.0;
                  VStack_3._0_8_ = uVar35;
                  VStack_3.z = fVar17;
                  goto code_?;
                }
                break;
              }
            }
            else {
              lVar19 = FUN_?();
              if (lVar19 == 0) break;
              uStack_36 = *(undefined8 *)(lVar19 + 0x18);
              fVar17 = *(float *)(lVar19 + 0x20);
              if (((this->fields).translateDatas == (List_1_TranslateData_ *)0x0) ||
                 (lVar19 = FUN_?(), lVar19 == 0)) break;
              fVar37 = (float)uStack_36 - (float)*(undefined8 *)(lVar19 + 0x30);
              fVar38 = uStack_36._4_4_ - (float)((ulonglong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)
              ;
              fVar17 = fVar17 - *(float *)(lVar19 + 0x38);
              uStack_39 = CONCAT44(fVar38,fVar37);
              fStack_40 = fVar17;
              fVar29 = (float)FUN_?(&uStack_39);
              if ((this->fields).completelyStuckLimit * (this->fields).gridSize < fVar29) {
                fVar41 = (this->fields).stickyModifier;
                if (((this->fields).translateDatas == (List_1_TranslateData_ *)0x0) ||
                   (pTVar20 = (TranslateData *)FUN_?(), pTVar20 == (TranslateData *)0x0))
                break;
                pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0);
                pLVar18 = (this->fields).translateDatas;
                if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                   (lVar19 = FUN_?(pLVar18,targetIndex), lVar19 == 0)) break;
                if (pMVar21 == (MVWorldObjectClient *)0x0) break;
                uStack_42 = CONCAT44(*(float *)(lVar19 + 0x34) + fVar38 * fVar41,
                                      (float)*(undefined8 *)(lVar19 + 0x30) + fVar37 * fVar41);
                fStack_43 = fVar41 * fVar17 + *(float *)(lVar19 + 0x38);
                (*(pMVar21->klass->vtable).set_WorldPosition.methodPtr)(pMVar21);
              }
              if ((this->fields).playTranslateSounds != 0) {
                if ((((this->fields).translateDatas == (List_1_TranslateData_ *)0x0) ||
                    (pTVar20 = (TranslateData *)FUN_?(), pTVar20 == (TranslateData *)0x0))
                   || (pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0),
                      pMVar21 == (MVWorldObjectClient *)0x0)) break;
                puVar25 = (undefined8 *)
                          (*(pMVar21->klass->vtable).get_WorldPosition_1.methodPtr)
                                    (auStack_44,pMVar21,
                                     (pMVar21->klass->vtable).get_WorldPosition_1.method);
                uVar35 = *puVar25;
                fVar17 = *(float *)(puVar25 + 1);
                if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pVVar2 = &VStack_45;
                bVar1 = 0;
                VStack_45._0_8_ = uVar35;
                VStack_45.z = fVar17;
code_?:
                AudioEventHandler::AudioEventHandler_AddTranslateSoundData
                          (fVar29,bVar1,pVVar2,(MethodInfo *)0x0);
              }
            }
            pLVar18 = (this->fields).translateDatas;
            targetIndex = targetIndex + 1;
            if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Exit
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FromTranslateState);
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
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar5 = (pGVar4->fields).LaserCommands,
      pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnChangeState;
    if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0 &&
        ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
         pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))))
    {
      pAVar7 = (pGVar5->fields).OnLaserActiveChanged;
      if (pAVar7 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
      }
      if ((e != (EditorStateMachine *)0x0) &&
         (pMVar8 = (e->fields).weCamera, pMVar8 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_IgnoreInputTypes
                  (pMVar8,IgnoreInputTypes__Enum_None,(MethodInfo *)0x0);
        pMVar8 = (e->fields).weCamera;
        if ((pMVar8 != (MainCameraManager *)0x0) &&
           ((pTVar9 = (pMVar8->fields).tertiaryCamera, pTVar9 != (Transform *)0x0 &&
            (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar9,(MethodInfo *)0x0),
            pGVar10 != (GameObject *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar10,0,(MethodInfo *)0x0);
          pMVar8 = (e->fields).weCamera;
          if (pMVar8 != (MainCameraManager *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pTVar9 = (pMVar8->fields).tertiaryCamera;
            if ((pTVar9 != (Transform *)0x0) &&
               (pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_GetComponent_1
                                    ((Component *)pTVar9,
                                     UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                                    ), pOVar11 != (Object *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pOVar11[1].klass == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
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
              (*pcRam_?)();
              pLVar14 = (this->fields).translateDatas;
              if (pLVar14 != (List_1_TranslateData_ *)0x0) {
                if (iRam_? != 0) {
                  uVar15 = (uint)((ulonglong)&uStack_16 >> 0xc);
                  puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar18 = *puVar17;
                    LOCK();
                    uVar19 = *puVar17;
                    if (uVar18 == uVar19) {
                      *puVar17 = uVar18 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar18 != uVar19);
                }
                pLStack_20 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)(uint)(pLVar14->fields)._version << 0x20);
                uStack_21 = 0;
                LStack_22._8_8_ = pLStack_20;
                LStack_22._current = (Object *)0x0;
                uStack_16 = 0;
                pLStack_20 = &LStack_22;
                LStack_22._list = (List_1_System_Object_ *)pLVar14;
                while (bVar23 = mscorlib.dll::System::Collections::Generic::
                                List`1[T]+Enumerator[System::Object]::
                                List_1_T_Enumerator_System_Object__MoveNext
                                          (&LStack_22,
                                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                          ), pOVar11 = LStack_22._current, bVar23 != 0) {
                  if ((TranslateData *)LStack_22._current == (TranslateData *)0x0)
                  goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar24 = 
                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
                  pWVar25 = ((TranslateData__Fields *)((longlong)pOVar11 + 0x10))->
                            worldObjectClientRef;
                  if (pWVar25 == (WorldObjectClientRef *)0x0) goto code_?;
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
                  pOVar26 = MVWorldObjectClientManager::
                            MVWorldObjectClientManager_GetWorldObjectClient_1
                                      (this_02,(pWVar25->fields)._.woId,
                                       pMVar24->klass->rgctx_data[1].method);
                  if (pOVar26 != (Object *)0x0) {
                    pMVar27 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)pOVar11,(MethodInfo *)0x0);
                    if (pMVar27 == (MVWorldObjectClient *)0x0) goto code_?;
                    pGVar10 = (pMVar27->fields).gameObject;
                    if (pGVar10 == (GameObject *)0x0) goto code_?;
                    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar10,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                              (pTVar9,0,(MethodInfo *)0x0);
                    pMVar27 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)pOVar11,(MethodInfo *)0x0);
                    if (pMVar27 == (MVWorldObjectClient *)0x0) goto code_?;
                    uStack_28._0_4_ = *(float *)&pOVar11[3].klass;
                    uStack_28._4_4_ = *(float *)((longlong)&pOVar11[3].klass + 4);
                    fStack_29 = (((TranslateData__Fields *)((longlong)pOVar11 + 0x10))->
                                prevGridifiedPosition).z;
                    pLVar14 = (List_1_TranslateData_ *)
                              (pMVar27->klass->vtable).set_SyncPos.methodPtr;
                    (*(code *)pLVar14)(pMVar27,&uStack_28);
                  }
                }
                pcVar12 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcRam_? = pcVar12;
                (*pcRam_?)(1);
                this_00 = (e->fields).networkSelector;
                pSVar30 = (e->fields).selectionController;
                if ((pSVar30 != (SelectionController *)0x0) && (this_00 != (MVNetworkSelector *)0x0)
                   ) {
                  MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                            (this_00,(pSVar30->fields).selectedIDs,(MethodInfo *)0x0);
                  this_01 = (e->fields)._.data;
                  auStackX_20[0] = 1;
                  pOVar11 = (Object *)FUN_?(uRam_?,auStackX_20);
                  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryInsert
                              (this_01,(Object *)StringLiteral_FromTranslateState,pOVar11,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pLVar14 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                               ->klass->rgctx_data[0x22].method);
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
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 GetDeltaMouse(EditorStateMachine) */

Vector3 * Assembly-CSharp.dll::ESTranslate::ESTranslate_GetDeltaMouse
                    (Vector3 *__return_storage_ptr__,ESTranslate *this,EditorStateMachine *e,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((e == (EditorStateMachine *)0x0) ||
      (this_00 = (e->fields).weCamera, this_00 == (MainCameraManager *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = _UNK_?;
  fVar8 = (float)uStack_4 + (float)uStack_4;
  fVar9 = uStack_3._4_4_ + uStack_3._4_4_;
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar10->forwardVector).x;
  uVar12 = (pVVar10->forwardVector).y;
  uVar13._0_4_ = (_UNK_? - (fVar8 * (float)uStack_4 + fVar9 * uStack_3._4_4_)) *
                (float)uVar11 + (fVar9 * (float)uStack_3 - fVar8 * uStack_4._4_4_) * (float)uVar12
                + (fVar9 * uStack_4._4_4_ + fVar8 * (float)uStack_3) * (pVVar10->forwardVector).z
  ;
  fVar9 = (fVar8 * uStack_3._4_4_ + ((float)uStack_3 + (float)uStack_3) * uStack_4._4_4_) *
           (float)uVar12 + (fVar8 * (float)uStack_3 - fVar9 * uStack_4._4_4_) * (float)uVar11 +
           (_UNK_? -
           (((float)uStack_3 + (float)uStack_3) * (float)uStack_3 + fVar9 * uStack_3._4_4_)) *
           (pVVar10->forwardVector).z;
  fVar14 = 0.0;
  uStack_4 = CONCAT44(uStack_4._4_4_,fVar9);
  uStack_3 = (ulonglong)(uint)(float)uVar13;
  fVar8 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar8) {
    uVar13._4_4_ = 0.0 / fVar8;
    uVar13._0_4_ = (float)uVar13 / fVar8;
    fVar9 = fVar9 / fVar8;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13._0_4_ = (pVVar10->zeroVector).x;
    uVar13._4_4_ = (pVVar10->zeroVector).y;
    fVar9 = (pVVar10->zeroVector).z;
    uStack_3 = uVar13;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar10->forwardVector).x;
  uStack_3._4_4_ = (pVVar10->forwardVector).y;
  fVar8 = (pVVar10->forwardVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6._0_4_ = (pVVar10->upVector).x;
  uVar6._4_4_ = (pVVar10->upVector).y;
  fVar15 = fVar9 * uStack_3._4_4_;
  fVar9 = fVar9 * (float)uStack_3;
  fVar16 = (float)uVar13 * uStack_3._4_4_;
  fVar17 = (float)uStack_3 * uVar13._4_4_;
  uStack_3 = uVar6;
  fVar9 = (float)func_?((fVar15 - fVar8 * uVar13._4_4_) * (float)(undefined4)uVar6 +
                                      ((float)uVar13 * fVar8 - fVar9) * (float)uVar6._4_4_ +
                                      (fVar17 - fVar16) * (pVVar10->upVector).z);
  uStack_4 = uStack_4 & 0xffffffff00000000;
  uStack_3 = (ulonglong)(uint)(fVar9 * _UNK_? * _UNK_?) << 0x20;
  uStack_18 = 0;
  uStack_19 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_3);
  iVar20 = (this->fields).translateMode;
  if (iVar20 == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar13._0_4_ = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                            (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar9 = (this->fields).initialDistance;
    fVar8 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    uVar13._4_4_ = 0.0;
    fVar14 = fVar8 * (this->fields).initialDistance * _UNK_?;
  }
  else {
    if (iVar20 != 1) {
      if (iVar20 != 2) {
        uVar6 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar6);
        message = (String *)func_?(&StringLiteral_Failed_to_set_translate_mode);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
        uVar6 = func_?(&MethodInfo__ESTranslate__GetDeltaMouse_EditorStateMachine_);
        FUN_?(this_01,uVar6);
        pcVar1 = (code *)swi(3);
        pVVar2 = (Vector3 *)(*pcVar1)();
        return pVVar2;
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                         (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      uVar13._0_4_ = 0.0;
      uVar13._4_4_ = fVar9 * (this->fields).initialDistance * _UNK_?;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar13._0_4_ = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                            (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar9 = (this->fields).initialDistance;
    fVar8 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    uVar13._4_4_ = fVar8 * (this->fields).initialDistance * _UNK_?;
  }
  uVar13._0_4_ = fVar9 * (float)uVar13 * _UNK_?;
code_?:
  fVar9 = (float)uStack_19 + (float)uStack_19;
  fVar8 = uStack_18._4_4_ + uStack_18._4_4_;
  fVar16 = ((float)uStack_18 + (float)uStack_18) * (float)uStack_18;
  fVar17 = ((float)uStack_18 + (float)uStack_18) * uStack_19._4_4_;
  __return_storage_ptr__->x =
       (fVar7 - (fVar9 * (float)uStack_19 + fVar8 * uStack_18._4_4_)) * (float)uVar13 +
       (fVar8 * (float)uStack_18 - fVar9 * uStack_19._4_4_) * uVar13._4_4_ +
       (fVar8 * uStack_19._4_4_ + fVar9 * (float)uStack_18) * fVar14;
  __return_storage_ptr__->y =
       (fVar7 - (fVar9 * (float)uStack_19 + fVar16)) * uVar13._4_4_ +
       (fVar9 * uStack_19._4_4_ + fVar8 * (float)uStack_18) * (float)uVar13 +
       (fVar9 * uStack_18._4_4_ - fVar17) * fVar14;
  __return_storage_ptr__->z =
       (fVar9 * (float)uStack_18 - fVar8 * uStack_19._4_4_) * (float)uVar13 +
       (fVar17 + fVar9 * uStack_18._4_4_) * uVar13._4_4_ +
       (fVar7 - (fVar8 * uStack_18._4_4_ + fVar16)) * fVar14;
  return __return_storage_ptr__;
}


/* Single GetInitialAvatarMoveObjectDistance(EditorStateMachine) */

float Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectDistance
                (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  iVar2 = 0;
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
      (pSVar4 = (pSVar3->fields).position,
      pSVar4 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
     (pSVar5 = (pSVar4->fields)._.subscribableVariable,
     pSVar5 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    uStack_6._0_4_ = (pSVar5->fields)._.value.x;
    uStack_6._4_4_ = (pSVar5->fields)._.value.y;
    fStack_7 = (pSVar5->fields)._.value.z;
    if (((e != (EditorStateMachine *)0x0) &&
        (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) &&
       (pHVar8 = SelectionController::SelectionController_get_SelectedWOs
                            (this_00,(MethodInfo *)0x0), fVar9 = fStack_7,
       pHVar8 != (HashSet_1_MVWorldObjectClient_ *)0x0)) {
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&uStack_11 >> 0xc);
        uVar12 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      pHStack_16 = (HashSet_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pHVar8->fields)._version << 0x20);
      uStack_17 = 0;
      aHStack_18[0]._8_8_ = pHStack_16;
      aHStack_18[0]._current = (Object *)0x0;
      uStack_11 = 0;
      pHStack_16 = aHStack_18;
      fVar19 = uStack_6._4_4_;
      fVar20 = (float)uStack_6;
      aHStack_18[0]._set = (HashSet_1_System_Object_ *)pHVar8;
      while( true ) {
        bVar21 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                 Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                           (aHStack_18,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                           );
        if (bVar21 == 0) {
          return fVar1 / (float)iVar2;
        }
        if (aHStack_18[0]._current == (Object *)0x0) break;
        puVar22 = (undefined8 *)
                  (*(code *)(aHStack_18[0]._current)->klass[1].vtable.Finalize.method)
                            (&uStack_6,aHStack_18[0]._current,
                             (aHStack_18[0]._current)->klass[1].vtable.GetHashCode.methodPtr);
        fVar23 = *(float *)(puVar22 + 1);
        fVar24 = (float)((ulonglong)*puVar22 >> 0x20) - fVar19;
        fVar25 = (float)*puVar22 - fVar20;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        auVar26._0_8_ =
             (double)(fVar25 * fVar25 + fVar24 * fVar24 + (fVar23 - fVar9) * (fVar23 - fVar9));
        auVar26._8_8_ = 0;
        if (auVar26._0_8_ < 0.0) {
          dVar27 = (double)FUN_?();
        }
        else {
          auVar26 = sqrtpd(ZEXT816(0),auVar26);
          dVar27 = auVar26._0_8_;
        }
        fVar1 = fVar1 + (float)dVar27;
        iVar2 = iVar2 + 1;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar28 = (code *)swi(3);
  fVar1 = (float)(*pcVar28)();
  return fVar1;
}


/* Boolean GetInitialAvatarMoveObjectHitDistance(EditorStateMachine, Single ByRef) */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectHitDistance
               (ESTranslate *this,EditorStateMachine *e,float *hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0].interactionFlags = 0;
  aVStack_1[0].point.x = 0.0;
  aVStack_1[0].point.y = 0.0;
  aVStack_1[0].point.z = 0.0;
  aVStack_1[0].normal.x = 0.0;
  aVStack_1[0].normal.y = 0.0;
  aVStack_1[0].normal.z = 0.0;
  aVStack_1[0].cubePos.x = 0;
  aVStack_1[0].cubePos.y = 0;
  aVStack_1[0].cubePos.z = 0;
  aVStack_1[0]._30_2_ = 0;
  aVStack_1[0].face = 0;
  aVStack_1[0].isCubeHit = 0;
  aVStack_1[0]._37_3_ = 0;
  aVStack_1[0].woId = 0;
  aVStack_1[0]._44_4_ = 0;
  aVStack_1[0].cube = (Cube *)0x0;
  aVStack_1[0].distance = 0.0;
  aVStack_1[0]._60_4_ = 0;
  aVStack_1[0].collider = (Collider *)0x0;
  aVStack_1[0].transform = (Transform *)0x0;
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (aVStack_1,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if ((bVar2 == 0) || (aVStack_1[0].woId == 0xffffffff)) {
    return 0;
  }
  if ((e != (EditorStateMachine *)0x0) &&
     ((pSVar3 = (e->fields).selectionController, pSVar3 != (SelectionController *)0x0 &&
      (this_00 = (HashSet_1_System_Int32Enum_ *)(pSVar3->fields).selectedIDs,
      this_00 != (HashSet_1_System_Int32Enum_ *)0x0)))) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,aVStack_1[0].woId,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar2 == 0) {
      return 0;
    }
    fVar4 = aVStack_1[0].point.z;
    VStack_5.x = aVStack_1[0].point.x;
    VStack_5.y = aVStack_1[0].point.y;
    pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
        (pSVar7 = (pSVar6->fields).position,
        pSVar7 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
       (pSVar8 = (pSVar7->fields)._.subscribableVariable,
       pSVar8 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uVar9 = (pSVar8->fields)._.value.x;
      uVar10 = (pSVar8->fields)._.value.y;
      VStack_5.z = fVar4 - (pSVar8->fields)._.value.z;
      VStack_5.y = VStack_5.y - (float)uVar10;
      VStack_5.x = VStack_5.x - (float)uVar9;
      fVar4 = (float)FUN_?(&VStack_5);
      *hitDistance = fVar4;
      return 1;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar2 = (*pcVar11)();
  return bVar2;
}


/* Boolean IsValid() */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_IsValid(ESTranslate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).translateDatas;
  if (pLVar1 == (List_1_TranslateData_ *)0x0) {
    FUN_?();
  }
  else {
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
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                        );
      if (bVar10 == 0) {
        return 1;
      }
      if ((TranslateData *)LStack_9._current == (TranslateData *)0x0) break;
      pMVar11 = TranslateData::TranslateData_get_Wo
                         ((TranslateData *)LStack_9._current,(MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar10 = (*pcVar12)();
  return bVar10;
}


/* Void RotateWithCamera(EditorStateMachine, Int32) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_RotateWithCamera
               (ESTranslate *this,EditorStateMachine *e,int32_t targetIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).recalcLocalDirCamToObjects != 0) {
    if ((this->fields).fixedToYPlane == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar2._0_4_ = (pVVar1->zeroVector).x;
      uVar2._4_4_ = (pVVar1->zeroVector).y;
      fVar3 = (pVVar1->zeroVector).z;
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar4 = (e->fields).weCamera, pMVar4 == (MainCameraManager *)0x0)) ||
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&QStack_6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_9.x = (pVVar1->oneVector).x;
      VStack_9.y = (pVVar1->oneVector).y;
      VStack_9.z = (pVVar1->oneVector).z;
      QStack_10.x = QStack_6.x;
      QStack_10.y = QStack_6.y;
      QStack_10.z = QStack_6.z;
      QStack_10.w = QStack_6.w;
      uStack_11 = 0;
      uStack_12 = 0;
      uStack_13 = 0;
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_17 = 0;
      uStack_18 = 0;
      pcVar8 = pcRam_?;
      VStack_19._0_8_ = uVar2;
      VStack_19.z = fVar3;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      pVVar20 = &VStack_9;
      pVVar21 = &VStack_19;
    }
    else {
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar4 = (e->fields).weCamera, pMVar4 == (MainCameraManager *)0x0)) ||
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&QStack_6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_22.x = (pVVar1->forwardVector).x;
      VStack_22.y = (pVVar1->forwardVector).y;
      VStack_22.z = (pVVar1->forwardVector).z;
      pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_9,&QStack_6,&VStack_22,(MethodInfo *)0x0);
      VStack_22.x = pVVar20->x;
      VStack_22.y = pVVar20->y;
      VStack_22.z = pVVar20->z;
      fVar3 = MathFunctions::MathFunctions_Yaw(&VStack_22,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_22._0_8_ = (ulonglong)(uint)(fVar3 * _UNK_?) << 0x20;
      VStack_22.z = 0.0;
      QStack_6.x = 0.0;
      QStack_6.y = 0.0;
      QStack_6.z = 0.0;
      QStack_6.w = 0.0;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(&VStack_22,&QStack_6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      lVar23._0_4_ = (pVVar1->zeroVector).x;
      lVar23._4_4_ = (pVVar1->zeroVector).y;
      fVar3 = (pVVar1->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_19.x = (pVVar1->oneVector).x;
      VStack_19.y = (pVVar1->oneVector).y;
      VStack_19.z = (pVVar1->oneVector).z;
      QStack_10.x = QStack_6.x;
      QStack_10.y = QStack_6.y;
      QStack_10.z = QStack_6.z;
      QStack_10.w = QStack_6.w;
      uStack_11 = 0;
      uStack_12 = 0;
      uStack_13 = 0;
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_17 = 0;
      uStack_18 = 0;
      pcVar8 = pcRam_?;
      VStack_9._0_8_ = lVar23;
      VStack_9.z = fVar3;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      pVVar20 = &VStack_19;
      pVVar21 = &VStack_9;
    }
    (*pcRam_?)(pVVar21,&QStack_10,pVVar20,&uStack_11);
    uStack_24 = uStack_11;
    uStack_25 = uStack_12;
    uStack_26 = uStack_15;
    uStack_27 = uStack_16;
    uStack_28 = uStack_13;
    uStack_29 = uStack_14;
    uStack_30 = uStack_17;
    uStack_31 = uStack_18;
    uStack_32 = 0;
    uStack_33 = 0;
    uStack_34 = 0;
    uStack_35 = 0;
    uStack_36 = 0;
    uStack_37 = 0;
    uStack_38 = 0;
    uStack_39 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&uStack_24,&uStack_32);
    fVar3 = _UNK_?;
    pLVar40 = (this->fields).translateDatas;
    uVar41 = 0;
    if (pLVar40 != (List_1_TranslateData_ *)0x0) {
      lVar23 = 0x20;
      while( true ) {
        if ((pLVar40->fields)._size <= (int)uVar41) {
          (this->fields).recalcLocalDirCamToObjects = 0;
          goto code_?;
        }
        pLVar40 = (this->fields).translateDatas;
        if (pLVar40 == (List_1_TranslateData_ *)0x0) break;
        if ((uint)(pLVar40->fields)._size <= uVar41) goto code_?;
        pTVar42 = (pLVar40->fields)._items;
        if (pTVar42 == (TranslateData__Array *)0x0) break;
        if ((uint)pTVar42->max_length <= uVar41) goto code_?;
        lVar43 = *(longlong *)((longlong)pTVar42->vector + lVar23 + -0x20);
        lVar44 = *(longlong *)((longlong)pTVar42->vector + lVar23 + -0x20);
        if (lVar44 == 0) break;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar45 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
        lVar44 = *(longlong *)(lVar44 + 0x10);
        if (((lVar44 == 0) ||
            (pMVar46 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar46 == (MVWorldObjectClientManager *)0x0)) ||
           (pOVar47 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                                (pMVar46,*(int32_t *)(lVar44 + 0x10),
                                 pMVar45->klass->rgctx_data[1].method), pOVar47 == (Object *)0x0))
        break;
        plVar48 = (longlong *)
                  (*(code *)pOVar47->klass[1].vtable.Finalize.method)
                            (&QStack_10,pOVar47,pOVar47->klass[1].vtable.GetHashCode.methodPtr);
        VStack_9._0_8_ = *plVar48;
        fVar49 = *(float *)(plVar48 + 1);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar50 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((((pMVar50 == (MVGameControllerBase *)0x0) ||
              (pMVar51 = (pMVar50->fields).game, pMVar51 == (MVNetworkGame *)0x0)) ||
             ((pMVar52 = (pMVar51->fields).playerContainer, pMVar52 == (MVPlayerContainer *)0x0 ||
              ((pMVar53 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar52,(MethodInfo *)0x0), pMVar53 == (MVLocalPlayer *)0x0 ||
               (pSVar54 = (pMVar53->fields).spawnRoleDataMediator,
               pSVar54 == (SpawnRoleDataMediator *)0x0)))))) ||
            (pSVar55 = (pSVar54->fields).position,
            pSVar55 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0
            )) || (pSVar56 = (pSVar55->fields)._.subscribableVariable,
                  pSVar56 == (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) break;
        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        QStack_6.x = (pSVar56->fields)._.value.x;
        QStack_6.y = (pSVar56->fields)._.value.y;
        fVar57 = VStack_9.x - QStack_6.x;
        fVar58 = VStack_9.y - QStack_6.y;
        fVar49 = fVar49 - (pSVar56->fields)._.value.z;
        VStack_19.y = fVar58;
        VStack_19.x = fVar57;
        VStack_19.z = fVar49;
        fVar59 = (float)FUN_?(&VStack_19);
        if (fVar3 < fVar59) {
          fVar49 = fVar49 / fVar59;
          VStack_22._0_8_ = CONCAT44(fVar58 / fVar59,fVar57 / fVar59);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_22.x = (pVVar1->zeroVector).x;
          VStack_22.y = (pVVar1->zeroVector).y;
          fVar49 = (pVVar1->zeroVector).z;
        }
        uVar41 = uVar41 + 1;
        *(ulonglong *)(lVar43 + 0x3c) =
             CONCAT44(VStack_22.y * uStack_34._4_4_ + VStack_22.x * uStack_32._4_4_ +
                      fVar49 * uStack_36._4_4_,
                      VStack_22.y * (float)uStack_34 + VStack_22.x * (float)uStack_32 +
                      fVar49 * (float)uStack_36);
        lVar23 = lVar23 + 8;
        *(float *)(lVar43 + 0x44) =
             VStack_22.y * (float)uStack_35 + VStack_22.x * (float)uStack_33 +
             fVar49 * (float)uStack_37;
        pLVar40 = (this->fields).translateDatas;
        if (pLVar40 == (List_1_TranslateData_ *)0x0) break;
      }
    }
    goto code_?;
  }
code_?:
  pLVar40 = (this->fields).translateDatas;
  if (pLVar40 == (List_1_TranslateData_ *)0x0) goto code_?;
  if ((uint)(pLVar40->fields)._size <= (uint)targetIndex) goto code_?;
  pTVar42 = (pLVar40->fields)._items;
  if (pTVar42 == (TranslateData__Array *)0x0) goto code_?;
  if ((uint)pTVar42->max_length <= (uint)targetIndex) goto code_?;
  pTVar60 = pTVar42->vector[targetIndex];
  if (pTVar60 != (TranslateData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar45 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    pWVar61 = (pTVar60->fields).worldObjectClientRef;
    if (((pWVar61 != (WorldObjectClientRef *)0x0) &&
        (pMVar46 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar46 != (MVWorldObjectClientManager *)0x0)) &&
       (pOVar47 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                            (pMVar46,(pWVar61->fields)._.woId,pMVar45->klass->rgctx_data[1].method),
       pOVar47 != (Object *)0x0)) {
      plVar48 = (longlong *)
                (*(code *)pOVar47->klass[1].vtable.Finalize.method)
                          (&QStack_6,pOVar47,pOVar47->klass[1].vtable.GetHashCode.methodPtr);
      VStack_9._0_8_ = *plVar48;
      fVar3 = *(float *)(plVar48 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar50 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar50 != (MVGameControllerBase *)0x0) &&
           (pMVar51 = (pMVar50->fields).game, pMVar51 != (MVNetworkGame *)0x0)) &&
          ((pMVar52 = (pMVar51->fields).playerContainer, pMVar52 != (MVPlayerContainer *)0x0 &&
           ((pMVar53 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar52,(MethodInfo *)0x0), pMVar53 != (MVLocalPlayer *)0x0 &&
            (pSVar54 = (pMVar53->fields).spawnRoleDataMediator,
            pSVar54 != (SpawnRoleDataMediator *)0x0)))))) &&
         ((pSVar55 = (pSVar54->fields).position,
          pSVar55 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0
          && (pSVar56 = (pSVar55->fields)._.subscribableVariable,
             pSVar56 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)))) {
        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        QStack_6.x = (pSVar56->fields)._.value.x;
        QStack_6.y = (pSVar56->fields)._.value.y;
        VStack_9.z = fVar3 - (pSVar56->fields)._.value.z;
        VStack_9._0_8_ = CONCAT44(VStack_9.y - QStack_6.y,VStack_9.x - QStack_6.x);
        fVar3 = (float)FUN_?(&VStack_9);
        if ((this->fields).fixedToYPlane == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar62._0_4_ = (pVVar1->zeroVector).x;
          uVar62._4_4_ = (pVVar1->zeroVector).y;
          fVar49 = (pVVar1->zeroVector).z;
          if ((e == (EditorStateMachine *)0x0) ||
             (pMVar4 = (e->fields).weCamera, pMVar4 == (MainCameraManager *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pMVar4->fields)._._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar4,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          pvVar7 = (void *)(*pcRam_?)(pvVar7);
          pOVar47 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar7,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar47 == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          QStack_6.x = 0.0;
          QStack_6.y = 0.0;
          QStack_6.z = 0.0;
          QStack_6.w = 0.0;
          pOVar63 = pOVar47[1].klass;
          if (pOVar63 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar47,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pOVar63,&QStack_6);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_9.x = (pVVar1->oneVector).x;
          VStack_9.y = (pVVar1->oneVector).y;
          VStack_9.z = (pVVar1->oneVector).z;
          QStack_10.x = QStack_6.x;
          QStack_10.y = QStack_6.y;
          QStack_10.z = QStack_6.z;
          QStack_10.w = QStack_6.w;
          uStack_11 = 0;
          uStack_12 = 0;
          uStack_13 = 0;
          uStack_14 = 0;
          uStack_15 = 0;
          uStack_16 = 0;
          uStack_17 = 0;
          uStack_18 = 0;
          pcVar8 = pcRam_?;
          VStack_19._0_8_ = uVar62;
          VStack_19.z = fVar49;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(&VStack_19,&QStack_10,&VStack_9,&uStack_11);
        }
        else {
          if ((e == (EditorStateMachine *)0x0) ||
             (pMVar4 = (e->fields).weCamera, pMVar4 == (MainCameraManager *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pMVar4->fields)._._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar4,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          pvVar7 = (void *)(*pcRam_?)(pvVar7);
          pOVar47 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar7,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar47 == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          QStack_6.x = 0.0;
          QStack_6.y = 0.0;
          QStack_6.z = 0.0;
          QStack_6.w = 0.0;
          pOVar63 = pOVar47[1].klass;
          if (pOVar63 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar47,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pOVar63);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          fVar59 = QStack_6.z + QStack_6.z;
          fVar57 = QStack_6.y + QStack_6.y;
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar58 = (QStack_6.x + QStack_6.x) * QStack_6.x;
          uVar64 = (pVVar1->forwardVector).x;
          uVar65 = (pVVar1->forwardVector).y;
          fVar49 = (pVVar1->forwardVector).z;
          fVar66 = (QStack_6.x + QStack_6.x) * QStack_6.w;
          VStack_9.z = (fVar59 * QStack_6.x - fVar57 * QStack_6.w) * (float)uVar64 +
                         (fVar66 + fVar59 * QStack_6.y) * (float)uVar65 +
                         (_UNK_? - (fVar57 * QStack_6.y + fVar58)) * fVar49;
          VStack_9.y = (_UNK_? - (fVar59 * QStack_6.z + fVar58)) * (float)uVar65 +
                         (fVar59 * QStack_6.w + fVar57 * QStack_6.x) * (float)uVar64 +
                         (fVar59 * QStack_6.y - fVar66) * fVar49;
          VStack_9.x = (_UNK_? - (fVar59 * QStack_6.z + fVar57 * QStack_6.y)) *
                         (float)uVar64 +
                         (fVar57 * QStack_6.x - fVar59 * QStack_6.w) * (float)uVar65 +
                         (fVar57 * QStack_6.w + fVar59 * QStack_6.x) * fVar49;
          fVar49 = MathFunctions::MathFunctions_Yaw(&VStack_9,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_9._0_8_ = (ulonglong)(uint)(fVar49 * _UNK_?) << 0x20;
          VStack_9.z = 0.0;
          QStack_6.x = 0.0;
          QStack_6.y = 0.0;
          QStack_6.z = 0.0;
          QStack_6.w = 0.0;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(&VStack_9,&QStack_6);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          lVar43._0_4_ = (pVVar1->zeroVector).x;
          lVar43._4_4_ = (pVVar1->zeroVector).y;
          fVar49 = (pVVar1->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_19.x = (pVVar1->oneVector).x;
          VStack_19.y = (pVVar1->oneVector).y;
          VStack_19.z = (pVVar1->oneVector).z;
          QStack_10.x = QStack_6.x;
          QStack_10.y = QStack_6.y;
          QStack_10.z = QStack_6.z;
          QStack_10.w = QStack_6.w;
          uStack_11 = 0;
          uStack_12 = 0;
          uStack_13 = 0;
          uStack_14 = 0;
          uStack_15 = 0;
          uStack_16 = 0;
          uStack_17 = 0;
          uStack_18 = 0;
          pcVar8 = pcRam_?;
          VStack_22._0_8_ = lVar43;
          VStack_22.z = fVar49;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(&VStack_22,&QStack_10,&VStack_19,&uStack_11);
        }
        pLVar40 = (this->fields).translateDatas;
        if (pLVar40 != (List_1_TranslateData_ *)0x0) {
          if ((uint)(pLVar40->fields)._size <= (uint)targetIndex) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar42 = (pLVar40->fields)._items;
          if (pTVar42 != (TranslateData__Array *)0x0) {
            if ((uint)pTVar42->max_length <= (uint)targetIndex) {
code_?:
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar60 = pTVar42->vector[targetIndex];
            if (pTVar60 != (TranslateData *)0x0) {
              VStack_9.x = (pTVar60->fields).localDirCamToObject.x;
              VStack_9.y = (pTVar60->fields).localDirCamToObject.y;
              fVar59 = VStack_9.x * (float)uStack_11;
              fVar67 = VStack_9.y * (float)uStack_13;
              fVar49 = (pTVar60->fields).localDirCamToObject.z;
              fVar58 = fVar49 * (float)uStack_15;
              fVar68 = VStack_9.y * uStack_13._4_4_;
              fVar69 = VStack_9.y * (float)uStack_14;
              fVar57 = VStack_9.x * uStack_11._4_4_;
              fVar70 = VStack_9.x * (float)uStack_12;
              fVar66 = fVar49 * uStack_15._4_4_;
              fVar49 = fVar49 * (float)uStack_16;
              pLVar40 = (this->fields).translateDatas;
              if (pLVar40 != (List_1_TranslateData_ *)0x0) {
                if ((uint)(pLVar40->fields)._size <= (uint)targetIndex) goto code_?;
                pTVar42 = (pLVar40->fields)._items;
                if (pTVar42 != (TranslateData__Array *)0x0) {
                  if ((uint)pTVar42->max_length <= (uint)targetIndex) goto code_?;
                  pTVar60 = pTVar42->vector[targetIndex];
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar50 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((((pMVar50 != (MVGameControllerBase *)0x0) &&
                        (pMVar51 = (pMVar50->fields).game, pMVar51 != (MVNetworkGame *)0x0)) &&
                       (pMVar52 = (pMVar51->fields).playerContainer,
                       pMVar52 != (MVPlayerContainer *)0x0)) &&
                      ((pMVar53 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (pMVar52,(MethodInfo *)0x0),
                       pMVar53 != (MVLocalPlayer *)0x0 &&
                       (pSVar54 = (pMVar53->fields).spawnRoleDataMediator,
                       pSVar54 != (SpawnRoleDataMediator *)0x0)))) &&
                     ((pSVar55 = (pSVar54->fields).position,
                      pSVar55 !=
                      (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0
                      && (pSVar56 = (pSVar55->fields)._.subscribableVariable,
                         pSVar56 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)))) {
                    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         ->klass->field_0x135 & 1) == 0) {
                      FUN_?();
                    }
                    uVar71 = (pSVar56->fields)._.value.x;
                    uVar72 = (pSVar56->fields)._.value.y;
                    fVar73 = (pSVar56->fields)._.value.z;
                    if (pTVar60 != (TranslateData *)0x0) {
                      (pTVar60->fields).ungridifiedPosition.x =
                           (fVar67 + fVar59 + fVar58) * fVar3 + (float)uVar71;
                      (pTVar60->fields).ungridifiedPosition.y =
                           (fVar68 + fVar57 + fVar66) * fVar3 + (float)uVar72;
                      (pTVar60->fields).ungridifiedPosition.z =
                           (fVar69 + fVar70 + fVar49) * fVar3 + fVar73;
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
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateLaserPosition(List`1[MVWorldObjectClient]) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_UpdateLaserPosition
               (ESTranslate *this,List_1_MVWorldObjectClient_ *wos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
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
  if (wos != (List_1_MVWorldObjectClient_ *)0x0) {
    if ((wos->fields)._size == 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
          (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
         (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
         pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
        pGVar5 = (pGVar4->fields).LaserCommands;
        if ((wos->fields)._size == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pMVar7 = (wos->fields)._items;
        if (pMVar7 != (MVWorldObjectClient__Array *)0x0) {
          if ((int)pMVar7->max_length == 0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pMVar8 = pMVar7->vector[0];
          if ((pMVar8 != (MVWorldObjectClient *)0x0) &&
             (pVVar9 = (Vector3 *)
                        (*(pMVar8->klass->vtable).get_WorldPivot.methodPtr)
                                  (auStack_10,pMVar8,(pMVar8->klass->vtable).get_WorldPivot.method
                                  ),
             pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
             ) {
            pAVar11 = (pGVar5->fields).OnUpdatePosition;
            goto code_?;
          }
        }
      }
    }
    else {
      transforms = (List_1_UnityEngine_Transform_ *)
                   FUN_?(
                                TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>
                                );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)auStack_10 >> 0xc);
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
      auStack_10._8_8_ = (ulonglong)(uint)(wos->fields)._version << 0x20;
      uStack_16 = 0;
      LStack_17._index = auStack_10._8_4_;
      LStack_17._version = auStack_10._12_4_;
      LStack_17._current = (Object *)0x0;
      auStack_10._0_4_ = 0.0;
      auStack_10._4_4_ = 0.0;
      auStack_10._8_8_ = &LStack_17;
      LStack_17._list = (List_1_System_Object_ *)wos;
      while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_17,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                ),
            pMVar19 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
            , bVar18 != 0) {
        if (LStack_17._current == (Object *)0x0) goto code_?;
        item = (Object *)LStack_17._current[0xd].monitor;
        if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        piVar20 = &(transforms->fields)._version;
        *piVar20 = *piVar20 + 1;
        pTVar21 = (transforms->fields)._items;
        uVar12 = (transforms->fields)._size;
        if (pTVar21 == (Transform__Array *)0x0) goto code_?;
        if (uVar12 < (uint)pTVar21->max_length) {
          (transforms->fields)._size = uVar12 + 1;
          FUN_?(pTVar21,(longlong)(int)uVar12);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)transforms,item,pMVar19->klass->rgctx_data[0xe].method
                    );
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0 &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
        pGVar5 = (pGVar4->fields).LaserCommands;
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                            ((Vector3 *)auStack_10,transforms,(MethodInfo *)0x0);
        if (pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
        {
          pAVar11 = (pGVar5->fields).OnUpdatePosition;
code_?:
          if (pAVar11 != (Action_1_UnityEngine_Vector3_ *)0x0) {
            uStack_22._0_4_ = pVVar9->x;
            uStack_22._4_4_ = pVVar9->y;
            fStack_23 = pVVar9->z;
            (*(pAVar11->fields)._._.invoke_impl)
                      ((pAVar11->fields)._._.method_code,&uStack_22,(pAVar11->fields)._._.method);
          }
          return;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ESTranslate() */

void Assembly-CSharp.dll::ESTranslate::ESTranslate__ctor(ESTranslate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TranslateData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).stickyModifier = 0.2;
  (this->fields).completelyStuckLimit = 0.3;
  (this->fields).recalcLocalDirCamToObjects = 1;
  this_01 = (List_1_TranslateData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<TranslateData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).translateDatas = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).translateDatas >> 0xc);
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
  this_02 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).targets = this_02;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar8 = (pVVar6->zeroVector).z;
  (this->fields).originPrevFrame.x = (pVVar6->zeroVector).x;
  (this->fields).originPrevFrame.y = fVar7;
  (this->fields).originPrevFrame.z = fVar8;
  (this->fields).playTranslateSounds = 1;
  (this->fields).fixedToYPlane = 1;
  pWVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar5 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar1 = uVar3 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pIVar12 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.logger = pIVar12;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar5 = (ulonglong *)(lVar10 + 0xADDR);
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

