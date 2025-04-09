
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
  if (pMVar9 != (ModelCursor3D *)0x0) {
    if ((pMVar9->fields).indentArea == (IndentArea *)0x0 || *ppCVar8 != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        in_stack_10 = 0;
        in_stack_11 = 0;
        in_stack_12 = 0;
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = fVar13;
      }
      if (cRam_? == '\0') {
        in_stack_10 = 0;
        in_stack_11 = 99;
        in_stack_12 = 0x1045;
        func_?();
        cRam_? = '\x01';
      }
      if (e != (CubeModelingStateMachine *)0x0) {
        pCVar14 = (e->fields)._SelectedCube_k__BackingField;
        if ((pCVar14 == (CubePickingInfo *)0x0) || (*ppCVar8 != (CubePickingInfo *)0x0))
        goto code_?;
        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar15 != (MVCubeModelBase *)0x0) {
          uVar16 = (pCVar14->fields).iLocalPos.x;
          uVar17 = (pCVar14->fields).iLocalPos.y;
          IVar18.y = uVar17;
          IVar18.x = uVar16;
          iVar19 = (pCVar14->fields).iLocalPos.z;
          pGVar20 = (pMVar15->fields)._.gameObject;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IVar18.z._0_1_ = (char)iVar19;
          IVar18.z._1_1_ = (char)((ushort)iVar19 >> 8);
          pVVar21 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              ((Vector3 *)&stack0xffffffcc,pGVar20,IVar18,(MethodInfo *)0x0);
          method_00 = pVVar21->y;
          in_stack_22 = (undefined2)((uint)pVVar21->z >> 0x10);
          this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)method_00);
          if ((this_01 != (MainCameraManager *)0x0) &&
             (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_01,(MethodInfo *)0x0),
             pTVar23 != (Transform *)0x0)) {
            in_stack_24 = &UNK_?;
            pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffcc,pTVar23,(MethodInfo *)0x0);
            auStack_25._0_4_ = pVVar21->x;
            unique0x0000a404 = pVVar21->y;
            puStack_26 = (undefined *)pVVar21->z;
            fVar27 = (float10)func_?();
            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
            fVar13 = (float)fVar27;
            if (pMVar15 != (MVCubeModelBase *)0x0) {
              in_stack_10 = SUB41(pMVar15,0);
              in_stack_11 = (undefined1)((uint)pMVar15 >> 8);
              in_stack_12 = (undefined2)((uint)pMVar15 >> 0x10);
              puVar28 = (undefined8 *)(*(code *)(pMVar15->klass->vtable).get_Scale.method)();
              pMVar9 = (this->fields).modelCursor;
              if ((float)(MonitorData *)((ulonglong)*puVar28 >> 0x20) * _UNK_? < fVar13) {
                (this->fields).mouseSensitivity = 0.1325;
                if ((pMVar9 != (ModelCursor3D *)0x0) &&
                   (pIVar29 = (pMVar9->fields).indentArea, pIVar29 != (IndentArea *)0x0)) {
                  (pIVar29->fields).size = 1.0;
                  goto code_?;
                }
              }
              else {
                (this->fields).mouseSensitivity = 0.0225;
                if ((pMVar9 != (ModelCursor3D *)0x0) &&
                   (pIVar29 = (pMVar9->fields).indentArea, pIVar29 != (IndentArea *)0x0)) {
                  (pIVar29->fields).size = 0.5;
code_?:
                  bVar7 = 0;
                  switch((this->fields).currentInternalState) {
                  case 0:
                    if (*ppCVar8 != (CubePickingInfo *)0x0) {
                      bVar7 = 0;
                      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                        in_stack_10 = 0xe0;
                        in_stack_11 = 100;
                        in_stack_12 = 0x1045;
                        bVar7 = 0;
                        func_?();
                      }
                      bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      if (bVar30 == 0) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        fVar13 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                           (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                        fVar31 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                           (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                        puStack_26 = (undefined *)0x0;
                        _auStack_44 = CONCAT44(fVar31 * _UNK_?,fVar13 * _UNK_?);
                        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = *ppCVar8;
                        fVar13 = (this->fields).mouseSensitivity;
                        deltaAccum = &(this->fields).deltaAccum;
                        ppCVar8 = &(this->fields).movingEdgeCube;
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          uVar4 = CONCAT31((int3)((uint)in_stack_24 >> 8),
                                            (pCVar14->fields).pickedEdgeIndex0);
                          bVar30 = (pCVar14->fields).pickedEdgeIndex1;
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          uVar32 = (undefined2)((uint)uVar4 >> 0x10);
                          mousePositionDelta.z = (float)puStack_26;
                          mousePositionDelta.x = (float)auStack_25._0_4_;
                          mousePositionDelta.y = (float)stack0xffffffc0;
                          CVar33 = SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                             (pMVar15,pCVar14,mousePositionDelta,
                                              &(this->fields).delta,deltaAccum,fVar13,
                                              &stack0xffffffcb,(bool)uVar4,bVar30,
                                              (EditCubeChange__Enum *)&stack0xffffffb8,
                                              (MethodInfo *)0x0);
                          if (CVar33 == CubeOutOfBoundState__Enum_WithinBounds) {
                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                            if (pMVar15 == (MVCubeModelBase *)0x0) goto code_?;
                            iVar34 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                               (pMVar15,(MethodInfo *)0x0);
                            CubeModelTool::CubeModelTool_SendCubeEvent
                                      (iVar34,EVar6,(MethodInfo *)0x0);
                          }
                          if ((bVar3 & (this->fields).edgeHasMoved == 0) != 0) {
                            (this->fields).edgeHasMoved = 1;
                          }
                          if (CVar33 == CubeOutOfBoundState__Enum_OutOfBoundsAdd) {
                            pCVar14 = *ppCVar8;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              uVar35 = (pCVar14->fields).iLocalPos.x;
                              iVar5 = (pCVar14->fields).iLocalPos.z;
                              pMVar36 = (MethodInfo *)(pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_01.z = uVar35;
                              localPos_01._0_4_ = auStack_25 + 4;
                              IVar18 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_01,CONCAT22(uVar2,iVar5),pMVar36);
                              puVar37 = IVar18._0_4_;
                              uStack_38 = *puVar37;
                              iVar5 = *(int16_t *)(puVar37 + 1);
                              uVar4 = *puVar37;
                              uVar2 = *(undefined2 *)(puVar37 + 1);
                              pCVar14 = *ppCVar8;
                              pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              if ((((pMVar39 != (MVNetworkGame *)0x0) &&
                                   (pMVar40 = (pMVar39->fields)._MaterialRepository_k__BackingField,
                                   pCVar14 != (CubePickingInfo *)0x0)) &&
                                  (pCVar41 = (pCVar14->fields).cube, pCVar41 != (Cube *)0x0)) &&
                                 (pMVar40 != (MVMaterialRepository *)0x0)) {
                                bVar30 = MVMaterialRepository::
                                         MVMaterialRepository_IsMaterialUnlocked
                                                   (pMVar40,(pCVar41->fields)._.faceMaterials,
                                                    (MethodInfo *)0x0);
                                if (bVar30 == 0) {
                                  CStack_42 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                                }
                                else {
                                  requestedCubePos_01.z._0_1_ = (char)uVar2;
                                  requestedCubePos_01.x = (short)uVar4;
                                  requestedCubePos_01.y = (short)((uint)uVar4 >> 0x10);
                                  requestedCubePos_01.z._1_1_ = (char)((ushort)uVar2 >> 8);
                                  CStack_42 = CubeModelingStateMachine::
                                              CubeModelingStateMachine_CanAddCubeAt_1
                                                        (e,requestedCubePos_01,(MethodInfo *)0x0);
                                  if (CStack_42 == CanPerformCubeActionResult__Enum_Yes) {
                                    pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                    if (pMVar15 != (MVCubeModelBase *)0x0) {
                                      pos_11.z = iVar5;
                                      pos_11.x = (short)uStack_38;
                                      pos_11.y = (short)((uint)uStack_38 >> 0x10);
                                      pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                          (pMVar15,pos_11,(MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                               CubeBase_op_Equality
                                                         ((CubeBase *)pCVar41,(CubeBase *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (bVar30 == 0) goto code_?;
                                      pos_04.z._0_1_ = (char)iVar5;
                                      pos_04.x = (short)uStack_38;
                                      pos_04.y = (short)((uint)uStack_38 >> 0x10);
                                      pos_04.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_04,AudioActions__Enum_FaceMoved,
                                                 (MethodInfo *)0x0);
                                      pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar14 = *ppCVar8;
                                      if (pCVar14 != (CubePickingInfo *)0x0) {
                                        pCVar41 = (pCVar14->fields).cube;
                                        FVar43 = (pCVar14->fields).pickedFace;
                                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVVar44 = Cube::Cube_GetCorners
                                                            (pCVar41,FVar43,(MethodInfo *)0x0);
                                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker
                                                  ::CubeDataPacker_CornersToByteArray
                                                            (pVVar44,(MethodInfo *)0x0);
                                        uVar46 = CubeModelingStateMachine::
                                                 CubeModelingStateMachine_get_CurrentMaterialId
                                                           (e,(MethodInfo *)0x0);
                                        pBVar47 = Cube::Cube_CreateMaterialArray
                                                            (uVar46,(MethodInfo *)0x0);
                                        pCVar41 = (Cube *)func_?();
                                        Cube::Cube__ctor(pCVar41,pBVar45,pBVar47,(MethodInfo *)0x0);
                                        if (pMVar15 != (MVCubeModelBase *)0x0) {
                                          pos_05.z._0_1_ = (char)iVar5;
                                          pos_05.x = (short)uStack_38;
                                          pos_05.y = (short)((uint)uStack_38 >> 0x10);
                                          pos_05.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    (pMVar15,pos_05,(CubeBase *)pCVar41,
                                                     (MethodInfo *)0x0);
                                          pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                          if (pMVar15 != (MVCubeModelBase *)0x0) {
                                            iVar34 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                               (pMVar15,(MethodInfo *)0x0);
                                            CubeModelTool::CubeModelTool_SendCubeEvent
                                                      (iVar34,EditCubeChange__Enum_CubeAdded,
                                                       (MethodInfo *)0x0);
                                            pCVar14 = (this->fields).movingEdgeCube;
                                            pCVar48 = (CubePickingInfo *)func_?();
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      (pCVar48,pCVar14,(MethodInfo *)0x0);
                                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                            if (pMVar15 != (MVCubeModelBase *)0x0) {
                                              pos_06.z._0_1_ = (char)iVar5;
                                              pos_06.x = (short)uStack_38;
                                              pos_06.y = (short)((uint)uStack_38 >> 0x10);
                                              pos_06.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                  (pMVar15,pos_06,(MethodInfo *)0x0)
                                              ;
                                              pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0
                                                                          );
                                              if (pCVar48 != (CubePickingInfo *)0x0) {
                                                (pCVar48->fields).cube = pCVar41;
                                                func_?();
                                                (pCVar48->fields).iLocalPos.x = (short)uStack_38;
                                                (pCVar48->fields).iLocalPos.y =
                                                     (short)((uint)uStack_38 >> 0x10);
                                                (pCVar48->fields).iLocalPos.z = iVar5;
                                                ppCVar8 = &(this->fields).movingEdgeCube;
                                                pCVar14 = *ppCVar8;
                                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                                   ((e->fields)._TargetCubeModel_k__BackingField !=
                                                    (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar14->fields).iLocalPos,
                                                             (pCVar14->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  *ppCVar8 = pCVar48;
                                                  func_?();
                                                  pCVar14 = *ppCVar8;
                                                  if (pCVar14 != (CubePickingInfo *)0x0) {
                                                    pVVar21 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffffcc
                                                                         ,(pCVar14->fields).
                                                                          pickedFace,
                                                                         (MethodInfo *)0x0);
                                                    axis_02.z._2_2_ =
                                                         (short)((uint)pVVar21->z >> 0x10);
                                                    axis_02._0_10_ = *(unkbyte10 *)pVVar21;
                                                    Cube::Cube_MoveFace(pCVar14,-0.75,axis_02,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff80,
                                                                        (MethodInfo *)0x0);
code_?:
                                                    pCVar14 = (this->fields).movingEdgeCube;
                                                    if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                                       ((e->fields)._TargetCubeModel_k__BackingField
                                                        != (MVCubeModelBase *)0x0)) {
                                                      MVCubeModelBase::
                                                      MVCubeModelBase_CornersChanged
                                                                ((e->fields).
                                                                 _TargetCubeModel_k__BackingField,
                                                                 (pCVar14->fields).iLocalPos,
                                                                 (pCVar14->fields).cube,
                                                                 (MethodInfo *)0x0);
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
                                pSVar49 = mscorlib.dll::System::Enum::Enum_ToString
                                                    ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                                uVar50 = SUB41(pSVar49,0);
                                uVar51 = (undefined1)((uint)pSVar49 >> 8);
                                uVar32 = (undefined2)((uint)pSVar49 >> 0x10);
                                uVar52 = SUB41(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                                uVar53 = (undefined1)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 8)
                                ;
                                uVar2 = (undefined2)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >>
                                         0x10);
code_?:
                                mscorlib.dll::System::String::String_Concat_3
                                          ((String *)CONCAT22(uVar2,CONCAT11(uVar53,uVar52)),
                                           (String *)CONCAT22(uVar32,CONCAT11(uVar51,uVar50)),
                                           (MethodInfo *)0x0);
                                pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar9 = (this->fields).modelCursor;
                                if ((pMVar15 != (MVCubeModelBase *)0x0) &&
                                   (pMVar9 != (ModelCursor3D *)0x0)) {
                                  iPos_01.z._0_1_ = (char)iVar5;
                                  iPos_01.x = (undefined2)uStack_38;
                                  iPos_01.y = uStack_38._2_2_;
                                  iPos_01.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar9,iPos_01,
                                             (pMVar15->fields)._.gameObject,
                                             CStack_42 ==
                                             CanPerformCubeActionResult__Enum_UnlockMaterial,
                                             (MethodInfo *)0x0);
                                  pCVar14 = *ppCVar8;
                                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
joined_?:
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pMVar15 != (MVCubeModelBase *)0x0)) {
                                    uVar32 = 0;
                                    uVar54 = 0;
                                    pCVar41 = (pCVar14->fields).cube;
                                    uVar52 = SUB41(pCVar41,0);
                                    uVar53 = (undefined1)((uint)pCVar41 >> 8);
                                    uVar2 = (undefined2)((uint)pCVar41 >> 0x10);
code_?:
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              (pMVar15,(pCVar14->fields).iLocalPos,
                                               (Cube *)CONCAT22(uVar2,CONCAT11(uVar53,uVar52)),
                                               (MethodInfo *)CONCAT22(uVar54,uVar32));
                                    *ppCVar8 = (CubePickingInfo *)0x0;
                                    func_?();
                                    break;
                                  }
                                }
                              }
                            }
                          }
                          else if (CVar33 == CubeOutOfBoundState__Enum_OutOfBoundsAddEdge) {
                            pCVar14 = *ppCVar8;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              uVar55 = (pCVar14->fields).iLocalPos.x;
                              iVar5 = (pCVar14->fields).iLocalPos.z;
                              pMVar36 = (MethodInfo *)(pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_00.z = uVar55;
                              localPos_00._0_4_ = auStack_25 + 4;
                              IVar18 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_00,CONCAT22(uVar2,iVar5),pMVar36);
                              puVar37 = IVar18._0_4_;
                              uStack_38 = *puVar37;
                              iVar5 = *(int16_t *)(puVar37 + 1);
                              uVar4 = *puVar37;
                              uVar2 = *(undefined2 *)(puVar37 + 1);
                              pCVar14 = *ppCVar8;
                              pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              if (((pMVar39 != (MVNetworkGame *)0x0) &&
                                  (pMVar40 = (pMVar39->fields)._MaterialRepository_k__BackingField,
                                  pCVar14 != (CubePickingInfo *)0x0)) &&
                                 ((pCVar41 = (pCVar14->fields).cube, pCVar41 != (Cube *)0x0 &&
                                  (pMVar40 != (MVMaterialRepository *)0x0)))) {
                                bVar30 = MVMaterialRepository::
                                         MVMaterialRepository_IsMaterialUnlocked
                                                   (pMVar40,(pCVar41->fields)._.faceMaterials,
                                                    (MethodInfo *)0x0);
                                if (bVar30 == 0) {
                                  CStack_42 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                                }
                                else {
                                  requestedCubePos_00.z._0_1_ = (char)uVar2;
                                  requestedCubePos_00.x = (short)uVar4;
                                  requestedCubePos_00.y = (short)((uint)uVar4 >> 0x10);
                                  requestedCubePos_00.z._1_1_ = (char)((ushort)uVar2 >> 8);
                                  CStack_42 = CubeModelingStateMachine::
                                              CubeModelingStateMachine_CanAddCubeAt_1
                                                        (e,requestedCubePos_00,(MethodInfo *)0x0);
                                  if (CStack_42 == CanPerformCubeActionResult__Enum_Yes) {
                                    pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                    if (pMVar15 != (MVCubeModelBase *)0x0) {
                                      pos_09.z = iVar5;
                                      pos_09.x = (short)uStack_38;
                                      pos_09.y = (short)((uint)uStack_38 >> 0x10);
                                      pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                          (pMVar15,pos_09,(MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                               CubeBase_op_Equality
                                                         ((CubeBase *)pCVar41,(CubeBase *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (bVar30 == 0) goto code_?;
                                      if (*ppCVar8 != (CubePickingInfo *)0x0) {
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,((*ppCVar8)->fields).iLocalPos,
                                                   AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar14 = *ppCVar8;
                                        if (pCVar14 != (CubePickingInfo *)0x0) {
                                          pCVar41 = (pCVar14->fields).cube;
                                          FVar43 = (pCVar14->fields).pickedFace;
                                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0)
                                          {
                                            _auStack_44 = CONCAT44(stack0xffffffc0,TypeInfo__Cube);
                                            func_?();
                                          }
                                          pVVar44 = Cube::Cube_GetCorners
                                                              (pCVar41,FVar43,(MethodInfo *)0x0);
                                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          pBVar45 = MVWorldObject.dll::MV::WorldObject::
                                                    CubeDataPacker::
                                                    CubeDataPacker_CornersToByteArray
                                                              (pVVar44,(MethodInfo *)0x0);
                                          uVar46 = CubeModelingStateMachine::
                                                   CubeModelingStateMachine_get_CurrentMaterialId
                                                             (e,(MethodInfo *)0x0);
                                          pBVar47 = Cube::Cube_CreateMaterialArray
                                                              (uVar46,(MethodInfo *)0x0);
                                          pCVar41 = (Cube *)func_?();
                                          Cube::Cube__ctor(pCVar41,pBVar45,pBVar47,(MethodInfo *)0x0
                                                          );
                                          if (pMVar15 != (MVCubeModelBase *)0x0) {
                                            pos_10.z = iVar5;
                                            pos_10.x = (short)uStack_38;
                                            pos_10.y = (short)((uint)uStack_38 >> 0x10);
                                            MVCubeModelBase::MVCubeModelBase_AddCube
                                                      (pMVar15,pos_10,(CubeBase *)pCVar41,
                                                       (MethodInfo *)0x0);
                                            pCVar14 = (this->fields).movingEdgeCube;
                                            pCVar48 = (CubePickingInfo *)func_?();
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      (pCVar48,pCVar14,(MethodInfo *)0x0);
                                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                            if (pMVar15 != (MVCubeModelBase *)0x0) {
                                              pos_03.z._0_1_ = (char)iVar5;
                                              pos_03.x = (short)uStack_38;
                                              pos_03.y = (short)((uint)uStack_38 >> 0x10);
                                              pos_03.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                  (pMVar15,pos_03,(MethodInfo *)0x0)
                                              ;
                                              pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0
                                                                          );
                                              if (pCVar48 != (CubePickingInfo *)0x0) {
                                                (pCVar48->fields).cube = pCVar41;
                                                func_?();
                                                (pCVar48->fields).iLocalPos.x = (short)uStack_38;
                                                (pCVar48->fields).iLocalPos.y =
                                                     (short)((uint)uStack_38 >> 0x10);
                                                (pCVar48->fields).iLocalPos.z = iVar5;
                                                ppCVar8 = &(this->fields).movingEdgeCube;
                                                pCVar14 = *ppCVar8;
                                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                                   ((e->fields)._TargetCubeModel_k__BackingField !=
                                                    (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar14->fields).iLocalPos,
                                                             (pCVar14->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  *ppCVar8 = pCVar48;
                                                  func_?();
                                                  pCVar14 = *ppCVar8;
                                                  if (pCVar14 != (CubePickingInfo *)0x0) {
                                                    pVVar21 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffffcc
                                                                         ,(pCVar14->fields).
                                                                          pickedFace,
                                                                         (MethodInfo *)0x0);
                                                    axis_00.z._2_2_ =
                                                         (short)((uint)pVVar21->z >> 0x10);
                                                    axis_00._0_10_ = *(unkbyte10 *)pVVar21;
                                                    Cube::Cube_MoveFace(pCVar14,-1.0,axis_00,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff84,
                                                                        (MethodInfo *)0x0);
                                                    pCVar14 = *ppCVar8;
                                                    if (pCVar14 != (CubePickingInfo *)0x0) {
                                                      pVVar21 = Cube::Cube_GetFaceAxis
                                                                          ((Vector3 *)
                                                                           &stack0xffffffcc,
                                                                           (pCVar14->fields).
                                                                           pickedFace,
                                                                           (MethodInfo *)0x0);
                                                      axis_01.z._2_2_ =
                                                           (short)((uint)pVVar21->z >> 0x10);
                                                      axis_01._0_10_ = *(unkbyte10 *)pVVar21;
                                                      Cube::Cube_MoveEdge(pCVar14,-0.75,axis_01,
                                                                          (CubeOutOfBoundState__Enum
                                                                           *)&stack0xffffff84,
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
                                    goto code_?;
                                  }
                                }
code_?:
                                pSVar49 = mscorlib.dll::System::Enum::Enum_ToString
                                                    ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                                uVar50 = SUB41(pSVar49,0);
                                uVar51 = (undefined1)((uint)pSVar49 >> 8);
                                uVar32 = (undefined2)((uint)pSVar49 >> 0x10);
                                uVar52 = SUB41(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                                uVar53 = (undefined1)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 8)
                                ;
                                uVar2 = (undefined2)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >>
                                         0x10);
                                goto code_?;
                              }
                            }
                          }
                          else if (CVar33 == CubeOutOfBoundState__Enum_OutOfBoundsAddVertex) {
                            pCVar14 = *ppCVar8;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              uVar56 = (pCVar14->fields).iLocalPos.x;
                              iVar5 = (pCVar14->fields).iLocalPos.z;
                              pMVar36 = (MethodInfo *)(pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos.z = uVar56;
                              localPos._0_4_ = auStack_25 + 4;
                              IVar18 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos,CONCAT22(uVar32,iVar5),pMVar36);
                              puVar37 = IVar18._0_4_;
                              uVar4 = *puVar37;
                              iVar5 = *(int16_t *)(puVar37 + 1);
                              uVar57 = *puVar37;
                              uVar2 = *(undefined2 *)(puVar37 + 1);
                              pCVar14 = *ppCVar8;
                              pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              if ((((pMVar39 != (MVNetworkGame *)0x0) &&
                                   (pMVar40 = (pMVar39->fields)._MaterialRepository_k__BackingField,
                                   pCVar14 != (CubePickingInfo *)0x0)) &&
                                  (pCVar41 = (pCVar14->fields).cube, pCVar41 != (Cube *)0x0)) &&
                                 (pMVar40 != (MVMaterialRepository *)0x0)) {
                                bVar30 = MVMaterialRepository::
                                         MVMaterialRepository_IsMaterialUnlocked
                                                   (pMVar40,(pCVar41->fields)._.faceMaterials,
                                                    (MethodInfo *)0x0);
                                if (bVar30 == 0) {
                                  CStack_42 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                                }
                                else {
                                  requestedCubePos.z._0_1_ = (char)uVar2;
                                  requestedCubePos.x = (short)uVar57;
                                  requestedCubePos.y = (short)((uint)uVar57 >> 0x10);
                                  requestedCubePos.z._1_1_ = (char)((ushort)uVar2 >> 8);
                                  CStack_42 = CubeModelingStateMachine::
                                              CubeModelingStateMachine_CanAddCubeAt_1
                                                        (e,requestedCubePos,(MethodInfo *)0x0);
                                  if (CStack_42 == CanPerformCubeActionResult__Enum_Yes) {
                                    pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                    if (pMVar15 != (MVCubeModelBase *)0x0) {
                                      pos_00.z = iVar5;
                                      pos_00.x = (short)uVar4;
                                      pos_00.y = (short)((uint)uVar4 >> 0x10);
                                      pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                          (pMVar15,pos_00,(MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      bVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                               CubeBase_op_Equality
                                                         ((CubeBase *)pCVar41,(CubeBase *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (bVar30 == 0) goto code_?;
                                      if (*ppCVar8 != (CubePickingInfo *)0x0) {
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,((*ppCVar8)->fields).iLocalPos,
                                                   AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar14 = *ppCVar8;
                                        if (pCVar14 != (CubePickingInfo *)0x0) {
                                          pCVar41 = (pCVar14->fields).cube;
                                          FVar43 = (pCVar14->fields).pickedFace;
                                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0)
                                          {
                                            func_?();
                                          }
                                          pVVar44 = Cube::Cube_GetCorners
                                                              (pCVar41,FVar43,(MethodInfo *)0x0);
                                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          pBVar45 = MVWorldObject.dll::MV::WorldObject::
                                                    CubeDataPacker::
                                                    CubeDataPacker_CornersToByteArray
                                                              (pVVar44,(MethodInfo *)0x0);
                                          uVar46 = CubeModelingStateMachine::
                                                   CubeModelingStateMachine_get_CurrentMaterialId
                                                             (e,(MethodInfo *)0x0);
                                          pBVar47 = Cube::Cube_CreateMaterialArray
                                                              (uVar46,(MethodInfo *)0x0);
                                          pCVar41 = (Cube *)func_?();
                                          Cube::Cube__ctor(pCVar41,pBVar45,pBVar47,(MethodInfo *)0x0
                                                          );
                                          if (pMVar15 != (MVCubeModelBase *)0x0) {
                                            pos_08.z = iVar5;
                                            pos_08.x = (short)uVar4;
                                            pos_08.y = (short)((uint)uVar4 >> 0x10);
                                            MVCubeModelBase::MVCubeModelBase_AddCube
                                                      (pMVar15,pos_08,(CubeBase *)pCVar41,
                                                       (MethodInfo *)0x0);
                                            pCVar14 = (this->fields).movingEdgeCube;
                                            pCVar48 = (CubePickingInfo *)func_?();
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      (pCVar48,pCVar14,(MethodInfo *)0x0);
                                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                            if (pMVar15 != (MVCubeModelBase *)0x0) {
                                              pos_02.z._0_1_ = (char)iVar5;
                                              pos_02.x = (short)uVar4;
                                              pos_02.y = (short)((uint)uVar4 >> 0x10);
                                              pos_02.z._1_1_ = (char)((ushort)iVar5 >> 8);
                                              pCVar41 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                  (pMVar15,pos_02,(MethodInfo *)0x0)
                                              ;
                                              pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0
                                                                          );
                                              if (pCVar48 != (CubePickingInfo *)0x0) {
                                                (pCVar48->fields).cube = pCVar41;
                                                func_?();
                                                (pCVar48->fields).iLocalPos.x = (short)uVar4;
                                                (pCVar48->fields).iLocalPos.y =
                                                     (short)((uint)uVar4 >> 0x10);
                                                (pCVar48->fields).iLocalPos.z = iVar5;
                                                ppCVar8 = &(this->fields).movingEdgeCube;
                                                pCVar14 = *ppCVar8;
                                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                                   ((e->fields)._TargetCubeModel_k__BackingField !=
                                                    (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar14->fields).iLocalPos,
                                                             (pCVar14->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  *ppCVar8 = pCVar48;
                                                  func_?();
                                                  pCVar14 = *ppCVar8;
                                                  if (pCVar14 != (CubePickingInfo *)0x0) {
                                                    pVVar21 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffffcc
                                                                         ,(pCVar14->fields).
                                                                          pickedFace,
                                                                         (MethodInfo *)0x0);
                                                    axis.z._1_1_ = (char)((uint)pVVar21->z >> 8);
                                                    axis._0_9_ = *(unkbyte9 *)pVVar21;
                                                    axis.z._2_2_ = (short)((uint)pVVar21->z >> 0x10)
                                                    ;
                                                    Cube::Cube_MoveFace(pCVar14,-1.0,axis,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff88,
                                                                        (MethodInfo *)0x0);
                                                    pCVar14 = *ppCVar8;
                                                    if (pCVar14 != (CubePickingInfo *)0x0) {
                                                      pVVar21 = Cube::Cube_GetFaceAxis
                                                                          ((Vector3 *)
                                                                           &stack0xffffffcc,
                                                                           (pCVar14->fields).
                                                                           pickedFace,
                                                                           (MethodInfo *)0x0);
                                                      pCVar48 = *ppCVar8;
                                                      if (pCVar48 != (CubePickingInfo *)0x0) {
                                                        Cube::Cube_MoveVertex
                                                                  (pCVar14,-0.75,*pVVar21,
                                                                   (pCVar48->fields).
                                                                   pickedEdgeIndex0,
                                                                   (pCVar48->fields).
                                                                   pickedEdgeIndex1,
                                                                   (CubeOutOfBoundState__Enum *)
                                                                   &stack0xffffff88,
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
                                pSVar49 = mscorlib.dll::System::Enum::Enum_ToString
                                                    ((Enum *)&stack0xffffffcc,(MethodInfo *)0x0);
                                mscorlib.dll::System::String::String_Concat_3
                                          (StringLiteral_____EditCube_OutOfBoundsAddVerte,pSVar49,
                                           (MethodInfo *)0x0);
                                pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar9 = (this->fields).modelCursor;
                                if ((pMVar15 != (MVCubeModelBase *)0x0) &&
                                   (pMVar9 != (ModelCursor3D *)0x0)) {
                                  iPos.z = iVar5;
                                  iPos.x = (short)uVar4;
                                  iPos.y = (short)((uint)uVar4 >> 0x10);
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar9,iPos,
                                             (pMVar15->fields)._.gameObject,
                                             CStack_42 ==
                                             CanPerformCubeActionResult__Enum_UnlockMaterial,
                                             (MethodInfo *)0x0);
                                  pCVar14 = *ppCVar8;
                                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                  goto joined_?;
                                }
                              }
                            }
                          }
                          else if (CVar33 == CubeOutOfBoundState__Enum_OutOfBoundsRemove) {
                            pCVar14 = *ppCVar8;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if ((pCVar14 != (CubePickingInfo *)0x0) &&
                               (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                               pMVar15 != (MVCubeModelBase *)0x0)) {
                              if ((((pMVar15->fields)._.interactionFlags & 4) == 0) &&
                                 (((e->fields).constraint != (IModelingConstraint *)0x0 &&
                                  (cVar58 = func_?(), cVar58 == '\0')))) {
code_?:
                                pCVar14 = *ppCVar8;
                                pMVar9 = (this->fields).modelCursor;
                                if (((pCVar14 != (CubePickingInfo *)0x0) &&
                                    (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                                    pMVar15 != (MVCubeModelBase *)0x0)) &&
                                   (pMVar9 != (ModelCursor3D *)0x0)) {
                                  uVar32 = 0;
                                  uVar54 = 0;
                                  iPos_00.z._1_1_ =
                                       (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                                  iPos_00._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar9,iPos_00,
                                             (pMVar15->fields)._.gameObject,0,(MethodInfo *)0x0);
                                  pCVar14 = *ppCVar8;
                                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pMVar15 != (MVCubeModelBase *)0x0)) {
                                    pCVar41 = (this->fields).prevCubeState;
                                    uVar52 = SUB41(pCVar41,0);
                                    uVar53 = (undefined1)((uint)pCVar41 >> 8);
                                    uVar2 = (undefined2)((uint)pCVar41 >> 0x10);
                                    goto code_?;
                                  }
                                }
                              }
                              else {
                                pCVar14 = *ppCVar8;
                                if (pCVar14 != (CubePickingInfo *)0x0) {
                                  iVar34._0_2_ = (pCVar14->fields).iLocalPos.x;
                                  iVar34._2_2_ = (pCVar14->fields).iLocalPos.y;
                                  iVar5 = (pCVar14->fields).iLocalPos.z;
                                  FVar43 = (pCVar14->fields).pickedFace;
                                  uVar2 = iVar34._2_2_;
                                  if (cRam_? == '\0') {
                                    uVar2 = 0x11b1;
                                    func_?();
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  _auStack_44 = _auStack_44 & 0xffffffff;
                                  puStack_26 = (undefined *)((uint)puStack_26 & 0xffff0000);
                                  if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            ((IntVector *)(auStack_25 + 4),iVar34,
                                             CONCAT22(iVar5,uVar2),
                                             CONCAT22(in_stack_22,iVar5),(MethodInfo *)0x0);
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  pVVar21 = Cube::Cube_GetFaceAxis
                                                      ((Vector3 *)&stack0xffffffcc,FVar43,
                                                       (MethodInfo *)0x0);
                                  pCVar14 = *ppCVar8;
                                  uVar59 = pVVar21->x;
                                  uVar60 = pVVar21->y;
                                  sVar61 = auStack_25._4_2_ - (short)(int)(float)uVar59;
                                  _auStack_44 = CONCAT26(sStack_62 - (short)(int)(float)uVar60,
                                                         CONCAT24(sVar61,auStack_25._0_4_));
                                  sVar61 = (short)puStack_26 - (short)(int)pVVar21->z;
                                  if (pCVar14 != (CubePickingInfo *)0x0) {
                                    pos.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8)
                                    ;
                                    pos._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos,AudioActions__Enum_CubeRemoved,
                                               (MethodInfo *)0x0);
                                    if ((*ppCVar8 != (CubePickingInfo *)0x0) &&
                                       ((e->fields)._TargetCubeModel_k__BackingField !=
                                        (MVCubeModelBase *)0x0)) {
                                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 ((*ppCVar8)->fields).iLocalPos,(MethodInfo *)0x0);
                                      uVar63 = _auStack_44;
                                      pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                      if (pMVar15 != (MVCubeModelBase *)0x0) {
                                        pos_14.z._0_1_ = (char)sVar61;
                                        pos_14.x = auStack_25._4_2_;
                                        pos_14.y = sStack_62;
                                        pos_14.z._1_1_ = (char)((ushort)sVar61 >> 8);
                                        _auStack_44 = uVar63;
                                        a = MVCubeModelBase::MVCubeModelBase_GetCube
                                                      (pMVar15,pos_14,(MethodInfo *)0x0);
                                        pCVar41 = a;
                                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        bVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                 CubeBase_op_Inequality
                                                           ((CubeBase *)a,(CubeBase *)0x0,
                                                            (MethodInfo *)0x0);
                                        if (bVar30 == 0) {
                                          *ppCVar8 = (CubePickingInfo *)0x0;
                                          func_?();
                                        }
                                        else {
                                          pCVar14 = *ppCVar8;
                                          pCVar48 = (CubePickingInfo *)func_?();
                                          CubePickingInfo::CubePickingInfo__ctor_1
                                                    (pCVar48,pCVar14,(MethodInfo *)0x0);
                                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0)
                                          {
                                            func_?();
                                          }
                                          pCVar41 = Cube::Cube_Clone_1(pCVar41,(MethodInfo *)0x0);
                                          if (pCVar48 == (CubePickingInfo *)0x0)
                                          goto code_?;
                                          (pCVar48->fields).cube = pCVar41;
                                          func_?();
                                          uVar63 = _auStack_44;
                                          (pCVar48->fields).iLocalPos.x = auStack_25._4_2_;
                                          (pCVar48->fields).iLocalPos.y = sStack_62;
                                          (pCVar48->fields).iLocalPos.z = sVar61;
                                          *ppCVar8 = pCVar48;
                                          _auStack_44 = uVar63;
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
                            if (CVar33 != CubeOutOfBoundState__Enum_WithinBounds) break;
                            pCVar14 = *ppCVar8;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if ((pCVar14 != (CubePickingInfo *)0x0) &&
                               (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                               pMVar15 != (MVCubeModelBase *)0x0)) {
                              if ((((pMVar15->fields)._.interactionFlags & 4) == 0) &&
                                 ((e->fields).constraint != (IModelingConstraint *)0x0)) {
                                cVar58 = func_?();
                                bVar64 = cVar58 == '\0';
                              }
                              else {
                                bVar64 = false;
                              }
                              if ((*ppCVar8 != (CubePickingInfo *)0x0) &&
                                 (pCVar41 = ((*ppCVar8)->fields).cube, pCVar41 != (Cube *)0x0)) {
                                pVVar44 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                          CubeBase_get_Corners
                                                    ((CubeBase *)pCVar41,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                bVar30 = Cube::Cube_IsCollapsed(pVVar44,(MethodInfo *)0x0);
                                if ((bVar30 != 0) && (bVar64)) goto code_?;
                                pCVar14 = *ppCVar8;
                                if (pCVar14 != (CubePickingInfo *)0x0) {
                                  pos_01.z._1_1_ =
                                       (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                                  pos_01._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,pos_01,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0
                                            );
                                  pCVar14 = *ppCVar8;
                                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pMVar15 != (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              (pMVar15,(pCVar14->fields).iLocalPos,
                                               (pCVar14->fields).cube,(MethodInfo *)0x0);
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
                        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                  (1,(MethodInfo *)0x0);
                        if ((this->fields).edgeHasMoved == 0) {
                          ppCVar65 = &(e->fields)._SelectedCube_k__BackingField;
                          *ppCVar65 = *ppCVar8;
                          func_?();
                          if (*ppCVar65 != (CubePickingInfo *)0x0) {
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,((*ppCVar65)->fields).iLocalPos,AudioActions__Enum_CubeAdded
                                       ,(MethodInfo *)0x0);
                            EVar6 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                               (e,(MethodInfo *)0x0);
                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                            if (pMVar15 != (MVCubeModelBase *)0x0) {
                              iVar34 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar15,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar34,EVar6,(MethodInfo *)0x0);
                              if (EVar6 != EditCubeChange__Enum_None) {
code_?:
                                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                func_?();
                                (this->fields).edgeHasMoved = 0;
                                break;
                              }
                              pCVar14 = *ppCVar65;
                              if (pCVar14 != (CubePickingInfo *)0x0) {
                                iVar5 = (pCVar14->fields).iLocalPos.z;
                                uVar66 = (pCVar14->fields).iLocalPos.x;
                                pMVar36 = (MethodInfo *)(pCVar14->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_02.z = uVar66;
                                localPos_02._0_4_ = auStack_25 + 4;
                                IVar18 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_02,CONCAT22(in_stack_67,iVar5),
                                                    pMVar36);
                                pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar9 = (this->fields).modelCursor;
                                if ((pMVar15 != (MVCubeModelBase *)0x0) &&
                                   (pMVar9 != (ModelCursor3D *)0x0)) {
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar9,*IVar18._0_4_,
                                             (pMVar15->fields)._.gameObject,0,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                        else {
                          CVar68 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_CanRemoveCubeAt
                                             (e,*ppCVar8,(MethodInfo *)0x0);
                          pCVar14 = *ppCVar8;
                          if (CVar68 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
                            pMVar9 = (this->fields).modelCursor;
                            if (((pCVar14 != (CubePickingInfo *)0x0) &&
                                (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                                pMVar15 != (MVCubeModelBase *)0x0)) &&
                               (pMVar9 != (ModelCursor3D *)0x0)) {
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)pMVar9,(pCVar14->fields).iLocalPos,
                                         (pMVar15->fields)._.gameObject,1,(MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                          else if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                  (pCVar41 = (pCVar14->fields).cube, pCVar41 != (Cube *)0x0)) {
                            pVVar44 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                      CubeBase_get_Corners((CubeBase *)pCVar41,(MethodInfo *)0x0);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              in_stack_10 = 0xf;
                              in_stack_11 = 0x79;
                              in_stack_12 = 0x1045;
                              func_?();
                            }
                            bVar30 = Cube::Cube_IsCollapsed(pVVar44,(MethodInfo *)0x0);
                            pCVar14 = *ppCVar8;
                            if (bVar30 == 0) {
                              if (pCVar14 != (CubePickingInfo *)0x0) {
                                if (cRam_? == '\0') {
                                  func_?();
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pCVar14 = *ppCVar8;
                                pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pMVar15 != (MVCubeModelBase *)0x0)) {
                                  pCVar41 = (pCVar14->fields).cube;
                                  uVar2 = SUB42(pCVar41,0);
                                  uVar32 = (undefined2)((uint)pCVar41 >> 0x10);
code_?:
                                  iVector.z._1_1_ =
                                       (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                                  iVector._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            (pMVar15,iVector,(Cube *)CONCAT22(uVar32,uVar2),
                                             (MethodInfo *)
                                             CONCAT22(in_stack_12,
                                                      CONCAT11(in_stack_11,in_stack_10))
                                            );
                                  goto code_?;
                                }
                              }
                            }
                            else if (CVar68 == CanPerformCubeActionResult__Enum_Yes) {
                              if (pCVar14 != (CubePickingInfo *)0x0) {
                                pos_07.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                                pos_07._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                          (e,pos_07,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0
                                          );
                                pCVar14 = *ppCVar8;
                                pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pMVar15 != (MVCubeModelBase *)0x0)) {
                                  pos_16.z._1_1_ =
                                       (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                                  pos_16._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                                  MVCubeModelBase::MVCubeModelBase_RemoveCube
                                            (pMVar15,pos_16,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                            else {
                              pMVar9 = (this->fields).modelCursor;
                              if (((pCVar14 != (CubePickingInfo *)0x0) &&
                                  (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                                  pMVar15 != (MVCubeModelBase *)0x0)) &&
                                 (pMVar9 != (ModelCursor3D *)0x0)) {
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)pMVar9,(pCVar14->fields).iLocalPos,
                                           (pMVar15->fields)._.gameObject,0,(MethodInfo *)0x0);
                                pCVar14 = *ppCVar8;
                                if (pCVar14 != (CubePickingInfo *)0x0) {
                                  pIVar69 = &(pCVar14->fields).iLocalPos;
                                  uVar2 = pIVar69->x;
                                  uVar32 = pIVar69->y;
                                  iVar5 = (pCVar14->fields).iLocalPos.z;
                                  in_stack_10 = (undefined1)iVar5;
                                  in_stack_11 = (undefined1)((ushort)iVar5 >> 8);
                                  pos_15.z._1_1_ = in_stack_11;
                                  pos_15._0_5_ = *(undefined5 *)pIVar69;
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,pos_15,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0
                                            );
                                  pCVar14 = *ppCVar8;
                                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pMVar15 != (MVCubeModelBase *)0x0)) goto code_?;
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
                    bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                    if (bVar30 != 0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                (1,(MethodInfo *)0x0);
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
                      bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      if ((bVar30 != 0) &&
                         (bVar30 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0),
                         bVar30 != 0)) {
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
                      bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      if (bVar30 != 0) {
                        EVar6 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                           (e,(MethodInfo *)0x0);
                        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar15 != (MVCubeModelBase *)0x0) {
                          iVar34 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                             (pMVar15,(MethodInfo *)0x0);
                          CubeModelTool::CubeModelTool_SendCubeEvent
                                    (iVar34,EVar6,(MethodInfo *)0x0);
                          if (EVar6 != EditCubeChange__Enum_None) {
                            bVar7 = 1;
                            break;
                          }
                          pCVar14 = (e->fields)._SelectedCube_k__BackingField;
                          if (pCVar14 != (CubePickingInfo *)0x0) {
                            iVar5 = (pCVar14->fields).iLocalPos.z;
                            uVar70 = (pCVar14->fields).iLocalPos.x;
                            pMVar36 = (MethodInfo *)(pCVar14->fields).pickedFace;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            localPos_03.z._0_1_ = (char)uVar70;
                            localPos_03._0_4_ = auStack_25 + 4;
                            localPos_03.z._1_1_ = (char)((ushort)uVar70 >> 8);
                            IVar18 = Cube::Cube_GetCubePosAboveFace
                                               (localPos_03,CONCAT22(uVar2,iVar5),pMVar36);
                            pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                            pMVar9 = (this->fields).modelCursor;
                            if ((pMVar15 != (MVCubeModelBase *)0x0) &&
                               (pMVar9 != (ModelCursor3D *)0x0)) {
                              iPos_02.z._1_1_ =
                                   (char)((ushort)*(undefined2 *)((int)IVar18._0_4_ + 4) >> 8);
                              iPos_02._0_5_ = *IVar18._0_4_;
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)pMVar9,iPos_02,
                                         (pMVar15->fields)._.gameObject,0,(MethodInfo *)0x0);
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
                    bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                    if ((bVar30 != 0) &&
                       (fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                           ((MethodInfo *)0x0),
                       _UNK_? < fVar13 - (this->fields).prevMouseUpTime)) {
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
                        fVar13 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                           (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                        fVar13 = (float)((uint)fVar13 & _UNK_?);
                        fVar31 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                           (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                        if ((fVar13 != 0.0) || ((float)((uint)fVar31 & _UNK_?) != 0.0)) {
                          pCVar14 = (this->fields).prevSelectedCube;
                          if (pCVar14 != (CubePickingInfo *)0x0) {
                            pCVar41 = (pCVar14->fields).cube;
                            FVar43 = (pCVar14->fields).pickedFace;
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            uVar46 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                     CubeBase_GetMaterial
                                               ((CubeBase *)pCVar41,FVar43,(MethodInfo *)0x0);
                            pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar39 != (MVNetworkGame *)0x0) &&
                               (pMVar40 = (pMVar39->fields)._MaterialRepository_k__BackingField,
                               pMVar40 != (MVMaterialRepository *)0x0)) {
                              bVar30 = MVMaterialRepository::
                                       MVMaterialRepository_IsMaterialUnlocked_1
                                                 (pMVar40,uVar46,(MethodInfo *)0x0);
                              if (bVar30 == 0) {
                                pCVar14 = (this->fields).prevSelectedCube;
                                pMVar9 = (this->fields).modelCursor;
                                if (((pCVar14 == (CubePickingInfo *)0x0) ||
                                    (pMVar15 = (e->fields)._TargetCubeModel_k__BackingField,
                                    pMVar15 == (MVCubeModelBase *)0x0)) ||
                                   (pMVar9 == (ModelCursor3D *)0x0)) goto code_?;
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)pMVar9,(pCVar14->fields).iLocalPos,
                                           (pMVar15->fields)._.gameObject,1,(MethodInfo *)0x0);
                              }
                              else {
                                uVar71 = CubeModelingStateMachine::
                                         CubeModelingStateMachine_get_CurrentMaterialId
                                                   (e,(MethodInfo *)0x0);
                                (this->fields).prevMaterial = uVar71;
                                CubeModelingStateMachine::
                                CubeModelingStateMachine_set_CurrentMaterialId
                                          (e,uVar46,(MethodInfo *)0x0);
                                *ppCVar8 = (this->fields).prevSelectedCube;
                                func_?();
                                (this->fields).currentInternalState = 0;
                                (this->fields).deltaAccum = 0.0;
                                UnityEngine.CoreModule.dll::UnityEngine::Cursor::
                                Cursor_1_set_visible(0,(MethodInfo *)0x0);
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
                    bVar30 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                    if (bVar30 != 0) goto code_?;
                    pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                    if (pMVar15 == (MVCubeModelBase *)0x0) goto code_?;
                    bVar30 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                                       ((pMVar15->fields)._.gameObject,(IntVector *)&stack0xffffff98
                                        ,(MethodInfo *)0x0);
                    if ((bVar30 != 0) &&
                       (requestedCubePos_02.z = iVar5, requestedCubePos_02.x = (int16_t)uVar4,
                       requestedCubePos_02.y = SUB42(uVar4,2),
                       CVar68 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                          (e,requestedCubePos_02,(MethodInfo *)0x0),
                       CVar68 == CanPerformCubeActionResult__Enum_Yes)) {
                      pos_12.z = iVar5;
                      pos_12.x = (int16_t)uVar4;
                      pos_12.y = SUB42(uVar4,2);
                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                (e,pos_12,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      pVVar44 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar44,(MethodInfo *)0x0);
                      uVar2 = 0x8080;
                      uVar32 = 0x1045;
                      pCVar72 = e;
                      uVar46 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pBVar47 = Cube::Cube_CreateMaterialArray(uVar46,(MethodInfo *)0x0);
                      bVar7 = 0xb2;
                      pCVar41 = (Cube *)func_?();
                      Cube::Cube__ctor(pCVar41,pBVar45,pBVar47,(MethodInfo *)0x0);
                      if ((MVCubeModelBase *)CONCAT22(uVar32,uVar2) == (MVCubeModelBase *)0x0)
                      goto code_?;
                      pos_13.z = iVar5;
                      pos_13._0_4_ = pCVar72;
                      MVCubeModelBase::MVCubeModelBase_AddCube
                                ((MVCubeModelBase *)CONCAT22(uVar32,uVar2),pos_13,
                                 (CubeBase *)pCVar41,(MethodInfo *)0x0);
                    }
                  }
                  pCVar14 = (this->fields).movingEdgeCube;
                  if (pCVar14 == (CubePickingInfo *)0x0) {
                    pCVar41 = (Cube *)0x0;
                  }
                  else {
                    pCVar41 = (pCVar14->fields).cube;
                    if (pCVar41 == (Cube *)0x0) goto code_?;
                    pCVar41 = Cube::Cube_Clone(pCVar41,(MethodInfo *)0x0);
                  }
                  (this->fields).prevCubeState = pCVar41;
                  func_?();
                  (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
                  func_?();
                  pMVar9 = (this->fields).modelCursor;
                  uVar2 = SUB42(pMVar9,0);
                  uVar32 = (undefined2)((uint)pMVar9 >> 0x10);
                  if (pMVar9 == (ModelCursor3D *)0x0) {
code_?:
                    *unaff_FS_OFFSET = puVar1;
                    return;
                  }
                  pCVar14 = (this->fields).movingEdgeCube;
                  pCVar48 = (e->fields)._SelectedCube_k__BackingField;
                  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
                  uVar52 = SUB41(pCVar48,0);
                  uVar53 = (undefined1)((uint)pCVar48 >> 8);
                  uVar54 = (undefined2)((uint)pCVar48 >> 0x10);
                  if (pMVar15 != (MVCubeModelBase *)0x0) {
                    cubeGameObject = (EditCubes *)(pMVar15->fields)._.gameObject;
                    puStack_26 = (undefined *)(this->fields).currentInternalState;
                    lVar73 = ZEXT48(cubeGameObject) << 0x20;
                    this = cubeGameObject;
                    if (pCVar14 == (CubePickingInfo *)0x0) {
                      pFVar74 = (pMVar9->fields)._.faceCursor;
                      if (pCVar48 == (CubePickingInfo *)0x0) {
                        if ((pFVar74 != (FaceCursor *)0x0) &&
                           (pGVar20 = (pFVar74->fields).gameObject, pGVar20 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar20,0,(MethodInfo *)0x0);
                          pIVar29 = (pMVar9->fields).indentArea;
                          if ((pIVar29 != (IndentArea *)0x0) &&
                             (pGVar20 = (pIVar29->fields).gameObject, pGVar20 != (GameObject *)0x0))
                          {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
code_?:
                            this_00 = (pMVar9->fields)._.errorCursor;
                            if (this_00 != (CellCursor *)0x0) {
                              CellCursor::CellCursor_UpdateCursor(this_00,(MethodInfo *)0x0);
                              ModelCursor::ModelCursor_HandleLaser
                                        ((ModelCursor *)pMVar9,pCVar14,
                                         (CubePickingInfo *)CONCAT22(uVar54,CONCAT11(uVar53,uVar52))
                                         ,(GameObject *)this,(BuildState__Enum)puStack_26,bVar7,
                                         (MethodInfo *)0x0);
                              *unaff_FS_OFFSET = puVar1;
                              return;
                            }
                          }
                        }
                      }
                      else if ((pFVar74 != (FaceCursor *)0x0) &&
                              (pGVar20 = (pFVar74->fields).gameObject, pGVar20 != (GameObject *)0x0)
                              ) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar20,1,(MethodInfo *)0x0);
                        pFVar74 = (pMVar9->fields)._.faceCursor;
                        if (pFVar74 != (FaceCursor *)0x0) {
                          pCVar48 = (CubePickingInfo *)CONCAT22(uVar54,CONCAT11(uVar53,uVar52));
code_?:
                          this = (EditCubes *)((ulonglong)lVar73 >> 0x20);
                          FaceCursor::FaceCursor_UpdateCursor
                                    (pFVar74,pCVar48,(GameObject *)cubeGameObject,(MethodInfo *)0x0)
                          ;
                          goto code_?;
                        }
                      }
                    }
                    else {
                      e = (CubeModelingStateMachine *)(pMVar9->fields).indentArea;
                      if (e != (CubeModelingStateMachine *)0x0) {
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          func_?();
                          func_?();
                          func_?();
                          e = (CubeModelingStateMachine *)
                              &TypeInfo__System__Collections__Generic__List<int>;
                          this = (EditCubes *)&UNK_?;
                          func_?();
                          cRam_? = '\x01';
                        }
                        FVar43 = (pCVar14->fields).pickedFace;
                        pCVar41 = (pCVar14->fields).cube;
                        iVar5 = (pCVar14->fields).iLocalPos.z;
                        uVar75 = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        iVector_00.z._1_1_ = (char)((ushort)iVar5 >> 8);
                        iVector_00._0_5_ = uVar75;
                        pVVar44 = Cube::Cube_GetFaceVerticesWorld
                                            ((GameObject *)this,pCVar41,FVar43,iVector_00,
                                             (MethodInfo *)0x0);
                        this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                   *)func_?();
                        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                        Metadata::__Il2CppFullySharedGenericType]::
                        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                    *)this_02,
                                   MethodInfo__System__Collections__Generic__List<int>__List__);
                        pGVar20 = (GameObject *)(e->fields)._.transitionTable;
                        if (((pGVar20 != (GameObject *)0x0) &&
                            (this_03 = (MeshFilter *)
                                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_GetComponent_1
                                                 (pGVar20,
                                                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                                 ), this_03 != (MeshFilter *)0x0)) &&
                           ((this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                       MeshFilter_get_mesh(this_03,(MethodInfo *)0x0),
                            this_04 != (Mesh *)0x0 &&
                            (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                       (this_04,(MethodInfo *)0x0),
                            pMVar36 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                            this_02 !=
                            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)0x0)))) {
                          piVar76 = &(this_02->fields)._version;
                          *piVar76 = *piVar76 + 1;
                          pMVar77 = (this_02->fields)._items;
                          uVar78 = (this_02->fields)._size;
                          if (pMVar77 !=
                              (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                            if (uVar78 < pMVar77->max_length) {
                              (this_02->fields)._size = uVar78 + 1;
                              if (pMVar77->max_length <= uVar78) goto code_?;
                              (&pMVar77->vector[0].index)[uVar78] = 0;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        ((List_1_System_Int32_ *)this_02,0,
                                         pMVar36->klass->rgctx_data[0xe].method);
                            }
                            pMVar36 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                            piVar76 = &(this_02->fields)._version;
                            *piVar76 = *piVar76 + 1;
                            pMVar77 = (this_02->fields)._items;
                            uVar78 = (this_02->fields)._size;
                            if (pMVar77 !=
                                (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                              if (uVar78 < pMVar77->max_length) {
                                (this_02->fields)._size = uVar78 + 1;
                                if (pMVar77->max_length <= uVar78) goto code_?;
                                (&pMVar77->vector[0].index)[uVar78] = 3;
                              }
                              else {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                List_1_System_Int32__AddWithResize
                                          ((List_1_System_Int32_ *)this_02,3,
                                           pMVar36->klass->rgctx_data[0xe].method);
                              }
                              pMVar36 = 
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                              piVar76 = &(this_02->fields)._version;
                              *piVar76 = *piVar76 + 1;
                              pMVar77 = (this_02->fields)._items;
                              uVar78 = (this_02->fields)._size;
                              if (pMVar77 !=
                                  (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                                if (uVar78 < pMVar77->max_length) {
                                  (this_02->fields)._size = uVar78 + 1;
                                  if (pMVar77->max_length <= uVar78) goto code_?;
                                  (&pMVar77->vector[0].index)[uVar78] = 2;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]
                                  ::List_1_System_Int32__AddWithResize
                                            ((List_1_System_Int32_ *)this_02,2,
                                             pMVar36->klass->rgctx_data[0xe].method);
                                }
                                pMVar36 = 
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                piVar76 = &(this_02->fields)._version;
                                *piVar76 = *piVar76 + 1;
                                pMVar77 = (this_02->fields)._items;
                                uVar78 = (this_02->fields)._size;
                                if (pMVar77 !=
                                    (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                                {
                                  if (uVar78 < pMVar77->max_length) {
                                    (this_02->fields)._size = uVar78 + 1;
                                    if (pMVar77->max_length <= uVar78) goto code_?;
                                    (&pMVar77->vector[0].index)[uVar78] = 2;
                                  }
                                  else {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Int32]::List_1_System_Int32__AddWithResize
                                              ((List_1_System_Int32_ *)this_02,2,
                                               pMVar36->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar36 = 
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                  piVar76 = &(this_02->fields)._version;
                                  *piVar76 = *piVar76 + 1;
                                  pMVar77 = (this_02->fields)._items;
                                  uVar78 = (this_02->fields)._size;
                                  if (pMVar77 !=
                                      (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                      0x0) {
                                    if (uVar78 < pMVar77->max_length) {
                                      (this_02->fields)._size = uVar78 + 1;
                                      if (pMVar77->max_length <= uVar78) goto code_?;
                                      (&pMVar77->vector[0].index)[uVar78] = 1;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Int32]::List_1_System_Int32__AddWithResize
                                                ((List_1_System_Int32_ *)this_02,1,
                                                 pMVar36->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar36 = 
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                    piVar76 = &(this_02->fields)._version;
                                    *piVar76 = *piVar76 + 1;
                                    pMVar77 = (this_02->fields)._items;
                                    uVar78 = (this_02->fields)._size;
                                    if (pMVar77 !=
                                        (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                        0x0) {
                                      if (uVar78 < pMVar77->max_length) {
                                        (this_02->fields)._size = uVar78 + 1;
                                        if (pMVar77->max_length <= uVar78) goto code_?;
                                        (&pMVar77->vector[0].index)[uVar78] = 0;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)this_02,0,
                                                   pMVar36->klass->rgctx_data[0xe].method);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_vertices(this_04,pVVar44,(MethodInfo *)0x0);
                                      value_00 = IndentArea::IndentArea_SetUVs
                                                           ((IndentArea *)e,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                                (this_04,value_00,(MethodInfo *)0x0);
                                      pMVar77 = mscorlib.dll::System::Collections::Generic::
                                                List`1[UnityEngine::UIElements::Internal::
                                                MultiColumnCollectionHeader+ViewState+ColumnState]::
                                                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                          (this_02,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_triangles(this_04,(Int32__Array *)pMVar77,
                                                         (MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateNormals(this_04,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateBounds(this_04,(MethodInfo *)0x0);
                                      if (pVVar44 != (Vector3__Array *)0x0) {
                                        if (pVVar44->max_length < 3) goto code_?;
                                        uVar79 = pVVar44->vector[0].x;
                                        uVar80 = pVVar44->vector[2].x;
                                        fVar13 = ((float)uVar80 - (float)uVar79) * _UNK_?;
                                        uVar81 = pVVar44->vector[0].x;
                                        pGVar20 = (GameObject *)(e->fields)._.transitionTable;
                                        if (pGVar20 != (GameObject *)0x0) {
                                          pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar20,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pIVar82 = (e->fields)._.currentState;
                                          pVVar83 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar84 = (pVVar83->oneVector).x;
                                          uVar85 = (pVVar83->oneVector).y;
                                          fVar31 = (float)pIVar82 * (pVVar83->oneVector).z;
                                          if (pTVar23 != (Transform *)0x0) {
                                            value.y._0_2_ = SUB42((float)pIVar82 * (float)uVar85,0);
                                            value.x = (float)pIVar82 * (float)uVar84;
                                            value.y._2_2_ =
                                                 (short)((uint)((float)pIVar82 * (float)uVar85) >>
                                                        0x10);
                                            value.z._0_1_ = SUB41(fVar31,0);
                                            value.z._1_1_ = (char)((uint)fVar31 >> 8);
                                            value.z._2_2_ = (short)((uint)fVar31 >> 0x10);
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_localScale
                                                      (pTVar23,value,(MethodInfo *)0x0);
                                            pGVar20 = (GameObject *)(e->fields)._.transitionTable;
                                            if (pGVar20 != (GameObject *)0x0) {
                                              pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar20,(MethodInfo *)0x0);
                                              pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Mesh::Mesh_get_vertices
                                                                  (this_04,(MethodInfo *)0x0);
                                              if (pVVar44 != (Vector3__Array *)0x0) {
                                                if (pVVar44->max_length == 0) goto code_?;
                                                if (pTVar23 != (Transform *)0x0) {
                                                  bVar7 = 0;
                                                  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_TransformPoint
                                                                      ((Vector3 *)&stack0xffffffcc,
                                                                       pTVar23,pVVar44->vector[0],
                                                                       (MethodInfo *)0x0);
                                                  fVar31 = pVVar21->x;
                                                  fVar86 = pVVar21->y;
                                                  fVar87 = pVVar21->z;
                                                  pGVar20 = (GameObject *)
                                                            (e->fields)._.transitionTable;
                                                  if (pGVar20 != (GameObject *)0x0) {
                                                    pTVar88 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar20,(MethodInfo *)0x0);
                                                    pVVar44 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Mesh::Mesh_get_vertices
                                                                        (this_04,(MethodInfo *)0x0);
                                                    if (pVVar44 != (Vector3__Array *)0x0) {
                                                      if (pVVar44->max_length < 3)
                                                      goto code_?;
                                                      if (pTVar88 != (Transform *)0x0) {
                                                        fVar89 = pVVar44->vector[2].z;
                                                        fVar90 = 0.0;
                                                        uVar52 = SUB41(fVar89,0);
                                                        uVar53 = (undefined1)((uint)fVar89 >> 8);
                                                        uVar54 = (undefined2)((uint)fVar89 >> 0x10);
                                                        position.z._1_1_ = uVar53;
                                                        position._0_9_ =
                                                             *(unkbyte9 *)(pVVar44->vector + 2);
                                                        position.z._2_2_ = uVar54;
                                                        pVVar21 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_TransformPoint
                                                                            ((Vector3 *)
                                                                             &stack0xffffff64,
                                                                             pTVar88,position,
                                                                             (MethodInfo *)0x0);
                                                        uVar91 = pVVar21->x;
                                                        uVar92 = pVVar21->y;
                                                        fVar93 = ((float)uVar91 - fVar31) *
                                                                 _UNK_?;
                                                        fVar89 = (pVVar21->z - fVar87) *
                                                                 _UNK_?;
                                                        fVar86 = fVar86 + ((float)uVar92 - fVar86) *
                                                                          _UNK_?;
                                                        pGVar20 = (GameObject *)
                                                                  (e->fields)._.transitionTable;
                                                        if ((pGVar20 != (GameObject *)0x0) &&
                                                           (pTVar88 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar20,(MethodInfo
                                                                                          *)0x0),
                                                           pTVar88 != (Transform *)0x0)) {
                                                          puVar1 = &UNK_?;
                                                          pVVar21 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xffffff64,
                                                                               pTVar88,(MethodInfo *
                                                                                       )0x0);
                                                          uVar94 = pVVar21->x;
                                                          uVar95 = pVVar21->y;
                                                          uVar96 = (pCVar14->fields).normal.x;
                                                          uVar97 = (pCVar14->fields).normal.y;
                                                          cubeGameObject =
                                                               (EditCubes *)
                                                               (pVVar21->z +
                                                               (pCVar14->fields).normal.z *
                                                               _UNK_? +
                                                               ((float)pTVar23 - (fVar87 + fVar89)))
                                                          ;
                                                          lVar73 = CONCAT44(cubeGameObject,
                                                                            (float)uVar95 +
                                                                            (float)uVar97 *
                                                                            _UNK_? +
                                                                            (fVar90 - fVar86));
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar88,(Vector3)CONCAT84(
                                                  lVar73,(float)uVar94 +
                                                         (float)uVar96 * _UNK_? +
                                                         (((float)uVar81 + fVar13) -
                                                         (fVar31 + fVar93))),(MethodInfo *)0x0);
                                                  pMVar9 = (ModelCursor3D *)CONCAT22(uVar32,uVar2)
                                                  ;
                                                  pFVar74 = (pMVar9->fields)._.faceCursor;
                                                  if ((pFVar74 != (FaceCursor *)0x0) &&
                                                     (pGVar20 = (pFVar74->fields).gameObject,
                                                     pGVar20 != (GameObject *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar20,1,(MethodInfo *)0x0);
                                                    pFVar74 = (pMVar9->fields)._.faceCursor;
                                                    pCVar48 = pCVar14;
                                                    if (pFVar74 != (FaceCursor *)0x0)
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
                }
              }
            }
          }
        }
      }
    }
    else if (e != (CubeModelingStateMachine *)0x0) {
      pCVar14 = (e->fields)._SelectedCube_k__BackingField;
      if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
      pIVar29 = (pMVar9->fields).indentArea;
      pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
      if ((pMVar15 != (MVCubeModelBase *)0x0) && (pIVar29 != (IndentArea *)0x0)) {
        uVar2 = (undefined2)((uint)pIVar29 >> 0x10);
        IndentArea::IndentArea_UpdateIndentArea
                  (pIVar29,pCVar14,(pMVar15->fields)._.gameObject,(MethodInfo *)0x0);
        pMVar9 = (this->fields).modelCursor;
        if ((pMVar9 != (ModelCursor3D *)0x0) &&
           (pIVar29 = (pMVar9->fields).indentArea, pIVar29 != (IndentArea *)0x0)) {
          bVar7 = IndentArea::IndentArea_IsColliding(pIVar29,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            pMVar9 = (this->fields).modelCursor;
            if (((pMVar9 != (ModelCursor3D *)0x0) &&
                (pIVar29 = (pMVar9->fields).indentArea, pIVar29 != (IndentArea *)0x0)) &&
               (pGVar20 = (pIVar29->fields).gameObject, pGVar20 != (GameObject *)0x0)) {
              bVar7 = 0;
code_?:
              in_stack_67 = (undefined2)((uint)pGVar20 >> 0x10);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar20,bVar7,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            pCVar14 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar14 != (CubePickingInfo *)0x0) {
              (pCVar14->fields).pickedEdge = 0;
              pMVar9 = (this->fields).modelCursor;
              if (((pMVar9 != (ModelCursor3D *)0x0) &&
                  (pIVar29 = (pMVar9->fields).indentArea, pIVar29 != (IndentArea *)0x0)) &&
                 (pGVar20 = (pIVar29->fields).gameObject, pGVar20 != (GameObject *)0x0)) {
                bVar7 = 1;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

