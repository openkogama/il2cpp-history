
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
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff20;
  uVar6 = in_stack_7;
  uVar8 = in_stack_9;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xffffff20;
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
    func_?();
    uVar6 = 0x5f08;
    uVar8 = 0x11b5;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_12 = 0x11b5;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar10 = puStack_1;
    puVar11 = puStack_5;
  }
  puStack_5 = puVar11;
  puStack_1 = puVar10;
  bStack_13 = 0;
  pCVar14 = (CubePickingInfo *)0x0;
  iVar15 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pCVar16 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar16->cubeChange != 0) &&
     (pCVar16->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    uVar6 = (undefined2)pCVar16->cubeCount;
    uVar8 = (undefined2)((uint)pCVar16->cubeCount >> 0x10);
    (*(pCVar16->OnEditCubeChange->fields)._._.invoke_impl)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EStack_17 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar18;
    goto code_?;
  }
  pMVar19 = (this->fields).modelCursor;
  pVVar20 = (Vector3__Array *)this;
  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
  if (pMVar19 != (ModelCursor3D *)0x0) {
    if ((pMVar19->fields).indentArea == (IndentArea *)0x0 ||
        (this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar24 = 0x1045;
      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        pVStack_25 = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)pVStack_25;
      }
      EditCubes_SetEditDetail(this,e,(MethodInfo *)0x0);
      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
      cStack_26 = '\0';
      uStack_27 = (FaceCursor *)((uint)uStack_27 & 0xffffff);
      switch((this->fields).currentInternalState) {
      case 0:
        if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar18 == 0) {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVStack_25 = (Vector3__Array *)
                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                   (StringLiteral_Mouse_X,(MethodInfo *)0x0);
            pVStack_28 = (Vector3__Array *)
                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            fVar29 = (float)pVStack_25 * _UNK_?;
            IStack_21._0_4_ = (float)pVStack_28 * _UNK_?;
            IStack_21.z = 0;
            uStack_30 = 0;
            pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
            if (e != (CubeModelingStateMachine *)0x0) {
              uStack_31 = (e->fields)._TargetCubeModel_k__BackingField;
              pVStack_25 = (Vector3__Array *)(this->fields).mouseSensitivity;
              pCStack_32 = (this->fields).movingEdgeCube;
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if (pCStack_32 != (CubePickingInfo *)0x0) {
                pMStack_33 = (MVCubeModelBase *)
                             CONCAT31(pMStack_33._1_3_,(pCStack_32->fields).pickedEdgeIndex0);
                uVar34 = (uint)pVStack_28 >> 8;
                pVStack_28 = (Vector3__Array *)
                             CONCAT31((int3)uVar34,
                                      (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
                fVar35 = (float)IStack_21._0_4_;
                if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  fVar35 = (float)IStack_21._0_4_;
                }
                IStack_21.y = (int16_t)((uint)fVar35 >> 0x10);
                IStack_21.x = SUB42(fVar35,0);
                uVar6 = (undefined2)((uint)pVStack_25 >> 0x10);
                mousePositionDelta.y._0_2_ = IStack_21.x;
                mousePositionDelta.x = fVar29;
                mousePositionDelta.y._2_2_ = IStack_21.y;
                mousePositionDelta.z._2_2_ = uStack_30;
                mousePositionDelta.z._0_2_ = IStack_21.z;
                IStack_21._0_4_ = fVar35;
                pVStack_25 = (Vector3__Array *)
                             SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                       (uStack_31,pCStack_32,mousePositionDelta,
                                        &(this->fields).delta,&(this->fields).deltaAccum,
                                        (float)pVStack_25,&bStack_13,(bool)pMStack_33,
                                        (bool)pVStack_28,&EStack_17,(MethodInfo *)0x0);
                if (pVStack_25 == (Vector3__Array *)0x0) {
                  pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pMVar36 == (MVCubeModelBase *)0x0) goto code_?;
                  iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar36,(MethodInfo *)0x0)
                  ;
                  CubeModelTool::CubeModelTool_SendCubeEvent(iVar37,EStack_17,(MethodInfo *)0x0);
                }
                if ((bStack_13 & (this->fields).edgeHasMoved == 0) != 0) {
                  (this->fields).edgeHasMoved = 1;
                }
                if (pVStack_25 == (Vector3__Array *)0x1) {
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_25 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_27._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_28 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos_01.z = (int16_t)pVStack_25;
                    localPos_01._0_4_ = &IStack_21;
                    IVar38 = Cube::Cube_GetCubePosAboveFace
                                       (localPos_01,CONCAT22(uVar6,uStack_27._2_2_),
                                        (MethodInfo *)pVStack_28);
                    pIVar39 = IVar38._0_4_;
                    uStack_31 = *(MVCubeModelBase **)pIVar39;
                    uStack_27 = (FaceCursor *)CONCAT22(pIVar39->z,(undefined2)uStack_27);
                    pMStack_33 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar39,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_33 == (MVCubeModelBase *)0x0) {
                      pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (pMVar36 != (MVCubeModelBase *)0x0) {
                        pos_01.z = uStack_27._2_2_;
                        pos_01._0_4_ = uStack_31;
                        pVStack_25 = (Vector3__Array *)
                                     MVCubeModelBase::MVCubeModelBase_GetCube
                                               (pMVar36,pos_01,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                           ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0
                                           );
                        if (bVar18 == 0) goto code_?;
                        pos_05.z = uStack_27._2_2_;
                        pos_05._0_4_ = uStack_31;
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,pos_05,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                        pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_25 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar40 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar22 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_25,FVar40,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar20 = (Vector3__Array *)
                                    MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar22,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_25,(Byte__Array *)pVVar20,pBVar42,
                                           (MethodInfo *)0x0);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if (pVStack_28 != (Vector3__Array *)0x0) {
                            pos_06.z = uStack_27._2_2_;
                            pos_06._0_4_ = uStack_31;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_28,pos_06,(CubeBase *)pVStack_25,
                                       (MethodInfo *)0x0);
                            pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                            if (pMVar36 != (MVCubeModelBase *)0x0) {
                              iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar36,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar37,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                              pCVar14 = (this->fields).movingEdgeCube;
                              pCStack_32 = (CubePickingInfo *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        (pCStack_32,pCVar14,(MethodInfo *)0x0);
                              pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                              pVVar20 = (Vector3__Array *)this;
                              pVVar22 = (Vector3__Array *)
                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                              if (pMVar36 != (MVCubeModelBase *)0x0) {
                                pos_07.z = uStack_27._2_2_;
                                pos_07._0_4_ = uStack_31;
                                pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                    (pMVar36,pos_07,(MethodInfo *)0x0);
                                pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                                pVVar22 = (Vector3__Array *)
                                          CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                if (pCStack_32 != (CubePickingInfo *)0x0) {
                                  (pCStack_32->fields).cube = pCVar43;
                                  func_?();
                                  *(MVCubeModelBase **)&(pCStack_32->fields).iLocalPos = uStack_31;
                                  (pCStack_32->fields).iLocalPos.z = uStack_27._2_2_;
                                  pCVar14 = (this->fields).movingEdgeCube;
                                  pVVar22 = (Vector3__Array *)
                                            CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pVVar22 = (Vector3__Array *)
                                                CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                                     (e->fields)._TargetCubeModel_k__BackingField !=
                                     (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                               (MethodInfo *)0x0);
                                    (this->fields).movingEdgeCube = pCStack_32;
                                    func_?();
                                    pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar22 = (Vector3__Array *)
                                              CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                    if (pVStack_25 != (Vector3__Array *)0x0) {
                                      pVVar44 = Cube::Cube_GetFaceAxis
                                                          (&VStack_45,pVStack_25->max_length,
                                                           (MethodInfo *)0x0);
                                      axis_02.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                      axis_02._0_10_ = *(unkbyte10 *)pVVar44;
                                      Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-0.75,
                                                          axis_02,(CubeOutOfBoundState__Enum *)
                                                                  &stack0xffffff4c,(MethodInfo *)0x0
                                                         );
code_?:
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar20 = (Vector3__Array *)this;
                                      pVVar22 = (Vector3__Array *)
                                                CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                         (pVVar22 = (Vector3__Array *)
                                                    CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                                         (e->fields)._TargetCubeModel_k__BackingField !=
                                         (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar14->fields).iLocalPos,
                                                   (pCVar14->fields).cube,(MethodInfo *)0x0);
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
                      VStack_45.z = (float)pMStack_33;
                      VStack_45.y = -NAN;
                      VStack_45.x = (float)TypeInfo__CanPerformCubeActionResult;
                      str1 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&VStack_45,(MethodInfo *)0x0);
                      uVar6 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                      uVar8 = (undefined2)
                               ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                      mscorlib.dll::System::String::String_Concat_3
                                ((String *)CONCAT22(uVar8,uVar6),str1,(MethodInfo *)0x0);
                      pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                      pMVar19 = (this->fields).modelCursor;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if ((pMVar36 != (MVCubeModelBase *)0x0) &&
                         (pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         pMVar19 != (ModelCursor3D *)0x0)) {
                        iPos_04.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
                        iPos_04._0_4_ = uStack_31;
                        iPos_04.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)pMVar19,iPos_04,(pMVar36->fields)._.gameObject,
                                   pMStack_33 == (MVCubeModelBase *)0x2,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                           pMVar36 != (MVCubeModelBase *)0x0)) {
                          pCVar43 = (pCVar14->fields).cube;
                          uVar46 = SUB41(pCVar43,0);
                          uVar47 = (undefined1)((uint)pCVar43 >> 8);
                          uVar6 = (undefined2)((uint)pCVar43 >> 0x10);
code_?:
                          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                    (pMVar36,(pCVar14->fields).iLocalPos,
                                     (Cube *)CONCAT22(uVar6,CONCAT11(uVar47,uVar46)),
                                     (MethodInfo *)0x0);
                          (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                          func_?();
                          break;
                        }
                      }
                    }
                  }
                }
                else if (pVStack_25 == (Vector3__Array *)0x4) {
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_25 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_27._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_28 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos_00.z = (int16_t)pVStack_25;
                    localPos_00._0_4_ = &IStack_21;
                    IVar38 = Cube::Cube_GetCubePosAboveFace
                                       (localPos_00,CONCAT22(uVar6,uStack_27._2_2_),
                                        (MethodInfo *)pVStack_28);
                    pIVar39 = IVar38._0_4_;
                    uStack_31 = *(MVCubeModelBase **)pIVar39;
                    uStack_27 = (FaceCursor *)CONCAT22(pIVar39->z,(undefined2)uStack_27);
                    pMStack_33 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar39,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_33 != (MVCubeModelBase *)0x0) {
code_?:
                      VStack_45.z = (float)pMStack_33;
                      VStack_45.y = -NAN;
                      VStack_45.x = (float)TypeInfo__CanPerformCubeActionResult;
                      str1 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&VStack_45,(MethodInfo *)0x0);
                      uVar6 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                      uVar8 = (undefined2)
                               ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                      goto code_?;
                    }
                    pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (pMVar36 != (MVCubeModelBase *)0x0) {
                      pos_00.z = uStack_27._2_2_;
                      pos_00._0_4_ = uStack_31;
                      pVStack_25 = (Vector3__Array *)
                                   MVCubeModelBase::MVCubeModelBase_GetCube
                                             (pMVar36,pos_00,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                         ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0);
                      if (bVar18 == 0) goto code_?;
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                   (MethodInfo *)0x0);
                        pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_25 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar40 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar22 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_25,FVar40,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar20 = (Vector3__Array *)
                                    MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar22,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_25,(Byte__Array *)pVVar20,pBVar42,
                                           (MethodInfo *)0x0);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if (pVStack_28 != (Vector3__Array *)0x0) {
                            pos_10.z = uStack_27._2_2_;
                            pos_10._0_4_ = uStack_31;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_28,pos_10,(CubeBase *)pVStack_25,
                                       (MethodInfo *)0x0);
                            pCVar14 = (this->fields).movingEdgeCube;
                            pCStack_32 = (CubePickingInfo *)func_?();
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      (pCStack_32,pCVar14,(MethodInfo *)0x0);
                            pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar20 = (Vector3__Array *)this;
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                            if (pMVar36 != (MVCubeModelBase *)0x0) {
                              pos_04.z = uStack_27._2_2_;
                              pos_04._0_4_ = uStack_31;
                              pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar36,pos_04,(MethodInfo *)0x0);
                              pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                              pVVar22 = (Vector3__Array *)
                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                              if (pCStack_32 != (CubePickingInfo *)0x0) {
                                (pCStack_32->fields).cube = pCVar43;
                                func_?();
                                *(MVCubeModelBase **)&(pCStack_32->fields).iLocalPos = uStack_31;
                                (pCStack_32->fields).iLocalPos.z = uStack_27._2_2_;
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar22 = (Vector3__Array *)
                                          CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pVVar22 = (Vector3__Array *)
                                              CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                   (MVCubeModelBase *)0x0)) {
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            ((e->fields)._TargetCubeModel_k__BackingField,
                                             (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                             (MethodInfo *)0x0);
                                  (this->fields).movingEdgeCube = pCStack_32;
                                  func_?();
                                  pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                  pVVar22 = (Vector3__Array *)
                                            CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                  if (pVStack_25 != (Vector3__Array *)0x0) {
                                    pVVar44 = Cube::Cube_GetFaceAxis
                                                        (&VStack_45,pVStack_25->max_length,
                                                         (MethodInfo *)0x0);
                                    axis.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                    axis._0_10_ = *(unkbyte10 *)pVVar44;
                                    Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-1.0,axis,
                                                        (CubeOutOfBoundState__Enum *)
                                                        &stack0xffffff50,(MethodInfo *)0x0);
                                    pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar22 = (Vector3__Array *)
                                              CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                    if (pVStack_25 != (Vector3__Array *)0x0) {
                                      pVVar44 = Cube::Cube_GetFaceAxis
                                                          (&VStack_45,pVStack_25->max_length,
                                                           (MethodInfo *)0x0);
                                      axis_01.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                      axis_01._0_10_ = *(unkbyte10 *)pVVar44;
                                      Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_25,-0.75,
                                                          axis_01,(CubeOutOfBoundState__Enum *)
                                                                  &stack0xffffff50,(MethodInfo *)0x0
                                                         );
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar22 = (Vector3__Array *)
                                                CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                         (pVVar22 = (Vector3__Array *)
                                                    CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                                         (e->fields)._TargetCubeModel_k__BackingField !=
                                         (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar14->fields).iLocalPos,
                                                   (pCVar14->fields).cube,(MethodInfo *)0x0);
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
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_25 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_27._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_28 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos.z = (int16_t)pVStack_25;
                    localPos._0_4_ = &IStack_21;
                    IVar38 = Cube::Cube_GetCubePosAboveFace
                                       (localPos,CONCAT22(uVar6,uStack_27._2_2_),
                                        (MethodInfo *)pVStack_28);
                    pIVar39 = IVar38._0_4_;
                    uStack_31 = *(MVCubeModelBase **)pIVar39;
                    uStack_27 = (FaceCursor *)CONCAT22(pIVar39->z,(undefined2)uStack_27);
                    pMStack_33 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar39,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_33 != (MVCubeModelBase *)0x0) {
code_?:
                      VStack_45.z = (float)pMStack_33;
                      VStack_45.y = -NAN;
                      VStack_45.x = (float)TypeInfo__CanPerformCubeActionResult;
                      str1 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&VStack_45,(MethodInfo *)0x0);
                      uVar6 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                      uVar8 = (undefined2)
                               ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
                      goto code_?;
                    }
                    pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (pMVar36 != (MVCubeModelBase *)0x0) {
                      pos.z = uStack_27._2_2_;
                      pos._0_4_ = uStack_31;
                      pVStack_25 = (Vector3__Array *)
                                   MVCubeModelBase::MVCubeModelBase_GetCube
                                             (pMVar36,pos,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                         ((CubeBase *)pVStack_25,(CubeBase *)0x0,(MethodInfo *)0x0);
                      if (bVar18 == 0) goto code_?;
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                   (MethodInfo *)0x0);
                        pVStack_28 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_25 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar40 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar22 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_25,FVar40,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar20 = (Vector3__Array *)
                                    MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar22,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_25 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_25,(Byte__Array *)pVVar20,pBVar42,
                                           (MethodInfo *)0x0);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if (pVStack_28 != (Vector3__Array *)0x0) {
                            pos_09.z = uStack_27._2_2_;
                            pos_09._0_4_ = uStack_31;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_28,pos_09,(CubeBase *)pVStack_25,
                                       (MethodInfo *)0x0);
                            pCVar14 = (this->fields).movingEdgeCube;
                            pCStack_32 = (CubePickingInfo *)func_?();
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      (pCStack_32,pCVar14,(MethodInfo *)0x0);
                            pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar20 = (Vector3__Array *)this;
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                            if (pMVar36 != (MVCubeModelBase *)0x0) {
                              pos_03.z = uStack_27._2_2_;
                              pos_03._0_4_ = uStack_31;
                              pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar36,pos_03,(MethodInfo *)0x0);
                              pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                              pVVar22 = (Vector3__Array *)
                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                              if (pCStack_32 != (CubePickingInfo *)0x0) {
                                (pCStack_32->fields).cube = pCVar43;
                                func_?();
                                *(MVCubeModelBase **)&(pCStack_32->fields).iLocalPos = uStack_31;
                                (pCStack_32->fields).iLocalPos.z = uStack_27._2_2_;
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar22 = (Vector3__Array *)
                                          CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pVVar22 = (Vector3__Array *)
                                              CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                   (MVCubeModelBase *)0x0)) {
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            ((e->fields)._TargetCubeModel_k__BackingField,
                                             (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                             (MethodInfo *)0x0);
                                  (this->fields).movingEdgeCube = pCStack_32;
                                  func_?();
                                  pVStack_25 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                  pVVar22 = (Vector3__Array *)
                                            CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                  if (pVStack_25 != (Vector3__Array *)0x0) {
                                    pVVar44 = Cube::Cube_GetFaceAxis
                                                        (&VStack_45,pVStack_25->max_length,
                                                         (MethodInfo *)0x0);
                                    Cube::Cube_MoveFace((CubePickingInfo *)pVStack_25,-1.0,*pVVar44,
                                                        (CubeOutOfBoundState__Enum *)
                                                        &stack0xffffff54,(MethodInfo *)0x0);
                                    pVStack_28 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar22 = (Vector3__Array *)
                                              CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                    if (pVStack_28 != (Vector3__Array *)0x0) {
                                      pVStack_25 = (Vector3__Array *)
                                                   Cube::Cube_GetFaceAxis
                                                             (&VStack_45,pVStack_28->max_length,
                                                              (MethodInfo *)0x0);
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar22 = (Vector3__Array *)
                                                CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                      if (pCVar14 != (CubePickingInfo *)0x0) {
                                        axis_00.z._2_2_ =
                                             (short)((uint)((CubePickingInfo__Fields *)
                                                           &pVStack_25->bounds)->cube >> 0x10);
                                        axis_00._0_10_ = *(unkbyte10 *)pVStack_25;
                                        Cube::Cube_MoveVertex
                                                  ((CubePickingInfo *)pVStack_28,-0.75,axis_00,
                                                   (pCVar14->fields).pickedEdgeIndex0,
                                                   (pCVar14->fields).pickedEdgeIndex1,
                                                   (CubeOutOfBoundState__Enum *)&stack0xffffff54,
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
                  pMVar48 = (MethodInfo *)0x0;
                  pCVar14 = (this->fields).movingEdgeCube;
                  bVar18 = (bool)pCVar14;
                  targetGameObject = e;
                  CVar49 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                     (e,pCVar14,(MethodInfo *)0x0);
                  pCVar14 = (this->fields).movingEdgeCube;
                  if (CVar49 == CanPerformCubeActionResult__Enum_Yes) {
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      pVStack_25 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                      iVar15 = (pCVar14->fields).iLocalPos.z;
                      VStack_23.z._0_1_ = (bool)iVar15;
                      VStack_23.z._1_1_ = (undefined1)((ushort)iVar15 >> 8);
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar22 = pVStack_25;
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        pVStack_28 = (Vector3__Array *)(pCVar14->fields).pickedFace;
                        VStack_23.y = (float)pVStack_25;
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          cRam_? = '\x01';
                        }
                        IStack_21.x = 0;
                        IStack_21.y = 0;
                        IStack_21.z = 0;
                        pVVar22 = (Vector3__Array *)VStack_23.y;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                          pVVar22 = (Vector3__Array *)VStack_23.y;
                        }
                        VStack_23.y._2_2_ = (undefined2)((uint)pVVar22 >> 0x10);
                        iVar37 = CONCAT22((short)(CONCAT13(VStack_23.z._1_1_,
                                                           CONCAT12(VStack_23.z._0_1_,
                                                                    VStack_23.y._2_2_)) >> 0x10),
                                          VStack_23.y._2_2_);
                        VStack_23.y = (float)pVVar22;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_21,(int32_t)pVStack_25,iVar37,
                                   CONCAT22(VStack_23.z._2_2_,
                                            CONCAT11(VStack_23.z._1_1_,VStack_23.z._0_1_)),
                                   (MethodInfo *)0x0);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pVVar44 = Cube::Cube_GetFaceAxis
                                            (&VStack_45,(Face__Enum)pVStack_28,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        uVar50 = pVVar44->x;
                        uVar51 = pVVar44->y;
                        fVar29 = pVVar44->z;
                        VStack_23.y._0_2_ = (short)uVar51;
                        VStack_23.y._2_2_ = (undefined2)((uint)uVar51 >> 0x10);
                        VStack_23.z._0_1_ = SUB41(fVar29,0);
                        VStack_23.z._1_1_ = (undefined1)((uint)fVar29 >> 8);
                        VStack_23.z._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                        IStack_21.x = IStack_21.x - (short)(int)(float)uVar50;
                        IStack_21.y = IStack_21.y - (short)(int)(float)uVar51;
                        uStack_27 = (FaceCursor *)
                                    CONCAT22(IStack_21.z - (short)(int)fVar29,(undefined2)uStack_27);
                        VStack_23.x = (float)uVar50;
                        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                        pVVar22 = (Vector3__Array *)uVar51;
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pos_02.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          pos_02._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,pos_02,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                             pVVar22 = (Vector3__Array *)
                                       CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                             (e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)
                             ) {
                            pos_08.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                            pos_08._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                            MVCubeModelBase::MVCubeModelBase_RemoveCube
                                      ((e->fields)._TargetCubeModel_k__BackingField,pos_08,
                                       (MethodInfo *)0x0);
                            pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                            IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                            if (pMVar36 != (MVCubeModelBase *)0x0) {
                              pos_11.y = IStack_21.y;
                              pos_11.x = IStack_21.x;
                              pos_11.z._0_1_ = (char)((uint)uStack_27 >> 0x10);
                              pos_11.z._1_1_ = (char)((uint)uStack_27 >> 0x18);
                              pVVar22 = (Vector3__Array *)
                                        MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar36,pos_11,(MethodInfo *)0x0);
                              pVStack_28 = pVVar22;
                              if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                       CubeBase_op_Inequality
                                                 ((CubeBase *)pVVar22,(CubeBase *)0x0,
                                                  (MethodInfo *)0x0);
                              if (bVar18 == 0) {
                                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                func_?();
                              }
                              else {
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar52 = (Vector3__Array *)func_?();
                                pVStack_25 = pVVar52;
                                CubePickingInfo::CubePickingInfo__ctor_1
                                          ((CubePickingInfo *)pVVar52,pCVar14,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                pCVar43 = Cube::Cube_Clone_1((Cube *)pVStack_28,(MethodInfo *)0x0);
                                IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                                pVVar22 = (Vector3__Array *)
                                          CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                if (pVVar52 == (Vector3__Array *)0x0) goto code_?;
                                ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube = pCVar43;
                                func_?();
                                pVVar52->vector[2].z = (float)CONCAT22(IStack_21.y,IStack_21.x);
                                *(int16_t *)&pVVar52->vector[3].x = uStack_27._2_2_;
                                (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar52;
                                func_?();
                              }
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (((pCVar14 != (CubePickingInfo *)0x0) &&
                        (pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                        (e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) &&
                       (pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                       (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                      iPos_02.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                      iPos_02._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)(this->fields).modelCursor,iPos_02,
                                 (GameObject *)targetGameObject,bVar18,pMVar48);
                      pCVar14 = (this->fields).movingEdgeCube;
                      pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                         (pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         pMVar36 != (MVCubeModelBase *)0x0)) {
                        pCVar43 = (this->fields).prevCubeState;
                        uVar46 = SUB41(pCVar43,0);
                        uVar47 = (undefined1)((uint)pCVar43 >> 8);
                        uVar6 = (undefined2)((uint)pCVar43 >> 0x10);
                        goto code_?;
                      }
                    }
                  }
                }
                else {
                  if (pVStack_25 != (Vector3__Array *)0x0) break;
                  pMStack_33 = (MVCubeModelBase *)
                               CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                         (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                     (pCVar43 = (pCVar14->fields).cube,
                     pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                     pCVar43 != (Cube *)0x0)) {
                    pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                           ((CubeBase *)pCVar43,(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar18 = Cube::Cube_IsCollapsed(pVStack_25,(MethodInfo *)0x0);
                    if ((bVar18 == 0) || (pMStack_33 != (MVCubeModelBase *)0x1)) {
                      pCVar14 = (this->fields).movingEdgeCube;
                      if (pMStack_33 == (MVCubeModelBase *)0x2) {
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (((pCVar14 != (CubePickingInfo *)0x0) &&
                            (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                            pMVar36 != (MVCubeModelBase *)0x0)) &&
                           (pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                           (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                          iPos_03.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          iPos_03._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          ModelCursor::ModelCursor_SetErrorCursor
                                    ((ModelCursor *)(this->fields).modelCursor,iPos_03,
                                     (pMVar36->fields)._.gameObject,1,(MethodInfo *)0x0);
                          (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                          func_?();
                          break;
                        }
                      }
                      else {
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                                     (MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (pVVar22 = (Vector3__Array *)
                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                             pMVar36 != (MVCubeModelBase *)0x0)) {
                            iVector_03.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                            iVector_03._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                            MVCubeModelBase::MVCubeModelBase_CornersChanged
                                      (pMVar36,iVector_03,(pCVar14->fields).cube,(MethodInfo *)0x0);
                            break;
                          }
                        }
                      }
                    }
                    else {
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (((pCVar14 != (CubePickingInfo *)0x0) &&
                          (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                          pMVar36 != (MVCubeModelBase *)0x0)) &&
                         (pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                        pMVar48 = (MethodInfo *)0x0;
                        bVar18 = 0;
                        targetGameObject =
                             (CubeModelingStateMachine *)(pMVar36->fields)._.gameObject;
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar41 = (this->fields).prevMaterial;
            (this->fields).currentInternalState = 2;
            pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar41);
            IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
            pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
            if (e != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (e,uVar41,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                        (1,(MethodInfo *)0x0);
              pCVar14 = (this->fields).movingEdgeCube;
              if ((this->fields).edgeHasMoved == 0) {
                (e->fields)._SelectedCube_k__BackingField = pCVar14;
                func_?();
                pCVar14 = (e->fields)._SelectedCube_k__BackingField;
                IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                             (MethodInfo *)0x0);
                  uStack_2 = 2;
                  EStack_17 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                        (e,(MethodInfo *)0x0);
                  pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pMVar36 != (MVCubeModelBase *)0x0) {
                    iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                       (pMVar36,(MethodInfo *)0x0);
                    CubeModelTool::CubeModelTool_SendCubeEvent(iVar37,EStack_17,(MethodInfo *)0x0);
                    if (EStack_17 != EditCubeChange__Enum_None) {
code_?:
                      uStack_2 = 0xffffffff;
                      goto code_?;
                    }
                    pCVar14 = (e->fields)._SelectedCube_k__BackingField;
                    IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      pVStack_25._0_2_ = (pCVar14->fields).iLocalPos.x;
                      pVStack_25._2_2_ = (pCVar14->fields).iLocalPos.y;
                      uStack_31 = (MVCubeModelBase *)
                                  CONCAT22((pCVar14->fields).iLocalPos.z,(undefined2)uStack_31);
                      pVStack_28 = (Vector3__Array *)
                                   (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      localPos_02.z = (int16_t)pVStack_25;
                      localPos_02._0_4_ = &IStack_21;
                      IVar38 = Cube::Cube_GetCubePosAboveFace
                                         (localPos_02,CONCAT22(in_stack_12,uStack_31._2_2_),
                                          (MethodInfo *)pVStack_28);
                      pVStack_25 = IVar38._0_4_;
                      pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                      pMVar19 = (this->fields).modelCursor;
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if ((pMVar36 != (MVCubeModelBase *)0x0) &&
                         (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                         pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         pMVar19 != (ModelCursor3D *)0x0)) {
                        iPos_01.z._1_1_ = (char)((ushort)*(int16_t *)&pVStack_25->monitor >> 8);
                        iPos_01._0_5_ = *(undefined5 *)pVStack_25;
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)pMVar19,iPos_01,(pMVar36->fields)._.gameObject,0,
                                   (MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                }
              }
              else {
                pVStack_28 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                       (e,pCVar14,(MethodInfo *)0x0);
                pCVar14 = (this->fields).movingEdgeCube;
                if (pVStack_28 == (Vector3__Array *)0x2) {
                  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (((pCVar14 != (CubePickingInfo *)0x0) &&
                      (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                      pMVar36 != (MVCubeModelBase *)0x0)) &&
                     (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                     pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                    iPos.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                    iPos._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)(this->fields).modelCursor,iPos,
                               (pMVar36->fields)._.gameObject,1,(MethodInfo *)0x0);
                    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                    func_?();
code_?:
                    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                    func_?();
                    (this->fields).edgeHasMoved = 0;
                    break;
                  }
                }
                else {
                  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                     (pCVar43 = (pCVar14->fields).cube,
                     IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                     pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                     pCVar43 != (Cube *)0x0)) {
                    pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                           ((CubeBase *)pCVar43,(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar18 = Cube::Cube_IsCollapsed(pVStack_25,(MethodInfo *)0x0);
                    pCVar14 = (this->fields).movingEdgeCube;
                    if (bVar18 == 0) {
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                                   (MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                           pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_)
                           , pMVar36 != (MVCubeModelBase *)0x0)) {
                          pCVar43 = (pCVar14->fields).cube;
                          uVar46 = SUB41(pCVar43,0);
                          uVar47 = (undefined1)((uint)pCVar43 >> 8);
                          uVar24 = (undefined2)((uint)pCVar43 >> 0x10);
code_?:
                          iVector_01.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          iVector_01._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                    (pMVar36,iVector_01,(Cube *)CONCAT22(uVar8,uVar6),
                                     (MethodInfo *)CONCAT22(uVar24,CONCAT11(uVar47,uVar46)));
                          goto code_?;
                        }
                      }
                    }
                    else if (pVStack_28 == (Vector3__Array *)0x0) {
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                                   (MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                           pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_)
                           , pMVar36 != (MVCubeModelBase *)0x0)) {
                          pos_13.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          pos_13._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          MVCubeModelBase::MVCubeModelBase_RemoveCube
                                    (pMVar36,pos_13,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                    else {
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (((pCVar14 != (CubePickingInfo *)0x0) &&
                          (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
                          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                          pMVar36 != (MVCubeModelBase *)0x0)) &&
                         (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                         pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                        iPos_00.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                        iPos_00._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)(this->fields).modelCursor,iPos_00,
                                   (pMVar36->fields)._.gameObject,0,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pIVar39 = &(pCVar14->fields).iLocalPos;
                          uVar6 = pIVar39->x;
                          uVar8 = pIVar39->y;
                          iVar15 = (pCVar14->fields).iLocalPos.z;
                          uVar46 = (undefined1)iVar15;
                          uVar47 = (undefined1)((ushort)iVar15 >> 8);
                          pos_12.z._1_1_ = uVar47;
                          pos_12._0_5_ = *(undefined5 *)pIVar39;
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,pos_12,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                             pVVar22 = (Vector3__Array *)
                                       CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                             pMVar36 != (MVCubeModelBase *)0x0)) goto code_?;
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
        (this->fields).currentInternalState = 1;
        if (e == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
        (this->fields).edgeHasMoved = 0;
        break;
      case 1:
        if ((this->fields).currentInternalState == 1) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                      (1,(MethodInfo *)0x0);
            (this->fields).currentInternalState = 2;
          }
        }
        break;
      case 2:
        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
        if (e == (CubeModelingStateMachine *)0x0) goto code_?;
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            bVar18 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
            if (bVar18 != 0) {
              (this->fields).currentInternalState = 3;
              break;
            }
          }
        }
        else {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            uStack_2 = 0;
            EStack_17 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                  (e,(MethodInfo *)0x0);
            pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
            IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
            pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
            if (pMVar36 != (MVCubeModelBase *)0x0) {
              iVar37 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar36,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar37,EStack_17,(MethodInfo *)0x0);
              if (EStack_17 != EditCubeChange__Enum_None) {
                cStack_26 = '\x01';
                uStack_2 = 0xffffffff;
                break;
              }
              pCVar14 = (e->fields)._SelectedCube_k__BackingField;
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if (pCVar14 != (CubePickingInfo *)0x0) {
                pVStack_25._0_2_ = (pCVar14->fields).iLocalPos.x;
                pVStack_25._2_2_ = (pCVar14->fields).iLocalPos.y;
                uStack_31 = (MVCubeModelBase *)
                            CONCAT22((pCVar14->fields).iLocalPos.z,(undefined2)uStack_31);
                pVStack_28 = (Vector3__Array *)
                             (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_03.z._0_1_ = (char)pVStack_25;
                localPos_03._0_4_ = &IStack_21;
                localPos_03.z._1_1_ = (char)((uint)pVStack_25 >> 8);
                IVar38 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_03,CONCAT22(uVar8,uStack_31._2_2_),
                                    (MethodInfo *)pVStack_28);
                pVStack_25 = IVar38._0_4_;
                pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
                pMVar19 = (this->fields).modelCursor;
                IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if ((pMVar36 != (MVCubeModelBase *)0x0) &&
                   (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                   pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                   pMVar19 != (ModelCursor3D *)0x0)) {
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar19,*(IntVector *)pVStack_25,
                             (pMVar36->fields)._.gameObject,0,(MethodInfo *)0x0);
                  uStack_2 = 0xffffffff;
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
        bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar18 != 0) {
          pVStack_25 = (Vector3__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          if (_UNK_? < (float)pVStack_25 - (this->fields).prevMouseUpTime) {
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
              pVStack_25 = (Vector3__Array *)
                           MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                     (StringLiteral_Mouse_X,(MethodInfo *)0x0);
              pVStack_28 = (Vector3__Array *)((uint)pVStack_25 & _UNK_?);
              pVStack_25 = (Vector3__Array *)
                           MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                     (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
              if (((float)pVStack_28 != 0.0) || ((float)((uint)pVStack_25 & _UNK_?) != 0.0))
              {
                pCVar14 = (this->fields).prevSelectedCube;
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  pVStack_28 = (Vector3__Array *)(pCVar14->fields).cube;
                  pVStack_25 = (Vector3__Array *)
                               (((this->fields).prevSelectedCube)->fields).pickedFace;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  uVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                     ((CubeBase *)pVStack_28,(Face__Enum)pVStack_25,
                                      (MethodInfo *)0x0);
                  pMStack_33 = (MVCubeModelBase *)CONCAT31(pMStack_33._1_3_,uVar41);
                  pMVar53 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if ((pMVar53 != (MVNetworkGame *)0x0) &&
                     (this_00 = (pMVar53->fields)._MaterialRepository_k__BackingField,
                     IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                     pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                     this_00 != (MVMaterialRepository *)0x0)) {
                    bVar18 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                       (this_00,(uint8_t)pMStack_33,(MethodInfo *)0x0);
                    if (bVar18 == 0) {
                      pCVar14 = (this->fields).prevSelectedCube;
                      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (((pCVar14 == (CubePickingInfo *)0x0) ||
                          (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
                          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                          pMVar36 == (MVCubeModelBase *)0x0)) ||
                         (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                         pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         (this->fields).modelCursor == (ModelCursor3D *)0x0)) goto code_?;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)(this->fields).modelCursor,
                                 (pCVar14->fields).iLocalPos,(pMVar36->fields)._.gameObject,1,
                                 (MethodInfo *)0x0);
                    }
                    else {
                      uVar41 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      (this->fields).prevMaterial = uVar41;
                      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                (e,(uint8_t)pMStack_33,(MethodInfo *)0x0);
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
        }
        break;
      case 3:
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar18 == 0) {
          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
          if ((e == (CubeModelingStateMachine *)0x0) ||
             (pMVar36 = (e->fields)._TargetCubeModel_k__BackingField,
             IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
             pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
             pMVar36 == (MVCubeModelBase *)0x0)) goto code_?;
          bVar18 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                             ((pMVar36->fields)._.gameObject,(IntVector *)&stack0xffffff58,
                              (MethodInfo *)0x0);
          if (bVar18 != 0) {
            IVar38.z._0_1_ = (char)iVar15;
            IVar38._0_4_ = pCVar14;
            IVar38.z._1_1_ = (char)((ushort)iVar15 >> 8);
            CVar49 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                               (e,IVar38,(MethodInfo *)0x0);
            if (CVar49 == CanPerformCubeActionResult__Enum_Yes) {
              pos_15.z = iVar15;
              pos_15._0_4_ = pCVar14;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_15,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              pMStack_33 = (e->fields)._TargetCubeModel_k__BackingField;
              uStack_31 = (MVCubeModelBase *)CONCAT22(iVar15,(undefined2)uStack_31);
              pCStack_32 = pCVar14;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVStack_25 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVStack_28 = (Vector3__Array *)
                           MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                           CubeDataPacker_CornersToByteArray(pVStack_25,(MethodInfo *)0x0);
              uVar41 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
              pVStack_25 = (Vector3__Array *)CONCAT31(pVStack_25._1_3_,uVar41);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pBVar42 = Cube::Cube_CreateMaterialArray((uint8_t)pVStack_25,(MethodInfo *)0x0);
              pVStack_25 = (Vector3__Array *)func_?();
              Cube::Cube__ctor((Cube *)pVStack_25,(Byte__Array *)pVStack_28,pBVar42,
                               (MethodInfo *)0x0);
              IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if (pMStack_33 == (MVCubeModelBase *)0x0) goto code_?;
              pos_14.z._0_1_ = (char)((uint)uStack_31 >> 0x10);
              pos_14._0_4_ = pCStack_32;
              pos_14.z._1_1_ = (char)((uint)uStack_31 >> 0x18);
              MVCubeModelBase::MVCubeModelBase_AddCube
                        (pMStack_33,pos_14,(CubeBase *)pVStack_25,(MethodInfo *)0x0);
            }
          }
        }
        else {
          (this->fields).currentInternalState = 2;
          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
        }
      }
      if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
        pCVar43 = (Cube *)0x0;
      }
      else {
        pCVar43 = (((this->fields).movingEdgeCube)->fields).cube;
        pVVar20 = (Vector3__Array *)this;
        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
        if (pCVar43 == (Cube *)0x0) goto code_?;
        pCVar43 = Cube::Cube_Clone(pCVar43,(MethodInfo *)0x0);
      }
      (this->fields).prevCubeState = pCVar43;
      func_?();
      pVVar20 = (Vector3__Array *)this;
      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
        func_?();
        if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
        pVVar52 = (Vector3__Array *)(this->fields).movingEdgeCube;
        pCStack_32 = (CubePickingInfo *)(this->fields).modelCursor;
        pVStack_25 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
        pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
        pVStack_28 = pVVar52;
        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
        if (pMVar36 != (MVCubeModelBase *)0x0) {
          pMStack_33 = (MVCubeModelBase *)(pMVar36->fields)._.gameObject;
          iVar37 = (this->fields).currentInternalState;
          IStack_21.z = (int16_t)iVar37;
          uStack_30 = (undefined2)((uint)iVar37 >> 0x10);
          pVVar20 = pVVar52;
          if (pVVar52 == (Vector3__Array *)0x0) {
            pCVar43 = (pCStack_32->fields).cube;
            if (pVStack_25 == (Vector3__Array *)0x0) {
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,0,(MethodInfo *)0x0);
                pCVar14 = pCStack_32;
                iVar55 = (pCStack_32->fields).pickedEdge;
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if ((iVar55 != 0) &&
                   (pGVar54 = *(GameObject **)(iVar55 + 0x14),
                   pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                   pGVar54 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar54,0,(MethodInfo *)0x0);
code_?:
                  this_01 = (CellCursor *)(pCVar14->fields).pickedFace;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (this_01 != (CellCursor *)0x0) {
                    CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
                    pVVar56 = pVStack_25;
                    if (CONCAT22(uStack_30,IStack_21.z) == 3) {
                      fVar35 = 0.0;
                      fVar29 = 0.0;
                      uVar6 = 0;
                      uVar8 = 0;
                      bVar18 = DrawPlane::DrawPlane_Pick
                                         ((Vector3 *)&stack0xffffff38,(MethodInfo *)0x0);
                      if (bVar18 == 0) {
code_?:
                        *unaff_FS_OFFSET = uStack_4;
                        return;
                      }
                      pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                          ((MethodInfo *)0x0);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (((pGVar57 != (GameEventManager *)0x0) &&
                          (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                          pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                         (pGVar59 = (pGVar58->fields).LaserCommands,
                         pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                         pGVar59 !=
                         (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
                         )) {
                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                  (pGVar59,0.2,(MethodInfo *)0x0);
                        pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (((pGVar57 != (GameEventManager *)0x0) &&
                            (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                            pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar59 = (pGVar58->fields).LaserCommands,
                           pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_)
                           , pGVar59 !=
                             (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *
                             )0x0)) {
                          to_00.y = (float)(CONCAT26(uVar8,CONCAT24(uVar6,fVar29)) >> 0x20);
                          to_00.x = fVar29;
                          to_00.z._0_2_ = SUB42(fVar35,0);
                          to_00.z._2_2_ = (short)((uint)fVar35 >> 0x10);
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar59,to_00,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_4;
                          return;
                        }
                      }
                    }
                    else if (pVVar52 == (Vector3__Array *)0x0) {
                      if (cStack_26 == '\0') {
                        if (pVStack_25 == (Vector3__Array *)0x0) goto code_?;
                        pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (((pGVar57 != (GameEventManager *)0x0) &&
                            (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                            pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar59 = (pGVar58->fields).LaserCommands,
                           pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_)
                           , pGVar59 !=
                             (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *
                             )0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar59,*(Vector3 *)&pVVar56->vector[1].z,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_4;
                          return;
                        }
                      }
                      else {
                        pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
code_?:
                        pVVar22 = (Vector3__Array *)VStack_23.y;
                        if (((pGVar57 != (GameEventManager *)0x0) &&
                            (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                            pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar59 = (pGVar58->fields).LaserCommands,
                           pGVar59 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                    (pGVar59,0.2,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_4;
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
                      iVar60 = pVVar52->max_length;
                      pCVar43 = ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube;
                      VStack_23.z._0_1_ = (bool)iVar60;
                      VStack_23.z._1_1_ = (undefined1)(iVar60 >> 8);
                      VStack_23.z._2_2_ = (undefined2)(iVar60 >> 0x10);
                      fVar29 = pVVar52->vector[2].z;
                      IStack_21.z = SUB42(fVar29,0);
                      uStack_30 = (undefined2)((uint)fVar29 >> 0x10);
                      uStack_31 = (MVCubeModelBase *)
                                  CONCAT22(*(int16_t *)&pVVar52->vector[3].x,(undefined2)uStack_31);
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pMVar36 = pMStack_33;
                      iVector_00.y = uStack_30;
                      iVector_00.x = IStack_21.z;
                      iVector_00.z = uStack_31._2_2_;
                      pVVar56 = Cube::Cube_GetFaceVerticesWorld
                                          ((GameObject *)pMStack_33,pCVar43,
                                           CONCAT22(VStack_23.z._2_2_,
                                                    CONCAT11(VStack_23.z._1_1_,VStack_23.z._0_1_)),
                                           iVector_00,(MethodInfo *)0x0);
                      pVVar22 = (Vector3__Array *)VStack_23.y;
                      if (pVVar56 != (Vector3__Array *)0x0) {
                        cVar61 = '\0';
                        if ((pVVar56->max_length == 0) ||
                           (cVar61 = pVVar56->max_length == 0, pVVar56->max_length < 2))
                        goto code_?;
                        VStack_45.x = pVVar56->vector[1].x;
                        VStack_45.y = pVVar56->vector[1].y;
                        VStack_45.z = pVVar56->vector[1].z;
                        uVar62 = pVVar56->vector[0].x;
                        uVar63 = pVVar56->vector[0].y;
                        fVar29 = VStack_45.x + (float)uVar62;
                        fVar35 = VStack_45.y + (float)uVar63;
                        fVar64 = VStack_45.z + pVVar56->vector[0].z;
                        cVar61 = pVVar56->max_length < 2;
                        if (pVVar56->max_length < 3) goto code_?;
                        VStack_45.x = pVVar56->vector[2].x;
                        VStack_45.y = pVVar56->vector[2].y;
                        VStack_45.z = pVVar56->vector[2].z;
                        fVar29 = VStack_45.x + fVar29;
                        fVar35 = VStack_45.y + fVar35;
                        cVar61 = pVVar56->max_length < 3;
                        if (pVVar56->max_length < 4) goto code_?;
                        VStack_45.x = pVVar56->vector[3].x;
                        VStack_45.y = pVVar56->vector[3].y;
                        pVVar22 = (Vector3__Array *)((VStack_45.x + fVar29) * _UNK_?);
                        pVVar65 = (Vector3__Array *)((VStack_45.y + fVar35) * _UNK_?);
                        pMVar66 = (MVCubeModelBase *)
                                  ((pVVar56->vector[3].z + VStack_45.z + fVar64) * _UNK_?);
                        VStack_45.z = (float)pMVar66;
                        pMStack_33 = pMVar66;
                        pVStack_28 = pVVar65;
                        pVStack_25 = pVVar22;
                        if (pVVar52->vector[0].x == 0.0) {
                          IStack_21.x = 0;
                          IStack_21.y = 0;
                          IStack_21.z = 0;
                          uStack_30 = 0;
                          pVVar52 = pVVar22;
                          pVVar56 = pVVar65;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar67 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uVar68 = (pVVar67->upVector).x;
                          uVar69 = (pVVar67->upVector).y;
                          VStack_45.z = (float)pMStack_33 + (pVVar67->upVector).z;
                          VStack_45.y = (float)pVStack_28 + (float)uVar69;
                          VStack_45.x = (float)pVStack_25 + (float)uVar68;
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          start_00.y = (float)pVVar65;
                          start_00.x = (float)pVVar22;
                          start_00.z = (float)pMVar66;
                          end_00.z = VStack_45.z;
                          end_00.x = VStack_45.x;
                          end_00.y = VStack_45.y;
                          color_00.g = (float)_UNK_?;
                          color_00.r = (float)_UNK_?;
                          color_00.b._0_2_ = (short)_UNK_?;
                          color_00.b._2_2_ = (short)((uint)_UNK_? >> 0x10);
                          color_00.a._0_2_ = (short)_UNK_?;
                          color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                    (start_00,end_00,color_00,(MethodInfo *)0x0);
                          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
code_?:
                          VStack_23.y = (float)pVVar22;
                          pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          pVVar22 = (Vector3__Array *)VStack_23.y;
                          if (((pGVar57 != (GameEventManager *)0x0) &&
                              (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                              pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                             (pGVar59 = (pGVar58->fields).LaserCommands,
                             pGVar59 !=
                             (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *
                             )0x0)) {
                            to.y._0_2_ = (short)pVVar56;
                            to.x = (float)pVVar52;
                            to.y._2_2_ = (short)((uint)pVVar56 >> 0x10);
                            to.z._0_1_ = (char)pMVar66;
                            to.z._1_1_ = (char)((uint)pMVar66 >> 8);
                            to.z._2_2_ = (short)((uint)pMVar66 >> 0x10);
                            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                      (pGVar59,to,(MethodInfo *)0x0);
                            pGVar57 = MVGameControllerBase::
                                      MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                        else {
                          uStack_27 = (FaceCursor *)
                                      ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube;
                          pCStack_32 = (CubePickingInfo *)pVVar52->max_length;
                          fVar29 = pVVar52->vector[0].x;
                          VStack_23.z._0_1_ = SUB41(fVar29,0);
                          VStack_23.z._1_1_ = (undefined1)((uint)fVar29 >> 8);
                          VStack_23.z._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                          fVar29 = pVVar52->vector[2].z;
                          IStack_21.z = SUB42(fVar29,0);
                          uStack_30 = (undefined2)((uint)fVar29 >> 0x10);
                          uStack_31 = (MVCubeModelBase *)
                                      CONCAT22(*(int16_t *)&pVVar52->vector[3].x,
                                               (undefined2)uStack_31);
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          iVector.y = uStack_30;
                          iVector.x = IStack_21.z;
                          iVector.z._0_1_ = (char)((uint)uStack_31 >> 0x10);
                          iVector.z._1_1_ = (char)((uint)uStack_31 >> 0x18);
                          pVVar56 = Cube::Cube_GetEdgeVerticesWorld
                                              ((GameObject *)pMVar36,(Cube *)uStack_27,
                                               (Face__Enum)pCStack_32,
                                               CONCAT22(VStack_23.z._2_2_,
                                                        CONCAT11(VStack_23.z._1_1_,VStack_23.z._0_1_
                                                                )),iVector,(MethodInfo *)0x0);
                          if (*(bool *)&pVVar52->vector[0].y == 0) {
                            pVVar22 = (Vector3__Array *)
                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                            if (pVVar56 != (Vector3__Array *)0x0) {
                              if (*(bool *)((int)&pVVar52->vector[0].y + 1) == 0) {
                                cVar61 = '\0';
                                if ((pVVar56->max_length == 0) ||
                                   (cVar61 = pVVar56->max_length == 0, pVVar56->max_length < 2))
                                goto code_?;
                                VStack_45.x = pVVar56->vector[1].x;
                                VStack_45.y = pVVar56->vector[1].y;
                                uVar70 = pVVar56->vector[0].x;
                                uVar71 = pVVar56->vector[0].y;
                                fVar29 = (pVVar56->vector[1].z + pVVar56->vector[0].z) *
                                        _UNK_?;
                                VStack_23.x = (VStack_45.x + (float)uVar70) * _UNK_?;
                                pVVar22 = (Vector3__Array *)
                                          ((VStack_45.y + (float)uVar71) * _UNK_?);
                                VStack_23.z._0_1_ = SUB41(fVar29,0);
                                VStack_23.z._1_1_ = (undefined1)((uint)fVar29 >> 8);
                                VStack_23.z._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                              }
                              else {
                                cVar61 = pVVar56->max_length == 0;
                                if (pVVar56->max_length < 2) goto code_?;
                                uVar72 = pVVar56->vector[1].x;
                                pVVar22 = (Vector3__Array *)pVVar56->vector[1].y;
                                fVar29 = pVVar56->vector[1].z;
                                VStack_23.z._0_1_ = SUB41(fVar29,0);
                                VStack_23.z._1_1_ = (undefined1)((uint)fVar29 >> 8);
                                VStack_23.z._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                                VStack_23.x = (float)uVar72;
                              }
code_?:
                              fVar29 = (float)CONCAT22(VStack_23.z._2_2_,
                                                      CONCAT11(VStack_23.z._1_1_,VStack_23.z._0_1_))
                              ;
                              pMVar66 = (MVCubeModelBase *)
                                        (fVar29 + ((float)pMStack_33 - fVar29) * _UNK_?);
                              pVVar52 = (Vector3__Array *)
                                        (VStack_23.x +
                                        ((float)pVStack_25 - VStack_23.x) * _UNK_?);
                              pVVar56 = (Vector3__Array *)
                                        ((float)pVVar22 +
                                        ((float)pVStack_28 - (float)pVVar22) * _UNK_?);
                              VStack_45.z = (float)pMVar66;
                              goto code_?;
                            }
                          }
                          else {
                            pVVar22 = (Vector3__Array *)VStack_23.y;
                            if (pVVar56 != (Vector3__Array *)0x0) {
                              cVar61 = '\0';
                              if (pVVar56->max_length == 0) goto code_?;
                              uVar73 = pVVar56->vector[0].x;
                              uVar74 = pVVar56->vector[0].y;
                              fVar29 = pVVar56->vector[0].z;
                              VStack_23.y._0_2_ = (short)uVar74;
                              VStack_23.y._2_2_ = (undefined2)((uint)uVar74 >> 0x10);
                              IStack_21.x = (int16_t)uVar73;
                              IStack_21.y = (int16_t)((uint)uVar73 >> 0x10);
                              VStack_45.x = pVVar56->vector[0].x;
                              VStack_45.y = pVVar56->vector[0].y;
                              VStack_23.z._0_1_ = SUB41(fVar29,0);
                              VStack_23.z._1_1_ = (undefined1)((uint)fVar29 >> 8);
                              VStack_23.z._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                              IStack_21.z = VStack_23.y._0_2_;
                              uStack_30 = VStack_23.y._2_2_;
                              VStack_23.x = (float)uVar73;
                              VStack_45.z = fVar29;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar67 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar75 = (pVVar67->upVector).x;
                              uVar76 = (pVVar67->upVector).y;
                              VStack_45.z = VStack_45.z + (pVVar67->upVector).z;
                              VStack_45.y = VStack_45.y + (float)uVar76;
                              VStack_45.x = VStack_45.x + (float)uVar75;
                              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0
                                 ) {
                                func_?();
                              }
                              start.y = (float)(int)(CONCAT26(uStack_30,
                                                              CONCAT24(IStack_21.z,
                                                                       CONCAT22(IStack_21.y,
                                                                                IStack_21.x))) >>
                                                    0x20);
                              start.x = (float)CONCAT22(IStack_21.y,IStack_21.x);
                              start.z = fVar29;
                              end.z = VStack_45.z;
                              end.x = VStack_45.x;
                              end.y = VStack_45.y;
                              color.g = (float)_UNK_?;
                              color.r = (float)_UNK_?;
                              color.b._0_2_ = (short)_UNK_?;
                              color.b._2_2_ = (short)((uint)_UNK_? >> 0x10);
                              color.a._0_2_ = (short)_UNK_?;
                              color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                        (start,end,color,(MethodInfo *)0x0);
                              pVVar22 = (Vector3__Array *)
                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
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
            else {
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,1,(MethodInfo *)0x0);
                pCVar14 = pCStack_32;
                pFVar77 = (FaceCursor *)(pCStack_32->fields).cube;
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if (pFVar77 != (FaceCursor *)0x0) {
                  FaceCursor::FaceCursor_UpdateCursor
                            (pFVar77,(CubePickingInfo *)pVStack_25,(GameObject *)pMStack_33,
                             (MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
          else {
            pIVar78 = (IndentArea *)(pCStack_32->fields).pickedEdge;
            pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
            if (pIVar78 != (IndentArea *)0x0) {
              IndentArea::IndentArea_UpdateIndentArea
                        (pIVar78,(CubePickingInfo *)pVVar52,(GameObject *)pMStack_33,
                         (MethodInfo *)0x0);
              pCVar14 = pCStack_32;
              pCVar43 = (pCStack_32->fields).cube;
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,1,(MethodInfo *)0x0);
                uStack_27 = (FaceCursor *)(pCVar14->fields).cube;
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if (uStack_27 != (FaceCursor *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  iVar60 = pVVar52->max_length;
                  pCVar43 = ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube;
                  VStack_23.z._0_1_ = (bool)iVar60;
                  VStack_23.z._1_1_ = (undefined1)(iVar60 >> 8);
                  VStack_23.z._2_2_ = (undefined2)(iVar60 >> 0x10);
                  pVStack_28 = (Vector3__Array *)pVVar52->vector[2].z;
                  uStack_31 = (MVCubeModelBase *)
                              CONCAT22(*(int16_t *)&pVVar52->vector[3].x,(undefined2)uStack_31);
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  iVector_02.z._0_1_ = (char)((uint)uStack_31 >> 0x10);
                  iVector_02._0_4_ = pVStack_28;
                  iVector_02.z._1_1_ = (char)((uint)uStack_31 >> 0x18);
                  pVStack_28 = Cube::Cube_GetFaceVerticesWorld
                                         ((GameObject *)pMStack_33,pCVar43,
                                          CONCAT22(VStack_23.z._2_2_,
                                                   CONCAT11(VStack_23.z._1_1_,VStack_23.z._0_1_)),
                                          iVector_02,(MethodInfo *)0x0);
                  this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)func_?();
                  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata
                  ::__Il2CppFullySharedGenericType]::
                  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                             this_02,MethodInfo__System__Collections__Generic__List<int>__List__);
                  pGVar54 = (uStack_27->fields).gameObject;
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                  if (pGVar54 != (GameObject *)0x0) {
                    this_03 = (MeshFilter *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponent_1
                                        (pGVar54,
                                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                        );
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                    if (this_03 != (MeshFilter *)0x0) {
                      uStack_31 = (MVCubeModelBase *)
                                  UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                  MeshFilter_get_mesh(this_03,(MethodInfo *)0x0);
                      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                      if (uStack_31 != (MVCubeModelBase *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                  ((Mesh *)uStack_31,(MethodInfo *)0x0);
                        pMVar48 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                        if (this_02 !=
                            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)0x0) {
                          piVar79 = &(this_02->fields)._version;
                          *piVar79 = *piVar79 + 1;
                          pMVar80 = (this_02->fields)._items;
                          uVar34 = (this_02->fields)._size;
                          pVVar22 = (Vector3__Array *)VStack_23.y;
                          if (pMVar80 !=
                              (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                            if (uVar34 < pMVar80->max_length) {
                              (this_02->fields)._size = uVar34 + 1;
                              cVar61 = uVar34 < pMVar80->max_length;
                              if (!(bool)cVar61) goto code_?;
                              (&pMVar80->vector[0].index)[uVar34] = 0;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        ((List_1_System_Int32_ *)this_02,0,
                                         pMVar48->klass->rgctx_data[0xe].method);
                            }
                            pMVar48 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                            piVar79 = &(this_02->fields)._version;
                            *piVar79 = *piVar79 + 1;
                            pMVar80 = (this_02->fields)._items;
                            uVar34 = (this_02->fields)._size;
                            pVVar22 = (Vector3__Array *)VStack_23.y;
                            if (pMVar80 !=
                                (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                              if (uVar34 < pMVar80->max_length) {
                                (this_02->fields)._size = uVar34 + 1;
                                cVar61 = uVar34 < pMVar80->max_length;
                                if (!(bool)cVar61) goto code_?;
                                (&pMVar80->vector[0].index)[uVar34] = 3;
                              }
                              else {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                List_1_System_Int32__AddWithResize
                                          ((List_1_System_Int32_ *)this_02,3,
                                           pMVar48->klass->rgctx_data[0xe].method);
                              }
                              pMVar48 = 
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                              piVar79 = &(this_02->fields)._version;
                              *piVar79 = *piVar79 + 1;
                              pMVar80 = (this_02->fields)._items;
                              uVar34 = (this_02->fields)._size;
                              pVVar22 = (Vector3__Array *)VStack_23.y;
                              if (pMVar80 !=
                                  (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                                if (uVar34 < pMVar80->max_length) {
                                  (this_02->fields)._size = uVar34 + 1;
                                  cVar61 = uVar34 < pMVar80->max_length;
                                  if (!(bool)cVar61) goto code_?;
                                  (&pMVar80->vector[0].index)[uVar34] = 2;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]
                                  ::List_1_System_Int32__AddWithResize
                                            ((List_1_System_Int32_ *)this_02,2,
                                             pMVar48->klass->rgctx_data[0xe].method);
                                }
                                pMVar48 = 
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                piVar79 = &(this_02->fields)._version;
                                *piVar79 = *piVar79 + 1;
                                pMVar80 = (this_02->fields)._items;
                                uVar34 = (this_02->fields)._size;
                                pVVar22 = (Vector3__Array *)VStack_23.y;
                                if (pMVar80 !=
                                    (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                                {
                                  if (uVar34 < pMVar80->max_length) {
                                    (this_02->fields)._size = uVar34 + 1;
                                    cVar61 = uVar34 < pMVar80->max_length;
                                    if (!(bool)cVar61) goto code_?;
                                    (&pMVar80->vector[0].index)[uVar34] = 2;
                                  }
                                  else {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Int32]::List_1_System_Int32__AddWithResize
                                              ((List_1_System_Int32_ *)this_02,2,
                                               pMVar48->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar48 = 
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                  piVar79 = &(this_02->fields)._version;
                                  *piVar79 = *piVar79 + 1;
                                  pMVar80 = (this_02->fields)._items;
                                  uVar34 = (this_02->fields)._size;
                                  pVVar22 = (Vector3__Array *)VStack_23.y;
                                  if (pMVar80 !=
                                      (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                      0x0) {
                                    if (uVar34 < pMVar80->max_length) {
                                      (this_02->fields)._size = uVar34 + 1;
                                      cVar61 = uVar34 < pMVar80->max_length;
                                      if (!(bool)cVar61) goto code_?;
                                      (&pMVar80->vector[0].index)[uVar34] = 1;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Int32]::List_1_System_Int32__AddWithResize
                                                ((List_1_System_Int32_ *)this_02,1,
                                                 pMVar48->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar48 = 
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                    piVar79 = &(this_02->fields)._version;
                                    *piVar79 = *piVar79 + 1;
                                    pMVar80 = (this_02->fields)._items;
                                    uVar34 = (this_02->fields)._size;
                                    pVVar22 = (Vector3__Array *)VStack_23.y;
                                    if (pMVar80 !=
                                        (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                        0x0) {
                                      if (uVar34 < pMVar80->max_length) {
                                        (this_02->fields)._size = uVar34 + 1;
                                        cVar61 = uVar34 < pMVar80->max_length;
                                        if (!(bool)cVar61) goto code_?;
                                        (&pMVar80->vector[0].index)[uVar34] = 0;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)this_02,0,
                                                   pMVar48->klass->rgctx_data[0xe].method);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_vertices((Mesh *)uStack_31,pVStack_28,
                                                        (MethodInfo *)0x0);
                                      VStack_23.z._0_1_ = *(bool *)((int)&pVVar52->vector[0].y + 1);
                                      value_00 = FaceCursor::FaceCursor_SetUVs
                                                           (uStack_27,
                                                            (Edge__Enum)pVVar52->vector[0].x,
                                                            VStack_23.z._0_1_,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                                ((Mesh *)uStack_31,value_00,(MethodInfo *)0x0);
                                      pMVar80 = mscorlib.dll::System::Collections::Generic::
                                                List`1[UnityEngine::UIElements::Internal::
                                                MultiColumnCollectionHeader+ViewState+ColumnState]::
                                                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                          (this_02,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                      pMVar36 = uStack_31;
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_triangles((Mesh *)uStack_31,(Int32__Array *)pMVar80,
                                                         (MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateNormals((Mesh *)pMVar36,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateBounds((Mesh *)pMVar36,(MethodInfo *)0x0);
                                      pFVar77 = uStack_27;
                                      if (pVVar52->vector[0].x == 0.0) {
                                        pGVar54 = (uStack_27->fields).gameObject;
                                        pVVar22 = (Vector3__Array *)
                                                  CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar22 = (Vector3__Array *)
                                                    CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            pBVar42 = (Byte__Array *)(pFVar77->fields).materialNone;
                                            uVar46 = SUB41(pBVar42,0);
                                            uVar47 = (undefined1)((uint)pBVar42 >> 8);
                                            uVar6 = (undefined2)((uint)pBVar42 >> 0x10);
                                            goto code_?;
                                          }
                                        }
                                      }
                                      else if ((*(bool *)&pVVar52->vector[0].y == 0) &&
                                              (*(bool *)((int)&pVVar52->vector[0].y + 1) == 0)) {
                                        pGVar54 = (uStack_27->fields).gameObject;
                                        pVVar22 = (Vector3__Array *)
                                                  CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar22 = (Vector3__Array *)
                                                    CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            pBVar42 = (Byte__Array *)(pFVar77->fields).materialEdge;
                                            uVar46 = SUB41(pBVar42,0);
                                            uVar47 = (undefined1)((uint)pBVar42 >> 8);
                                            uVar6 = (undefined2)((uint)pBVar42 >> 0x10);
code_?:
                                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                            Renderer_set_sharedMaterial
                                                      (this_04,(Material *)
                                                               CONCAT22(uVar6,CONCAT11(uVar47,
                                                  uVar46)),(MethodInfo *)0x0);
                                            pGVar54 = (pFVar77->fields).gameObject;
                                            pVVar22 = (Vector3__Array *)
                                                      CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                            if (pGVar54 != (GameObject *)0x0) {
                                              pTVar81 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar54,(MethodInfo *)0x0);
                                              VStack_23.z._0_1_ = (bool)pTVar81;
                                              VStack_23.z._1_1_ = (undefined1)((uint)pTVar81 >> 8);
                                              VStack_23.z._2_2_ =
                                                   (undefined2)((uint)pTVar81 >> 0x10);
                                              pVVar56 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Mesh::Mesh_get_vertices
                                                                  ((Mesh *)uStack_31,
                                                                   (MethodInfo *)0x0);
                                              pVVar22 = (Vector3__Array *)
                                                        CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_
                                                                );
                                              if (pVVar56 != (Vector3__Array *)0x0) {
                                                cVar61 = '\0';
                                                if (pVVar56->max_length == 0) goto code_?;
                                                pVVar22 = (Vector3__Array *)VStack_23.y;
                                                if (CONCAT22(VStack_23.z._2_2_,
                                                             CONCAT11(VStack_23.z._1_1_,
                                                                      VStack_23.z._0_1_)) != 0) {
                                                  pVVar44 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_TransformPoint
                                                                      (&VStack_45,
                                                                       (Transform *)
                                                                       CONCAT22(VStack_23.z._2_2_,
                                                                                CONCAT11(VStack_23.z
                                                                                         ._1_1_,
                                                  VStack_23.z._0_1_)),pVVar56->vector[0],
                                                  (MethodInfo *)0x0);
                                                  fVar29 = pVVar44->x;
                                                  fVar35 = pVVar44->y;
                                                  fVar64 = pVVar44->z;
                                                  pGVar54 = (pFVar77->fields).gameObject;
                                                  pVVar22 = (Vector3__Array *)
                                                            CONCAT22(VStack_23.y._2_2_,
                                                                     VStack_23.y._0_2_);
                                                  if (pGVar54 != (GameObject *)0x0) {
                                                    pTVar81 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar54,(MethodInfo *)0x0);
                                                    pVVar22 = (Vector3__Array *)
                                                              CONCAT22(VStack_23.y._2_2_,
                                                                       VStack_23.y._0_2_);
                                                    if (pTVar81 != (Transform *)0x0) {
                                                      pVVar44 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          (&VStack_23,pTVar81,
                                                                           (MethodInfo *)0x0);
                                                      VStack_45.x = pVVar44->x;
                                                      VStack_45.y = pVVar44->y;
                                                      VStack_45.z = pVVar44->z;
                                                      pVVar22 = (Vector3__Array *)VStack_23.y;
                                                      if (pVStack_28 != (Vector3__Array *)0x0) {
                                                        cVar61 = '\0';
                                                        if (pVStack_28->max_length == 0)
                                                        goto code_?;
                                                        uVar82 = pVStack_28->vector[0].x;
                                                        uVar83 = pVStack_28->vector[0].y;
                                                        fVar84 = ((Vector3 *)
                                                                 &pVStack_28->vector[0].z)->x;
                                                        VStack_23.y._0_2_ = (short)uVar83;
                                                        VStack_23.y._2_2_ =
                                                             (undefined2)((uint)uVar83 >> 0x10);
                                                        VStack_23.z._0_1_ = SUB41(fVar84,0);
                                                        VStack_23.z._1_1_ =
                                                             (undefined1)((uint)fVar84 >> 8);
                                                        VStack_23.z._2_2_ =
                                                             (undefined2)((uint)fVar84 >> 0x10);
                                                        uVar85 = pVVar52->vector[0].z;
                                                        uVar86 = pVVar52->vector[1].x;
                                                        VStack_45.z = VStack_45.z +
                                                                      (fVar84 - fVar64) +
                                                                      pVVar52->vector[1].y *
                                                                      _UNK_?;
                                                        fVar35 = VStack_45.y +
                                                                 ((float)uVar83 - fVar35) +
                                                                 (float)uVar86 * _UNK_?;
                                                        value.y._0_2_ = SUB42(fVar35,0);
                                                        value.x = VStack_45.x +
                                                                  ((float)uVar82 - fVar29) +
                                                                  (float)uVar85 * _UNK_?;
                                                        value.y._2_2_ =
                                                             (short)((uint)fVar35 >> 0x10);
                                                        value.z = VStack_45.z;
                                                        VStack_23.x = (float)uVar82;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_position
                                                                  (pTVar81,value,(MethodInfo *)0x0);
                                                        pCVar14 = pCStack_32;
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
                                      else {
                                        pGVar54 = (uStack_27->fields).gameObject;
                                        pVVar22 = (Vector3__Array *)
                                                  CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar22 = (Vector3__Array *)
                                                    CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            uVar87 = *(undefined4 *)
                                                      &(pFVar77->fields).materialCorner;
                                            uVar46 = (undefined1)uVar87;
                                            uVar47 = (undefined1)((uint)uVar87 >> 8);
                                            uVar6 = (undefined2)((uint)uVar87 >> 0x10);
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
    else {
      IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
      pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar36 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar78 = (((this->fields).modelCursor)->fields).indentArea;
        IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
        pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
        if ((pMVar36 != (MVCubeModelBase *)0x0) &&
           (IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
           pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
           pIVar78 != (IndentArea *)0x0)) {
          pCVar88 = (e->fields)._SelectedCube_k__BackingField;
          uVar6 = SUB42(pCVar88,0);
          uVar8 = (undefined2)((uint)pCVar88 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar78,pCVar88,(pMVar36->fields)._.gameObject,(MethodInfo *)0x0);
          pMVar19 = (this->fields).modelCursor;
          IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
          pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
          if ((pMVar19 != (ModelCursor3D *)0x0) &&
             (pIVar78 = (pMVar19->fields).indentArea,
             IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
             pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
             pIVar78 != (IndentArea *)0x0)) {
            bVar18 = IndentArea::IndentArea_IsColliding(pIVar78,(MethodInfo *)0x0);
            if (bVar18 == 0) {
              pMVar19 = (this->fields).modelCursor;
              IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if (((pMVar19 != (ModelCursor3D *)0x0) &&
                  (pIVar78 = (pMVar19->fields).indentArea,
                  IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                  pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                  pIVar78 != (IndentArea *)0x0)) &&
                 (pGVar54 = (pIVar78->fields).gameObject,
                 IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                 pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                bVar18 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,bVar18,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar88 = (e->fields)._SelectedCube_k__BackingField;
              IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
              pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
              if (pCVar88 != (CubePickingInfo *)0x0) {
                (pCVar88->fields).pickedEdge = 0;
                pMVar19 = (this->fields).modelCursor;
                IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x);
                pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_);
                if (((pMVar19 != (ModelCursor3D *)0x0) &&
                    (pIVar78 = (pMVar19->fields).indentArea,
                    IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                    pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                    pIVar78 != (IndentArea *)0x0)) &&
                   (pGVar54 = (pIVar78->fields).gameObject,
                   IStack_21._0_4_ = CONCAT22(IStack_21.y,IStack_21.x),
                   pVVar22 = (Vector3__Array *)CONCAT22(VStack_23.y._2_2_,VStack_23.y._0_2_),
                   pGVar54 != (GameObject *)0x0)) {
                  bVar18 = 1;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  cVar61 = '\0';
  VStack_23.y = (float)pVVar22;
  func_?();
  func_?();
  func_?();
  pVVar52 = pVVar20;
code_?:
  func_?();
  cRam_? = cRam_? + extraout_CH + cVar61;
  pCVar89 = (CubePickingInfo__Class *)in(extraout_DX);
  pVVar52->klass = (Vector3__Array__Class *)pCVar89;
  pcVar90 = (code *)swi(3);
  (*pcVar90)();
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

