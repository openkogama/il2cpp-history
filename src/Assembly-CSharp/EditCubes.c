
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
    in_stack_12 = 0x119c;
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
    in_stack_12 = 0x1044;
    iVar15 = 0;
    func_?();
    cRam_? = '\x01';
  }
  pCVar17 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar17->cubeChange != 0) &&
     (pCVar17->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    unaff_ESI = (Vector3__Array *)pCVar17->OnEditCubeChange;
    in_stack_12 = (undefined2)((uint)pCVar17->cubeChange >> 0x10);
    (*(code *)unaff_ESI->max_length)();
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
  if (pMVar20 != (ModelCursor3D *)0x0) {
    unaff_ESI = (Vector3__Array *)e;
    if ((pMVar20->fields).indentArea == (IndentArea *)0x0 ||
        (this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_12 = 0x1044;
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        in_stack_12 = 0;
        pVStack_21 = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)pVStack_21;
      }
      if (cRam_? == '\0') {
        in_stack_12 = 0x1044;
        func_?();
        cRam_? = '\x01';
      }
      if (e != (CubeModelingStateMachine *)0x0) {
        if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
           ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar22 != (MVCubeModelBase *)0x0) {
          pGVar23 = (pMVar22->fields)._.gameObject;
          bStack_24 = (bool)pGVar23;
          uStack_25 = (undefined2)((uint)pGVar23 >> 8);
          uStack_26 = (undefined1)((uint)pGVar23 >> 0x18);
          pCVar27 = (e->fields)._SelectedCube_k__BackingField;
          pVStack_21 = *(Vector3__Array **)&(pCVar27->fields).iLocalPos;
          uStack_28 = (IndentArea *)CONCAT22((pCVar27->fields).iLocalPos.z,(undefined2)uStack_28);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IVar29.z = uStack_28._2_2_;
          IVar29._0_4_ = pVStack_21;
          pVVar30 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              (&VStack_31,
                               (GameObject *)
                               CONCAT22((short)(CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)) >>
                                               0x10),(short)CONCAT21(uStack_25,bStack_24)),IVar29,
                               (MethodInfo *)0x0);
          uVar32 = pVVar30->x;
          uVar33 = pVVar30->y;
          fVar3 = pVVar30->z;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((this_01 != (MainCameraManager *)0x0) &&
             (pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_01,(MethodInfo *)0x0),
             pTVar34 != (Transform *)0x0)) {
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_31,pTVar34,(MethodInfo *)0x0);
            uVar35 = pVVar30->x;
            uVar36 = pVVar30->y;
            VStack_31.z = pVVar30->z - fVar3;
            VStack_31.y = (float)uVar36 - (float)uVar33;
            VStack_31.x = (float)uVar35 - (float)uVar32;
            fVar37 = (float10)func_?();
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            pVStack_21 = (Vector3__Array *)(float)fVar37;
            if (pMVar22 != (MVCubeModelBase *)0x0) {
              in_stack_12 = (undefined2)((uint)pMVar22 >> 0x10);
              puVar38 = (undefined8 *)(*(code *)(pMVar22->klass->vtable).get_Scale.method)();
              pMVar20 = (this->fields).modelCursor;
              if ((float)((ulonglong)*puVar38 >> 0x20) * _UNK_? < (float)pVStack_21) {
                (this->fields).mouseSensitivity = 0.1325;
                if ((pMVar20 != (ModelCursor3D *)0x0) &&
                   (pIVar39 = (pMVar20->fields).indentArea, pIVar39 != (IndentArea *)0x0)) {
                  (pIVar39->fields).size = 1.0;
                  goto code_?;
                }
              }
              else {
                (this->fields).mouseSensitivity = 0.0225;
                if ((pMVar20 != (ModelCursor3D *)0x0) &&
                   (pIVar39 = (pMVar20->fields).indentArea, pIVar39 != (IndentArea *)0x0)) {
                  (pIVar39->fields).size = 0.5;
code_?:
                  uStack_4 = (ushort)((uint)fVar3 >> 0x10);
                  bVar40 = false;
                  uStack_28 = (IndentArea *)((uint)uStack_28 & 0xffffff);
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
                        pVStack_21 = (Vector3__Array *)
                                     MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                               (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                        fVar3 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                           (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                        fVar41 = (float)pVStack_21 * _UNK_?;
                        bStack_24 = SUB41(fVar3,0);
                        uStack_25 = (undefined2)((uint)fVar3 >> 8);
                        uStack_26 = (undefined1)((uint)fVar3 >> 0x18);
                        fVar3 = fVar3 * _UNK_?;
                        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                        pVStack_21 = (Vector3__Array *)(this->fields).mouseSensitivity;
                        uStack_42 = SUB42(pMVar22,0);
                        uStack_43 = (undefined1)((uint)pMVar22 >> 0x10);
                        uStack_44 = (undefined1)((uint)pMVar22 >> 0x18);
                        pCVar27 = (this->fields).movingEdgeCube;
                        iVar15 = 0;
                        uVar45 = 0;
                        if (pCVar27 != (CubePickingInfo *)0x0) {
                          bVar19 = (pCVar27->fields).pickedEdgeIndex0;
                          bStack_24 = (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1;
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pMVar46 = (MethodInfo *)((int)&uStack_13 + 3);
                          showUnlockNotification = (bool)pVStack_21;
                          uVar47 = (undefined2)((uint)pVStack_21 >> 0x10);
                          pGVar23 = (GameObject *)&(this->fields).deltaAccum;
                          mousePositionDelta.z._2_2_ = uVar45;
                          mousePositionDelta.z._0_2_ = iVar15;
                          mousePositionDelta.y =
                               (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),
                                                     CONCAT24(SUB42(fVar3,0),fVar41)) >> 0x20);
                          mousePositionDelta.x = fVar41;
                          pVStack_21 = (Vector3__Array *)
                                       SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                                 ((MVCubeModelBase *)
                                                  CONCAT13(uStack_44,CONCAT12(uStack_43,uStack_42)),
                                                  pCVar27,mousePositionDelta,&(this->fields).delta,
                                                  (float *)pGVar23,(float)pVStack_21,(bool *)pMVar46
                                                  ,bVar19,bStack_24,
                                                  (EditCubeChange__Enum *)&stack0xffffff64,
                                                  (MethodInfo *)0x0);
                          if (pVStack_21 == (Vector3__Array *)0x0) {
                            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                            if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
                            iVar48 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                               (pMVar22,(MethodInfo *)0x0);
                            CubeModelTool::CubeModelTool_SendCubeEvent
                                      (iVar48,EVar18,(MethodInfo *)0x0);
                          }
                          if ((uStack_13._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
                            (this->fields).edgeHasMoved = 1;
                          }
                          if (pVStack_21 == (Vector3__Array *)0x1) {
                            pCVar27 = (this->fields).movingEdgeCube;
                            if (pCVar27 != (CubePickingInfo *)0x0) {
                              pVStack_21 = *(Vector3__Array **)&(pCVar27->fields).iLocalPos;
                              uStack_28._2_2_ = (pCVar27->fields).iLocalPos.z;
                              iVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                              bStack_24 = (bool)iVar48;
                              uStack_25 = (undefined2)((uint)iVar48 >> 8);
                              uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos.z = (int16_t)pVStack_21;
                              localPos._0_4_ = &stack0xffffff6c;
                              IVar29 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos,CONCAT22(uVar1,uStack_28._2_2_),
                                                  (MethodInfo *)
                                                  CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)))
                              ;
                              pIVar49 = IVar29._0_4_;
                              uVar50 = pIVar49->x;
                              uVar51 = pIVar49->y;
                              uStack_43 = (undefined1)uVar51;
                              uStack_44 = (undefined1)((ushort)uVar51 >> 8);
                              uStack_28 = (IndentArea *)CONCAT22(pIVar49->z,(undefined2)uStack_28);
                              uStack_42 = uVar50;
                              CVar52 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_CanAddCubeAt
                                                 (e,*pIVar49,(this->fields).movingEdgeCube,
                                                  (MethodInfo *)0x0);
                              bStack_24 = (bool)CVar52;
                              uStack_25 = (undefined2)(CVar52 >> 8);
                              uStack_26 = (undefined1)(CVar52 >> 0x18);
                              if (CVar52 == CanPerformCubeActionResult__Enum_Yes) {
                                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                if (pMVar22 != (MVCubeModelBase *)0x0) {
                                  pos.y._0_1_ = uStack_43;
                                  pos.x = uStack_42;
                                  pos.y._1_1_ = uStack_44;
                                  pos.z = uStack_28._2_2_;
                                  pVStack_21 = (Vector3__Array *)
                                               MVCubeModelBase::MVCubeModelBase_GetCube
                                                         (pMVar22,pos,(MethodInfo *)0x0);
                                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?(TypeInfo__MV__WorldObject__CubeBase);
                                  }
                                  bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                           CubeBase_op_Equality
                                                     ((CubeBase *)pVStack_21,(CubeBase *)0x0,
                                                      (MethodInfo *)0x0);
                                  if (bVar19 == 0) goto code_?;
                                  pos_00.y._0_1_ = uStack_43;
                                  pos_00.x = uStack_42;
                                  pos_00.y._1_1_ = uStack_44;
                                  pos_00.z = uStack_28._2_2_;
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,pos_00,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0
                                            );
                                  pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                  bStack_24 = (bool)pMVar22;
                                  uStack_25 = (undefined2)((uint)pMVar22 >> 8);
                                  uStack_26 = (undefined1)((uint)pMVar22 >> 0x18);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  if (pCVar27 != (CubePickingInfo *)0x0) {
                                    pVStack_21 = (Vector3__Array *)(pCVar27->fields).cube;
                                    FVar53 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pVVar54 = Cube::Cube_GetCorners
                                                        ((Cube *)pVStack_21,FVar53,(MethodInfo *)0x0
                                                        );
                                    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pBVar55 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                              CubeDataPacker_CornersToByteArray
                                                        (pVVar54,(MethodInfo *)0x0);
                                    uVar56 = CubeModelingStateMachine::
                                             CubeModelingStateMachine_get_CurrentMaterialId
                                                       (e,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)CONCAT31(pVStack_21._1_3_,uVar56)
                                    ;
                                    unaff_ESI = (Vector3__Array *)
                                                Cube::Cube_CreateMaterialArray
                                                          (uVar56,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)func_?();
                                    Cube::Cube__ctor((Cube *)pVStack_21,pBVar55,
                                                     (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                                    iVar57 = CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                                    if (iVar57 != 0) {
                                      pos_07.y = (short)(CONCAT13(uStack_44,
                                                                  CONCAT12(uStack_43,uStack_42)) >>
                                                        0x10);
                                      pos_07.x = uStack_42;
                                      pos_07.z = uStack_28._2_2_;
                                      MVCubeModelBase::MVCubeModelBase_AddCube
                                                ((MVCubeModelBase *)
                                                 CONCAT22((short)((uint)iVar57 >> 0x10),
                                                          (short)CONCAT21(uStack_25,bStack_24)),
                                                 pos_07,(CubeBase *)pVStack_21,(MethodInfo *)0x0);
                                      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                      if (pMVar22 != (MVCubeModelBase *)0x0) {
                                        iVar48 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                           (pMVar22,(MethodInfo *)0x0);
                                        CubeModelTool::CubeModelTool_SendCubeEvent
                                                  (iVar48,EditCubeChange__Enum_CubeAdded,
                                                   (MethodInfo *)0x0);
                                        pCVar27 = (this->fields).movingEdgeCube;
                                        pCVar58 = (CubePickingInfo *)func_?();
                                        CubePickingInfo::CubePickingInfo__ctor_1
                                                  (pCVar58,pCVar27,(MethodInfo *)0x0);
                                        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                        unaff_ESI = (Vector3__Array *)e;
                                        if (pMVar22 != (MVCubeModelBase *)0x0) {
                                          pos_08.y = (short)(CONCAT13(uStack_44,
                                                                      CONCAT12(uStack_43,uStack_42))
                                                            >> 0x10);
                                          pos_08.x = uStack_42;
                                          pos_08.z = uStack_28._2_2_;
                                          pCVar59 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                              (pMVar22,pos_08,(MethodInfo *)0x0);
                                          pCVar59 = Cube::Cube_Clone_1(pCVar59,(MethodInfo *)0x0);
                                          if (pCVar58 != (CubePickingInfo *)0x0) {
                                            (pCVar58->fields).cube = pCVar59;
                                            func_?();
                                            (pCVar58->fields).iLocalPos.x = uStack_42;
                                            (pCVar58->fields).iLocalPos.y =
                                                 (short)(CONCAT13(uStack_44,
                                                                  CONCAT12(uStack_43,uStack_42)) >>
                                                        0x10);
                                            (pCVar58->fields).iLocalPos.z = uStack_28._2_2_;
                                            pCVar27 = (this->fields).movingEdgeCube;
                                            if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                                (MVCubeModelBase *)0x0)) {
                                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                        ((e->fields).
                                                         _TargetCubeModel_k__BackingField,
                                                         (pCVar27->fields).iLocalPos,
                                                         (pCVar27->fields).cube,(MethodInfo *)0x0);
                                              (this->fields).movingEdgeCube = pCVar58;
                                              func_?();
                                              pVStack_21 = (Vector3__Array *)
                                                           (this->fields).movingEdgeCube;
                                              if (pVStack_21 != (Vector3__Array *)0x0) {
                                                pVVar30 = Cube::Cube_GetFaceAxis
                                                                    (&VStack_31,
                                                                     pVStack_21->max_length,
                                                                     (MethodInfo *)0x0);
                                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_21,
                                                                    -0.75,*pVVar30,
                                                                    (CubeOutOfBoundState__Enum *)
                                                                    &stack0xffffff38,
                                                                    (MethodInfo *)0x0);
code_?:
                                                pCVar27 = (this->fields).movingEdgeCube;
                                                unaff_ESI = (Vector3__Array *)e;
                                                if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                                   ((e->fields)._TargetCubeModel_k__BackingField !=
                                                    (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar27->fields).iLocalPos,
                                                             (pCVar27->fields).cube,
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
                                VStack_31.z = (float)CONCAT13(uStack_26,
                                                              CONCAT21(uStack_25,bStack_24));
                                VStack_31.y = -NAN;
                                VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
                                str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                 ((Enum *)&VStack_31,(MethodInfo *)0x0);
                                uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                                uVar45 = (undefined2)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >>
                                         0x10);
code_?:
                                mscorlib.dll::System::String::String_Concat_3
                                          ((String *)CONCAT22(uVar45,uVar1),str1,(MethodInfo *)0x0)
                                ;
                                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar20 = (this->fields).modelCursor;
                                if ((pMVar22 != (MVCubeModelBase *)0x0) &&
                                   (pMVar20 != (ModelCursor3D *)0x0)) {
                                  iPos.y._0_1_ = uStack_43;
                                  iPos.x = uStack_42;
                                  iPos.y._1_1_ = uStack_44;
                                  iPos.z = uStack_28._2_2_;
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar20,iPos,
                                             (pMVar22->fields)._.gameObject,
                                             CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)) == 2,
                                             (MethodInfo *)0x0);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  unaff_ESI = (Vector3__Array *)
                                              (e->fields)._TargetCubeModel_k__BackingField;
                                  if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                     (unaff_ESI != (Vector3__Array *)0x0)) {
                                    pCVar59 = (pCVar27->fields).cube;
code_?:
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((MVCubeModelBase *)unaff_ESI,
                                               (pCVar27->fields).iLocalPos,pCVar59,(MethodInfo *)0x0
                                              );
                                    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                    func_?();
                                    break;
                                  }
                                }
                              }
                            }
                          }
                          else if (pVStack_21 == (Vector3__Array *)0x4) {
                            pCVar27 = (this->fields).movingEdgeCube;
                            if (pCVar27 != (CubePickingInfo *)0x0) {
                              pVStack_21 = *(Vector3__Array **)&(pCVar27->fields).iLocalPos;
                              uStack_28._2_2_ = (pCVar27->fields).iLocalPos.z;
                              iVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                              bStack_24 = (bool)iVar48;
                              uStack_25 = (undefined2)((uint)iVar48 >> 8);
                              uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_02.z = (int16_t)pVStack_21;
                              localPos_02._0_4_ = &stack0xffffff6c;
                              IVar29 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_02,CONCAT22(uVar47,uStack_28._2_2_),
                                                  (MethodInfo *)
                                                  CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)))
                              ;
                              puVar60 = IVar29._0_4_;
                              uVar61 = *(undefined4 *)puVar60;
                              uStack_42 = (undefined2)uVar61;
                              uStack_43 = (undefined1)((uint)uVar61 >> 0x10);
                              uStack_44 = (undefined1)((uint)uVar61 >> 0x18);
                              uStack_28 = (IndentArea *)
                                          CONCAT22(*(undefined2 *)((int)puVar60 + 4),
                                                   (undefined2)uStack_28);
                              requestedCubePos_00.z._1_1_ =
                                   (char)((ushort)*(undefined2 *)((int)puVar60 + 4) >> 8);
                              requestedCubePos_00._0_5_ = *puVar60;
                              CVar52 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_CanAddCubeAt
                                                 (e,requestedCubePos_00,
                                                  (this->fields).movingEdgeCube,(MethodInfo *)0x0);
                              bStack_24 = (bool)CVar52;
                              uStack_25 = (undefined2)(CVar52 >> 8);
                              uStack_26 = (undefined1)(CVar52 >> 0x18);
                              if (CVar52 != CanPerformCubeActionResult__Enum_Yes) {
code_?:
                                VStack_31.z = (float)CONCAT13(uStack_26,
                                                              CONCAT21(uStack_25,bStack_24));
                                VStack_31.y = -NAN;
                                VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
                                str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                 ((Enum *)&VStack_31,(MethodInfo *)0x0);
                                uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                                uVar45 = (undefined2)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >>
                                         0x10);
                                goto code_?;
                              }
                              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                              if (pMVar22 != (MVCubeModelBase *)0x0) {
                                pos_03.y._0_1_ = uStack_43;
                                pos_03.x = uStack_42;
                                pos_03.y._1_1_ = uStack_44;
                                pos_03.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
                                pos_03.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
                                pVStack_21 = (Vector3__Array *)
                                             MVCubeModelBase::MVCubeModelBase_GetCube
                                                       (pMVar22,pos_03,(MethodInfo *)0x0);
                                if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_op_Equality
                                                   ((CubeBase *)pVStack_21,(CubeBase *)0x0,
                                                    (MethodInfo *)0x0);
                                if (bVar19 == 0) goto code_?;
                                pCVar27 = (this->fields).movingEdgeCube;
                                if (pCVar27 != (CubePickingInfo *)0x0) {
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,(pCVar27->fields).iLocalPos,
                                             AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                  pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                  bStack_24 = (bool)pMVar22;
                                  uStack_25 = (undefined2)((uint)pMVar22 >> 8);
                                  uStack_26 = (undefined1)((uint)pMVar22 >> 0x18);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  if (pCVar27 != (CubePickingInfo *)0x0) {
                                    pVStack_21 = (Vector3__Array *)(pCVar27->fields).cube;
                                    FVar53 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pVVar54 = Cube::Cube_GetCorners
                                                        ((Cube *)pVStack_21,FVar53,(MethodInfo *)0x0
                                                        );
                                    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pBVar55 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                              CubeDataPacker_CornersToByteArray
                                                        (pVVar54,(MethodInfo *)0x0);
                                    uVar56 = CubeModelingStateMachine::
                                             CubeModelingStateMachine_get_CurrentMaterialId
                                                       (e,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)CONCAT31(pVStack_21._1_3_,uVar56)
                                    ;
                                    unaff_ESI = (Vector3__Array *)
                                                Cube::Cube_CreateMaterialArray
                                                          (uVar56,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)func_?();
                                    Cube::Cube__ctor((Cube *)pVStack_21,pBVar55,
                                                     (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                                    iVar57 = CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                                    if (iVar57 != 0) {
                                      pos_12.y = (short)(CONCAT13(uStack_44,
                                                                  CONCAT12(uStack_43,uStack_42)) >>
                                                        0x10);
                                      pos_12.x = uStack_42;
                                      pos_12.z = uStack_28._2_2_;
                                      MVCubeModelBase::MVCubeModelBase_AddCube
                                                ((MVCubeModelBase *)
                                                 CONCAT22((short)((uint)iVar57 >> 0x10),
                                                          (short)CONCAT21(uStack_25,bStack_24)),
                                                 pos_12,(CubeBase *)pVStack_21,(MethodInfo *)0x0);
                                      pCVar27 = (this->fields).movingEdgeCube;
                                      pCVar58 = (CubePickingInfo *)func_?();
                                      CubePickingInfo::CubePickingInfo__ctor_1
                                                (pCVar58,pCVar27,(MethodInfo *)0x0);
                                      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                      unaff_ESI = (Vector3__Array *)e;
                                      if (pMVar22 != (MVCubeModelBase *)0x0) {
                                        pos_06.y = (short)(CONCAT13(uStack_44,
                                                                    CONCAT12(uStack_43,uStack_42))
                                                          >> 0x10);
                                        pos_06.x = uStack_42;
                                        pos_06.z = uStack_28._2_2_;
                                        pCVar59 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                            (pMVar22,pos_06,(MethodInfo *)0x0);
                                        pCVar59 = Cube::Cube_Clone_1(pCVar59,(MethodInfo *)0x0);
                                        if (pCVar58 != (CubePickingInfo *)0x0) {
                                          (pCVar58->fields).cube = pCVar59;
                                          func_?();
                                          (pCVar58->fields).iLocalPos.x = uStack_42;
                                          (pCVar58->fields).iLocalPos.y =
                                               (short)(CONCAT13(uStack_44,
                                                                CONCAT12(uStack_43,uStack_42)) >>
                                                      0x10);
                                          (pCVar58->fields).iLocalPos.z = uStack_28._2_2_;
                                          pCVar27 = (this->fields).movingEdgeCube;
                                          if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                             ((e->fields)._TargetCubeModel_k__BackingField !=
                                              (MVCubeModelBase *)0x0)) {
                                            MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                      ((e->fields)._TargetCubeModel_k__BackingField,
                                                       (pCVar27->fields).iLocalPos,
                                                       (pCVar27->fields).cube,(MethodInfo *)0x0);
                                            (this->fields).movingEdgeCube = pCVar58;
                                            func_?();
                                            pVStack_21 = (Vector3__Array *)
                                                         (this->fields).movingEdgeCube;
                                            if (pVStack_21 != (Vector3__Array *)0x0) {
                                              pVVar30 = Cube::Cube_GetFaceAxis
                                                                  (&VStack_31,pVStack_21->max_length
                                                                   ,(MethodInfo *)0x0);
                                              axis_00.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                                              axis_00._0_9_ = *(unkbyte9 *)pVVar30;
                                              axis_00.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                                              Cube::Cube_MoveFace((CubePickingInfo *)pVStack_21,-1.0
                                                                  ,axis_00,(
                                                  CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                  (MethodInfo *)0x0);
                                              pVStack_21 = (Vector3__Array *)
                                                           (this->fields).movingEdgeCube;
                                              if (pVStack_21 != (Vector3__Array *)0x0) {
                                                pVVar30 = Cube::Cube_GetFaceAxis
                                                                    (&VStack_31,
                                                                     pVStack_21->max_length,
                                                                     (MethodInfo *)0x0);
                                                axis_02.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                                                axis_02._0_10_ = *(unkbyte10 *)pVVar30;
                                                Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_21,
                                                                    -0.75,axis_02,
                                                                    (CubeOutOfBoundState__Enum *)
                                                                    &stack0xffffff48,
                                                                    (MethodInfo *)0x0);
                                                pCVar27 = (this->fields).movingEdgeCube;
                                                if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                                   ((e->fields)._TargetCubeModel_k__BackingField !=
                                                    (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar27->fields).iLocalPos,
                                                             (pCVar27->fields).cube,
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
                          else if (pVStack_21 == (Vector3__Array *)0x5) {
                            pCVar27 = (this->fields).movingEdgeCube;
                            if (pCVar27 != (CubePickingInfo *)0x0) {
                              pVStack_21 = *(Vector3__Array **)&(pCVar27->fields).iLocalPos;
                              uStack_28._2_2_ = (pCVar27->fields).iLocalPos.z;
                              iVar48 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                              bStack_24 = (bool)iVar48;
                              uStack_25 = (undefined2)((uint)iVar48 >> 8);
                              uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_01.z = (int16_t)pVStack_21;
                              localPos_01._0_4_ = &stack0xffffff6c;
                              IVar29 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_01,CONCAT22(uVar47,uStack_28._2_2_),
                                                  (MethodInfo *)
                                                  CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)))
                              ;
                              puVar60 = IVar29._0_4_;
                              uVar61 = *(undefined4 *)puVar60;
                              uStack_42 = (undefined2)uVar61;
                              uStack_43 = (undefined1)((uint)uVar61 >> 0x10);
                              uStack_44 = (undefined1)((uint)uVar61 >> 0x18);
                              uStack_28 = (IndentArea *)
                                          CONCAT22(*(undefined2 *)((int)puVar60 + 4),
                                                   (undefined2)uStack_28);
                              requestedCubePos.z._1_1_ =
                                   (char)((ushort)*(undefined2 *)((int)puVar60 + 4) >> 8);
                              requestedCubePos._0_5_ = *puVar60;
                              CVar52 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_CanAddCubeAt
                                                 (e,requestedCubePos,(this->fields).movingEdgeCube,
                                                  (MethodInfo *)0x0);
                              bStack_24 = (bool)CVar52;
                              uStack_25 = (undefined2)(CVar52 >> 8);
                              uStack_26 = (undefined1)(CVar52 >> 0x18);
                              if (CVar52 != CanPerformCubeActionResult__Enum_Yes) {
code_?:
                                VStack_31.z = (float)CONCAT13(uStack_26,
                                                              CONCAT21(uStack_25,bStack_24));
                                VStack_31.y = -NAN;
                                VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
                                str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                 ((Enum *)&VStack_31,(MethodInfo *)0x0);
                                uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                                uVar45 = (undefined2)
                                         ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >>
                                         0x10);
                                goto code_?;
                              }
                              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                              if (pMVar22 != (MVCubeModelBase *)0x0) {
                                pos_02.y._0_1_ = uStack_43;
                                pos_02.x = uStack_42;
                                pos_02.y._1_1_ = uStack_44;
                                pos_02.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
                                pos_02.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
                                pVStack_21 = (Vector3__Array *)
                                             MVCubeModelBase::MVCubeModelBase_GetCube
                                                       (pMVar22,pos_02,(MethodInfo *)0x0);
                                if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_op_Equality
                                                   ((CubeBase *)pVStack_21,(CubeBase *)0x0,
                                                    (MethodInfo *)0x0);
                                if (bVar19 == 0) goto code_?;
                                pCVar27 = (this->fields).movingEdgeCube;
                                if (pCVar27 != (CubePickingInfo *)0x0) {
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,(pCVar27->fields).iLocalPos,
                                             AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                  pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                  bStack_24 = (bool)pMVar22;
                                  uStack_25 = (undefined2)((uint)pMVar22 >> 8);
                                  uStack_26 = (undefined1)((uint)pMVar22 >> 0x18);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  if (pCVar27 != (CubePickingInfo *)0x0) {
                                    pVStack_21 = (Vector3__Array *)(pCVar27->fields).cube;
                                    FVar53 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pVVar54 = Cube::Cube_GetCorners
                                                        ((Cube *)pVStack_21,FVar53,(MethodInfo *)0x0
                                                        );
                                    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pBVar55 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                              CubeDataPacker_CornersToByteArray
                                                        (pVVar54,(MethodInfo *)0x0);
                                    uVar56 = CubeModelingStateMachine::
                                             CubeModelingStateMachine_get_CurrentMaterialId
                                                       (e,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)CONCAT31(pVStack_21._1_3_,uVar56)
                                    ;
                                    unaff_ESI = (Vector3__Array *)
                                                Cube::Cube_CreateMaterialArray
                                                          (uVar56,(MethodInfo *)0x0);
                                    pVStack_21 = (Vector3__Array *)func_?();
                                    Cube::Cube__ctor((Cube *)pVStack_21,pBVar55,
                                                     (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                                    iVar57 = CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                                    if (iVar57 != 0) {
                                      pos_11.y = (short)(CONCAT13(uStack_44,
                                                                  CONCAT12(uStack_43,uStack_42)) >>
                                                        0x10);
                                      pos_11.x = uStack_42;
                                      pos_11.z = uStack_28._2_2_;
                                      MVCubeModelBase::MVCubeModelBase_AddCube
                                                ((MVCubeModelBase *)
                                                 CONCAT22((short)((uint)iVar57 >> 0x10),
                                                          (short)CONCAT21(uStack_25,bStack_24)),
                                                 pos_11,(CubeBase *)pVStack_21,(MethodInfo *)0x0);
                                      pCVar27 = (this->fields).movingEdgeCube;
                                      pCVar58 = (CubePickingInfo *)func_?();
                                      CubePickingInfo::CubePickingInfo__ctor_1
                                                (pCVar58,pCVar27,(MethodInfo *)0x0);
                                      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                      unaff_ESI = (Vector3__Array *)e;
                                      if (pMVar22 != (MVCubeModelBase *)0x0) {
                                        pos_05.y = (short)(CONCAT13(uStack_44,
                                                                    CONCAT12(uStack_43,uStack_42))
                                                          >> 0x10);
                                        pos_05.x = uStack_42;
                                        pos_05.z = uStack_28._2_2_;
                                        pCVar59 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                            (pMVar22,pos_05,(MethodInfo *)0x0);
                                        pCVar59 = Cube::Cube_Clone_1(pCVar59,(MethodInfo *)0x0);
                                        if (pCVar58 != (CubePickingInfo *)0x0) {
                                          (pCVar58->fields).cube = pCVar59;
                                          func_?();
                                          (pCVar58->fields).iLocalPos.x = uStack_42;
                                          (pCVar58->fields).iLocalPos.y =
                                               (short)(CONCAT13(uStack_44,
                                                                CONCAT12(uStack_43,uStack_42)) >>
                                                      0x10);
                                          (pCVar58->fields).iLocalPos.z = uStack_28._2_2_;
                                          pCVar27 = (this->fields).movingEdgeCube;
                                          if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                             ((e->fields)._TargetCubeModel_k__BackingField !=
                                              (MVCubeModelBase *)0x0)) {
                                            MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                      ((e->fields)._TargetCubeModel_k__BackingField,
                                                       (pCVar27->fields).iLocalPos,
                                                       (pCVar27->fields).cube,(MethodInfo *)0x0);
                                            (this->fields).movingEdgeCube = pCVar58;
                                            func_?();
                                            pVStack_21 = (Vector3__Array *)
                                                         (this->fields).movingEdgeCube;
                                            if (pVStack_21 != (Vector3__Array *)0x0) {
                                              pVVar30 = Cube::Cube_GetFaceAxis
                                                                  (&VStack_31,pVStack_21->max_length
                                                                   ,(MethodInfo *)0x0);
                                              axis.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                                              axis._0_9_ = *(unkbyte9 *)pVVar30;
                                              axis.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                                              Cube::Cube_MoveFace((CubePickingInfo *)pVStack_21,-1.0
                                                                  ,axis,&CStack_16,(MethodInfo *)0x0
                                                                 );
                                              pCVar27 = (this->fields).movingEdgeCube;
                                              bStack_24 = (bool)pCVar27;
                                              uStack_25 = (undefined2)((uint)pCVar27 >> 8);
                                              uStack_26 = (undefined1)((uint)pCVar27 >> 0x18);
                                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                                pVStack_21 = (Vector3__Array *)
                                                             Cube::Cube_GetFaceAxis
                                                                       (&VStack_31,
                                                                        (pCVar27->fields).pickedFace
                                                                        ,(MethodInfo *)0x0);
                                                pCVar27 = (this->fields).movingEdgeCube;
                                                if (pCVar27 != (CubePickingInfo *)0x0) {
                                                  iVar48 = (((MVCubeModelBase__Fields *)
                                                            &pVStack_21->bounds)->_)._.id;
                                                  axis_01.z._1_1_ = (char)((uint)iVar48 >> 8);
                                                  axis_01._0_9_ = *(unkbyte9 *)pVStack_21;
                                                  axis_01.z._2_2_ = (short)((uint)iVar48 >> 0x10);
                                                  Cube::Cube_MoveVertex
                                                            ((CubePickingInfo *)
                                                             CONCAT13(uStack_26,
                                                                      CONCAT21(uStack_25,bStack_24))
                                                             ,-0.75,axis_01,
                                                             (pCVar27->fields).pickedEdgeIndex0,
                                                             (pCVar27->fields).pickedEdgeIndex1,
                                                             &CStack_16,(MethodInfo *)0x0);
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
                          else if (pVStack_21 == (Vector3__Array *)0x2) {
                            CVar52 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_CanRemoveCubeAt
                                               (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                            pCVar27 = (this->fields).movingEdgeCube;
                            if (CVar52 == CanPerformCubeActionResult__Enum_Yes) {
                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                pVStack_21 = *(Vector3__Array **)&(pCVar27->fields).iLocalPos;
                                iStack_62 = (int16_t)((uint)pVStack_21 >> 0x10);
                                iVar15 = (pCVar27->fields).iLocalPos.z;
                                pCVar27 = (this->fields).movingEdgeCube;
                                if (pCVar27 != (CubePickingInfo *)0x0) {
                                  iVar48 = (pCVar27->fields).pickedFace;
                                  bStack_24 = (bool)iVar48;
                                  uStack_25 = (undefined2)((uint)iVar48 >> 8);
                                  uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  sVar63 = 0;
                                  sVar64 = 0;
                                  sVar65 = 0;
                                  if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                            ((IntVector *)&stack0xffffff6c,(int32_t)pVStack_21,
                                             CONCAT22(iVar15,iStack_62),CONCAT22(uStack_4,iVar15),
                                             (MethodInfo *)0x0);
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  pVVar30 = Cube::Cube_GetFaceAxis
                                                      (&VStack_31,
                                                       CONCAT22((short)(CONCAT13(uStack_26,
                                                                                 CONCAT21(uStack_25,
                                                                                          bStack_24)
                                                                                ) >> 0x10),
                                                                (short)CONCAT21(uStack_25,bStack_24)
                                                               ),(MethodInfo *)0x0);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  uVar66 = pVVar30->x;
                                  uVar67 = pVVar30->y;
                                  sVar63 = sVar63 - (short)(int)(float)uVar66;
                                  sVar64 = sVar64 - (short)(int)(float)uVar67;
                                  uStack_28 = (IndentArea *)
                                              CONCAT22(sVar65 - (short)(int)pVVar30->z,
                                                       (undefined2)uStack_28);
                                  if (pCVar27 != (CubePickingInfo *)0x0) {
                                    pos_04.z._1_1_ =
                                         (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8);
                                    pos_04._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_04,AudioActions__Enum_CubeRemoved,
                                               (MethodInfo *)0x0);
                                    pCVar27 = (this->fields).movingEdgeCube;
                                    if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                       ((e->fields)._TargetCubeModel_k__BackingField !=
                                        (MVCubeModelBase *)0x0)) {
                                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 (pCVar27->fields).iLocalPos,(MethodInfo *)0x0);
                                      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                      if (pMVar22 != (MVCubeModelBase *)0x0) {
                                        pos_13.y = sVar64;
                                        pos_13.x = sVar63;
                                        pos_13.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
                                        pos_13.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
                                        pCVar59 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                            (pMVar22,pos_13,(MethodInfo *)0x0);
                                        bStack_24 = (bool)pCVar59;
                                        uStack_25 = (undefined2)((uint)pCVar59 >> 8);
                                        uStack_26 = (undefined1)((uint)pCVar59 >> 0x18);
                                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                 CubeBase_op_Inequality
                                                           ((CubeBase *)pCVar59,(CubeBase *)0x0,
                                                            (MethodInfo *)0x0);
                                        if (bVar19 == 0) {
                                          (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                          func_?();
                                        }
                                        else {
                                          pCVar27 = (this->fields).movingEdgeCube;
                                          pVVar54 = (Vector3__Array *)func_?();
                                          pVStack_21 = pVVar54;
                                          CubePickingInfo::CubePickingInfo__ctor_1
                                                    ((CubePickingInfo *)pVVar54,pCVar27,
                                                     (MethodInfo *)0x0);
                                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0)
                                          {
                                            func_?();
                                          }
                                          pCVar59 = Cube::Cube_Clone_1((Cube *)CONCAT22((short)(
                                                  CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24))
                                                  >> 0x10),(short)CONCAT21(uStack_25,bStack_24)),
                                                  (MethodInfo *)0x0);
                                          unaff_ESI = (Vector3__Array *)0x0;
                                          if (pVVar54 == (Vector3__Array *)0x0)
                                          goto code_?;
                                          (((MVCubeModelBase__Fields *)&pVVar54->bounds)->_)._.id =
                                               (int32_t)pCVar59;
                                          func_?();
                                          pVVar54->vector[2].z = (float)CONCAT22(sVar64,sVar63);
                                          *(int16_t *)&pVVar54->vector[3].x = uStack_28._2_2_;
                                          (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar54
                                          ;
                                          func_?();
                                        }
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if (((pCVar27 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) &&
                                    ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)(this->fields).modelCursor,
                                         (pCVar27->fields).iLocalPos,pGVar23,showUnlockNotification,
                                         pMVar46);
                              pCVar27 = (this->fields).movingEdgeCube;
                              unaff_ESI = (Vector3__Array *)
                                          (e->fields)._TargetCubeModel_k__BackingField;
                              if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                 (unaff_ESI != (Vector3__Array *)0x0)) {
                                pCVar59 = (this->fields).prevCubeState;
                                goto code_?;
                              }
                            }
                          }
                          else {
                            if (pVStack_21 != (Vector3__Array *)0x0) break;
                            CVar52 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_CanRemoveCubeAt
                                               (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                            bStack_24 = (bool)CVar52;
                            uStack_25 = (undefined2)(CVar52 >> 8);
                            uStack_26 = (undefined1)(CVar52 >> 0x18);
                            pCVar27 = (this->fields).movingEdgeCube;
                            if ((pCVar27 != (CubePickingInfo *)0x0) &&
                               (pCVar59 = (pCVar27->fields).cube, pCVar59 != (Cube *)0x0)) {
                              pVStack_21 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                           CubeBase_get_Corners
                                                     ((CubeBase *)pCVar59,(MethodInfo *)0x0);
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              bVar19 = Cube::Cube_IsCollapsed(pVStack_21,(MethodInfo *)0x0);
                              iVar57 = CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                              if ((bVar19 == 0) || (iVar57 != 1)) {
                                pCVar27 = (this->fields).movingEdgeCube;
                                if (iVar57 == 2) goto code_?;
                                if (pCVar27 != (CubePickingInfo *)0x0) {
                                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                            (e,(pCVar27->fields).iLocalPos,
                                             AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                                  pCVar27 = (this->fields).movingEdgeCube;
                                  unaff_ESI = (Vector3__Array *)
                                              (e->fields)._TargetCubeModel_k__BackingField;
                                  if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                     (unaff_ESI != (Vector3__Array *)0x0)) {
                                    iVector.z._1_1_ =
                                         (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8);
                                    iVector._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((MVCubeModelBase *)unaff_ESI,iVector,
                                               (pCVar27->fields).cube,(MethodInfo *)0x0);
                                    break;
                                  }
                                }
                              }
                              else {
                                pCVar27 = (this->fields).movingEdgeCube;
                                if (((pCVar27 != (CubePickingInfo *)0x0) &&
                                    (pMVar22 = (e->fields)._TargetCubeModel_k__BackingField,
                                    pMVar22 != (MVCubeModelBase *)0x0)) &&
                                   ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                  pMVar46 = (MethodInfo *)0x0;
                                  showUnlockNotification = 0;
                                  pGVar23 = (pMVar22->fields)._.gameObject;
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar56 = (this->fields).prevMaterial;
                        pVStack_21 = (Vector3__Array *)CONCAT31(pVStack_21._1_3_,uVar56);
                        (this->fields).currentInternalState = 2;
                        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                  (e,uVar56,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                  (1,(MethodInfo *)0x0);
                        value = (WebHeaderCollection *)(this->fields).movingEdgeCube;
                        if ((this->fields).edgeHasMoved == 0) {
                          uVar1 = 0x1045;
                          System.dll::System::Net::WebResponseStream::WebResponseStream_set_Headers
                                    ((WebResponseStream *)e,value,(MethodInfo *)0x0);
                          pCVar27 = (e->fields)._SelectedCube_k__BackingField;
                          if (pCVar27 != (CubePickingInfo *)0x0) {
                            pos_10.z._1_1_ = (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8);
                            pos_10._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            uStack_6 = 2;
                            EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                               (e,(MethodInfo *)0x0);
                            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                            if (pMVar22 != (MVCubeModelBase *)0x0) {
                              iVar48 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar22,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar48,EVar18,(MethodInfo *)0x0);
                              if (EVar18 != EditCubeChange__Enum_None) {
code_?:
                                uStack_6 = 0xffffffff;
                                goto code_?;
                              }
                              pCVar27 = (e->fields)._SelectedCube_k__BackingField;
                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                pVStack_21._0_2_ = (pCVar27->fields).iLocalPos.x;
                                pVStack_21._2_2_ = (pCVar27->fields).iLocalPos.y;
                                iVar15 = (pCVar27->fields).iLocalPos.z;
                                uStack_43 = (undefined1)iVar15;
                                uStack_44 = (undefined1)((ushort)iVar15 >> 8);
                                iVar48 = (((e->fields)._SelectedCube_k__BackingField)->fields).
                                         pickedFace;
                                bStack_24 = (bool)iVar48;
                                uStack_25 = (undefined2)((uint)iVar48 >> 8);
                                uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_03.z = (int16_t)pVStack_21;
                                localPos_03._0_4_ = &stack0xffffff6c;
                                IVar29 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_03,
                                                    CONCAT22(uVar1,CONCAT11(uStack_44,uStack_43)),
                                                    (MethodInfo *)
                                                    CONCAT22((short)(CONCAT13(uStack_26,
                                                                              CONCAT21(uStack_25,
                                                                                       bStack_24))
                                                                    >> 0x10),
                                                             (short)CONCAT21(uStack_25,bStack_24)));
                                pVStack_21 = IVar29._0_4_;
                                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar20 = (this->fields).modelCursor;
                                if ((pMVar22 != (MVCubeModelBase *)0x0) &&
                                   (pMVar20 != (ModelCursor3D *)0x0)) {
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar20,*(IntVector *)pVStack_21,
                                             (pMVar22->fields)._.gameObject,0,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                        else {
                          CVar52 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_CanRemoveCubeAt
                                             (e,(CubePickingInfo *)value,(MethodInfo *)0x0);
                          pCVar27 = (this->fields).movingEdgeCube;
                          bStack_24 = (bool)CVar52;
                          uStack_25 = (undefined2)(CVar52 >> 8);
                          uStack_26 = (undefined1)(CVar52 >> 0x18);
                          if (CVar52 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
                            if (((pCVar27 != (CubePickingInfo *)0x0) &&
                                (pMVar22 = (e->fields)._TargetCubeModel_k__BackingField,
                                pMVar22 != (MVCubeModelBase *)0x0)) &&
                               ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)(this->fields).modelCursor,
                                         (pCVar27->fields).iLocalPos,(pMVar22->fields)._.gameObject,
                                         1,(MethodInfo *)0x0);
code_?:
                              (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                              func_?();
                              (this->fields).edgeHasMoved = 0;
                              break;
                            }
                          }
                          else if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                  (pCVar59 = (pCVar27->fields).cube, pCVar59 != (Cube *)0x0)) {
                            uVar1 = 0;
                            uVar45 = 0;
                            pVStack_21 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_get_Corners((CubeBase *)pCVar59,(MethodInfo *)0x0)
                            ;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              in_stack_12 = 0x1045;
                              func_?();
                            }
                            bVar19 = Cube::Cube_IsCollapsed(pVStack_21,(MethodInfo *)0x0);
                            pCVar27 = (this->fields).movingEdgeCube;
                            if (bVar19 == 0) {
                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                          (e,(pCVar27->fields).iLocalPos,
                                           AudioActions__Enum_EdgeMoved,(MethodInfo *)0x0);
                                pCVar27 = (this->fields).movingEdgeCube;
                                unaff_ESI = (Vector3__Array *)
                                            (e->fields)._TargetCubeModel_k__BackingField;
                                if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                   (unaff_ESI != (Vector3__Array *)0x0)) {
                                  pCVar59 = (pCVar27->fields).cube;
                                  uVar68 = SUB41(pCVar59,0);
                                  uVar69 = (undefined1)((uint)pCVar59 >> 8);
                                  in_stack_12 = (undefined2)((uint)pCVar59 >> 0x10);
code_?:
                                  iVector_02.z._1_1_ =
                                       (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8);
                                  iVector_02._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            ((MVCubeModelBase *)unaff_ESI,iVector_02,
                                             (Cube *)CONCAT22(uVar45,uVar1),
                                             (MethodInfo *)
                                             CONCAT22(in_stack_12,CONCAT11(uVar69,uVar68)));
                                  goto code_?;
                                }
                              }
                            }
                            else if (CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)) == 0) {
                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                          (e,(pCVar27->fields).iLocalPos,
                                           AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                                pCVar27 = (this->fields).movingEdgeCube;
                                unaff_ESI = (Vector3__Array *)
                                            (e->fields)._TargetCubeModel_k__BackingField;
                                if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                   (unaff_ESI != (Vector3__Array *)0x0)) {
                                  pos_15.z._1_1_ =
                                       (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8);
                                  pos_15._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                                  MVCubeModelBase::MVCubeModelBase_RemoveCube
                                            ((MVCubeModelBase *)unaff_ESI,pos_15,(MethodInfo *)0x0);
                                  goto code_?;
                                }
                              }
                            }
                            else if (((pCVar27 != (CubePickingInfo *)0x0) &&
                                     (pMVar22 = (e->fields)._TargetCubeModel_k__BackingField,
                                     pMVar22 != (MVCubeModelBase *)0x0)) &&
                                    ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)(this->fields).modelCursor,
                                         (pCVar27->fields).iLocalPos,(pMVar22->fields)._.gameObject,
                                         0,(MethodInfo *)0x0);
                              pCVar27 = (this->fields).movingEdgeCube;
                              if (pCVar27 != (CubePickingInfo *)0x0) {
                                pIVar49 = &(pCVar27->fields).iLocalPos;
                                uVar1 = pIVar49->x;
                                uVar45 = pIVar49->y;
                                iVar15 = (pCVar27->fields).iLocalPos.z;
                                uVar68 = (undefined1)iVar15;
                                uVar69 = (undefined1)((ushort)iVar15 >> 8);
                                pos_14.z._1_1_ = uVar69;
                                pos_14._0_5_ = *(undefined5 *)pIVar49;
                                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                          (e,pos_14,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                                pCVar27 = (this->fields).movingEdgeCube;
                                unaff_ESI = (Vector3__Array *)
                                            (e->fields)._TargetCubeModel_k__BackingField;
                                if ((pCVar27 != (CubePickingInfo *)0x0) &&
                                   (unaff_ESI != (Vector3__Array *)0x0)) goto code_?;
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
                        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                  (1,(MethodInfo *)0x0);
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
                         (bVar19 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0),
                         bVar19 != 0)) {
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
                        EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                           (e,(MethodInfo *)0x0);
                        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar22 != (MVCubeModelBase *)0x0) {
                          iVar48 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                             (pMVar22,(MethodInfo *)0x0);
                          CubeModelTool::CubeModelTool_SendCubeEvent
                                    (iVar48,EVar18,(MethodInfo *)0x0);
                          if (EVar18 != EditCubeChange__Enum_None) {
                            bVar40 = true;
                            uStack_6 = 0xffffffff;
                            break;
                          }
                          pCVar27 = (e->fields)._SelectedCube_k__BackingField;
                          if (pCVar27 != (CubePickingInfo *)0x0) {
                            pVStack_21._0_2_ = (pCVar27->fields).iLocalPos.x;
                            pVStack_21._2_2_ = (pCVar27->fields).iLocalPos.y;
                            iVar15 = (pCVar27->fields).iLocalPos.z;
                            uStack_43 = (undefined1)iVar15;
                            uStack_44 = (undefined1)((ushort)iVar15 >> 8);
                            iVar48 = (((e->fields)._SelectedCube_k__BackingField)->fields).
                                     pickedFace;
                            bStack_24 = (bool)iVar48;
                            uStack_25 = (undefined2)((uint)iVar48 >> 8);
                            uStack_26 = (undefined1)((uint)iVar48 >> 0x18);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            localPos_00.z = (int16_t)pVStack_21;
                            localPos_00._0_4_ = &stack0xffffff6c;
                            IVar29 = Cube::Cube_GetCubePosAboveFace
                                               (localPos_00,
                                                CONCAT22(in_stack_70,
                                                         CONCAT11(uStack_44,uStack_43)),
                                                (MethodInfo *)
                                                CONCAT22((short)(CONCAT13(uStack_26,
                                                                          CONCAT21(uStack_25,
                                                                                   bStack_24)) >>
                                                                0x10),
                                                         (short)CONCAT21(uStack_25,bStack_24)));
                            pVStack_21 = IVar29._0_4_;
                            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                            pMVar20 = (this->fields).modelCursor;
                            if ((pMVar22 != (MVCubeModelBase *)0x0) &&
                               (pMVar20 != (ModelCursor3D *)0x0)) {
                              iPos_00.z._1_1_ =
                                   (char)((ushort)*(undefined2 *)&pVStack_21->monitor >> 8);
                              iPos_00._0_5_ = *(undefined5 *)pVStack_21;
                              ModelCursor::ModelCursor_SetErrorCursor
                                        ((ModelCursor *)pMVar20,iPos_00,
                                         (pMVar22->fields)._.gameObject,0,(MethodInfo *)0x0);
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
                       (pVStack_21 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                               ((MethodInfo *)0x0),
                       _UNK_? < (float)pVStack_21 - (this->fields).prevMouseUpTime)) {
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
                        pVStack_21 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
                        fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                           (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                        bStack_24 = SUB41(fVar3,0);
                        uStack_25 = (undefined2)((uint)fVar3 >> 8);
                        uStack_26 = (undefined1)((uint)fVar3 >> 0x18);
                        if (((float)pVStack_21 != 0.0) ||
                           ((float)((uint)fVar3 & _UNK_?) != 0.0)) {
                          pCVar27 = (this->fields).prevSelectedCube;
                          if (pCVar27 != (CubePickingInfo *)0x0) {
                            pCVar59 = (pCVar27->fields).cube;
                            bStack_24 = (bool)pCVar59;
                            uStack_25 = (undefined2)((uint)pCVar59 >> 8);
                            uStack_26 = (undefined1)((uint)pCVar59 >> 0x18);
                            pVStack_21 = (Vector3__Array *)
                                         (((this->fields).prevSelectedCube)->fields).pickedFace;
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            bStack_24 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                        CubeBase_GetMaterial
                                                  ((CubeBase *)
                                                   CONCAT22((short)(CONCAT13(uStack_26,
                                                                             CONCAT21(uStack_25,
                                                                                      bStack_24)) >>
                                                                   0x10),
                                                            (short)CONCAT21(uStack_25,bStack_24)),
                                                   (Face__Enum)pVStack_21,(MethodInfo *)0x0);
                            pMVar71 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar71 != (MVNetworkGame *)0x0) &&
                               (this_00 = (pMVar71->fields)._MaterialRepository_k__BackingField,
                               this_00 != (MVMaterialRepository *)0x0)) {
                              bVar19 = MVMaterialRepository::
                                       MVMaterialRepository_IsMaterialUnlocked_1
                                                 (this_00,bStack_24,(MethodInfo *)0x0);
                              if (bVar19 == 0) {
                                pCVar27 = (this->fields).prevSelectedCube;
code_?:
                                if (((pCVar27 == (CubePickingInfo *)0x0) ||
                                    (pMVar22 = (e->fields)._TargetCubeModel_k__BackingField,
                                    pMVar22 == (MVCubeModelBase *)0x0)) ||
                                   ((this->fields).modelCursor == (ModelCursor3D *)0x0))
                                goto code_?;
                                iPos_01.z._1_1_ = (char)((ushort)(pCVar27->fields).iLocalPos.z >> 8)
                                ;
                                iPos_01._0_5_ = *(undefined5 *)&(pCVar27->fields).iLocalPos;
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                                           (pMVar22->fields)._.gameObject,1,(MethodInfo *)0x0);
                              }
                              else {
                                uVar56 = CubeModelingStateMachine::
                                         CubeModelingStateMachine_get_CurrentMaterialId
                                                   (e,(MethodInfo *)0x0);
                                (this->fields).prevMaterial = uVar56;
                                CubeModelingStateMachine::
                                CubeModelingStateMachine_set_CurrentMaterialId
                                          (e,bStack_24,(MethodInfo *)0x0);
                                (this->fields).movingEdgeCube = (this->fields).prevSelectedCube;
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
                    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                    if (bVar19 == 0) {
                      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
                      bVar19 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                                         ((pMVar22->fields)._.gameObject,(IntVector *)&puStack_14,
                                          (MethodInfo *)0x0);
                      if ((bVar19 != 0) &&
                         (requestedCubePos_01.z = iVar15, requestedCubePos_01._0_4_ = puStack_14,
                         CVar52 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                            (e,requestedCubePos_01,(MethodInfo *)0x0),
                         CVar52 == CanPerformCubeActionResult__Enum_Yes)) {
                        pos_09.z = iVar15;
                        pos_09._0_4_ = puStack_14;
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                        puVar72 = puStack_14;
                        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                        uStack_43 = (undefined1)iVar15;
                        uStack_44 = (undefined1)((ushort)iVar15 >> 8);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        pVStack_21 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                     CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pBVar55 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                  CubeDataPacker_CornersToByteArray(pVStack_21,(MethodInfo *)0x0);
                        bStack_24 = (bool)pBVar55;
                        uStack_25 = (undefined2)((uint)pBVar55 >> 8);
                        uStack_26 = (undefined1)((uint)pBVar55 >> 0x18);
                        uVar56 = CubeModelingStateMachine::
                                 CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0)
                        ;
                        pVStack_21 = (Vector3__Array *)CONCAT31(pVStack_21._1_3_,uVar56);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        unaff_ESI = (Vector3__Array *)
                                    Cube::Cube_CreateMaterialArray
                                              ((uint8_t)pVStack_21,(MethodInfo *)0x0);
                        pVStack_21 = (Vector3__Array *)func_?();
                        Cube::Cube__ctor((Cube *)pVStack_21,
                                         (Byte__Array *)
                                         CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24)),
                                         (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                        if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
                        pos_01.z._0_1_ = uStack_43;
                        pos_01._0_4_ = puVar72;
                        pos_01.z._1_1_ = uStack_44;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  (pMVar22,pos_01,(CubeBase *)pVStack_21,(MethodInfo *)0x0);
                      }
                    }
                    else {
                      (this->fields).currentInternalState = 2;
                    }
                  }
                  if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
                    pCVar59 = (Cube *)0x0;
                  }
                  else {
                    pCVar59 = (((this->fields).movingEdgeCube)->fields).cube;
                    unaff_ESI = (Vector3__Array *)e;
                    if (pCVar59 == (Cube *)0x0) goto code_?;
                    pCVar59 = Cube::Cube_Clone(pCVar59,(MethodInfo *)0x0);
                  }
                  (this->fields).prevCubeState = pCVar59;
                  func_?();
                  (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
                  func_?();
                  if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
                  pVVar54 = (Vector3__Array *)(this->fields).movingEdgeCube;
                  pVVar73 = (Vector3__Array *)(this->fields).modelCursor;
                  pVStack_21 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
                  pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                  unaff_ESI = (Vector3__Array *)e;
                  if (pMVar22 != (MVCubeModelBase *)0x0) {
                    unaff_ESI = (Vector3__Array *)(pMVar22->fields)._.gameObject;
                    pVVar74 = (Vector3__Array *)(this->fields).currentInternalState;
                    bStack_24 = (bool)unaff_ESI;
                    uStack_25 = (undefined2)((uint)unaff_ESI >> 8);
                    uStack_26 = (undefined1)((uint)unaff_ESI >> 0x18);
                    if (pVVar54 == (Vector3__Array *)0x0) {
                      iVar57 = (((MVCubeModelBase__Fields *)&pVVar73->bounds)->_)._.id;
                      if (pVStack_21 == (Vector3__Array *)0x0) {
                        if ((iVar57 != 0) && (*(GameObject **)(iVar57 + 0x14) != (GameObject *)0x0))
                        {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (*(GameObject **)(iVar57 + 0x14),0,(MethodInfo *)0x0);
                          fVar3 = pVVar73->vector[0].x;
                          unaff_ESI = pVVar73;
                          if ((fVar3 != 0.0) &&
                             (pGVar23 = *(GameObject **)((int)fVar3 + 0x14),
                             pGVar23 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar23,0,(MethodInfo *)0x0);
code_?:
                            unaff_ESI = pVVar73;
                            if ((CellCursor *)pVVar73->max_length != (CellCursor *)0x0) {
                              CellCursor::CellCursor_UpdateCursor
                                        ((CellCursor *)pVVar73->max_length,(MethodInfo *)0x0);
                              unaff_ESI = pVStack_21;
                              if (pVVar74 == (Vector3__Array *)0x3) {
                                fVar75 = 0.0;
                                fVar3 = 0.0;
                                fVar41 = 0.0;
                                bVar19 = DrawPlane::DrawPlane_Pick
                                                   ((Vector3 *)&stack0xffffff3c,(MethodInfo *)0x0);
                                if (bVar19 == 0) {
code_?:
                                  *unaff_FS_OFFSET = uStack_8;
                                  return;
                                }
                                pGVar76 = MVGameControllerBase::
                                          MVGameControllerBase_get_GameEventManager
                                                    ((MethodInfo *)0x0);
                                unaff_ESI = pVVar73;
                                if (((pGVar76 != (GameEventManager *)0x0) &&
                                    (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                                    pGVar77 !=
                                    (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                   (pGVar78 = (pGVar77->fields).LaserCommands,
                                   pGVar78 !=
                                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                    *)0x0)) {
                                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                  ::
                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                            (pGVar78,0.2,(MethodInfo *)0x0);
                                  pGVar76 = MVGameControllerBase::
                                            MVGameControllerBase_get_GameEventManager
                                                      ((MethodInfo *)0x0);
                                  if (((pGVar76 != (GameEventManager *)0x0) &&
                                      (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                                      pGVar77 !=
                                      (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                     (pGVar78 = (pGVar77->fields).LaserCommands,
                                     pGVar78 !=
                                     (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                                    to_00.y = fVar41;
                                    to_00.x = fVar3;
                                    to_00.z = fVar75;
                                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                    ::
                                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                              (pGVar78,to_00,(MethodInfo *)0x0);
                                    *unaff_FS_OFFSET = uStack_8;
                                    return;
                                  }
                                }
                              }
                              else if (pVVar54 == (Vector3__Array *)0x0) {
                                if (bVar40) {
                                  pGVar76 = MVGameControllerBase::
                                            MVGameControllerBase_get_GameEventManager
                                                      ((MethodInfo *)0x0);
code_?:
                                  unaff_ESI = pVVar73;
                                  if (((pGVar76 != (GameEventManager *)0x0) &&
                                      (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                                      pGVar77 !=
                                      (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                     (pGVar78 = (pGVar77->fields).LaserCommands,
                                     pGVar78 !=
                                     (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                    ::
                                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                              (pGVar78,0.2,(MethodInfo *)0x0);
                                    *unaff_FS_OFFSET = uStack_8;
                                    return;
                                  }
                                }
                                else {
                                  if (pVStack_21 == (Vector3__Array *)0x0) goto code_?;
                                  pGVar76 = MVGameControllerBase::
                                            MVGameControllerBase_get_GameEventManager
                                                      ((MethodInfo *)0x0);
                                  if (((pGVar76 != (GameEventManager *)0x0) &&
                                      (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                                      pGVar77 !=
                                      (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                     (pGVar78 = (pGVar77->fields).LaserCommands,
                                     pGVar78 !=
                                     (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                    ::
                                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                              (pGVar78,*(Vector3 *)&unaff_ESI->vector[1].z,
                                               (MethodInfo *)0x0);
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
                                FVar53 = pVVar54->max_length;
                                pCVar59 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar54->bounds)->_)
                                                  ._.id;
                                fVar3 = pVVar54->vector[2].z;
                                iVar15 = SUB42(fVar3,0);
                                uVar45 = (undefined2)((uint)fVar3 >> 0x10);
                                uVar1 = *(undefined2 *)&pVVar54->vector[3].x;
                                uStack_43 = (undefined1)uVar1;
                                uStack_44 = (undefined1)((ushort)uVar1 >> 8);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                iVector_01.z._1_1_ = uStack_44;
                                iVector_01.z._0_1_ = uStack_43;
                                unaff_ESI = (Vector3__Array *)
                                            CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                                uVar47 = (undefined2)((uint)unaff_ESI >> 0x10);
                                uVar1 = (undefined2)CONCAT21(uStack_25,bStack_24);
                                iVector_01.y = uVar45;
                                iVector_01.x = iVar15;
                                pVVar73 = Cube::Cube_GetFaceVerticesWorld
                                                    ((GameObject *)CONCAT22(uVar47,uVar1),pCVar59,
                                                     FVar53,iVector_01,(MethodInfo *)0x0);
                                if (pVVar73 != (Vector3__Array *)0x0) {
                                  bVar79 = 0;
                                  uVar68 = 0;
                                  if (pVVar73->max_length == 0) goto code_?;
                                  uVar80 = pVVar73->max_length;
                                  bVar79 = uVar80 == 0;
                                  uVar68 = SBORROW4(uVar80,1);
                                  if (uVar80 < 2) goto code_?;
                                  VStack_31.x = pVVar73->vector[1].x;
                                  VStack_31.y = pVVar73->vector[1].y;
                                  VStack_31.z = pVVar73->vector[1].z;
                                  uVar81 = pVVar73->vector[0].x;
                                  uVar82 = pVVar73->vector[0].y;
                                  fVar3 = VStack_31.x + (float)uVar81;
                                  fVar41 = VStack_31.y + (float)uVar82;
                                  fVar75 = VStack_31.z + pVVar73->vector[0].z;
                                  uVar80 = pVVar73->max_length;
                                  bVar79 = uVar80 < 2;
                                  uVar68 = SBORROW4(uVar80,2);
                                  if (uVar80 < 3) goto code_?;
                                  VStack_31.x = pVVar73->vector[2].x;
                                  VStack_31.y = pVVar73->vector[2].y;
                                  VStack_31.z = pVVar73->vector[2].z;
                                  fVar3 = VStack_31.x + fVar3;
                                  fVar41 = VStack_31.y + fVar41;
                                  uVar80 = pVVar73->max_length;
                                  bVar79 = uVar80 < 3;
                                  uVar68 = SBORROW4(uVar80,3);
                                  if (uVar80 < 4) goto code_?;
                                  VStack_31.x = pVVar73->vector[3].x;
                                  VStack_31.y = pVVar73->vector[3].y;
                                  fVar83 = (VStack_31.x + fVar3) * _UNK_?;
                                  fVar3 = (VStack_31.y + fVar41) * _UNK_?;
                                  pVVar73 = (Vector3__Array *)
                                            ((pVVar73->vector[3].z + VStack_31.z + fVar75) *
                                            _UNK_?);
                                  bStack_24 = SUB41(fVar3,0);
                                  uStack_25 = (undefined2)((uint)fVar3 >> 8);
                                  uStack_26 = (undefined1)((uint)fVar3 >> 0x18);
                                  VStack_31.z = (float)pVVar73;
                                  pVStack_21 = pVVar73;
                                  if (pVVar54->vector[0].x == 0.0) {
                                    fStack_84 = fVar83;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    pVVar85 = TypeInfo__UnityEngine__Vector3->static_fields;
                                    uVar86 = (pVVar85->upVector).x;
                                    uVar87 = (pVVar85->upVector).y;
                                    VStack_31.z = (pVVar85->upVector).z + (float)pVStack_21;
                                    VStack_31.y = (float)uVar87 +
                                                  (float)CONCAT13(uStack_26,
                                                                  CONCAT21(uStack_25,bStack_24));
                                    VStack_31.x = (float)uVar86 + fVar83;
                                    if ((TypeInfo__UnityEngine__Debug->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    start_00.y._0_1_ = SUB41(fVar3,0);
                                    start_00.x = fStack_84;
                                    start_00.y._1_1_ = (char)((uint)fVar3 >> 8);
                                    start_00.y._2_2_ = (short)((uint)fVar3 >> 0x10);
                                    start_00.z = (float)pVVar73;
                                    end_00.z = VStack_31.z;
                                    end_00.x = VStack_31.x;
                                    end_00.y = VStack_31.y;
                                    color_00.g = (float)_UNK_?;
                                    color_00.r = (float)_UNK_?;
                                    color_00.b = (float)_UNK_?;
                                    color_00.a._0_1_ = (char)_UNK_?;
                                    color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                    color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                    UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                    Debug_2_DrawLine_1(start_00,end_00,color_00,(MethodInfo *)0x0);
code_?:
                                    pGVar76 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
                                    unaff_ESI = pVVar73;
                                    if (((pGVar76 != (GameEventManager *)0x0) &&
                                        (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                                        pGVar77 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar78 = (pGVar77->fields).LaserCommands,
                                       pGVar78 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      to.y._0_2_ = SUB42(fVar3,0);
                                      to.x = fStack_84;
                                      to.y._2_2_ = (short)((uint)fVar3 >> 0x10);
                                      to.z._0_1_ = (char)pVVar73;
                                      to.z._1_1_ = (char)((uint)pVVar73 >> 8);
                                      to.z._2_2_ = (short)((uint)pVVar73 >> 0x10);
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                (pGVar78,to,(MethodInfo *)0x0);
                                      pGVar76 = MVGameControllerBase::
                                                MVGameControllerBase_get_GameEventManager
                                                          ((MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                  }
                                  else {
                                    pCVar59 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar54->bounds)
                                                      ->_)._.id;
                                    fStack_88 = (float)pVVar54->max_length;
                                    fVar3 = pVVar54->vector[0].x;
                                    fVar41 = pVVar54->vector[2].z;
                                    iVar15 = SUB42(fVar41,0);
                                    uVar89 = (undefined2)((uint)fVar41 >> 0x10);
                                    uVar45 = *(undefined2 *)&pVVar54->vector[3].x;
                                    uStack_43 = (undefined1)uVar45;
                                    uStack_44 = (undefined1)((ushort)uVar45 >> 8);
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    iVector_00.z._1_1_ = uStack_44;
                                    iVector_00.z._0_1_ = uStack_43;
                                    iVector_00.y = uVar89;
                                    iVector_00.x = iVar15;
                                    pVVar73 = Cube::Cube_GetEdgeVerticesWorld
                                                        ((GameObject *)CONCAT22(uVar47,uVar1),
                                                         pCVar59,(Face__Enum)fStack_88,
                                                         (Edge__Enum)fVar3,iVector_00,
                                                         (MethodInfo *)0x0);
                                    if (*(bool *)&pVVar54->vector[0].y == 0) {
                                      if (pVVar73 != (Vector3__Array *)0x0) {
                                        if (*(char *)((int)&pVVar54->vector[0].y + 1) == '\0') {
                                          bVar79 = 0;
                                          uVar68 = 0;
                                          if (pVVar73->max_length == 0) goto code_?;
                                          uVar80 = pVVar73->max_length;
                                          bVar79 = uVar80 == 0;
                                          uVar68 = SBORROW4(uVar80,1);
                                          if (uVar80 < 2) goto code_?;
                                          VStack_31.x = pVVar73->vector[1].x;
                                          VStack_31.y = pVVar73->vector[1].y;
                                          uVar90 = pVVar73->vector[0].x;
                                          uVar91 = pVVar73->vector[0].y;
                                          fVar92 = (pVVar73->vector[1].z + pVVar73->vector[0].z) *
                                                   _UNK_?;
                                          fStack_84 = (VStack_31.x + (float)uVar90) * _UNK_?;
                                          fVar3 = (VStack_31.y + (float)uVar91) * _UNK_?;
                                        }
                                        else {
                                          uVar80 = pVVar73->max_length;
                                          bVar79 = uVar80 == 0;
                                          uVar68 = SBORROW4(uVar80,1);
                                          if (uVar80 < 2) goto code_?;
                                          uVar93 = pVVar73->vector[1].x;
                                          fVar3 = pVVar73->vector[1].y;
                                          fVar92 = pVVar73->vector[1].z;
                                          fStack_84 = (float)uVar93;
                                        }
code_?:
                                        pVVar73 = (Vector3__Array *)
                                                  (((float)pVStack_21 - fVar92) * _UNK_? +
                                                  fVar92);
                                        fStack_84 = (fVar83 - fStack_84) * _UNK_? + fStack_84
                                        ;
                                        fVar3 = ((float)CONCAT13(uStack_26,
                                                                  CONCAT21(uStack_25,bStack_24)) -
                                                 fVar3) * _UNK_? + fVar3;
                                        VStack_31.z = (float)pVVar73;
                                        goto code_?;
                                      }
                                    }
                                    else if (pVVar73 != (Vector3__Array *)0x0) {
                                      bVar79 = 0;
                                      uVar68 = 0;
                                      if (pVVar73->max_length == 0) goto code_?;
                                      uVar94 = pVVar73->vector[0].x;
                                      uVar95 = pVVar73->vector[0].y;
                                      fVar92 = pVVar73->vector[0].z;
                                      iStack_96 = (int16_t)uVar95;
                                      iStack_62 = (int16_t)((uint)uVar95 >> 0x10);
                                      fVar41 = pVVar73->vector[0].x;
                                      fVar75 = pVVar73->vector[0].y;
                                      fVar3 = (float)uVar94;
                                      fVar97 = fVar92;
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      pVVar85 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      uVar98 = (pVVar85->upVector).x;
                                      uVar99 = (pVVar85->upVector).y;
                                      VStack_31.z = (pVVar85->upVector).z + fVar97;
                                      VStack_31.y = (float)uVar99 + fVar75;
                                      VStack_31.x = (float)uVar98 + fVar41;
                                      if ((TypeInfo__UnityEngine__Debug->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      start.y._0_2_ = iStack_96;
                                      start.x = fVar3;
                                      start.y._2_2_ = iStack_62;
                                      start.z = fVar92;
                                      end.z = VStack_31.z;
                                      end.x = VStack_31.x;
                                      end.y = VStack_31.y;
                                      color.g = (float)_UNK_?;
                                      color.r = (float)_UNK_?;
                                      color.b = (float)_UNK_?;
                                      color.a._0_1_ = (char)_UNK_?;
                                      color.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                      color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                      UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                      Debug_2_DrawLine_1(start,end,color,(MethodInfo *)0x0);
                                      fStack_84 = (float)uVar94;
                                      fVar3 = (float)uVar95;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else if ((iVar57 != 0) &&
                              (*(GameObject **)(iVar57 + 0x14) != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (*(GameObject **)(iVar57 + 0x14),1,(MethodInfo *)0x0);
                        this_03 = (FaceCursor *)
                                  (((MVCubeModelBase__Fields *)&pVVar73->bounds)->_)._.id;
                        unaff_ESI = pVVar73;
                        if (this_03 != (FaceCursor *)0x0) {
                          pGVar23 = (GameObject *)CONCAT13(uStack_26,CONCAT21(uStack_25,bStack_24));
                          info = pVStack_21;
code_?:
                          FaceCursor::FaceCursor_UpdateCursor
                                    (this_03,(CubePickingInfo *)info,pGVar23,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                    else {
                      uStack_28 = (IndentArea *)pVVar73->vector[0].x;
                      if (uStack_28 != (IndentArea *)0x0) {
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          func_?();
                          uStack_13 = &
                                      MethodInfo__System__Collections__Generic__List<int>__ToArray__
                          ;
                          func_?();
                          func_?();
                          func_?();
                          cRam_? = '\x01';
                        }
                        pCVar59 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar54->bounds)->_)._.id;
                        fStack_100 = (float)pVVar54->max_length;
                        fVar3 = pVVar54->vector[2].z;
                        uVar1 = *(undefined2 *)&pVVar54->vector[3].x;
                        uStack_43 = (undefined1)uVar1;
                        uStack_44 = (undefined1)((ushort)uVar1 >> 8);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        iVector_03.z._0_1_ = uStack_43;
                        iVector_03._0_4_ = fVar3;
                        iVector_03.z._1_1_ = uStack_44;
                        pVVar73 = Cube::Cube_GetFaceVerticesWorld
                                            ((GameObject *)unaff_ESI,pCVar59,(Face__Enum)fStack_100,
                                             iVector_03,(MethodInfo *)0x0);
                        uStack_42 = SUB42(pVVar73,0);
                        uStack_43 = (undefined1)((uint)pVVar73 >> 0x10);
                        uStack_44 = (undefined1)((uint)pVVar73 >> 0x18);
                        unaff_ESI = (Vector3__Array *)func_?();
                        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                        Metadata::__Il2CppFullySharedGenericType]::
                        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                    *)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__List<int>__List__);
                        pGVar23 = (uStack_28->fields).gameObject;
                        if ((((pGVar23 != (GameObject *)0x0) &&
                             (this_02 = (MeshFilter *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponent_1
                                                  (pGVar23,
                                                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                                  ), this_02 != (MeshFilter *)0x0)) &&
                            (pVVar73 = (Vector3__Array *)
                                       UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                       MeshFilter_get_mesh(this_02,(MethodInfo *)0x0),
                            pVVar73 != (Vector3__Array *)0x0)) &&
                           (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                      ((Mesh *)pVVar73,(MethodInfo *)0x0),
                           pMVar46 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                           unaff_ESI != (Vector3__Array *)0x0)) {
                          unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
                          iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
                          uVar80 = unaff_ESI->max_length;
                          if (iVar57 != 0) {
                            if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                              unaff_ESI->max_length = uVar80 + 1;
                              bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                              uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                              if (!(bool)bVar79) goto code_?;
                              *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 0;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        ((List_1_System_Int32_ *)unaff_ESI,0,
                                         pMVar46->klass->rgctx_data[0xe].method);
                            }
                            pMVar46 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                            unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
                            iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
                            uVar80 = unaff_ESI->max_length;
                            if (iVar57 != 0) {
                              if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                                unaff_ESI->max_length = uVar80 + 1;
                                bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                                uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                                if (!(bool)bVar79) goto code_?;
                                *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 3;
                              }
                              else {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                List_1_System_Int32__AddWithResize
                                          ((List_1_System_Int32_ *)unaff_ESI,3,
                                           pMVar46->klass->rgctx_data[0xe].method);
                              }
                              pMVar46 = 
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                              unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
                              iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
                              uVar80 = unaff_ESI->max_length;
                              if (iVar57 != 0) {
                                if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                                  unaff_ESI->max_length = uVar80 + 1;
                                  bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                                  uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                                  if (!(bool)bVar79) goto code_?;
                                  *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 2;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]
                                  ::List_1_System_Int32__AddWithResize
                                            ((List_1_System_Int32_ *)unaff_ESI,2,
                                             pMVar46->klass->rgctx_data[0xe].method);
                                }
                                pMVar46 = 
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
                                iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
                                uVar80 = unaff_ESI->max_length;
                                if (iVar57 != 0) {
                                  if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                                    unaff_ESI->max_length = uVar80 + 1;
                                    bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                                    uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                                    if (!(bool)bVar79) goto code_?;
                                    *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 2;
                                  }
                                  else {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Int32]::List_1_System_Int32__AddWithResize
                                              ((List_1_System_Int32_ *)unaff_ESI,2,
                                               pMVar46->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar46 = 
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                  unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
                                  iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id
                                  ;
                                  uVar80 = unaff_ESI->max_length;
                                  if (iVar57 != 0) {
                                    if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                                      unaff_ESI->max_length = uVar80 + 1;
                                      bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                                      uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                                      if (!(bool)bVar79) goto code_?;
                                      *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 1;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Int32]::List_1_System_Int32__AddWithResize
                                                ((List_1_System_Int32_ *)unaff_ESI,1,
                                                 pMVar46->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar46 = 
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                    unaff_ESI->vector[0].x =
                                         (float)((int)unaff_ESI->vector[0].x + 1);
                                    iVar57 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.
                                             id;
                                    uVar80 = unaff_ESI->max_length;
                                    if (iVar57 != 0) {
                                      if (uVar80 < *(uint *)(iVar57 + 0xc)) {
                                        unaff_ESI->max_length = uVar80 + 1;
                                        bVar79 = uVar80 < *(uint *)(iVar57 + 0xc);
                                        uVar68 = SBORROW4(uVar80,*(uint *)(iVar57 + 0xc));
                                        if (!(bool)bVar79) goto code_?;
                                        *(undefined4 *)(iVar57 + 0x10 + uVar80 * 4) = 0;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)unaff_ESI,0,
                                                   pMVar46->klass->rgctx_data[0xe].method);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_vertices((Mesh *)pVVar73,
                                                        (Vector3__Array *)
                                                        CONCAT13(uStack_44,
                                                                 CONCAT12(uStack_43,uStack_42)),
                                                        (MethodInfo *)0x0);
                                      value_02 = IndentArea::IndentArea_SetUVs
                                                           (uStack_28,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                                ((Mesh *)pVVar73,value_02,(MethodInfo *)0x0);
                                      value_03 = mscorlib.dll::System::Collections::Generic::
                                                 List`1[UnityEngine::UIElements::Internal::
                                                 MultiColumnCollectionHeader+ViewState+ColumnState]
                                                 ::
                                                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                           ((
                                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                                  *)unaff_ESI,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_triangles((Mesh *)pVVar73,(Int32__Array *)value_03,
                                                         (MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateNormals((Mesh *)pVVar73,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateBounds((Mesh *)pVVar73,(MethodInfo *)0x0);
                                      iVar57 = CONCAT13(uStack_44,CONCAT12(uStack_43,uStack_42));
                                      unaff_ESI = pVVar73;
                                      if (iVar57 != 0) {
                                        uVar80 = *(uint *)(iVar57 + 0xc);
                                        bVar79 = uVar80 < 2;
                                        uVar68 = SBORROW4(uVar80,2);
                                        if (uVar80 < 3) goto code_?;
                                        fStack_84 = (float)*(undefined8 *)(iVar57 + 0x28);
                                        fVar3 = ((float)((ulonglong)*(undefined8 *)(iVar57 + 0x28)
                                                         >> 0x20) -
                                                 (float)((ulonglong)*(undefined8 *)(iVar57 + 0x10)
                                                        >> 0x20)) * _UNK_?;
                                        bVar79 = 0;
                                        uVar68 = 0;
                                        if (*(int *)(iVar57 + 0xc) == 0) goto code_?;
                                        uVar101 = *(undefined8 *)(iVar57 + 0x10);
                                        fStack_100 = (float)uVar101 +
                                                    (fStack_84 -
                                                    (float)*(undefined8 *)(iVar57 + 0x10)) *
                                                    _UNK_?;
                                        fStack_88 = *(float *)(iVar57 + 0x18) +
                                                    (*(float *)(iVar57 + 0x30) -
                                                    *(float *)(iVar57 + 0x18)) * _UNK_?;
                                        pGVar23 = (uStack_28->fields).gameObject;
                                        if (pGVar23 != (GameObject *)0x0) {
                                          pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar23,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pVVar85 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar102 = (pVVar85->oneVector).x;
                                          uVar103 = (pVVar85->oneVector).y;
                                          fVar41 = (uStack_28->fields).size;
                                          fVar75 = (pVVar85->oneVector).z * fVar41;
                                          if (pTVar34 != (Transform *)0x0) {
                                            value_00.y._0_2_ = SUB42((float)uVar103 * fVar41,0);
                                            value_00.x = (float)uVar102 * fVar41;
                                            value_00.y._2_2_ =
                                                 (short)((uint)((float)uVar103 * fVar41) >> 0x10);
                                            value_00.z._0_1_ = SUB41(fVar75,0);
                                            value_00.z._1_1_ = (char)((uint)fVar75 >> 8);
                                            value_00.z._2_2_ = (short)((uint)fVar75 >> 0x10);
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_localScale
                                                      (pTVar34,value_00,(MethodInfo *)0x0);
                                            pGVar23 = (uStack_28->fields).gameObject;
                                            if (pGVar23 != (GameObject *)0x0) {
                                              pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar23,(MethodInfo *)0x0);
                                              pVVar74 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Mesh::Mesh_get_vertices
                                                                  ((Mesh *)pVVar73,(MethodInfo *)0x0
                                                                  );
                                              if (pVVar74 != (Vector3__Array *)0x0) {
                                                bVar79 = 0;
                                                uVar68 = 0;
                                                if (pVVar74->max_length == 0) goto code_?;
                                                if (pTVar34 != (Transform *)0x0) {
                                                  pVVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_TransformPoint
                                                                      (&VStack_31,pTVar34,
                                                                       pVVar74->vector[0],
                                                                       (MethodInfo *)0x0);
                                                  uVar104 = pVVar30->x;
                                                  uVar105 = pVVar30->y;
                                                  fVar41 = pVVar30->z;
                                                  pGVar23 = (uStack_28->fields).gameObject;
                                                  if (pGVar23 != (GameObject *)0x0) {
                                                    pTVar34 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar23,(MethodInfo *)0x0);
                                                    pVVar73 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Mesh::Mesh_get_vertices
                                                                        ((Mesh *)pVVar73,
                                                                         (MethodInfo *)0x0);
                                                    if (pVVar73 != (Vector3__Array *)0x0) {
                                                      uVar80 = pVVar73->max_length;
                                                      bVar79 = uVar80 < 2;
                                                      uVar68 = SBORROW4(uVar80,2);
                                                      if (uVar80 < 3) goto code_?;
                                                      if (pTVar34 != (Transform *)0x0) {
                                                        pVVar30 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_TransformPoint
                                                                            (&VStack_31,pTVar34,
                                                                             pVVar73->vector[2],
                                                                             (MethodInfo *)0x0);
                                                        uVar106 = pVVar30->x;
                                                        uVar107 = pVVar30->y;
                                                        fVar75 = ((float)uVar106 - (float)uVar104) *
                                                                 _UNK_?;
                                                        fVar92 = (pVVar30->z - fVar41) *
                                                                 _UNK_?;
                                                        fVar83 = ((float)uVar107 - (float)uVar105) *
                                                                 _UNK_? + (float)uVar105;
                                                        uStack_42 = SUB42(fVar83,0);
                                                        uStack_43 = (undefined1)
                                                                    ((uint)fVar83 >> 0x10);
                                                        uStack_44 = (undefined1)
                                                                    ((uint)fVar83 >> 0x18);
                                                        pGVar23 = (uStack_28->fields).gameObject;
                                                        if (pGVar23 != (GameObject *)0x0) {
                                                          pTVar34 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (pGVar23,(MethodInfo *
                                                                                       )0x0);
                                                          unaff_ESI = (Vector3__Array *)0x0;
                                                          if (pTVar34 != (Transform *)0x0) {
                                                            pVVar30 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Transform::
                                                                      Transform_get_position
                                                                                ((Vector3 *)
                                                                                 &stack0xffffff80,
                                                                                 pTVar34,(MethodInfo
                                                                                          *)0x0);
                                                            VStack_31.x = pVVar30->x;
                                                            VStack_31.y = pVVar30->y;
                                                            uVar108 = *(undefined8 *)
                                                                      &pVVar54->vector[0].z;
                                                            VStack_31.z = pVVar30->z +
                                                                          (fStack_88 -
                                                                          (fVar92 + fVar41)) +
                                                                          (float)pVVar54->vector[1].
                                                                                 y * _UNK_?;
                                                            fVar3 = VStack_31.y +
                                                                     (((float)((ulonglong)uVar101 >>
                                                                              0x20) + fVar3) -
                                                                     (float)CONCAT13(uStack_44,
                                                                                     CONCAT12(
                                                  uStack_43,uStack_42))) +
                                                  (float)((ulonglong)uVar108 >> 0x20) * _UNK_?
                                                  ;
                                                  pVVar73 = (Vector3__Array *)&UNK_?;
                                                  value_01.y._0_2_ = SUB42(fVar3,0);
                                                  value_01.x = VStack_31.x +
                                                               (fStack_100 - (fVar75 + (float)uVar104))
                                                               + (float)uVar108 * _UNK_?;
                                                  value_01.y._2_2_ = (int16_t)((uint)fVar3 >> 0x10)
                                                  ;
                                                  value_01.z._0_2_ = SUB42(VStack_31.z,0);
                                                  value_01.z._2_2_ =
                                                       (short)((uint)VStack_31.z >> 0x10);
                                                  pVVar74 = (Vector3__Array *)VStack_31.z;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_set_position
                                                            (pTVar34,value_01,(MethodInfo *)0x0);
                                                  iVar57 = (((MVCubeModelBase__Fields *)
                                                            &pVVar73->bounds)->_)._.id;
                                                  unaff_ESI = pVVar73;
                                                  if ((iVar57 != 0) &&
                                                     (pGVar23 = *(GameObject **)(iVar57 + 0x14),
                                                     pGVar23 != (GameObject *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar23,1,(MethodInfo *)0x0);
                                                    this_03 = (FaceCursor *)
                                                              (((MVCubeModelBase__Fields *)
                                                               &pVVar73->bounds)->_)._.id;
                                                    if (this_03 != (FaceCursor *)0x0) {
                                                      pGVar23 = (GameObject *)
                                                                CONCAT13(uStack_26,
                                                                         CONCAT21(uStack_25,
                                                                                  bStack_24));
                                                      info = pVVar54;
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
      }
    }
    else if (e != (CubeModelingStateMachine *)0x0) {
      if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
      goto code_?;
      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
      pIVar39 = (((this->fields).modelCursor)->fields).indentArea;
      if ((pMVar22 != (MVCubeModelBase *)0x0) && (pIVar39 != (IndentArea *)0x0)) {
        pGVar23 = (pMVar22->fields)._.gameObject;
        in_stack_12 = (undefined2)((uint)pGVar23 >> 0x10);
        IndentArea::IndentArea_UpdateIndentArea
                  (pIVar39,(e->fields)._SelectedCube_k__BackingField,pGVar23,(MethodInfo *)0x0);
        pMVar20 = (this->fields).modelCursor;
        if ((pMVar20 != (ModelCursor3D *)0x0) &&
           (pIVar39 = (pMVar20->fields).indentArea, pIVar39 != (IndentArea *)0x0)) {
          bVar19 = IndentArea::IndentArea_IsColliding(pIVar39,(MethodInfo *)0x0);
          if (bVar19 == 0) {
            pMVar20 = (this->fields).modelCursor;
            if (((pMVar20 != (ModelCursor3D *)0x0) &&
                (pIVar39 = (pMVar20->fields).indentArea, pIVar39 != (IndentArea *)0x0)) &&
               (pGVar23 = (pIVar39->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
              bVar19 = 0;
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar23,bVar19,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            pCVar27 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar27 != (CubePickingInfo *)0x0) {
              (pCVar27->fields).pickedEdge = 0;
              pMVar20 = (this->fields).modelCursor;
              if (((pMVar20 != (ModelCursor3D *)0x0) &&
                  (pIVar39 = (pMVar20->fields).indentArea, pIVar39 != (IndentArea *)0x0)) &&
                 (pGVar23 = (pIVar39->fields).gameObject, pGVar23 != (GameObject *)0x0)) {
                bVar19 = 1;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar68 = 0;
  bVar79 = 0;
  func_?();
  func_?();
  func_?();
code_?:
  uVar101 = func_?();
  if ((bool)uVar68) {
    piVar109 = (int *)((int)uVar101 + -0x18);
    *piVar109 = *piVar109 + (int)((ulonglong)uVar101 >> 0x20) + (uint)bVar79;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar110 = (byte *)((int)&unaff_ESI->monitor + 3);
  bVar111 = *pbVar110;
  bVar112 = (byte)((ulonglong)uVar101 >> 0x28);
  bVar113 = *pbVar110 + bVar112;
  *pbVar110 = bVar113 + bVar79;
  bVar114 = (byte)uVar101;
  *extraout_ECX =
       *extraout_ECX + (char)extraout_ECX +
       (CARRY1(bVar114,bVar114) ||
       CARRY1(bVar114 * '\x02',CARRY1(bVar111,bVar112) || CARRY1(bVar113,bVar79)));
  pcVar115 = (code *)swi(3);
  (*pcVar115)();
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

