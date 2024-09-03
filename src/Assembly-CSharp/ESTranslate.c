
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
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar8 == (IEditModeUI *)0x0) goto code_?;
  cVar9 = func_?(0,TypeInfo__IEditModeUI,pIVar8);
  fVar10 = _UNK_?;
  if (cVar9 == '\0') {
    fVar10 = _UNK_?;
  }
  (this->fields).gridSize = fVar10;
  if (((e == (EditorStateMachine *)0x0) ||
      (pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data,
      pDVar11 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) ||
     (TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (pDVar11,(Object *)StringLiteral_translateMode,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), TVar12.m_Index == 0)) goto code_?;
  pBVar13 = (Boolean__Class *)TypeInfo__TranslateMode;
  if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) !=
      (TypeInfo__TranslateMode->_0).element_class) {
code_?:
    func_?(TVar12.m_Index,pBVar13);
    goto code_?;
  }
  piVar14 = (int32_t *)func_?(TVar12.m_Index);
  (this->fields).translateMode = *piVar14;
  pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
  if (pDVar11 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (pDVar11,(Object *)StringLiteral_moveWithAvatar,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (TVar12.m_Index == 0) goto code_?;
  pBVar13 = TypeInfo__System__Boolean;
  if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) !=
      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
  pbVar15 = (bool *)func_?(TVar12.m_Index);
  bVar16 = cRam_? == '\0';
  (this->fields).moveWithAvatar = *pbVar15;
  (this->fields).initialDistance = 0.0;
  if (bVar16) {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  func_?(&VStack_17,0,0x48);
  bVar18 = EditModeObjectPicker::EditModeObjectPicker_Pick
                     (&VStack_17,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if ((bVar18 == 0) || (VStack_17.woId == 0xffffffff)) {
code_?:
    fVar10 = ESTranslate_GetInitialAvatarMoveObjectDistance(this,e,(MethodInfo *)0x0);
    fVar19 = (float10)fVar10;
  }
  else {
    method_00 = (MethodInfo *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    bVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__Contains
                       ((HashSet_1_System_UInt32_ *)method_00,VStack_17.woId,
                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar18 == 0) goto code_?;
    uStack_20 = CONCAT44(VStack_17.point.y,VStack_17.point.x);
    pLStack_21 = (List_1_T_Enumerator_System_Object_ *)VStack_17.point.z;
    pSVar22 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar22 == (SpawnRoleDataMediator *)0x0) goto code_?;
    pVVar23 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[UnityEngine::Vector3]::
              SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                        ((Vector3 *)(auStack_24 + 4),
                         (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar22->fields).position,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                        );
    uVar25 = pVVar23->x;
    uVar26 = pVVar23->y;
    pLStack_27 = (List_1_T_Enumerator_System_Object_ *)((float)pLStack_21 - pVVar23->z);
    uStack_28 = CONCAT44(uStack_20._4_4_ - (float)uVar26,(float)uStack_20 - (float)uVar25);
    pLStack_21 = pLStack_27;
    fVar19 = (float10)func_?(&uStack_28,0);
  }
  RStack_29 = (RegexCharClass_SingleRange)(float)fVar19;
  (this->fields).initialDistance = (float)RStack_29;
  (this->fields).recalcLocalDirCamToObjects = 1;
  this_04 = (List_1_TranslateData_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
             MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  (this->fields).translateDatas = this_04;
  func_?(&(this->fields).translateDatas);
  pOVar30 = (Object__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar30,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targets = (List_1_MVWorldObjectClient_ *)pOVar30;
  func_?(&(this->fields).targets);
  pMVar31 = (e->fields).weCamera;
  if (pMVar31 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_IgnoreInputTypes
              (pMVar31,IgnoreInputTypes__Enum_Avatar|IgnoreInputTypes__Enum_MouseScroll,
               (MethodInfo *)0x0);
    RStack_29 = (RegexCharClass_SingleRange)(e->fields).networkSelector;
    pHVar32 = (HashSet_1_System_Int32_ *)
              MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (RStack_29 != (RegexCharClass_SingleRange)0x0) {
      bVar18 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                         ((MVNetworkSelector *)RStack_29,pHVar32,(MethodInfo *)0x0);
      if (bVar18 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Ownership_request_failed,(MethodInfo *)0x0);
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pGVar33 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar33 != (GameEventManager *)0x0) &&
          (pGVar34 = (pGVar33->fields).AvatarCommandsBuildMode,
          pGVar34 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (RTFocusCamera *)(pGVar34->fields).LaserCommands, this_00 != (RTFocusCamera *)0x0
         )) {
        RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
                  (this_00,CameraPrjSwitchTransition_Type__Enum_ToPerspective|
                           CameraPrjSwitchTransition_Type__Enum_ToOrtho,(MethodInfo *)0x0);
        pGVar33 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        if (((pGVar33 != (GameEventManager *)0x0) &&
            (pGVar34 = (pGVar33->fields).AvatarCommandsBuildMode,
            pGVar34 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (this_01 = (pGVar34->fields).LaserCommands,
           this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (this_01,1,(MethodInfo *)0x0);
          this_05 = (HashSet_1_System_UInt32_ *)
                    MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                              ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
          if (this_05 != (HashSet_1_System_UInt32_ *)0x0) {
            pHVar35 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                      HashSet_1_System_UInt32__GetEnumerator
                                ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_24,this_05,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                );
            uStack_20 = uStack_20 & 0xffffffff;
            LStack_6._list = (List_1_System_Object_ *)pHVar35->_set;
            LStack_6._index = pHVar35->_index;
            LStack_6._version = pHVar35->_version;
            LStack_6._current = (Object *)pHVar35->_current;
            uStack_1 = 1;
            pLStack_21 = &LStack_6;
            while (bVar18 = System.Core.dll::System::Collections::Generic::
                            HashSet`1[T]+Enumerator[System::UInt32]::
                            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&LStack_6,
                                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                      ), bVar18 != 0) {
              RStack_29 = (RegexCharClass_SingleRange)LStack_6._current;
              pMVar36 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar36 == (MVWorldObjectClientManager *)0x0) goto code_?;
              RStack_29 = (RegexCharClass_SingleRange)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar36,(int32_t)RStack_29,(MethodInfo *)0x0);
              this_02 = (this->fields).targets;
              if (this_02 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)this_02,(Object *)RStack_29,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
              fStack_37 = (this->fields).gridSize;
              pOStack_38 = (Object__Class *)(this->fields).translateDatas;
              pOVar39 = (Object *)func_?(TypeInfo__TranslateData);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOVar39,ExceptionArgument__Enum_obj,(MethodInfo *)pOVar30);
              pMVar36 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((RStack_29 == (RegexCharClass_SingleRange)0x0) ||
                 (pMVar36 == (MVWorldObjectClientManager *)0x0)) goto code_?;
              pOVar30 = (Object__Class *)
                        MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (pMVar36,((MVWorldObject__Fields *)((int)RStack_29 + 8))->id,
                                   (MethodInfo *)0x0);
              pOVar39[1].klass = pOVar30;
              func_?();
              puVar40 = (undefined8 *)(**(code **)(*(int *)RStack_29 + 0x188))();
              uVar41 = *puVar40;
              pMVar42 = *(MonitorData **)(puVar40 + 1);
              *(undefined8 *)&pOVar39[1].monitor = uVar41;
              pOVar39[2].monitor = pMVar42;
              pOVar43 = (Object *)
                        (**(code **)(*(int *)RStack_29 + 0x2c0))
                                  (&uStack_28,RStack_29,fStack_37,uVar41);
              pOVar30 = pOVar43[1].klass;
              pOVar39[3] = *pOVar43;
              pOVar39[4].klass = pOVar30;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Vector3);
                cRam_? = '\x01';
              }
              pVVar44 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar10 = (pVVar44->zeroVector).y;
              pOVar30 = (Object__Class *)(pVVar44->zeroVector).z;
              pOVar39[6].klass = (Object__Class *)(pVVar44->zeroVector).x;
              pOVar39[6].monitor = (MonitorData *)fVar10;
              OVar45 = pOVar39[3];
              pOVar39[7].klass = pOVar30;
              *(Object *)&pOVar39[4].monitor = OVar45;
              pOVar39[5].monitor = (MonitorData *)pOVar39[4].klass;
              if (pOStack_38 == (Object__Class *)0x0) goto code_?;
              pOVar30 = pOStack_38;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pOStack_38,pOVar39,
                         MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_
                        );
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,method_00);
            uStack_1 = 0xffffffff;
            pMVar31 = (e->fields).weCamera;
            if (pMVar31 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_set_TertiaryCameraActive
                        (pMVar31,1,(MethodInfo *)0x0);
              pMVar31 = (e->fields).weCamera;
              if (pMVar31 != (MainCameraManager *)0x0) {
                this_06 = MainCameraManager::MainCameraManager_get_TertiaryCamera
                                    (pMVar31,(MethodInfo *)0x0);
                pMVar31 = (e->fields).weCamera;
                if ((pMVar31 != (MainCameraManager *)0x0) && (this_06 != (Camera *)0x0)) {
                  method_01 = (MethodInfo **)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_SetReplacementShader
                            (this_06,(pMVar31->fields).transparentMultiplyColor,::StringLiteral__,
                             (MethodInfo *)0x0);
                  pHVar32 = (HashSet_1_System_Int32_ *)
                            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32___ctor
                            (pHVar32,
                             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                  (this->fields).woIds = pHVar32;
                  func_?(&(this->fields).woIds,pHVar32);
                  this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).translateDatas;
                  if (this_03 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    pLVar46 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)auStack_24,this_03,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                                        );
                    uStack_20 = uStack_20 & 0xffffffff;
                    LStack_7._list = (List_1_System_Object_ *)pLVar46->_list;
                    LStack_7._index = pLVar46->_index;
                    LStack_7._version = pLVar46->_version;
                    LStack_7._current = *(Object **)&pLVar46->_current;
                    uStack_1 = 4;
                    pLStack_21 = &LStack_7;
                    while (bVar18 = mscorlib.dll::System::Collections::Generic::
                                    List`1[T]+Enumerator[System::Object]::
                                    List_1_T_Enumerator_System_Object__MoveNext
                                              (&LStack_7,
                                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                              ), bVar18 != 0) {
                      RStack_29 = (RegexCharClass_SingleRange)LStack_7._current;
                      pOStack_38 = (Object__Class *)
                                   MVGameControllerBase::MVGameControllerBase_get_WOCM
                                             ((MethodInfo *)0x0);
                      if (RStack_29 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        method_01 = &
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        func_?();
                        cRam_? = '\x01';
                      }
                      pWVar47 = (WorldObjectClientRef_1_System_Object_ *)
                                ((MVWorldObject__Fields *)((int)RStack_29 + 8))->id;
                      if (((pWVar47 == (WorldObjectClientRef_1_System_Object_ *)0x0) ||
                          (pOVar39 = WorldObjectClientRef`1[System::Object]::
                                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                               (pWVar47,
                                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                               ), pOVar39 == (Object *)0x0)) ||
                         (pOStack_38 == (Object__Class *)0x0)) goto code_?;
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
                                ((MVWorldObjectClientManager *)pOStack_38,(int32_t)pOVar39[1].klass,
                                 (this->fields).woIds,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        VStack_17.point.z =
                             (float)&
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        ;
                        VStack_17.point.y = (float)&UNK_?;
                        func_?();
                        cRam_? = '\x01';
                      }
                      pWVar47 = (WorldObjectClientRef_1_System_Object_ *)
                                ((MVWorldObject__Fields *)((int)RStack_29 + 8))->id;
                      if ((pWVar47 == (WorldObjectClientRef_1_System_Object_ *)0x0) ||
                         (pOVar39 = WorldObjectClientRef`1[System::Object]::
                                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                              (pWVar47,
                                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                              ), pOVar39 == (Object *)0x0)) goto code_?;
                      pOStack_38 = pOVar39[0x12].klass;
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                ((Transform *)pOStack_38,1,(MethodInfo *)0x0);
                    }
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)&LStack_7,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                               ,(MethodInfo *)method_01);
                    uStack_1 = 0xffffffff;
                    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                              (0,(MethodInfo *)0x0);
                    pSVar22 = MVGameControllerBase::
                              MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0)
                    ;
                    if (pSVar22 != (SpawnRoleDataMediator *)0x0) {
                      pVVar23 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                          (&VStack_48,
                                           (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                                           (pSVar22->fields).position,
                                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                          );
                      fVar49 = pVVar23->y;
                      fVar10 = pVVar23->z;
                      (this->fields).originPrevFrame.x = pVVar23->x;
                      (this->fields).originPrevFrame.y = fVar49;
                      (this->fields).originPrevFrame.z = fVar10;
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
                      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                                         (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,
                                          (MethodInfo *)0x0);
                      (this->fields).enteredStateWithPointerSelectReleased = bVar18;
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
  uVar50 = func_?();
  uVar50 = func_?(uVar50);
  func_?(uVar50);
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
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
      pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         (&VStack_3,
                          (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar6->fields).position,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      uVar7 = pVVar2->x;
      uVar8 = pVVar2->y;
      fStack_9 = pVVar2->z;
      uStack_10._0_4_ = (this->fields).originPrevFrame.x;
      uStack_10._4_4_ = (this->fields).originPrevFrame.y;
      fStack_11 = (float)uVar7 - (float)uStack_10;
      fStack_12 = (this->fields).originPrevFrame.z;
      fStack_13 = (float)uVar8 - uStack_10._4_4_;
      fStack_14 = fStack_9 - fStack_12;
      fStack_15 = (float)uVar7;
      fStack_16 = (float)uVar8;
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
        index = 0;
        fVar17 = pVVar2->y;
        fVar18 = pVVar2->z;
        (this->fields).originPrevFrame.x = pVVar2->x;
        (this->fields).originPrevFrame.y = fVar17;
        (this->fields).originPrevFrame.z = fVar18;
        pLVar19 = (this->fields).translateDatas;
        if (pLVar19 != (List_1_TranslateData_ *)0x0) {
          do {
            if ((pLVar19->fields)._size <= index) {
              ESTranslate_UpdateLaserPosition(this,(this->fields).targets,(MethodInfo *)0x0);
              (this->fields).enteredStateWithPointerSelectReleased = 0;
              return;
            }
            if ((this->fields).moveWithAvatar != 0) {
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
              uVar22 = *(undefined8 *)((int)RVar21 + 0xc);
              fStack_12 = *(float *)((int)RVar21 + 0x14);
              uStack_10._0_4_ = (float)uVar22;
              uStack_10._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
              *(ulonglong *)((int)RVar21 + 0xc) =
                   CONCAT44(uStack_10._4_4_ + fStack_13,(float)uStack_10 + fStack_11);
              *(float *)((int)RVar21 + 0x14) = fStack_12 + fStack_14;
              uStack_10 = uVar22;
            }
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                              (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
              uVar22 = *(undefined8 *)((int)RVar21 + 0xc);
              fStack_23 = *(float *)((int)RVar21 + 0x14);
              uStack_24._0_4_ = (float)uVar22;
              uStack_24._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
              *(ulonglong *)((int)RVar21 + 0xc) =
                   CONCAT44(uStack_4._4_4_ + uStack_24._4_4_,(float)uStack_4 + (float)uStack_24);
              *(float *)((int)RVar21 + 0x14) = fStack_5 + fStack_23;
              uStack_24 = uVar22;
            }
            else {
              ESTranslate_RotateWithCamera(this,e,index,(MethodInfo *)0x0);
            }
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if (pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            break;
            RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar20,index,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                               );
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar20,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar25 == (RegexCharClass_SingleRange)0x0)) break;
            pMStack_26 = TranslateData::TranslateData_get_Wo
                                  ((TranslateData *)RVar25,(MethodInfo *)0x0);
            fStack_27 = (this->fields).gridSize;
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || ((RVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar20,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar25 == (RegexCharClass_SingleRange)0x0 ||
                   (pMStack_26 == (MVWorldObjectClient *)0x0)))) break;
            puVar28 = (undefined8 *)func_?();
            uVar29 = *(undefined4 *)(puVar28 + 1);
            if (RVar21 == (RegexCharClass_SingleRange)0x0) break;
            *(undefined8 *)((int)RVar21 + 0x18) = *puVar28;
            *(undefined4 *)((int)RVar21 + 0x20) = uVar29;
            pMStack_26 = (MVWorldObjectClient *)(this->fields).gridSize;
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar20,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
            uStack_30 = *(undefined8 *)((int)RVar21 + 0x24);
            fStack_31 = *(float *)((int)RVar21 + 0x2c);
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
               || (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar20,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
            uVar22 = *(undefined8 *)((int)RVar21 + 0xc);
            fStack_32 = *(float *)((int)RVar21 + 0x14);
            uStack_33._0_4_ = (float)uVar22;
            uStack_33._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
            fStack_34 = fStack_31 - fStack_32;
            puVar28 = &uStack_35;
            uVar29 = 0;
            uStack_35 = CONCAT44(uStack_30._4_4_ - uStack_33._4_4_,
                                 (float)uStack_30 - (float)uStack_33);
            VStack_3.z = fStack_34;
            uStack_33 = uVar22;
            fVar36 = (float10)func_?();
            pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (this->fields).translateDatas;
            fStack_27 = (float)fVar36;
            if ((float)pMStack_26 < fStack_27) {
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
              pMVar37 = TranslateData::TranslateData_get_Wo
                                  ((TranslateData *)RVar21,(MethodInfo *)0x0);
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 ((RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar20,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), RVar21 == (RegexCharClass_SingleRange)0x0 ||
                  (pMVar37 == (MVWorldObjectClient *)0x0)))) break;
              func_?(0x1d,pMVar37,*(undefined8 *)((int)RVar21 + 0x18),
                              *(undefined4 *)((int)RVar21 + 0x20));
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if (pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) break;
              RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar20,index,
                                  MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                 );
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar25 == (RegexCharClass_SingleRange)0x0)) break;
              uVar29 = *(undefined4 *)((int)RVar25 + 0x20);
              if (RVar21 == (RegexCharClass_SingleRange)0x0) break;
              *(undefined8 *)((int)RVar21 + 0x24) = *(undefined8 *)((int)RVar25 + 0x18);
              *(undefined4 *)((int)RVar21 + 0x2c) = uVar29;
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if (pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) break;
              RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar20,index,
                                  MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                 );
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar25 == (RegexCharClass_SingleRange)0x0)) break;
              uVar29 = *(undefined4 *)((int)RVar25 + 0x20);
              if (RVar21 == (RegexCharClass_SingleRange)0x0) break;
              *(undefined8 *)((int)RVar21 + 0xc) = *(undefined8 *)((int)RVar25 + 0x18);
              *(undefined4 *)((int)RVar21 + 0x14) = uVar29;
              if ((this->fields).playTranslateSounds != 0) {
                pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if (((pLVar20 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) &&
                    (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar20,index,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                        ), RVar21 != (RegexCharClass_SingleRange)0x0)) &&
                   (pMVar37 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)RVar21,(MethodInfo *)0x0),
                   pMVar37 != (MVWorldObjectClient *)0x0)) {
                  puVar28 = (undefined8 *)func_?(&stack0xffffff00,0x19,pMVar37);
                  uVar22 = *puVar28;
                  fVar18 = *(float *)(puVar28 + 1);
                  fStack_16 = (float)uVar22;
                  fStack_9 = (float)((ulonglong)uVar22 >> 0x20);
                  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__AudioEventHandler);
                    uVar22 = CONCAT44(fStack_9,fStack_16);
                  }
                  bVar1 = 1;
                  uVar29 = (undefined4)uVar22;
                  uVar38 = (undefined4)((ulonglong)uVar22 >> 0x20);
                  pMVar37 = (MVWorldObjectClient *)0x0;
                  goto code_?;
                }
                break;
              }
            }
            else {
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
              uStack_39 = *(undefined8 *)((int)RVar21 + 0xc);
              fStack_40 = *(float *)((int)RVar21 + 0x14);
              pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) ||
                 (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar20,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
              uVar22 = *(undefined8 *)((int)RVar21 + 0x24);
              fStack_41 = *(float *)((int)RVar21 + 0x2c);
              uStack_42._0_4_ = (float)uVar22;
              fStack_27 = (float)uStack_39 - (float)uStack_42;
              uStack_42._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
              fStack_43 = uStack_39._4_4_ - uStack_42._4_4_;
              fVar18 = fStack_40 - fStack_41;
              uStack_44 = CONCAT44(fStack_43,fStack_27);
              fStack_45 = fVar18;
              uStack_42 = uVar22;
              fVar36 = (float10)func_?(&uStack_44,0,puVar28,uVar29);
              pMStack_26 = (MVWorldObjectClient *)(float)fVar36;
              if ((this->fields).completelyStuckLimit * (this->fields).gridSize < (float)pMStack_26)
              {
                fStack_9 = (this->fields).stickyModifier;
                fStack_27 = fStack_9 * fStack_27;
                fStack_43 = fStack_9 * fStack_43;
                fStack_9 = fStack_9 * fVar18;
                pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) ||
                   (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar20,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
                pMVar37 = TranslateData::TranslateData_get_Wo
                                    ((TranslateData *)RVar21,(MethodInfo *)0x0);
                pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if ((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               0x0) ||
                   (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar20,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), RVar21 == (RegexCharClass_SingleRange)0x0)) break;
                uVar22 = *(undefined8 *)((int)RVar21 + 0x24);
                fStack_46 = *(float *)((int)RVar21 + 0x2c);
                uStack_47._0_4_ = (float)uVar22;
                uStack_47._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
                fStack_48 = (float)uStack_47 + fStack_27;
                fStack_49 = uStack_47._4_4_ + fStack_43;
                fStack_50 = fStack_46 + fStack_9;
                uStack_47 = uVar22;
                if (pMVar37 == (MVWorldObjectClient *)0x0) break;
                func_?(0x1a,pMVar37,CONCAT44(fStack_49,fStack_48),fStack_50);
              }
              if ((this->fields).playTranslateSounds != 0) {
                pLVar20 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).translateDatas;
                if (((pLVar20 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) ||
                    (RVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (pLVar20,index,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                        ), RVar21 == (RegexCharClass_SingleRange)0x0)) ||
                   (pMVar37 = TranslateData::TranslateData_get_Wo
                                        ((TranslateData *)RVar21,(MethodInfo *)0x0),
                   pMVar37 == (MVWorldObjectClient *)0x0)) break;
                puVar28 = (undefined8 *)func_?();
                uVar22 = *puVar28;
                fVar18 = *(float *)(puVar28 + 1);
                fStack_16 = (float)uVar22;
                fStack_9 = (float)((ulonglong)uVar22 >> 0x20);
                if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__AudioEventHandler);
                  uVar22 = CONCAT44(fStack_9,fStack_16);
                }
                bVar1 = 0;
                uVar29 = (undefined4)uVar22;
                uVar38 = (undefined4)((ulonglong)uVar22 >> 0x20);
                pMVar37 = pMStack_26;
code_?:
                worldPos.y = (float)uVar38;
                worldPos.x = (float)uVar29;
                worldPos.z = fVar18;
                AudioEventHandler::AudioEventHandler_AddTranslateSoundData
                          ((float)pMVar37,bVar1,worldPos,(MethodInfo *)0x0);
              }
            }
            pLVar19 = (this->fields).translateDatas;
            index = index + 1;
            if (pLVar19 == (List_1_TranslateData_ *)0x0) break;
          } while( true );
        }
      }
    }
  }
  func_?();
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
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
     (this_00 = (RTFocusCamera *)(pGVar2->fields).LaserCommands, this_00 != (RTFocusCamera *)0x0)) {
    RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
              (this_00,CameraPrjSwitchTransition_Type__Enum_None,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       ((this_01 = (pGVar2->fields).LaserCommands,
        this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0 &&
        ((GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (this_01,0,(MethodInfo *)0x0), e != (EditorStateMachine *)0x0 &&
         (pMVar3 = (e->fields).weCamera, pMVar3 != (MainCameraManager *)0x0)))))) {
      MainCameraManager::MainCameraManager_IgnoreInputTypes
                (pMVar3,IgnoreInputTypes__Enum_None,(MethodInfo *)0x0);
      pMVar3 = (e->fields).weCamera;
      if (pMVar3 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_TertiaryCameraActive(pMVar3,0,(MethodInfo *)0x0);
        pMVar3 = (e->fields).weCamera;
        if ((pMVar3 != (MainCameraManager *)0x0) &&
           (this_04 = MainCameraManager::MainCameraManager_get_TertiaryCamera
                                (pMVar3,(MethodInfo *)0x0), this_04 != (Camera *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ResetReplacementShader
                    (this_04,(MethodInfo *)0x0);
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).translateDatas;
          if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            __return_storage_ptr__ = (MVJetPack *)&stack0xffffffd0;
            pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)__return_storage_ptr__,this_02,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                               );
            RVar5 = pLVar4->_current;
            while( true ) {
              do {
                this_05 = RVar5;
                bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                  );
                if (bVar6 == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffc0,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                             ,in_stack_7);
                  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                            (1,(MethodInfo *)0x0);
                  selectionSet = (HashSet_1_System_Int32_ *)
                                 MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                           ((MVJetPack_LocalObjectsJetPack *)&stack0xffffffc0,
                                            (MethodInfo *)0x0);
                  MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                            ((MVNetworkSelector *)&UNK_?,selectionSet,(MethodInfo *)0x0);
                  pOVar8 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)&UNK_?,
                             (Object *)StringLiteral_FromTranslateState,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  *unaff_FS_OFFSET = __return_storage_ptr__;
                  return;
                }
                if (this_05 == (RegexCharClass_SingleRange)0x0) goto code_?;
                RVar5 = this_05;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (*(WorldObjectClientRef_1_System_Object_ **)((int)this_05 + 8) ==
                    (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
                pOVar8 = WorldObjectClientRef`1[System::Object]::
                         WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                   (*(WorldObjectClientRef_1_System_Object_ **)((int)this_05 + 8),
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   );
              } while (pOVar8 == (Object *)0x0);
              if (((this_05 == (RegexCharClass_SingleRange)0x0) ||
                  (pMVar9 = TranslateData::TranslateData_get_Wo
                                      ((TranslateData *)this_05,(MethodInfo *)0x0),
                  pMVar9 == (MVWorldObjectClient *)0x0)) ||
                 (this_03 = (pMVar9->fields).gameObject, this_03 == (GameObject *)0x0)) break;
              t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_03,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
              pMVar9 = TranslateData::TranslateData_get_Wo
                                 ((TranslateData *)this_05,(MethodInfo *)0x0);
              if (pMVar9 == (MVWorldObjectClient *)0x0) break;
              in_stack_7 = (MethodInfo *)&UNK_?;
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      in_stack_21 = fVar9 * *(float *)((int)fVar4 + 0x2c) * _UNK_?;
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
      in_stack_23 = fVar9 * *(float *)((int)fVar4 + 0x2c) * _UNK_?;
    }
    else {
      if (iVar17 != 2) goto code_?;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      in_stack_24 = fVar9 * *(float *)((int)fVar4 + 0x2c) * _UNK_?;
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
  iStack_9 = 0;
  fStack_10 = 0.0;
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffff78,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       ,in_stack_20);
            *unaff_FS_OFFSET = uStack_4;
            return fStack_10 / (float)iVar8;
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
          dVar25 = (double)(fStack_24 * fStack_24 + fStack_23 * fStack_23 + fStack_22 * fStack_22);
          if (dVar25 < 0.0) {
            func_?();
          }
          else {
            dVar25 = SQRT(dVar25);
          }
          iVar8 = iVar8 + 1;
          fStack_10 = (float)dVar25 + fStack_10;
          iStack_9 = iVar8;
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
  if ((bVar2 == 0) || (uStack_3 == 0xffffffff)) {
    return 0;
  }
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (HashSet_1_System_UInt32_ *)
              MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
    if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
      puVar4 = &UNK_?;
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
              HashSet_1_System_UInt32__Contains
                        (this_00,uStack_3,
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff10,0,0x40);
  func_?(&stack0xffffff50,0,0x40);
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  puStack_3 = (undefined *)0x0;
  if ((this->fields).recalcLocalDirCamToObjects == 0) {
code_?:
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).translateDatas;
    if ((pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar4,targetIndex,
                            MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                           ), RVar5 != (RegexCharClass_SingleRange)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((*(WorldObjectClientRef_1_System_Object_ **)((int)RVar5 + 8) !=
           (WorldObjectClientRef_1_System_Object_ *)0x0) &&
         (pOVar6 = WorldObjectClientRef`1[System::Object]::
                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                              (*(WorldObjectClientRef_1_System_Object_ **)((int)RVar5 + 8),
                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                              ), pOVar6 != (Object *)0x0)) {
        (**(code **)&pOVar6->klass[1]._1.nested_type_count)();
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                    ((Vector3 *)&stack0xffffffb0,
                     (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar7->fields).position,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                    );
          func_?();
          if ((this->fields).fixedToYPlane == 0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_9._0_4_ = (pVVar8->zeroVector).x;
            fStack_10 = (pVVar8->zeroVector).y;
            fStack_11 = (pVVar8->zeroVector).z;
            if (((e == (EditorStateMachine *)0x0) ||
                (pMVar12 = (e->fields).weCamera, pMVar12 == (MainCameraManager *)0x0)) ||
               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0),
               pTVar13 == (Transform *)0x0)) goto code_?;
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&fStack_1,pTVar13,(MethodInfo *)0x0);
            fStack_1 = pQVar14->x;
            fStack_2 = pQVar14->y;
            puStack_3 = (undefined *)pQVar14->z;
            fVar15 = pQVar14->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          }
          else {
            if (((e == (EditorStateMachine *)0x0) ||
                (pMVar12 = (e->fields).weCamera, pMVar12 == (MainCameraManager *)0x0)) ||
               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0),
               pTVar13 == (Transform *)0x0)) goto code_?;
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffb0,pTVar13,(MethodInfo *)0x0);
            fVar15 = pQVar14->x;
            uStack_9._0_4_ = pQVar14->y;
            fVar16 = pQVar14->z;
            fVar17 = pQVar14->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            rotation_00.y = (float)uStack_9;
            rotation_00.x = fVar15;
            rotation_00.z = fVar16;
            rotation_00.w = fVar17;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&stack0xffffffb0,rotation_00,
                                 TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                 (MethodInfo *)0x0);
            fVar15 = MathFunctions::MathFunctions_Yaw(*pVVar18,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            euler_00.y = fVar15 * _UNK_?;
            euler_00.x = fStack_1;
            euler_00.z = 0.0;
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&fStack_1,euler_00,(MethodInfo *)0x0);
            fStack_1 = pQVar14->x;
            fStack_2 = pQVar14->y;
            puStack_3 = (undefined *)pQVar14->z;
            fVar15 = pQVar14->w;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_9._0_4_ = (pVVar8->zeroVector).x;
            fStack_10 = (pVVar8->zeroVector).y;
            fStack_11 = (pVVar8->zeroVector).z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
          }
          pos_00.z = fStack_11;
          pos_00.x = (float)uStack_9;
          pos_00.y = fStack_10;
          q_00.y = fStack_2;
          q_00.x = fStack_1;
          q_00.z = (float)puStack_3;
          q_00.w = fVar15;
          UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                    ((Matrix4x4 *)&stack0xfffffea0,pos_00,q_00,pVVar8->oneVector,(MethodInfo *)0x0)
          ;
          pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).translateDatas;
          if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar4,targetIndex,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                               );
            if (RVar5 != (RegexCharClass_SingleRange)0x0) {
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                                  ((Vector3 *)&stack0xffffffb0,(Matrix4x4 *)&stack0xffffff10,
                                   *(Vector3 *)((int)RVar5 + 0x30),(MethodInfo *)0x0);
              uVar19 = pVVar18->x;
              uVar20 = pVVar18->y;
              fVar15 = pVVar18->z;
              pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).translateDatas;
              if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar4,targetIndex,
                                    MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                   );
                puVar21 = &UNK_?;
                pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                    ((MethodInfo *)0x0);
                if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
                  pVVar18 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                            SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                      ((Vector3 *)&stack0xffffffb0,
                                       (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                                       (pSVar7->fields).position,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                      );
                  uVar22 = pVVar18->x;
                  uVar23 = pVVar18->y;
                  uStack_9._0_4_ = pVVar18->z;
                  uStack_24 = CONCAT44((float)uVar23 + (float)uVar20 * (float)puVar21,
                                       (float)uVar22 + (float)uVar19 * (float)puVar21);
                  if (RVar5 != (RegexCharClass_SingleRange)0x0) {
                    *(undefined8 *)((int)RVar5 + 0xc) = uStack_24;
                    *(float *)((int)RVar5 + 0x14) = (float)uStack_9 + fVar15 * (float)puVar21;
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
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_25._0_4_ = (pVVar8->zeroVector).x;
      fStack_11 = (pVVar8->zeroVector).y;
      fVar15 = (pVVar8->zeroVector).z;
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar12 = (e->fields).weCamera, pMVar12 == (MainCameraManager *)0x0)) ||
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
      goto code_?;
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffb0,pTVar13,(MethodInfo *)0x0);
      uStack_9._0_4_ = pQVar14->x;
      fStack_26 = pQVar14->y;
      fStack_27 = pQVar14->z;
      fStack_28 = pQVar14->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    }
    else {
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar12 = (e->fields).weCamera, pMVar12 == (MainCameraManager *)0x0)) ||
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar12,(MethodInfo *)0x0), pTVar13 == (Transform *)0x0))
      goto code_?;
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffb0,pTVar13,(MethodInfo *)0x0);
      fVar15 = pQVar14->x;
      uStack_9._0_4_ = pQVar14->y;
      fVar16 = pQVar14->z;
      fVar17 = pQVar14->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = (float)uStack_9;
      rotation.x = fVar15;
      rotation.z = fVar16;
      rotation.w = fVar17;
      pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffa0,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      fVar15 = MathFunctions::MathFunctions_Yaw(*pVVar18,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      euler.y = fVar15 * _UNK_?;
      euler.x = fStack_1;
      euler.z = 0.0;
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
      uStack_9._0_4_ = pQVar14->x;
      fStack_26 = pQVar14->y;
      fStack_27 = pQVar14->z;
      fStack_28 = pQVar14->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_25._0_4_ = (pVVar8->zeroVector).x;
      fStack_11 = (pVVar8->zeroVector).y;
      fVar15 = (pVVar8->zeroVector).z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    }
    pos.z = fVar15;
    pos.x = (float)(undefined4)uStack_25;
    pos.y = fStack_11;
    q.y = fStack_26;
    q.x = (float)uStack_9;
    q.z = fStack_27;
    q.w = fStack_28;
    pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xfffffea0,pos,q,pVVar8->oneVector,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_Inverse
              ((Matrix4x4 *)&stack0xfffffea0,*pMVar29,(MethodInfo *)0x0);
    index = 0;
    pLVar30 = (this->fields).translateDatas;
    if (pLVar30 != (List_1_TranslateData_ *)0x0) {
      while( true ) {
        if ((pLVar30->fields)._size <= index) {
          (this->fields).recalcLocalDirCamToObjects = 0;
          goto code_?;
        }
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).translateDatas;
        if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                           );
        pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).translateDatas;
        if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar31 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar4,index,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                               ), RVar31 == (RegexCharClass_SingleRange)0x0)) break;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((*(WorldObjectClientRef_1_System_Object_ **)((int)RVar31 + 8) ==
             (WorldObjectClientRef_1_System_Object_ *)0x0) ||
           (pOVar6 = WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                (*(WorldObjectClientRef_1_System_Object_ **)((int)RVar31 + 8),
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                ), pOVar6 == (Object *)0x0)) break;
        puVar32 = (undefined8 *)(**(code **)&pOVar6->klass[1]._1.nested_type_count)();
        uVar33 = *puVar32;
        fVar15 = *(float *)(puVar32 + 1);
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar7 == (SpawnRoleDataMediator *)0x0) break;
        pVVar18 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            ((Vector3 *)&stack0xfffffef0,
                             (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar7->fields).position,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        uStack_9._0_4_ = (float)uVar33;
        fStack_10 = (float)((ulonglong)uVar33 >> 0x20);
        uVar34 = pVVar18->x;
        uVar35 = pVVar18->y;
        value.y = fStack_10 - (float)uVar35;
        value.x = (float)uStack_9 - (float)uVar34;
        value.z = fVar15 - pVVar18->z;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xfffffee0,value,(MethodInfo *)0x0);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                            ((Vector3 *)&stack0xffffffb0,(Matrix4x4 *)&stack0xffffff50,*pVVar18,
                             (MethodInfo *)0x0);
        fVar15 = pVVar18->z;
        if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
        *(undefined8 *)((int)RVar5 + 0x30) = *(undefined8 *)pVVar18;
        index = index + 1;
        *(float *)((int)RVar5 + 0x38) = fVar15;
        pLVar30 = (this->fields).translateDatas;
        if (pLVar30 == (List_1_TranslateData_ *)0x0) break;
      }
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
  if ((wos->fields)._size == 1) {
    pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar8 == (GameEventManager *)0x0) ||
       (pGVar9 = (pGVar8->fields).AvatarCommandsBuildMode,
       pGVar9 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar9->fields).LaserCommands;
    RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)wos,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
    LStack_7._list = *(List_1_System_Object_ **)(*(int *)RVar10 + 0x1cc);
    pVVar11 = (Vector3 *)(**(code **)(*(int *)RVar10 + 0x1c8))();
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
    LStack_7._list = (List_1_System_Object_ *)pLVar12->_list;
    LStack_7._index = pLVar12->_index;
    LStack_7._version = pLVar12->_version;
    LStack_7._current = *(Object **)&pLVar12->_current;
    uStack_1 = 1;
    VStack_14.z = (float)&LStack_7;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), bVar15 != 0) {
      if (((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0) ||
         (transforms == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)transforms,*(Object **)((int)LStack_7._current + 0x90),
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar8 == (GameEventManager *)0x0) ||
       (pGVar9 = (pGVar8->fields).AvatarCommandsBuildMode,
       pGVar9 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar9->fields).LaserCommands;
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
  (this->fields).translateDatas = this_00;
  func_?(&(this->fields).translateDatas,this_00);
  this_01 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targets = this_01;
  func_?(&(this->fields).targets,this_01);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).originPrevFrame.x = (pVVar1->zeroVector).x;
  (this->fields).originPrevFrame.y = fVar2;
  (this->fields).originPrevFrame.z = fVar3;
  (this->fields).playTranslateSounds = 1;
  (this->fields).fixedToYPlane = 1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

