
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Enter
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff30;
  puVar5 = &stack0xffffff30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<TranslateData>);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    func_?(&TypeInfo__TranslateData);
    func_?(&TypeInfo__TranslateMode);
    func_?(&StringLiteral_moveWithAvatar);
    func_?(&StringLiteral_Ownership_request_failed);
    func_?(&StringLiteral_translateMode);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar7 == (IEditModeUI *)0x0) goto code_?;
  cVar8 = func_?(0,TypeInfo__IEditModeUI,pIVar7);
  fVar9 = _UNK_?;
  if (cVar8 == '\0') {
    fVar9 = _UNK_?;
  }
  (this->fields).gridSize = fVar9;
  if (((e == (EditorStateMachine *)0x0) ||
      (pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data,
      pDVar10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) ||
     (TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar10,(Object *)StringLiteral_translateMode,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), TVar11.m_Index == 0)) goto code_?;
  pBVar12 = (Boolean__Class *)TypeInfo__TranslateMode;
  if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) !=
      (TypeInfo__TranslateMode->_0).element_class) {
code_?:
    func_?(TVar11.m_Index,pBVar12);
    goto code_?;
  }
  piVar13 = (int32_t *)func_?(TVar11.m_Index);
  (this->fields).translateMode = *piVar13;
  pDVar10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
  if (pDVar10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (pDVar10,(Object *)StringLiteral_moveWithAvatar,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (TVar11.m_Index == 0) goto code_?;
  pBVar12 = TypeInfo__System__Boolean;
  if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) !=
      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
  pbVar14 = (bool *)func_?(TVar11.m_Index);
  bVar15 = cRam_? == '\0';
  (this->fields).moveWithAvatar = *pbVar14;
  (this->fields).initialDistance = 0.0;
  if (bVar15) {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  func_?(&VStack_16,0,0x48);
  bVar17 = EditModeObjectPicker::EditModeObjectPicker_Pick
                     (&VStack_16,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if ((bVar17 == 0) || (VStack_16.woId == 0xffffffff)) {
code_?:
    fVar9 = ESTranslate_GetInitialAvatarMoveObjectDistance(this,e,(MethodInfo *)0x0);
    fVar18 = (float10)fVar9;
  }
  else {
    method_00 = (MethodInfo *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
             HashSet_1_System_Int32Enum__Contains
                       ((HashSet_1_System_Int32Enum_ *)method_00,VStack_16.woId,
                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar17 == 0) goto code_?;
    uStack_19 = CONCAT44(VStack_16.point.y,VStack_16.point.x);
    pLStack_20 = (List_1_T_Enumerator_System_Object_ *)VStack_16.point.z;
    pSVar21 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar21 == (SpawnRoleDataMediator *)0x0) goto code_?;
    pVVar22 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[UnityEngine::Vector3]::
              SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                        ((Vector3 *)(auStack_23 + 4),
                         (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar21->fields).position,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                        );
    uVar24 = pVVar22->x;
    uVar25 = pVVar22->y;
    pLStack_26 = (List_1_T_Enumerator_System_Object_ *)((float)pLStack_20 - pVVar22->z);
    uStack_27 = CONCAT44(uStack_19._4_4_ - (float)uVar25,(float)uStack_19 - (float)uVar24);
    pLStack_20 = pLStack_26;
    fVar18 = (float10)func_?(&uStack_27,0);
  }
  pMStack_28 = (MVWorldObject *)(float)fVar18;
  (this->fields).initialDistance = (float)pMStack_28;
  (this->fields).recalcLocalDirCamToObjects = 1;
  this_02 = (List_1_TranslateData_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  ppLVar29 = &(this->fields).translateDatas;
  *ppLVar29 = this_02;
  func_?(ppLVar29);
  pMVar30 = (MVWorldObjectClientManager *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar30,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  ppLVar31 = &(this->fields).targets;
  *ppLVar31 = (List_1_MVWorldObjectClient_ *)pMVar30;
  func_?(ppLVar31);
  pMVar32 = (e->fields).weCamera;
  if (pMVar32 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_IgnoreInputTypes
              (pMVar32,IgnoreInputTypes__Enum_Avatar|IgnoreInputTypes__Enum_MouseScroll,
               (MethodInfo *)0x0);
    pMStack_28 = (MVWorldObject *)(e->fields).networkSelector;
    pHVar33 = (HashSet_1_System_Int32_ *)
              MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (pMStack_28 != (MVWorldObject *)0x0) {
      bVar17 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                         ((MVNetworkSelector *)pMStack_28,pHVar33,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Ownership_request_failed,(MethodInfo *)0x0);
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pGVar34 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar34 != (GameEventManager *)0x0) &&
          (pGVar35 = (pGVar34->fields).AvatarCommandsBuildMode,
          pGVar35 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar36 = (pGVar35->fields).LaserCommands,
         pGVar36 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
        AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)pGVar36,3,(MethodInfo *)0x0);
        pGVar34 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        if (((pGVar34 != (GameEventManager *)0x0) &&
            (pGVar35 = (pGVar34->fields).AvatarCommandsBuildMode,
            pGVar35 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar36 = (pGVar35->fields).LaserCommands,
           pGVar36 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (pGVar36,1,(MethodInfo *)0x0);
          this_03 = (HashSet_1_System_UInt32_ *)
                    MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                              ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
          if (this_03 != (HashSet_1_System_UInt32_ *)0x0) {
            pHVar37 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                      HashSet_1_System_UInt32__GetEnumerator
                                ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_23,this_03,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                );
            uStack_19 = uStack_19 & 0xffffffff;
            LStack_38._list = (List_1_System_Object_ *)pHVar37->_set;
            LStack_38._index = pHVar37->_index;
            LStack_38._version = pHVar37->_version;
            LStack_38._current = (Object *)pHVar37->_current;
            uStack_1 = 1;
            pLStack_20 = &LStack_38;
            while (bVar17 = System.Core.dll::System::Collections::Generic::
                            HashSet`1[T]+Enumerator[System::UInt32]::
                            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&LStack_38,
                                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                      ), bVar17 != 0) {
              pMStack_28 = (MVWorldObject *)LStack_38._current;
              this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
              pMStack_28 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (this_04,(int32_t)pMStack_28,(MethodInfo *)0x0);
              this_00 = (this->fields).targets;
              if (this_00 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)this_00,(Object *)pMStack_28,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
              ppHStack_39 = (HashSet_1_System_Int32_ **)(this->fields).gridSize;
              pMStack_40 = (MVWorldObjectClientManager *)(this->fields).translateDatas;
              pOVar41 = (Object *)func_?(TypeInfo__TranslateData);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        (pOVar41,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar30);
              pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((pMStack_28 == (MVWorldObject *)0x0) ||
                 (pMVar30 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pOVar42 = (Object__Class *)
                        MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar30,(pMStack_28->fields).id,(MethodInfo *)0x0);
              pOVar41[1].klass = pOVar42;
              func_?();
              puVar43 = (undefined8 *)(*pMStack_28->klass[1]._0.gc_desc)();
              uVar44 = *puVar43;
              pMVar45 = *(MonitorData **)(puVar43 + 1);
              *(undefined8 *)&pOVar41[1].monitor = uVar44;
              pOVar41[2].monitor = pMVar45;
              pOVar46 = (Object *)
                        (*pMStack_28->klass[1].vtable.get_HasObjectConnector.methodPtr)
                                  (&uStack_27,pMStack_28,ppHStack_39,uVar44);
              pOVar42 = pOVar46[1].klass;
              pOVar41[3] = *pOVar46;
              pOVar41[4].klass = pOVar42;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              pVVar47 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar9 = (pVVar47->zeroVector).y;
              pOVar42 = (Object__Class *)(pVVar47->zeroVector).z;
              pOVar41[6].klass = (Object__Class *)(pVVar47->zeroVector).x;
              pOVar41[6].monitor = (MonitorData *)fVar9;
              OVar48 = pOVar41[3];
              pOVar41[7].klass = pOVar42;
              *(Object *)&pOVar41[4].monitor = OVar48;
              pOVar41[5].monitor = (MonitorData *)pOVar41[4].klass;
              if (pMStack_40 == (MVWorldObjectClientManager *)0x0) goto code_?;
              pMVar30 = pMStack_40;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pMStack_40,pOVar41,
                         MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_
                        );
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_38,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,method_00);
            uStack_1 = 0xffffffff;
            pMVar32 = (e->fields).weCamera;
            if (pMVar32 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_TertiaryCameraActive
                        (pMVar32,1,(MethodInfo *)0x0);
              pMVar32 = (e->fields).weCamera;
              if (pMVar32 != (MainCameraManager *)0x0) {
                this_05 = MainCameraManager::MainCameraManager_get_TertiaryCamera
                                    (pMVar32,(MethodInfo *)0x0);
                pMVar32 = (e->fields).weCamera;
                if ((pMVar32 != (MainCameraManager *)0x0) && (this_05 != (Camera *)0x0)) {
                  method_01 = (MethodInfo **)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_SetReplacementShader
                            (this_05,(pMVar32->fields).transparentMultiplyColor,::StringLiteral__,
                             (MethodInfo *)0x0);
                  pHVar33 = (HashSet_1_System_Int32_ *)
                            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32___ctor
                            (pHVar33,
                             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                  ppHStack_39 = &(this->fields).woIds;
                  *ppHStack_39 = pHVar33;
                  func_?(ppHStack_39,pHVar33);
                  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).translateDatas;
                  if (this_01 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    pLVar49 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)auStack_23,this_01,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                                        );
                    uStack_19 = uStack_19 & 0xffffffff;
                    LStack_6._list = (List_1_System_Object_ *)pLVar49->_list;
                    LStack_6._index = pLVar49->_index;
                    LStack_6._version = pLVar49->_version;
                    LStack_6._current = *(Object **)&pLVar49->_current;
                    uStack_1 = 4;
                    pLStack_20 = &LStack_6;
                    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                                    List`1[T]+Enumerator[System::Object]::
                                    List_1_T_Enumerator_System_Object__MoveNext
                                              (&LStack_6,
                                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                              ), pOVar41 = LStack_6._current, bVar17 != 0) {
                      pMStack_40 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                             ((MethodInfo *)0x0);
                      if ((RegexCharClass_SingleRange)pOVar41 == (RegexCharClass_SingleRange)0x0)
                      goto code_?;
                      if (cRam_? == '\0') {
                        method_01 = &
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (((*(WorldObjectClientRef_1_System_Object_ **)((int)pOVar41 + 8) ==
                            (WorldObjectClientRef_1_System_Object_ *)0x0) ||
                          (pOVar46 = WorldObjectClientRef`1[System::Object]::
                                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                               (*(WorldObjectClientRef_1_System_Object_ **)
                                                 ((int)pOVar41 + 8),
                                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                               ), pOVar46 == (Object *)0x0)) ||
                         (pMStack_40 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
                                (pMStack_40,(int32_t)pOVar46[1].klass,*ppHStack_39,(MethodInfo *)0x0
                                );
                      if (cRam_? == '\0') {
                        VStack_16.point.z =
                             (float)&
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        VStack_16.point.y = (float)&UNK_?;
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((*(WorldObjectClientRef_1_System_Object_ **)((int)pOVar41 + 8) ==
                           (WorldObjectClientRef_1_System_Object_ *)0x0) ||
                         (pOVar41 = WorldObjectClientRef`1[System::Object]::
                                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                              (*(WorldObjectClientRef_1_System_Object_ **)
                                                ((int)pOVar41 + 8),
                                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                              ), pOVar41 == (Object *)0x0)) goto code_?;
                      pOVar42 = pOVar41[0x12].klass;
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                ((Transform *)pOVar42,1,(MethodInfo *)0x0);
                    }
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                              ((Object *)&LStack_6,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                               ,(MethodInfo *)method_01);
                    uStack_1 = 0xffffffff;
                    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                              (0,(MethodInfo *)0x0);
                    pSVar21 = MVGameControllerBase::
                              MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0)
                    ;
                    if (pSVar21 != (SpawnRoleDataMediator *)0x0) {
                      pVVar22 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                          (&VStack_50,
                                           (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                                           (pSVar21->fields).position,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                          );
                      fVar51 = pVVar22->y;
                      fVar9 = pVVar22->z;
                      (this->fields).originPrevFrame.x = pVVar22->x;
                      (this->fields).originPrevFrame.y = fVar51;
                      (this->fields).originPrevFrame.z = fVar9;
                      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar17 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                                         (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,
                                          (MethodInfo *)0x0);
                      (this->fields).enteredStateWithPointerSelectReleased = bVar17;
                      *unaff_FS_OFFSET = uStack_3;
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
  uVar52 = func_?();
  uVar52 = func_?(uVar52);
  func_?(uVar52);
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Execute
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
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
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
    pVVar2 = ESTranslate_GetDeltaMouse(&VStack_3,this,e,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fStack_5 = pVVar2->z;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVInputWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Up,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).recalcLocalDirCamToObjects = 1;
    }
    pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar6 != (SpawnRoleDataMediator *)0x0) {
      pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                          (&VStack_3,
                           (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar6->fields).position,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                          );
      uVar7 = pVVar2->x;
      uVar8 = pVVar2->y;
      pMStack_9 = (MVWorldObjectClient *)pVVar2->z;
      uVar10 = (this->fields).originPrevFrame.x;
      uVar11 = (this->fields).originPrevFrame.y;
      fStack_12 = (float)uVar7 - (float)uVar10;
      fStack_13 = (this->fields).originPrevFrame.z;
      fStack_14 = (float)uVar8 - (float)uVar11;
      fStack_15 = (float)pMStack_9 - fStack_13;
      fStack_16 = (float)uVar7;
      fStack_17 = (float)uVar8;
      fStack_18 = (float)uVar10;
      fStack_19 = (float)uVar11;
      pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar6 != (SpawnRoleDataMediator *)0x0) {
        pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            (&VStack_3,
                             (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar6->fields).position,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        index = 0;
        fVar20 = pVVar2->y;
        fVar21 = pVVar2->z;
        (this->fields).originPrevFrame.x = pVVar2->x;
        (this->fields).originPrevFrame.y = fVar20;
        (this->fields).originPrevFrame.z = fVar21;
        pLVar22 = (this->fields).translateDatas;
        if (pLVar22 != (List_1_TranslateData_ *)0x0) {
          do {
            if ((pLVar22->fields)._size <= index) {
              ESTranslate_UpdateLaserPosition(this,(this->fields).targets,(MethodInfo *)0x0);
              (this->fields).enteredStateWithPointerSelectReleased = 0;
              return;
            }
            if ((this->fields).moveWithAvatar != 0) {
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
              uVar25 = *(undefined8 *)((int)RVar24 + 0xc);
              fStack_26 = *(float *)((int)RVar24 + 0x14);
              uStack_27._0_4_ = (float)uVar25;
              uStack_27._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
              *(ulonglong *)((int)RVar24 + 0xc) =
                   CONCAT44(uStack_27._4_4_ + fStack_14,(float)uStack_27 + fStack_12);
              *(float *)((int)RVar24 + 0x14) = fStack_26 + fStack_15;
              uStack_27 = uVar25;
            }
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                              (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
              uVar25 = *(undefined8 *)((int)RVar24 + 0xc);
              fStack_28 = *(float *)((int)RVar24 + 0x14);
              uStack_29._0_4_ = (float)uVar25;
              uStack_29._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
              *(ulonglong *)((int)RVar24 + 0xc) =
                   CONCAT44(uStack_4._4_4_ + uStack_29._4_4_,(float)uStack_4 + (float)uStack_29);
              *(float *)((int)RVar24 + 0x14) = fStack_5 + fStack_28;
              uStack_29 = uVar25;
            }
            else {
              ESTranslate_RotateWithCamera(this,e,index,(MethodInfo *)0x0);
            }
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            break;
            RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar23,index,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                               );
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar30 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar23,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar30 == (RegexCharClass_SingleRange)0x0)) break;
            pMStack_9 = TranslateData::TranslateData_get_Wo
                                   ((TranslateData *)RVar30,(MethodInfo *)0x0);
            fStack_13 = (this->fields).gridSize;
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || ((RVar30 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar23,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar30 == (RegexCharClass_SingleRange)0x0 ||
                   (pMStack_9 == (MVWorldObjectClient *)0x0)))) break;
            puVar31 = (undefined8 *)func_?();
            uVar32 = *(undefined4 *)(puVar31 + 1);
            if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
            *(undefined8 *)((int)RVar24 + 0x18) = *puVar31;
            *(undefined4 *)((int)RVar24 + 0x20) = uVar32;
            fStack_13 = (this->fields).gridSize;
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar23,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
            uStack_33 = *(undefined8 *)((int)RVar24 + 0x24);
            fStack_34 = *(float *)((int)RVar24 + 0x2c);
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar23,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
            uVar25 = *(undefined8 *)((int)RVar24 + 0xc);
            fStack_35 = *(float *)((int)RVar24 + 0x14);
            uStack_36._0_4_ = (float)uVar25;
            uStack_36._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
            fStack_37 = fStack_34 - fStack_35;
            puVar31 = &uStack_38;
            uVar32 = 0;
            uStack_38 = CONCAT44(uStack_33._4_4_ - uStack_36._4_4_,
                                 (float)uStack_33 - (float)uStack_36);
            uStack_36 = uVar25;
            fVar39 = (float10)func_?();
            pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            pMStack_9 = (MVWorldObjectClient *)(float)fVar39;
            if (fStack_13 < (float)pMStack_9) {
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
              pMVar40 = TranslateData::TranslateData_get_Wo
                                  ((TranslateData *)RVar24,(MethodInfo *)0x0);
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 ((RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar23,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar24 == (RegexCharClass_SingleRange)0x0 ||
                  (pMVar40 == (MVWorldObjectClient *)0x0)))) break;
              func_?(0x1d,pMVar40,*(undefined8 *)((int)RVar24 + 0x18),
                              *(undefined4 *)((int)RVar24 + 0x20));
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) break;
              RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar23,index,
                                  MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                 );
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar30 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar30 == (RegexCharClass_SingleRange)0x0)) break;
              uVar32 = *(undefined4 *)((int)RVar30 + 0x20);
              if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
              *(undefined8 *)((int)RVar24 + 0x24) = *(undefined8 *)((int)RVar30 + 0x18);
              *(undefined4 *)((int)RVar24 + 0x2c) = uVar32;
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if (pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) break;
              RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar23,index,
                                  MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                 );
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar30 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar30 == (RegexCharClass_SingleRange)0x0)) break;
              uVar32 = *(undefined4 *)((int)RVar30 + 0x20);
              if (RVar24 == (RegexCharClass_SingleRange)0x0) break;
              *(undefined8 *)((int)RVar24 + 0xc) = *(undefined8 *)((int)RVar30 + 0x18);
              *(undefined4 *)((int)RVar24 + 0x14) = uVar32;
              if ((this->fields).playTranslateSounds != 0) {
                pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if (((pLVar23 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) &&
                    (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar23,index,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                        ), RVar24 != (RegexCharClass_SingleRange)0x0)) &&
                   (pMVar40 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)RVar24,(MethodInfo *)0x0),
                   pMVar40 != (MVWorldObjectClient *)0x0)) {
                  puVar31 = (undefined8 *)func_?(&stack0xfffffef8,0x19,pMVar40);
                  uVar25 = *puVar31;
                  fVar21 = *(float *)(puVar31 + 1);
                  fStack_17 = (float)uVar25;
                  pMStack_9 = (MVWorldObjectClient *)((ulonglong)uVar25 >> 0x20);
                  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__AudioEventHandler);
                    uVar25 = CONCAT44(pMStack_9,fStack_17);
                  }
                  bVar1 = 1;
                  uVar32 = (undefined4)uVar25;
                  uVar41 = (undefined4)((ulonglong)uVar25 >> 0x20);
                  pMVar40 = (MVWorldObjectClient *)0x0;
                  goto code_?;
                }
                break;
              }
            }
            else {
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
              uStack_42 = *(undefined8 *)((int)RVar24 + 0xc);
              fStack_43 = *(float *)((int)RVar24 + 0x14);
              pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar23,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
              uVar25 = *(undefined8 *)((int)RVar24 + 0x24);
              fStack_44 = *(float *)((int)RVar24 + 0x2c);
              uStack_45._0_4_ = (float)uVar25;
              fStack_46 = (float)uStack_42 - (float)uStack_45;
              uStack_45._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
              fStack_47 = uStack_42._4_4_ - uStack_45._4_4_;
              fStack_48 = fStack_43 - fStack_44;
              uStack_49 = CONCAT44(fStack_47,fStack_46);
              VStack_3.z = fStack_48;
              uStack_45 = uVar25;
              fStack_13 = fStack_48;
              fVar39 = (float10)func_?(&uStack_49,0,puVar31,uVar32);
              pMStack_9 = (MVWorldObjectClient *)(float)fVar39;
              if ((this->fields).completelyStuckLimit * (this->fields).gridSize < (float)pMStack_9)
              {
                fVar21 = (this->fields).stickyModifier;
                fStack_46 = fStack_46 * fVar21;
                fStack_47 = fStack_47 * fVar21;
                fStack_13 = fStack_13 * fVar21;
                pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) ||
                   (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar23,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
                pMVar40 = TranslateData::TranslateData_get_Wo
                                    ((TranslateData *)RVar24,(MethodInfo *)0x0);
                pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if ((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) ||
                   (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar23,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar24 == (RegexCharClass_SingleRange)0x0)) break;
                uVar25 = *(undefined8 *)((int)RVar24 + 0x24);
                fStack_50 = *(float *)((int)RVar24 + 0x2c);
                uStack_51._0_4_ = (float)uVar25;
                fStack_52 = (float)uStack_51 + fStack_46;
                uStack_51._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
                fStack_53 = uStack_51._4_4_ + fStack_47;
                fStack_54 = fStack_50 + fStack_13;
                uStack_51 = uVar25;
                if (pMVar40 == (MVWorldObjectClient *)0x0) break;
                func_?(0x1a,pMVar40,CONCAT44(fStack_53,fStack_52),fStack_54);
              }
              if ((this->fields).playTranslateSounds != 0) {
                pLVar23 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if (((pLVar23 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) ||
                    (RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar23,index,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                        ), RVar24 == (RegexCharClass_SingleRange)0x0)) ||
                   (pMVar40 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)RVar24,(MethodInfo *)0x0),
                   pMVar40 == (MVWorldObjectClient *)0x0)) break;
                puVar31 = (undefined8 *)func_?();
                uVar25 = *puVar31;
                fVar21 = *(float *)(puVar31 + 1);
                fStack_19 = (float)uVar25;
                fStack_13 = (float)((ulonglong)uVar25 >> 0x20);
                if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__AudioEventHandler);
                  uVar25 = CONCAT44(fStack_13,fStack_19);
                }
                bVar1 = 0;
                uVar32 = (undefined4)uVar25;
                uVar41 = (undefined4)((ulonglong)uVar25 >> 0x20);
                pMVar40 = pMStack_9;
code_?:
                worldPos.y = (float)uVar41;
                worldPos.x = (float)uVar32;
                worldPos.z = fVar21;
                AudioEventHandler::AudioEventHandler_AddTranslateSoundData
                          ((float)pMVar40,bVar1,worldPos,(MethodInfo *)0x0);
              }
            }
            pLVar22 = (this->fields).translateDatas;
            index = index + 1;
            if (pLVar22 == (List_1_TranslateData_ *)0x0) break;
          } while( true );
        }
      }
    }
  }
  func_?();
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Exit
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__)
    ;
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_FromTranslateState);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (pGVar3 = (pGVar2->fields).LaserCommands,
     pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
    AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)pGVar3,0,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       ((pGVar3 = (pGVar2->fields).LaserCommands,
        pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0 &&
        ((GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (pGVar3,0,(MethodInfo *)0x0), e != (EditorStateMachine *)0x0 &&
         (pMVar4 = (e->fields).weCamera, pMVar4 != (MainCameraManager *)0x0)))))) {
      MainCameraManager::MainCameraManager_IgnoreInputTypes
                (pMVar4,IgnoreInputTypes__Enum_None,(MethodInfo *)0x0);
      pMVar4 = (e->fields).weCamera;
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_TertiaryCameraActive(pMVar4,0,(MethodInfo *)0x0);
        pMVar4 = (e->fields).weCamera;
        if ((pMVar4 != (MainCameraManager *)0x0) &&
           (this_02 = MainCameraManager::MainCameraManager_get_TertiaryCamera
                                (pMVar4,(MethodInfo *)0x0), this_02 != (Camera *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ResetReplacementShader
                    (this_02,(MethodInfo *)0x0);
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).translateDatas;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            __return_storage_ptr__ = (MVJetPack *)&stack0xffffffd0;
            pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)__return_storage_ptr__,this_00,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                               );
            RVar6 = pLVar5->_current;
            while( true ) {
              do {
                this_03 = RVar6;
                bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                  );
                if (bVar7 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&stack0xffffffc0,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                             ,in_stack_8);
                  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                            (1,(MethodInfo *)0x0);
                  selectionSet = (HashSet_1_System_Int32_ *)
                                 MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                           ((MVJetPack_LocalObjectsJetPack *)&stack0xffffffc0,
                                            (MethodInfo *)0x0);
                  MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                            ((MVNetworkSelector *)&UNK_?,selectionSet,(MethodInfo *)0x0);
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)&UNK_?,
                             (Object *)StringLiteral_FromTranslateState,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  *unaff_FS_OFFSET = __return_storage_ptr__;
                  return;
                }
                if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
                RVar6 = this_03;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (*(WorldObjectClientRef_1_System_Object_ **)((int)this_03 + 8) ==
                    (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
                pOVar9 = WorldObjectClientRef`1[System::Object]::
                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                   (*(WorldObjectClientRef_1_System_Object_ **)((int)this_03 + 8),
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   );
              } while (pOVar9 == (Object *)0x0);
              pMVar10 = TranslateData::TranslateData_get_Wo
                                 ((TranslateData *)this_03,(MethodInfo *)0x0);
              if ((pMVar10 == (MVWorldObjectClient *)0x0) ||
                 (this_01 = (pMVar10->fields).gameObject, this_01 == (GameObject *)0x0)) break;
              t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
              pMVar10 = TranslateData::TranslateData_get_Wo
                                 ((TranslateData *)this_03,(MethodInfo *)0x0);
              if (pMVar10 == (MVWorldObjectClient *)0x0) break;
              in_stack_8 = (MethodInfo *)&UNK_?;
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Vector3 GetDeltaMouse(EditorStateMachine) */

Vector3 * Assembly-CSharp.dll::ESTranslate::ESTranslate_GetDeltaMouse
                    (Vector3 *__return_storage_ptr__,ESTranslate *this,EditorStateMachine *e,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  QStack_1.z = 0.0;
  QStack_1.w = 0.0;
  _puStack_18 = 0;
  if (((e != (EditorStateMachine *)0x0) &&
      (this_00 = (e->fields).weCamera, this_00 != (MainCameraManager *)0x0)) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_1,this_01,(MethodInfo *)0x0);
    QStack_1.w = pQVar2->x;
    puStack_3 = (undefined *)pQVar2->y;
    unique0x100005dc = pQVar2->z;
    fVar4 = pQVar2->w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    rotation_00.y = (float)puStack_3;
    rotation_00.x = QStack_1.w;
    rotation_00.z = stack0xffffffec;
    rotation_00.w = fVar4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&QStack_1.w,rotation_00,
                        TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                        (MethodInfo *)0x0);
    puStack_3 = (undefined *)pVVar5->x;
    unique0x0000a404 = pVVar5->y;
    fVar4 = pVVar5->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    puVar6 = puStack_3;
    dVar7 = (double)((float)puStack_3 * (float)puStack_3 + in_stack_8 + fVar4 * fVar4);
    if (dVar7 < 0.0) {
      func_?();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    fVar9 = (float)dVar7;
    if (_UNK_? < fVar9) {
      fVar4 = fVar4 / fVar9;
      this = (ESTranslate *)((float)puVar6 / fVar9);
      e = (EditorStateMachine *)(in_stack_8 / fVar9);
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
      this = (ESTranslate *)(pVVar10->zeroVector).x;
      e = (EditorStateMachine *)(pVVar10->zeroVector).y;
      fVar4 = (pVVar10->zeroVector).z;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    puStack_3 = (undefined *)(pVVar10->forwardVector).x;
    unique0x0000a404 = (pVVar10->forwardVector).y;
    fVar9 = (pVVar10->forwardVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar11 = _puStack_18;
    v2.y = (float)e;
    v2.x = (float)this;
    v1.z = fVar9;
    stack0xffffffec = (float)((ulonglong)_puStack_18 >> 0x20);
    v1.x = (float)puStack_3;
    v1.y = stack0xffffffec;
    v2.z = fVar4;
    _puStack_18 = uVar11;
    fVar4 = MathFunctions::MathFunctions_SignedAngle_1
                       (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                        (MethodInfo *)0x0);
    fVar4 = fVar4 * _UNK_?;
    _puStack_18 = CONCAT44((Quaternion *)&stack0x00000040,&UNK_?);
    euler.y = fVar4 * _UNK_?;
    euler.x = in_stack_12;
    euler.z = 0.0;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0x00000040,euler,(MethodInfo *)0x0);
    in_stack_13 = pQVar2->x;
    in_stack_14 = pQVar2->y;
    in_stack_15 = pQVar2->z;
    in_stack_16 = pQVar2->w;
    iVar17 = *(int *)((int)fVar4 + 0x44);
    if (iVar17 == 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      in_stack_18 = in_stack_19 * in_stack_20 * _UNK_?;
      in_stack_21 = *(float *)((int)fVar4 + 0x2c) * fVar9 * _UNK_?;
    }
    else if (iVar17 == 1) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      in_stack_18 = in_stack_22 * in_stack_20 * _UNK_?;
      in_stack_23 = *(float *)((int)fVar4 + 0x2c) * fVar9 * _UNK_?;
    }
    else {
      if (iVar17 != 2) goto code_?;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      in_stack_24 = *(float *)((int)fVar4 + 0x2c) * fVar9 * _UNK_?;
    }
    rotation.y = (float)in_stack_25;
    rotation.x = in_stack_26;
    rotation.z = (float)in_stack_27;
    rotation.w = in_stack_28;
    point.y = in_stack_23;
    point.x = in_stack_18;
    point.z = in_stack_21;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0x00000054,rotation,point,(MethodInfo *)0x0);
    fVar4 = pVVar5->y;
    unique0x00017200 = pVVar5->z;
    (rotation.x)->x = pVVar5->x;
    (rotation.x)->y = fVar4;
    in_stack_26->z = unique0x00017200;
    return in_stack_26;
  }
  func_?();
code_?:
  func_?();
  this_02 = (Exception *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar29 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar29)();
  return pVVar5;
}


/* Single GetInitialAvatarMoveObjectDistance(EditorStateMachine) */

float Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectDistance
                (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff68;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff68;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  iVar8 = 0;
  fStack_9 = 0.0;
  iStack_10 = 0;
  pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar11 != (SpawnRoleDataMediator *)0x0) {
    pVVar12 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[UnityEngine::Vector3]::
             SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                       (&VStack_13,
                        (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar11->fields).position,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                       );
    uVar14 = pVVar12->x;
    uVar15 = pVVar12->y;
    fVar16 = pVVar12->z;
    if (e != (EditorStateMachine *)0x0) {
      this_00 = EditorStateMachine::EditorStateMachine_get_SelectedWOs(e,(MethodInfo *)0x0);
      if (this_00 != (HashSet_1_MVWorldObjectClient_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
        HashSet_1_System_UInt32__GetEnumerator
                  ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffff88,
                   (HashSet_1_System_UInt32_ *)this_00,
                   MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                  );
        uStack_17 = 0;
        uStack_2 = 1;
        pOStack_18 = (Object *)&stack0xffffff78;
        while( true ) {
          this_01 = (HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffff78;
          bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            (this_01,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                            );
          if (bVar19 == 0) {
            uStack_2 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffff78,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       ,in_stack_20);
            *unaff_FS_OFFSET = uStack_4;
            return fStack_9 / (float)iVar8;
          }
          if (this_01 == (HashSet_1_T_Enumerator_System_Object_ *)0x0) break;
          puVar21 = (undefined8 *)(*(code *)this_01->_set[9].fields._version)();
          VStack_13._0_8_ = *puVar21;
          VStack_13.z = *(float *)(puVar21 + 1);
          fStack_22 = VStack_13.z - fVar16;
          fStack_23 = VStack_13.y - (float)uVar15;
          fStack_24 = VStack_13.x - (float)uVar14;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar25 = (double)(fStack_23 * fStack_23 + fStack_24 * fStack_24 + fStack_22 * fStack_22);
          if (dVar25 < 0.0) {
            func_?();
          }
          else {
            dVar25 = SQRT(dVar25);
          }
          iVar8 = iVar8 + 1;
          fStack_9 = (float)dVar25 + fStack_9;
          iStack_10 = iVar8;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar26 = (code *)swi(3);
  fVar27 = (float10)(*pcVar26)();
  return (float)fVar27;
}


/* Boolean GetInitialAvatarMoveObjectHitDistance(EditorStateMachine, Single ByRef) */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectHitDistance
               (ESTranslate *this,EditorStateMachine *e,float *hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&fStack_1,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if ((bVar2 == 0) || (IStack_3 == 0xffffffff)) {
    return 0;
  }
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (HashSet_1_System_Int32Enum_ *)
              MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
      puVar4 = &UNK_?;
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (this_00,IStack_3,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar2 == 0) {
        return 0;
      }
      uStack_5 = CONCAT44(puStack_6,fStack_1);
      puStack_7 = puVar4;
      pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar8 != (SpawnRoleDataMediator *)0x0) {
        pVVar9 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           (&VStack_10,
                            (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar8->fields).position,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        uVar11 = pVVar9->x;
        uVar12 = pVVar9->y;
        fStack_13 = (float)puStack_7 - pVVar9->z;
        uStack_14 = CONCAT44(uStack_5._4_4_ - (float)uVar12,(float)uStack_5 - (float)uVar11);
        puStack_7 = (undefined *)fStack_13;
        fVar15 = (float10)func_?();
        *hitDistance = (float)fVar15;
        return 1;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar2 = (*pcVar16)();
  return bVar2;
}


/* Boolean IsValid() */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_IsValid(ESTranslate *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__)
    ;
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).translateDatas;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar6->_index;
    RVar8 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
      if (cRam_? == '\0') {
        unaff_EBX = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_01 = *(WorldObjectClientRef_1_System_Object_ **)((int)RVar8 + 8);
      if (this_01 == (WorldObjectClientRef_1_System_Object_ *)0x0) break;
      pOVar10 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         (this_01,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar10 == (Object *)0x0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
}


/* Void RotateWithCamera(EditorStateMachine, Int32) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_RotateWithCamera
               (ESTranslate *this,EditorStateMachine *e,int32_t targetIndex,MethodInfo *method)

{
  fVar1 = in_stack_2;
  fVar3 = in_stack_4;
  fVar5 = in_stack_6;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
    fVar1 = in_stack_2;
    fVar3 = in_stack_4;
    fVar5 = in_stack_6;
  }
  func_?(&stack0xffffff40,0,0x40);
  func_?(&stack0xffffff00,0,0x40);
  if ((this->fields).recalcLocalDirCamToObjects == 0) {
code_?:
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).translateDatas;
    if ((pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar7,targetIndex,
                            MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                           ), RVar8 != (RegexCharClass_SingleRange)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((*(WorldObjectClientRef_1_System_Object_ **)((int)RVar8 + 8) !=
           (WorldObjectClientRef_1_System_Object_ *)0x0) &&
         (pOVar9 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (*(WorldObjectClientRef_1_System_Object_ **)((int)RVar8 + 8),
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              ), pOVar9 != (Object *)0x0)) {
        (**(code **)&pOVar9->klass[1]._1.nested_type_count)();
        pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
          pVVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                    SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                    SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                              (&VStack_12,
                               (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                               (pSVar10->fields).position,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                              );
          uVar13 = pVVar11->x;
          uVar14 = pVVar11->y;
          VStack_12.y = VStack_15.y - (float)uVar13;
          VStack_12.z = VStack_15.z - (float)uVar14;
          fVar1 = VStack_12.x - pVVar11->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar16 = (double)(VStack_12.z * VStack_12.z + VStack_12.y * VStack_12.y + fVar1 * fVar1);
          if (dVar16 < 0.0) {
            func_?();
          }
          else {
            dVar16 = SQRT(dVar16);
          }
          VStack_12.z = (float)dVar16;
          if ((this->fields).fixedToYPlane == 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            fVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
            if (((e == (EditorStateMachine *)0x0) ||
                (pMVar17 = (e->fields).weCamera, pMVar17 == (MainCameraManager *)0x0)) ||
               (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pMVar17,(MethodInfo *)0x0),
               pTVar18 == (Transform *)0x0)) goto code_?;
            pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffbc,pTVar18,(MethodInfo *)0x0);
            fStack_20 = pQVar19->x;
            fStack_21 = pQVar19->y;
            fVar3 = pQVar19->z;
            fVar5 = pQVar19->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
          }
          else {
            if (((e == (EditorStateMachine *)0x0) ||
                (pMVar17 = (e->fields).weCamera, pMVar17 == (MainCameraManager *)0x0)) ||
               (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pMVar17,(MethodInfo *)0x0),
               pTVar18 == (Transform *)0x0)) goto code_?;
            fVar3 = 0.0;
            pQVar19 = (Quaternion *)&stack0xffffffac;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                      (pQVar19,pTVar18,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            rotation_00.y = (float)pTVar18;
            rotation_00.x = (float)pQVar19;
            rotation_00.z = fVar3;
            rotation_00.w = fVar1;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffff70,rotation_00,
                                 TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                 (MethodInfo *)0x0);
            fVar1 = MathFunctions::MathFunctions_Yaw(*pVVar11,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            euler_00.y = fVar1 * _UNK_?;
            euler_00.x = (float)in_stack_23;
            euler_00.z = 0.0;
            pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffb4,euler_00,(MethodInfo *)0x0);
            fStack_20 = pQVar19->x;
            fStack_21 = pQVar19->y;
            fVar3 = pQVar19->z;
            fVar5 = pQVar19->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_15.y = (pVVar22->zeroVector).x;
            VStack_15.z = (pVVar22->zeroVector).y;
            fVar1 = (pVVar22->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
          }
          pos_00.z = fVar1;
          pos_00.x = VStack_15.y;
          pos_00.y = VStack_15.z;
          q_00.y = fStack_21;
          q_00.x = fStack_20;
          q_00.z = fVar3;
          q_00.w = fVar5;
          pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                              ((Matrix4x4 *)&stack0x00000098,pos_00,q_00,pVVar22->oneVector,
                               (MethodInfo *)0x0);
          index = targetIndex;
          in_stack_25 = pMVar24->m00;
          in_stack_26 = pMVar24->m10;
          in_stack_27 = pMVar24->m20;
          in_stack_28 = pMVar24->m30;
          in_stack_29 = pMVar24->m01;
          in_stack_30 = pMVar24->m11;
          in_stack_31 = pMVar24->m21;
          in_stack_32 = pMVar24->m31;
          in_stack_33 = pMVar24->m02;
          in_stack_34 = pMVar24->m12;
          in_stack_35 = pMVar24->m22;
          in_stack_36 = pMVar24->m32;
          in_stack_37 = pMVar24->m03;
          in_stack_38 = pMVar24->m13;
          in_stack_39 = pMVar24->m23;
          in_stack_40 = pMVar24->m33;
          pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).translateDatas;
          if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar7,targetIndex,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                               );
            if (RVar8 != (RegexCharClass_SingleRange)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                        ((Vector3 *)&fStack_41,(Matrix4x4 *)&stack0x00000064,
                         *(Vector3 *)((int)RVar8 + 0x30),(MethodInfo *)0x0);
              pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields).translateDatas;
              if (pLVar7 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar7,index,
                                    MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                   );
                pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                    ((MethodInfo *)0x0);
                if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
                  pVVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                            SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                      ((Vector3 *)&stack0x0000001c,
                                       (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                                       (pSVar10->fields).position,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                      );
                  uVar42 = pVVar11->x;
                  uVar43 = pVVar11->y;
                  in_stack_44 = (float)uVar42 + in_stack_44 * in_stack_45;
                  in_stack_46 = (float)uVar43 + in_stack_46 * in_stack_45;
                  in_stack_47 = pVVar11->z + in_stack_47 * in_stack_45;
                  if (RVar8 != (RegexCharClass_SingleRange)0x0) {
                    *(ulonglong *)((int)RVar8 + 0xc) =
                         CONCAT44(in_stack_46,in_stack_44);
                    *(float *)((int)RVar8 + 0x14) = in_stack_47;
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
  else {
    if ((this->fields).fixedToYPlane == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      fVar48 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar17 = (e->fields).weCamera, pMVar17 == (MainCameraManager *)0x0)) ||
         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar17,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffac,pTVar18,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    }
    else {
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar17 = (e->fields).weCamera, pMVar17 == (MainCameraManager *)0x0)) ||
         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar17,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0)
         ) goto code_?;
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xfffffed8,pTVar18,(MethodInfo *)0x0);
      fVar1 = pQVar19->x;
      fVar3 = pQVar19->y;
      fVar48 = pQVar19->z;
      fVar49 = pQVar19->w;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      rotation.y = fVar3;
      rotation.x = fVar1;
      rotation.z = fVar48;
      rotation.w = fVar49;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffff04,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      fVar1 = MathFunctions::MathFunctions_Yaw(*pVVar11,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      euler.y = fVar1 * _UNK_?;
      euler.x = (float)in_stack_50;
      euler.z = 0.0;
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffff18,euler,(MethodInfo *)0x0);
      in_stack_51 = pQVar19->x;
      in_stack_52 = pQVar19->y;
      in_stack_53 = pQVar19->z;
      in_stack_54 = pQVar19->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar1 = (pVVar22->zeroVector).x;
      fVar3 = (pVVar22->zeroVector).y;
      fVar48 = (pVVar22->zeroVector).z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    }
    pos.y = fVar3;
    pos.x = fVar1;
    pos.z = fVar48;
    q.y = in_stack_52;
    q.x = in_stack_51;
    q.z = in_stack_53;
    q.w = in_stack_54;
    pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&targetIndex,pos,q,pVVar22->oneVector,(MethodInfo *)0x0);
    VStack_15.x = pMVar24->m00;
    VStack_15.y = pMVar24->m10;
    VStack_15.z = pMVar24->m20;
    VStack_12.x = pMVar24->m30;
    VStack_12.y = pMVar24->m01;
    VStack_12.z = pMVar24->m11;
    fStack_55 = pMVar24->m21;
    puStack_56 = (undefined *)pMVar24->m31;
    in_stack_23 = (RegexCharClass_SingleRange)pMVar24->m22;
    pMVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_Inverse
                        ((Matrix4x4 *)&stack0x0000003c,*pMVar24,(MethodInfo *)0x0);
    index_00 = 0;
    fStack_41 = pMVar24->m02;
    e = (EditorStateMachine *)pMVar24->m13;
    targetIndex = (int32_t)pMVar24->m23;
    method = (MethodInfo *)pMVar24->m33;
    pLVar57 = (this->fields).translateDatas;
    if (pLVar57 != (List_1_TranslateData_ *)0x0) {
      while( true ) {
        if ((pLVar57->fields)._size <= index_00) {
          (this->fields).recalcLocalDirCamToObjects = 0;
          goto code_?;
        }
        pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).translateDatas;
        if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (pLVar7,index_00,
                   MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
        pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).translateDatas;
        if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (in_stack_23 =
                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar7,index_00,
                            MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                           ), in_stack_23 == (RegexCharClass_SingleRange)0x0)) break;
        RVar8 = in_stack_23;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
          RVar8 = (RegexCharClass_SingleRange)VStack_12.y;
        }
        if ((*(WorldObjectClientRef_1_System_Object_ **)((int)RVar8 + 8) ==
             (WorldObjectClientRef_1_System_Object_ *)0x0) ||
           (pOVar9 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                (*(WorldObjectClientRef_1_System_Object_ **)((int)RVar8 + 8),
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                ), pOVar9 == (Object *)0x0)) break;
        (**(code **)&pOVar9->klass[1]._1.nested_type_count)();
        pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar10 == (SpawnRoleDataMediator *)0x0) break;
        pVVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            ((Vector3 *)&stack0x0000002c,
                             (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar10->fields).position,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        uVar58 = pVVar11->x;
        uVar59 = pVVar11->y;
        VStack_12.z = in_stack_60 - pVVar11->z;
        value.y = in_stack_61 - (float)uVar59;
        value.x = fVar5 - (float)uVar58;
        value.z = VStack_12.z;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0x00000048,value,(MethodInfo *)0x0);
        fVar5 = pVVar11->y;
        in_stack_61 = pVVar11->z;
        in_stack_60 = 0.0;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            (&VStack_15,(Matrix4x4 *)&stack0xffffffbc,*pVVar11,(MethodInfo *)0x0);
        fVar1 = pVVar11->z;
        if (VStack_12.z == 0.0) break;
        *(undefined8 *)((int)VStack_12.z + 0x30) = *(undefined8 *)pVVar11;
        index_00 = index_00 + 1;
        *(float *)((int)VStack_12.z + 0x38) = fVar1;
        pLVar57 = (this->fields).translateDatas;
        if (pLVar57 == (List_1_TranslateData_ *)0x0) break;
      }
    }
  }
code_?:
  func_?();
  pcVar62 = (code *)swi(3);
  (*pcVar62)();
  return;
}


/* Void UpdateLaserPosition(List`1[MVWorldObjectClient]) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_UpdateLaserPosition
               (ESTranslate *this,List_1_MVWorldObjectClient_ *wos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
  if ((wos->fields)._size == 1) {
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar7 == (GameEventManager *)0x0) ||
       (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
       pGVar8 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar8->fields).LaserCommands;
    RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    if (RVar9 == (RegexCharClass_SingleRange)0x0) goto code_?;
    LStack_10._list = *(List_1_System_Object_ **)(*(int *)RVar9 + 0x1cc);
    pVVar11 = (Vector3 *)(**(code **)(*(int *)RVar9 + 0x1c8))();
  }
  else {
    transforms = (List_1_UnityEngine_Transform_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>
                                );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_13,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    VStack_14.y = 0.0;
    LStack_10._list = (List_1_System_Object_ *)pLVar12->_list;
    LStack_10._index = pLVar12->_index;
    LStack_10._version = pLVar12->_version;
    LStack_10._current = *(Object **)&pLVar12->_current;
    uStack_1 = 1;
    VStack_14.z = (float)&LStack_10;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), bVar15 != 0) {
      if (((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0) ||
         (transforms == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)transforms,*(Object **)((int)LStack_10._current + 0x90),
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar7 == (GameEventManager *)0x0) ||
       (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
       pGVar8 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar8->fields).LaserCommands;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar11 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       (&VStack_14,transforms,(MethodInfo *)0x0);
  }
  if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
              (this_00,*pVVar11,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* ESTranslate() */

void Assembly-CSharp.dll::ESTranslate::ESTranslate__ctor(ESTranslate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<TranslateData>);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  (this->fields).stickyModifier = 0.2;
  (this->fields).completelyStuckLimit = 0.3;
  (this->fields).recalcLocalDirCamToObjects = 1;
  this_00 = (List_1_TranslateData_ *)
            func_?(TypeInfo__System__Collections__Generic__List<TranslateData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  ppLVar1 = &(this->fields).translateDatas;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  this_01 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  ppLVar2 = &(this->fields).targets;
  *ppLVar2 = this_01;
  func_?(ppLVar2,this_01);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (this->fields).originPrevFrame.x = (pVVar3->zeroVector).x;
  (this->fields).originPrevFrame.y = fVar4;
  (this->fields).originPrevFrame.z = fVar5;
  (this->fields).playTranslateSounds = 1;
  (this->fields).fixedToYPlane = 1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

