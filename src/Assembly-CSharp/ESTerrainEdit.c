
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Enter
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (1,(MethodInfo *)0x0);
  if ((e != (EditorStateMachine *)0x0) &&
     (pSVar1 = (e->fields).selectionController, pSVar1 != (SelectionController *)0x0)) {
    pMVar2 = SelectionController::SelectionController_get_SingleSelectedWO(pSVar1,(MethodInfo *)0x0)
    ;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pSVar1 = (e->fields).selectionController;
      if (pSVar1 == (SelectionController *)0x0) goto code_?;
      SelectionController::SelectionController_DeSelectAll(pSVar1,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      targetCubeModel =
           (MVCubeModelPrototypeTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (this_01,
                      MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                     );
      (this->fields).terrain = targetCubeModel;
      this_00 = (e->fields).cubeModelingStateMachine;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_00,(MVCubeModelBase *)targetCubeModel,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar3 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields)._.tintedWo = pWVar3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = e;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff5c,0,0x2c);
  func_?(&stack0xffffff98,0,0x48);
  bStack_1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                       ((VoxelHit *)&stack0xffffff98,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                        (MethodInfo *)0x0);
  pIVar2 = in_stack_3;
  if (bStack_1 != 0) {
    pMVar4 = (this->fields).terrain;
    if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0);
    if ((in_stack_3 == pIVar5) || (in_stack_3 == (IList_1_VoxelHit_ *)0xffffffff)) {
      bStack_1 = 0;
    }
  }
  bVar6 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                    ((int32_t)in_stack_3,(MethodInfo *)0x0);
  if (this == (ESTerrainEdit *)0x0) goto code_?;
  hit.point.y = in_stack_7;
  hit.point.x = in_stack_8;
  hit.point.z = fStack_9;
  hit.normal.x = fStack_10;
  hit.normal.y = fStack_11;
  hit.normal.z = (float)uStack_12;
  hit.cubePos.x = (int16_t)in_stack_13;
  hit.cubePos.y = SUB42(in_stack_13,2);
  hit._28_4_ = in_stack_14;
  hit.face = (int32_t)in_stack_15;
  hit._36_4_ = pIVar2;
  hit.woId = (int32_t)in_stack_16;
  hit.cube = (Cube *)in_stack_17;
  hit.distance = (float)in_stack_18;
  hit.collider = (Collider *)in_stack_19;
  hit.transform = (Transform *)in_stack_20;
  hit._60_4_ = in_stack_21;
  hit.interactionFlags._0_4_ = in_stack_22;
  hit.interactionFlags._4_4_ = 0;
  ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
            ((ESStateBase *)this,e,bStack_1 & bVar6,hit,(MethodInfo *)in_stack_23);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar24 = (Cube *)0x5;
  this_07 = (SelectionController *)&UNK_?;
  bVar25 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar25 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar26 = (Transform *)0x0;
    pCVar27 = (Collider *)0x6;
    puVar28 = &UNK_?;
    bVar25 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
    if (bVar25 != 0) goto code_?;
  }
  else {
code_?:
    if ((e == (EditorStateMachine *)0x0) ||
       (this_07 = (e->fields).selectionController, this_07 == (SelectionController *)0x0))
    goto code_?;
    pTVar26 = (Transform *)0x0;
    pCVar27 = (Collider *)0xfffffffb;
    puVar28 = (undefined *)0x1;
    pCVar24 = (Cube *)0x0;
    in_stack_15 = &UNK_?;
    this_01 = SelectionController::SelectionController_Select(this_07,0,1,-5,(MethodInfo *)0x0);
    if ((bVar6 != 0) && (this_01 != (WorldObjectClientRef *)0x0)) {
      in_stack_22 = &UNK_?;
      pMVar29 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         ((WorldObjectClientRef_1_MVRoundCube_ *)this_01,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pMVar29 != (MVRoundCube *)0x0) goto code_?;
    }
  }
  targetHit.interactionFlags._0_4_ = in_stack_22;
  targetHit._60_4_ = in_stack_21;
  targetHit.point.y = in_stack_7;
  targetHit.point.x = in_stack_8;
  targetHit.point.z = fStack_9;
  targetHit.normal.x = fStack_10;
  targetHit.normal.y = fStack_11;
  targetHit.normal.z = (float)uStack_12;
  targetHit.cubePos.x = (int16_t)in_stack_13;
  targetHit.cubePos.y = SUB42(in_stack_13,2);
  targetHit._28_4_ = in_stack_14;
  targetHit.face = (int32_t)in_stack_15;
  targetHit._36_4_ = this_07;
  targetHit.woId = (int32_t)pCVar24;
  targetHit.cube = (Cube *)puVar28;
  targetHit.distance = (float)pCVar27;
  targetHit.collider = (Collider *)pTVar26;
  targetHit.transform = (Transform *)in_stack_20;
  targetHit.interactionFlags._4_4_ = 0;
  bVar25 = ESTerrainEdit_ResettingTerrain(this,targetHit,(MethodInfo *)in_stack_30);
  if (bVar25 != 0) {
    return;
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (pCVar31 = (e->fields).cubeModelingStateMachine, pCVar31 != (CubeModelingStateMachine *)0x0)) {
    (*(code *)(pCVar31->klass->vtable).Update.method)();
    if (in_stack_3 != (IList_1_VoxelHit_ *)0x0) {
      pMVar4 = (this->fields).terrain;
      if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0)
      ;
      if ((in_stack_3 != pIVar2) && (bVar6 != 0)) {
        pCVar31 = (e->fields).cubeModelingStateMachine;
        if (pCVar31 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (pCVar31,0,(MethodInfo *)0x0);
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = (MVBuildModeAvatarLocal_EditMode *)
              MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 != (MVBuildModeAvatarLocal_EditMode *)0x0) {
      pEVar32 = (EditorStateMachine *)&UNK_?;
      bVar6 = MVBuildModeAvatarLocal+EditMode::
              MVBuildModeAvatarLocal_EditMode_get_MovementConstrained(this_02,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      func_?();
      e = _UNK_?;
      bVar6 = EditModeObjectPicker::EditModeObjectPicker_Pick
                        ((VoxelHit *)&stack0xffffff98,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                         (MethodInfo *)0x0);
      if (bVar6 != 0) {
        e = pEVar32;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_03 != (MainCameraManager *)0x0) {
        this_04 = (Camera *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar33 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition
                            ((Vector3 *)&stack0xffffffec,(StandaloneInput *)0x0,
                             (MethodInfo *)this_02);
        if (this_04 != (Camera *)0x0) {
          pRVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                              ((Ray *)&stack0xffffffe0,this_04,*pVVar33,(MethodInfo *)0x0);
          VVar35 = pRVar34->m_Origin;
          fVar36 = (pRVar34->m_Direction).x;
          uVar37 = (pRVar34->m_Direction).z;
          iVar38 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
          ray.m_Direction.x = fVar36;
          ray.m_Origin = VVar35;
          ray.m_Direction.y = 0.0;
          ray.m_Direction.z = (float)uVar37;
          UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                    (ray,(RaycastHit *)&stack0xffffff5c,INFINITY,1 << ((byte)iVar38 & 0x1f),
                     (MethodInfo *)0x0);
          x = (Object_1 *)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            return;
          }
          this_05 = (Component_1 *)func_?();
          if ((this_05 != (Component_1 *)0x0) &&
             (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject(this_05,(MethodInfo *)0x0),
             this_06 != (GameObject *)0x0)) {
            x_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_29
                             (this_06,
                              LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                             );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              return;
            }
            fVar36 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]
                     ::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                                 *)&stack0xffffff5c,(MethodInfo *)0x0);
            if ((float)e <= fVar36) {
              return;
            }
code_?:
            value = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Exit
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
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
    if ((e != (EditorStateMachine *)0x0) &&
       (this_01 = (ESStateBase *)(e->fields).selectionController, this_01 != (ESStateBase *)0x0)) {
      this_02 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
      if (this_02 !=
          (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
          0x0) {
        JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (this_02,
                           MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
        if (JVar3 == JsonSchemaType__Enum_None) {
          ESStateBase::ESStateBase_DeTintCurrent(this_01,(MethodInfo *)0x0);
        }
        pCVar4 = (e->fields).cubeModelingStateMachine;
        if (pCVar4 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar4,(MethodInfo *)0x0)
          ;
          pCVar4 = (e->fields).cubeModelingStateMachine;
          if (pCVar4 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar4,(MethodInfo *)0x0);
            this_01[1].klass = (ESStateBase__Class *)0x0;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean ResettingTerrain(VoxelHit) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_ResettingTerrain
               (ESTerrainEdit *this,VoxelHit targetHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (targetHit._36_4_ == -1) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar2,targetHit._36_4_,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObject *)0x0) {
      return 0;
    }
    pOVar3 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    if ((pOVar3 != (Object *)0x20) &&
       (pOVar3 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                             *)this_00,(MethodInfo *)0x0), pOVar3 != (Object *)0x8)) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MVCubeModelPrototypeTerrain *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                          (pMVar2,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
         (this_02 = (MVCubeModelFineGrainedTerrain *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                              (pMVar2,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), this_01 != (MVCubeModelPrototypeTerrain *)0x0)) {
        bVar1 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
                          (this_01,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (this_02 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
          bVar1 = MVCubeModelFineGrainedTerrain::
                  MVCubeModelFineGrainedTerrain_get_RequiresResetToEdit(this_02,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return 0;
          }
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((this_03 != (MVNetworkGame *)0x0) &&
            (this_04 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                        *)CloudyTheme::CloudyTheme_get_Identifier
                                    ((CloudyTheme *)this_03,(MethodInfo *)0x0),
            this_04 !=
            (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)0x0)) &&
           (this_05 = (RuntimeEventManager *)
                      System.dll::System::Collections::Generic::
                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                      ::Single,System::Object]::
                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                (this_04,(MethodInfo *)0x0), this_05 != (RuntimeEventManager *)0x0))
        {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_05,(MethodInfo *)0x0);
          this_06 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_06 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestResetTerrain
                      (this_06,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}

