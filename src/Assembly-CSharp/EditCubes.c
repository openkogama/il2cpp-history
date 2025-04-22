
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
    (this->fields).modelCursor = this_01;
    func_?(&(this->fields).modelCursor,this_01);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_00 = (pGVar2->fields).LaserCommands,
       this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                (this_00,LaserPointerState__Enum_EditingCube,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      (this->fields)._.waitForMouseUp = bVar3;
      (this->fields).currentInternalState = 2;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  fVar3 = (float)((uint)uStack_4 << 0x10);
  puStack_5 = &stack0xfffffffc;
  uStack_6 = 0xffffffff;
  puStack_7 = &DAT_?;
  uStack_8 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_8;
  puStack_9 = &stack0xffffff00;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xffffff00;
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_12 = 0x11b4;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar10 = puStack_5;
    puVar11 = puStack_9;
  }
  puStack_9 = puVar11;
  puStack_5 = puVar10;
  uStack_13 = (MethodInfo **)((uint)uStack_13 & 0xffffff);
  puStack_14 = (undefined *)0x0;
  iVar15 = 0;
  CStack_16 = CubeOutOfBoundState__Enum_WithinBounds;
  if (cRam_? == '\0') {
    in_stack_12 = 0x1045;
    iVar15 = 0;
    func_?();
    cRam_? = '\x01';
  }
  pCVar17 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar17->cubeChange != 0) &&
     (pCVar17->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    in_stack_12 = (undefined2)((uint)pCVar17->cubeChange >> 0x10);
    (*(pCVar17->OnEditCubeChange->fields)._._.invoke_impl)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EVar18 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar19;
    goto code_?;
  }
  pMVar20 = (this->fields).modelCursor;
  if (pMVar20 == (ModelCursor3D *)0x0) {
code_?:
    func_?();
    func_?();
    func_?();
  }
  else {
    if ((pMVar20->fields).indentArea != (IndentArea *)0x0 &&
        (this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar22 = (((this->fields).modelCursor)->fields).indentArea;
        if ((pMVar21 != (MVCubeModelBase *)0x0) && (pIVar22 != (IndentArea *)0x0)) {
          pGVar23 = (pMVar21->fields)._.gameObject;
          in_stack_12 = (undefined2)((uint)pGVar23 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar22,(e->fields)._SelectedCube_k__BackingField,pGVar23,(MethodInfo *)0x0);
          pMVar20 = (this->fields).modelCursor;
          if ((pMVar20 != (ModelCursor3D *)0x0) &&
             (pIVar22 = (pMVar20->fields).indentArea, pIVar22 != (IndentArea *)0x0)) {
            bVar19 = IndentArea::IndentArea_IsColliding(pIVar22,(MethodInfo *)0x0);
            if (bVar19 == 0) {
              pMVar20 = (this->fields).modelCursor;
              if (((pMVar20 != (ModelCursor3D *)0x0) &&
                  (pIVar22 = (pMVar20->fields).indentArea, pIVar22 != (IndentArea *)0x0)) &&
                 (pGVar23 = (pIVar22->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
                bVar19 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar23,bVar19,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar24 = (e->fields)._SelectedCube_k__BackingField;
              if (pCVar24 != (CubePickingInfo *)0x0) {
                (pCVar24->fields).pickedEdge = 0;
                pMVar20 = (this->fields).modelCursor;
                if (((pMVar20 != (ModelCursor3D *)0x0) &&
                    (pIVar22 = (pMVar20->fields).indentArea, pIVar22 != (IndentArea *)0x0)) &&
                   (pGVar23 = (pIVar22->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
                  bVar19 = 1;
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
      in_stack_12 = 0x1045;
      func_?();
    }
    bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar19 != 0) {
      in_stack_12 = 0;
      pVStack_25 = (Vector3__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      (this->fields).prevMouseUpTime = (float)pVStack_25;
    }
    if (cRam_? == '\0') {
      in_stack_12 = 0x1045;
      func_?();
      cRam_? = '\x01';
    }
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
    pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
    pVStack_26 = (Vector3__Array *)(pMVar21->fields)._.gameObject;
    pCVar24 = (e->fields)._SelectedCube_k__BackingField;
    pVStack_25 = *(Vector3__Array **)&(pCVar24->fields).iLocalPos;
    uStack_27 = (IndentArea *)CONCAT22((pCVar24->fields).iLocalPos.z,(undefined2)uStack_27);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar28.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
    IVar28._0_4_ = pVStack_25;
    IVar28.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
    pVVar29 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                        (&VStack_30,(GameObject *)pVStack_26,IVar28,(MethodInfo *)0x0);
    uVar31 = pVVar29->x;
    uVar32 = pVVar29->y;
    fVar3 = pVVar29->z;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_03 == (MainCameraManager *)0x0) ||
       (pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_03,(MethodInfo *)0x0), pTVar33 == (Transform *)0x0))
    goto code_?;
    pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_30,pTVar33,(MethodInfo *)0x0);
    uVar34 = pVVar29->x;
    uVar35 = pVVar29->y;
    VStack_30.z = pVVar29->z - fVar3;
    VStack_30.y = (float)uVar35 - (float)uVar32;
    VStack_30.x = (float)uVar34 - (float)uVar31;
    fVar36 = (float10)func_?();
    pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
    pVStack_25 = (Vector3__Array *)(float)fVar36;
    if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
    in_stack_12 = (undefined2)((uint)pMVar21 >> 0x10);
    puVar37 = (undefined8 *)(*(code *)(pMVar21->klass->vtable).get_Scale.method)();
    pMVar20 = (this->fields).modelCursor;
    if ((float)((ulonglong)*puVar37 >> 0x20) * _UNK_? < (float)pVStack_25) {
      (this->fields).mouseSensitivity = 0.1325;
      if ((pMVar20 != (ModelCursor3D *)0x0) &&
         (pIVar22 = (pMVar20->fields).indentArea, pIVar22 != (IndentArea *)0x0)) {
        (pIVar22->fields).size = 1.0;
        goto code_?;
      }
      goto code_?;
    }
    (this->fields).mouseSensitivity = 0.0225;
    if ((pMVar20 == (ModelCursor3D *)0x0) ||
       (pIVar22 = (pMVar20->fields).indentArea, pIVar22 == (IndentArea *)0x0))
    goto code_?;
    (pIVar22->fields).size = 0.5;
code_?:
    uStack_4 = (ushort)((uint)fVar3 >> 0x10);
    bVar38 = false;
    uStack_27 = (IndentArea *)((uint)uStack_27 & 0xffffff);
    switch((this->fields).currentInternalState) {
    case 0:
      if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar19 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_25 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          pVStack_26 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          fVar39 = (float)pVStack_25 * _UNK_?;
          fVar3 = (float)pVStack_26 * _UNK_?;
          uStack_40 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
          pVStack_25 = (Vector3__Array *)(this->fields).mouseSensitivity;
          pCVar24 = (this->fields).movingEdgeCube;
          iVar15 = 0;
          uVar41 = 0;
          if (pCVar24 != (CubePickingInfo *)0x0) {
            bVar19 = (pCVar24->fields).pickedEdgeIndex0;
            pVStack_26._1_3_ = (undefined3)((uint)pVStack_26 >> 8);
            pVStack_26 = (Vector3__Array *)
                         CONCAT31(pVStack_26._1_3_,
                                  (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar42 = (MethodInfo *)((int)&uStack_13 + 3);
            showUnlockNotification = (bool)pVStack_25;
            uVar43 = (undefined2)((uint)pVStack_25 >> 0x10);
            pGVar23 = (GameObject *)&(this->fields).deltaAccum;
            mousePositionDelta.z._2_2_ = uVar41;
            mousePositionDelta.z._0_2_ = iVar15;
            mousePositionDelta.y =
                 (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),
                                       CONCAT24(SUB42(fVar3,0),fVar39)) >> 0x20);
            mousePositionDelta.x = fVar39;
            pVStack_25 = (Vector3__Array *)
                         SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                   ((MVCubeModelBase *)uStack_40,pCVar24,mousePositionDelta,
                                    &(this->fields).delta,(float *)pGVar23,(float)pVStack_25,
                                    (bool *)pMVar42,bVar19,(bool)pVStack_26,
                                    (EditCubeChange__Enum *)&stack0xffffff64,(MethodInfo *)0x0);
            if (pVStack_25 == (Vector3__Array *)0x0) {
              pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
              iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar21,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar18,(MethodInfo *)0x0);
            }
            if ((uStack_13._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
              (this->fields).edgeHasMoved = 1;
            }
            if (pVStack_25 == (Vector3__Array *)0x1) {
              pCVar24 = (this->fields).movingEdgeCube;
              if (pCVar24 != (CubePickingInfo *)0x0) {
                pVStack_25 = *(Vector3__Array **)&(pCVar24->fields).iLocalPos;
                uStack_27._2_2_ = (pCVar24->fields).iLocalPos.z;
                pVStack_26 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos.z = (int16_t)pVStack_25;
                localPos._0_4_ = &stack0xffffff6c;
                IVar28 = Cube::Cube_GetCubePosAboveFace
                                   (localPos,CONCAT22(uVar1,uStack_27._2_2_),
                                    (MethodInfo *)pVStack_26);
                pIVar45 = IVar28._0_4_;
                uStack_40 = *(Vector3__Array **)pIVar45;
                uStack_27 = (IndentArea *)CONCAT22(pIVar45->z,(undefined2)uStack_27);
                pVStack_26 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,*pIVar45,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                if (pVStack_26 == (Vector3__Array *)0x0) {
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  if (pMVar21 != (MVCubeModelBase *)0x0) {
                    pos.z = uStack_27._2_2_;
                    pos._0_4_ = uStack_40;
                    pVStack_25 = (Vector3__Array *)
                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                           (pMVar21,pos,(MethodInfo *)0x0);
                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MV__WorldObject__CubeBase);
                    }
                    bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                       ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0);
                    if (bVar19 == 0) goto code_?;
                    pos_00.z = uStack_27._2_2_;
                    pos_00._0_4_ = uStack_40;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_00,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                    pVStack_26 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar24 = (this->fields).movingEdgeCube;
                    if (pCVar24 != (CubePickingInfo *)0x0) {
                      pVStack_25 = (Vector3__Array *)(pCVar24->fields).cube;
                      FVar46 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar47 = Cube::Cube_GetCorners((Cube *)pVStack_25,FVar46,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar48 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar47,(MethodInfo *)0x0);
                      uVar49 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar49);
                      pBVar50 = Cube::Cube_CreateMaterialArray(uVar49,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_25,pBVar48,pBVar50,(MethodInfo *)0x0);
                      if (pVStack_26 != (Vector3__Array *)0x0) {
                        pos_07.z = uStack_27._2_2_;
                        pos_07._0_4_ = uStack_40;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_26,pos_07,(CubeBase *)pVStack_25,
                                   (MethodInfo *)0x0);
                        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar21 != (MVCubeModelBase *)0x0) {
                          iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                             (pMVar21,(MethodInfo *)0x0);
                          CubeModelTool::CubeModelTool_SendCubeEvent
                                    (iVar44,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                          pCVar24 = (this->fields).movingEdgeCube;
                          pCVar51 = (CubePickingInfo *)func_?();
                          CubePickingInfo::CubePickingInfo__ctor_1
                                    (pCVar51,pCVar24,(MethodInfo *)0x0);
                          pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                          if (pMVar21 != (MVCubeModelBase *)0x0) {
                            pos_08.z = uStack_27._2_2_;
                            pos_08._0_4_ = uStack_40;
                            pCVar52 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                (pMVar21,pos_08,(MethodInfo *)0x0);
                            pCVar52 = Cube::Cube_Clone_1(pCVar52,(MethodInfo *)0x0);
                            if (pCVar51 != (CubePickingInfo *)0x0) {
                              (pCVar51->fields).cube = pCVar52;
                              func_?();
                              *(Vector3__Array **)&(pCVar51->fields).iLocalPos = uStack_40;
                              (pCVar51->fields).iLocalPos.z = uStack_27._2_2_;
                              pCVar24 = (this->fields).movingEdgeCube;
                              if ((pCVar24 != (CubePickingInfo *)0x0) &&
                                 ((e->fields)._TargetCubeModel_k__BackingField !=
                                  (MVCubeModelBase *)0x0)) {
                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                          ((e->fields)._TargetCubeModel_k__BackingField,
                                           (pCVar24->fields).iLocalPos,(pCVar24->fields).cube,
                                           (MethodInfo *)0x0);
                                (this->fields).movingEdgeCube = pCVar51;
                                func_?();
                                pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_25 != (Vector3__Array *)0x0) {
                                  pVVar29 = Cube::Cube_GetFaceAxis
                                                      (&VStack_30,pVStack_25->max_length,
                                                       (MethodInfo *)0x0);
                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-0.75,*pVVar29,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff38,
                                                      (MethodInfo *)0x0);
code_?:
                                  pCVar24 = (this->fields).movingEdgeCube;
                                  if ((pCVar24 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar24->fields).iLocalPos,(pCVar24->fields).cube,
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
                }
                else {
code_?:
                  VStack_30.z = (float)pVStack_26;
                  VStack_30.y = -NAN;
                  VStack_30.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_30,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                  uVar41 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)CONCAT22(uVar41,uVar1),str1,(MethodInfo *)0x0);
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar20 = (this->fields).modelCursor;
                  if ((pMVar21 != (MVCubeModelBase *)0x0) && (pMVar20 != (ModelCursor3D *)0x0)) {
                    iPos.z = uStack_27._2_2_;
                    iPos._0_4_ = uStack_40;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar20,iPos,(pMVar21->fields)._.gameObject,
                               pVStack_26 == (Vector3__Array *)0x2,(MethodInfo *)0x0);
                    pCVar24 = (this->fields).movingEdgeCube;
                    pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0))
                    {
                      pCVar52 = (pCVar24->fields).cube;
code_?:
                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                (pMVar21,(pCVar24->fields).iLocalPos,pCVar52,(MethodInfo *)0x0);
                      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                      func_?();
                      break;
                    }
                  }
                }
              }
            }
            else if (pVStack_25 == (Vector3__Array *)0x4) {
              pCVar24 = (this->fields).movingEdgeCube;
              if (pCVar24 != (CubePickingInfo *)0x0) {
                pVStack_25 = *(Vector3__Array **)&(pCVar24->fields).iLocalPos;
                uStack_27._2_2_ = (pCVar24->fields).iLocalPos.z;
                pVStack_26 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_02.z = (int16_t)pVStack_25;
                localPos_02._0_4_ = &stack0xffffff6c;
                IVar28 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_02,CONCAT22(uVar43,uStack_27._2_2_),
                                    (MethodInfo *)pVStack_26);
                puVar53 = IVar28._0_4_;
                uStack_40 = *(Vector3__Array **)puVar53;
                uStack_27 = (IndentArea *)
                            CONCAT22(*(undefined2 *)((int)puVar53 + 4),(undefined2)uStack_27);
                requestedCubePos_00.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar53 + 4) >> 8)
                ;
                requestedCubePos_00._0_5_ = *puVar53;
                pVStack_26 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,requestedCubePos_00,(this->fields).movingEdgeCube,
                                        (MethodInfo *)0x0);
                if (pVStack_26 != (Vector3__Array *)0x0) {
code_?:
                  VStack_30.z = (float)pVStack_26;
                  VStack_30.y = -NAN;
                  VStack_30.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_30,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                  uVar41 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                  goto code_?;
                }
                pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar21 != (MVCubeModelBase *)0x0) {
                  pos_03.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
                  pos_03._0_4_ = uStack_40;
                  pos_03.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
                  pVStack_25 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar21,pos_03,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar19 == 0) goto code_?;
                  pCVar24 = (this->fields).movingEdgeCube;
                  if (pCVar24 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar24->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_26 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar24 = (this->fields).movingEdgeCube;
                    if (pCVar24 != (CubePickingInfo *)0x0) {
                      pVStack_25 = (Vector3__Array *)(pCVar24->fields).cube;
                      FVar46 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar47 = Cube::Cube_GetCorners((Cube *)pVStack_25,FVar46,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar48 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar47,(MethodInfo *)0x0);
                      uVar49 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar49);
                      pBVar50 = Cube::Cube_CreateMaterialArray(uVar49,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_25,pBVar48,pBVar50,(MethodInfo *)0x0);
                      if (pVStack_26 != (Vector3__Array *)0x0) {
                        pos_12.z = uStack_27._2_2_;
                        pos_12._0_4_ = uStack_40;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_26,pos_12,(CubeBase *)pVStack_25,
                                   (MethodInfo *)0x0);
                        pCVar24 = (this->fields).movingEdgeCube;
                        pCVar51 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar51,pCVar24,(MethodInfo *)0x0);
                        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar21 != (MVCubeModelBase *)0x0) {
                          pos_06.z = uStack_27._2_2_;
                          pos_06._0_4_ = uStack_40;
                          pCVar52 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar21,pos_06,(MethodInfo *)0x0);
                          pCVar52 = Cube::Cube_Clone_1(pCVar52,(MethodInfo *)0x0);
                          if (pCVar51 != (CubePickingInfo *)0x0) {
                            (pCVar51->fields).cube = pCVar52;
                            func_?();
                            *(Vector3__Array **)&(pCVar51->fields).iLocalPos = uStack_40;
                            (pCVar51->fields).iLocalPos.z = uStack_27._2_2_;
                            pCVar24 = (this->fields).movingEdgeCube;
                            if ((pCVar24 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar24->fields).iLocalPos,(pCVar24->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar51;
                              func_?();
                              pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_25 != (Vector3__Array *)0x0) {
                                pVVar29 = Cube::Cube_GetFaceAxis
                                                    (&VStack_30,pVStack_25->max_length,
                                                     (MethodInfo *)0x0);
                                axis_00.z._1_1_ = (char)((uint)pVVar29->z >> 8);
                                axis_00._0_9_ = *(unkbyte9 *)pVVar29;
                                axis_00.z._2_2_ = (short)((uint)pVVar29->z >> 0x10);
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-1.0,axis_00,
                                                    (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                    (MethodInfo *)0x0);
                                pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_25 != (Vector3__Array *)0x0) {
                                  pVVar29 = Cube::Cube_GetFaceAxis
                                                      (&VStack_30,pVStack_25->max_length,
                                                       (MethodInfo *)0x0);
                                  axis_02.z._1_1_ = (char)((uint)pVVar29->z >> 8);
                                  axis_02._0_9_ = *(unkbyte9 *)pVVar29;
                                  axis_02.z._2_2_ = (short)((uint)pVVar29->z >> 0x10);
                                  Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_25,-0.75,axis_02,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                      (MethodInfo *)0x0);
                                  pCVar24 = (this->fields).movingEdgeCube;
                                  if ((pCVar24 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar24->fields).iLocalPos,(pCVar24->fields).cube,
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
                }
              }
            }
            else if (pVStack_25 == (Vector3__Array *)0x5) {
              pCVar24 = (this->fields).movingEdgeCube;
              if (pCVar24 != (CubePickingInfo *)0x0) {
                pVStack_25 = *(Vector3__Array **)&(pCVar24->fields).iLocalPos;
                uStack_27._2_2_ = (pCVar24->fields).iLocalPos.z;
                pVStack_26 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_01.z = (int16_t)pVStack_25;
                localPos_01._0_4_ = &stack0xffffff6c;
                IVar28 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_01,CONCAT22(uVar43,uStack_27._2_2_),
                                    (MethodInfo *)pVStack_26);
                puVar53 = IVar28._0_4_;
                uStack_40 = *(Vector3__Array **)puVar53;
                uStack_27 = (IndentArea *)
                            CONCAT22(*(undefined2 *)((int)puVar53 + 4),(undefined2)uStack_27);
                requestedCubePos.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar53 + 4) >> 8);
                requestedCubePos._0_5_ = *puVar53;
                pVStack_26 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,requestedCubePos,(this->fields).movingEdgeCube,
                                        (MethodInfo *)0x0);
                if (pVStack_26 != (Vector3__Array *)0x0) {
code_?:
                  VStack_30.z = (float)pVStack_26;
                  VStack_30.y = -NAN;
                  VStack_30.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_30,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                  uVar41 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
                  goto code_?;
                }
                pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar21 != (MVCubeModelBase *)0x0) {
                  pos_02.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
                  pos_02._0_4_ = uStack_40;
                  pos_02.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
                  pVStack_25 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar21,pos_02,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar19 == 0) goto code_?;
                  pCVar24 = (this->fields).movingEdgeCube;
                  if (pCVar24 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar24->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_26 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar24 = (this->fields).movingEdgeCube;
                    if (pCVar24 != (CubePickingInfo *)0x0) {
                      pVStack_25 = (Vector3__Array *)(pCVar24->fields).cube;
                      FVar46 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar47 = Cube::Cube_GetCorners((Cube *)pVStack_25,FVar46,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar48 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar47,(MethodInfo *)0x0);
                      uVar49 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar49);
                      pBVar50 = Cube::Cube_CreateMaterialArray(uVar49,(MethodInfo *)0x0);
                      pVStack_25 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_25,pBVar48,pBVar50,(MethodInfo *)0x0);
                      if (pVStack_26 != (Vector3__Array *)0x0) {
                        pos_11.z = uStack_27._2_2_;
                        pos_11._0_4_ = uStack_40;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_26,pos_11,(CubeBase *)pVStack_25,
                                   (MethodInfo *)0x0);
                        pCVar24 = (this->fields).movingEdgeCube;
                        pCVar51 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar51,pCVar24,(MethodInfo *)0x0);
                        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar21 != (MVCubeModelBase *)0x0) {
                          pos_05.z = uStack_27._2_2_;
                          pos_05._0_4_ = uStack_40;
                          pCVar52 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar21,pos_05,(MethodInfo *)0x0);
                          pCVar52 = Cube::Cube_Clone_1(pCVar52,(MethodInfo *)0x0);
                          if (pCVar51 != (CubePickingInfo *)0x0) {
                            (pCVar51->fields).cube = pCVar52;
                            func_?();
                            *(Vector3__Array **)&(pCVar51->fields).iLocalPos = uStack_40;
                            (pCVar51->fields).iLocalPos.z = uStack_27._2_2_;
                            pCVar24 = (this->fields).movingEdgeCube;
                            if ((pCVar24 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar24->fields).iLocalPos,(pCVar24->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar51;
                              func_?();
                              pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_25 != (Vector3__Array *)0x0) {
                                pVVar29 = Cube::Cube_GetFaceAxis
                                                    (&VStack_30,pVStack_25->max_length,
                                                     (MethodInfo *)0x0);
                                axis.z._1_1_ = (char)((uint)pVVar29->z >> 8);
                                axis._0_9_ = *(unkbyte9 *)pVVar29;
                                axis.z._2_2_ = (short)((uint)pVVar29->z >> 0x10);
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-1.0,axis,
                                                    &CStack_16,(MethodInfo *)0x0);
                                pVStack_26 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_26 != (Vector3__Array *)0x0) {
                                  pVStack_25 = (Vector3__Array *)
                                               Cube::Cube_GetFaceAxis
                                                         (&VStack_30,pVStack_26->max_length,
                                                          (MethodInfo *)0x0);
                                  pCVar24 = (this->fields).movingEdgeCube;
                                  if (pCVar24 != (CubePickingInfo *)0x0) {
                                    pvVar54 = (void *)(((MVCubeModelBase__Fields *)
                                                       &pVStack_25->bounds)->_)._.id;
                                    axis_01.z._1_1_ = (char)((uint)pvVar54 >> 8);
                                    axis_01._0_9_ = *(unkbyte9 *)pVStack_25;
                                    axis_01.z._2_2_ = (short)((uint)pvVar54 >> 0x10);
                                    Cube::Cube_MoveVertex
                                              ((CubePickingInfo *)pVStack_26,-0.75,axis_01,
                                               (pCVar24->fields).pickedEdgeIndex0,
                                               (pCVar24->fields).pickedEdgeIndex1,&CStack_16,
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
              }
            }
            else if (pVStack_25 == (Vector3__Array *)0x2) {
              CVar55 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                 (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar24 = (this->fields).movingEdgeCube;
              if (CVar55 == CanPerformCubeActionResult__Enum_Yes) {
                if (pCVar24 != (CubePickingInfo *)0x0) {
                  pVStack_25 = *(Vector3__Array **)&(pCVar24->fields).iLocalPos;
                  iStack_56 = (int16_t)((uint)pVStack_25 >> 0x10);
                  iVar15 = (pCVar24->fields).iLocalPos.z;
                  pCVar24 = (this->fields).movingEdgeCube;
                  if (pCVar24 != (CubePickingInfo *)0x0) {
                    pVStack_26 = (Vector3__Array *)(pCVar24->fields).pickedFace;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    sVar57 = 0;
                    sVar58 = 0;
                    sVar59 = 0;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              ((IntVector *)&stack0xffffff6c,(int32_t)pVStack_25,
                               CONCAT22(iVar15,iStack_56),CONCAT22(uStack_4,iVar15),
                               (MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pVVar29 = Cube::Cube_GetFaceAxis
                                        (&VStack_30,(Face__Enum)pVStack_26,(MethodInfo *)0x0);
                    pCVar24 = (this->fields).movingEdgeCube;
                    uVar60 = pVVar29->x;
                    uVar61 = pVVar29->y;
                    sVar57 = sVar57 - (short)(int)(float)uVar60;
                    sVar58 = sVar58 - (short)(int)(float)uVar61;
                    uStack_27 = (IndentArea *)
                                CONCAT22(sVar59 - (short)(int)pVVar29->z,(undefined2)uStack_27);
                    if (pCVar24 != (CubePickingInfo *)0x0) {
                      pos_04.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
                      pos_04._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                (e,pos_04,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                      pCVar24 = (this->fields).movingEdgeCube;
                      if ((pCVar24 != (CubePickingInfo *)0x0) &&
                         ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) {
                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                   (pCVar24->fields).iLocalPos,(MethodInfo *)0x0);
                        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar21 != (MVCubeModelBase *)0x0) {
                          pos_13.y = sVar58;
                          pos_13.x = sVar57;
                          pos_13.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
                          pos_13.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
                          pVVar47 = (Vector3__Array *)
                                    MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar21,pos_13,(MethodInfo *)0x0);
                          pVStack_26 = pVVar47;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Inequality
                                             ((CubeBase *)pVVar47,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar19 == 0) {
                            (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                            func_?();
                          }
                          else {
                            pCVar24 = (this->fields).movingEdgeCube;
                            pVVar47 = (Vector3__Array *)func_?();
                            pVStack_25 = pVVar47;
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      ((CubePickingInfo *)pVVar47,pCVar24,(MethodInfo *)0x0);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pCVar52 = Cube::Cube_Clone_1((Cube *)pVStack_26,(MethodInfo *)0x0);
                            if (pVVar47 == (Vector3__Array *)0x0) goto code_?;
                            (((MVCubeModelBase__Fields *)&pVVar47->bounds)->_)._.id =
                                 (int32_t)pCVar52;
                            func_?();
                            pVVar47->vector[2].z = (float)CONCAT22(sVar58,sVar57);
                            *(int16_t *)&pVVar47->vector[3].x = uStack_27._2_2_;
                            (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar47;
                            func_?();
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
              else if (((pCVar24 != (CubePickingInfo *)0x0) &&
                       ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar24->fields).iLocalPos,
                           pGVar23,showUnlockNotification,pMVar42);
                pCVar24 = (this->fields).movingEdgeCube;
                pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0)) {
                  pCVar52 = (this->fields).prevCubeState;
                  goto code_?;
                }
              }
            }
            else {
              if (pVStack_25 != (Vector3__Array *)0x0) break;
              pVStack_26 = (Vector3__Array *)
                           CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                     (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar24 = (this->fields).movingEdgeCube;
              if ((pCVar24 != (CubePickingInfo *)0x0) &&
                 (pCVar52 = (pCVar24->fields).cube, pCVar52 != (Cube *)0x0)) {
                pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                       ((CubeBase *)pCVar52,(MethodInfo *)0x0);
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar19 = Cube::Cube_IsCollapsed(pVStack_25,(MethodInfo *)0x0);
                if ((bVar19 == 0) || (pVStack_26 != (Vector3__Array *)0x1)) {
                  pCVar24 = (this->fields).movingEdgeCube;
                  if (pVStack_26 == (Vector3__Array *)0x2) goto code_?;
                  if (pCVar24 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar24->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                               (MethodInfo *)0x0);
                    pCVar24 = (this->fields).movingEdgeCube;
                    pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0))
                    {
                      iVector.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
                      iVector._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                (pMVar21,iVector,(pCVar24->fields).cube,(MethodInfo *)0x0);
                      break;
                    }
                  }
                }
                else {
                  pCVar24 = (this->fields).movingEdgeCube;
                  if (((pCVar24 != (CubePickingInfo *)0x0) &&
                      (pMVar21 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar21 != (MVCubeModelBase *)0x0)) &&
                     ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                    pMVar42 = (MethodInfo *)0x0;
                    showUnlockNotification = 0;
                    pGVar23 = (pMVar21->fields)._.gameObject;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        else {
          uVar49 = (this->fields).prevMaterial;
          pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar49);
          (this->fields).currentInternalState = 2;
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (e,uVar49,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          pCVar24 = (this->fields).movingEdgeCube;
          if ((this->fields).edgeHasMoved == 0) {
            uVar1 = 0x1045;
            UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_set_onValueChanged
                      ((ScrollRect *)e,(ScrollRect_ScrollRectEvent *)pCVar24,(MethodInfo *)0x0);
            pCVar24 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar24 != (CubePickingInfo *)0x0) {
              pos_10.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
              pos_10._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              uStack_6 = 2;
              EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                 (e,(MethodInfo *)0x0);
              pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar21 != (MVCubeModelBase *)0x0) {
                iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar21,(MethodInfo *)0x0);
                CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar18,(MethodInfo *)0x0);
                if (EVar18 != EditCubeChange__Enum_None) {
code_?:
                  uStack_6 = 0xffffffff;
                  goto code_?;
                }
                pCVar24 = (e->fields)._SelectedCube_k__BackingField;
                if (pCVar24 != (CubePickingInfo *)0x0) {
                  pVStack_25._0_2_ = (pCVar24->fields).iLocalPos.x;
                  pVStack_25._2_2_ = (pCVar24->fields).iLocalPos.y;
                  uStack_40 = (Vector3__Array *)
                              CONCAT22((pCVar24->fields).iLocalPos.z,(undefined2)uStack_40);
                  pVStack_26 = (Vector3__Array *)
                               (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  localPos_03.z._0_1_ = (char)pVStack_25;
                  localPos_03._0_4_ = &stack0xffffff6c;
                  localPos_03.z._1_1_ = (char)((uint)pVStack_25 >> 8);
                  IVar28 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_03,CONCAT22(uVar1,uStack_40._2_2_),
                                      (MethodInfo *)pVStack_26);
                  pVStack_25 = IVar28._0_4_;
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar20 = (this->fields).modelCursor;
                  if ((pMVar21 != (MVCubeModelBase *)0x0) && (pMVar20 != (ModelCursor3D *)0x0)) {
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar20,*(IntVector *)pVStack_25,
                               (pMVar21->fields)._.gameObject,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
            pVStack_26 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                   (e,pCVar24,(MethodInfo *)0x0);
            pCVar24 = (this->fields).movingEdgeCube;
            if (pVStack_26 == (Vector3__Array *)0x2) {
              if (((pCVar24 != (CubePickingInfo *)0x0) &&
                  (pMVar21 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar21 != (MVCubeModelBase *)0x0)) &&
                 ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar24->fields).iLocalPos,
                           (pMVar21->fields)._.gameObject,1,(MethodInfo *)0x0);
code_?:
                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                func_?();
                (this->fields).edgeHasMoved = 0;
                break;
              }
            }
            else if ((pCVar24 != (CubePickingInfo *)0x0) &&
                    (pCVar52 = (pCVar24->fields).cube, pCVar52 != (Cube *)0x0)) {
              uVar1 = 0;
              uVar41 = 0;
              pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                     ((CubeBase *)pCVar52,(MethodInfo *)0x0);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                in_stack_12 = 0x1045;
                func_?();
              }
              bVar19 = Cube::Cube_IsCollapsed(pVStack_25,(MethodInfo *)0x0);
              pCVar24 = (this->fields).movingEdgeCube;
              if (bVar19 == 0) {
                if (pCVar24 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar24->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                             (MethodInfo *)0x0);
                  pCVar24 = (this->fields).movingEdgeCube;
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0)) {
                    pCVar52 = (pCVar24->fields).cube;
                    uVar62 = SUB41(pCVar52,0);
                    uVar63 = (undefined1)((uint)pCVar52 >> 8);
                    in_stack_12 = (undefined2)((uint)pCVar52 >> 0x10);
code_?:
                    iVector_02.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
                    iVector_02._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                              (pMVar21,iVector_02,(Cube *)CONCAT22(uVar41,uVar1),
                               (MethodInfo *)CONCAT22(in_stack_12,CONCAT11(uVar63,uVar62)));
                    goto code_?;
                  }
                }
              }
              else if (pVStack_26 == (Vector3__Array *)0x0) {
                if (pCVar24 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar24->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                             (MethodInfo *)0x0);
                  pCVar24 = (this->fields).movingEdgeCube;
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0)) {
                    pos_15.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
                    pos_15._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar21,pos_15,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else if (((pCVar24 != (CubePickingInfo *)0x0) &&
                       (pMVar21 = (e->fields)._TargetCubeModel_k__BackingField,
                       pMVar21 != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar24->fields).iLocalPos,
                           (pMVar21->fields)._.gameObject,0,(MethodInfo *)0x0);
                pCVar24 = (this->fields).movingEdgeCube;
                if (pCVar24 != (CubePickingInfo *)0x0) {
                  pIVar45 = &(pCVar24->fields).iLocalPos;
                  uVar1 = pIVar45->x;
                  uVar41 = pIVar45->y;
                  iVar15 = (pCVar24->fields).iLocalPos.z;
                  uVar62 = (undefined1)iVar15;
                  uVar63 = (undefined1)((ushort)iVar15 >> 8);
                  pos_14.z._1_1_ = uVar63;
                  pos_14._0_5_ = *(undefined5 *)pIVar45;
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,pos_14,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                  pCVar24 = (this->fields).movingEdgeCube;
                  pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar24 != (CubePickingInfo *)0x0) && (pMVar21 != (MVCubeModelBase *)0x0))
                  goto code_?;
                }
              }
            }
          }
        }
        goto code_?;
      }
      (this->fields).currentInternalState = 1;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
      (this->fields).edgeHasMoved = 0;
      break;
    case 1:
      if ((this->fields).currentInternalState == 1) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          (this->fields).currentInternalState = 2;
        }
      }
      break;
    case 2:
      if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar19 != 0) &&
           (bVar19 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar19 != 0)) {
          (this->fields).currentInternalState = 3;
          break;
        }
      }
      else {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          uStack_6 = 0;
          EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar21 != (MVCubeModelBase *)0x0) {
            iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar21,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar18,(MethodInfo *)0x0);
            if (EVar18 != EditCubeChange__Enum_None) {
              bVar38 = true;
              uStack_6 = 0xffffffff;
              break;
            }
            pCVar24 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar24 != (CubePickingInfo *)0x0) {
              pVStack_25._0_2_ = (pCVar24->fields).iLocalPos.x;
              pVStack_25._2_2_ = (pCVar24->fields).iLocalPos.y;
              uStack_40 = (Vector3__Array *)
                          CONCAT22((pCVar24->fields).iLocalPos.z,(undefined2)uStack_40);
              pVStack_26 = (Vector3__Array *)
                           (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              localPos_00.z = (int16_t)pVStack_25;
              localPos_00._0_4_ = &stack0xffffff6c;
              IVar28 = Cube::Cube_GetCubePosAboveFace
                                 (localPos_00,CONCAT22(in_stack_64,uStack_40._2_2_),
                                  (MethodInfo *)pVStack_26);
              pVStack_25 = IVar28._0_4_;
              pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
              pMVar20 = (this->fields).modelCursor;
              if ((pMVar21 != (MVCubeModelBase *)0x0) && (pMVar20 != (ModelCursor3D *)0x0)) {
                iPos_00.z._1_1_ = (char)((ushort)*(undefined2 *)&pVStack_25->monitor >> 8);
                iPos_00._0_5_ = *(undefined5 *)pVStack_25;
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)pMVar20,iPos_00,(pMVar21->fields)._.gameObject,0,
                           (MethodInfo *)0x0);
                uStack_6 = 0xffffffff;
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
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar19 != 0) &&
         (pVStack_25 = (Vector3__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0),
         _UNK_? < (float)pVStack_25 - (this->fields).prevMouseUpTime)) {
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
          fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                             (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          pVStack_25 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
          pVStack_26 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          if (((float)pVStack_25 != 0.0) || ((float)((uint)pVStack_26 & _UNK_?) != 0.0)) {
            pCVar24 = (this->fields).prevSelectedCube;
            if (pCVar24 != (CubePickingInfo *)0x0) {
              pVStack_26 = (Vector3__Array *)(pCVar24->fields).cube;
              pVStack_25 = (Vector3__Array *)(((this->fields).prevSelectedCube)->fields).pickedFace;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar49 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pVStack_26,(Face__Enum)pVStack_25,(MethodInfo *)0x0);
              pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar49);
              pMVar65 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar65 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar65->fields)._MaterialRepository_k__BackingField,
                 this_00 != (MVMaterialRepository *)0x0)) {
                bVar19 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                   (this_00,(uint8_t)pVStack_26,(MethodInfo *)0x0);
                if (bVar19 == 0) {
                  pCVar24 = (this->fields).prevSelectedCube;
code_?:
                  if (((pCVar24 == (CubePickingInfo *)0x0) ||
                      (pMVar21 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar21 == (MVCubeModelBase *)0x0)) ||
                     ((this->fields).modelCursor == (ModelCursor3D *)0x0)) goto code_?;
                  iPos_01.z._1_1_ = (char)((ushort)(pCVar24->fields).iLocalPos.z >> 8);
                  iPos_01._0_5_ = *(undefined5 *)&(pCVar24->fields).iLocalPos;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                             (pMVar21->fields)._.gameObject,1,(MethodInfo *)0x0);
                }
                else {
                  uVar49 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                     (e,(MethodInfo *)0x0);
                  (this->fields).prevMaterial = uVar49;
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (e,(uint8_t)pVStack_26,(MethodInfo *)0x0);
                  (this->fields).movingEdgeCube = (this->fields).prevSelectedCube;
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
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
        bVar19 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                           ((pMVar21->fields)._.gameObject,(IntVector *)&puStack_14,
                            (MethodInfo *)0x0);
        if ((bVar19 != 0) &&
           (requestedCubePos_01.z = iVar15, requestedCubePos_01._0_4_ = puStack_14,
           CVar55 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                              (e,requestedCubePos_01,(MethodInfo *)0x0),
           CVar55 == CanPerformCubeActionResult__Enum_Yes)) {
          pos_09.z = iVar15;
          pos_09._0_4_ = puStack_14;
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          puVar66 = puStack_14;
          pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
          uStack_40 = (Vector3__Array *)CONCAT22(iVar15,(undefined2)uStack_40);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                 ((MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_26 = (Vector3__Array *)
                       MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                       CubeDataPacker_CornersToByteArray(pVStack_25,(MethodInfo *)0x0);
          uVar49 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                             (e,(MethodInfo *)0x0);
          pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar49);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pBVar48 = Cube::Cube_CreateMaterialArray((uint8_t)pVStack_25,(MethodInfo *)0x0);
          pVStack_25 = (Vector3__Array *)func_?();
          Cube::Cube__ctor((Cube *)pVStack_25,(Byte__Array *)pVStack_26,pBVar48,(MethodInfo *)0x0);
          if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
          pos_01.z._0_1_ = (char)((uint)uStack_40 >> 0x10);
          pos_01._0_4_ = puVar66;
          pos_01.z._1_1_ = (char)((uint)uStack_40 >> 0x18);
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (pMVar21,pos_01,(CubeBase *)pVStack_25,(MethodInfo *)0x0);
        }
      }
      else {
        (this->fields).currentInternalState = 2;
      }
    }
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      pCVar52 = (Cube *)0x0;
    }
    else {
      pCVar52 = (((this->fields).movingEdgeCube)->fields).cube;
      if (pCVar52 == (Cube *)0x0) goto code_?;
      pCVar52 = Cube::Cube_Clone(pCVar52,(MethodInfo *)0x0);
    }
    (this->fields).prevCubeState = pCVar52;
    func_?();
    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
    func_?();
    if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
    pVVar47 = (Vector3__Array *)(this->fields).movingEdgeCube;
    pMVar20 = (this->fields).modelCursor;
    pVStack_25 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
    pMVar21 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar21 == (MVCubeModelBase *)0x0) goto code_?;
    pVVar67 = (Vector3__Array *)(pMVar21->fields)._.gameObject;
    pVVar68 = (Vector3__Array *)(this->fields).currentInternalState;
    pVStack_26 = pVVar67;
    if (pVVar47 == (Vector3__Array *)0x0) {
      pFVar69 = (pMVar20->fields)._.faceCursor;
      if (pVStack_25 == (Vector3__Array *)0x0) {
        if ((pFVar69 != (FaceCursor *)0x0) &&
           (pGVar23 = (pFVar69->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar23,0,(MethodInfo *)0x0);
          pIVar22 = (pMVar20->fields).indentArea;
          if ((pIVar22 != (IndentArea *)0x0) &&
             (pGVar23 = (pIVar22->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar23,0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        if ((pFVar69 == (FaceCursor *)0x0) ||
           (pGVar23 = (pFVar69->fields).gameObject, pGVar23 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar23,1,(MethodInfo *)0x0);
        pFVar69 = (pMVar20->fields)._.faceCursor;
        pVVar67 = pVStack_25;
joined_?:
        if (pFVar69 != (FaceCursor *)0x0) {
          FaceCursor::FaceCursor_UpdateCursor
                    (pFVar69,(CubePickingInfo *)pVVar67,(GameObject *)pVStack_26,(MethodInfo *)0x0);
code_?:
          this_01 = (pMVar20->fields)._.errorCursor;
          if (this_01 != (CellCursor *)0x0) {
            CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
            pVVar67 = pVStack_25;
            if (pVVar68 == (Vector3__Array *)0x3) {
              fVar70 = 0.0;
              fVar3 = 0.0;
              fVar39 = 0.0;
              bVar19 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffff3c,(MethodInfo *)0x0);
              if (bVar19 == 0) {
code_?:
                *unaff_FS_OFFSET = uStack_8;
                return;
              }
              pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar71 != (GameEventManager *)0x0) &&
                  (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
                  pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                 (pGVar73 = (pGVar72->fields).LaserCommands,
                 pGVar73 !=
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                          (pGVar73,0.2,(MethodInfo *)0x0);
                pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar71 != (GameEventManager *)0x0) &&
                    (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
                    pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar73 = (pGVar72->fields).LaserCommands,
                   pGVar73 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  to_00.y = fVar39;
                  to_00.x = fVar3;
                  to_00.z = fVar70;
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar73,to_00,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
            }
            else if (pVVar47 == (Vector3__Array *)0x0) {
              if (bVar38) {
                pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
code_?:
                if (((pGVar71 != (GameEventManager *)0x0) &&
                    (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
                    pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar73 = (pGVar72->fields).LaserCommands,
                   pGVar73 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                            (pGVar73,0.2,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
              else {
                if (pVStack_25 == (Vector3__Array *)0x0) goto code_?;
                pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar71 != (GameEventManager *)0x0) &&
                    (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
                    pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar73 = (pGVar72->fields).LaserCommands,
                   pGVar73 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar73,*(Vector3 *)&pVVar67->vector[1].z,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              FVar46 = pVVar47->max_length;
              pCVar52 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar47->bounds)->_)._.id;
              fVar3 = pVVar47->vector[2].z;
              iVar15 = SUB42(fVar3,0);
              uVar1 = (undefined2)((uint)fVar3 >> 0x10);
              uStack_40 = (Vector3__Array *)
                          CONCAT22(*(int16_t *)&pVVar47->vector[3].x,(undefined2)uStack_40);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar67 = pVStack_26;
              iVector_01.y = uVar1;
              iVector_01.x = iVar15;
              iVector_01.z = uStack_40._2_2_;
              pVVar68 = Cube::Cube_GetFaceVerticesWorld
                                  ((GameObject *)pVStack_26,pCVar52,FVar46,iVector_01,
                                   (MethodInfo *)0x0);
              if (pVVar68 != (Vector3__Array *)0x0) {
                if ((pVVar68->max_length != 0) && (1 < pVVar68->max_length)) {
                  VStack_30.x = pVVar68->vector[1].x;
                  VStack_30.y = pVVar68->vector[1].y;
                  VStack_30.z = pVVar68->vector[1].z;
                  uVar74 = pVVar68->vector[0].x;
                  uVar75 = pVVar68->vector[0].y;
                  fVar3 = VStack_30.x + (float)uVar74;
                  fVar39 = VStack_30.y + (float)uVar75;
                  fVar70 = VStack_30.z + pVVar68->vector[0].z;
                  if (2 < pVVar68->max_length) {
                    VStack_30.x = pVVar68->vector[2].x;
                    VStack_30.y = pVVar68->vector[2].y;
                    VStack_30.z = pVVar68->vector[2].z;
                    fVar3 = VStack_30.x + fVar3;
                    fVar39 = VStack_30.y + fVar39;
                    if (3 < pVVar68->max_length) {
                      VStack_30.x = pVVar68->vector[3].x;
                      VStack_30.y = pVVar68->vector[3].y;
                      fVar3 = (VStack_30.x + fVar3) * _UNK_?;
                      pVVar76 = (Vector3__Array *)((VStack_30.y + fVar39) * _UNK_?);
                      pVVar68 = (Vector3__Array *)
                                ((pVVar68->vector[3].z + VStack_30.z + fVar70) * _UNK_?);
                      VStack_30.z = (float)pVVar68;
                      pVStack_26 = pVVar76;
                      pVStack_25 = pVVar68;
                      if (pVVar47->vector[0].x == 0.0) {
                        fStack_77 = fVar3;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar79 = (pVVar78->upVector).x;
                        uVar80 = (pVVar78->upVector).y;
                        VStack_30.z = (pVVar78->upVector).z + (float)pVStack_25;
                        VStack_30.y = (float)uVar80 + (float)pVStack_26;
                        VStack_30.x = (float)uVar79 + fVar3;
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        start_00.y._0_1_ = (char)pVVar76;
                        start_00.x = fStack_77;
                        start_00.y._1_1_ = (char)((uint)pVVar76 >> 8);
                        start_00.y._2_2_ = (short)((uint)pVVar76 >> 0x10);
                        start_00.z = (float)pVVar68;
                        end_00.z = VStack_30.z;
                        end_00.x = VStack_30.x;
                        end_00.y = VStack_30.y;
                        color_00.g = (float)_UNK_?;
                        color_00.r = (float)_UNK_?;
                        color_00.b = (float)_UNK_?;
                        color_00.a._0_1_ = (char)_UNK_?;
                        color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                        color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                  (start_00,end_00,color_00,(MethodInfo *)0x0);
code_?:
                        pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar71 != (GameEventManager *)0x0) &&
                            (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
                            pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar73 = (pGVar72->fields).LaserCommands,
                           pGVar73 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          to.y._0_2_ = (short)pVVar76;
                          to.x = fStack_77;
                          to.y._2_2_ = (short)((uint)pVVar76 >> 0x10);
                          to.z._0_1_ = (char)pVVar68;
                          to.z._1_1_ = (char)((uint)pVVar68 >> 8);
                          to.z._2_2_ = (short)((uint)pVVar68 >> 0x10);
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar73,to,(MethodInfo *)0x0);
                          pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                      else {
                        pCVar52 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar47->bounds)->_)._.id;
                        fStack_81 = (float)pVVar47->max_length;
                        fVar39 = pVVar47->vector[0].x;
                        fVar70 = pVVar47->vector[2].z;
                        iVar15 = SUB42(fVar70,0);
                        uVar1 = (undefined2)((uint)fVar70 >> 0x10);
                        uStack_40 = (Vector3__Array *)
                                    CONCAT22(*(int16_t *)&pVVar47->vector[3].x,(undefined2)uStack_40
                                            );
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        iVector_00.y = uVar1;
                        iVector_00.x = iVar15;
                        iVector_00.z = uStack_40._2_2_;
                        pVVar67 = Cube::Cube_GetEdgeVerticesWorld
                                            ((GameObject *)pVVar67,pCVar52,(Face__Enum)fStack_81,
                                             (Edge__Enum)fVar39,iVector_00,(MethodInfo *)0x0);
                        if (*(bool *)&pVVar47->vector[0].y == 0) {
                          if (pVVar67 != (Vector3__Array *)0x0) {
                            if (*(bool *)((int)&pVVar47->vector[0].y + 1) == 0) {
                              if ((pVVar67->max_length != 0) && (1 < pVVar67->max_length)) {
                                VStack_30.x = pVVar67->vector[1].x;
                                VStack_30.y = pVVar67->vector[1].y;
                                uVar82 = pVVar67->vector[0].x;
                                uVar83 = pVVar67->vector[0].y;
                                fVar84 = (pVVar67->vector[1].z + pVVar67->vector[0].z) *
                                         _UNK_?;
                                fStack_77 = (VStack_30.x + (float)uVar82) * _UNK_?;
                                fVar85 = (VStack_30.y + (float)uVar83) * _UNK_?;
code_?:
                                pVVar68 = (Vector3__Array *)
                                          (((float)pVStack_25 - fVar84) * _UNK_? + fVar84);
                                fStack_77 = (fVar3 - fStack_77) * _UNK_? + fStack_77;
                                pVVar76 = (Vector3__Array *)
                                          (((float)pVStack_26 - fVar85) * _UNK_? + fVar85);
                                VStack_30.z = (float)pVVar68;
                                goto code_?;
                              }
                            }
                            else if (1 < pVVar67->max_length) {
                              uVar86 = pVVar67->vector[1].x;
                              fVar85 = pVVar67->vector[1].y;
                              fVar84 = pVVar67->vector[1].z;
                              fStack_77 = (float)uVar86;
                              goto code_?;
                            }
                            goto code_?;
                          }
                        }
                        else if (pVVar67 != (Vector3__Array *)0x0) {
                          if (pVVar67->max_length != 0) {
                            uVar87 = pVVar67->vector[0].x;
                            uVar88 = pVVar67->vector[0].y;
                            fVar84 = pVVar67->vector[0].z;
                            iStack_89 = (int16_t)uVar88;
                            iStack_56 = (int16_t)((uint)uVar88 >> 0x10);
                            fVar39 = pVVar67->vector[0].x;
                            fVar70 = pVVar67->vector[0].y;
                            fVar85 = (float)uVar87;
                            fVar90 = fVar84;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar91 = (pVVar78->upVector).x;
                            uVar92 = (pVVar78->upVector).y;
                            VStack_30.z = (pVVar78->upVector).z + fVar90;
                            VStack_30.y = (float)uVar92 + fVar70;
                            VStack_30.x = (float)uVar91 + fVar39;
                            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            start.y._0_2_ = iStack_89;
                            start.x = fVar85;
                            start.y._2_2_ = iStack_56;
                            start.z = fVar84;
                            end.z = VStack_30.z;
                            end.x = VStack_30.x;
                            end.y = VStack_30.y;
                            color.g = (float)_UNK_?;
                            color.r = (float)_UNK_?;
                            color.b = (float)_UNK_?;
                            color.a._0_1_ = (char)_UNK_?;
                            color.a._1_1_ = (char)((uint)_UNK_? >> 8);
                            color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                      (start,end,color,(MethodInfo *)0x0);
                            fStack_77 = (float)uVar87;
                            fVar85 = (float)uVar88;
                            goto code_?;
                          }
                          goto code_?;
                        }
                      }
                      goto code_?;
                    }
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    uStack_27 = (pMVar20->fields).indentArea;
    if (uStack_27 == (IndentArea *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      uStack_13 = &MethodInfo__System__Collections__Generic__List<int>__ToArray__;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pCVar52 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar47->bounds)->_)._.id;
    fStack_93 = (float)pVVar47->max_length;
    fVar3 = pVVar47->vector[2].z;
    iVar15 = *(int16_t *)&pVVar47->vector[3].x;
    uStack_40._2_2_ = iVar15;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVector_03.z._0_1_ = (char)uStack_40._2_2_;
    iVector_03._0_4_ = fVar3;
    iVector_03.z._1_1_ = (char)((ushort)uStack_40._2_2_ >> 8);
    uStack_40 = Cube::Cube_GetFaceVerticesWorld
                          ((GameObject *)pVVar67,pCVar52,(Face__Enum)fStack_93,iVector_03,
                           (MethodInfo *)0x0);
    this_04 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar23 = (uStack_27->fields).gameObject;
    if ((((pGVar23 == (GameObject *)0x0) ||
         (this_05 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar23,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_05 == (MeshFilter *)0x0)) ||
        (this_06 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_05,(MethodInfo *)0x0), this_06 == (Mesh *)0x0)) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_06,(MethodInfo *)0x0),
       pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
       this_04 ==
       (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
       0x0)) goto code_?;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (uVar96 < pMVar95->max_length) {
        (&pMVar95->vector[0].index)[uVar96] = 0;
        goto code_?;
      }
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__AddWithResize
              ((List_1_System_Int32_ *)this_04,0,pMVar42->klass->rgctx_data[0xe].method);
code_?:
    pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (pMVar95->max_length <= uVar96) goto code_?;
      (&pMVar95->vector[0].index)[uVar96] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,3,pMVar42->klass->rgctx_data[0xe].method);
    }
    pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (pMVar95->max_length <= uVar96) goto code_?;
      (&pMVar95->vector[0].index)[uVar96] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,2,pMVar42->klass->rgctx_data[0xe].method);
    }
    pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (pMVar95->max_length <= uVar96) goto code_?;
      (&pMVar95->vector[0].index)[uVar96] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,2,pMVar42->klass->rgctx_data[0xe].method);
    }
    pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (pMVar95->max_length <= uVar96) goto code_?;
      (&pMVar95->vector[0].index)[uVar96] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,1,pMVar42->klass->rgctx_data[0xe].method);
    }
    pMVar42 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar94 = &(this_04->fields)._version;
    *piVar94 = *piVar94 + 1;
    pMVar95 = (this_04->fields)._items;
    uVar96 = (this_04->fields)._size;
    if (pMVar95 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar96 < pMVar95->max_length) {
      (this_04->fields)._size = uVar96 + 1;
      if (pMVar95->max_length <= uVar96) goto code_?;
      (&pMVar95->vector[0].index)[uVar96] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_04,0,pMVar42->klass->rgctx_data[0xe].method);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (this_06,uStack_40,(MethodInfo *)0x0);
    value_01 = IndentArea::IndentArea_SetUVs(uStack_27,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(this_06,value_01,(MethodInfo *)0x0);
    pMVar95 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                        (this_04,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              (this_06,(Int32__Array *)pMVar95,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              (this_06,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds(this_06,(MethodInfo *)0x0)
    ;
    if (uStack_40 == (Vector3__Array *)0x0) goto code_?;
    if (2 < uStack_40->max_length) {
      uVar97 = uStack_40->vector[0].x;
      uVar98 = uStack_40->vector[0].y;
      uVar99 = uStack_40->vector[2].x;
      uVar100 = uStack_40->vector[2].y;
      fVar3 = ((float)uVar100 - (float)uVar98) * _UNK_?;
      if (uStack_40->max_length != 0) {
        uVar101 = uStack_40->vector[0].x;
        uVar102 = uStack_40->vector[0].y;
        fStack_93 = (float)uVar101 + ((float)uVar99 - (float)uVar97) * _UNK_?;
        fStack_81 = uStack_40->vector[0].z +
                    (uStack_40->vector[2].z - uStack_40->vector[0].z) * _UNK_?;
        pGVar23 = (uStack_27->fields).gameObject;
        if (pGVar23 != (GameObject *)0x0) {
          pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar23,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar103 = (pVVar78->oneVector).x;
          uVar104 = (pVVar78->oneVector).y;
          fVar39 = (uStack_27->fields).size;
          fVar70 = (pVVar78->oneVector).z * fVar39;
          if (pTVar33 != (Transform *)0x0) {
            value.y._0_2_ = SUB42((float)uVar104 * fVar39,0);
            value.x = (float)uVar103 * fVar39;
            value.y._2_2_ = (short)((uint)((float)uVar104 * fVar39) >> 0x10);
            value.z._0_1_ = SUB41(fVar70,0);
            value.z._1_1_ = (char)((uint)fVar70 >> 8);
            value.z._2_2_ = (short)((uint)fVar70 >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar33,value,(MethodInfo *)0x0);
            pGVar23 = (uStack_27->fields).gameObject;
            if (pGVar23 != (GameObject *)0x0) {
              pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar23,(MethodInfo *)0x0);
              pVVar67 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                  (this_06,(MethodInfo *)0x0);
              if (pVVar67 != (Vector3__Array *)0x0) {
                if (pVVar67->max_length == 0) goto code_?;
                if (pTVar33 != (Transform *)0x0) {
                  pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_TransformPoint
                                      (&VStack_30,pTVar33,pVVar67->vector[0],(MethodInfo *)0x0);
                  uVar105 = pVVar29->x;
                  uVar106 = pVVar29->y;
                  fVar39 = pVVar29->z;
                  pGVar23 = (uStack_27->fields).gameObject;
                  if (pGVar23 != (GameObject *)0x0) {
                    pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar23,(MethodInfo *)0x0);
                    pVVar67 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                        (this_06,(MethodInfo *)0x0);
                    if (pVVar67 != (Vector3__Array *)0x0) {
                      if (pVVar67->max_length < 3) goto code_?;
                      if (pTVar33 != (Transform *)0x0) {
                        pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformPoint
                                            (&VStack_30,pTVar33,pVVar67->vector[2],(MethodInfo *)0x0
                                            );
                        uVar107 = pVVar29->x;
                        uVar108 = pVVar29->y;
                        fVar70 = ((float)uVar107 - (float)uVar105) * _UNK_?;
                        fVar84 = (pVVar29->z - fVar39) * _UNK_?;
                        uStack_40 = (Vector3__Array *)
                                    (((float)uVar108 - (float)uVar106) * _UNK_? + (float)uVar106
                                    );
                        pGVar23 = (uStack_27->fields).gameObject;
                        if (pGVar23 != (GameObject *)0x0) {
                          pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar23,(MethodInfo *)0x0);
                          if (pTVar33 != (Transform *)0x0) {
                            pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_position
                                                ((Vector3 *)&stack0xffffff80,pTVar33,
                                                 (MethodInfo *)0x0);
                            VStack_30.x = pVVar29->x;
                            VStack_30.y = pVVar29->y;
                            uVar109 = pVVar47->vector[0].z;
                            uVar110 = pVVar47->vector[1].x;
                            VStack_30.z = pVVar29->z +
                                          (fStack_81 - (fVar84 + fVar39)) +
                                          pVVar47->vector[1].y * _UNK_?;
                            fVar3 = VStack_30.y +
                                     (((float)uVar102 + fVar3) - (float)uStack_40) +
                                     (float)uVar110 * _UNK_?;
                            pMVar20 = (ModelCursor3D *)&UNK_?;
                            value_00.y._0_2_ = SUB42(fVar3,0);
                            value_00.x = VStack_30.x +
                                         (fStack_93 - (fVar70 + (float)uVar105)) +
                                         (float)uVar109 * _UNK_?;
                            value_00.y._2_2_ = (int16_t)((uint)fVar3 >> 0x10);
                            value_00.z._0_2_ = SUB42(VStack_30.z,0);
                            value_00.z._2_2_ = (short)((uint)VStack_30.z >> 0x10);
                            pVVar68 = (Vector3__Array *)VStack_30.z;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar33,value_00,(MethodInfo *)0x0);
                            pFVar69 = (pMVar20->fields)._.faceCursor;
                            if ((pFVar69 != (FaceCursor *)0x0) &&
                               (pGVar23 = (pFVar69->fields).gameObject, pGVar23 != (GameObject *)0x0
                               )) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar23,1,(MethodInfo *)0x0);
                              pFVar69 = (pMVar20->fields)._.faceCursor;
                              pVVar67 = pVVar47;
                              goto joined_?;
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
        goto code_?;
      }
    }
  }
code_?:
  uVar111 = func_?();
  piVar112 = (int *)uVar111;
  uVar1 = (undefined2)((ulonglong)uVar111 >> 0x20);
  uVar41 = (undefined2)((ulonglong)uVar111 >> 0x30);
  puVar113 = (uint *)((int)piVar112 + -0x4220e1c3);
  uVar96 = *puVar113;
  *puVar113 = *puVar113 + (int)piVar112;
  *piVar112 = (int)piVar112 + (uint)CARRY4(uVar96,(uint)piVar112) + *piVar112;
  if (*piVar112 == 0) {
    func_?();
    uRam_? = 1;
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = 0;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if (piStack_114[9] == 0) {
    piStack_114[9] = 2;
    if (unaff_EBX == (CubeModelingStateMachine *)0x0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (unaff_EBX,*(uint8_t *)(piStack_114 + 6),(MethodInfo *)0x0);
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial =
         *(uint8_t *)(piStack_114 + 6);
    if (piStack_114[0xb] != 0) {
      this_02 = *(CubeBase **)(piStack_114[0xb] + 8);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar47 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                          ((MethodInfo *)0x0);
      if (this_02 == (CubeBase *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                (this_02,pVVar47,(MethodInfo *)0x0);
      iVar115 = piStack_114[0xb];
      if ((iVar115 == 0) ||
         (pMVar21 = (unaff_EBX->fields)._TargetCubeModel_k__BackingField,
         pMVar21 == (MVCubeModelBase *)0x0)) goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (pMVar21,*(IntVector *)(iVar115 + 0x30),*(Cube **)(iVar115 + 8),(MethodInfo *)0x0);
    }
    piStack_114[0xb] = 0;
    func_?();
    *(undefined1 *)((int)piStack_114 + 0x19) = 0;
  }
  (**(code **)(*piStack_114 + 0x120))();
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar71 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar71 != (GameEventManager *)0x0) &&
      (pGVar72 = (pGVar71->fields).AvatarCommandsBuildMode,
      pGVar72 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar72->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    iVar115 = *(int *)(CONCAT22(uVar41,uVar1) + 0x10);
    if (iVar115 != 0) {
      (**(code **)(iVar115 + 0xc))();
    }
    return;
  }
code_?:
  func_?();
  pcVar116 = (code *)swi(3);
  (*pcVar116)();
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
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial =
         (this->fields).prevMaterial;
    if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
      this_00 = (((this->fields).movingEdgeCube)->fields).cube;
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      value = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                        ((MethodInfo *)0x0);
      if (this_00 == (Cube *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)this_00,value,(MethodInfo *)0x0);
      pCVar1 = (this->fields).movingEdgeCube;
      if ((pCVar1 == (CubePickingInfo *)0x0) ||
         (this_01 = (e->fields)._TargetCubeModel_k__BackingField, this_01 == (MVCubeModelBase *)0x0)
         ) goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (this_01,(pCVar1->fields).iLocalPos,(pCVar1->fields).cube,(MethodInfo *)0x0);
    }
    unaff_EBP = &(this->fields).movingEdgeCube;
    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
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
    if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) {
      return;
    }
    pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      gameObject = (pMVar1->fields)._.gameObject;
      pCVar2 = (e->fields)._SelectedCube_k__BackingField;
      uStack_3._0_2_ = (pCVar2->fields).iLocalPos.x;
      uStack_3._2_2_ = (pCVar2->fields).iLocalPos.y;
      iVar4 = (pCVar2->fields).iLocalPos.z;
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
          pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar1 != (MVCubeModelBase *)0x0) {
            puVar10 = (undefined8 *)
                     (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                               (&puStack_8,(short)pMVar1,
                                (pMVar1->klass->vtable).set_Scale.methodPtr);
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

