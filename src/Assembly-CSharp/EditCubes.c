
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Enter
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__ModelCursor3D);
    cRam_? = '\x01';
  }
  (this->fields).delta = 0.0;
  (this->fields).deltaAccum = 0.0;
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    this_01 = (ModelCursor3D *)func_?(TypeInfo__ModelCursor3D);
    ModelCursor3D::ModelCursor3D__ctor(this_01,cubeCorners,(MethodInfo *)0x0);
    ppMVar1 = &(this->fields).modelCursor;
    *ppMVar1 = this_01;
    func_?(ppMVar1,this_01);
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar2 != (GameEventManager *)0x0) &&
        (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
        pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_00 = (pGVar3->fields).LaserCommands,
       this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
      AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_00,2,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      (this->fields)._.waitForMouseUp = bVar4;
      (this->fields).currentInternalState = 2;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?(&StringLiteral_____EditCube_OutOfBoundsAdd___er);
    func_?(&StringLiteral_____EditCube_main_state);
    func_?(&StringLiteral_____EditCube_multi_change___edge);
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?(&StringLiteral_____EditCube_OutOfBoundsAddVerte);
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_____EditCube_paint_state);
    func_?(&StringLiteral_____EditCube_OutOfBoundsAdd___ad);
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?(&StringLiteral_____EditCube_OutOfBoundsAddEdge_);
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?(&StringLiteral_____EditCube_WithinBounds___corn);
    func_?(&StringLiteral_____EditCube_WithinBounds___unlo);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  bVar3 = 0;
  uVar4._0_2_ = 0;
  uVar4._2_2_ = 0;
  iVar5 = 0;
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  EVar6 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar7;
    goto code_?;
  }
  ppCVar8 = &(this->fields).movingEdgeCube;
  pMVar9 = (this->fields).modelCursor;
  this_04 = (MVCubeModelBase *)e;
  pMVar10 = (MVCubeModelBase *)e;
  if (pMVar9 == (ModelCursor3D *)0x0) {
code_?:
    bVar3 = 0;
    func_?();
    func_?();
    func_?();
    gameObject = this;
  }
  else {
    if ((pMVar9->fields).indentArea != (IndentArea *)0x0 && *ppCVar8 == (CubePickingInfo *)0x0) {
      if (e != (CubeModelingStateMachine *)0x0) {
        pCVar11 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar11 == (CubePickingInfo *)0x0) goto code_?;
        pIVar12 = (pMVar9->fields).indentArea;
        pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar13 != (MVCubeModelBase *)0x0) && (pIVar12 != (IndentArea *)0x0)) {
          uVar2 = (undefined2)((uint)pIVar12 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar12,pCVar11,(pMVar13->fields)._.gameObject,(MethodInfo *)0x0);
          pMVar9 = (this->fields).modelCursor;
          if ((pMVar9 != (ModelCursor3D *)0x0) &&
             (pIVar12 = (pMVar9->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
            bVar7 = IndentArea::IndentArea_IsColliding(pIVar12,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              pMVar9 = (this->fields).modelCursor;
              if (((pMVar9 != (ModelCursor3D *)0x0) &&
                  (pIVar12 = (pMVar9->fields).indentArea, pIVar12 != (IndentArea *)0x0)) &&
                 (pGVar14 = (pIVar12->fields).gameObject, pGVar14 != (GameObject *)0x0)) {
                bVar7 = 0;
code_?:
                in_stack_15 = (undefined2)((uint)pGVar14 >> 0x10);
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar14,bVar7,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar11 = (e->fields)._SelectedCube_k__BackingField;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                (pCVar11->fields).pickedEdge = 0;
                pMVar9 = (this->fields).modelCursor;
                if (((pMVar9 != (ModelCursor3D *)0x0) &&
                    (pIVar12 = (pMVar9->fields).indentArea, pIVar12 != (IndentArea *)0x0)) &&
                   (pGVar14 = (pIVar12->fields).gameObject, pGVar14 != (GameObject *)0x0)) {
                  bVar7 = 1;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      in_stack_16 = 0;
      in_stack_17 = 0;
      in_stack_18 = 0;
      fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).prevMouseUpTime = fVar19;
    }
    if (cRam_? == '\0') {
      in_stack_16 = 0x60;
      in_stack_17 = 0x5e;
      in_stack_18 = 0x1045;
      func_?();
      cRam_? = '\x01';
    }
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pCVar11 = (e->fields)._SelectedCube_k__BackingField;
    if ((pCVar11 == (CubePickingInfo *)0x0) || (*ppCVar8 != (CubePickingInfo *)0x0))
    goto code_?;
    pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar13 == (MVCubeModelBase *)0x0) goto code_?;
    uVar20 = (pCVar11->fields).iLocalPos.x;
    uVar21 = (pCVar11->fields).iLocalPos.y;
    IVar22.y = uVar21;
    IVar22.x = uVar20;
    iVar23 = (pCVar11->fields).iLocalPos.z;
    pGVar14 = (pMVar13->fields)._.gameObject;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar22.z._0_1_ = (char)iVar23;
    IVar22.z._1_1_ = (char)((ushort)iVar23 >> 8);
    pVVar24 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                        ((Vector3 *)&stack0xffffffcc,pGVar14,IVar22,(MethodInfo *)0x0);
    method_00 = pVVar24->y;
    in_stack_25 = (undefined2)((uint)pVVar24->z >> 0x10);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                        ((MethodInfo *)method_00);
    if ((this_03 == (MainCameraManager *)0x0) ||
       (pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_03,(MethodInfo *)0x0), pTVar26 == (Transform *)0x0))
    goto code_?;
    in_stack_27 = &UNK_?;
    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffcc,pTVar26,(MethodInfo *)0x0);
    auStack_28._0_4_ = pVVar24->x;
    unique0x0000a404 = pVVar24->y;
    puStack_29 = (undefined *)pVVar24->z;
    fVar30 = (float10)func_?();
    pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
    fVar19 = (float)fVar30;
    if (pMVar13 == (MVCubeModelBase *)0x0) goto code_?;
    in_stack_16 = SUB41(pMVar13,0);
    in_stack_17 = (undefined1)((uint)pMVar13 >> 8);
    in_stack_18 = (undefined2)((uint)pMVar13 >> 0x10);
    puVar31 = (undefined8 *)(*(code *)(pMVar13->klass->vtable).get_Scale.method)();
    pMVar9 = (this->fields).modelCursor;
    if ((float)(MonitorData *)((ulonglong)*puVar31 >> 0x20) * _UNK_? < fVar19) {
      (this->fields).mouseSensitivity = 0.1325;
      if ((pMVar9 != (ModelCursor3D *)0x0) &&
         (pIVar12 = (pMVar9->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
        (pIVar12->fields).size = 1.0;
        goto code_?;
      }
      goto code_?;
    }
    (this->fields).mouseSensitivity = 0.0225;
    if ((pMVar9 == (ModelCursor3D *)0x0) ||
       (pIVar12 = (pMVar9->fields).indentArea, pIVar12 == (IndentArea *)0x0))
    goto code_?;
    (pIVar12->fields).size = 0.5;
code_?:
    bVar7 = 0;
    pMVar13 = (MVCubeModelBase *)e;
    switch((this->fields).currentInternalState) {
    case 0:
      if (*ppCVar8 != (CubePickingInfo *)0x0) {
        bVar7 = 0;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          in_stack_16 = 0x40;
          in_stack_17 = 0x60;
          in_stack_18 = 0x1045;
          bVar7 = 0;
          func_?();
        }
        bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar32 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar19 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                             (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          fVar33 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                             (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          puStack_29 = (undefined *)0x0;
          _auStack_44 = CONCAT44(fVar33 * _UNK_?,fVar19 * _UNK_?);
          pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar11 = *ppCVar8;
          fVar19 = (this->fields).mouseSensitivity;
          pfVar35 = &(this->fields).deltaAccum;
          ppCVar8 = &(this->fields).movingEdgeCube;
          if (pCVar11 != (CubePickingInfo *)0x0) {
            uVar4 = CONCAT31((int3)((uint)in_stack_27 >> 8),
                              (pCVar11->fields).pickedEdgeIndex0);
            bVar32 = (pCVar11->fields).pickedEdgeIndex1;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar36 = (undefined2)((uint)uVar4 >> 0x10);
            VVar37.z = (float)puStack_29;
            VVar37.x = (float)auStack_28._0_4_;
            VVar37.y = (float)stack0xffffffc0;
            CVar38 = SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                               (pMVar34,pCVar11,VVar37,&(this->fields).delta,pfVar35,fVar19,
                                &stack0xffffffcb,(bool)uVar4,bVar32,
                                (EditCubeChange__Enum *)&stack0xffffffb8,(MethodInfo *)0x0);
            if (CVar38 == CubeOutOfBoundState__Enum_WithinBounds) {
              pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar34 == (MVCubeModelBase *)0x0) goto code_?;
              iVar39 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar34,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar39,EVar6,(MethodInfo *)0x0);
            }
            if ((bVar3 & (this->fields).edgeHasMoved == 0) != 0) {
              (this->fields).edgeHasMoved = 1;
            }
            if (CVar38 == CubeOutOfBoundState__Enum_OutOfBoundsAdd) {
              pCVar11 = *ppCVar8;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                uVar40 = (pCVar11->fields).iLocalPos.x;
                iVar5 = (pCVar11->fields).iLocalPos.z;
                pMVar41 = (MethodInfo *)(pCVar11->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_01.z = uVar40;
                localPos_01._0_4_ = auStack_28 + 4;
                IVar22 = Cube::Cube_GetCubePosAboveFace(localPos_01,CONCAT22(uVar2,iVar5),pMVar41)
                ;
                pfVar35 = IVar22._0_4_;
                fStack_42 = *pfVar35;
                iVar5 = *(int16_t *)(pfVar35 + 1);
                fVar19 = *pfVar35;
                uVar2 = *(undefined2 *)(pfVar35 + 1);
                pCVar11 = *ppCVar8;
                pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((((pMVar43 != (MVNetworkGame *)0x0) &&
                     (pMVar44 = (pMVar43->fields)._MaterialRepository_k__BackingField,
                     pCVar11 != (CubePickingInfo *)0x0)) &&
                    (pCVar45 = (pCVar11->fields).cube, pCVar45 != (Cube *)0x0)) &&
                   (pMVar44 != (MVMaterialRepository *)0x0)) {
                  bVar32 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                     (pMVar44,(pCVar45->fields)._.faceMaterials,(MethodInfo *)0x0);
                  if (bVar32 == 0) {
                    CStack_46 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                  }
                  else {
                    requestedCubePos_01.z._0_1_ = (char)uVar2;
                    requestedCubePos_01._0_4_ = fVar19;
                    requestedCubePos_01.z._1_1_ = (char)((ushort)uVar2 >> 8);
                    CStack_46 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                          (e,requestedCubePos_01,(MethodInfo *)0x0);
                    if (CStack_46 == CanPerformCubeActionResult__Enum_Yes) {
                      pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar34 != (MVCubeModelBase *)0x0) {
                        pos_12.z = iVar5;
                        pos_12._0_4_ = fStack_42;
                        pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                            (pMVar34,pos_12,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                           ((CubeBase *)pCVar45,(CubeBase *)0x0,(MethodInfo *)0x0);
                        if (bVar32 == 0) goto code_?;
                        pos_05.z._0_1_ = (char)iVar5;
                        pos_05._0_4_ = fStack_42;
                        pos_05.z._1_1_ = (char)((ushort)iVar5 >> 8);
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,pos_05,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                        pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                        pCVar11 = *ppCVar8;
                        if (pCVar11 != (CubePickingInfo *)0x0) {
                          pCVar45 = (pCVar11->fields).cube;
                          FVar47 = (pCVar11->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar48 = Cube::Cube_GetCorners(pCVar45,FVar47,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
                          uVar50 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          this_04 = (MVCubeModelBase *)
                                    Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
                          pCVar45 = (Cube *)func_?();
                          Cube::Cube__ctor(pCVar45,pBVar49,(Byte__Array *)this_04,(MethodInfo *)0x0)
                          ;
                          if (pMVar13 != (MVCubeModelBase *)0x0) {
                            pos_06.z._0_1_ = (char)iVar5;
                            pos_06._0_4_ = fStack_42;
                            pos_06.z._1_1_ = (char)((ushort)iVar5 >> 8);
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      (pMVar13,pos_06,(CubeBase *)pCVar45,(MethodInfo *)0x0);
                            pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                            if (pMVar13 != (MVCubeModelBase *)0x0) {
                              iVar39 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar13,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar39,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                              pCVar11 = (this->fields).movingEdgeCube;
                              pMVar10 = (MVCubeModelBase *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        ((CubePickingInfo *)pMVar10,pCVar11,(MethodInfo *)0x0);
                              pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                              this_04 = pMVar10;
                              if (pMVar13 != (MVCubeModelBase *)0x0) {
                                pos_07.z._0_1_ = (char)iVar5;
                                pos_07._0_4_ = fStack_42;
                                pos_07.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                    (pMVar13,pos_07,(MethodInfo *)0x0);
                                pCVar45 = Cube::Cube_Clone_1(pCVar45,(MethodInfo *)0x0);
                                if (pMVar10 != (MVCubeModelBase *)0x0) {
                                  (pMVar10->fields)._._.id = (int32_t)pCVar45;
                                  func_?();
                                  (pMVar10->fields)._._.position.y = fStack_42;
                                  *(int16_t *)&(pMVar10->fields)._._.position.z = iVar5;
                                  this_04 = (MVCubeModelBase *)&(this->fields).movingEdgeCube;
                                  pCVar11 = *(CubePickingInfo **)this_04;
                                  if ((pCVar11 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar11->fields).iLocalPos,(pCVar11->fields).cube,
                                               (MethodInfo *)0x0);
                                    *(MVCubeModelBase **)this_04 = pMVar10;
                                    func_?();
                                    pMVar10 = *(MVCubeModelBase **)this_04;
                                    if (pMVar10 != (MVCubeModelBase *)0x0) {
                                      pVVar24 = Cube::Cube_GetFaceAxis
                                                          ((Vector3 *)&stack0xffffffcc,
                                                           (pMVar10->fields)._._.groupId,
                                                           (MethodInfo *)0x0);
                                      axis_02.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
                                      axis_02._0_10_ = *(unkbyte10 *)pVVar24;
                                      Cube::Cube_MoveFace((CubePickingInfo *)pMVar10,-0.75,axis_02,
                                                          (CubeOutOfBoundState__Enum *)
                                                          &stack0xffffff80,(MethodInfo *)0x0);
code_?:
                                      this_04 = (MVCubeModelBase *)&(this->fields).movingEdgeCube;
                                      pCVar11 = *(CubePickingInfo **)this_04;
                                      if ((pCVar11 != (CubePickingInfo *)0x0) &&
                                         ((e->fields)._TargetCubeModel_k__BackingField !=
                                          (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar11->fields).iLocalPos,
                                                   (pCVar11->fields).cube,(MethodInfo *)0x0);
                                        pMVar13 = pMVar10;
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                  }
code_?:
                  pSVar51 = mscorlib.dll::System::Enum::Enum_ToString
                                      ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                  uVar52 = SUB41(pSVar51,0);
                  uVar53 = (undefined1)((uint)pSVar51 >> 8);
                  uVar36 = (undefined2)((uint)pSVar51 >> 0x10);
                  uVar54 = SUB41(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                  uVar55 = (undefined1)((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 8);
                  uVar2 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)CONCAT22(uVar2,CONCAT11(uVar55,uVar54)),
                             (String *)CONCAT22(uVar36,CONCAT11(uVar53,uVar52)),(MethodInfo *)0x0);
                  pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar9 = (this->fields).modelCursor;
                  if ((pMVar34 != (MVCubeModelBase *)0x0) && (pMVar9 != (ModelCursor3D *)0x0)) {
                    iPos_02.z._0_1_ = (char)iVar5;
                    iPos_02._0_4_ = fStack_42;
                    iPos_02.z._1_1_ = (char)((ushort)iVar5 >> 8);
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar9,iPos_02,(pMVar34->fields)._.gameObject,
                               CStack_46 == CanPerformCubeActionResult__Enum_UnlockMaterial,
                               (MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
joined_?:
                    this_04 = pMVar34;
                    if ((pCVar11 != (CubePickingInfo *)0x0) &&
                       (this_04 = (MVCubeModelBase *)0x0, pMVar34 != (MVCubeModelBase *)0x0)) {
                      uVar36 = 0;
                      uVar56 = 0;
                      pCVar45 = ((CubePickingInfo__Fields *)((int)pCVar11 + 8))->cube;
                      uVar54 = SUB41(pCVar45,0);
                      uVar55 = (undefined1)((uint)pCVar45 >> 8);
                      uVar2 = (undefined2)((uint)pCVar45 >> 0x10);
code_?:
                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                (pMVar34,(pCVar11->fields).iLocalPos,
                                 (Cube *)CONCAT22(uVar2,CONCAT11(uVar55,uVar54)),
                                 (MethodInfo *)CONCAT22(uVar56,uVar36));
                      *ppCVar8 = (CubePickingInfo *)0x0;
                      func_?();
                      break;
                    }
                  }
                }
              }
            }
            else if (CVar38 == CubeOutOfBoundState__Enum_OutOfBoundsAddEdge) {
              pCVar11 = *ppCVar8;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                uVar57 = (pCVar11->fields).iLocalPos.x;
                iVar5 = (pCVar11->fields).iLocalPos.z;
                pMVar41 = (MethodInfo *)(pCVar11->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_00.z = uVar57;
                localPos_00._0_4_ = auStack_28 + 4;
                IVar22 = Cube::Cube_GetCubePosAboveFace(localPos_00,CONCAT22(uVar2,iVar5),pMVar41)
                ;
                pfVar35 = IVar22._0_4_;
                fStack_42 = *pfVar35;
                iVar5 = *(int16_t *)(pfVar35 + 1);
                fVar19 = *pfVar35;
                uVar2 = *(undefined2 *)(pfVar35 + 1);
                pCVar11 = *ppCVar8;
                pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar43 != (MVNetworkGame *)0x0) &&
                    (pMVar44 = (pMVar43->fields)._MaterialRepository_k__BackingField,
                    pCVar11 != (CubePickingInfo *)0x0)) &&
                   ((pCVar45 = (pCVar11->fields).cube, pCVar45 != (Cube *)0x0 &&
                    (pMVar44 != (MVMaterialRepository *)0x0)))) {
                  bVar32 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                     (pMVar44,(pCVar45->fields)._.faceMaterials,(MethodInfo *)0x0);
                  if (bVar32 == 0) {
                    CStack_46 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                  }
                  else {
                    requestedCubePos_00.z._0_1_ = (char)uVar2;
                    requestedCubePos_00._0_4_ = fVar19;
                    requestedCubePos_00.z._1_1_ = (char)((ushort)uVar2 >> 8);
                    CStack_46 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                          (e,requestedCubePos_00,(MethodInfo *)0x0);
                    if (CStack_46 == CanPerformCubeActionResult__Enum_Yes) {
                      pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar34 != (MVCubeModelBase *)0x0) {
                        pos_10.z = iVar5;
                        pos_10._0_4_ = fStack_42;
                        pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                            (pMVar34,pos_10,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                           ((CubeBase *)pCVar45,(CubeBase *)0x0,(MethodInfo *)0x0);
                        if (bVar32 == 0) goto code_?;
                        if (*ppCVar8 != (CubePickingInfo *)0x0) {
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,((*ppCVar8)->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                     (MethodInfo *)0x0);
                          pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                          pCVar11 = *ppCVar8;
                          if (pCVar11 != (CubePickingInfo *)0x0) {
                            pCVar45 = (pCVar11->fields).cube;
                            FVar47 = (pCVar11->fields).pickedFace;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              _auStack_44 = CONCAT44(stack0xffffffc0,TypeInfo__Cube);
                              func_?();
                            }
                            pVVar48 = Cube::Cube_GetCorners(pCVar45,FVar47,(MethodInfo *)0x0);
                            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                      CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
                            uVar50 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_get_CurrentMaterialId
                                               (e,(MethodInfo *)0x0);
                            this_04 = (MVCubeModelBase *)
                                      Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
                            pCVar45 = (Cube *)func_?();
                            Cube::Cube__ctor(pCVar45,pBVar49,(Byte__Array *)this_04,
                                             (MethodInfo *)0x0);
                            if (pMVar13 != (MVCubeModelBase *)0x0) {
                              pos_11.z = iVar5;
                              pos_11._0_4_ = fStack_42;
                              MVCubeModelBase::MVCubeModelBase_AddCube
                                        (pMVar13,pos_11,(CubeBase *)pCVar45,(MethodInfo *)0x0);
                              pCVar11 = (this->fields).movingEdgeCube;
                              pMVar34 = (MVCubeModelBase *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        ((CubePickingInfo *)pMVar34,pCVar11,(MethodInfo *)0x0);
                              pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                              this_04 = pMVar34;
                              if (pMVar13 != (MVCubeModelBase *)0x0) {
                                pos_04.z._0_1_ = (char)iVar5;
                                pos_04._0_4_ = fStack_42;
                                pos_04.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                    (pMVar13,pos_04,(MethodInfo *)0x0);
                                pCVar45 = Cube::Cube_Clone_1(pCVar45,(MethodInfo *)0x0);
                                if (pMVar34 != (MVCubeModelBase *)0x0) {
                                  (pMVar34->fields)._._.id = (int32_t)pCVar45;
                                  func_?();
                                  (pMVar34->fields)._._.position.y = fStack_42;
                                  *(int16_t *)&(pMVar34->fields)._._.position.z = iVar5;
                                  this_04 = (MVCubeModelBase *)&(this->fields).movingEdgeCube;
                                  pCVar11 = *(CubePickingInfo **)this_04;
                                  if ((pCVar11 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar11->fields).iLocalPos,(pCVar11->fields).cube,
                                               (MethodInfo *)0x0);
                                    *(MVCubeModelBase **)this_04 = pMVar34;
                                    func_?();
                                    pCVar11 = *(CubePickingInfo **)this_04;
                                    pMVar10 = (MVCubeModelBase *)0x0;
                                    if (pCVar11 != (CubePickingInfo *)0x0) {
                                      pVVar24 = Cube::Cube_GetFaceAxis
                                                          ((Vector3 *)&stack0xffffffcc,
                                                           (pCVar11->fields).pickedFace,
                                                           (MethodInfo *)0x0);
                                      axis_00.z._1_1_ = (char)((uint)pVVar24->z >> 8);
                                      axis_00._0_9_ = *(unkbyte9 *)pVVar24;
                                      axis_00.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
                                      Cube::Cube_MoveFace(pCVar11,-1.0,axis_00,
                                                          (CubeOutOfBoundState__Enum *)
                                                          &stack0xffffff84,(MethodInfo *)0x0);
                                      pMVar10 = *(MVCubeModelBase **)this_04;
                                      if (pMVar10 != (MVCubeModelBase *)0x0) {
                                        pVVar24 = Cube::Cube_GetFaceAxis
                                                            ((Vector3 *)&stack0xffffffcc,
                                                             (pMVar10->fields)._._.groupId,
                                                             (MethodInfo *)0x0);
                                        axis_01.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
                                        axis_01._0_10_ = *(unkbyte10 *)pVVar24;
                                        Cube::Cube_MoveEdge((CubePickingInfo *)pMVar10,-0.75,axis_01
                                                            ,(CubeOutOfBoundState__Enum *)
                                                             &stack0xffffff84,(MethodInfo *)0x0);
                                        goto code_?;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto code_?;
                    }
                  }
code_?:
                  pSVar51 = mscorlib.dll::System::Enum::Enum_ToString
                                      ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                  uVar52 = SUB41(pSVar51,0);
                  uVar53 = (undefined1)((uint)pSVar51 >> 8);
                  uVar36 = (undefined2)((uint)pSVar51 >> 0x10);
                  uVar54 = SUB41(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                  uVar55 = (undefined1)((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 8);
                  uVar2 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                  goto code_?;
                }
              }
            }
            else if (CVar38 == CubeOutOfBoundState__Enum_OutOfBoundsAddVertex) {
              pCVar11 = *ppCVar8;
              if (pCVar11 != (CubePickingInfo *)0x0) {
                uVar58 = (pCVar11->fields).iLocalPos.x;
                iVar5 = (pCVar11->fields).iLocalPos.z;
                pMVar41 = (MethodInfo *)(pCVar11->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos.z = uVar58;
                localPos._0_4_ = auStack_28 + 4;
                IVar22 = Cube::Cube_GetCubePosAboveFace(localPos,CONCAT22(uVar36,iVar5),pMVar41);
                pfVar35 = IVar22._0_4_;
                fVar19 = *pfVar35;
                iVar5 = *(int16_t *)(pfVar35 + 1);
                fVar33 = *pfVar35;
                uVar2 = *(undefined2 *)(pfVar35 + 1);
                pCVar11 = *ppCVar8;
                pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((((pMVar43 != (MVNetworkGame *)0x0) &&
                     (pMVar44 = (pMVar43->fields)._MaterialRepository_k__BackingField,
                     pCVar11 != (CubePickingInfo *)0x0)) &&
                    (pCVar45 = (pCVar11->fields).cube, pCVar45 != (Cube *)0x0)) &&
                   (pMVar44 != (MVMaterialRepository *)0x0)) {
                  bVar32 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                     (pMVar44,(pCVar45->fields)._.faceMaterials,(MethodInfo *)0x0);
                  if (bVar32 == 0) {
                    CStack_46 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                  }
                  else {
                    requestedCubePos.z._0_1_ = (char)uVar2;
                    requestedCubePos._0_4_ = fVar33;
                    requestedCubePos.z._1_1_ = (char)((ushort)uVar2 >> 8);
                    CStack_46 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                          (e,requestedCubePos,(MethodInfo *)0x0);
                    if (CStack_46 == CanPerformCubeActionResult__Enum_Yes) {
                      pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar34 != (MVCubeModelBase *)0x0) {
                        pos_01.z = iVar5;
                        pos_01._0_4_ = fVar19;
                        pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                            (pMVar34,pos_01,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                           ((CubeBase *)pCVar45,(CubeBase *)0x0,(MethodInfo *)0x0);
                        if (bVar32 == 0) goto code_?;
                        if (*ppCVar8 != (CubePickingInfo *)0x0) {
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,((*ppCVar8)->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                     (MethodInfo *)0x0);
                          pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                          pCVar11 = *ppCVar8;
                          if (pCVar11 != (CubePickingInfo *)0x0) {
                            pCVar45 = (pCVar11->fields).cube;
                            FVar47 = (pCVar11->fields).pickedFace;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pVVar48 = Cube::Cube_GetCorners(pCVar45,FVar47,(MethodInfo *)0x0);
                            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                      CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
                            uVar50 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_get_CurrentMaterialId
                                               (e,(MethodInfo *)0x0);
                            this_04 = (MVCubeModelBase *)
                                      Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
                            pCVar45 = (Cube *)func_?();
                            Cube::Cube__ctor(pCVar45,pBVar49,(Byte__Array *)this_04,
                                             (MethodInfo *)0x0);
                            if (pMVar13 != (MVCubeModelBase *)0x0) {
                              pos_09.z = iVar5;
                              pos_09._0_4_ = fVar19;
                              MVCubeModelBase::MVCubeModelBase_AddCube
                                        (pMVar13,pos_09,(CubeBase *)pCVar45,(MethodInfo *)0x0);
                              pCVar11 = (this->fields).movingEdgeCube;
                              pMVar34 = (MVCubeModelBase *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        ((CubePickingInfo *)pMVar34,pCVar11,(MethodInfo *)0x0);
                              pMVar13 = (e->fields)._TargetCubeModel_k__BackingField;
                              this_04 = pMVar34;
                              if (pMVar13 != (MVCubeModelBase *)0x0) {
                                pos_03.z._0_1_ = (char)iVar5;
                                pos_03._0_4_ = fVar19;
                                pos_03.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                pCVar45 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                    (pMVar13,pos_03,(MethodInfo *)0x0);
                                pCVar45 = Cube::Cube_Clone_1(pCVar45,(MethodInfo *)0x0);
                                if (pMVar34 != (MVCubeModelBase *)0x0) {
                                  (pMVar34->fields)._._.id = (int32_t)pCVar45;
                                  func_?();
                                  (pMVar34->fields)._._.position.y = fVar19;
                                  *(int16_t *)&(pMVar34->fields)._._.position.z = iVar5;
                                  this_04 = (MVCubeModelBase *)&(this->fields).movingEdgeCube;
                                  pCVar11 = *(CubePickingInfo **)this_04;
                                  if ((pCVar11 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar11->fields).iLocalPos,(pCVar11->fields).cube,
                                               (MethodInfo *)0x0);
                                    *(MVCubeModelBase **)this_04 = pMVar34;
                                    func_?();
                                    pCVar11 = *(CubePickingInfo **)this_04;
                                    pMVar10 = (MVCubeModelBase *)0x0;
                                    if (pCVar11 != (CubePickingInfo *)0x0) {
                                      pVVar24 = Cube::Cube_GetFaceAxis
                                                          ((Vector3 *)&stack0xffffffcc,
                                                           (pCVar11->fields).pickedFace,
                                                           (MethodInfo *)0x0);
                                      axis.z._1_1_ = (char)((uint)pVVar24->z >> 8);
                                      axis._0_9_ = *(unkbyte9 *)pVVar24;
                                      axis.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
                                      Cube::Cube_MoveFace(pCVar11,-1.0,axis,
                                                          (CubeOutOfBoundState__Enum *)
                                                          &stack0xffffff88,(MethodInfo *)0x0);
                                      pMVar10 = *(MVCubeModelBase **)this_04;
                                      if (pMVar10 != (MVCubeModelBase *)0x0) {
                                        pVVar24 = Cube::Cube_GetFaceAxis
                                                            ((Vector3 *)&stack0xffffffcc,
                                                             (pMVar10->fields)._._.groupId,
                                                             (MethodInfo *)0x0);
                                        pCVar11 = *(CubePickingInfo **)this_04;
                                        if (pCVar11 != (CubePickingInfo *)0x0) {
                                          Cube::Cube_MoveVertex
                                                    ((CubePickingInfo *)pMVar10,-0.75,*pVVar24,
                                                     (pCVar11->fields).pickedEdgeIndex0,
                                                     (pCVar11->fields).pickedEdgeIndex1,
                                                     (CubeOutOfBoundState__Enum *)&stack0xffffff88,
                                                     (MethodInfo *)0x0);
                                          goto code_?;
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
                      goto code_?;
                    }
                  }
code_?:
                  pSVar51 = mscorlib.dll::System::Enum::Enum_ToString
                                      ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                  mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_____EditCube_OutOfBoundsAddVerte,pSVar51,
                             (MethodInfo *)0x0);
                  pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar9 = (this->fields).modelCursor;
                  if ((pMVar34 != (MVCubeModelBase *)0x0) && (pMVar9 != (ModelCursor3D *)0x0)) {
                    iPos.z._0_1_ = (char)iVar5;
                    iPos._0_4_ = fVar19;
                    iPos.z._1_1_ = (char)((ushort)iVar5 >> 8);
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar9,iPos,(pMVar34->fields)._.gameObject,
                               CStack_46 == CanPerformCubeActionResult__Enum_UnlockMaterial,
                               (MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                    goto joined_?;
                  }
                }
              }
            }
            else if (CVar38 == CubeOutOfBoundState__Enum_OutOfBoundsRemove) {
              pCVar11 = *ppCVar8;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((pCVar11 != (CubePickingInfo *)0x0) &&
                 (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                 pMVar34 != (MVCubeModelBase *)0x0)) {
                if ((((pMVar34->fields)._.interactionFlags & 4) == 0) &&
                   (((e->fields).constraint != (IModelingConstraint *)0x0 &&
                    (cVar59 = func_?(), cVar59 == '\0')))) {
code_?:
                  pCVar11 = *ppCVar8;
                  pMVar9 = (this->fields).modelCursor;
                  if (((pCVar11 != (CubePickingInfo *)0x0) &&
                      (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar34 != (MVCubeModelBase *)0x0)) && (pMVar9 != (ModelCursor3D *)0x0)) {
                    uVar36 = 0;
                    uVar56 = 0;
                    iPos_01.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                    iPos_01._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar9,iPos_01,(pMVar34->fields)._.gameObject,0,
                               (MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                    this_04 = pMVar34;
                    if ((pCVar11 != (CubePickingInfo *)0x0) && (pMVar34 != (MVCubeModelBase *)0x0))
                    {
                      pCVar45 = (this->fields).prevCubeState;
                      uVar54 = SUB41(pCVar45,0);
                      uVar55 = (undefined1)((uint)pCVar45 >> 8);
                      uVar2 = (undefined2)((uint)pCVar45 >> 0x10);
                      goto code_?;
                    }
                  }
                }
                else {
                  pCVar11 = *ppCVar8;
                  if (pCVar11 != (CubePickingInfo *)0x0) {
                    iVar39._0_2_ = (pCVar11->fields).iLocalPos.x;
                    iVar39._2_2_ = (pCVar11->fields).iLocalPos.y;
                    iVar5 = (pCVar11->fields).iLocalPos.z;
                    FVar47 = (pCVar11->fields).pickedFace;
                    uVar2 = iVar39._2_2_;
                    if (cRam_? == '\0') {
                      uVar2 = 0x11b1;
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    _auStack_44 = _auStack_44 & 0xffffffff;
                    puStack_29 = (undefined *)((uint)puStack_29 & 0xffff0000);
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              ((IntVector *)(auStack_28 + 4),iVar39,CONCAT22(iVar5,uVar2),
                               CONCAT22(in_stack_25,iVar5),(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pVVar24 = Cube::Cube_GetFaceAxis
                                        ((Vector3 *)&stack0xffffffcc,FVar47,(MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    uVar60 = pVVar24->x;
                    uVar61 = pVVar24->y;
                    sVar62 = auStack_28._4_2_ - (short)(int)(float)uVar60;
                    _auStack_44 = CONCAT26(sStack_63 - (short)(int)(float)uVar61,
                                           CONCAT24(sVar62,auStack_28._0_4_));
                    sVar62 = (short)puStack_29 - (short)(int)pVVar24->z;
                    if (pCVar11 != (CubePickingInfo *)0x0) {
                      pos_00.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                      pos_00._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                (e,pos_00,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                      if ((*ppCVar8 != (CubePickingInfo *)0x0) &&
                         ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) {
                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                   ((*ppCVar8)->fields).iLocalPos,(MethodInfo *)0x0);
                        uVar64 = _auStack_44;
                        pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar34 != (MVCubeModelBase *)0x0) {
                          pos_15.z._0_1_ = (char)sVar62;
                          pos_15.x = auStack_28._4_2_;
                          pos_15.y = sStack_63;
                          pos_15.z._1_1_ = (char)((ushort)sVar62 >> 8);
                          _auStack_44 = uVar64;
                          a = MVCubeModelBase::MVCubeModelBase_GetCube
                                        (pMVar34,pos_15,(MethodInfo *)0x0);
                          pCVar45 = a;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar32 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Inequality
                                             ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                          if (bVar32 == 0) {
                            *ppCVar8 = (CubePickingInfo *)0x0;
                            func_?();
                          }
                          else {
                            pCVar11 = *ppCVar8;
                            pCVar65 = (CubePickingInfo *)func_?();
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      (pCVar65,pCVar11,(MethodInfo *)0x0);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pCVar45 = Cube::Cube_Clone_1(pCVar45,(MethodInfo *)0x0);
                            this_04 = (MVCubeModelBase *)0x0;
                            if (pCVar65 == (CubePickingInfo *)0x0) goto code_?;
                            (pCVar65->fields).cube = pCVar45;
                            func_?();
                            uVar64 = _auStack_44;
                            (pCVar65->fields).iLocalPos.x = auStack_28._4_2_;
                            (pCVar65->fields).iLocalPos.y = sStack_63;
                            (pCVar65->fields).iLocalPos.z = sVar62;
                            *ppCVar8 = pCVar65;
                            _auStack_44 = uVar64;
                            func_?();
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (CVar38 != CubeOutOfBoundState__Enum_WithinBounds) break;
              pCVar11 = *ppCVar8;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((pCVar11 != (CubePickingInfo *)0x0) &&
                 (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                 pMVar34 != (MVCubeModelBase *)0x0)) {
                if ((((pMVar34->fields)._.interactionFlags & 4) == 0) &&
                   ((e->fields).constraint != (IModelingConstraint *)0x0)) {
                  cVar59 = func_?();
                  bVar66 = cVar59 == '\0';
                }
                else {
                  bVar66 = false;
                }
                if ((*ppCVar8 != (CubePickingInfo *)0x0) &&
                   (pCVar45 = ((*ppCVar8)->fields).cube, pCVar45 != (Cube *)0x0)) {
                  pVVar48 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                      ((CubeBase *)pCVar45,(MethodInfo *)0x0);
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar32 = Cube::Cube_IsCollapsed(pVVar48,(MethodInfo *)0x0);
                  if ((bVar32 != 0) && (bVar66)) goto code_?;
                  pCVar11 = *ppCVar8;
                  if (pCVar11 != (CubePickingInfo *)0x0) {
                    pos_02.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                    pos_02._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_02,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    this_04 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar11 != (CubePickingInfo *)0x0) && (this_04 != (MVCubeModelBase *)0x0))
                    {
                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                (this_04,(pCVar11->fields).iLocalPos,(pCVar11->fields).cube,
                                 (MethodInfo *)0x0);
                      break;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          (this->fields).currentInternalState = 2;
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          if ((this->fields).edgeHasMoved == 0) {
            ppCVar67 = &(e->fields)._SelectedCube_k__BackingField;
            *ppCVar67 = *ppCVar8;
            func_?();
            pCVar11 = *ppCVar67;
            if (pCVar11 != (CubePickingInfo *)0x0) {
              pos.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
              pos._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              EVar6 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                 (e,(MethodInfo *)0x0);
              pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar34 != (MVCubeModelBase *)0x0) {
                iVar39 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar34,(MethodInfo *)0x0);
                CubeModelTool::CubeModelTool_SendCubeEvent(iVar39,EVar6,(MethodInfo *)0x0);
                if (EVar6 != EditCubeChange__Enum_None) {
code_?:
                  (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                  func_?();
                  (this->fields).edgeHasMoved = 0;
                  break;
                }
                pCVar11 = *ppCVar67;
                if (pCVar11 != (CubePickingInfo *)0x0) {
                  iVar5 = (pCVar11->fields).iLocalPos.z;
                  uVar68 = (pCVar11->fields).iLocalPos.x;
                  pMVar41 = (MethodInfo *)(pCVar11->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  localPos_02.z._0_1_ = (char)uVar68;
                  localPos_02._0_4_ = auStack_28 + 4;
                  localPos_02.z._1_1_ = (char)((ushort)uVar68 >> 8);
                  IVar22 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_02,CONCAT22(in_stack_15,iVar5),pMVar41);
                  pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar9 = (this->fields).modelCursor;
                  if ((pMVar34 != (MVCubeModelBase *)0x0) && (pMVar9 != (ModelCursor3D *)0x0)) {
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar9,*IVar22._0_4_,(pMVar34->fields)._.gameObject,0
                               ,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
            CVar69 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                               (e,*ppCVar8,(MethodInfo *)0x0);
            pCVar11 = *ppCVar8;
            if (CVar69 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
              pMVar9 = (this->fields).modelCursor;
              if (((pCVar11 != (CubePickingInfo *)0x0) &&
                  (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar34 != (MVCubeModelBase *)0x0)) && (pMVar9 != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)pMVar9,(pCVar11->fields).iLocalPos,
                           (pMVar34->fields)._.gameObject,1,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else if ((pCVar11 != (CubePickingInfo *)0x0) &&
                    (pCVar45 = (pCVar11->fields).cube, pCVar45 != (Cube *)0x0)) {
              pVVar48 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                  ((CubeBase *)pCVar45,(MethodInfo *)0x0);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                in_stack_16 = 0x6f;
                in_stack_17 = 0x74;
                in_stack_18 = 0x1045;
                func_?();
              }
              bVar32 = Cube::Cube_IsCollapsed(pVVar48,(MethodInfo *)0x0);
              pCVar11 = *ppCVar8;
              if (bVar32 == 0) {
                if (pCVar11 != (CubePickingInfo *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  pCVar11 = *ppCVar8;
                  this_04 = (e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar11 != (CubePickingInfo *)0x0) && (this_04 != (MVCubeModelBase *)0x0)) {
                    pCVar45 = (pCVar11->fields).cube;
                    uVar2 = SUB42(pCVar45,0);
                    uVar36 = (undefined2)((uint)pCVar45 >> 0x10);
code_?:
                    iVector_00.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                    iVector_00._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                              (this_04,iVector_00,(Cube *)CONCAT22(uVar36,uVar2),
                               (MethodInfo *)
                               CONCAT22(in_stack_18,
                                        CONCAT11(in_stack_17,in_stack_16)));
                    goto code_?;
                  }
                }
              }
              else if (CVar69 == CanPerformCubeActionResult__Enum_Yes) {
                if (pCVar11 != (CubePickingInfo *)0x0) {
                  pos_08.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                  pos_08._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,pos_08,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                  pCVar11 = *ppCVar8;
                  this_04 = (e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar11 != (CubePickingInfo *)0x0) && (this_04 != (MVCubeModelBase *)0x0)) {
                    pos_17.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                    pos_17._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube(this_04,pos_17,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else {
                pMVar9 = (this->fields).modelCursor;
                if (((pCVar11 != (CubePickingInfo *)0x0) &&
                    (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                    pMVar34 != (MVCubeModelBase *)0x0)) && (pMVar9 != (ModelCursor3D *)0x0)) {
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar9,(pCVar11->fields).iLocalPos,
                             (pMVar34->fields)._.gameObject,0,(MethodInfo *)0x0);
                  pCVar11 = *ppCVar8;
                  if (pCVar11 != (CubePickingInfo *)0x0) {
                    pIVar70 = &(pCVar11->fields).iLocalPos;
                    uVar2 = pIVar70->x;
                    uVar36 = pIVar70->y;
                    iVar5 = (pCVar11->fields).iLocalPos.z;
                    in_stack_16 = (undefined1)iVar5;
                    in_stack_17 = (undefined1)((ushort)iVar5 >> 8);
                    pos_16.z._1_1_ = in_stack_17;
                    pos_16._0_5_ = *(undefined5 *)pIVar70;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_16,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                    pCVar11 = *ppCVar8;
                    this_04 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar11 != (CubePickingInfo *)0x0) && (this_04 != (MVCubeModelBase *)0x0))
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      (this->fields).currentInternalState = 1;
      bVar7 = 0;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
      (this->fields).edgeHasMoved = 0;
      break;
    case 1:
      bVar7 = 0;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        bVar7 = 0;
        func_?();
      }
      bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar32 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
code_?:
        (this->fields).currentInternalState = 2;
      }
      break;
    case 2:
      if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
        bVar7 = 0;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          bVar7 = 0;
          func_?();
        }
        bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar32 != 0) &&
           (bVar32 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar32 != 0)) {
          (this->fields).currentInternalState = 3;
          break;
        }
      }
      else {
        bVar7 = 0;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          bVar7 = 0;
          func_?();
        }
        uVar2 = 0;
        bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar32 != 0) {
          EVar6 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar34 != (MVCubeModelBase *)0x0) {
            iVar39 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar34,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent(iVar39,EVar6,(MethodInfo *)0x0);
            if (EVar6 != EditCubeChange__Enum_None) {
              bVar7 = 1;
              break;
            }
            pCVar11 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar11 != (CubePickingInfo *)0x0) {
              iVar5 = (pCVar11->fields).iLocalPos.z;
              uVar71 = (pCVar11->fields).iLocalPos.x;
              pMVar41 = (MethodInfo *)(pCVar11->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              localPos_03.z._0_1_ = (char)uVar71;
              localPos_03._0_4_ = auStack_28 + 4;
              localPos_03.z._1_1_ = (char)((ushort)uVar71 >> 8);
              IVar22 = Cube::Cube_GetCubePosAboveFace(localPos_03,CONCAT22(uVar2,iVar5),pMVar41);
              pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
              pMVar9 = (this->fields).modelCursor;
              if ((pMVar34 != (MVCubeModelBase *)0x0) && (pMVar9 != (ModelCursor3D *)0x0)) {
                iPos_03.z._1_1_ = (char)((ushort)*(undefined2 *)((int)IVar22._0_4_ + 4) >> 8);
                iPos_03._0_5_ = *IVar22._0_4_;
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)pMVar9,iPos_03,(pMVar34->fields)._.gameObject,0,
                           (MethodInfo *)0x0);
                break;
              }
            }
          }
          goto code_?;
        }
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar32 != 0) &&
         (fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
         , _UNK_? < fVar19 - (this->fields).prevMouseUpTime)) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar19 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                             (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          fVar19 = (float)((uint)fVar19 & _UNK_?);
          fVar33 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                             (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          if ((fVar19 != 0.0) || ((float)((uint)fVar33 & _UNK_?) != 0.0)) {
            pCVar11 = (this->fields).prevSelectedCube;
            if (pCVar11 != (CubePickingInfo *)0x0) {
              pCVar45 = (pCVar11->fields).cube;
              FVar47 = (pCVar11->fields).pickedFace;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar50 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pCVar45,FVar47,(MethodInfo *)0x0);
              pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar43 != (MVNetworkGame *)0x0) &&
                 (pMVar44 = (pMVar43->fields)._MaterialRepository_k__BackingField,
                 pMVar44 != (MVMaterialRepository *)0x0)) {
                bVar32 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                   (pMVar44,uVar50,(MethodInfo *)0x0);
                if (bVar32 == 0) {
                  pCVar11 = (this->fields).prevSelectedCube;
                  pMVar9 = (this->fields).modelCursor;
                  if (((pCVar11 == (CubePickingInfo *)0x0) ||
                      (pMVar34 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar34 == (MVCubeModelBase *)0x0)) || (pMVar9 == (ModelCursor3D *)0x0))
                  goto code_?;
                  iPos_00.z._1_1_ = (char)((ushort)(pCVar11->fields).iLocalPos.z >> 8);
                  iPos_00._0_5_ = *(undefined5 *)&(pCVar11->fields).iLocalPos;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar9,iPos_00,(pMVar34->fields)._.gameObject,1,
                             (MethodInfo *)0x0);
                }
                else {
                  uVar72 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                     (e,(MethodInfo *)0x0);
                  (this->fields).prevMaterial = uVar72;
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (e,uVar50,(MethodInfo *)0x0);
                  *ppCVar8 = (this->fields).prevSelectedCube;
                  func_?();
                  (this->fields).currentInternalState = 0;
                  (this->fields).deltaAccum = 0.0;
                  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                            (0,(MethodInfo *)0x0);
                }
                break;
              }
            }
            goto code_?;
          }
        }
      }
      break;
    case 3:
      bVar7 = 0;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        bVar7 = 0;
        func_?();
      }
      bVar32 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar32 != 0) goto code_?;
      pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
      if (pMVar34 == (MVCubeModelBase *)0x0) goto code_?;
      bVar32 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                         ((pMVar34->fields)._.gameObject,(IntVector *)&stack0xffffff98,
                          (MethodInfo *)0x0);
      if ((bVar32 != 0) &&
         (requestedCubePos_02.z = iVar5, requestedCubePos_02.x = (int16_t)uVar4,
         requestedCubePos_02.y = SUB42(uVar4,2),
         CVar69 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                            (e,requestedCubePos_02,(MethodInfo *)0x0),
         CVar69 == CanPerformCubeActionResult__Enum_Yes)) {
        pos_13.z = iVar5;
        pos_13.x = (int16_t)uVar4;
        pos_13.y = SUB42(uVar4,2);
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,pos_13,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar48 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                  CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
        uVar2 = 0x7be0;
        uVar36 = 0x1045;
        pCVar73 = e;
        uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_04 = (MVCubeModelBase *)Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
        bVar7 = 0x12;
        pCVar45 = (Cube *)func_?();
        Cube::Cube__ctor(pCVar45,pBVar49,(Byte__Array *)this_04,(MethodInfo *)0x0);
        if ((MVCubeModelBase *)CONCAT22(uVar36,uVar2) == (MVCubeModelBase *)0x0)
        goto code_?;
        pos_14.z = iVar5;
        pos_14._0_4_ = pCVar73;
        MVCubeModelBase::MVCubeModelBase_AddCube
                  ((MVCubeModelBase *)CONCAT22(uVar36,uVar2),pos_14,(CubeBase *)pCVar45,
                   (MethodInfo *)0x0);
      }
    }
    pCVar11 = (this->fields).movingEdgeCube;
    pMVar10 = pMVar13;
    if (pCVar11 == (CubePickingInfo *)0x0) {
      pCVar45 = (Cube *)0x0;
    }
    else {
      pCVar45 = (pCVar11->fields).cube;
      this_04 = (MVCubeModelBase *)this;
      if (pCVar45 == (Cube *)0x0) goto code_?;
      pCVar45 = Cube::Cube_Clone(pCVar45,(MethodInfo *)0x0);
    }
    (this->fields).prevCubeState = pCVar45;
    func_?();
    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
    func_?();
    this_04 = (MVCubeModelBase *)(this->fields).modelCursor;
    uVar2 = SUB42(this_04,0);
    uVar36 = (undefined2)((uint)this_04 >> 0x10);
    if (this_04 == (MVCubeModelBase *)0x0) {
code_?:
      *unaff_FS_OFFSET = puVar1;
      return;
    }
    pCVar11 = (this->fields).movingEdgeCube;
    pCVar65 = (e->fields)._SelectedCube_k__BackingField;
    pMVar34 = (e->fields)._TargetCubeModel_k__BackingField;
    uVar54 = SUB41(pCVar65,0);
    uVar55 = (undefined1)((uint)pCVar65 >> 8);
    uVar56 = (undefined2)((uint)pCVar65 >> 0x10);
    if (pMVar34 == (MVCubeModelBase *)0x0) goto code_?;
    gameObject = (EditCubes *)(pMVar34->fields)._.gameObject;
    puStack_29 = (undefined *)(this->fields).currentInternalState;
    this = gameObject;
    if (pCVar11 == (CubePickingInfo *)0x0) {
      iVar74 = (this_04->fields)._._.id;
      if (pCVar65 == (CubePickingInfo *)0x0) {
        if ((iVar74 != 0) && (*(GameObject **)(iVar74 + 0x14) != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)(iVar74 + 0x14),0,(MethodInfo *)0x0);
          iVar74 = (this_04->fields)._._.itemId;
          if ((iVar74 != 0) &&
             (pGVar14 = *(GameObject **)(iVar74 + 0x14), pGVar14 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar14,0,(MethodInfo *)0x0);
code_?:
            this_01 = (CellCursor *)(this_04->fields)._._.groupId;
            this = gameObject;
            pMVar10 = pMVar13;
            if (this_01 != (CellCursor *)0x0) {
              CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
              ModelCursor::ModelCursor_HandleLaser
                        ((ModelCursor *)this_04,pCVar11,
                         (CubePickingInfo *)CONCAT22(uVar56,CONCAT11(uVar55,uVar54)),
                         (GameObject *)gameObject,(BuildState__Enum)puStack_29,bVar7,
                         (MethodInfo *)0x0);
              *unaff_FS_OFFSET = puVar1;
              return;
            }
          }
        }
      }
      else if ((iVar74 != 0) && (*(GameObject **)(iVar74 + 0x14) != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(iVar74 + 0x14),1,(MethodInfo *)0x0);
        this_07 = (FaceCursor *)(this_04->fields)._._.id;
        if (this_07 != (FaceCursor *)0x0) {
          pCVar65 = (CubePickingInfo *)CONCAT22(uVar56,CONCAT11(uVar55,uVar54));
code_?:
          FaceCursor::FaceCursor_UpdateCursor
                    (this_07,pCVar65,(GameObject *)gameObject,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    this_00 = (List_1_System_Int32___Class **)(this_04->fields)._._.itemId;
    pMVar10 = (MVCubeModelBase *)this_00;
    if ((MVCubeModelBase *)this_00 == (MVCubeModelBase *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      this_00 = &TypeInfo__System__Collections__Generic__List<int>;
      gameObject = (EditCubes *)&UNK_?;
      func_?();
      cRam_? = '\x01';
      method = (MethodInfo *)&MethodInfo__System__Collections__Generic__List<int>__List__;
    }
    FVar47 = (pCVar11->fields).pickedFace;
    pCVar45 = (pCVar11->fields).cube;
    iVar5 = (pCVar11->fields).iLocalPos.z;
    uVar75 = *(undefined5 *)&(pCVar11->fields).iLocalPos;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVector_01.z._1_1_ = (char)((ushort)iVar5 >> 8);
    iVector_01._0_5_ = uVar75;
    pVVar48 = Cube::Cube_GetFaceVerticesWorld
                        ((GameObject *)gameObject,pCVar45,FVar47,iVector_01,(MethodInfo *)0x0);
    this_04 = (MVCubeModelBase *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar14 = *(GameObject **)&(((MVCubeModelBase *)this_00)->fields)._._.inputState;
    this = gameObject;
    pMVar10 = (MVCubeModelBase *)this_00;
    if ((((pGVar14 == (GameObject *)0x0) ||
         (this_05 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar14,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_05 == (MeshFilter *)0x0)) ||
        (this_06 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_05,(MethodInfo *)0x0), this_06 == (Mesh *)0x0)) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_06,(MethodInfo *)0x0),
       pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
       this_04 == (MVCubeModelBase *)0x0)) goto code_?;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = 0;
      if (uVar77 < *(uint *)(iVar74 + 0xc)) {
        *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 0;
        goto code_?;
      }
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__AddWithResize
              ((List_1_System_Int32_ *)this_04,0,pMVar41->klass->rgctx_data[0xe].method);
code_?:
    pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = uVar77 < *(uint *)(iVar74 + 0xc);
      if (!(bool)bVar3) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,3,pMVar41->klass->rgctx_data[0xe].method);
    }
    pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = uVar77 < *(uint *)(iVar74 + 0xc);
      if (!(bool)bVar3) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,2,pMVar41->klass->rgctx_data[0xe].method);
    }
    pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = uVar77 < *(uint *)(iVar74 + 0xc);
      if (!(bool)bVar3) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,2,pMVar41->klass->rgctx_data[0xe].method);
    }
    pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = uVar77 < *(uint *)(iVar74 + 0xc);
      if (!(bool)bVar3) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,1,pMVar41->klass->rgctx_data[0xe].method);
    }
    pMVar41 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar76 = &(this_04->fields)._._.itemId;
    *piVar76 = *piVar76 + 1;
    iVar74 = (this_04->fields)._._.id;
    uVar77 = (this_04->fields)._._.groupId;
    if (iVar74 == 0) goto code_?;
    if (uVar77 < *(uint *)(iVar74 + 0xc)) {
      (this_04->fields)._._.groupId = uVar77 + 1;
      bVar3 = uVar77 < *(uint *)(iVar74 + 0xc);
      if (!(bool)bVar3) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar77 * 4) = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,0,pMVar41->klass->rgctx_data[0xe].method);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (this_06,pVVar48,(MethodInfo *)0x0);
    value_00 = IndentArea::IndentArea_SetUVs((IndentArea *)this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(this_06,value_00,(MethodInfo *)0x0);
    value_01 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)this_04,MethodInfo__System__Collections__Generic__List<int>__ToArray__)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              (this_06,(Int32__Array *)value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              (this_06,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds(this_06,(MethodInfo *)0x0)
    ;
    if (pVVar48 == (Vector3__Array *)0x0) goto code_?;
    bVar3 = pVVar48->max_length < 2;
    if (pVVar48->max_length < 3) goto code_?;
    uVar78 = pVVar48->vector[0].x;
    uVar79 = pVVar48->vector[2].x;
    fVar19 = ((float)uVar79 - (float)uVar78) * _UNK_?;
    uVar80 = pVVar48->vector[0].x;
    pGVar14 = *(GameObject **)&(((MVCubeModelBase *)this_00)->fields)._._.inputState;
    this_04 = (MVCubeModelBase *)this_00;
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    pMVar10 = (MVCubeModelBase *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar14,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar81 = (((MVCubeModelBase *)this_00)->fields)._._.outputLinkRefs;
    pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar83 = (pVVar82->oneVector).x;
    uVar84 = (pVVar82->oneVector).y;
    fVar33 = (float)pLVar81 * (pVVar82->oneVector).z;
    if (pMVar10 == (MVCubeModelBase *)0x0) goto code_?;
    value.y._0_2_ = SUB42((float)pLVar81 * (float)uVar84,0);
    value.x = (float)pLVar81 * (float)uVar83;
    value.y._2_2_ = (short)((uint)((float)pLVar81 * (float)uVar84) >> 0x10);
    value.z._0_1_ = SUB41(fVar33,0);
    value.z._1_1_ = (char)((uint)fVar33 >> 8);
    value.z._2_2_ = (short)((uint)fVar33 >> 0x10);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              ((Transform *)pMVar10,value,(MethodInfo *)0x0);
    pGVar14 = *(GameObject **)&(((MVCubeModelBase *)this_00)->fields)._._.inputState;
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    pMVar10 = (MVCubeModelBase *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar14,(MethodInfo *)0x0);
    pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (this_06,(MethodInfo *)0x0);
    if (pVVar48 == (Vector3__Array *)0x0) goto code_?;
    bVar3 = 0;
    if (pVVar48->max_length != 0) {
      if (pMVar10 != (MVCubeModelBase *)0x0) {
        bVar7 = 0;
        pMVar13 = pMVar10;
        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                            ((Vector3 *)&stack0xffffffcc,(Transform *)pMVar10,pVVar48->vector[0],
                             (MethodInfo *)0x0);
        fVar33 = pVVar24->x;
        fVar85 = pVVar24->y;
        fVar86 = pVVar24->z;
        pGVar14 = *(GameObject **)&(((MVCubeModelBase *)this_00)->fields)._._.inputState;
        if (pGVar14 != (GameObject *)0x0) {
          pMVar10 = (MVCubeModelBase *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar14,(MethodInfo *)0x0);
          pVVar48 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                              (this_06,(MethodInfo *)0x0);
          if (pVVar48 != (Vector3__Array *)0x0) {
            bVar3 = pVVar48->max_length < 2;
            if (pVVar48->max_length < 3) goto code_?;
            if (pMVar10 != (MVCubeModelBase *)0x0) {
              fVar87 = pVVar48->vector[2].z;
              fVar88 = 0.0;
              uVar54 = SUB41(fVar87,0);
              uVar55 = (undefined1)((uint)fVar87 >> 8);
              uVar56 = (undefined2)((uint)fVar87 >> 0x10);
              position.z._1_1_ = uVar55;
              position._0_9_ = *(unkbyte9 *)(pVVar48->vector + 2);
              position.z._2_2_ = uVar56;
              pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                  ((Vector3 *)&stack0xffffff64,(Transform *)pMVar10,position,
                                   (MethodInfo *)0x0);
              uVar89 = pVVar24->x;
              uVar90 = pVVar24->y;
              fVar87 = (pVVar24->z - fVar86) * _UNK_?;
              pMVar10 = (MVCubeModelBase *)(fVar33 + ((float)uVar89 - fVar33) * _UNK_?);
              fVar85 = fVar85 + ((float)uVar90 - fVar85) * _UNK_?;
              pGVar14 = *(GameObject **)&(((MVCubeModelBase *)this_00)->fields)._._.inputState;
              if (pGVar14 != (GameObject *)0x0) {
                pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar14,(MethodInfo *)0x0);
                this_04 = (MVCubeModelBase *)0x0;
                if (pTVar26 != (Transform *)0x0) {
                  puVar1 = &UNK_?;
                  pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffff64,pTVar26,(MethodInfo *)0x0);
                  uVar91 = pVVar24->x;
                  uVar92 = pVVar24->y;
                  uVar93 = (pCVar11->fields).normal.x;
                  uVar94 = (pCVar11->fields).normal.y;
                  gameObject = (EditCubes *)
                               (pVVar24->z +
                               (pCVar11->fields).normal.z * _UNK_? +
                               ((float)pMVar13 - (fVar86 + fVar87)));
                  pMVar13 = (MVCubeModelBase *)0x0;
                  this._0_2_ = SUB42(gameObject,0);
                  this._2_2_ = (undefined2)((uint)gameObject >> 0x10);
                  fVar95 = (float)uVar92 + (float)uVar94 * _UNK_? + (fVar88 - fVar85);
                  VVar37.x = (float)uVar91 +
                             (float)uVar93 * _UNK_? +
                             (((float)uVar80 + fVar19) - (float)pMVar10);
                  VVar37 = (Vector3)CONCAT84(VVar37._0_8_,VVar37.x);
                  pMVar10 = (MVCubeModelBase *)0x0;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar26,VVar37,(MethodInfo *)0x0);
                  this_04 = (MVCubeModelBase *)CONCAT22(uVar36,uVar2);
                  iVar74 = (this_04->fields)._._.id;
                  this = gameObject;
                  if ((iVar74 != 0) &&
                     (pGVar14 = *(GameObject **)(iVar74 + 0x14), pGVar14 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar14,1,(MethodInfo *)0x0);
                    this_07 = (FaceCursor *)(this_04->fields)._._.id;
                    pCVar65 = pCVar11;
                    if (this_07 != (FaceCursor *)0x0) goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  this._2_2_ = (undefined2)((uint)gameObject >> 0x10);
  e._2_2_ = (undefined2)((uint)pMVar10 >> 0x10);
  e._0_2_ = SUB42(pMVar10,0);
  bVar96 = func_?();
  uVar2 = (undefined2)extraout_EDX;
  uVar36 = (undefined2)((uint)extraout_EDX >> 0x10);
  pbVar97 = (byte *)(extraout_EDX + 0x76);
  bVar98 = (byte)((uint)extraout_EDX >> 8);
  bVar66 = CARRY1(*pbVar97,bVar98) || CARRY1(*pbVar97 + bVar98,bVar3);
  *pbVar97 = *pbVar97 + bVar98 + bVar3;
  bVar99 = CARRY1(unaff_BL,bVar96) || CARRY1(unaff_BL + bVar96,bVar66);
  cVar59 = unaff_BL + bVar96 + bVar66;
  if (bVar99 || cVar59 == '\0') {
    if (cVar59 == '\0') {
      func_?();
      goto code_?;
    }
  }
  else {
    if ((POPCOUNT(cVar59 + bVar98 + bVar99) & 1U) != 0) {
      pcVar100 = (code *)swi(3);
      (*pcVar100)();
      return;
    }
    *(MVCubeModelBase **)(extraout_ECX + -0x41bf17ef) = this_04;
code_?:
    uRam_? = 1;
  }
  piVar101 = (int *)CONCAT22(e._0_2_,this._2_2_);
  TypeInfo__CubeModelTool->static_fields->cubeCount = 0;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if (piVar101[9] == 0) {
    piVar101[9] = 2;
    if (CONCAT22(method._0_2_,e._2_2_) == 0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              ((CubeModelingStateMachine *)CONCAT22(method._0_2_,e._2_2_),*(uint8_t *)(piVar101 + 6),
               (MethodInfo *)0x0);
    piVar102 = piVar101 + 0xb;
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = *(uint8_t *)(piVar101 + 6)
    ;
    if (*piVar102 != 0) {
      this_02 = *(CubeBase **)(*piVar102 + 8);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar48 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                          ((MethodInfo *)0x0);
      if (this_02 == (CubeBase *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                (this_02,pVVar48,(MethodInfo *)0x0);
      iVar74 = *piVar102;
      if ((iVar74 == 0) ||
         (pMVar10 = *(MVCubeModelBase **)(CONCAT22(method._0_2_,e._2_2_) + 0x4c),
         pMVar10 == (MVCubeModelBase *)0x0)) goto code_?;
      iVector.z._1_1_ = (char)((ushort)*(undefined2 *)(iVar74 + 0x34) >> 8);
      iVector._0_5_ = *(undefined5 *)(iVar74 + 0x30);
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (pMVar10,iVector,*(Cube **)(iVar74 + 8),(MethodInfo *)0x0);
    }
    *piVar102 = 0;
    func_?();
    *(undefined1 *)((int)piVar101 + 0x19) = 0;
  }
  (**(code **)(*piVar101 + 0x120))();
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar103 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar103 != (GameEventManager *)0x0) &&
      (pGVar104 = (pGVar103->fields).AvatarCommandsBuildMode,
      pGVar104 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar104->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    iVar74 = *(int *)(CONCAT22(uVar36,uVar2) + 0x10);
    if (iVar74 != 0) {
      (**(code **)(iVar74 + 0xc))();
    }
    return;
  }
code_?:
  func_?();
  pcVar100 = (code *)swi(3);
  (*pcVar100)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Exit
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MaterialsControllerEditMode);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = 0;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if ((this->fields).currentInternalState == 0) {
    (this->fields).currentInternalState = 2;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
    unaff_EBP = &(this->fields).movingEdgeCube;
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial =
         (this->fields).prevMaterial;
    if (*unaff_EBP != (CubePickingInfo *)0x0) {
      this_00 = ((*unaff_EBP)->fields).cube;
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      value = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                        ((MethodInfo *)0x0);
      if (this_00 == (Cube *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)this_00,value,(MethodInfo *)0x0);
      pCVar1 = *unaff_EBP;
      if ((pCVar1 == (CubePickingInfo *)0x0) ||
         (this_01 = (e->fields)._TargetCubeModel_k__BackingField, this_01 == (MVCubeModelBase *)0x0)
         ) goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (this_01,(pCVar1->fields).iLocalPos,(pCVar1->fields).cube,(MethodInfo *)0x0);
    }
    *unaff_EBP = (CubePickingInfo *)0x0;
    func_?(unaff_EBP);
    (this->fields).edgeHasMoved = 0;
  }
  (*(code *)(this->klass->vtable).HideCursor.method)(this,this->klass[1]._0.image);
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 != (GameEventManager *)0x0) &&
      (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
      pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).LaserCommands,
     pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    pAVar5 = (pGVar4->fields).OnChangeState;
    if (pAVar5 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,0,(pAVar5->fields)._._.method,unaff_EBP);
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IntVector GetCubePosNeighborOppositeFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::EditCubes::EditCubes_GetCubePosNeighborOppositeFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  *(undefined4 *)localPos._0_4_ = 0;
  *(undefined2 *)(localPos._0_4_ + 4) = 0;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)localPos._0_4_,CONCAT22(in_stack_1,localPos.z),
             CONCAT22((undefined2)face,in_stack_1),face,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar2 = Cube::Cube_GetFaceAxis((Vector3 *)&puStack_3,(Face__Enum)method,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  *(short *)localPos._0_4_ = *(short *)localPos._0_4_ - (short)(int)(float)uVar4;
  *(short *)(localPos._0_4_ + 2) = *(short *)(localPos._0_4_ + 2) - (short)(int)(float)uVar5;
  *(short *)(localPos._0_4_ + 4) = *(short *)(localPos._0_4_ + 4) - (short)(int)fVar6;
  IVar7.z = extraout_DX;
  IVar7.x = localPos.x;
  IVar7.y = localPos.y;
  return IVar7;
}


/* Boolean GotoMultiChangeCubes() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_GotoMultiChangeCubes
               (EditCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar1 = (float)((uint)fVar1 & _UNK_?);
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if ((fVar1 != 0.0) || ((float)((uint)fVar2 & _UNK_?) != 0.0)) {
      return 1;
    }
  }
  return 0;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::EditCubes::EditCubes_HideCursor(EditCubes *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = pMStack_2->klass[1]._0.image;
    (*(code *)(pMStack_2->klass->vtable).Remove.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetEditDetail(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_SetEditDetail
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    pCVar1 = (e->fields)._SelectedCube_k__BackingField;
    if ((pCVar1 == (CubePickingInfo *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) {
      return;
    }
    pMVar2 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar2 != (MVCubeModelBase *)0x0) {
      gameObject = (pMVar2->fields)._.gameObject;
      uStack_3._0_2_ = (pCVar1->fields).iLocalPos.x;
      uStack_3._2_2_ = (pCVar1->fields).iLocalPos.y;
      iVar4 = (pCVar1->fields).iLocalPos.z;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      iVector.z = iVar4;
      iVector.x = (undefined2)uStack_3;
      iVector.y = uStack_3._2_2_;
      pVVar5 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         (&VStack_6,gameObject,iVector,(MethodInfo *)0x0);
      fVar7 = pVVar5->z;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&puStack_8,this_01,(MethodInfo *)0x0);
          VStack_6.x = pVVar5->x;
          VStack_6.y = pVVar5->y;
          VStack_6.z = pVVar5->z - fVar7;
          fVar9 = (float10)func_?();
          pMVar2 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar2 != (MVCubeModelBase *)0x0) {
            puVar10 = (undefined8 *)
                     (*(code *)(pMVar2->klass->vtable).get_Scale.method)
                               (&puStack_8,(short)pMVar2,
                                (pMVar2->klass->vtable).set_Scale.methodPtr);
            pMVar11 = (this->fields).modelCursor;
            if ((float)((ulonglong)*puVar10 >> 0x20) * _UNK_? < (float)fVar9) {
              (this->fields).mouseSensitivity = 0.1325;
              if ((pMVar11 != (ModelCursor3D *)0x0) &&
                 (pIVar12 = (pMVar11->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
                (pIVar12->fields).size = 1.0;
                return;
              }
            }
            else {
              (this->fields).mouseSensitivity = 0.0225;
              if ((pMVar11 != (ModelCursor3D *)0x0) &&
                 (pIVar12 = (pMVar11->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
                (pIVar12->fields).size = 0.5;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* EditCubes() */

void Assembly-CSharp.dll::EditCubes::EditCubes__ctor(EditCubes *this,MethodInfo *method)

{
  (this->fields).currentInternalState = 2;
  return;
}


/* Boolean get_CursorVisible() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_get_CursorVisible(EditCubes *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).set_CursorVisible.methodPtr;
    bVar3 = (*(code *)(pMStack_2->klass->vtable).get_CursorVisible.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::EditCubes::EditCubes_set_CursorVisible
               (EditCubes *this,bool value,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).Remove.methodPtr;
    uStack_3 = _value;
    (*(code *)(pMStack_2->klass->vtable).set_CursorVisible.method)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

