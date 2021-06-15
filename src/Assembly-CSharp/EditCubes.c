
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Enter
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).delta = 0.0;
  (this->fields).deltaAccum = 0.0;
  if (e != (CubeModelingStateMachine *)0x0) {
    cubeCorners = CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
                            (e,(MethodInfo *)0x0);
    this_01 = (ModelCursor3D *)func_?(TypeInfo__ModelCursor3D);
    ModelCursor3D::ModelCursor3D__ctor(this_01,cubeCorners,(MethodInfo *)0x0);
    (this->fields).modelCursor = this_01;
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
                (this_00,LaserPointerState__Enum_EditingCube,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      (this->fields)._.waitForMouseUp = bVar3;
      (this->fields).currentInternalState = 2;
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  this_01 = (PrefabPool *)e;
  this_00 = this;
  cube = (CubeModelingStateMachine *)CONCAT22(in_stack_1,in_stack_2);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGStack_3 = (GameObject *)0x0;
  iStack_4 = 0;
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar5;
    return;
  }
  pCVar6 = (this->fields).movingEdgeCube;
  pMVar7 = (this->fields).modelCursor;
  if (pMVar7 == (ModelCursor3D *)0x0) goto code_?;
  pIVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
            KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                      ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,(MethodInfo *)0x0);
  if ((pIVar8 != (IKogamaSetting *)0x0) && (pCVar6 == (CubePickingInfo *)0x0)) {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                        ((PrefabPool *)e,(MethodInfo *)0x0);
    if (pOVar9 != (ObjectiveArrow *)0x0) {
      pMVar7 = (this->fields).modelCursor;
      if (pMVar7 == (ModelCursor3D *)0x0) goto code_?;
      pIVar10 = (IndentArea *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,(MethodInfo *)0x0);
      pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          ((PrefabPool *)e,(MethodInfo *)0x0);
      pDVar11 = (DayNightCycle *)
                PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
      if (pDVar11 == (DayNightCycle *)0x0) goto code_?;
      pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0);
      if (pIVar10 == (IndentArea *)0x0) goto code_?;
      IndentArea::IndentArea_UpdateIndentArea
                (pIVar10,(CubePickingInfo *)pOVar9,(GameObject *)pCVar12,(MethodInfo *)0x0);
      pMVar7 = (this->fields).modelCursor;
      if (pMVar7 == (ModelCursor3D *)0x0) goto code_?;
      in_stack_13 = 0x56b4;
      pIVar10 = (IndentArea *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,(MethodInfo *)0x0);
      if (pIVar10 == (IndentArea *)0x0) goto code_?;
      bVar5 = IndentArea::IndentArea_IsColliding(pIVar10,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pMVar7 = (this->fields).modelCursor;
        if (((pMVar7 == (ModelCursor3D *)0x0) ||
            (pKVar14 = (KogamaSettingNumericBase_1_System_Single_ *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,
                                  (MethodInfo *)0x0),
            pKVar14 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)) ||
           (pGVar15 = (GameObject *)
                      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                (pKVar14,(MethodInfo *)0x0), pGVar15 == (GameObject *)0x0))
        goto code_?;
      }
      else {
        pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            ((PrefabPool *)e,(MethodInfo *)0x0);
        if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
        (pOVar9->fields).arrowOffset.x = 0.0;
        pMVar7 = (this->fields).modelCursor;
        if (((pMVar7 == (ModelCursor3D *)0x0) ||
            (pKVar14 = (KogamaSettingNumericBase_1_System_Single_ *)
                       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar7,
                                  (MethodInfo *)0x0),
            pKVar14 == (KogamaSettingNumericBase_1_System_Single_ *)0x0)) ||
           (pGVar15 = (GameObject *)
                      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                (pKVar14,(MethodInfo *)0x0), pGVar15 == (GameObject *)0x0))
        goto code_?;
        this = (EditCubes *)0x0;
        unaff_retaddr = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar15,unaff_retaddr,(MethodInfo *)this);
    }
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  e = (CubeModelingStateMachine *)&UNK_?;
  bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    uVar16._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
    ;
    (this_00->fields).prevMouseUpTime = (float)uVar16;
  }
  uVar17 = (undefined2)((uint)this_01 >> 0x10);
  EditCubes_SetEditDetail(this_00,(CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
  bVar5 = 0;
  switch((this_00->fields).currentInternalState) {
  case 0:
    if ((this_00->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      (this_00->fields).currentInternalState = 1;
      if (this_01 == (PrefabPool *)0x0) goto code_?;
      bVar5 = 0;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                ((CubeModelingStateMachine *)this_01,(this_00->fields).prevMaterial,
                 (MethodInfo *)0x0);
      (this_00->fields).edgeHasMoved = 0;
    }
    else {
      bVar5 = 0;
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        bVar5 = 0;
        func_?();
      }
      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar18 == 0) {
        pGVar15 = (GameObject *)(this_00->fields).mouseSensitivityExtrude;
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                  (StringLiteral_Mouse_X,(MethodInfo *)0x0);
        MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                  (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        uVar16._0_4_ = 0.0;
        uVar19._0_4_ = 0.0;
        uVar19._4_4_ = 0.0;
        in_stack_20 = 0x79;
        in_stack_21 = 0x58;
        func_?();
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z._0_2_ = SUB42((float)uVar16,0);
        a.x = (float)uVar19;
        a.y = SUB84(uVar19,4);
        a.z._2_2_ = (short)((uint)(float)uVar16 >> 0x10);
        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&puStack_23,(float)pGVar15,a,(MethodInfo *)0x0);
        uVar16._0_4_ = pVVar22->x;
        fStack_24 = pVVar22->y;
        uVar25 = SUB42(pVVar22->z,0);
        uVar26 = (undefined2)((uint)pVVar22->z >> 0x10);
        if (this_01 == (PrefabPool *)0x0) goto code_?;
        pMVar27 = (MVCubeModelBase *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
        pCVar6 = (this_00->fields).movingEdgeCube;
        e = (CubeModelingStateMachine *)(this_00->fields).mouseSensitivity;
        if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
        bVar18 = (pCVar6->fields).pickedEdgeIndex0;
        edgeIndex1 = (pCVar6->fields).pickedEdgeIndex1;
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          in_stack_20 = 0x29;
          in_stack_21 = 0x59;
          func_?();
        }
        mousePositionDelta.z._2_2_ = uVar26;
        mousePositionDelta.z._0_2_ = uVar25;
        pfVar28 = &(this_00->fields).deltaAccum;
        uVar25 = SUB42(pCVar6,0);
        uVar26 = (undefined2)((uint)pCVar6 >> 0x10);
        bVar29 = SUB81(uVar16,7);
        mousePositionDelta.x = (float)uVar16;
        mousePositionDelta.y = fStack_24;
        CVar30 = SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                           (pMVar27,pCVar6,mousePositionDelta,&(this_00->fields).delta,pfVar28,
                            (float)e,&stack0xfffffffb,bVar18,edgeIndex1,
                            (EditCubeChange__Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        uVar31 = (undefined2)CVar30;
        uVar32 = (undefined1)(CVar30 >> 0x10);
        uVar33 = (undefined1)(CVar30 >> 0x18);
        if (CVar30 == CubeOutOfBoundState__Enum_WithinBounds) {
          pMVar27 = (MVCubeModelBase *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
          pMVar34 = (MonitorData *)
                    MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar27,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
            func_?();
          }
          CubeModelTool::CubeModelTool_SendCubeEvent
                    ((int32_t)pMVar34,CONCAT22(uVar26,uVar25),(MethodInfo *)0x0);
          CVar30 = CONCAT13(uVar33,CONCAT12(uVar32,uVar31));
        }
        if (((this_00->fields).edgeHasMoved == 0) && (bVar29 != 0)) {
          (this_00->fields).edgeHasMoved = 1;
        }
        if (CVar30 == CubeOutOfBoundState__Enum_OutOfBoundsAdd) {
          pCVar6 = (this_00->fields).movingEdgeCube;
          if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
          iVar35 = (pCVar6->fields).iLocalPos.x;
          iVar36 = (pCVar6->fields).iLocalPos.z;
          iVar37 = (pCVar6->fields).pickedFace;
          uVar25 = (undefined2)iVar37;
          uVar26 = (undefined2)((uint)iVar37 >> 0x10);
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?();
          }
          e = (CubeModelingStateMachine *)&stack0xffffffc0;
          localPos.z = iVar35;
          localPos._0_4_ = e;
          IVar38 = Cube::Cube_GetCubePosAboveFace
                             (localPos,CONCAT22(in_stack_13,iVar36),
                              (MethodInfo *)CONCAT22(uVar26,uVar25));
          puVar39 = IVar38._0_4_;
          pAVar40 = *(AdvancedGhostObject **)puVar39;
          iVar36 = *(int16_t *)((int)puVar39 + 4);
          requestedCubePos_01.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar39 + 4) >> 8);
          requestedCubePos_01._0_5_ = *puVar39;
          bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                             ((CubeModelingStateMachine *)this_01,requestedCubePos_01,
                              (MethodInfo *)0x0);
          if (bVar18 != 0) {
            pMVar27 = (MVCubeModelBase *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
            pos_04.z = iVar36;
            pos_04._0_4_ = pAVar40;
            pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_04,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              func_?();
            }
            bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                               ((CubeBase *)pCVar41,(CubeBase *)0x0,(MethodInfo *)0x0);
            if (bVar18 != 0) {
              pos_07.z = iVar36;
              pos_07._0_4_ = pAVar40;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        ((CubeModelingStateMachine *)this_01,pos_07,AudioActions__Enum_FaceMoved,
                         (MethodInfo *)0x0);
              pVVar42 = PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              pCVar6 = (this_00->fields).movingEdgeCube;
              uVar17 = SUB42(pVVar42,0);
              uVar25 = (undefined2)((uint)pVVar42 >> 0x10);
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              pMVar34 = (MonitorData *)(pCVar6->fields).pickedFace;
              pCVar41 = (pCVar6->fields).cube;
              if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Cube->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar43 = Cube::Cube_GetCorners(pCVar41,(Face__Enum)pMVar34,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                func_?();
              }
              this_00 = (EditCubes *)
                        MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                        CubeDataPacker_CornersToByteArray(pVVar43,(MethodInfo *)0x0);
              uVar44 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
              pBVar45 = Cube::Cube_CreateMaterialArray(uVar44,(MethodInfo *)0x0);
              pCVar41 = (Cube *)func_?();
              Cube::Cube__ctor(pCVar41,(Byte__Array *)this_00,pBVar45,(MethodInfo *)0x0);
              if (CONCAT22(uVar25,uVar17) == 0) goto code_?;
              pos_05.z = iVar36;
              pos_05._0_4_ = pAVar40;
              MVCubeModelBase::MVCubeModelBase_AddCube
                        ((MVCubeModelBase *)CONCAT22(uVar25,uVar17),pos_05,(CubeBase *)pCVar41,
                         (MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab
                                  ((PrefabPool *)e,(MethodInfo *)0x0);
              if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
              iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar27,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
                func_?();
              }
              CubeModelTool::CubeModelTool_SendCubeEvent
                        (iVar37,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
              pCVar6 = _UNK_?;
              this_00 = (EditCubes *)&UNK_?;
              pCVar46 = (CubePickingInfo *)func_?();
              CubePickingInfo::CubePickingInfo__ctor_1(pCVar46,pCVar6,(MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab
                                  ((PrefabPool *)e,(MethodInfo *)0x0);
              if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
              pos_06.z = iVar36;
              pos_06._0_4_ = pAVar40;
              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_06,(MethodInfo *)0x0);
              pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0);
              if (pCVar46 == (CubePickingInfo *)0x0) goto code_?;
              (pCVar46->fields).cube = pCVar41;
              *(AdvancedGhostObject **)&(pCVar46->fields).iLocalPos = pAVar40;
              (pCVar46->fields).iLocalPos.z = iVar36;
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab
                                  ((PrefabPool *)e,(MethodInfo *)0x0);
              if ((_UNK_? == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                        (pMVar27,(_UNK_?->fields).iLocalPos,(_UNK_?->fields).cube,
                         (MethodInfo *)0x0);
              _UNK_? = pCVar46;
              pVVar22 = Cube::Cube_GetFaceAxis
                                  ((Vector3 *)&stack0xffffff9c,(pCVar46->fields).pickedFace,
                                   (MethodInfo *)0x0);
              axis_03.z._2_2_ = (short)((uint)pVVar22->z >> 0x10);
              axis_03._0_10_ = *(unkbyte10 *)pVVar22;
              Cube::Cube_MoveFace(pCVar46,-0.75,axis_03,
                                  (CubeOutOfBoundState__Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              this = this_00;
code_?:
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab
                                  ((PrefabPool *)e,(MethodInfo *)0x0);
code_?:
              pCVar6 = (this->fields).movingEdgeCube;
              this_00 = this;
              if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_CornersChanged
                        (pMVar27,(pCVar6->fields).iLocalPos,(pCVar6->fields).cube,
                         (MethodInfo *)0x0);
              this_01 = (PrefabPool *)e;
              break;
            }
          }
          pMVar7 = (this_00->fields).modelCursor;
          pDVar11 = (DayNightCycle *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          if ((pDVar11 == (DayNightCycle *)0x0) ||
             (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0)
             , pMVar7 == (ModelCursor3D *)0x0)) goto code_?;
          iPos_03.z = iVar36;
          iPos_03._0_4_ = pAVar40;
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar7,iPos_03,(GameObject *)pCVar12,(MethodInfo *)0x0);
          pMVar27 = (MVCubeModelBase *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          in_stack_20 = (char)this_01;
          in_stack_21 = (char)((uint)this_01 >> 8);
          in_stack_47 = uVar17;
code_?:
          pCVar6 = (this_00->fields).movingEdgeCube;
          if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
          goto code_?;
          pCVar41 = (pCVar6->fields).cube;
          in_stack_2 = SUB42(pCVar41,0);
          in_stack_1 = (undefined2)((uint)pCVar41 >> 0x10);
        }
        else {
          this._2_2_ = (undefined2)((uint)pfVar28 >> 0x10);
          if (CVar30 == CubeOutOfBoundState__Enum_OutOfBoundsAddEdge) {
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            pMVar34 = *(MonitorData **)&(pCVar6->fields).iLocalPos;
            iVar36 = (pCVar6->fields).iLocalPos.z;
            iVar37 = (pCVar6->fields).pickedFace;
            uVar17 = (undefined2)iVar37;
            iVar35 = (int16_t)((uint)iVar37 >> 0x10);
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              in_stack_20 = 0x87;
              in_stack_21 = 0x62;
              func_?();
            }
            e = (CubeModelingStateMachine *)CONCAT22(iVar35,uVar17);
            this = (EditCubes *)CONCAT22(this._2_2_,iVar36);
            localPos_03.z = (int16_t)pMVar34;
            localPos_03._0_4_ = &stack0xffffffc0;
            IVar38 = Cube::Cube_GetCubePosAboveFace(localPos_03,(Face__Enum)this,(MethodInfo *)e);
            puVar39 = IVar38._0_4_;
            pAVar40 = *(AdvancedGhostObject **)puVar39;
            iVar36 = *(int16_t *)((int)puVar39 + 4);
            requestedCubePos_00.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar39 + 4) >> 8);
            requestedCubePos_00._0_5_ = *puVar39;
            bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                               ((CubeModelingStateMachine *)this_01,requestedCubePos_00,
                                (MethodInfo *)0x0);
            if (bVar18 != 0) {
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
              pos_02.z = iVar36;
              pos_02._0_4_ = pAVar40;
              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_02,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                 ((CubeBase *)pCVar41,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar18 != 0) {
                pCVar6 = (this_00->fields).movingEdgeCube;
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                           AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                pVVar42 = PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
                pCVar6 = (this_00->fields).movingEdgeCube;
                uVar25 = SUB42(pVVar42,0);
                uVar26 = (undefined2)((uint)pVVar42 >> 0x10);
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                pMVar34 = (MonitorData *)(pCVar6->fields).pickedFace;
                pCVar41 = (pCVar6->fields).cube;
                if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Cube->_1).cctor_started == 0)) {
                  func_?();
                }
                pVVar43 = Cube::Cube_GetCorners(pCVar41,(Face__Enum)pMVar34,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                  func_?();
                }
                this_00 = (EditCubes *)
                          MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(pVVar43,(MethodInfo *)0x0);
                uVar44 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
                pBVar45 = Cube::Cube_CreateMaterialArray(uVar44,(MethodInfo *)0x0);
                pCVar41 = (Cube *)func_?();
                Cube::Cube__ctor(pCVar41,(Byte__Array *)this_00,pBVar45,(MethodInfo *)0x0);
                if (CONCAT22(uVar26,uVar25) == 0) goto code_?;
                pos_11.z = iVar36;
                pos_11._0_4_ = pAVar40;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          ((MVCubeModelBase *)CONCAT22(uVar26,uVar25),pos_11,(CubeBase *)pCVar41,
                           (MethodInfo *)0x0);
                pCVar6 = (this->fields).movingEdgeCube;
                pCVar46 = (CubePickingInfo *)func_?();
                pAVar40 = (AdvancedGhostObject *)&UNK_?;
                CubePickingInfo::CubePickingInfo__ctor_1(pCVar46,pCVar6,(MethodInfo *)0x0);
                iVar36 = iVar35;
                pMVar27 = (MVCubeModelBase *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab
                                    ((PrefabPool *)CONCAT22(iVar35,uVar17),(MethodInfo *)0x0);
                this_00 = this;
                if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
                pos.z = iVar36;
                pos._0_4_ = pAVar40;
                pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos,(MethodInfo *)0x0);
                pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0);
                if (pCVar46 == (CubePickingInfo *)0x0) goto code_?;
                (pCVar46->fields).cube = pCVar41;
                *(AdvancedGhostObject **)&(pCVar46->fields).iLocalPos = pAVar40;
                (pCVar46->fields).iLocalPos.z = iVar36;
                pMVar27 = (MVCubeModelBase *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab
                                    ((PrefabPool *)CONCAT22(iVar35,uVar17),(MethodInfo *)0x0);
                pCVar6 = (this->fields).movingEdgeCube;
                if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
                goto code_?;
                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                          (pMVar27,(pCVar6->fields).iLocalPos,(pCVar6->fields).cube,
                           (MethodInfo *)0x0);
                (this->fields).movingEdgeCube = pCVar46;
                pVVar22 = Cube::Cube_GetFaceAxis
                                    ((Vector3 *)&stack0xffffff9c,(pCVar46->fields).pickedFace,
                                     (MethodInfo *)0x0);
                axis_01.z._2_2_ = (short)((uint)pVVar22->z >> 0x10);
                axis_01._0_10_ = *(unkbyte10 *)pVVar22;
                Cube::Cube_MoveFace(pCVar46,-1.0,axis_01,
                                    (CubeOutOfBoundState__Enum *)&stack0xffffffe4,(MethodInfo *)0x0)
                ;
                pCVar6 = (this->fields).movingEdgeCube;
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                pVVar22 = Cube::Cube_GetFaceAxis
                                    ((Vector3 *)&stack0xffffff9c,(pCVar6->fields).pickedFace,
                                     (MethodInfo *)0x0);
                axis_02.z._2_2_ = (short)((uint)pVVar22->z >> 0x10);
                axis_02._0_10_ = *(unkbyte10 *)pVVar22;
                Cube::Cube_MoveEdge(pCVar6,-0.75,axis_02,
                                    (CubeOutOfBoundState__Enum *)&stack0xffffffe4,(MethodInfo *)0x0)
                ;
                goto code_?;
              }
            }
code_?:
            in_stack_47 = 0x1038;
            pMVar7 = (this_00->fields).modelCursor;
            pDVar11 = (DayNightCycle *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            if ((pDVar11 == (DayNightCycle *)0x0) ||
               (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                    (pDVar11,(MethodInfo *)0x0), pMVar7 == (ModelCursor3D *)0x0))
            goto code_?;
            iPos.z._0_1_ = (char)iVar36;
            iPos._0_4_ = pAVar40;
            iPos.z._1_1_ = (char)((ushort)iVar36 >> 8);
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)pMVar7,iPos,(GameObject *)pCVar12,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Failed_to_add_cube,(MethodInfo *)0x0);
            pMVar27 = (MVCubeModelBase *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            goto code_?;
          }
          if (CVar30 == CubeOutOfBoundState__Enum_OutOfBoundsAddVertex) {
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            pMVar34 = *(MonitorData **)&(pCVar6->fields).iLocalPos;
            iVar36 = (pCVar6->fields).iLocalPos.z;
            iVar37 = (pCVar6->fields).pickedFace;
            uVar17 = (undefined2)iVar37;
            uVar25 = (undefined2)((uint)iVar37 >> 0x10);
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              in_stack_20 = 0x9a;
              in_stack_21 = 0x5e;
              func_?();
            }
            e = (CubeModelingStateMachine *)CONCAT22(uVar25,uVar17);
            this = (EditCubes *)CONCAT22(this._2_2_,iVar36);
            localPos_02.z = (int16_t)pMVar34;
            localPos_02._0_4_ = &stack0xffffffc0;
            IVar38 = Cube::Cube_GetCubePosAboveFace(localPos_02,(Face__Enum)this,(MethodInfo *)e);
            puVar39 = IVar38._0_4_;
            pAVar40 = *(AdvancedGhostObject **)puVar39;
            iVar36 = *(int16_t *)((int)puVar39 + 4);
            requestedCubePos.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar39 + 4) >> 8);
            requestedCubePos._0_5_ = *puVar39;
            bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                               ((CubeModelingStateMachine *)this_01,requestedCubePos,
                                (MethodInfo *)0x0);
            if (bVar18 != 0) {
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
              pos_01.z = iVar36;
              pos_01._0_4_ = pAVar40;
              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_01,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                 ((CubeBase *)pCVar41,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar18 != 0) {
                pCVar6 = (this_00->fields).movingEdgeCube;
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                           AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                pVVar42 = PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
                pCVar6 = (this_00->fields).movingEdgeCube;
                uVar26 = SUB42(pVVar42,0);
                uVar31 = (undefined2)((uint)pVVar42 >> 0x10);
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                pMVar34 = (MonitorData *)(pCVar6->fields).pickedFace;
                pCVar41 = (pCVar6->fields).cube;
                if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Cube->_1).cctor_started == 0)) {
                  func_?();
                }
                pVVar43 = Cube::Cube_GetCorners(pCVar41,(Face__Enum)pMVar34,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                  func_?();
                }
                this_00 = (EditCubes *)
                          MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(pVVar43,(MethodInfo *)0x0);
                uVar44 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
                pBVar45 = Cube::Cube_CreateMaterialArray(uVar44,(MethodInfo *)0x0);
                pCVar41 = (Cube *)func_?();
                Cube::Cube__ctor(pCVar41,(Byte__Array *)this_00,pBVar45,(MethodInfo *)0x0);
                if (CONCAT22(uVar31,uVar26) == 0) goto code_?;
                pos_10.z = iVar36;
                pos_10._0_4_ = pAVar40;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          ((MVCubeModelBase *)CONCAT22(uVar31,uVar26),pos_10,(CubeBase *)pCVar41,
                           (MethodInfo *)0x0);
                pCVar6 = (this->fields).movingEdgeCube;
                pCVar46 = (CubePickingInfo *)func_?();
                CubePickingInfo::CubePickingInfo__ctor_1(pCVar46,pCVar6,(MethodInfo *)0x0);
                pMVar27 = (MVCubeModelBase *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab
                                    ((PrefabPool *)e,(MethodInfo *)0x0);
                this_00 = this;
                if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
                pos_14.z = iVar36;
                pos_14._0_4_ = pAVar40;
                pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_14,(MethodInfo *)0x0)
                ;
                pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0);
                if (pCVar46 == (CubePickingInfo *)0x0) goto code_?;
                (pCVar46->fields).cube = pCVar41;
                *(AdvancedGhostObject **)&(pCVar46->fields).iLocalPos = pAVar40;
                (pCVar46->fields).iLocalPos.z = iVar36;
                pMVar27 = (MVCubeModelBase *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab
                                    ((PrefabPool *)e,(MethodInfo *)0x0);
                pCVar6 = (this->fields).movingEdgeCube;
                if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
                goto code_?;
                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                          (pMVar27,(pCVar6->fields).iLocalPos,(pCVar6->fields).cube,
                           (MethodInfo *)0x0);
                (this->fields).movingEdgeCube = pCVar46;
                pVVar22 = Cube::Cube_GetFaceAxis
                                    ((Vector3 *)&stack0xffffff9c,(pCVar46->fields).pickedFace,
                                     (MethodInfo *)0x0);
                axis.z._1_1_ = (char)((uint)pVVar22->z >> 8);
                axis._0_9_ = *(unkbyte9 *)pVVar22;
                axis.z._2_2_ = (short)((uint)pVVar22->z >> 0x10);
                Cube::Cube_MoveFace((CubePickingInfo *)0xbf800000,-1.0,axis,
                                    (CubeOutOfBoundState__Enum *)&stack0xffffffe8,(MethodInfo *)0x0)
                ;
                pCVar6 = (this->fields).movingEdgeCube;
                if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
                pVVar22 = Cube::Cube_GetFaceAxis
                                    ((Vector3 *)&stack0xffffff9c,(pCVar6->fields).pickedFace,
                                     (MethodInfo *)0x0);
                pCVar46 = (this->fields).movingEdgeCube;
                if (pCVar46 == (CubePickingInfo *)0x0) goto code_?;
                axis_00.z._2_2_ = (short)((uint)pVVar22->z >> 0x10);
                axis_00._0_10_ = *(unkbyte10 *)pVVar22;
                Cube::Cube_MoveVertex
                          (pCVar6,-0.75,axis_00,(pCVar46->fields).pickedEdgeIndex0,
                           (pCVar46->fields).pickedEdgeIndex1,
                           (CubeOutOfBoundState__Enum *)&stack0xffffffe8,(MethodInfo *)0x0);
                pMVar27 = (MVCubeModelBase *)
                          PrefabPool::PrefabPool_get_MVJetPackPrefab
                                    ((PrefabPool *)CONCAT22(uVar25,uVar17),(MethodInfo *)0x0);
                goto code_?;
              }
            }
            goto code_?;
          }
          if (CVar30 == CubeOutOfBoundState__Enum_OutOfBoundsRemove) {
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            in_stack_21 = (undefined1)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
            requestedCubePos_02.z._1_1_ = in_stack_21;
            requestedCubePos_02._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
            bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                               ((CubeModelingStateMachine *)this_01,requestedCubePos_02,
                                (MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (bVar18 == 0) {
              pMVar7 = (this_00->fields).modelCursor;
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              uVar31 = (pCVar6->fields).iLocalPos.x;
              uVar48 = (pCVar6->fields).iLocalPos.y;
              iVar36 = (pCVar6->fields).iLocalPos.z;
              pDVar11 = (DayNightCycle *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              if ((pDVar11 == (DayNightCycle *)0x0) ||
                 (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                      (pDVar11,(MethodInfo *)0x0), pMVar7 == (ModelCursor3D *)0x0))
              goto code_?;
              iPos_04.y = uVar48;
              iPos_04.x = uVar31;
              iPos_04.z = iVar36;
              ModelCursor::ModelCursor_SetErrorCursor
                        ((ModelCursor *)pMVar7,iPos_04,(GameObject *)pCVar12,(MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              pCVar6 = (this_00->fields).movingEdgeCube;
              if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                        (pMVar27,(pCVar6->fields).iLocalPos,(this_00->fields).prevCubeState,
                         (MethodInfo *)0x0);
              (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
              this_01 = (PrefabPool *)e;
            }
            else {
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              pMVar34 = (MonitorData *)(pCVar6->fields).pickedFace;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              sVar49 = 0;
              uVar32 = 0;
              uVar33 = 0;
              sVar50 = 0;
              func_?();
              if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Cube->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar22 = Cube::Cube_GetFaceAxis
                                  ((Vector3 *)&stack0xffffffa8,(Face__Enum)pMVar34,(MethodInfo *)0x0
                                  );
              pCVar6 = (this_00->fields).movingEdgeCube;
              uVar51 = pVVar22->x;
              uVar52 = pVVar22->y;
              sVar49 = sVar49 - (short)(int)(float)uVar51;
              sVar53 = CONCAT11(uVar33,uVar32) - (short)(int)(float)uVar52;
              sVar50 = sVar50 - (short)(int)pVVar22->z;
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              pos_00.z._1_1_ = (char)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
              pos_00._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        ((CubeModelingStateMachine *)this_01,pos_00,AudioActions__Enum_CubeRemoved,
                         (MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              pCVar6 = (this_00->fields).movingEdgeCube;
              if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_RemoveCube
                        (pMVar27,(pCVar6->fields).iLocalPos,(MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
              pos_08.y = (short)(CONCAT13((char)((ushort)sVar53 >> 8),CONCAT12((char)sVar53,sVar49))
                                >> 0x10);
              pos_08.x = sVar49;
              pos_08.z = sVar50;
              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar27,pos_08,(MethodInfo *)0x0);
              uVar17 = SUB42(pCVar41,0);
              uVar25 = (undefined2)((uint)pCVar41 >> 0x10);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                                 ((CubeBase *)pCVar41,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar18 == 0) {
                (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                this_01 = (PrefabPool *)e;
              }
              else {
                pCVar6 = (this_00->fields).movingEdgeCube;
                pCVar46 = (CubePickingInfo *)func_?();
                CubePickingInfo::CubePickingInfo__ctor_1(pCVar46,pCVar6,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Cube->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar41 = Cube::Cube_Clone_1((Cube *)CONCAT22(uVar25,uVar17),(MethodInfo *)0x0);
                if (pCVar46 == (CubePickingInfo *)0x0) goto code_?;
                (pCVar46->fields).cube = pCVar41;
                (pCVar46->fields).iLocalPos.x = sVar49;
                (pCVar46->fields).iLocalPos.y =
                     (short)(CONCAT13((char)((ushort)sVar53 >> 8),CONCAT12((char)sVar53,sVar49)) >>
                            0x10);
                (pCVar46->fields).iLocalPos.z = sVar50;
                (this_00->fields).movingEdgeCube = pCVar46;
                this_01 = (PrefabPool *)e;
              }
            }
            break;
          }
          if (CVar30 != CubeOutOfBoundState__Enum_WithinBounds) break;
          pCVar6 = (this_00->fields).movingEdgeCube;
          if ((pCVar6 == (CubePickingInfo *)0x0) ||
             (pCVar41 = (pCVar6->fields).cube, pCVar41 == (Cube *)0x0)) goto code_?;
          pVVar43 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar41,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?();
          }
          bVar18 = Cube::Cube_IsCollapsed(pVVar43,(MethodInfo *)0x0);
          if (bVar18 == 0) {
code_?:
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                       AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
            pMVar27 = (MVCubeModelBase *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
            goto code_?;
            MVCubeModelBase::MVCubeModelBase_CornersChanged
                      (pMVar27,(pCVar6->fields).iLocalPos,(pCVar6->fields).cube,(MethodInfo *)0x0)
            ;
            this_01 = (PrefabPool *)e;
            break;
          }
          pCVar6 = (this_00->fields).movingEdgeCube;
          if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
          bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                             ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                              (MethodInfo *)0x0);
          if (bVar18 != 0) goto code_?;
          pMVar7 = (this_00->fields).modelCursor;
          pCVar6 = (this_00->fields).movingEdgeCube;
          if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
          uVar54 = (pCVar6->fields).iLocalPos.x;
          uVar55 = (pCVar6->fields).iLocalPos.y;
          iVar36 = (pCVar6->fields).iLocalPos.z;
          pDVar11 = (DayNightCycle *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          if ((pDVar11 == (DayNightCycle *)0x0) ||
             (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0)
             , pMVar7 == (ModelCursor3D *)0x0)) goto code_?;
          iPos_00.y = uVar55;
          iPos_00.x = uVar54;
          iPos_00.z = iVar36;
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar7,iPos_00,(GameObject *)pCVar12,(MethodInfo *)0x0);
          pMVar27 = (MVCubeModelBase *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          pCVar6 = (this_00->fields).movingEdgeCube;
          if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
          goto code_?;
          in_stack_20 = 0;
          in_stack_21 = 0;
          in_stack_47 = 0;
          pCVar41 = (this_00->fields).prevCubeState;
          in_stack_2 = SUB42(pCVar41,0);
          in_stack_1 = (undefined2)((uint)pCVar41 >> 0x10);
        }
        iVector.z._1_1_ = (char)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
        iVector._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                  (pMVar27,iVector,(Cube *)CONCAT22(in_stack_1,in_stack_2),
                   (MethodInfo *)
                   CONCAT22(in_stack_47,CONCAT11(in_stack_21,in_stack_20)));
        (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
        this_01 = (PrefabPool *)e;
      }
      else {
        (this_00->fields).currentInternalState = 2;
        if (this_01 == (PrefabPool *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  ((CubeModelingStateMachine *)this_01,(this_00->fields).prevMaterial,
                   (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
        pCVar6 = (this_00->fields).movingEdgeCube;
        if ((this_00->fields).edgeHasMoved == 0) {
          SkillSettingBase::SkillSettingBase_UpdateSpawnRoleCost
                    ((SkillSettingBase *)this_01,(int32_t)pCVar6,(MethodInfo *)0x0);
          pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              (this_01,(MethodInfo *)0x0);
          if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    ((CubeModelingStateMachine *)this_01,
                     *(IntVector *)&(pOVar9->fields).initialScale.y,AudioActions__Enum_CubeAdded,
                     (MethodInfo *)0x0);
          EVar56 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                             ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
          uVar25 = (undefined2)EVar56;
          uVar26 = (undefined2)(EVar56 >> 0x10);
          pMVar27 = (MVCubeModelBase *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
          if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
          iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar27,(MethodInfo *)0x0);
          pMVar34 = (MonitorData *)CONCAT22(uVar26,uVar25);
          if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
            func_?();
          }
          CubeModelTool::CubeModelTool_SendCubeEvent
                    (iVar37,(EditCubeChange__Enum)pMVar34,(MethodInfo *)0x0);
          if (CONCAT22(uVar26,uVar25) == 0) {
            pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                (this_01,(MethodInfo *)0x0);
            if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
            uVar25 = *(undefined2 *)&(pOVar9->fields).initialScale.z;
            iVar36 = SUB42((pOVar9->fields).initialScale.y,0);
            pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                (this_01,(MethodInfo *)0x0);
            if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
            pMVar57 = (MethodInfo *)(pOVar9->fields).animationSpeed;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?();
            }
            localPos_00.z = iVar36;
            localPos_00._0_4_ = &stack0xffffffd0;
            IVar38 = Cube::Cube_GetCubePosAboveFace(localPos_00,CONCAT22(uVar17,uVar25),pMVar57);
            pMVar7 = (this_00->fields).modelCursor;
            uVar58 = *IVar38._0_4_;
            uVar17 = *(undefined2 *)(IVar38._0_4_ + 1);
            uVar25 = (undefined2)uVar58;
            uVar26 = (undefined2)((uint)uVar58 >> 0x10);
            pDVar11 = (DayNightCycle *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            if ((pDVar11 == (DayNightCycle *)0x0) ||
               (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                    (pDVar11,(MethodInfo *)0x0), pMVar7 == (ModelCursor3D *)0x0))
            goto code_?;
            iPos_02.y = uVar26;
            iPos_02.x = uVar25;
            iPos_02.z._0_1_ = (char)uVar17;
            iPos_02.z._1_1_ = (char)((ushort)uVar17 >> 8);
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)pMVar7,iPos_02,(GameObject *)pCVar12,(MethodInfo *)0x0);
            (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
            (this_00->fields).edgeHasMoved = 0;
            this_01 = (PrefabPool *)e;
          }
          else {
code_?:
            (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
            (this_00->fields).edgeHasMoved = 0;
            this_01 = (PrefabPool *)e;
          }
        }
        else {
          if ((pCVar6 == (CubePickingInfo *)0x0) ||
             (pCVar41 = (pCVar6->fields).cube, pCVar41 == (Cube *)0x0)) goto code_?;
          pVVar43 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                              ((CubeBase *)pCVar41,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Cube->_1).cctor_started == 0)) {
            func_?();
          }
          bVar18 = Cube::Cube_IsCollapsed(pVVar43,(MethodInfo *)0x0);
          pCVar6 = (this_00->fields).movingEdgeCube;
          if (bVar18 == 0) {
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            pos_03.z._1_1_ = (char)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
            pos_03._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      ((CubeModelingStateMachine *)this_01,pos_03,AudioActions__Enum_EdgeMoved,
                       (MethodInfo *)0x0);
            pMVar27 = (MVCubeModelBase *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            uVar26 = in_stack_47;
          }
          else {
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                               ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                                (MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (bVar18 != 0) {
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        ((CubeModelingStateMachine *)this_01,(pCVar6->fields).iLocalPos,
                         AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
              pMVar27 = (MVCubeModelBase *)
                        PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
              pCVar6 = (this_00->fields).movingEdgeCube;
              if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
              goto code_?;
              in_stack_21 = (undefined1)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
              pos_12.z._1_1_ = in_stack_21;
              pos_12._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
              MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar27,pos_12,(MethodInfo *)0x0);
              goto code_?;
            }
            pMVar7 = (this_00->fields).modelCursor;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            uVar17 = (pCVar6->fields).iLocalPos.x;
            uVar25 = (pCVar6->fields).iLocalPos.y;
            iVar36 = (pCVar6->fields).iLocalPos.z;
            pDVar11 = (DayNightCycle *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            if ((pDVar11 == (DayNightCycle *)0x0) ||
               (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                    (pDVar11,(MethodInfo *)0x0), pMVar7 == (ModelCursor3D *)0x0))
            goto code_?;
            iPos_01.y = uVar25;
            iPos_01.x = uVar17;
            iPos_01.z = iVar36;
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)pMVar7,iPos_01,(GameObject *)pCVar12,(MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
            pIVar59 = &(pCVar6->fields).iLocalPos;
            uVar60 = pIVar59->x;
            uVar26 = pIVar59->y;
            in_stack_20 = (undefined1)uVar60;
            in_stack_21 = (undefined1)((ushort)uVar60 >> 8);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      ((CubeModelingStateMachine *)this_01,*pIVar59,AudioActions__Enum_FaceMoved,
                       (MethodInfo *)0x0);
            pMVar27 = (MVCubeModelBase *)
                      PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
            pCVar6 = (this_00->fields).movingEdgeCube;
            cube = (CubeModelingStateMachine *)this_01;
          }
          if ((pCVar6 == (CubePickingInfo *)0x0) || (pMVar27 == (MVCubeModelBase *)0x0))
          goto code_?;
          iVector_00.z._1_1_ = (char)((ushort)(pCVar6->fields).iLocalPos.z >> 8);
          iVector_00._0_5_ = *(undefined5 *)&(pCVar6->fields).iLocalPos;
          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                    (pMVar27,iVector_00,(Cube *)cube,
                     (MethodInfo *)CONCAT22(uVar26,CONCAT11(in_stack_21,in_stack_20)));
          (this_00->fields).movingEdgeCube = (CubePickingInfo *)0x0;
          (this_00->fields).edgeHasMoved = 0;
          this_01 = (PrefabPool *)e;
        }
      }
    }
    break;
  case 1:
    bVar5 = 0;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      bVar5 = 0;
      func_?();
    }
    bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar18 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
      (this_00->fields).currentInternalState = 2;
    }
    break;
  case 2:
    if (this_01 == (PrefabPool *)0x0) goto code_?;
    bVar5 = 0;
    pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    if (pOVar9 == (ObjectiveArrow *)0x0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar18 == 0) ||
         (bVar18 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar18 == 0)) {
code_?:
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar18 != 0) &&
           (uVar16._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                     ((MethodInfo *)0x0),
           uVar16._0_4_ = (float)uVar16 - (this_00->fields).prevMouseUpTime,
           pfVar28 = &(this_00->fields).mouseUpTimeBeforeMoveEdge,
           *pfVar28 <= (float)uVar16 && (float)uVar16 != *pfVar28)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((this_00->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?();
            }
            uVar16._0_4_ = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                     (StringLiteral_Mouse_X,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            fVar61 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                               (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            uVar62 = (uint)((ulonglong)_UNK_? >> 0x20);
            if (((float)(double)CONCAT44((uint)((ulonglong)(double)(float)uVar16 >> 0x20) & uVar62,
                                         SUB84((double)(float)uVar16,0) & (uint)_UNK_?) !=
                 0.0) || ((float)(double)CONCAT44((uint)((ulonglong)(double)fVar61 >> 0x20) & uVar62
                                                  ,SUB84((double)fVar61,0) & (uint)_UNK_?) !=
                          0.0)) {
              uVar44 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
              (this_00->fields).prevMaterial = uVar44;
              pCVar6 = (this_00->fields).prevSelectedCube;
              if (pCVar6 == (CubePickingInfo *)0x0) goto code_?;
              pCVar41 = (pCVar6->fields).cube;
              pMVar34 = (MonitorData *)(pCVar6->fields).pickedFace;
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              uVar44 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pCVar41,(Face__Enum)pMVar34,(MethodInfo *)0x0);
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        ((CubeModelingStateMachine *)this_01,uVar44,(MethodInfo *)0x0);
              (this_00->fields).movingEdgeCube = (this_00->fields).prevSelectedCube;
              (this_00->fields).currentInternalState = 0;
              (this_00->fields).deltaAccum = 0.0;
              UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible
                        (0,(MethodInfo *)0x0);
            }
          }
        }
      }
      else {
        (this_00->fields).currentInternalState = 3;
      }
    }
    else {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar18 == 0) goto code_?;
      EVar56 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                         ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
      uVar17 = (undefined2)EVar56;
      uVar25 = (undefined2)(EVar56 >> 0x10);
      pMVar27 = (MVCubeModelBase *)
                PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
      if (pMVar27 == (MVCubeModelBase *)0x0) goto code_?;
      iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar27,(MethodInfo *)0x0);
      pMVar34 = (MonitorData *)CONCAT22(uVar25,uVar17);
      if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
        func_?();
      }
      CubeModelTool::CubeModelTool_SendCubeEvent
                (iVar37,(EditCubeChange__Enum)pMVar34,(MethodInfo *)0x0);
      if (CONCAT22(uVar25,uVar17) == 0) {
        pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (this_01,(MethodInfo *)0x0);
        if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
        uVar63 = *(ushort *)&(pOVar9->fields).initialScale.z;
        uVar17 = SUB42((pOVar9->fields).initialScale.y,0);
        pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (this_01,(MethodInfo *)0x0);
        if (pOVar9 == (ObjectiveArrow *)0x0) goto code_?;
        pMVar57 = (MethodInfo *)(pOVar9->fields).animationSpeed;
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          func_?();
        }
        localPos_01.z._0_1_ = (char)uVar17;
        localPos_01._0_4_ = &stack0xffffffd0;
        localPos_01.z._1_1_ = (char)((ushort)uVar17 >> 8);
        IVar38 = Cube::Cube_GetCubePosAboveFace(localPos_01,(uint)uVar63,pMVar57);
        pMVar7 = (this_00->fields).modelCursor;
        uVar58 = *IVar38._0_4_;
        iVar36 = *(int16_t *)(IVar38._0_4_ + 1);
        uVar17 = (undefined2)uVar58;
        uVar25 = (undefined2)((uint)uVar58 >> 0x10);
        pDVar11 = (DayNightCycle *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
        if ((pDVar11 == (DayNightCycle *)0x0) ||
           (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0),
           pMVar7 == (ModelCursor3D *)0x0)) goto code_?;
        iPos_05.y = uVar25;
        iPos_05.x = uVar17;
        iPos_05.z = iVar36;
        ModelCursor::ModelCursor_SetErrorCursor
                  ((ModelCursor *)pMVar7,iPos_05,(GameObject *)pCVar12,(MethodInfo *)0x0);
      }
      else {
        bVar5 = 1;
      }
    }
    break;
  case 3:
    bVar5 = 0;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      bVar5 = 0;
      func_?();
    }
    bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar18 == 0) {
      if ((this_01 == (PrefabPool *)0x0) ||
         (pDVar11 = (DayNightCycle *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0),
         pDVar11 == (DayNightCycle *)0x0)) goto code_?;
      pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0);
      bVar18 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                         ((GameObject *)pCVar12,(IntVector *)&pGStack_3,(MethodInfo *)0x0);
      if ((bVar18 != 0) &&
         (IVar38.z = iStack_4, IVar38._0_4_ = pGStack_3,
         bVar18 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                            ((CubeModelingStateMachine *)this_01,IVar38,(MethodInfo *)0x0),
         bVar18 != 0)) {
        pos_13.z._0_1_ = (char)iStack_4;
        pos_13._0_4_ = pGStack_3;
        pos_13.z._1_1_ = (char)((ushort)iStack_4 >> 8);
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  ((CubeModelingStateMachine *)this_01,pos_13,AudioActions__Enum_CubeAdded,
                   (MethodInfo *)0x0);
        pVVar42 = PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0);
        iVar36 = iStack_4;
        uVar17 = SUB42(pVVar42,0);
        uVar32 = (undefined1)((uint)pVVar42 >> 0x10);
        uVar33 = (undefined1)((uint)pVVar42 >> 0x18);
        pGVar15 = pGStack_3;
        if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0
            ) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar43 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000
             ) != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                  CubeDataPacker_CornersToByteArray(pVVar43,(MethodInfo *)0x0);
        uVar25 = SUB42(pBVar45,0);
        uVar26 = (undefined2)((uint)pBVar45 >> 0x10);
        uVar44 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           ((CubeModelingStateMachine *)this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          func_?();
        }
        pBVar45 = Cube::Cube_CreateMaterialArray(uVar44,(MethodInfo *)0x0);
        pCVar41 = (Cube *)func_?();
        Cube::Cube__ctor(pCVar41,(Byte__Array *)CONCAT22(uVar26,uVar25),pBVar45,(MethodInfo *)0x0);
        iVar64 = CONCAT13(uVar33,CONCAT12(uVar32,uVar17));
        if (iVar64 == 0) goto code_?;
        pos_09.z._0_1_ = (char)iVar36;
        pos_09._0_4_ = pGVar15;
        pos_09.z._1_1_ = (char)((ushort)iVar36 >> 8);
        MVCubeModelBase::MVCubeModelBase_AddCube
                  ((MVCubeModelBase *)CONCAT22((short)((uint)iVar64 >> 0x10),uVar17),pos_09,
                   (CubeBase *)pCVar41,(MethodInfo *)0x0);
        this_01 = (PrefabPool *)e;
      }
    }
    else {
      (this_00->fields).currentInternalState = 2;
    }
  }
  pCVar6 = (this_00->fields).movingEdgeCube;
  if (pCVar6 == (CubePickingInfo *)0x0) {
    pCVar41 = (Cube *)0x0;
  }
  else {
    pCVar41 = (pCVar6->fields).cube;
    if (pCVar41 == (Cube *)0x0) goto code_?;
    pCVar41 = Cube::Cube_Clone(pCVar41,(MethodInfo *)0x0);
  }
  (this_00->fields).prevCubeState = pCVar41;
  if (this_01 != (PrefabPool *)0x0) {
    pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    (this_00->fields).prevSelectedCube = (CubePickingInfo *)pOVar9;
    pMVar7 = (this_00->fields).modelCursor;
    if (pMVar7 == (ModelCursor3D *)0x0) {
      return;
    }
    pCVar6 = (this_00->fields).movingEdgeCube;
    pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    pDVar11 = (DayNightCycle *)PrefabPool::PrefabPool_get_MVJetPackPrefab(this_01,(MethodInfo *)0x0)
    ;
    if ((pDVar11 != (DayNightCycle *)0x0) &&
       (pCVar12 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar11,(MethodInfo *)0x0),
       pMVar7 != (ModelCursor3D *)0x0)) {
      ModelCursor3D::ModelCursor3D_UpdateCursor
                (pMVar7,pCVar6,(CubePickingInfo *)pOVar9,(GameObject *)pCVar12,
                 (this_00->fields).currentInternalState,bVar5,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pEVar65 = (EditCubes__Class *)in(0x3857);
  this_00->klass = pEVar65;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Exit
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  CubeModelTool::CubeModelTool_SendCubeEvent(0,EditCubeChange__Enum_None,(MethodInfo *)0x0);
  if ((this->fields).currentInternalState == 0) {
    (this->fields).currentInternalState = 2;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
    uVar1 = (this->fields).prevMaterial;
    if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = uVar1;
    pCVar2 = (this->fields).movingEdgeCube;
    if (pCVar2 != (CubePickingInfo *)0x0) {
      this_00 = (pCVar2->fields).cube;
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?();
      }
      value = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                        ((MethodInfo *)0x0);
      if (this_00 == (Cube *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)this_00,value,(MethodInfo *)0x0);
      this_01 = (MVCubeModelBase *)
                PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
      pCVar2 = (this->fields).movingEdgeCube;
      if ((pCVar2 == (CubePickingInfo *)0x0) || (this_01 == (MVCubeModelBase *)0x0))
      goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (this_01,(pCVar2->fields).iLocalPos,(pCVar2->fields).cube,(MethodInfo *)0x0);
    }
    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
    (this->fields).edgeHasMoved = 0;
  }
  (*(code *)(this->klass->vtable).HideCursor.method)();
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar3 != (GameEventManager *)0x0) &&
      (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar4->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (*(Action_1_UIPushOption_ **)(in_stack_5 + 0x10) != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (*(Action_1_UIPushOption_ **)(in_stack_5 + 0x10),in_stack_6,
                 MethodInfo__System__Action<LaserPointerState>__Invoke_LaserPointerState_);
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IntVector GetCubePosNeighborOppositeFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::EditCubes::EditCubes_GetCubePosNeighborOppositeFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  sStack_2 = 0;
  func_?(&uStack_1,CONCAT22(in_stack_3,localPos.z),
                  CONCAT22((undefined2)face,in_stack_3),face,0);
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  pVVar4 = Cube::Cube_GetFaceAxis(&VStack_5,(Face__Enum)method,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  uStack_1 = CONCAT22(uStack_1._2_2_ - (short)(int)(float)uVar7,
                      (short)uStack_1 - (short)(int)(float)uVar6);
  IVar8.z = sStack_2 - (short)(int)pVVar4->z;
  *(undefined4 *)localPos._0_4_ = uStack_1;
  *(short *)(localPos._0_4_ + 4) = IVar8.z;
  IVar8.x = localPos.x;
  IVar8.y = localPos.y;
  return IVar8;
}


/* Boolean GotoMultiChangeCubes() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_GotoMultiChangeCubes
               (EditCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    uVar3 = (uint)((ulonglong)_UNK_? >> 0x20);
    if (((float)(double)CONCAT44((uint)((ulonglong)(double)fVar1 >> 0x20) & uVar3,
                                 SUB84((double)fVar1,0) & (uint)_UNK_?) != 0.0) ||
       ((float)(double)CONCAT44((uint)((ulonglong)(double)fVar2 >> 0x20) & uVar3,
                                SUB84((double)fVar2,0) & (uint)_UNK_?) != 0.0)) {
      return 1;
    }
  }
  return 0;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::EditCubes::EditCubes_HideCursor(EditCubes *this,MethodInfo *method)

{
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
    (*(code *)(pMVar1->klass->vtable).Remove.method)(pMVar1,pMVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEditDetail(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_SetEditDetail
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if (e != (CubeModelingStateMachine *)0x0) {
    pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                       ((PrefabPool *)e,(MethodInfo *)0x0);
    if ((pOVar3 == (ObjectiveArrow *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) {
      return;
    }
    this_01 = (DayNightCycle *)
              PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
    if (this_01 != (DayNightCycle *)0x0) {
      gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
      pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         ((PrefabPool *)e,(MethodInfo *)0x0);
      if (pOVar3 != (ObjectiveArrow *)0x0) {
        fVar4 = (pOVar3->fields).initialScale.y;
        iVar5 = *(int16_t *)&(pOVar3->fields).initialScale.z;
        VStack_6.z = fVar4;
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          uStack_1 = CONCAT44(TypeInfo__SharedCubeFunctions,&UNK_?);
          func_?();
          fVar4 = VStack_6.z;
        }
        iVector.z = iVar5;
        iVector._0_4_ = fVar4;
        pVVar7 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                           (&VStack_6,(GameObject *)gameObject,iVector,(MethodInfo *)0x0);
        uVar8 = pVVar7->x;
        uVar9 = pVVar7->y;
        fVar4 = pVVar7->z;
        fStack_10 = (float)uVar8;
        uStack_11 = uVar9;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((this_02 != (MainCameraManager *)0x0) &&
           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_02,(MethodInfo *)0x0),
           this_03 != (Transform *)0x0)) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffcc,this_03,(MethodInfo *)0x0);
          VStack_6.y = pVVar7->x;
          VStack_6.z = pVVar7->y;
          fVar12 = pVVar7->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fVar12;
          a.x = VStack_6.y;
          a.y = VStack_6.z;
          b.y = (float)uStack_11;
          b.x = fStack_10;
          b.z = fVar4;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffcc,a,b,(MethodInfo *)0x0);
          uStack_1._0_4_ = pVVar7->x;
          uStack_1._4_4_ = pVVar7->y;
          fStack_2 = pVVar7->z;
          fVar13 = (float10)func_?(&uStack_1,0);
          fVar4 = (this->fields).detailEditModeMaxDistance;
          VStack_6.z = (float)fVar13;
          pVVar14 = PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
          if (pVVar14 != (VehicleBaseObject *)0x0) {
            puVar15 = (undefined8 *)
                     (**(code **)&pVVar14->klass[1]._0.this_arg.attrs)
                               (&stack0xffffffcc,pVVar14,pVVar14->klass[1]._0.element_class);
            this_00 = (this->fields).modelCursor;
            uStack_16 = (undefined4)*puVar15;
            fStack_10 = (float)((ulonglong)*puVar15 >> 0x20);
            if (fStack_10 * fVar4 < VStack_6.z) {
              (this->fields).mouseSensitivity = 0.1325;
              if (this_00 != (ModelCursor3D *)0x0) {
                ModelCursor3D::ModelCursor3D_SetIndentAreaSize(this_00,1.0,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              (this->fields).mouseSensitivity = 0.0225;
              if (this_00 != (ModelCursor3D *)0x0) {
                ModelCursor3D::ModelCursor3D_SetIndentAreaSize(this_00,0.5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* EditCubes() */

void Assembly-CSharp.dll::EditCubes::EditCubes__ctor(EditCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).mouseSensitivityExtrude = 2.02;
  (this->fields).mouseUpTimeBeforeMoveEdge = 0.3;
  (this->fields).detailEditModeMaxDistance = 30.0;
  (this->fields).currentInternalState = 2;
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CursorVisible() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_get_CursorVisible(EditCubes *this,MethodInfo *method)

{
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
    bVar2 = (*(code *)(pMVar1->klass->vtable).get_CursorVisible.method)
                      (pMVar1,(pMVar1->klass->vtable).set_CursorVisible.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::EditCubes::EditCubes_set_CursorVisible
               (EditCubes *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_CursorVisible.method)
              (pMVar1,_value,(pMVar1->klass->vtable).Remove.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

