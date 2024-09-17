
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
       (this_00 = (RTFocusCamera *)(pGVar2->fields).LaserCommands, this_00 != (RTFocusCamera *)0x0))
    {
      RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
                (this_00,CameraPrjSwitchTransition_Type__Enum_ToPerspective,(MethodInfo *)0x0);
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
  cubeChange = in_stack_10;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xffffff00;
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
    in_stack_13 = 0x11b1;
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
    cubeChange = in_stack_10;
    puVar11 = puStack_5;
    puVar12 = puStack_9;
  }
  puStack_9 = puVar12;
  puStack_5 = puVar11;
  uStack_14 = (MethodInfo **)((uint)uStack_14 & 0xffffff);
  puStack_15 = (undefined *)0x0;
  iVar16 = 0;
  CStack_17 = CubeOutOfBoundState__Enum_WithinBounds;
  if (cRam_? == '\0') {
    in_stack_13 = 0x1045;
    iVar16 = 0;
    func_?();
    cRam_? = '\x01';
  }
  pCVar18 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar18->cubeChange != 0) &&
     (pCVar18->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    unaff_ESI = (Vector3__Array *)pCVar18->OnEditCubeChange;
    in_stack_13 = (undefined2)((uint)pCVar18->cubeChange >> 0x10);
    (*(code *)unaff_ESI->max_length)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EVar19 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar20;
    goto code_?;
  }
  pMVar21 = (this->fields).modelCursor;
  if (pMVar21 == (ModelCursor3D *)0x0) {
code_?:
    bVar22 = 0;
    func_?();
    func_?();
    func_?();
  }
  else {
    unaff_ESI = (Vector3__Array *)e;
    if ((pMVar21->fields).indentArea != (IndentArea *)0x0 &&
        (this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar24 = (((this->fields).modelCursor)->fields).indentArea;
        if ((pMVar23 != (MVCubeModelBase *)0x0) && (pIVar24 != (IndentArea *)0x0)) {
          pGVar25 = (pMVar23->fields)._.gameObject;
          in_stack_13 = (undefined2)((uint)pGVar25 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar24,(e->fields)._SelectedCube_k__BackingField,pGVar25,(MethodInfo *)0x0);
          pMVar21 = (this->fields).modelCursor;
          if ((pMVar21 != (ModelCursor3D *)0x0) &&
             (pIVar24 = (pMVar21->fields).indentArea, pIVar24 != (IndentArea *)0x0)) {
            bVar20 = IndentArea::IndentArea_IsColliding(pIVar24,(MethodInfo *)0x0);
            if (bVar20 == 0) {
              pMVar21 = (this->fields).modelCursor;
              if (((pMVar21 != (ModelCursor3D *)0x0) &&
                  (pIVar24 = (pMVar21->fields).indentArea, pIVar24 != (IndentArea *)0x0)) &&
                 (pGVar25 = (pIVar24->fields).gameObject, pGVar25 != (GameObject *)0x0)) {
                bVar20 = 0;
code_?:
                cubeChange = (CubePickingInfo **)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar25,bVar20,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar26 = (e->fields)._SelectedCube_k__BackingField;
              if (pCVar26 != (CubePickingInfo *)0x0) {
                (pCVar26->fields).pickedEdge = 0;
                pMVar21 = (this->fields).modelCursor;
                if (((pMVar21 != (ModelCursor3D *)0x0) &&
                    (pIVar24 = (pMVar21->fields).indentArea, pIVar24 != (IndentArea *)0x0)) &&
                   (pGVar25 = (pIVar24->fields).gameObject, pGVar25 != (GameObject *)0x0)) {
                  bVar20 = 1;
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
      in_stack_13 = 0x1045;
      func_?();
    }
    bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      in_stack_13 = 0;
      pVStack_27 = (Vector3__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      (this->fields).prevMouseUpTime = (float)pVStack_27;
    }
    if (cRam_? == '\0') {
      in_stack_13 = 0x1045;
      func_?();
      cRam_? = '\x01';
    }
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
    pVStack_28 = (Vector3__Array *)(pMVar23->fields)._.gameObject;
    pCVar26 = (e->fields)._SelectedCube_k__BackingField;
    pVStack_27 = *(Vector3__Array **)&(pCVar26->fields).iLocalPos;
    uStack_29 = (IndentArea *)CONCAT22((pCVar26->fields).iLocalPos.z,(undefined2)uStack_29);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar30.z = uStack_29._2_2_;
    IVar30._0_4_ = pVStack_27;
    pVVar31 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                        (&VStack_32,(GameObject *)pVStack_28,IVar30,(MethodInfo *)0x0);
    uVar33 = pVVar31->x;
    uVar34 = pVVar31->y;
    fVar3 = pVVar31->z;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_03 == (MainCameraManager *)0x0) ||
       (pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_03,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0))
    goto code_?;
    pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_32,pTVar35,(MethodInfo *)0x0);
    uVar36 = pVVar31->x;
    uVar37 = pVVar31->y;
    VStack_32.z = pVVar31->z - fVar3;
    VStack_32.y = (float)uVar37 - (float)uVar34;
    VStack_32.x = (float)uVar36 - (float)uVar33;
    fVar38 = (float10)func_?();
    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
    pVStack_27 = (Vector3__Array *)(float)fVar38;
    if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
    in_stack_13 = (undefined2)((uint)pMVar23 >> 0x10);
    puVar39 = (undefined8 *)(*(code *)(pMVar23->klass->vtable).get_Scale.method)();
    pMVar21 = (this->fields).modelCursor;
    if ((float)((ulonglong)*puVar39 >> 0x20) * _UNK_? < (float)pVStack_27) {
      (this->fields).mouseSensitivity = 0.1325;
      if ((pMVar21 != (ModelCursor3D *)0x0) &&
         (pIVar24 = (pMVar21->fields).indentArea, pIVar24 != (IndentArea *)0x0)) {
        (pIVar24->fields).size = 1.0;
        goto code_?;
      }
      goto code_?;
    }
    (this->fields).mouseSensitivity = 0.0225;
    if ((pMVar21 == (ModelCursor3D *)0x0) ||
       (pIVar24 = (pMVar21->fields).indentArea, pIVar24 == (IndentArea *)0x0))
    goto code_?;
    (pIVar24->fields).size = 0.5;
code_?:
    uStack_4 = (ushort)((uint)fVar3 >> 0x10);
    bVar40 = false;
    uStack_29 = (IndentArea *)((uint)uStack_29 & 0xffffff);
    switch((this->fields).currentInternalState) {
    case 0:
      if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar20 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_27 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          pVStack_28 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          fVar41 = (float)pVStack_27 * _UNK_?;
          fVar3 = (float)pVStack_28 * _UNK_?;
          uStack_42 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
          pVStack_27 = (Vector3__Array *)(this->fields).mouseSensitivity;
          pCVar26 = (this->fields).movingEdgeCube;
          iVar16 = 0;
          uVar43 = 0;
          if (pCVar26 != (CubePickingInfo *)0x0) {
            bVar20 = (pCVar26->fields).pickedEdgeIndex0;
            pVStack_28._1_3_ = (undefined3)((uint)pVStack_28 >> 8);
            pVStack_28 = (Vector3__Array *)
                         CONCAT31(pVStack_28._1_3_,
                                  (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pMVar44 = (MethodInfo *)((int)&uStack_14 + 3);
            showUnlockNotification = (bool)pVStack_27;
            uVar45 = (undefined2)((uint)pVStack_27 >> 0x10);
            pGVar25 = (GameObject *)&(this->fields).deltaAccum;
            mousePositionDelta.z._2_2_ = uVar43;
            mousePositionDelta.z._0_2_ = iVar16;
            mousePositionDelta.y =
                 (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),
                                       CONCAT24(SUB42(fVar3,0),fVar41)) >> 0x20);
            mousePositionDelta.x = fVar41;
            pVStack_27 = (Vector3__Array *)
                         SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                   ((MVCubeModelBase *)uStack_42,pCVar26,mousePositionDelta,
                                    &(this->fields).delta,(float *)pGVar25,(float)pVStack_27,
                                    (bool *)pMVar44,bVar20,(bool)pVStack_28,
                                    (EditCubeChange__Enum *)&stack0xffffff64,(MethodInfo *)0x0);
            if (pVStack_27 == (Vector3__Array *)0x0) {
              pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
              iVar46 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar23,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar46,EVar19,(MethodInfo *)0x0);
            }
            if ((uStack_14._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
              (this->fields).edgeHasMoved = 1;
            }
            if (pVStack_27 == (Vector3__Array *)0x1) {
              pCVar26 = (this->fields).movingEdgeCube;
              if (pCVar26 != (CubePickingInfo *)0x0) {
                pVStack_27 = *(Vector3__Array **)&(pCVar26->fields).iLocalPos;
                uStack_29._2_2_ = (pCVar26->fields).iLocalPos.z;
                pVStack_28 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos.z = (int16_t)pVStack_27;
                localPos._0_4_ = &stack0xffffff6c;
                IVar30 = Cube::Cube_GetCubePosAboveFace
                                   (localPos,CONCAT22(uVar1,uStack_29._2_2_),
                                    (MethodInfo *)pVStack_28);
                pIVar47 = IVar30._0_4_;
                uStack_42 = *(Vector3__Array **)pIVar47;
                uStack_29 = (IndentArea *)CONCAT22(pIVar47->z,(undefined2)uStack_29);
                pVStack_28 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,*pIVar47,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                if (pVStack_28 == (Vector3__Array *)0x0) {
                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                  if (pMVar23 != (MVCubeModelBase *)0x0) {
                    pos.z = uStack_29._2_2_;
                    pos._0_4_ = uStack_42;
                    pVStack_27 = (Vector3__Array *)
                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                           (pMVar23,pos,(MethodInfo *)0x0);
                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MV__WorldObject__CubeBase);
                    }
                    bVar20 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                       ((CubeBase *)pVStack_27,(CubeBase *)0x0,(MethodInfo *)0x0);
                    if (bVar20 == 0) goto code_?;
                    pos_00.z = uStack_29._2_2_;
                    pos_00._0_4_ = uStack_42;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_00,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                    pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar26 = (this->fields).movingEdgeCube;
                    if (pCVar26 != (CubePickingInfo *)0x0) {
                      pVStack_27 = (Vector3__Array *)(pCVar26->fields).cube;
                      FVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar49 = Cube::Cube_GetCorners((Cube *)pVStack_27,FVar48,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar50 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar49,(MethodInfo *)0x0);
                      uVar51 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar51);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar51,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_27,pBVar50,(Byte__Array *)unaff_ESI,
                                       (MethodInfo *)0x0);
                      if (pVStack_28 != (Vector3__Array *)0x0) {
                        pos_07.z = uStack_29._2_2_;
                        pos_07._0_4_ = uStack_42;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_28,pos_07,(CubeBase *)pVStack_27,
                                   (MethodInfo *)0x0);
                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar23 != (MVCubeModelBase *)0x0) {
                          iVar46 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                             (pMVar23,(MethodInfo *)0x0);
                          CubeModelTool::CubeModelTool_SendCubeEvent
                                    (iVar46,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                          pCVar26 = (this->fields).movingEdgeCube;
                          pCVar52 = (CubePickingInfo *)func_?();
                          CubePickingInfo::CubePickingInfo__ctor_1
                                    (pCVar52,pCVar26,(MethodInfo *)0x0);
                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                          unaff_ESI = (Vector3__Array *)e;
                          if (pMVar23 != (MVCubeModelBase *)0x0) {
                            pos_08.z = uStack_29._2_2_;
                            pos_08._0_4_ = uStack_42;
                            pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                (pMVar23,pos_08,(MethodInfo *)0x0);
                            pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                            if (pCVar52 != (CubePickingInfo *)0x0) {
                              (pCVar52->fields).cube = pCVar53;
                              func_?();
                              *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_42;
                              (pCVar52->fields).iLocalPos.z = uStack_29._2_2_;
                              pCVar26 = (this->fields).movingEdgeCube;
                              if ((pCVar26 != (CubePickingInfo *)0x0) &&
                                 ((e->fields)._TargetCubeModel_k__BackingField !=
                                  (MVCubeModelBase *)0x0)) {
                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                          ((e->fields)._TargetCubeModel_k__BackingField,
                                           (pCVar26->fields).iLocalPos,(pCVar26->fields).cube,
                                           (MethodInfo *)0x0);
                                (this->fields).movingEdgeCube = pCVar52;
                                func_?();
                                pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_27 != (Vector3__Array *)0x0) {
                                  pVVar31 = Cube::Cube_GetFaceAxis
                                                      (&VStack_32,pVStack_27->max_length,
                                                       (MethodInfo *)0x0);
                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_27,-0.75,*pVVar31,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff38,
                                                      (MethodInfo *)0x0);
code_?:
                                  pCVar26 = (this->fields).movingEdgeCube;
                                  unaff_ESI = (Vector3__Array *)e;
                                  if ((pCVar26 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar26->fields).iLocalPos,(pCVar26->fields).cube,
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
                  VStack_32.z = (float)pVStack_28;
                  VStack_32.y = -NAN;
                  VStack_32.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_32,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                  uVar43 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)CONCAT22(uVar43,uVar1),str1,(MethodInfo *)0x0);
                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar21 = (this->fields).modelCursor;
                  if ((pMVar23 != (MVCubeModelBase *)0x0) && (pMVar21 != (ModelCursor3D *)0x0)) {
                    iPos.z = uStack_29._2_2_;
                    iPos._0_4_ = uStack_42;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar21,iPos,(pMVar23->fields)._.gameObject,
                               pVStack_28 == (Vector3__Array *)0x2,(MethodInfo *)0x0);
                    pCVar26 = (this->fields).movingEdgeCube;
                    unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0))
                    {
                      pCVar53 = (pCVar26->fields).cube;
code_?:
                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                ((MVCubeModelBase *)unaff_ESI,(pCVar26->fields).iLocalPos,pCVar53,
                                 (MethodInfo *)0x0);
                      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                      func_?();
                      break;
                    }
                  }
                }
              }
            }
            else if (pVStack_27 == (Vector3__Array *)0x4) {
              pCVar26 = (this->fields).movingEdgeCube;
              if (pCVar26 != (CubePickingInfo *)0x0) {
                pVStack_27 = *(Vector3__Array **)&(pCVar26->fields).iLocalPos;
                uStack_29._2_2_ = (pCVar26->fields).iLocalPos.z;
                pVStack_28 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_02.z = (int16_t)pVStack_27;
                localPos_02._0_4_ = &stack0xffffff6c;
                IVar30 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_02,CONCAT22(uVar45,uStack_29._2_2_),
                                    (MethodInfo *)pVStack_28);
                puVar54 = IVar30._0_4_;
                uStack_42 = *(Vector3__Array **)puVar54;
                uStack_29 = (IndentArea *)
                            CONCAT22(*(undefined2 *)((int)puVar54 + 4),(undefined2)uStack_29);
                requestedCubePos_00.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8)
                ;
                requestedCubePos_00._0_5_ = *puVar54;
                pVStack_28 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,requestedCubePos_00,(this->fields).movingEdgeCube,
                                        (MethodInfo *)0x0);
                if (pVStack_28 != (Vector3__Array *)0x0) {
code_?:
                  VStack_32.z = (float)pVStack_28;
                  VStack_32.y = -NAN;
                  VStack_32.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_32,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                  uVar43 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                  goto code_?;
                }
                pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar23 != (MVCubeModelBase *)0x0) {
                  pos_03.z._0_1_ = (char)((uint)uStack_29 >> 0x10);
                  pos_03._0_4_ = uStack_42;
                  pos_03.z._1_1_ = (char)((uint)uStack_29 >> 0x18);
                  pVStack_27 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar23,pos_03,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar20 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_27,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar20 == 0) goto code_?;
                  pCVar26 = (this->fields).movingEdgeCube;
                  if (pCVar26 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar26->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar26 = (this->fields).movingEdgeCube;
                    if (pCVar26 != (CubePickingInfo *)0x0) {
                      pVStack_27 = (Vector3__Array *)(pCVar26->fields).cube;
                      FVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar49 = Cube::Cube_GetCorners((Cube *)pVStack_27,FVar48,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar50 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar49,(MethodInfo *)0x0);
                      uVar51 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar51);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar51,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_27,pBVar50,(Byte__Array *)unaff_ESI,
                                       (MethodInfo *)0x0);
                      if (pVStack_28 != (Vector3__Array *)0x0) {
                        pos_12.z = uStack_29._2_2_;
                        pos_12._0_4_ = uStack_42;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_28,pos_12,(CubeBase *)pVStack_27,
                                   (MethodInfo *)0x0);
                        pCVar26 = (this->fields).movingEdgeCube;
                        pCVar52 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar52,pCVar26,(MethodInfo *)0x0);
                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                        unaff_ESI = (Vector3__Array *)e;
                        if (pMVar23 != (MVCubeModelBase *)0x0) {
                          pos_06.z = uStack_29._2_2_;
                          pos_06._0_4_ = uStack_42;
                          pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar23,pos_06,(MethodInfo *)0x0);
                          pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                          if (pCVar52 != (CubePickingInfo *)0x0) {
                            (pCVar52->fields).cube = pCVar53;
                            func_?();
                            *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_42;
                            (pCVar52->fields).iLocalPos.z = uStack_29._2_2_;
                            pCVar26 = (this->fields).movingEdgeCube;
                            if ((pCVar26 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar26->fields).iLocalPos,(pCVar26->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar52;
                              func_?();
                              pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_27 != (Vector3__Array *)0x0) {
                                pVVar31 = Cube::Cube_GetFaceAxis
                                                    (&VStack_32,pVStack_27->max_length,
                                                     (MethodInfo *)0x0);
                                axis_00.z._1_1_ = (char)((uint)pVVar31->z >> 8);
                                axis_00._0_9_ = *(unkbyte9 *)pVVar31;
                                axis_00.z._2_2_ = (short)((uint)pVVar31->z >> 0x10);
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_27,-1.0,axis_00,
                                                    (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                    (MethodInfo *)0x0);
                                pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_27 != (Vector3__Array *)0x0) {
                                  pVVar31 = Cube::Cube_GetFaceAxis
                                                      (&VStack_32,pVStack_27->max_length,
                                                       (MethodInfo *)0x0);
                                  axis_02.z._2_2_ = (short)((uint)pVVar31->z >> 0x10);
                                  axis_02._0_10_ = *(unkbyte10 *)pVVar31;
                                  Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_27,-0.75,axis_02,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                      (MethodInfo *)0x0);
                                  pCVar26 = (this->fields).movingEdgeCube;
                                  if ((pCVar26 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar26->fields).iLocalPos,(pCVar26->fields).cube,
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
            else if (pVStack_27 == (Vector3__Array *)0x5) {
              pCVar26 = (this->fields).movingEdgeCube;
              if (pCVar26 != (CubePickingInfo *)0x0) {
                pVStack_27 = *(Vector3__Array **)&(pCVar26->fields).iLocalPos;
                uStack_29._2_2_ = (pCVar26->fields).iLocalPos.z;
                pVStack_28 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_01.z = (int16_t)pVStack_27;
                localPos_01._0_4_ = &stack0xffffff6c;
                IVar30 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_01,CONCAT22(uVar45,uStack_29._2_2_),
                                    (MethodInfo *)pVStack_28);
                puVar54 = IVar30._0_4_;
                uStack_42 = *(Vector3__Array **)puVar54;
                uStack_29 = (IndentArea *)
                            CONCAT22(*(undefined2 *)((int)puVar54 + 4),(undefined2)uStack_29);
                requestedCubePos.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8);
                requestedCubePos._0_5_ = *puVar54;
                pVStack_28 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,requestedCubePos,(this->fields).movingEdgeCube,
                                        (MethodInfo *)0x0);
                if (pVStack_28 != (Vector3__Array *)0x0) {
code_?:
                  VStack_32.z = (float)pVStack_28;
                  VStack_32.y = -NAN;
                  VStack_32.x = (float)TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&VStack_32,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                  uVar43 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
                  goto code_?;
                }
                pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar23 != (MVCubeModelBase *)0x0) {
                  pos_02.z._0_1_ = (char)((uint)uStack_29 >> 0x10);
                  pos_02._0_4_ = uStack_42;
                  pos_02.z._1_1_ = (char)((uint)uStack_29 >> 0x18);
                  pVStack_27 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar23,pos_02,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar20 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_27,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar20 == 0) goto code_?;
                  pCVar26 = (this->fields).movingEdgeCube;
                  if (pCVar26 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar26->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar26 = (this->fields).movingEdgeCube;
                    if (pCVar26 != (CubePickingInfo *)0x0) {
                      pVStack_27 = (Vector3__Array *)(pCVar26->fields).cube;
                      FVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar49 = Cube::Cube_GetCorners((Cube *)pVStack_27,FVar48,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pBVar50 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar49,(MethodInfo *)0x0);
                      uVar51 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar51);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar51,(MethodInfo *)0x0);
                      pVStack_27 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_27,pBVar50,(Byte__Array *)unaff_ESI,
                                       (MethodInfo *)0x0);
                      if (pVStack_28 != (Vector3__Array *)0x0) {
                        pos_11.z = uStack_29._2_2_;
                        pos_11._0_4_ = uStack_42;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_28,pos_11,(CubeBase *)pVStack_27,
                                   (MethodInfo *)0x0);
                        pCVar26 = (this->fields).movingEdgeCube;
                        pCVar52 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar52,pCVar26,(MethodInfo *)0x0);
                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                        unaff_ESI = (Vector3__Array *)e;
                        if (pMVar23 != (MVCubeModelBase *)0x0) {
                          pos_05.z = uStack_29._2_2_;
                          pos_05._0_4_ = uStack_42;
                          pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar23,pos_05,(MethodInfo *)0x0);
                          pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                          if (pCVar52 != (CubePickingInfo *)0x0) {
                            (pCVar52->fields).cube = pCVar53;
                            func_?();
                            *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_42;
                            (pCVar52->fields).iLocalPos.z = uStack_29._2_2_;
                            pCVar26 = (this->fields).movingEdgeCube;
                            if ((pCVar26 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar26->fields).iLocalPos,(pCVar26->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar52;
                              func_?();
                              pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_27 != (Vector3__Array *)0x0) {
                                pVVar31 = Cube::Cube_GetFaceAxis
                                                    (&VStack_32,pVStack_27->max_length,
                                                     (MethodInfo *)0x0);
                                axis.z._1_1_ = (char)((uint)pVVar31->z >> 8);
                                axis._0_9_ = *(unkbyte9 *)pVVar31;
                                axis.z._2_2_ = (short)((uint)pVVar31->z >> 0x10);
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_27,-1.0,axis,
                                                    &CStack_17,(MethodInfo *)0x0);
                                pVStack_28 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_28 != (Vector3__Array *)0x0) {
                                  pVStack_27 = (Vector3__Array *)
                                               Cube::Cube_GetFaceAxis
                                                         (&VStack_32,pVStack_28->max_length,
                                                          (MethodInfo *)0x0);
                                  pCVar26 = (this->fields).movingEdgeCube;
                                  if (pCVar26 != (CubePickingInfo *)0x0) {
                                    iVar46 = (((MVCubeModelBase__Fields *)&pVStack_27->bounds)->_)._
                                             .id;
                                    axis_01.z._1_1_ = (char)((uint)iVar46 >> 8);
                                    axis_01._0_9_ = *(unkbyte9 *)pVStack_27;
                                    axis_01.z._2_2_ = (short)((uint)iVar46 >> 0x10);
                                    Cube::Cube_MoveVertex
                                              ((CubePickingInfo *)pVStack_28,-0.75,axis_01,
                                               (pCVar26->fields).pickedEdgeIndex0,
                                               (pCVar26->fields).pickedEdgeIndex1,&CStack_17,
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
            else if (pVStack_27 == (Vector3__Array *)0x2) {
              CVar55 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                 (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar26 = (this->fields).movingEdgeCube;
              if (CVar55 == CanPerformCubeActionResult__Enum_Yes) {
                if (pCVar26 != (CubePickingInfo *)0x0) {
                  pVStack_27 = *(Vector3__Array **)&(pCVar26->fields).iLocalPos;
                  iStack_56 = (int16_t)((uint)pVStack_27 >> 0x10);
                  iVar16 = (pCVar26->fields).iLocalPos.z;
                  pCVar26 = (this->fields).movingEdgeCube;
                  if (pCVar26 != (CubePickingInfo *)0x0) {
                    pVStack_28 = (Vector3__Array *)(pCVar26->fields).pickedFace;
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
                              ((IntVector *)&stack0xffffff6c,(int32_t)pVStack_27,
                               CONCAT22(iVar16,iStack_56),CONCAT22(uStack_4,iVar16),
                               (MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pVVar31 = Cube::Cube_GetFaceAxis
                                        (&VStack_32,(Face__Enum)pVStack_28,(MethodInfo *)0x0);
                    pCVar26 = (this->fields).movingEdgeCube;
                    uVar60 = pVVar31->x;
                    uVar61 = pVVar31->y;
                    sVar57 = sVar57 - (short)(int)(float)uVar60;
                    sVar58 = sVar58 - (short)(int)(float)uVar61;
                    uStack_29 = (IndentArea *)
                                CONCAT22(sVar59 - (short)(int)pVVar31->z,(undefined2)uStack_29);
                    if (pCVar26 != (CubePickingInfo *)0x0) {
                      pos_04.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
                      pos_04._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                (e,pos_04,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                      pCVar26 = (this->fields).movingEdgeCube;
                      if ((pCVar26 != (CubePickingInfo *)0x0) &&
                         ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) {
                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                   (pCVar26->fields).iLocalPos,(MethodInfo *)0x0);
                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar23 != (MVCubeModelBase *)0x0) {
                          pos_13.y = sVar58;
                          pos_13.x = sVar57;
                          pos_13.z._0_1_ = (char)((uint)uStack_29 >> 0x10);
                          pos_13.z._1_1_ = (char)((uint)uStack_29 >> 0x18);
                          pVVar49 = (Vector3__Array *)
                                    MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar23,pos_13,(MethodInfo *)0x0);
                          pVStack_28 = pVVar49;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar20 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Inequality
                                             ((CubeBase *)pVVar49,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar20 == 0) {
                            cubeChange = &(this->fields).movingEdgeCube;
                            (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                            func_?();
                          }
                          else {
                            pCVar26 = (this->fields).movingEdgeCube;
                            cubeChange = (CubePickingInfo **)&UNK_?;
                            pVVar49 = (Vector3__Array *)func_?();
                            pVStack_27 = pVVar49;
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      ((CubePickingInfo *)pVVar49,pCVar26,(MethodInfo *)0x0);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pCVar53 = Cube::Cube_Clone_1((Cube *)pVStack_28,(MethodInfo *)0x0);
                            unaff_ESI = (Vector3__Array *)0x0;
                            if (pVVar49 == (Vector3__Array *)0x0) goto code_?;
                            (((MVCubeModelBase__Fields *)&pVVar49->bounds)->_)._.id =
                                 (int32_t)pCVar53;
                            func_?();
                            pVVar49->vector[2].z = (float)CONCAT22(sVar58,sVar57);
                            *(int16_t *)&pVVar49->vector[3].x = uStack_29._2_2_;
                            (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar49;
                            func_?();
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
              else if (((pCVar26 != (CubePickingInfo *)0x0) &&
                       ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar26->fields).iLocalPos,
                           pGVar25,showUnlockNotification,pMVar44);
                pCVar26 = (this->fields).movingEdgeCube;
                unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                  pCVar53 = (this->fields).prevCubeState;
                  goto code_?;
                }
              }
            }
            else {
              if (pVStack_27 != (Vector3__Array *)0x0) break;
              pVStack_28 = (Vector3__Array *)
                           CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                     (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar26 = (this->fields).movingEdgeCube;
              if ((pCVar26 != (CubePickingInfo *)0x0) &&
                 (pCVar53 = (pCVar26->fields).cube, pCVar53 != (Cube *)0x0)) {
                pVStack_27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                       ((CubeBase *)pCVar53,(MethodInfo *)0x0);
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar20 = Cube::Cube_IsCollapsed(pVStack_27,(MethodInfo *)0x0);
                if ((bVar20 == 0) || (pVStack_28 != (Vector3__Array *)0x1)) {
                  pCVar26 = (this->fields).movingEdgeCube;
                  if (pVStack_28 == (Vector3__Array *)0x2) goto code_?;
                  if (pCVar26 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar26->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                               (MethodInfo *)0x0);
                    pCVar26 = (this->fields).movingEdgeCube;
                    unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0))
                    {
                      iVector.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
                      iVector._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                ((MVCubeModelBase *)unaff_ESI,iVector,(pCVar26->fields).cube,
                                 (MethodInfo *)0x0);
                      break;
                    }
                  }
                }
                else {
                  pCVar26 = (this->fields).movingEdgeCube;
                  if (((pCVar26 != (CubePickingInfo *)0x0) &&
                      (pMVar23 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar23 != (MVCubeModelBase *)0x0)) &&
                     ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                    pMVar44 = (MethodInfo *)0x0;
                    showUnlockNotification = 0;
                    pGVar25 = (pMVar23->fields)._.gameObject;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        else {
          uVar51 = (this->fields).prevMaterial;
          pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar51);
          (this->fields).currentInternalState = 2;
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (e,uVar51,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          value = (WebHeaderCollection *)(this->fields).movingEdgeCube;
          if ((this->fields).edgeHasMoved == 0) {
            uVar1 = 0x1045;
            System.dll::System::Net::WebResponseStream::WebResponseStream_set_Headers
                      ((WebResponseStream *)e,value,(MethodInfo *)0x0);
            pCVar26 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar26 != (CubePickingInfo *)0x0) {
              pos_10.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
              pos_10._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              uStack_6 = 2;
              ppCVar62 = (CubePickingInfo **)
                         CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                   (e,(MethodInfo *)0x0);
              pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar23 != (MVCubeModelBase *)0x0) {
                cubeChange = ppCVar62;
                iVar46 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar23,(MethodInfo *)0x0);
                ppCVar62 = cubeChange;
                CubeModelTool::CubeModelTool_SendCubeEvent
                          (iVar46,(EditCubeChange__Enum)cubeChange,(MethodInfo *)0x0);
                if (ppCVar62 != (CubePickingInfo **)0x0) {
code_?:
                  uStack_6 = 0xffffffff;
                  goto code_?;
                }
                pCVar26 = (e->fields)._SelectedCube_k__BackingField;
                if (pCVar26 != (CubePickingInfo *)0x0) {
                  pVStack_27._0_2_ = (pCVar26->fields).iLocalPos.x;
                  pVStack_27._2_2_ = (pCVar26->fields).iLocalPos.y;
                  uStack_42 = (Vector3__Array *)
                              CONCAT22((pCVar26->fields).iLocalPos.z,(undefined2)uStack_42);
                  pVStack_28 = (Vector3__Array *)
                               (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  localPos_03.z = (int16_t)pVStack_27;
                  localPos_03._0_4_ = &stack0xffffff6c;
                  IVar30 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_03,CONCAT22(uVar1,uStack_42._2_2_),
                                      (MethodInfo *)pVStack_28);
                  pVStack_27 = IVar30._0_4_;
                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar21 = (this->fields).modelCursor;
                  if ((pMVar23 != (MVCubeModelBase *)0x0) && (pMVar21 != (ModelCursor3D *)0x0)) {
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar21,*(IntVector *)pVStack_27,
                               (pMVar23->fields)._.gameObject,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
            pVStack_28 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                   (e,(CubePickingInfo *)value,(MethodInfo *)0x0);
            pCVar26 = (this->fields).movingEdgeCube;
            if (pVStack_28 == (Vector3__Array *)0x2) {
              if (((pCVar26 != (CubePickingInfo *)0x0) &&
                  (pMVar23 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar23 != (MVCubeModelBase *)0x0)) &&
                 ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar26->fields).iLocalPos,
                           (pMVar23->fields)._.gameObject,1,(MethodInfo *)0x0);
code_?:
                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                func_?();
                (this->fields).edgeHasMoved = 0;
                break;
              }
            }
            else if ((pCVar26 != (CubePickingInfo *)0x0) &&
                    (pCVar53 = (pCVar26->fields).cube, pCVar53 != (Cube *)0x0)) {
              uVar1 = 0;
              uVar43 = 0;
              pVStack_27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                     ((CubeBase *)pCVar53,(MethodInfo *)0x0);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                in_stack_13 = 0x1045;
                func_?();
              }
              bVar20 = Cube::Cube_IsCollapsed(pVStack_27,(MethodInfo *)0x0);
              pCVar26 = (this->fields).movingEdgeCube;
              if (bVar20 == 0) {
                if (pCVar26 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar26->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                             (MethodInfo *)0x0);
                  pCVar26 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                    pCVar53 = (pCVar26->fields).cube;
                    uVar63 = SUB41(pCVar53,0);
                    uVar64 = (undefined1)((uint)pCVar53 >> 8);
                    in_stack_13 = (undefined2)((uint)pCVar53 >> 0x10);
code_?:
                    iVector_02.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
                    iVector_02._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                              ((MVCubeModelBase *)unaff_ESI,iVector_02,
                               (Cube *)CONCAT22(uVar43,uVar1),
                               (MethodInfo *)CONCAT22(in_stack_13,CONCAT11(uVar64,uVar63)));
                    goto code_?;
                  }
                }
              }
              else if (pVStack_28 == (Vector3__Array *)0x0) {
                if (pCVar26 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar26->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                             (MethodInfo *)0x0);
                  pCVar26 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                    pos_15.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
                    pos_15._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube
                              ((MVCubeModelBase *)unaff_ESI,pos_15,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else if (((pCVar26 != (CubePickingInfo *)0x0) &&
                       (pMVar23 = (e->fields)._TargetCubeModel_k__BackingField,
                       pMVar23 != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar26->fields).iLocalPos,
                           (pMVar23->fields)._.gameObject,0,(MethodInfo *)0x0);
                pCVar26 = (this->fields).movingEdgeCube;
                if (pCVar26 != (CubePickingInfo *)0x0) {
                  pIVar47 = &(pCVar26->fields).iLocalPos;
                  uVar1 = pIVar47->x;
                  uVar43 = pIVar47->y;
                  iVar16 = (pCVar26->fields).iLocalPos.z;
                  uVar63 = (undefined1)iVar16;
                  uVar64 = (undefined1)((ushort)iVar16 >> 8);
                  pos_14.z._1_1_ = uVar64;
                  pos_14._0_5_ = *(undefined5 *)pIVar47;
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,pos_14,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                  pCVar26 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar26 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                    cubeChange = (CubePickingInfo **)0x0;
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
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
      (this->fields).edgeHasMoved = 0;
      break;
    case 1:
      if ((this->fields).currentInternalState == 1) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar20 != 0) {
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
        bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar20 != 0) &&
           (bVar20 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar20 != 0)) {
          (this->fields).currentInternalState = 3;
          break;
        }
      }
      else {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar20 != 0) {
          uStack_6 = 0;
          EVar19 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar23 != (MVCubeModelBase *)0x0) {
            iVar46 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar23,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent(iVar46,EVar19,(MethodInfo *)0x0);
            if (EVar19 != EditCubeChange__Enum_None) {
              bVar40 = true;
              uStack_6 = 0xffffffff;
              break;
            }
            pCVar26 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar26 != (CubePickingInfo *)0x0) {
              pVStack_27._0_2_ = (pCVar26->fields).iLocalPos.x;
              pVStack_27._2_2_ = (pCVar26->fields).iLocalPos.y;
              uStack_42 = (Vector3__Array *)
                          CONCAT22((pCVar26->fields).iLocalPos.z,(undefined2)uStack_42);
              pVStack_28 = (Vector3__Array *)
                           (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              localPos_00.z = (int16_t)pVStack_27;
              localPos_00._0_4_ = &stack0xffffff6c;
              IVar30 = Cube::Cube_GetCubePosAboveFace
                                 (localPos_00,CONCAT22(in_stack_65,uStack_42._2_2_),
                                  (MethodInfo *)pVStack_28);
              pVStack_27 = IVar30._0_4_;
              pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
              pMVar21 = (this->fields).modelCursor;
              if ((pMVar23 != (MVCubeModelBase *)0x0) && (pMVar21 != (ModelCursor3D *)0x0)) {
                iPos_00.z._1_1_ = (char)((ushort)*(undefined2 *)&pVStack_27->monitor >> 8);
                iPos_00._0_5_ = *(undefined5 *)pVStack_27;
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)pMVar21,iPos_00,(pMVar23->fields)._.gameObject,0,
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
      bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar20 != 0) &&
         (pVStack_27 = (Vector3__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0),
         _UNK_? < (float)pVStack_27 - (this->fields).prevMouseUpTime)) {
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
          pVStack_27 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
          pVStack_28 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          if (((float)pVStack_27 != 0.0) || ((float)((uint)pVStack_28 & _UNK_?) != 0.0)) {
            pCVar26 = (this->fields).prevSelectedCube;
            if (pCVar26 != (CubePickingInfo *)0x0) {
              pVStack_28 = (Vector3__Array *)(pCVar26->fields).cube;
              pVStack_27 = (Vector3__Array *)(((this->fields).prevSelectedCube)->fields).pickedFace;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar51 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pVStack_28,(Face__Enum)pVStack_27,(MethodInfo *)0x0);
              pVStack_28 = (Vector3__Array *)CONCAT31(pVStack_28._1_3_,uVar51);
              pMVar66 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar66 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar66->fields)._MaterialRepository_k__BackingField,
                 this_00 != (MVMaterialRepository *)0x0)) {
                bVar20 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                   (this_00,(uint8_t)pVStack_28,(MethodInfo *)0x0);
                if (bVar20 == 0) {
                  pCVar26 = (this->fields).prevSelectedCube;
code_?:
                  if (((pCVar26 == (CubePickingInfo *)0x0) ||
                      (pMVar23 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar23 == (MVCubeModelBase *)0x0)) ||
                     ((this->fields).modelCursor == (ModelCursor3D *)0x0)) goto code_?;
                  iPos_01.z._1_1_ = (char)((ushort)(pCVar26->fields).iLocalPos.z >> 8);
                  iPos_01._0_5_ = *(undefined5 *)&(pCVar26->fields).iLocalPos;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                             (pMVar23->fields)._.gameObject,1,(MethodInfo *)0x0);
                }
                else {
                  uVar51 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                     (e,(MethodInfo *)0x0);
                  (this->fields).prevMaterial = uVar51;
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (e,(uint8_t)pVStack_28,(MethodInfo *)0x0);
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
      bVar20 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar20 == 0) {
        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
        bVar20 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                           ((pMVar23->fields)._.gameObject,(IntVector *)&puStack_15,
                            (MethodInfo *)0x0);
        if ((bVar20 != 0) &&
           (requestedCubePos_01.z = iVar16, requestedCubePos_01._0_4_ = puStack_15,
           CVar55 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                              (e,requestedCubePos_01,(MethodInfo *)0x0),
           CVar55 == CanPerformCubeActionResult__Enum_Yes)) {
          pos_09.z = iVar16;
          pos_09._0_4_ = puStack_15;
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          puVar67 = puStack_15;
          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
          uStack_42 = (Vector3__Array *)CONCAT22(iVar16,(undefined2)uStack_42);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                 ((MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_28 = (Vector3__Array *)
                       MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                       CubeDataPacker_CornersToByteArray(pVStack_27,(MethodInfo *)0x0);
          uVar51 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                             (e,(MethodInfo *)0x0);
          pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar51);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          unaff_ESI = (Vector3__Array *)
                      Cube::Cube_CreateMaterialArray((uint8_t)pVStack_27,(MethodInfo *)0x0);
          cubeChange = (CubePickingInfo **)&UNK_?;
          pVStack_27 = (Vector3__Array *)func_?();
          Cube::Cube__ctor((Cube *)pVStack_27,(Byte__Array *)pVStack_28,(Byte__Array *)unaff_ESI,
                           (MethodInfo *)0x0);
          if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
          pos_01.z._0_1_ = (char)((uint)uStack_42 >> 0x10);
          pos_01._0_4_ = puVar67;
          pos_01.z._1_1_ = (char)((uint)uStack_42 >> 0x18);
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (pMVar23,pos_01,(CubeBase *)pVStack_27,(MethodInfo *)0x0);
        }
      }
      else {
        (this->fields).currentInternalState = 2;
      }
    }
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      pCVar53 = (Cube *)0x0;
    }
    else {
      pCVar53 = (((this->fields).movingEdgeCube)->fields).cube;
      unaff_ESI = (Vector3__Array *)e;
      if (pCVar53 == (Cube *)0x0) goto code_?;
      pCVar53 = Cube::Cube_Clone(pCVar53,(MethodInfo *)0x0);
    }
    (this->fields).prevCubeState = pCVar53;
    func_?();
    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
    func_?();
    if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
    pVVar49 = (Vector3__Array *)(this->fields).movingEdgeCube;
    pVVar68 = (Vector3__Array *)(this->fields).modelCursor;
    pVStack_27 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
    unaff_ESI = (Vector3__Array *)e;
    if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
    unaff_ESI = (Vector3__Array *)(pMVar23->fields)._.gameObject;
    pVVar69 = (Vector3__Array *)(this->fields).currentInternalState;
    pVStack_28 = unaff_ESI;
    if (pVVar49 == (Vector3__Array *)0x0) {
      iVar70 = (((MVCubeModelBase__Fields *)&pVVar68->bounds)->_)._.id;
      if (pVStack_27 == (Vector3__Array *)0x0) {
        if ((iVar70 != 0) && (*(GameObject **)(iVar70 + 0x14) != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)(iVar70 + 0x14),0,(MethodInfo *)0x0);
          fVar3 = pVVar68->vector[0].x;
          unaff_ESI = pVVar68;
          if ((fVar3 != 0.0) &&
             (pGVar25 = *(GameObject **)((int)fVar3 + 0x14), pGVar25 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar25,0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        if ((iVar70 == 0) || (*(GameObject **)(iVar70 + 0x14) == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(iVar70 + 0x14),1,(MethodInfo *)0x0);
        this_01 = (FaceCursor *)(((MVCubeModelBase__Fields *)&pVVar68->bounds)->_)._.id;
        info = pVStack_27;
joined_?:
        unaff_ESI = pVVar68;
        if (this_01 != (FaceCursor *)0x0) {
          FaceCursor::FaceCursor_UpdateCursor
                    (this_01,(CubePickingInfo *)info,(GameObject *)pVStack_28,(MethodInfo *)0x0);
code_?:
          unaff_ESI = pVVar68;
          if ((CellCursor *)pVVar68->max_length != (CellCursor *)0x0) {
            CellCursor::CellCursor_UpdateCursor((CellCursor *)pVVar68->max_length,(MethodInfo *)0x0)
            ;
            unaff_ESI = pVStack_27;
            if (pVVar69 == (Vector3__Array *)0x3) {
              fVar71 = 0.0;
              fVar3 = 0.0;
              fVar41 = 0.0;
              bVar20 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffff3c,(MethodInfo *)0x0);
              if (bVar20 == 0) {
code_?:
                *unaff_FS_OFFSET = uStack_8;
                return;
              }
              pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              unaff_ESI = pVVar68;
              if (((pGVar72 != (GameEventManager *)0x0) &&
                  (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
                  pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                 (pGVar74 = (pGVar73->fields).LaserCommands,
                 pGVar74 !=
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                          (pGVar74,0.2,(MethodInfo *)0x0);
                pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar72 != (GameEventManager *)0x0) &&
                    (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
                    pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar74 = (pGVar73->fields).LaserCommands,
                   pGVar74 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  to_00.y = fVar41;
                  to_00.x = fVar3;
                  to_00.z = fVar71;
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar74,to_00,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
            }
            else if (pVVar49 == (Vector3__Array *)0x0) {
              if (bVar40) {
                pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
code_?:
                unaff_ESI = pVVar68;
                if (((pGVar72 != (GameEventManager *)0x0) &&
                    (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
                    pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar74 = (pGVar73->fields).LaserCommands,
                   pGVar74 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                            (pGVar74,0.2,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
              else {
                if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
                pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar72 != (GameEventManager *)0x0) &&
                    (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
                    pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar74 = (pGVar73->fields).LaserCommands,
                   pGVar74 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar74,*(Vector3 *)&unaff_ESI->vector[1].z,(MethodInfo *)0x0);
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
              FVar48 = pVVar49->max_length;
              pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar49->bounds)->_)._.id;
              fVar3 = pVVar49->vector[2].z;
              iVar16 = SUB42(fVar3,0);
              uVar1 = (undefined2)((uint)fVar3 >> 0x10);
              uStack_42 = (Vector3__Array *)
                          CONCAT22(*(undefined2 *)&pVVar49->vector[3].x,(undefined2)uStack_42);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              unaff_ESI = pVStack_28;
              iVector_01.y = uVar1;
              iVector_01.x = iVar16;
              iVector_01.z = uStack_42._2_2_;
              pVVar68 = Cube::Cube_GetFaceVerticesWorld
                                  ((GameObject *)pVStack_28,pCVar53,FVar48,iVector_01,
                                   (MethodInfo *)0x0);
              if (pVVar68 != (Vector3__Array *)0x0) {
                bVar22 = 0;
                if ((pVVar68->max_length != 0) &&
                   (bVar22 = pVVar68->max_length == 0, 1 < pVVar68->max_length)) {
                  VStack_32.x = pVVar68->vector[1].x;
                  VStack_32.y = pVVar68->vector[1].y;
                  VStack_32.z = pVVar68->vector[1].z;
                  uVar75 = pVVar68->vector[0].x;
                  uVar76 = pVVar68->vector[0].y;
                  fVar3 = VStack_32.x + (float)uVar75;
                  fVar41 = VStack_32.y + (float)uVar76;
                  fVar71 = VStack_32.z + pVVar68->vector[0].z;
                  bVar22 = pVVar68->max_length < 2;
                  if (2 < pVVar68->max_length) {
                    VStack_32.x = pVVar68->vector[2].x;
                    VStack_32.y = pVVar68->vector[2].y;
                    VStack_32.z = pVVar68->vector[2].z;
                    fVar3 = VStack_32.x + fVar3;
                    fVar41 = VStack_32.y + fVar41;
                    bVar22 = pVVar68->max_length < 3;
                    if (3 < pVVar68->max_length) {
                      VStack_32.x = pVVar68->vector[3].x;
                      VStack_32.y = pVVar68->vector[3].y;
                      fVar3 = (VStack_32.x + fVar3) * _UNK_?;
                      pVVar69 = (Vector3__Array *)((VStack_32.y + fVar41) * _UNK_?);
                      pVVar68 = (Vector3__Array *)
                                ((pVVar68->vector[3].z + VStack_32.z + fVar71) * _UNK_?);
                      cubeChange = (CubePickingInfo **)0x0;
                      VStack_32.z = (float)pVVar68;
                      pVStack_28 = pVVar69;
                      pVStack_27 = pVVar68;
                      if (pVVar49->vector[0].x == 0.0) {
                        fStack_77 = fVar3;
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar79 = (pVVar78->upVector).x;
                        uVar80 = (pVVar78->upVector).y;
                        VStack_32.z = (pVVar78->upVector).z + (float)pVStack_27;
                        VStack_32.y = (float)uVar80 + (float)pVStack_28;
                        VStack_32.x = (float)uVar79 + fVar3;
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        start_00.y._0_1_ = (char)pVVar69;
                        start_00.x = fStack_77;
                        start_00.y._1_1_ = (char)((uint)pVVar69 >> 8);
                        start_00.y._2_2_ = (short)((uint)pVVar69 >> 0x10);
                        start_00.z = (float)pVVar68;
                        end_00.z = VStack_32.z;
                        end_00.x = VStack_32.x;
                        end_00.y = VStack_32.y;
                        color_00.g = (float)_UNK_?;
                        color_00.r = (float)_UNK_?;
                        color_00.b = (float)_UNK_?;
                        color_00.a._0_1_ = (char)_UNK_?;
                        color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                        color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                  (start_00,end_00,color_00,(MethodInfo *)0x0);
code_?:
                        pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        unaff_ESI = pVVar68;
                        if (((pGVar72 != (GameEventManager *)0x0) &&
                            (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
                            pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar74 = (pGVar73->fields).LaserCommands,
                           pGVar74 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          to.y._0_2_ = (short)pVVar69;
                          to.x = fStack_77;
                          to.y._2_2_ = (short)((uint)pVVar69 >> 0x10);
                          to.z._0_1_ = (char)pVVar68;
                          to.z._1_1_ = (char)((uint)pVVar68 >> 8);
                          to.z._2_2_ = (short)((uint)pVVar68 >> 0x10);
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar74,to,(MethodInfo *)0x0);
                          pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                      else {
                        pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar49->bounds)->_)._.id;
                        fStack_81 = (float)pVVar49->max_length;
                        fVar41 = pVVar49->vector[0].x;
                        fVar71 = pVVar49->vector[2].z;
                        iVar16 = SUB42(fVar71,0);
                        uVar1 = (undefined2)((uint)fVar71 >> 0x10);
                        uStack_42 = (Vector3__Array *)
                                    CONCAT22(*(undefined2 *)&pVVar49->vector[3].x,
                                             (undefined2)uStack_42);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        iVector_00.y = uVar1;
                        iVector_00.x = iVar16;
                        iVector_00.z = uStack_42._2_2_;
                        pVVar68 = Cube::Cube_GetEdgeVerticesWorld
                                            ((GameObject *)unaff_ESI,pCVar53,(Face__Enum)fStack_81,
                                             (Edge__Enum)fVar41,iVector_00,(MethodInfo *)0x0);
                        if (*(bool *)&pVVar49->vector[0].y == 0) {
                          if (pVVar68 != (Vector3__Array *)0x0) {
                            if (*(char *)((int)&pVVar49->vector[0].y + 1) == '\0') {
                              bVar22 = 0;
                              if ((pVVar68->max_length != 0) &&
                                 (bVar22 = pVVar68->max_length == 0, 1 < pVVar68->max_length)) {
                                VStack_32.x = pVVar68->vector[1].x;
                                VStack_32.y = pVVar68->vector[1].y;
                                uVar82 = pVVar68->vector[0].x;
                                uVar83 = pVVar68->vector[0].y;
                                fVar84 = (pVVar68->vector[1].z + pVVar68->vector[0].z) *
                                         _UNK_?;
                                fStack_77 = (VStack_32.x + (float)uVar82) * _UNK_?;
                                fVar85 = (VStack_32.y + (float)uVar83) * _UNK_?;
code_?:
                                pVVar68 = (Vector3__Array *)
                                          (((float)pVStack_27 - fVar84) * _UNK_? + fVar84);
                                fStack_77 = (fVar3 - fStack_77) * _UNK_? + fStack_77;
                                pVVar69 = (Vector3__Array *)
                                          (((float)pVStack_28 - fVar85) * _UNK_? + fVar85);
                                VStack_32.z = (float)pVVar68;
                                goto code_?;
                              }
                            }
                            else {
                              bVar22 = pVVar68->max_length == 0;
                              if (1 < pVVar68->max_length) {
                                uVar86 = pVVar68->vector[1].x;
                                fVar85 = pVVar68->vector[1].y;
                                fVar84 = pVVar68->vector[1].z;
                                fStack_77 = (float)uVar86;
                                goto code_?;
                              }
                            }
                            goto code_?;
                          }
                        }
                        else if (pVVar68 != (Vector3__Array *)0x0) {
                          bVar22 = 0;
                          if (pVVar68->max_length != 0) {
                            uVar87 = pVVar68->vector[0].x;
                            uVar88 = pVVar68->vector[0].y;
                            fVar84 = pVVar68->vector[0].z;
                            iStack_89 = (int16_t)uVar88;
                            iStack_56 = (int16_t)((uint)uVar88 >> 0x10);
                            fVar41 = pVVar68->vector[0].x;
                            fVar71 = pVVar68->vector[0].y;
                            fVar85 = (float)uVar87;
                            fVar90 = fVar84;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar91 = (pVVar78->upVector).x;
                            uVar92 = (pVVar78->upVector).y;
                            VStack_32.z = (pVVar78->upVector).z + fVar90;
                            VStack_32.y = (float)uVar92 + fVar71;
                            VStack_32.x = (float)uVar91 + fVar41;
                            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            start.y._0_2_ = iStack_89;
                            start.x = fVar85;
                            start.y._2_2_ = iStack_56;
                            start.z = fVar84;
                            end.z = VStack_32.z;
                            end.x = VStack_32.x;
                            end.y = VStack_32.y;
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
    uStack_29 = (IndentArea *)pVVar68->vector[0].x;
    if (uStack_29 == (IndentArea *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      uStack_14 = &MethodInfo__System__Collections__Generic__List<int>__ToArray__;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar49->bounds)->_)._.id;
    fStack_93 = (float)pVVar49->max_length;
    fVar3 = pVVar49->vector[2].z;
    uVar1 = *(undefined2 *)&pVVar49->vector[3].x;
    uStack_42._2_2_ = uVar1;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVector_03.z._0_1_ = (char)uStack_42._2_2_;
    iVector_03._0_4_ = fVar3;
    iVector_03.z._1_1_ = (char)((ushort)uStack_42._2_2_ >> 8);
    uStack_42 = Cube::Cube_GetFaceVerticesWorld
                          ((GameObject *)unaff_ESI,pCVar53,(Face__Enum)fStack_93,iVector_03,
                           (MethodInfo *)0x0);
    unaff_ESI = (Vector3__Array *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)unaff_ESI,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar25 = (uStack_29->fields).gameObject;
    if ((((pGVar25 == (GameObject *)0x0) ||
         (this_04 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar25,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_04 == (MeshFilter *)0x0)) ||
        (pVVar68 = (Vector3__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_04,(MethodInfo *)0x0), pVVar68 == (Vector3__Array *)0x0)) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear((Mesh *)pVVar68,(MethodInfo *)0x0)
       , pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
       unaff_ESI == (Vector3__Array *)0x0)) goto code_?;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = 0;
      if (uVar94 < *(uint *)(iVar70 + 0xc)) {
        *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 0;
        goto code_?;
      }
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__AddWithResize
              ((List_1_System_Int32_ *)unaff_ESI,0,pMVar44->klass->rgctx_data[0xe].method);
code_?:
    pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = uVar94 < *(uint *)(iVar70 + 0xc);
      if (!(bool)bVar22) goto code_?;
      *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,3,pMVar44->klass->rgctx_data[0xe].method);
    }
    pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = uVar94 < *(uint *)(iVar70 + 0xc);
      if (!(bool)bVar22) goto code_?;
      *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,2,pMVar44->klass->rgctx_data[0xe].method);
    }
    pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = uVar94 < *(uint *)(iVar70 + 0xc);
      if (!(bool)bVar22) goto code_?;
      *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,2,pMVar44->klass->rgctx_data[0xe].method);
    }
    pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = uVar94 < *(uint *)(iVar70 + 0xc);
      if (!(bool)bVar22) goto code_?;
      *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,1,pMVar44->klass->rgctx_data[0xe].method);
    }
    pMVar44 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar70 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar94 = unaff_ESI->max_length;
    if (iVar70 == 0) goto code_?;
    if (uVar94 < *(uint *)(iVar70 + 0xc)) {
      unaff_ESI->max_length = uVar94 + 1;
      bVar22 = uVar94 < *(uint *)(iVar70 + 0xc);
      if (!(bool)bVar22) goto code_?;
      *(undefined4 *)(iVar70 + 0x10 + uVar94 * 4) = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,0,pMVar44->klass->rgctx_data[0xe].method);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              ((Mesh *)pVVar68,uStack_42,(MethodInfo *)0x0);
    value_02 = IndentArea::IndentArea_SetUVs(uStack_29,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
              ((Mesh *)pVVar68,value_02,(MethodInfo *)0x0);
    value_03 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)unaff_ESI,
                          MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              ((Mesh *)pVVar68,(Int32__Array *)value_03,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              ((Mesh *)pVVar68,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
              ((Mesh *)pVVar68,(MethodInfo *)0x0);
    unaff_ESI = pVVar68;
    if (uStack_42 == (Vector3__Array *)0x0) goto code_?;
    bVar22 = uStack_42->max_length < 2;
    if (2 < uStack_42->max_length) {
      uVar95 = uStack_42->vector[0].x;
      uVar96 = uStack_42->vector[0].y;
      uVar97 = uStack_42->vector[2].x;
      uVar98 = uStack_42->vector[2].y;
      fVar3 = ((float)uVar98 - (float)uVar96) * _UNK_?;
      bVar22 = 0;
      if (uStack_42->max_length != 0) {
        uVar99 = uStack_42->vector[0].x;
        uVar100 = uStack_42->vector[0].y;
        fStack_93 = (float)uVar99 + ((float)uVar97 - (float)uVar95) * _UNK_?;
        fStack_81 = uStack_42->vector[0].z +
                    (uStack_42->vector[2].z - uStack_42->vector[0].z) * _UNK_?;
        pGVar25 = (uStack_29->fields).gameObject;
        if (pGVar25 != (GameObject *)0x0) {
          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar25,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar78 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar101 = (pVVar78->oneVector).x;
          uVar102 = (pVVar78->oneVector).y;
          fVar41 = (uStack_29->fields).size;
          fVar71 = (pVVar78->oneVector).z * fVar41;
          if (pTVar35 != (Transform *)0x0) {
            value_00.y._0_2_ = SUB42((float)uVar102 * fVar41,0);
            value_00.x = (float)uVar101 * fVar41;
            value_00.y._2_2_ = (short)((uint)((float)uVar102 * fVar41) >> 0x10);
            value_00.z._0_1_ = SUB41(fVar71,0);
            value_00.z._1_1_ = (char)((uint)fVar71 >> 8);
            value_00.z._2_2_ = (short)((uint)fVar71 >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar35,value_00,(MethodInfo *)0x0);
            pGVar25 = (uStack_29->fields).gameObject;
            if (pGVar25 != (GameObject *)0x0) {
              pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar25,(MethodInfo *)0x0);
              pVVar69 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                  ((Mesh *)pVVar68,(MethodInfo *)0x0);
              if (pVVar69 != (Vector3__Array *)0x0) {
                bVar22 = 0;
                if (pVVar69->max_length == 0) goto code_?;
                if (pTVar35 != (Transform *)0x0) {
                  cubeChange = (CubePickingInfo **)pVVar69->vector[0].x;
                  pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_TransformPoint
                                      (&VStack_32,pTVar35,pVVar69->vector[0],(MethodInfo *)0x0);
                  uVar103 = pVVar31->x;
                  uVar104 = pVVar31->y;
                  fVar41 = pVVar31->z;
                  pGVar25 = (uStack_29->fields).gameObject;
                  if (pGVar25 != (GameObject *)0x0) {
                    pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar25,(MethodInfo *)0x0);
                    pVVar68 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                        ((Mesh *)pVVar68,(MethodInfo *)0x0);
                    if (pVVar68 != (Vector3__Array *)0x0) {
                      bVar22 = pVVar68->max_length < 2;
                      if (pVVar68->max_length < 3) goto code_?;
                      if (pTVar35 != (Transform *)0x0) {
                        pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformPoint
                                            (&VStack_32,pTVar35,pVVar68->vector[2],(MethodInfo *)0x0
                                            );
                        uVar105 = pVVar31->x;
                        uVar106 = pVVar31->y;
                        fVar71 = ((float)uVar105 - (float)uVar103) * _UNK_?;
                        fVar84 = (pVVar31->z - fVar41) * _UNK_?;
                        uStack_42 = (Vector3__Array *)
                                    (((float)uVar106 - (float)uVar104) * _UNK_? + (float)uVar104
                                    );
                        pGVar25 = (uStack_29->fields).gameObject;
                        if (pGVar25 != (GameObject *)0x0) {
                          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar25,(MethodInfo *)0x0);
                          unaff_ESI = (Vector3__Array *)0x0;
                          if (pTVar35 != (Transform *)0x0) {
                            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_position
                                                ((Vector3 *)&stack0xffffff80,pTVar35,
                                                 (MethodInfo *)0x0);
                            VStack_32.x = pVVar31->x;
                            VStack_32.y = pVVar31->y;
                            uVar107 = *(undefined8 *)&pVVar49->vector[0].z;
                            VStack_32.z = pVVar31->z +
                                          (fStack_81 - (fVar84 + fVar41)) +
                                          (float)pVVar49->vector[1].y * _UNK_?;
                            fVar3 = VStack_32.y +
                                     (((float)uVar100 + fVar3) - (float)uStack_42) +
                                     (float)((ulonglong)uVar107 >> 0x20) * _UNK_?;
                            pVVar68 = (Vector3__Array *)&UNK_?;
                            value_01.y._0_2_ = SUB42(fVar3,0);
                            value_01.x = VStack_32.x +
                                         (fStack_93 - (fVar71 + (float)uVar103)) +
                                         (float)uVar107 * _UNK_?;
                            value_01.y._2_2_ = (int16_t)((uint)fVar3 >> 0x10);
                            value_01.z._0_2_ = SUB42(VStack_32.z,0);
                            value_01.z._2_2_ = (short)((uint)VStack_32.z >> 0x10);
                            pVVar69 = (Vector3__Array *)VStack_32.z;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar35,value_01,(MethodInfo *)0x0);
                            iVar70 = (((MVCubeModelBase__Fields *)&pVVar68->bounds)->_)._.id;
                            unaff_ESI = pVVar68;
                            if ((iVar70 != 0) &&
                               (pGVar25 = *(GameObject **)(iVar70 + 0x14),
                               pGVar25 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar25,1,(MethodInfo *)0x0);
                              this_01 = (FaceCursor *)
                                        (((MVCubeModelBase__Fields *)&pVVar68->bounds)->_)._.id;
                              info = pVVar49;
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
  iVar70 = func_?();
  piVar108 = (int *)(iVar70 + 1);
  if ((POPCOUNT((uint)piVar108 & 0xff) & 1U) != 0) {
    pbVar109 = (byte *)((int)&unaff_ESI[-1].vector[0x16].y + 3);
    bVar110 = *pbVar109;
    bVar111 = *pbVar109 + (byte)piVar108;
    *pbVar109 = bVar111 + bVar22;
    *(char *)(iVar70 + -0x26efba70) =
         *(char *)(iVar70 + -0x26efba70) + extraout_DL +
         (CARRY1(bVar110,(byte)piVar108) || CARRY1(bVar111,bVar22));
    pcVar112 = (code *)swi(3);
    (*pcVar112)();
    return;
  }
  puVar113 = (uint *)(iVar70 + -0x44edb4c2);
  uVar94 = *puVar113;
  *puVar113 = *puVar113 + (int)piVar108;
  *piVar108 = (int)piVar108 + (uint)CARRY4(uVar94,(uint)piVar108) + *piVar108;
  if (*piVar108 == 0) {
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
      pVVar49 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                          ((MethodInfo *)0x0);
      if (this_02 == (CubeBase *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                (this_02,pVVar49,(MethodInfo *)0x0);
      iVar70 = piStack_114[0xb];
      if ((iVar70 == 0) ||
         (pMVar23 = (unaff_EBX->fields)._TargetCubeModel_k__BackingField,
         pMVar23 == (MVCubeModelBase *)0x0)) goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (pMVar23,*(IntVector *)(iVar70 + 0x30),*(Cube **)(iVar70 + 8),(MethodInfo *)0x0);
    }
    piStack_114[0xb] = 0;
    func_?();
    *(undefined1 *)((int)piStack_114 + 0x19) = 0;
  }
  (**(code **)(*piStack_114 + 0x120))();
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar72 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar72 != (GameEventManager *)0x0) &&
      (pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode,
      pGVar73 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar73->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    if (cubeChange[4] != (CubePickingInfo *)0x0) {
      (**(code **)((int)cubeChange[4] + 0xc))();
    }
    return;
  }
code_?:
  func_?();
  pcVar112 = (code *)swi(3);
  (*pcVar112)();
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
    if ((pGVar4->fields).OnChangeState != (Action_1_LaserPointerState_ *)0x0) {
      pAVar5 = (pGVar4->fields).OnChangeState;
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

