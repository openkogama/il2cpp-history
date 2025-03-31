
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Enter
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (1,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVCubeModelPrototypeTerrain *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      (this->fields).terrain = pMVar2;
      func_?(&(this->fields).terrain,pMVar2);
      this_00 = (e->fields).cubeModelingStateMachine;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_00,(MVCubeModelBase *)(this->fields).terrain,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar3 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields)._.tintedWo = pWVar3;
        func_?(&(this->fields)._.tintedWo,pWVar3);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *esm,MethodInfo *method)

{
  func_?(auStack_1,0,0x48);
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)auStack_1,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  iStack_3 = CONCAT31(iStack_3._1_3_,bVar2);
  if (bVar2 != 0) {
    pMVar4 = (this->fields).terrain;
    if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    if ((pMStack_5 == (MethodInfo *)(pMVar4->fields)._._._.id) ||
       (pMStack_5 == (MethodInfo *)0xffffffff)) {
      bVar2 = 0;
      iStack_3 = (uint)iStack_3._1_3_ << 8;
    }
  }
  bVar6 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                    ((int32_t)pMStack_5,(MethodInfo *)0x0);
  uVar7 = auStack_1._12_4_;
  uVar8 = auStack_1._8_4_;
  uVar9 = auStack_1._4_4_;
  iStack_10 = iStack_11;
  ppMVar12 = ppMStack_13;
  ppMVar14 = (MVInputWrapper__Class **)pCStack_15;
  method_00 = pMStack_16;
  puVar17 = (undefined *)auStack_1._32_4_;
  pCVar18 = (CubeModelingStateMachine *)auStack_1._36_4_;
  method_01 = pMStack_5;
  pCVar19 = pCStack_20;
  fVar21 = (float)auStack_1._16_4_;
  fVar22 = (float)auStack_1._20_4_;
  uVar23 = auStack_1._24_4_;
  uVar24 = auStack_1._28_4_;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    ppMVar14 = &TypeInfo__MVInputWrapper;
    func_?();
    ppMVar12 = &MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    ppMVar14 = (MVInputWrapper__Class **)&UNK_?;
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  this_00 = esm;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    hit.point.y = (float)uVar8;
    hit.point.x = (float)uVar9;
    hit.point.z = (float)uVar7;
    hit.normal.x = fVar21;
    hit.normal.y = fVar22;
    hit.normal.z = (float)uVar23;
    hit.cubePos.x = (int16_t)uVar24;
    hit.cubePos.y = SUB42(uVar24,2);
    hit._28_4_ = puVar17;
    hit.face = (int32_t)pCVar18;
    hit._36_4_ = method_01;
    hit.woId = (int32_t)pCVar19;
    hit.cube = (Cube *)ppMVar12;
    hit.distance = (float)ppMVar14;
    hit.collider = (Collider *)0x0;
    hit.transform = (Transform *)method_00;
    hit._60_4_ = (int)iStack_10;
    hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_10 >> 0x20);
    hit.interactionFlags._4_4_ = 0;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,esm,bVar6 & bVar2,hit,method_00);
  }
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
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar2 == 0) {
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
  }
  else {
code_?:
    if (bVar6 != 0) {
      if (this_00 == (EditorStateMachine *)0x0) goto code_?;
      this_01 = EditorStateMachine::EditorStateMachine_Select(this_00,0,-5,(MethodInfo *)0x0);
      if ((this_01 != (WorldObjectClientRef *)0x0) &&
         (pOVar25 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_01,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar25 != (Object *)0x0)) {
        esm = (EditorStateMachine *)0xc;
        pOVar25 = (Object *)func_?(TypeInfo__EditorEvent,&esm);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar25,(MethodInfo *)0x0);
        return;
      }
    }
  }
  targetHit.point.y = (float)auStack_1._8_4_;
  targetHit.point.x = (float)auStack_1._4_4_;
  targetHit.point.z = (float)auStack_1._12_4_;
  targetHit.normal.x = (float)auStack_1._16_4_;
  targetHit.normal.y = (float)auStack_1._20_4_;
  targetHit.normal.z = (float)auStack_1._24_4_;
  targetHit.cubePos.x = auStack_1._28_2_;
  targetHit.cubePos.y = auStack_1._30_2_;
  targetHit._28_4_ = auStack_1._32_4_;
  targetHit.face = auStack_1._36_4_;
  targetHit._36_4_ = pMStack_5;
  targetHit.woId = (int32_t)pCStack_20;
  targetHit.cube = (Cube *)ppMStack_13;
  targetHit.distance = (float)pCStack_15;
  targetHit.collider = (Collider *)pTStack_26;
  targetHit.transform = (Transform *)pMStack_16;
  targetHit._60_4_ = (int)iStack_11;
  targetHit.interactionFlags._0_4_ = (int)((ulonglong)iStack_11 >> 0x20);
  targetHit.interactionFlags._4_4_ = 0;
  bVar2 = ESTerrainEdit_ResettingTerrain(this,targetHit,method_01);
  if (bVar2 != 0) {
    return;
  }
  if ((this_00 != (EditorStateMachine *)0x0) &&
     (pCVar18 = (this_00->fields).cubeModelingStateMachine,
     pCVar18 != (CubeModelingStateMachine *)0x0)) {
    pMStack_5 = (MethodInfo *)pCVar18->klass[1]._0.image;
    auStack_1._32_4_ = &UNK_?;
    auStack_1._36_4_ = pCVar18;
    (*(code *)(pCVar18->klass->vtable).Update.method)();
    if (pMStack_5 == (MethodInfo *)0x0) {
      bVar27 = false;
    }
    else {
      pMVar4 = (this->fields).terrain;
      if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      bVar27 = pMStack_5 != (MethodInfo *)(pMVar4->fields)._._._.id;
    }
    if ((bVar27 & bVar6) != 0) {
      pCVar18 = (this_00->fields).cubeModelingStateMachine;
      if (pCVar18 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (pCVar18,0,(MethodInfo *)0x0);
    }
    ESTerrainEdit_SelectedObjectLink
              (this,this_00,(bool)iStack_3,(float)ppMStack_13,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Exit
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (0,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    if (e != (EditorStateMachine *)0x0) {
      iVar3 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x10) == 0) {
          ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)e,(MethodInfo *)0x0);
        }
        pCVar4 = (e->fields).cubeModelingStateMachine;
        if (pCVar4 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar4,(MethodInfo *)0x0)
          ;
          pCVar4 = (e->fields).cubeModelingStateMachine;
          if (pCVar4 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar4,(MethodInfo *)0x0);
            (e->fields)._.transitionTable = (StateTransitionTable *)0x0;
            func_?();
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
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
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
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (targetHit._36_4_ == -1) {
    return 0;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,targetHit._36_4_,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    if (((pMVar3->fields).type != 0x20) && ((pMVar3->fields).type != 8)) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      in_stack_4 = &UNK_?;
      this_01 = (MVCubeModelPrototypeTerrain *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                          (pMVar2,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
         (this_02 = (MVCubeModelFineGrainedTerrain *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
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
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 != (MVNetworkGame *)0x0) &&
            (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 != (WorldNetwork *)0x0)) &&
           (this_00 = (RuntimeEventManager *)(pWVar6->fields)._.runtimeEventManagerNetwork,
           this_00 != (RuntimeEventManager *)0x0)) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_00,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestResetTerrain
                      (this_03,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Boolean SelectedObject(EditorStateMachine, VoxelHit, Boolean, Boolean) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_SelectedObject
               (ESTerrainEdit *this,EditorStateMachine *esm,VoxelHit targetHit,bool woPickSuccess,
               bool selectionAllowedByLogicEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    hit.interactionFlags._4_4_ = 0;
    hit._0_68_ = targetHit._4_68_;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,esm,woPickSuccess & selectionAllowedByLogicEnabled,hit,unaff_ESI)
    ;
  }
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
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (selectionAllowedByLogicEnabled != 0) {
    if (esm == (EditorStateMachine *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    this_00 = EditorStateMachine::EditorStateMachine_Select(esm,0,-5,(MethodInfo *)0x0);
    if ((this_00 != (WorldObjectClientRef *)0x0) &&
       (pOVar3 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_00,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3 = (Object *)func_?();
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar3,(MethodInfo *)0x0);
      return 1;
    }
  }
  return 0;
}


/* Boolean SelectedObjectLink(EditorStateMachine, Boolean, Single) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_SelectedObjectLink
               (ESTerrainEdit *this,EditorStateMachine *esm,bool didHitObject,float hitDistance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x2c);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pMVar1->fields).isLogicRendered != 0) {
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
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      fStack_4 = _UNK_?;
      if (didHitObject != 0) {
        fStack_4 = hitDistance;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        this_00 = (pMVar1->fields).mainCamera;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        pVVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                           (&RStack_6.m_Direction,(MethodInfo *)0x0);
        if (this_00 != (Camera *)0x0) {
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                             (&RStack_6,this_00,*pVVar5,(MethodInfo *)0x0);
          uVar8 = (pRVar7->m_Origin).x;
          uVar9 = (pRVar7->m_Origin).y;
          uVar10 = (pRVar7->m_Origin).z;
          ray.m_Origin.z = (float)uVar10;
          ray.m_Origin.y = (float)uVar9;
          ray.m_Origin.x = (float)uVar8;
          uVar11 = (pRVar7->m_Direction).x;
          ray.m_Direction.x = (float)uVar11;
          RStack_6.m_Direction.y = (pRVar7->m_Direction).y;
          RStack_6.m_Direction.z = (pRVar7->m_Direction).z;
          iVar12 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics);
          }
          ray.m_Direction.y = RStack_6.m_Direction.y;
          ray.m_Direction.z = RStack_6.m_Direction.z;
          UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                    (ray,(RaycastHit *)&stack0xffffffa4,INFINITY,1 << ((byte)iVar12 & 0x1f),
                     (MethodInfo *)0x0);
          pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pCVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 0;
          }
          fVar14 = RTG::SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                             ((SphereTreeNode_1_System_Object_ *)&stack0xffffffa4,(MethodInfo *)0x0)
          ;
          RStack_6.m_Direction.z = fVar14;
          if (fStack_4 <= fVar14) {
            return 0;
          }
          pCVar13 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)&stack0xffffffa4,(MethodInfo *)0x0);
          if ((pCVar13 != (Collider *)0x0) &&
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pCVar13,(MethodInfo *)0x0),
             this_01 != (GameObject *)0x0)) {
            x = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentInChildren_1
                          (this_01,
                           LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                          );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return 0;
            }
            RStack_6.m_Direction.z = 1.68156e-44;
            value = (Object *)func_?();
            if (esm != (EditorStateMachine *)0x0) {
              FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
              return 1;
            }
          }
        }
      }
      goto code_?;
    }
  }
  return 0;
}

