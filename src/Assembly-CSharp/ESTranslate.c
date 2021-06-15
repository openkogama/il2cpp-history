
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pEStack_6 = (EditorStateMachine *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  auStack_9._36_4_ = (MVWorldObjectClientManager *)0xffffffff;
  auStack_9._32_4_ = (Il2CppGenericMethod *)&stack0xffffff30;
  puStack_4 = &stack0xffffff30;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (auStack_9._32_4_ = (Il2CppGenericMethod *)&stack0xffffff30, puStack_4 = &stack0xffffff30,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    auStack_9._32_4_ = (Il2CppGenericMethod *)&stack0xffffff30;
    puStack_4 = &stack0xffffff30;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar10 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  this_06 = unaff_ESI;
  if (pIVar10 == (IEditModeUI *)0x0) {
code_?:
    pEVar11 = (EditorStateMachine *)func_?();
    e = this_06;
  }
  else {
    cVar12 = func_?(0,TypeInfo__IEditModeUI);
    if (cVar12 == '\0') {
      (this->fields).gridSize = 0.0625;
    }
    else {
      (this->fields).gridSize = 1.0;
    }
    this_06 = e;
    if (((e == (EditorStateMachine *)0x0) ||
        (pDVar13 = (e->fields)._.data, pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0))
       || (pPVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)pDVar13,
                                (Type *)StringLiteral_translateMode,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pPVar14 == (Pool *)0x0)) goto code_?;
    if ((pPVar14->klass->_0).element_class != (TypeInfo__TranslateMode->_0).element_class) {
code_?:
      func_?(pPVar14);
      goto code_?;
    }
    piVar15 = (int32_t *)func_?();
    (this->fields).translateMode = *piVar15;
    pDVar13 = (e->fields)._.data;
    if (pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pMVar16 = (MethodInfo *)&UNK_?;
    pPVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)pDVar13,
                         (Type *)StringLiteral_moveWithAvatar,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pPVar14 == (Pool *)0x0) goto code_?;
    if ((pPVar14->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar17 = (bool *)func_?();
    bVar18 = cRam_? == '\0';
    (this->fields).moveWithAvatar = *pbVar17;
    (this->fields).initialDistance = 0.0;
    if (bVar18) {
      func_?();
      cRam_? = '\x01';
    }
    auStack_9._8_4_ = (InvokerMethod)0x0;
    auStack_9._0_4_ = (Il2CppMethodPointer)0x0;
    auStack_9._4_4_ = (Il2CppMethodPointer)0x0;
    func_?(&stack0xffffff3c,0);
    bVar19 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&stack0xffffff3c,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if ((bVar19 == 0) || (NStack_20 == ~NativeAdType__Enum_CustomTemplate)) {
code_?:
      method_00 = (MethodInfo *)&UNK_?;
      fVar21 = ESTranslate_GetInitialAvatarMoveObjectDistance(this,e,(MethodInfo *)0x0);
      (this->fields).initialDistance = fVar21;
    }
    else {
      pSVar22 = (e->fields).selectionController;
      if ((pSVar22 == (SelectionController *)0x0) ||
         (pMVar16 = (MethodInfo *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pSVar22,pMVar16),
         pMVar16 == (MethodInfo *)0x0)) goto code_?;
      method_00 = MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_;
      bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pMVar16,NStack_20,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar19 == 0) goto code_?;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pSVar23 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar23 == (SpawnRoleDataMediator *)0x0) goto code_?;
      s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
          PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
          PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                    ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar23,(MethodInfo *)0x0);
      pVVar24 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                          ((Vector3 *)(auStack_25 + 4),s,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                          );
      auStack_9._16_4_ = pVVar24->x;
      auStack_9._20_4_ = pVVar24->y;
      fVar21 = pVVar24->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        in_stack_26 = (MethodInfo *)&UNK_?;
        func_?();
      }
      a.y = (float)in_stack_26;
      a.x = (float)SUB84(auStack_9._16_8_,4);
      a.z = 0.0;
      b.z = fVar21;
      b.x = (float)auStack_9._16_4_;
      b.y = (float)auStack_9._20_4_;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)(auStack_25 + 4),a,b,(MethodInfo *)0x0);
      auStack_9._0_4_ = pVVar24->x;
      auStack_9._4_4_ = pVVar24->y;
      auStack_9._8_4_ = pVVar24->z;
      in_stack_26 = (MethodInfo *)auStack_9;
      fVar27 = (float10)func_?();
      pMStack_28 = (MVNetworkSelector *)(float)fVar27;
      (this->fields).initialDistance = (float)pMStack_28;
    }
    (this->fields).recalcLocalDirCamToObjects = 1;
    pLVar29 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar29,MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
    (this->fields).translateDatas = (List_1_TranslateData_ *)pLVar29;
    pLVar29 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar29,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    (this->fields).targets = (List_1_MVWorldObjectClient_ *)pLVar29;
    pMVar30 = (e->fields).weCamera;
    if (pMVar30 == (MainCameraManager *)0x0) goto code_?;
    MainCameraManager::MainCameraManager_IgnoreInputTypes
              (pMVar30,IgnoreInputTypes__Enum_Avatar|IgnoreInputTypes__Enum_MouseScroll,
               in_stack_31);
    pMStack_28 = (e->fields).networkSelector;
    pSVar22 = (e->fields).selectionController;
    if ((pSVar22 == (SelectionController *)0x0) ||
       (selectionSet = (HashSet_1_System_Int32_ *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pSVar22,pMVar16),
       pMStack_28 == (MVNetworkSelector *)0x0)) goto code_?;
    bVar19 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMStack_28,selectionSet,method_00)
    ;
    if (bVar19 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Ownership_request_failed,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar32 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar32 == (GameEventManager *)0x0) ||
        (pGVar33 = (pGVar32->fields).AvatarCommandsBuildMode,
        pGVar33 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (this_00 = (pGVar33->fields).LaserCommands,
       this_00 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Transforming,(MethodInfo *)0x0);
    pGVar32 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar32 == (GameEventManager *)0x0) ||
        (pGVar33 = (pGVar32->fields).AvatarCommandsBuildMode,
        pGVar33 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (this_05 = (String__Class *)(pGVar33->fields).LaserCommands, this_05 == (String__Class *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
              ((GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)this_05,1,
               in_stack_26);
    pSVar22 = (e->fields).selectionController;
    if ((pSVar22 == (SelectionController *)0x0) ||
       (this_03 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pSVar22,in_stack_34),
       this_03 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) goto code_?;
    pHVar35 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
              FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                        ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                         auStack_25,this_03,
                         MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar35->hashset;
    CStack_7.monitor = (MonitorData *)pHVar35->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar35->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar35->current;
    uStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      pMStack_28 = (MVNetworkSelector *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_7,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                             );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
      auStack_9._28_4_ =
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_04,(int32_t)pMStack_28,(MethodInfo *)0x0);
      this_01 = (this->fields).targets;
      if (this_01 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,auStack_9._28_4_,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                );
      pMStack_28 = (MVNetworkSelector *)(this->fields).gridSize;
      auStack_9._24_4_ = (this->fields).translateDatas;
      this_05 = (String__Class *)func_?();
      auStack_9._20_4_ = this_05;
      TranslateData::TranslateData__ctor
                ((TranslateData *)this_05,(MVWorldObjectClient *)auStack_9._28_4_,(float)pMStack_28
                 ,(MethodInfo *)0x0);
      if ((List_1_TranslateData_ *)auStack_9._24_4_ == (List_1_TranslateData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)auStack_9._24_4_,auStack_9._20_4_,
                 MethodInfo__System__Collections__Generic__List<TranslateData>__Add_TranslateData_);
    }
    pMStack_28 = (MVNetworkSelector *)0x0;
    *(MethodInfo **)auStack_9._32_4_ = (MethodInfo *)0x17b;
    uStack_1 = 0xffffffff;
    pMVar16 = MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__;
    func_?(&CStack_7);
    pEVar11 = pEStack_6;
    if (pEStack_6 == (EditorStateMachine *)0x0) {
      if (((pMStack_28 != (MVNetworkSelector *)0xffffffff) &&
          (((MethodInfo **)auStack_9._32_4_)[(int)pMStack_28] == (MethodInfo *)0x17b)) &&
         (-1 < (int)pMStack_28)) {
        pMStack_28 = (MVNetworkSelector *)
                     ((int)&pMStack_28[-1].fields.pendingRequestedOwnershipIds + 3);
      }
      if ((e != (EditorStateMachine *)0x0) &&
         (pMVar30 = (e->fields).weCamera, pMVar30 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_set_TertiaryCameraActive(pMVar30,1,pMVar16);
        pMVar30 = (e->fields).weCamera;
        if (pMVar30 != (MainCameraManager *)0x0) {
          auStack_9._36_4_ =
               MainCameraManager::MainCameraManager_get_TertiaryCamera(pMVar30,(MethodInfo *)0x0);
          pMVar30 = (e->fields).weCamera;
          if (pMVar30 != (MainCameraManager *)0x0) {
            this_06 = (EditorStateMachine *)(pMVar30->fields).transparentMultiplyColor;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              this_05 = TypeInfo__System__String;
              func_?();
            }
            if ((MVWorldObjectClientManager *)auStack_9._36_4_ != (MVWorldObjectClientManager *)0x0
               ) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_SetReplacementShader
                        ((Camera *)auStack_9._36_4_,(Shader *)this_06,
                         TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
              this_06 = (EditorStateMachine *)func_?();
              pEVar11 = this_06;
              System.Core.dll::System::Collections::Generic::
              HashSet`1[AvatarModifierPackage+AvatarModifier]::
              HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                        ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_06,
                         MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
              this_02 = (List_1_UnityEngine_Color32_ *)(this->fields).translateDatas;
              (this->fields).woIds = (HashSet_1_System_Int32_ *)this_06;
              if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
                pMVar16 = (MethodInfo *)auStack_25;
                pLVar36 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                          List_1_UnityEngine_Color32__GetEnumerator
                                    ((List_1_T_Enumerator_UnityEngine_Color32_ *)pMVar16,this_02,
                                     MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                                    );
                CStack_8.klass =
                     (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar36->l;
                CStack_8.monitor = (MonitorData *)pLVar36->next;
                CStack_8.fields.list =
                     (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar36->ver;
                CStack_8.fields.syncRoot = (Object *)(pLVar36->current).rgba;
                uStack_1 = 2;
                while (cVar12 = func_?(), e = pEStack_6, cVar12 != '\0') {
                  this_06 = (EditorStateMachine *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      (&CStack_8,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                                      );
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  auStack_9._36_4_ =
                       MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (((this_06 == (EditorStateMachine *)0x0) ||
                      (this_07 = TranslateData::TranslateData_get_Wo
                                           ((TranslateData *)this_06,(MethodInfo *)0x0),
                      this_07 == (MVWorldObjectClient *)0x0)) ||
                     (this_05 = (String__Class *)
                                mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                          ((Collection_1_VoxelHit_ *)this_07,(MethodInfo *)this_05),
                     (MVWorldObjectClientManager *)auStack_9._36_4_ ==
                     (MVWorldObjectClientManager *)0x0)) goto code_?;
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetAllWoIds
                            ((MVWorldObjectClientManager *)auStack_9._36_4_,(int32_t)this_05,
                             (this->fields).woIds,(MethodInfo *)pEVar11);
                  this_08 = (PrefabPool *)
                            TranslateData::TranslateData_get_Wo
                                      ((TranslateData *)this_06,(MethodInfo *)0x0);
                  if (this_08 == (PrefabPool *)0x0) goto code_?;
                  pMVar16 = (MethodInfo *)
                            PrefabPool::PrefabPool_get_MVPointLightPrefab(this_08,pMVar16);
                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                    func_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                            ((Transform *)pMVar16,1,(MethodInfo *)0x0);
                }
                (&((Il2CppGenericContext *)(auStack_9._32_4_ + 4))->class_inst)[(int)pMStack_28] =
                     (Il2CppGenericInst *)0x21a;
                uStack_1 = 0xffffffff;
                func_?(&CStack_8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                               );
                uVar37 = 0;
                uVar38 = 0;
                if (e != (EditorStateMachine *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible
                          (0,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pSVar23 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                    ((MethodInfo *)0x0);
                this_06 = e;
                if (pSVar23 != (SpawnRoleDataMediator *)0x0) {
                  pOVar39 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar23,
                                       (MethodInfo *)0x0);
                  puVar40 = (undefined8 *)func_?(auStack_9 + 0xc,pOVar39);
                  uVar41 = *puVar40;
                  fVar21 = *(float *)(puVar40 + 1);
                  (this->fields).originPrevFrame.x = (float)(int)uVar41;
                  (this->fields).originPrevFrame.y = (float)(int)((ulonglong)uVar41 >> 0x20);
                  (this->fields).originPrevFrame.z = fVar21;
                  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
                    func_?();
                  }
                  bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                  (this->fields).enteredStateWithPointerSelectReleased = bVar19;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar37 = 0;
  uVar38 = 0;
  func_?(pEVar11,0,0);
code_?:
  func_?(e,uVar38,uVar37);
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Execute
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  fStack_4 = 0.0;
  bVar5 = ESTranslate_IsValid(this,(MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    if (e != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((this->fields).enteredStateWithPointerSelectReleased == 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar5 != 0) goto code_?;
    }
    pVVar6 = ESTranslate_GetDeltaMouse(&VStack_7,this,e,(MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar6->x;
    uStack_8._4_4_ = pVVar6->y;
    fStack_9 = pVVar6->z;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                      (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      (this->fields).recalcLocalDirCamToObjects = 1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
      pSVar11 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar10,
                          (MethodInfo *)0x0);
      pVVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         (&VStack_7,pSVar11,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      fStack_12 = (this->fields).originPrevFrame.x;
      fStack_13 = (this->fields).originPrevFrame.y;
      fVar14 = (this->fields).originPrevFrame.z;
      uStack_15._0_4_ = pVVar6->x;
      uStack_15._4_4_ = pVVar6->y;
      fVar16 = pVVar6->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar16;
      a.x = (float)(undefined4)uStack_15;
      a.y = uStack_15._4_4_;
      b.y = fStack_13;
      b.x = fStack_12;
      b.z = fVar14;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_7,a,b,(MethodInfo *)0x0);
      uStack_17._0_4_ = pVVar6->x;
      uStack_17._4_4_ = pVVar6->y;
      fStack_13 = pVVar6->z;
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
        pSVar11 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                           ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar10,
                            (MethodInfo *)0x0);
        pVVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           (&VStack_7,pSVar11,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        index = 0;
        fVar16 = pVVar6->y;
        fVar14 = pVVar6->z;
        (this->fields).originPrevFrame.x = pVVar6->x;
        (this->fields).originPrevFrame.y = fVar16;
        (this->fields).originPrevFrame.z = fVar14;
        pLVar18 = (this->fields).translateDatas;
        if (pLVar18 != (List_1_TranslateData_ *)0x0) {
          do {
            pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18,
                                MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__
                               );
            if ((int)pOVar19 <= index) {
              ESTranslate_UpdateLaserPosition(this,(this->fields).targets,(MethodInfo *)0x0);
              (this->fields).enteredStateWithPointerSelectReleased = 0;
              return;
            }
            if ((this->fields).moveWithAvatar != 0) {
              pLVar18 = (this->fields).translateDatas;
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar18,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), pIVar20 == (IEventSystemHandler *)0x0)) break;
              pMStack_21 = (MVWorldObjectClient *)pIVar20[2].monitor;
              uStack_15 = *(undefined8 *)&pIVar20[1].monitor;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a_00.z = (float)pMStack_21;
              a_00.x = (float)(undefined4)uStack_15;
              a_00.y = uStack_15._4_4_;
              b_00.z = fStack_13;
              b_00.x = (float)(undefined4)uStack_17;
              b_00.y = (float)uStack_17._4_4_;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 (&VStack_22,a_00,b_00,(MethodInfo *)0x0);
              pMVar23 = (MonitorData *)pVVar6->z;
              *(undefined8 *)&pIVar20[1].monitor = *(undefined8 *)pVVar6;
              pIVar20[2].monitor = pMVar23;
            }
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                              (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              pLVar18 = (this->fields).translateDatas;
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar18,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), pIVar20 == (IEventSystemHandler *)0x0)) break;
              pMStack_21 = (MVWorldObjectClient *)pIVar20[2].monitor;
              uStack_15 = *(undefined8 *)&pIVar20[1].monitor;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a_01.z = (float)pMStack_21;
              a_01.x = (float)(undefined4)uStack_15;
              a_01.y = uStack_15._4_4_;
              b_01.z = fStack_9;
              b_01.x = (float)(undefined4)uStack_8;
              b_01.y = (float)uStack_8._4_4_;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 (&VStack_24,a_01,b_01,(MethodInfo *)0x0);
              pMVar23 = (MonitorData *)pVVar6->z;
              *(undefined8 *)&pIVar20[1].monitor = *(undefined8 *)pVVar6;
              pIVar20[2].monitor = pMVar23;
            }
            else {
              ESTranslate_RotateWithCamera(this,e,index,(MethodInfo *)0x0);
            }
            pLVar18 = (this->fields).translateDatas;
            if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
            pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                );
            pLVar18 = (this->fields).translateDatas;
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               (pTVar25 = (TranslateData *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                    ), pTVar25 == (TranslateData *)0x0)) break;
            pMStack_21 = TranslateData::TranslateData_get_Wo(pTVar25,(MethodInfo *)0x0);
            pLVar18 = (this->fields).translateDatas;
            uStack_15 = CONCAT44((this->fields).gridSize,(undefined4)uStack_15);
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               ((pIVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18
                                      ,index,
                                      MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                     ), pIVar26 == (IEventSystemHandler *)0x0 ||
                (pMStack_21 == (MVWorldObjectClient *)0x0)))) break;
            pIVar26 = (IEventSystemHandler *)func_?();
            pIVar27 = pIVar26[1].klass;
            if (pIVar20 == (IEventSystemHandler *)0x0) break;
            pIVar20[3] = *pIVar26;
            pIVar20[4].klass = pIVar27;
            pMStack_21 = (MVWorldObjectClient *)(this->fields).gridSize;
            pLVar18 = (this->fields).translateDatas;
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                    ), pIVar20 == (IEventSystemHandler *)0x0)) break;
            VStack_7._4_8_ = *(undefined8 *)&pIVar20[4].monitor;
            uStack_15 = CONCAT44(pIVar20[5].monitor,(undefined4)uStack_15);
            pLVar18 = (this->fields).translateDatas;
            if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
               (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                    ), pIVar20 == (IEventSystemHandler *)0x0)) break;
            uStack_28 = *(undefined8 *)&pIVar20[1].monitor;
            pMVar23 = pIVar20[2].monitor;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a_02.z = uStack_15._4_4_;
            a_02.x = VStack_7.y;
            a_02.y = VStack_7.z;
            b_02.z = (float)pMVar23;
            b_02.x = (float)(undefined4)uStack_28;
            b_02.y = (float)uStack_28._4_4_;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               (&VStack_29,a_02,b_02,(MethodInfo *)0x0);
            uStack_1._0_4_ = pVVar6->x;
            uStack_1._4_4_ = pVVar6->y;
            fStack_2 = pVVar6->z;
            fVar30 = (float10)func_?(&uStack_1,0);
            pLVar18 = (this->fields).translateDatas;
            uStack_15 = CONCAT44((float)fVar30,(undefined4)uStack_15);
            if ((float)pMStack_21 < (float)fVar30) {
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (pTVar25 = (TranslateData *)
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar18,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), pTVar25 == (TranslateData *)0x0)) break;
              pMVar31 = TranslateData::TranslateData_get_Wo(pTVar25,(MethodInfo *)0x0);
              pLVar18 = (this->fields).translateDatas;
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 ((pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar18,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), pIVar20 == (IEventSystemHandler *)0x0 ||
                  (pMVar31 == (MVWorldObjectClient *)0x0)))) break;
              func_?(0x1d,pMVar31,pIVar20[3].klass,pIVar20[3].monitor,pIVar20[4].klass);
              pLVar18 = (this->fields).translateDatas;
              if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
              pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                  );
              pLVar18 = (this->fields).translateDatas;
              if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                  (pIVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar18,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), pIVar26 == (IEventSystemHandler *)0x0)) ||
                 (pIVar20 == (IEventSystemHandler *)0x0)) break;
              pIVar27 = pIVar26[4].klass;
              *(IEventSystemHandler *)&pIVar20[4].monitor = pIVar26[3];
              pIVar20[5].monitor = (MonitorData *)pIVar27;
              pLVar18 = (this->fields).translateDatas;
              if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
              pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                  );
              pLVar18 = (this->fields).translateDatas;
              if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                  (pIVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar18,index,
                                        MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                       ), pIVar26 == (IEventSystemHandler *)0x0)) ||
                 (pIVar20 == (IEventSystemHandler *)0x0)) break;
              pIVar27 = pIVar26[4].klass;
              *(IEventSystemHandler *)&pIVar20[1].monitor = pIVar26[3];
              pIVar20[2].monitor = (MonitorData *)pIVar27;
              if ((this->fields).playTranslateSounds != 0) {
                pLVar18 = (this->fields).translateDatas;
                if (((pLVar18 != (List_1_TranslateData_ *)0x0) &&
                    (pTVar25 = (TranslateData *)
                               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar18,index,
                                          MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                         ), pTVar25 != (TranslateData *)0x0)) &&
                   (pMVar31 = TranslateData::TranslateData_get_Wo(pTVar25,(MethodInfo *)0x0),
                   pMVar31 != (MVWorldObjectClient *)0x0)) {
                  puVar32 = (undefined8 *)func_?(&stack0xffffff3c,0x19,pMVar31);
                  VStack_7._4_8_ = *puVar32;
                  fVar14 = *(float *)(puVar32 + 1);
                  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) !=
                       0) && ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
                    func_?(TypeInfo__AudioEventHandler);
                  }
                  bVar5 = 1;
                  fVar16 = VStack_7.y;
                  fVar33 = VStack_7.z;
                  pMVar31 = (MVWorldObjectClient *)0x0;
                  goto code_?;
                }
                break;
              }
            }
            else {
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar18,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), pIVar20 == (IEventSystemHandler *)0x0)) break;
              uStack_28 = *(undefined8 *)&pIVar20[1].monitor;
              uStack_15 = CONCAT44(pIVar20[2].monitor,(undefined4)uStack_15);
              pLVar18 = (this->fields).translateDatas;
              if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                 (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar18,index,
                                       MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                      ), pIVar20 == (IEventSystemHandler *)0x0)) break;
              VStack_7._4_8_ = *(undefined8 *)&pIVar20[4].monitor;
              pMVar23 = pIVar20[5].monitor;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a_03.z = uStack_15._4_4_;
              a_03.x = (float)(undefined4)uStack_28;
              a_03.y = (float)uStack_28._4_4_;
              b_03.z = (float)pMVar23;
              b_03.x = VStack_7.y;
              b_03.y = VStack_7.z;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                 ((Vector3 *)&stack0xffffff6c,a_03,b_03,(MethodInfo *)0x0);
              uStack_3._0_4_ = pVVar6->x;
              uStack_3._4_4_ = pVVar6->y;
              fStack_4 = pVVar6->z;
              fVar30 = (float10)func_?(&uStack_3,0);
              fVar14 = fStack_4;
              pMStack_21 = (MVWorldObjectClient *)(float)fVar30;
              if ((this->fields).completelyStuckLimit * (this->fields).gridSize < (float)pMStack_21)
              {
                fVar16 = (this->fields).stickyModifier;
                VStack_7.y = (float)uStack_3;
                VStack_7.z = uStack_3._4_4_;
                uStack_15 = CONCAT44(fVar16,(undefined4)uStack_15);
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                  fVar16 = uStack_15._4_4_;
                }
                a_04.z = fVar14;
                a_04.x = VStack_7.y;
                a_04.y = VStack_7.z;
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffff60,a_04,fVar16,(MethodInfo *)0x0);
                uStack_3._0_4_ = pVVar6->x;
                uStack_3._4_4_ = pVVar6->y;
                fStack_4 = pVVar6->z;
                pLVar18 = (this->fields).translateDatas;
                if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                   (pTVar25 = (TranslateData *)
                              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar18,index,
                                         MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                        ), pTVar25 == (TranslateData *)0x0)) break;
                pMVar31 = TranslateData::TranslateData_get_Wo(pTVar25,(MethodInfo *)0x0);
                pLVar18 = (this->fields).translateDatas;
                if ((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                   ((pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar18,index,
                                          MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                         ), pIVar20 == (IEventSystemHandler *)0x0 ||
                    (b_04.z = fStack_4, b_04.x = (float)uStack_3, b_04.y = uStack_3._4_4_,
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                       ((Vector3 *)&stack0xffffff54,*(Vector3 *)&pIVar20[4].monitor,
                                        b_04,(MethodInfo *)0x0),
                    pMVar31 == (MVWorldObjectClient *)0x0)))) break;
                uStack_34._0_4_ = pVVar6->x;
                uStack_34._4_4_ = pVVar6->y;
                fStack_35 = pVVar6->z;
                VStack_29.y = 3.64338e-44;
                VStack_29.x = (float)&UNK_?;
                VStack_29.z = (float)pMVar31;
                func_?();
              }
              if ((this->fields).playTranslateSounds != 0) {
                pLVar18 = (this->fields).translateDatas;
                if (((pLVar18 == (List_1_TranslateData_ *)0x0) ||
                    (pTVar25 = (TranslateData *)
                               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar18,index,
                                          MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                         ), pTVar25 == (TranslateData *)0x0)) ||
                   (pMVar31 = TranslateData::TranslateData_get_Wo(pTVar25,(MethodInfo *)0x0),
                   pMVar31 == (MVWorldObjectClient *)0x0)) break;
                puVar32 = (undefined8 *)func_?();
                VStack_7._4_8_ = *puVar32;
                fVar14 = *(float *)(puVar32 + 1);
                if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0
                    ) && ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
                  func_?(TypeInfo__AudioEventHandler);
                }
                bVar5 = 0;
                fVar16 = VStack_7.y;
                fVar33 = VStack_7.z;
                pMVar31 = pMStack_21;
code_?:
                worldPos.y = fVar33;
                worldPos.x = fVar16;
                worldPos.z = fVar14;
                AudioEventHandler::AudioEventHandler_AddTranslateSoundData
                          ((float)pMVar31,bVar5,worldPos,(MethodInfo *)0x0);
              }
            }
            pLVar18 = (this->fields).translateDatas;
            index = index + 1;
            if (pLVar18 == (List_1_TranslateData_ *)0x0) break;
          } while( true );
        }
      }
    }
  }
  func_?(0);
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_Exit
               (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (pGVar3 = (pGVar2->fields).LaserCommands,
     pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (pGVar3,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    uVar4 = ZEXT48(pGVar3);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       ((pGVar3 = (pGVar2->fields).LaserCommands,
        pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0 &&
        ((GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (pGVar3,0,(MethodInfo *)0x0), e != (EditorStateMachine *)0x0 &&
         (pMVar5 = (e->fields).weCamera, pMVar5 != (MainCameraManager *)0x0)))))) {
      MainCameraManager::MainCameraManager_IgnoreInputTypes
                (pMVar5,IgnoreInputTypes__Enum_None,(MethodInfo *)0x0);
      pMVar5 = (e->fields).weCamera;
      if (pMVar5 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_TertiaryCameraActive(pMVar5,0,(MethodInfo *)0x0);
        pMVar5 = (e->fields).weCamera;
        if ((pMVar5 != (MainCameraManager *)0x0) &&
           (this_03 = MainCameraManager::MainCameraManager_get_TertiaryCamera
                                (pMVar5,(MethodInfo *)0x0), this_03 != (Camera *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ResetReplacementShader
                    (this_03,(MethodInfo *)0x0);
          this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).translateDatas;
          if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
            __return_storage_ptr__ = (List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
            List_1_UnityEngine_Color32__GetEnumerator
                      (__return_storage_ptr__,this_00,
                       MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                      );
            while( true ) {
              method_00 = (MethodInfo *)&UNK_?;
              cVar6 = func_?(&stack0xffffffd0,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__MoveNext__
                                     );
              method_01 = (MethodInfo *)uVar4;
              if (cVar6 == '\0') break;
              unaff_ESI = (TranslateData *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     &stack0xffffffd0,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                                    );
              if (unaff_ESI == (TranslateData *)0x0) goto code_?;
              pMVar7 = TranslateData::TranslateData_get_Wo(unaff_ESI,method_00);
              if (pMVar7 != (MVWorldObjectClient *)0x0) {
                pMVar7 = TranslateData::TranslateData_get_Wo(unaff_ESI,(MethodInfo *)0x0);
                if ((pMVar7 == (MVWorldObjectClient *)0x0) ||
                   (this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                        ((DayNightCycle *)pMVar7,in_stack_8),
                   this_04 == (CelestialParam *)0x0)) goto code_?;
                in_stack_8 = (MethodInfo *)&UNK_?;
                in_stack_9 =
                     (MethodInfo *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_04,in_stack_9);
                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                  func_?(TypeInfo__SharedCubeFunctions);
                }
                SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                          ((Transform *)in_stack_9,0,(MethodInfo *)0x0);
                pMVar7 = TranslateData::TranslateData_get_Wo(unaff_ESI,(MethodInfo *)0x0);
                if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
                uVar4._0_4_ = (unaff_ESI->fields).prevGridifiedPosition.x;
                uVar4._4_4_ = (unaff_ESI->fields).prevGridifiedPosition.y;
                func_?(0x1d,pMVar7);
              }
            }
            unaff_ESI = (TranslateData *)0x0;
            pMVar5->klass = (MainCameraManager__Class *)0xc1;
            func_?(&stack0xffffffd0,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__Dispose__
                           );
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0)
            ;
            if (e != (EditorStateMachine *)0x0) {
              this_01 = (e->fields).selectionController;
              unaff_ESI = (TranslateData *)(e->fields).networkSelector;
              if ((this_01 != (SelectionController *)0x0) &&
                 (selectionSet = (HashSet_1_System_Int32_ *)
                                 mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                           ((Collection_1_VoxelHit_ *)this_01,method_01),
                 unaff_ESI != (TranslateData *)0x0)) {
                MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                          ((MVNetworkSelector *)unaff_ESI,selectionSet,(MethodInfo *)0x0);
                this_02 = (e->fields)._.data;
                value = (CrossPlatformInputManager_VirtualButton *)func_?();
                unaff_ESI = (TranslateData *)0x0;
                if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)this_02,StringLiteral_FromTranslateState,value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  *unaff_FS_OFFSET = __return_storage_ptr__;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_ESI,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (((e != (EditorStateMachine *)0x0) &&
      (this_00 = (e->fields).weCamera, this_00 != (MainCameraManager *)0x0)) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0))
  {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffbc,this_01,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    puVar4 = &UNK_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    uVar6._0_4_ = pVVar5->x;
    uVar6._4_4_ = pVVar5->y;
    fVar7 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      uVar8 = uVar1 >> 0x20;
      uVar1 = CONCAT44((int)uVar8,TypeInfo__UnityEngine__Quaternion);
      puVar3 = &UNK_?;
      func_?();
    }
    uVar1 = uVar1 & 0xffffffff00000000;
    rotation_00.y = (float)uVar6;
    rotation_00.x = (float)puVar4;
    rotation_00.z = (float)((ulonglong)uVar6 >> 0x20);
    rotation_00.w = (float)puVar3;
    point_00.z = fVar7;
    point_00.x = (float)(int)uVar6;
    point_00.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe4,rotation_00,point_00,(MethodInfo *)0x0);
    uVar1 = uVar1 & 0xffffffff00000000;
    fVar7 = pVVar5->x;
    uVar6._0_4_ = pVVar5->z;
    fVar9 = 0.0;
    func_?();
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
    uVar6._4_4_ = pVVar5->z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
    uVar10 = pVVar5->x;
    uVar11 = pVVar5->y;
    v1.y = (float)uVar11;
    v1.x = (float)uVar10;
    v1.z = uVar6._4_4_;
    v2.y = fVar9;
    v2.x = fVar7;
    v2.z = (float)uVar6;
    uVar6._0_4_ = MathFunctions::MathFunctions_SignedAngle_1(v1,v2,*pVVar5,(MethodInfo *)0x0);
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffbc,0.0,(float)uVar6 * _UNK_?,0.0,
                        (MethodInfo *)0x0);
    uVar6._0_4_ = pQVar2->x;
    uVar6._4_4_ = pQVar2->y;
    fVar7 = pQVar2->z;
    fVar9 = pQVar2->w;
    iVar12 = (this->fields).translateMode;
    if (iVar12 == 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    }
    else if (iVar12 == 1) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    }
    else {
      if (iVar12 != 2) goto code_?;
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    }
    func_?();
    fVar13 = (float)uVar1;
    fVar14 = (float)(uVar1 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
      uVar1 = CONCAT44(fVar14,fVar13);
    }
    rotation.y = uVar6._4_4_;
    rotation.x = (float)uVar6;
    rotation.z = fVar7;
    rotation.w = fVar9;
    point.z = 0.0;
    point.x = (float)(int)uVar1;
    point.y = (float)(int)(uVar1 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffc0,rotation,point,(MethodInfo *)0x0);
    uVar6._4_4_ = pVVar5->y;
    uVar6._0_4_ = pVVar5->z;
    __return_storage_ptr__->x = pVVar5->x;
    __return_storage_ptr__->y = uVar6._4_4_;
    __return_storage_ptr__->z = (float)uVar6;
    return __return_storage_ptr__;
  }
  func_?(0);
code_?:
  this_02 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Failed_to_set_translate_mode,(MethodInfo *)0x0);
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar15)();
  return pVVar5;
}


/* Single GetInitialAvatarMoveObjectDistance(EditorStateMachine) */

float Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectDistance
                (ESTranslate *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  uStack_7 = 0;
  pCStack_8 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  iVar9 = 0;
  fStack_10 = 0.0;
  iStack_11 = 0;
  puStack_12 = (undefined4 *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_12 = (undefined4 *)&stack0xffffff80, puStack_4 = &stack0xffffff80,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_12 = (undefined4 *)&stack0xffffff80;
    puStack_4 = &stack0xffffff80;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_01 != (SpawnRoleDataMediator *)0x0) {
    s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
        PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,(MethodInfo *)0x0);
    pVVar13 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[UnityEngine::Vector3]::
             SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                       (&VStack_14,s,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                       );
    uStack_15._0_4_ = pVVar13->x;
    uStack_15._4_4_ = pVVar13->y;
    fStack_16 = pVVar13->z;
    if ((e != (EditorStateMachine *)0x0) &&
       (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
      this_02 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0);
      if (this_02 != (HashSet_1_MVWorldObjectClient_ *)0x0) {
        pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffff9c,
                            (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_02,
                            MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                           );
        pCStack_8 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                     pHVar17->hashset;
        uStack_1 = 0;
        while( true ) {
          VStack_18.z = (float)
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
          ;
          VStack_18.y = (float)&pCStack_8;
          VStack_18.x = (float)&UNK_?;
          cVar19 = func_?();
          if (cVar19 == '\0') {
            *puStack_12 = 0x6d;
            uStack_1 = 0xffffffff;
            func_?(&pCStack_8,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                           );
            *unaff_FS_OFFSET = uStack_3;
            return fStack_10 / (float)iVar9;
          }
          pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &pCStack_8,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                             );
          if (pOVar20 == (Object *)0x0) break;
          puVar21 = (undefined8 *)
                   (**(code **)&pOVar20->klass[1]._1.nested_type_count)(auStack_22,pOVar20);
          VStack_14._4_8_ = *puVar21;
          unaff_EDI = *(float *)(puVar21 + 1);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.z = unaff_EDI;
          a.x = VStack_14.y;
          a.y = VStack_14.z;
          b.z = fStack_16;
          b.x = (float)(undefined4)uStack_15;
          b.y = (float)uStack_15._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             (&VStack_18,a,b,(MethodInfo *)0x0);
          uStack_7._0_4_ = pVVar13->x;
          uStack_7._4_4_ = pVVar13->y;
          fStack_6 = pVVar13->z;
          VStack_18.x = 0.0;
          fVar23 = (float10)func_?();
          VStack_14.z = (float)fVar23;
          fStack_10 = (float)fVar23 + fStack_10;
          iVar9 = iVar9 + 1;
          iStack_11 = iVar9;
        }
      }
    }
  }
  func_?();
  func_?(unaff_EDI,0,0);
  pcVar24 = (code *)swi(3);
  fVar23 = (float10)(*pcVar24)();
  return (float)fVar23;
}


/* Boolean GetInitialAvatarMoveObjectHitDistance(EditorStateMachine, Single ByRef) */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_GetInitialAvatarMoveObjectHitDistance
               (ESTranslate *this,EditorStateMachine *e,float *hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&puStack_3,0,0x48);
  bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&puStack_3,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if ((bVar4 == 0) || (in_stack_5 == ~NativeAdType__Enum_CustomTemplate)) {
    return 0;
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    this_01 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
      puVar6 = &UNK_?;
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
              NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                        (this_01,in_stack_5,
                         MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar4 == 0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_02 != (SpawnRoleDataMediator *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,(MethodInfo *)0x0)
        ;
        pVVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           (&VStack_8,s,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        uStack_9._0_4_ = pVVar7->x;
        uStack_9._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.y = (float)puVar6;
        a.x = (float)puStack_3;
        a.z = (float)this_01;
        b.z = fVar10;
        b.x = (float)(undefined4)uStack_9;
        b.y = (float)uStack_9._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&VStack_8,a,b,(MethodInfo *)0x0);
        uStack_2._0_4_ = pVVar7->x;
        uStack_2._4_4_ = pVVar7->y;
        fStack_1 = pVVar7->z;
        fVar11 = (float10)func_?();
        *hitDistance = (float)fVar11;
        return 1;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar4 = (*pcVar12)();
  return bVar4;
}


/* Boolean IsValid() */

bool Assembly-CSharp.dll::ESTranslate::ESTranslate_IsValid(ESTranslate *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).translateDatas;
  puStack_9 = &stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    iVar10 = func_?(0);
  }
  else {
    puStack_9 = &stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                        MethodInfo__System__Collections__Generic__List<TranslateData>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_7.monitor = (MonitorData *)pLVar11->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    do {
      cVar13 = func_?();
      if (cVar13 == '\0') break;
      this_01 = (TranslateData *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateData>__get_Current__
                          );
      if (this_01 == (TranslateData *)0x0) goto code_?;
      pMVar14 = TranslateData::TranslateData_get_Wo(this_01,(MethodInfo *)0x0);
    } while (pMVar14 != (MVWorldObjectClient *)0x0);
    uStack_1 = 0xffffffff;
    func_?();
    iVar10 = iStack_6;
    if (iStack_6 == 0) {
      if (&stack0x00000000 == (undefined1 *)0x80) {
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
  func_?(iVar10);
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void RotateWithCamera(EditorStateMachine, Int32) */

void Assembly-CSharp.dll::ESTranslate::ESTranslate_RotateWithCamera
               (ESTranslate *this,EditorStateMachine *e,int32_t targetIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  uStack_9 = 0;
  uStack_10 = 0;
  fStack_11 = 0.0;
  func_?(&fStack_12,0,0x40);
  uStack_13 = 0;
  uStack_14 = 0;
  fStack_15 = 0.0;
  fStack_16 = 0.0;
  fStack_17 = 0.0;
  fStack_18 = 0.0;
  if ((this->fields).recalcLocalDirCamToObjects == 0) {
code_?:
    pLVar19 = (this->fields).translateDatas;
    if (((pLVar19 != (List_1_TranslateData_ *)0x0) &&
        (pTVar20 = (TranslateData *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,
                              targetIndex,
                              MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                             ), pTVar20 != (TranslateData *)0x0)) &&
       (pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0),
       pMVar21 != (MVWorldObjectClient *)0x0)) {
      puVar22 = (undefined8 *)(*(code *)(pMVar21->klass->vtable).get_WorldPosition_1.method)();
      uStack_23 = *puVar22;
      fVar24 = *(float *)(puVar22 + 1);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pSVar25 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar25 != (SpawnRoleDataMediator *)0x0) {
        pSVar26 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                  PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                  PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                            ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar25,
                             (MethodInfo *)0x0);
        pVVar27 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           ((Vector3 *)(auStack_28 + 4),pSVar26,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        VStack_29.y = pVVar27->x;
        VStack_29.z = pVVar27->y;
        fVar30 = pVVar27->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_02.z = fVar24;
        a_02.x = (float)(undefined4)uStack_23;
        a_02.y = (float)uStack_23._4_4_;
        b_00.z = fVar30;
        b_00.x = VStack_29.y;
        b_00.y = VStack_29.z;
        pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)(auStack_28 + 4),a_02,b_00,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar27->x;
        uStack_10._4_4_ = pVVar27->y;
        fStack_11 = pVVar27->z;
        fVar31 = (float10)func_?();
        uStack_32 = CONCAT44((float)fVar31,(undefined4)uStack_32);
        func_?(&fStack_12);
        if ((this->fields).fixedToYPlane == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)(auStack_28 + 4),(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar27->x;
          uStack_23._4_4_ = pVVar27->y;
          fVar24 = pVVar27->z;
          if (((e == (EditorStateMachine *)0x0) ||
              (pMVar33 = (e->fields).weCamera, pMVar33 == (MainCameraManager *)0x0)) ||
             (pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pMVar33,(MethodInfo *)0x0),
             pTVar34 == (Transform *)0x0)) goto code_?;
          pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_28,pTVar34,(MethodInfo *)0x0);
          fStack_36 = pQVar35->x;
          fStack_37 = pQVar35->y;
          fStack_38 = pQVar35->z;
          fStack_39 = pQVar35->w;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             ((Vector3 *)(auStack_28 + 4),(MethodInfo *)0x0);
        }
        else {
          if (((e == (EditorStateMachine *)0x0) ||
              (pMVar33 = (e->fields).weCamera, pMVar33 == (MainCameraManager *)0x0)) ||
             (pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pMVar33,(MethodInfo *)0x0),
             pTVar34 == (Transform *)0x0)) goto code_?;
          pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_28,pTVar34,(MethodInfo *)0x0);
          fStack_36 = pQVar35->x;
          fStack_37 = pQVar35->y;
          fStack_38 = pQVar35->z;
          fStack_39 = pQVar35->w;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                             ((Vector3 *)(auStack_28 + 4),(MethodInfo *)0x0);
          VStack_29.y = pVVar27->x;
          VStack_29.z = pVVar27->y;
          fVar24 = pVVar27->z;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          rotation_00.y = fStack_37;
          rotation_00.x = fStack_36;
          rotation_00.z = fStack_38;
          rotation_00.w = fStack_39;
          point_00.z = fVar24;
          point_00.x = VStack_29.y;
          point_00.y = VStack_29.z;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             ((Vector3 *)(auStack_28 + 4),rotation_00,point_00,(MethodInfo *)0x0);
          MathFunctions::MathFunctions_Yaw(*pVVar27,(MethodInfo *)0x0);
          func_?();
          pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)auStack_28,(MethodInfo *)0x0);
          fStack_15 = pQVar35->x;
          fStack_16 = pQVar35->y;
          fStack_17 = pQVar35->z;
          fStack_18 = pQVar35->w;
          func_?();
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)(auStack_28 + 4),(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar27->x;
          uStack_23._4_4_ = pVVar27->y;
          fVar24 = pVVar27->z;
          fStack_36 = fStack_15;
          fStack_37 = fStack_16;
          fStack_38 = fStack_17;
          fStack_39 = fStack_18;
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             ((Vector3 *)(auStack_28 + 4),(MethodInfo *)0x0);
        }
        VStack_29.y = pVVar27->x;
        VStack_29.z = pVVar27->y;
        fVar30 = pVVar27->z;
        if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
          func_?();
        }
        pos_00.z = fVar24;
        pos_00.x = (float)(undefined4)uStack_23;
        pos_00.y = (float)uStack_23._4_4_;
        q_00.y = fStack_37;
        q_00.x = fStack_36;
        q_00.z = fStack_38;
        q_00.w = fStack_39;
        s_00.z = fVar30;
        s_00.x = VStack_29.y;
        s_00.y = VStack_29.z;
        pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                           ((Matrix4x4 *)&stack0xfffffe84,pos_00,q_00,s_00,(MethodInfo *)0x0);
        fStack_12 = pMVar40->m00;
        fStack_41 = pMVar40->m10;
        fStack_42 = pMVar40->m20;
        fStack_43 = pMVar40->m30;
        fStack_44 = pMVar40->m01;
        fStack_45 = pMVar40->m11;
        fStack_46 = pMVar40->m21;
        fStack_47 = pMVar40->m31;
        fStack_48 = pMVar40->m02;
        fStack_49 = pMVar40->m12;
        fStack_50 = pMVar40->m22;
        fStack_51 = pMVar40->m32;
        fStack_52 = pMVar40->m03;
        fStack_53 = pMVar40->m13;
        fStack_54 = pMVar40->m23;
        fStack_55 = pMVar40->m33;
        pLVar19 = (this->fields).translateDatas;
        if ((pLVar19 != (List_1_TranslateData_ *)0x0) &&
           (pIVar56 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,
                                 targetIndex,
                                 MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                ), pIVar56 != (IEventSystemHandler *)0x0)) {
          puVar22 = (undefined8 *)func_?();
          VStack_29._4_8_ = *puVar22;
          fVar24 = *(float *)(puVar22 + 1);
          pLVar19 = (this->fields).translateDatas;
          if (pLVar19 != (List_1_TranslateData_ *)0x0) {
            pIVar56 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,
                                 targetIndex,
                                 MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                );
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pSVar25 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if (pSVar25 != (SpawnRoleDataMediator *)0x0) {
              pSVar26 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                        PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar25,
                                   (MethodInfo *)0x0);
              pVVar27 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                       SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                       SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                 ((Vector3 *)(auStack_28 + 4),pSVar26,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                 );
              uStack_23._0_4_ = pVVar27->x;
              uStack_23._4_4_ = pVVar27->y;
              fVar30 = pVVar27->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.z = fVar24;
              a.x = VStack_29.y;
              a.y = VStack_29.z;
              pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)(auStack_28 + 4),a,uStack_32._4_4_,(MethodInfo *)0x0);
              a_00.z = fVar30;
              a_00.x = (float)(undefined4)uStack_23;
              a_00.y = (float)uStack_23._4_4_;
              pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)(auStack_28 + 4),a_00,*pVVar27,(MethodInfo *)0x0);
              pMVar57 = (MonitorData *)pVVar27->z;
              if (pIVar56 != (IEventSystemHandler *)0x0) {
                *(undefined8 *)&pIVar56[1].monitor = *(undefined8 *)pVVar27;
                pIVar56[2].monitor = pMVar57;
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((this->fields).fixedToYPlane == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_29,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar27->x;
      uStack_32._4_4_ = pVVar27->y;
      fVar24 = pVVar27->z;
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar33 = (e->fields).weCamera, pMVar33 == (MainCameraManager *)0x0)) ||
         (pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pMVar33,(MethodInfo *)0x0), pTVar34 == (Transform *)0x0))
      goto code_?;
      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)auStack_28,pTVar34,(MethodInfo *)0x0);
      auStack_28._0_4_ = pQVar35->x;
      auStack_28._4_4_ = pQVar35->y;
      fStack_58 = pQVar35->z;
      fStack_59 = pQVar35->w;
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         (&VStack_29,(MethodInfo *)0x0);
      uStack_23._0_4_ = pVVar27->x;
      uStack_23._4_4_ = pVVar27->y;
      fVar30 = pVVar27->z;
      if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
        func_?();
      }
      fVar60 = (float)uStack_23;
      fVar61 = (float)((ulonglong)uStack_23 >> 0x20);
      uVar62 = uStack_32;
    }
    else {
      if (((e == (EditorStateMachine *)0x0) ||
          (pMVar33 = (e->fields).weCamera, pMVar33 == (MainCameraManager *)0x0)) ||
         (pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pMVar33,(MethodInfo *)0x0), pTVar34 == (Transform *)0x0))
      goto code_?;
      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)auStack_28,pTVar34,(MethodInfo *)0x0);
      auStack_28._0_4_ = pQVar35->x;
      auStack_28._4_4_ = pQVar35->y;
      fStack_58 = pQVar35->z;
      fStack_59 = pQVar35->w;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         (&VStack_29,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar27->x;
      uStack_32._4_4_ = pVVar27->y;
      fVar24 = pVVar27->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      rotation.y = (float)auStack_28._4_4_;
      rotation.x = (float)auStack_28._0_4_;
      rotation.z = fStack_58;
      rotation.w = fStack_59;
      point.z = fVar24;
      point.x = (float)(undefined4)uStack_32;
      point.y = uStack_32._4_4_;
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_29,rotation,point,(MethodInfo *)0x0);
      MathFunctions::MathFunctions_Yaw(*pVVar27,(MethodInfo *)0x0);
      func_?();
      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)auStack_28,(MethodInfo *)0x0);
      fStack_4 = pQVar35->x;
      fStack_5 = pQVar35->y;
      fStack_6 = pQVar35->z;
      fStack_7 = pQVar35->w;
      func_?();
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_29,(MethodInfo *)0x0);
      uStack_23._0_4_ = pVVar27->x;
      uStack_23._4_4_ = pVVar27->y;
      fVar24 = pVVar27->z;
      auStack_28._0_4_ = fStack_4;
      auStack_28._4_4_ = fStack_5;
      fStack_58 = fStack_6;
      fStack_59 = fStack_7;
      pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         (&VStack_29,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar27->x;
      uStack_32._4_4_ = pVVar27->y;
      fVar30 = pVVar27->z;
      if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
        func_?();
      }
      fVar60 = (float)uStack_32;
      fVar61 = (float)((ulonglong)uStack_32 >> 0x20);
      uVar62 = uStack_23;
    }
    pos.z = fVar24;
    pos.x = (float)(int)uVar62;
    pos.y = (float)(int)((ulonglong)uVar62 >> 0x20);
    q.y = (float)auStack_28._4_4_;
    q.x = (float)auStack_28._0_4_;
    q.z = fStack_58;
    q.w = fStack_59;
    s.y = fVar61;
    s.x = fVar60;
    s.z = fVar30;
    pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       ((Matrix4x4 *)&stack0xfffffe84,pos,q,s,(MethodInfo *)0x0);
    fStack_1 = pMVar40->m00;
    fStack_63 = pMVar40->m10;
    fStack_64 = pMVar40->m20;
    fStack_65 = pMVar40->m30;
    fStack_66 = pMVar40->m01;
    fStack_67 = pMVar40->m11;
    fStack_68 = pMVar40->m21;
    fStack_69 = pMVar40->m31;
    fStack_70 = pMVar40->m02;
    fStack_71 = pMVar40->m12;
    fStack_72 = pMVar40->m22;
    fStack_73 = pMVar40->m32;
    fStack_74 = pMVar40->m03;
    fStack_75 = pMVar40->m13;
    fStack_76 = pMVar40->m23;
    fStack_77 = pMVar40->m33;
    fStack_78 = fStack_70;
    VStack_79.x = fStack_71;
    VStack_79.y = fStack_72;
    VStack_79.z = fStack_73;
    fStack_80 = fStack_74;
    fStack_81 = fStack_75;
    fStack_82 = fStack_76;
    fStack_83 = fStack_77;
    fStack_36 = fStack_66;
    fStack_37 = fStack_67;
    fStack_38 = fStack_68;
    fStack_39 = fStack_69;
    auStack_28._0_4_ = fStack_1;
    auStack_28._4_4_ = fStack_63;
    fStack_58 = fStack_64;
    fStack_59 = fStack_65;
    if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
      func_?();
    }
    m.m10 = (float)auStack_28._4_4_;
    m.m00 = (float)auStack_28._0_4_;
    m.m20 = fStack_58;
    m.m30 = fStack_59;
    m.m01 = fStack_36;
    m.m11 = fStack_37;
    m.m21 = fStack_38;
    m.m31 = fStack_39;
    m.m02 = fStack_78;
    m.m12 = VStack_79.x;
    m.m22 = VStack_79.y;
    m.m32 = VStack_79.z;
    m.m03 = fStack_80;
    m.m13 = fStack_81;
    m.m23 = fStack_82;
    m.m33 = fStack_83;
    pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_Inverse
                       ((Matrix4x4 *)&stack0xfffffe84,m,(MethodInfo *)0x0);
    index = 0;
    fStack_1 = pMVar40->m00;
    fStack_63 = pMVar40->m10;
    fStack_64 = pMVar40->m20;
    fStack_65 = pMVar40->m30;
    fStack_66 = pMVar40->m01;
    fStack_67 = pMVar40->m11;
    fStack_68 = pMVar40->m21;
    fStack_69 = pMVar40->m31;
    fStack_70 = pMVar40->m02;
    fStack_71 = pMVar40->m12;
    fStack_72 = pMVar40->m22;
    fStack_73 = pMVar40->m32;
    fStack_74 = pMVar40->m03;
    fStack_75 = pMVar40->m13;
    fStack_76 = pMVar40->m23;
    fStack_77 = pMVar40->m33;
    pLVar19 = (this->fields).translateDatas;
    if (pLVar19 != (List_1_TranslateData_ *)0x0) {
      while( true ) {
        pOVar84 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar19,
                             MethodInfo__System__Collections__Generic__List<TranslateData>__get_Count__
                            );
        if ((int)pOVar84 <= index) {
          (this->fields).recalcLocalDirCamToObjects = 0;
          goto code_?;
        }
        pLVar19 = (this->fields).translateDatas;
        if (pLVar19 == (List_1_TranslateData_ *)0x0) break;
        pIVar56 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,index,
                             MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                            );
        pLVar19 = (this->fields).translateDatas;
        if (((pLVar19 == (List_1_TranslateData_ *)0x0) ||
            (pTVar20 = (TranslateData *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<TranslateData>__get_Item_int_
                                 ), pTVar20 == (TranslateData *)0x0)) ||
           (pMVar21 = TranslateData::TranslateData_get_Wo(pTVar20,(MethodInfo *)0x0),
           pMVar21 == (MVWorldObjectClient *)0x0)) break;
        puVar22 = (undefined8 *)(*(code *)(pMVar21->klass->vtable).get_WorldPosition_1.method)();
        VStack_29._4_8_ = *puVar22;
        uStack_32 = CONCAT44(*(undefined4 *)(puVar22 + 1),(undefined4)uStack_32);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pSVar25 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar25 == (SpawnRoleDataMediator *)0x0) break;
        pOVar84 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                  PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                            ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar25,
                             (MethodInfo *)0x0);
        puVar22 = (undefined8 *)
                  func_?(&fStack_81,pOVar84,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                 );
        uStack_23 = *puVar22;
        fVar24 = *(float *)(puVar22 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_01.z = uStack_32._4_4_;
        a_01.x = VStack_29.y;
        a_01.y = VStack_29.z;
        b.z = fVar24;
        b.x = (float)(undefined4)uStack_23;
        b.y = (float)uStack_23._4_4_;
        pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&VStack_79,a_01,b,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar27->x;
        uStack_9._4_4_ = pVVar27->y;
        fStack_8 = pVVar27->z;
        func_?(&fStack_37,&uStack_9);
        pIVar85 = (IEventSystemHandler *)func_?();
        pIVar86 = pIVar85[1].klass;
        if (pIVar56 == (IEventSystemHandler *)0x0) break;
        pIVar56[6] = *pIVar85;
        index = index + 1;
        pIVar56[7].klass = pIVar86;
        pLVar19 = (this->fields).translateDatas;
        if (pLVar19 == (List_1_TranslateData_ *)0x0) break;
      }
    }
  }
code_?:
  func_?(0);
  pcVar87 = (code *)swi(3);
  (*pcVar87)();
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (wos == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)wos,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
  if (pOVar8 == (Object *)0x1) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar9 == (GameEventManager *)0x0) ||
       (pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode,
       pGVar10 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar10->fields).LaserCommands;
    pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)wos,0,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
    if (pIVar11 == (IEventSystemHandler *)0x0) goto code_?;
    pVVar12 = (Vector3 *)
             (*(code *)pIVar11->klass[2]._0.nestedTypes)
                       (auStack_13 + 4,pIVar11,pIVar11->klass[2]._0.implementedInterfaces);
  }
  else {
    this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_13,
                        (List_1_UnityEngine_Color32_ *)wos,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar14->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.monitor =
           (MonitorData *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_6;
      cVar15 = func_?();
      if (cVar15 == '\0') break;
      this_02 = (PrefabPool *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if ((this_02 == (PrefabPool *)0x0) ||
         (item = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0),
         this_01 == (List_1_UnityEngine_Vector4_ *)0x0)) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                );
    }
    wos = (List_1_MVWorldObjectClient_ *)0x0;
    *puStack_7 = 0x72;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar9 == (GameEventManager *)0x0) ||
       (pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode,
       pGVar10 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) goto code_?;
    this_00 = (pGVar10->fields).LaserCommands;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar12 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       ((Vector3 *)(auStack_13 + 0x10),(List_1_UnityEngine_Transform_ *)this_01,
                        (MethodInfo *)0x0);
    wos = (List_1_MVWorldObjectClient_ *)0x0;
  }
  if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
              (this_00,*pVVar12,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?(0);
  func_?(wos,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* ESTranslate() */

void Assembly-CSharp.dll::ESTranslate::ESTranslate__ctor(ESTranslate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).stickyModifier = 0.2;
  (this->fields).completelyStuckLimit = 0.3;
  (this->fields).recalcLocalDirCamToObjects = 1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<TranslateData>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<TranslateData>__List__);
  (this->fields).translateDatas = (List_1_TranslateData_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targets = (List_1_MVWorldObjectClient_ *)pLVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields).originPrevFrame.x = pVVar2->x;
  (this->fields).originPrevFrame.y = fVar3;
  (this->fields).originPrevFrame.z = fVar4;
  (this->fields).playTranslateSounds = 1;
  (this->fields).fixedToYPlane = 1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

