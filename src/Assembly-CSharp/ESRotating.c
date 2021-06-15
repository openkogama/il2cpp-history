
/* Void DoGridSnapping() */

void Assembly-CSharp.dll::ESRotating::ESRotating_DoGridSnapping(ESRotating *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffffa8, puStack_4 = &stack0xffffffa8,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar8 != (IEditModeUI *)0x0) {
    cVar9 = func_?(0,TypeInfo__IEditModeUI);
    uStack_10 = _UNK_?;
    if (cVar9 == '\0') {
      uStack_10 = _UNK_?;
    }
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).targets;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         (&LStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar11->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar11->current).rgba;
      uStack_1 = 0;
      while( true ) {
        cVar9 = func_?();
        if (cVar9 == '\0') {
          *puStack_7 = 0x83;
          uStack_1 = 0xffffffff;
          func_?(&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (WorldObjectClientRef_1_MVRoundCube_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                            );
        if (this_01 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) break;
        pMVar13 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           (this_01,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pMVar13 != (MVRoundCube *)0x0) {
          func_?();
          func_?(&LStack_12.next,0x3e,pMVar13,uStack_10);
          func_?(0x1d,pMVar13);
        }
      }
    }
  }
  func_?();
  func_?(0,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Type *)0x0) {
    pOVar5 = (Object *)(*(code *)(pTVar4->klass->vtable).ToString.method)();
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar6 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar5,(MethodInfo *)0x0);
    this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_02,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__)
    ;
    (this->fields).targets = (List_1_WorldObjectClientRef_ *)this_02;
    if (e != (EditorStateMachine *)0x0) {
      this_00 = (e->fields).networkSelector;
      pSVar7 = (e->fields).selectionController;
      if ((pSVar7 != (SelectionController *)0x0) &&
         (selectionSet = (HashSet_1_System_Int32_ *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pSVar7,pMVar6),
         this_00 != (MVNetworkSelector *)0x0)) {
        bVar8 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                          (this_00,selectionSet,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (e->fields)._.data;
        if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)this_01,
                                 (Type *)StringLiteral_rotationDegreesStep,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), pPVar9 != (Pool *)0x0)) {
          if ((pPVar9->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar10 = (float *)func_?();
          (this->fields).rotationSpeed = *pfVar10;
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                    StandaloneInput_MousePosition
                              ((Vector3 *)&stack0xffffffc0,(StandaloneInput *)0x0,in_stack_12)
          ;
          uVar13 = pVVar11->x;
          (this->fields).prevMouseX = (float)uVar13;
          pMVar6 = (MethodInfo *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    ((List_1_UnityEngine_Vector4_ *)pMVar6,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
          ;
          pSVar7 = (e->fields).selectionController;
          if ((pSVar7 != (SelectionController *)0x0) &&
             (this_03 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items
                                  ((Collection_1_VoxelHit_ *)pSVar7,in_stack_14),
             this_03 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
            method_01 = (MethodInfo *)&stack0xffffffbc;
            pHVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::
                      MetaData::FirstTimeEvent]::
                      HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                                ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                                 method_01,this_03,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                );
            method_00 = (MethodInfo *)pHVar15->stamp;
            uStack_1 = 0;
            while (cVar16 = func_?(), cVar16 != '\0') {
              pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   &stack0xffffffa0,
                                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                                  );
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
              this_05 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (this_04,(int32_t)pOVar5,(MethodInfo *)0x0);
              pLVar17 = (this->fields).targets;
              if ((pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) ||
                 (mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)pLVar17,(UIPushOption__Enum)this_05,
                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                            ), this_05 == (WorldObjectClientRef *)0x0)) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              this_06 = (PrefabPool *)
                        WorldObjectClientRef`1[MVRoundCube]::
                        WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_MVRoundCube_ *)this_05,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  );
              if ((this_06 == (PrefabPool *)0x0) ||
                 (item = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_06,method_01),
                 pMVar6 == (MethodInfo *)0x0)) goto code_?;
              method_01 = pMVar6;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pMVar6,(UIPushOption__Enum)item,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                        );
            }
            uStack_1 = 0xffffffff;
            func_?(&stack0xffffffa0,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                           );
            pLVar17 = (this->fields).targets;
            if (pLVar17 != (List_1_WorldObjectClientRef_ *)0x0) {
              pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pLVar17,
                                   MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                                  );
              if (pOVar5 == (Object *)0x1) {
                pLVar17 = (this->fields).targets;
                if (((pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) ||
                    (this_07 = (WorldObjectClientRef_1_MVRoundCube_ *)
                               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar17,0,
                                          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                                         ), this_07 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0))
                   || (pMVar18 = WorldObjectClientRef`1[MVRoundCube]::
                                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                           (this_07,
                                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                           ), pMVar18 == (MVRoundCube *)0x0)) goto code_?;
                pVVar11 = (Vector3 *)func_?(&stack0xffffffc0);
              }
              else {
                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                  func_?(TypeInfo__SharedCubeFunctions);
                }
                pVVar11 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                                    ((Vector3 *)&stack0xffffffb0,
                                     (List_1_UnityEngine_Transform_ *)pMVar6,(MethodInfo *)0x0);
              }
              fVar19 = pVVar11->y;
              fVar20 = pVVar11->z;
              (this->fields).pivot.x = pVVar11->x;
              (this->fields).pivot.y = fVar19;
              (this->fields).pivot.z = fVar20;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar21 != (GameEventManager *)0x0) &&
                  (pGVar22 = (pGVar21->fields).AvatarCommandsBuildMode,
                  pGVar22 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                 (pGVar23 = (pGVar22->fields).LaserCommands,
                 pGVar23 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                          (pGVar23,LaserPointerState__Enum_Transforming,(MethodInfo *)0x0);
                pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar21 != (GameEventManager *)0x0) &&
                    (pGVar22 = (pGVar21->fields).AvatarCommandsBuildMode,
                    pGVar22 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar23 = (pGVar22->fields).LaserCommands,
                   pGVar23 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *
                             )0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                            (pGVar23,1,method_00);
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
code_?:
  uVar24 = func_?();
  func_?(uVar24);
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Execute
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (MethodInfo *)&stack0xfffffffc;
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xfffffe90;
  pMVar7 = (MethodInfo *)&stack0xfffffffc;
  method_00 = in_stack_8;
  puVar9 = &stack0xfffffffc;
  puVar10 = &stack0xfffffe90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pMVar7 = pMVar2;
    method_00 = in_stack_8;
    puVar9 = puStack_1;
    puVar10 = puStack_6;
  }
  puStack_6 = puVar10;
  puStack_1 = puVar9;
  iStack_11 = 0;
  auStack_12._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_12._4_4_ = (MonitorData *)0x0;
  auStack_12._8_4_ = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  auStack_12._12_4_ = (Object *)0x0;
  func_?();
  iStack_13 = -1;
  puStack_14 = &stack0xfffffe90;
  puStack_6 = &stack0xfffffe90;
  bVar15 = ESRotating_ValidateTargets(this,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = (MethodInfo *)0x5;
    bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      uStack_16 = (double)CONCAT44((this->fields).xAcc,(undefined4)uStack_16);
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        pMVar7 = (MethodInfo *)&UNK_?;
        func_?();
      }
      pVVar17 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                StandaloneInput_MousePosition(&VStack_18,(StandaloneInput *)0x0,pMVar2);
      auStack_12._16_4_ = pVVar17->x;
      auStack_12._20_4_ = pVVar17->y;
      ppIStack_19 = (Il2CppType **)pVVar17->z;
      _Stack_80 = _UNK_?;
      uStack_20 = _UNK_?;
      fVar21 = ((float)auStack_12._16_4_ - (this->fields).prevMouseX) *
               ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + uStack_16._4_4_;
      do {
        (this->fields).xAcc = fVar21;
        uStack_16 = (double)CONCAT44(fVar21,(undefined4)uStack_16);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
          fVar21 = uStack_16._4_4_;
        }
        fVar21 = (float)(double)CONCAT44((uint)((ulonglong)(double)fVar21 >> 0x20) & uStack_20,
                                         SUB84((double)fVar21,0) & (uint)_Stack_80.genericMethod);
        pfVar22 = &(this->fields).rotateThreshold;
        if (fVar21 < *pfVar22 || fVar21 == *pfVar22) {
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar17 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                    StandaloneInput_MousePosition
                              ((Vector3 *)(auStack_12 + 0x10),(StandaloneInput *)0x0,pMVar7);
          VStack_18.x = pVVar17->x;
          VStack_18.y = pVVar17->y;
          (this->fields).prevMouseX = VStack_18.x;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar23 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          if (((pGVar23 == (GameEventManager *)0x0) ||
              (pGVar24 = (pGVar23->fields).AvatarCommandsBuildMode,
              pGVar24 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
             (this_00 = (pGVar24->fields).LaserCommands,
             this_00 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
             ) goto code_?;
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                    (this_00,(this->fields).pivot,(MethodInfo *)0x0);
          goto code_?;
        }
        pLVar25 = (this->fields).targets;
        if ((pLVar25 == (List_1_WorldObjectClientRef_ *)0x0) ||
           (pMVar7 = (MethodInfo *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar25,0,
                                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                                ), pMVar7 == (MethodInfo *)0x0)) goto code_?;
        pMVar26 = WorldObjectClientRef`1[MVRoundCube]::
                  WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                            ((WorldObjectClientRef_1_MVRoundCube_ *)pMVar7,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        fStack_27 = (this->fields).xAcc;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          method_00 = (MethodInfo *)&UNK_?;
          func_?();
        }
        pLVar25 = (this->fields).targets;
        fStack_27 = fStack_27 /
                    (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_27 >> 0x20) & uStack_20
                                            ,SUB84((double)fStack_27,0) &
                                             (uint)_Stack_80.genericMethod);
        uStack_28 = CONCAT44(fStack_27,(undefined4)uStack_28);
        uStack_16 = (double)((ulonglong)uStack_16 & 0xffffffff);
        if (pLVar25 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        pOVar29 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar25,
                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                            );
        if (pOVar29 == (Object *)0x1) {
          if (pMVar26 == (MVRoundCube *)0x0) goto code_?;
          pVVar17 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                              (aVStack_30,(MVWorldObjectClient *)pMVar26,pMVar7);
          method_00 = (MethodInfo *)0x0;
          pVVar17 = MathFunctions::MathFunctions_RoundVector
                              (&VStack_31,*pVVar17,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
                    ((MVWorldObjectClient *)pMVar26,*pVVar17,(MethodInfo *)0x0);
          pVVar17 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                              (&VStack_32,(MVWorldObjectClient *)pMVar26,(MethodInfo *)0x0);
          VStack_18.x = pVVar17->x;
          VStack_18.y = pVVar17->y;
          register0x00001200 = (double)VStack_18.y;
          auStack_33._0_4_ = &UNK_?;
          fVar34 = (float10)func_?();
          uStack_16 = (double)(this->fields).rotationSpeed;
          uStack_35 = (double)fVar34;
          fVar34 = (float10)func_?();
          uStack_16 = (double)fVar34;
          dVar36 = mscorlib.dll::System::Math::Math_Round_4(uStack_16,0,(MethodInfo *)0x0);
          uStack_16._0_4_ = SUB84(dVar36,0);
          uStack_16 = (double)CONCAT44((float)dVar36,(undefined4)uStack_16);
        }
        pLVar25 = (this->fields).targets;
        if (pLVar25 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        pOVar29 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar25,
                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                            );
        if (pOVar29 == (Object *)0x1) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                              (&VStack_37,(MethodInfo *)0x0);
          uStack_28._0_4_ = pVVar17->x;
          uStack_28._4_4_ = pVVar17->y;
          uStack_35 = (double)CONCAT44(pVVar17->z,(undefined4)uStack_35);
          if (pMVar26 == (MVRoundCube *)0x0) goto code_?;
          pMVar7 = (MethodInfo *)0x0;
          bVar15 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            ((MVWorldObjectClient *)pMVar26,InteractionFlags__Enum_CanRotateX,
                             (MethodInfo *)0x0);
          if (bVar15 == 0) {
            pMVar7 = (MethodInfo *)&UNK_?;
            bVar15 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              ((MVWorldObjectClient *)pMVar26,InteractionFlags__Enum_CanRotateY,
                               (MethodInfo *)0x0);
            if (bVar15 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                  (&VStack_38,(MethodInfo *)0x0);
              goto code_?;
            }
            bVar15 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              ((MVWorldObjectClient *)pMVar26,InteractionFlags__Enum_CanRotateZ,
                               (MethodInfo *)0x0);
            if (bVar15 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                                  (&VStack_39,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                                ((Vector3 *)auStack_33,(MethodInfo *)0x0);
code_?:
            uStack_28._0_4_ = pVVar17->x;
            uStack_28._4_4_ = pVVar17->y;
            uStack_35 = (double)CONCAT44(pVVar17->z,(undefined4)uStack_35);
          }
          pVVar17 = &(this->fields).pivot;
          method_00 = (MethodInfo *)pVVar17->x;
          axis.z = uStack_35._4_4_;
          axis.x = (float)(undefined4)uStack_28;
          axis.y = (float)uStack_28._4_4_;
          MVWorldObjectClient::MVWorldObjectClient_RotateAround
                    ((MVWorldObjectClient *)pMVar26,*pVVar17,axis,
                     (float)((uint)fStack_27 ^ _UNK_?) * (this->fields).rotationSpeed -
                     uStack_16._4_4_,(MethodInfo *)0x0);
          pQVar40 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                              ((Quaternion *)&stack0xfffffea8,(MVWorldObjectClient *)pMVar26,
                               (MethodInfo *)0x0);
          fStack_41 = pQVar40->x;
          VStack_38.x = pQVar40->y;
          VStack_38.y = pQVar40->z;
          VStack_38.z = pQVar40->w;
          pMStack_42 = pMVar26;
          auStack_33._4_4_ = 4.34403e-44;
          auStack_33._0_4_ = &UNK_?;
          func_?();
        }
        else {
          if ((this->fields).targets == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
          puVar43 = (undefined4 *)func_?();
          auStack_12._0_4_ = *puVar43;
          auStack_12._4_4_ = puVar43[1];
          auStack_12._8_4_ = puVar43[2];
          auStack_12._12_4_ = puVar43[3];
          uStack_3 = 0;
          while( true ) {
            pMVar7 = (MethodInfo *)auStack_12;
            cVar44 = func_?();
            iVar45 = iStack_13;
            if (cVar44 == '\0') break;
            this_01 = (WorldObjectClientRef_1_MVRoundCube_ *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                 auStack_12,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                                );
            if (this_01 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) goto code_?;
            pMVar26 = WorldObjectClientRef`1[MVRoundCube]::
                      WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                (this_01,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            auStack_12._16_4_ = (this->fields).pivot.x;
            auStack_12._20_4_ = (this->fields).pivot.y;
            uStack_35 = (double)CONCAT44((this->fields).pivot.z,(undefined4)uStack_35);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                (&VStack_46,(MethodInfo *)0x0);
            if (pMVar26 == (MVRoundCube *)0x0) goto code_?;
            pivot.z = uStack_35._4_4_;
            pivot.x = (float)auStack_12._16_4_;
            pivot.y = (float)auStack_12._20_4_;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround
                      ((MVWorldObjectClient *)pMVar26,pivot,*pVVar17,
                       (float)((uint)fStack_27 ^ _UNK_?) * (this->fields).rotationSpeed -
                       uStack_16._4_4_,method_00);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xfffffeb8,(MVWorldObjectClient *)pMVar26,
                       (MethodInfo *)0x0);
            func_?();
          }
          iVar47 = iStack_13 + 1;
          *(undefined4 *)(puStack_14 + iVar47 * 4) = 0x1d2;
          uStack_3 = 0xffffffff;
          uStack_28 = CONCAT44(iVar47,(undefined4)uStack_28);
          iStack_13 = iVar47;
          func_?(auStack_12,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                         );
          iVar48 = iStack_11;
          if (iStack_11 != 0) goto code_?;
          if (((iVar47 != -1) && (*(int *)(puStack_14 + iVar47 * 4) == 0x1d2)) &&
             (iStack_13 = iVar45, iVar47 < 0)) {
            iStack_13 = iVar47;
          }
        }
        fVar21 = (this->fields).xAcc - (this->fields).rotateThreshold * fStack_27;
      } while( true );
    }
  }
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
code_?:
    *unaff_FS_OFFSET = uStack_5;
    return;
  }
code_?:
  iVar48 = func_?();
code_?:
  func_?(iVar48);
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Exit
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_01 = (ESRotating *)(pGVar2->fields).LaserCommands, this_01 != (ESRotating *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                ((GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)this_01,0,
                 (MethodInfo *)0x0);
      ESRotating_DoGridSnapping(this_01,(MethodInfo *)0x0);
      if (this_01 != (ESRotating *)0x0) {
        this_02 = (MVNetworkSelector *)this_01[1].monitor;
        this_03 = (Collection_1_VoxelHit_ *)(this_01->fields).pivot.y;
        if (this_03 != (Collection_1_VoxelHit_ *)0x0) {
          selectionSet = (HashSet_1_System_Int32_ *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
          if (this_02 != (MVNetworkSelector *)0x0) {
            MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                      (this_02,selectionSet,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ValidateTargets() */

bool Assembly-CSharp.dll::ESRotating::ESRotating_ValidateTargets
               (ESRotating *this,MethodInfo *method)

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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).targets;
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
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_7.monitor = (MonitorData *)pLVar11->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    do {
      cVar13 = func_?();
      if (cVar13 == '\0') break;
      this_01 = (WorldObjectClientRef_1_MVRoundCube_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                          );
      if (this_01 == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) goto code_?;
      pMVar14 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         (this_01,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
    } while (pMVar14 != (MVRoundCube *)0x0);
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


/* ESRotating() */

void Assembly-CSharp.dll::ESRotating::ESRotating__ctor(ESRotating *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).rotationSpeed = 15.0;
  (this->fields).rotateThreshold = 10.0;
  (this->fields).mouseSensitivity = 10.0;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  (this->fields).targets = (List_1_WorldObjectClientRef_ *)this_00;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

