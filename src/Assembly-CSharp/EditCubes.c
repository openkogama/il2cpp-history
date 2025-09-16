
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
    uVar6 = 0x7068;
    uVar8 = 0x11b4;
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
  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
  if (pMVar19 != (ModelCursor3D *)0x0) {
    if ((pMVar19->fields).indentArea == (IndentArea *)0x0 ||
        (this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar23 = 0x1045;
      bVar18 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        pVStack_24 = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)pVStack_24;
      }
      EditCubes_SetEditDetail(this,e,(MethodInfo *)0x0);
      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
      cStack_25 = '\0';
      uStack_26 = (FaceCursor *)((uint)uStack_26 & 0xffffff);
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
            pVStack_24 = (Vector3__Array *)
                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                   (StringLiteral_Mouse_X,(MethodInfo *)0x0);
            pVStack_27 = (Vector3__Array *)
                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            fVar28 = (float)pVStack_24 * _UNK_?;
            IStack_20._0_4_ = (float)pVStack_27 * _UNK_?;
            IStack_20.z = 0;
            uStack_29 = 0;
            pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
            if (e != (CubeModelingStateMachine *)0x0) {
              uStack_30 = (e->fields)._TargetCubeModel_k__BackingField;
              pVStack_24 = (Vector3__Array *)(this->fields).mouseSensitivity;
              pCStack_31 = (this->fields).movingEdgeCube;
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if (pCStack_31 != (CubePickingInfo *)0x0) {
                pMStack_32 = (MVCubeModelBase *)
                             CONCAT31(pMStack_32._1_3_,(pCStack_31->fields).pickedEdgeIndex0);
                uVar33 = (uint)pVStack_27 >> 8;
                pVStack_27 = (Vector3__Array *)
                             CONCAT31((int3)uVar33,
                                      (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
                fVar34 = (float)IStack_20._0_4_;
                if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  fVar34 = (float)IStack_20._0_4_;
                }
                IStack_20.y = (int16_t)((uint)fVar34 >> 0x10);
                IStack_20.x = SUB42(fVar34,0);
                uVar6 = (undefined2)((uint)pVStack_24 >> 0x10);
                mousePositionDelta.y._0_2_ = IStack_20.x;
                mousePositionDelta.x = fVar28;
                mousePositionDelta.y._2_2_ = IStack_20.y;
                mousePositionDelta.z._2_2_ = uStack_29;
                mousePositionDelta.z._0_2_ = IStack_20.z;
                IStack_20._0_4_ = fVar34;
                pVStack_24 = (Vector3__Array *)
                             SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                       (uStack_30,pCStack_31,mousePositionDelta,
                                        &(this->fields).delta,&(this->fields).deltaAccum,
                                        (float)pVStack_24,&bStack_13,(bool)pMStack_32,
                                        (bool)pVStack_27,&EStack_17,(MethodInfo *)0x0);
                if (pVStack_24 == (Vector3__Array *)0x0) {
                  pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pMVar35 == (MVCubeModelBase *)0x0) goto code_?;
                  iVar36 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar35,(MethodInfo *)0x0)
                  ;
                  CubeModelTool::CubeModelTool_SendCubeEvent(iVar36,EStack_17,(MethodInfo *)0x0);
                }
                if ((bStack_13 & (this->fields).edgeHasMoved == 0) != 0) {
                  (this->fields).edgeHasMoved = 1;
                }
                if (pVStack_24 == (Vector3__Array *)0x1) {
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_24 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_26._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_27 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos_01.z = (int16_t)pVStack_24;
                    localPos_01._0_4_ = &IStack_20;
                    IVar37 = Cube::Cube_GetCubePosAboveFace
                                       (localPos_01,CONCAT22(uVar6,uStack_26._2_2_),
                                        (MethodInfo *)pVStack_27);
                    pIVar38 = IVar37._0_4_;
                    uStack_30 = *(MVCubeModelBase **)pIVar38;
                    uStack_26 = (FaceCursor *)CONCAT22(pIVar38->z,(undefined2)uStack_26);
                    pMStack_32 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar38,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_32 == (MVCubeModelBase *)0x0) {
                      pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (pMVar35 != (MVCubeModelBase *)0x0) {
                        pos_01.z = uStack_26._2_2_;
                        pos_01._0_4_ = uStack_30;
                        pVStack_24 = (Vector3__Array *)
                                     MVCubeModelBase::MVCubeModelBase_GetCube
                                               (pMVar35,pos_01,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                           ((CubeBase *)pVStack_24,(CubeBase *)0x0,(MethodInfo *)0x0
                                           );
                        if (bVar18 == 0) goto code_?;
                        pos_05.z = uStack_26._2_2_;
                        pos_05._0_4_ = uStack_30;
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,pos_05,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                        pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_24 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar39 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar21 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_24,FVar39,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pBVar40 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar21,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_24,pBVar40,pBVar42,(MethodInfo *)0x0);
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if (pVStack_27 != (Vector3__Array *)0x0) {
                            pos_06.z = uStack_26._2_2_;
                            pos_06._0_4_ = uStack_30;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_27,pos_06,(CubeBase *)pVStack_24,
                                       (MethodInfo *)0x0);
                            pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                            if (pMVar35 != (MVCubeModelBase *)0x0) {
                              iVar36 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar35,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar36,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                              pCVar14 = (this->fields).movingEdgeCube;
                              pCStack_31 = (CubePickingInfo *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        (pCStack_31,pCVar14,(MethodInfo *)0x0);
                              pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                              pVVar21 = (Vector3__Array *)
                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                              if (pMVar35 != (MVCubeModelBase *)0x0) {
                                pos_07.z = uStack_26._2_2_;
                                pos_07._0_4_ = uStack_30;
                                pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                    (pMVar35,pos_07,(MethodInfo *)0x0);
                                pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                                pVVar21 = (Vector3__Array *)
                                          CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                if (pCStack_31 != (CubePickingInfo *)0x0) {
                                  (pCStack_31->fields).cube = pCVar43;
                                  func_?();
                                  *(MVCubeModelBase **)&(pCStack_31->fields).iLocalPos = uStack_30;
                                  (pCStack_31->fields).iLocalPos.z = uStack_26._2_2_;
                                  pCVar14 = (this->fields).movingEdgeCube;
                                  pVVar21 = (Vector3__Array *)
                                            CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                     (pVVar21 = (Vector3__Array *)
                                                CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                                     (e->fields)._TargetCubeModel_k__BackingField !=
                                     (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                               (MethodInfo *)0x0);
                                    (this->fields).movingEdgeCube = pCStack_31;
                                    func_?();
                                    pVStack_24 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar21 = (Vector3__Array *)
                                              CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                    if (pVStack_24 != (Vector3__Array *)0x0) {
                                      pVVar44 = Cube::Cube_GetFaceAxis
                                                          (&VStack_45,pVStack_24->max_length,
                                                           (MethodInfo *)0x0);
                                      axis_02.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                      axis_02._0_10_ = *(unkbyte10 *)pVVar44;
                                      Cube::Cube_MoveFace((CubePickingInfo *)pVStack_24,-0.75,
                                                          axis_02,(CubeOutOfBoundState__Enum *)
                                                                  &stack0xffffff4c,(MethodInfo *)0x0
                                                         );
code_?:
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar21 = (Vector3__Array *)
                                                CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                         (pVVar21 = (Vector3__Array *)
                                                    CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
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
                      VStack_45.z = (float)pMStack_32;
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
                      pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                      pMVar19 = (this->fields).modelCursor;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if ((pMVar35 != (MVCubeModelBase *)0x0) &&
                         (pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         pMVar19 != (ModelCursor3D *)0x0)) {
                        iPos_04.z._0_1_ = (char)((uint)uStack_26 >> 0x10);
                        iPos_04._0_4_ = uStack_30;
                        iPos_04.z._1_1_ = (char)((uint)uStack_26 >> 0x18);
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)pMVar19,iPos_04,(pMVar35->fields)._.gameObject,
                                   pMStack_32 == (MVCubeModelBase *)0x2,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                           pMVar35 != (MVCubeModelBase *)0x0)) {
                          pCVar43 = (pCVar14->fields).cube;
                          uVar46 = SUB41(pCVar43,0);
                          uVar47 = (undefined1)((uint)pCVar43 >> 8);
                          uVar6 = (undefined2)((uint)pCVar43 >> 0x10);
code_?:
                          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                    (pMVar35,(pCVar14->fields).iLocalPos,
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
                else if (pVStack_24 == (Vector3__Array *)0x4) {
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_24 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_26._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_27 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos_00.z = (int16_t)pVStack_24;
                    localPos_00._0_4_ = &IStack_20;
                    IVar37 = Cube::Cube_GetCubePosAboveFace
                                       (localPos_00,CONCAT22(uVar6,uStack_26._2_2_),
                                        (MethodInfo *)pVStack_27);
                    pIVar38 = IVar37._0_4_;
                    uStack_30 = *(MVCubeModelBase **)pIVar38;
                    uStack_26 = (FaceCursor *)CONCAT22(pIVar38->z,(undefined2)uStack_26);
                    pMStack_32 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar38,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_32 != (MVCubeModelBase *)0x0) {
code_?:
                      VStack_45.z = (float)pMStack_32;
                      VStack_45.y = -NAN;
                      VStack_45.x = (float)TypeInfo__CanPerformCubeActionResult;
                      str1 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&VStack_45,(MethodInfo *)0x0);
                      uVar6 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                      uVar8 = (undefined2)
                               ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                      goto code_?;
                    }
                    pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (pMVar35 != (MVCubeModelBase *)0x0) {
                      pos_00.z = uStack_26._2_2_;
                      pos_00._0_4_ = uStack_30;
                      pVStack_24 = (Vector3__Array *)
                                   MVCubeModelBase::MVCubeModelBase_GetCube
                                             (pMVar35,pos_00,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                         ((CubeBase *)pVStack_24,(CubeBase *)0x0,(MethodInfo *)0x0);
                      if (bVar18 == 0) goto code_?;
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                   (MethodInfo *)0x0);
                        pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_24 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar39 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar21 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_24,FVar39,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pBVar40 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar21,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_24,pBVar40,pBVar42,(MethodInfo *)0x0);
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if (pVStack_27 != (Vector3__Array *)0x0) {
                            pos_10.z = uStack_26._2_2_;
                            pos_10._0_4_ = uStack_30;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_27,pos_10,(CubeBase *)pVStack_24,
                                       (MethodInfo *)0x0);
                            pCVar14 = (this->fields).movingEdgeCube;
                            pCStack_31 = (CubePickingInfo *)func_?();
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      (pCStack_31,pCVar14,(MethodInfo *)0x0);
                            pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                            if (pMVar35 != (MVCubeModelBase *)0x0) {
                              pos_04.z = uStack_26._2_2_;
                              pos_04._0_4_ = uStack_30;
                              pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar35,pos_04,(MethodInfo *)0x0);
                              pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                              pVVar21 = (Vector3__Array *)
                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                              if (pCStack_31 != (CubePickingInfo *)0x0) {
                                (pCStack_31->fields).cube = pCVar43;
                                func_?();
                                *(MVCubeModelBase **)&(pCStack_31->fields).iLocalPos = uStack_30;
                                (pCStack_31->fields).iLocalPos.z = uStack_26._2_2_;
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar21 = (Vector3__Array *)
                                          CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pVVar21 = (Vector3__Array *)
                                              CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                   (MVCubeModelBase *)0x0)) {
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            ((e->fields)._TargetCubeModel_k__BackingField,
                                             (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                             (MethodInfo *)0x0);
                                  (this->fields).movingEdgeCube = pCStack_31;
                                  func_?();
                                  pVStack_24 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                  pVVar21 = (Vector3__Array *)
                                            CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                  if (pVStack_24 != (Vector3__Array *)0x0) {
                                    pVVar44 = Cube::Cube_GetFaceAxis
                                                        (&VStack_45,pVStack_24->max_length,
                                                         (MethodInfo *)0x0);
                                    axis.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                    axis._0_10_ = *(unkbyte10 *)pVVar44;
                                    Cube::Cube_MoveFace((CubePickingInfo *)pVStack_24,-1.0,axis,
                                                        (CubeOutOfBoundState__Enum *)
                                                        &stack0xffffff50,(MethodInfo *)0x0);
                                    pVStack_24 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar21 = (Vector3__Array *)
                                              CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                    if (pVStack_24 != (Vector3__Array *)0x0) {
                                      pVVar44 = Cube::Cube_GetFaceAxis
                                                          (&VStack_45,pVStack_24->max_length,
                                                           (MethodInfo *)0x0);
                                      axis_01.z._2_2_ = (short)((uint)pVVar44->z >> 0x10);
                                      axis_01._0_10_ = *(unkbyte10 *)pVVar44;
                                      Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_24,-0.75,
                                                          axis_01,(CubeOutOfBoundState__Enum *)
                                                                  &stack0xffffff50,(MethodInfo *)0x0
                                                         );
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar21 = (Vector3__Array *)
                                                CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                         (pVVar21 = (Vector3__Array *)
                                                    CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
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
                else if (pVStack_24 == (Vector3__Array *)0x5) {
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pVStack_24 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                    uStack_26._2_2_ = (pCVar14->fields).iLocalPos.z;
                    pVStack_27 = (Vector3__Array *)
                                 (((this->fields).movingEdgeCube)->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos.z = (int16_t)pVStack_24;
                    localPos._0_4_ = &IStack_20;
                    IVar37 = Cube::Cube_GetCubePosAboveFace
                                       (localPos,CONCAT22(uVar6,uStack_26._2_2_),
                                        (MethodInfo *)pVStack_27);
                    pIVar38 = IVar37._0_4_;
                    uStack_30 = *(MVCubeModelBase **)pIVar38;
                    uStack_26 = (FaceCursor *)CONCAT22(pIVar38->z,(undefined2)uStack_26);
                    pMStack_32 = (MVCubeModelBase *)
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                           (e,*pIVar38,(this->fields).movingEdgeCube,
                                            (MethodInfo *)0x0);
                    if (pMStack_32 != (MVCubeModelBase *)0x0) {
code_?:
                      VStack_45.z = (float)pMStack_32;
                      VStack_45.y = -NAN;
                      VStack_45.x = (float)TypeInfo__CanPerformCubeActionResult;
                      str1 = mscorlib.dll::System::Enum::Enum_ToString
                                       ((Enum *)&VStack_45,(MethodInfo *)0x0);
                      uVar6 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                      uVar8 = (undefined2)
                               ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
                      goto code_?;
                    }
                    pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (pMVar35 != (MVCubeModelBase *)0x0) {
                      pos.z = uStack_26._2_2_;
                      pos._0_4_ = uStack_30;
                      pVStack_24 = (Vector3__Array *)
                                   MVCubeModelBase::MVCubeModelBase_GetCube
                                             (pMVar35,pos,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                         ((CubeBase *)pVStack_24,(CubeBase *)0x0,(MethodInfo *)0x0);
                      if (bVar18 == 0) goto code_?;
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                                   (MethodInfo *)0x0);
                        pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                        pCVar14 = (this->fields).movingEdgeCube;
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pVStack_24 = (Vector3__Array *)(pCVar14->fields).cube;
                          FVar39 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVVar21 = Cube::Cube_GetCorners
                                              ((Cube *)pVStack_24,FVar39,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pBVar40 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                    CubeDataPacker_CornersToByteArray(pVVar21,(MethodInfo *)0x0);
                          uVar41 = CubeModelingStateMachine::
                                   CubeModelingStateMachine_get_CurrentMaterialId
                                             (e,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar41);
                          pBVar42 = Cube::Cube_CreateMaterialArray(uVar41,(MethodInfo *)0x0);
                          pVStack_24 = (Vector3__Array *)func_?();
                          Cube::Cube__ctor((Cube *)pVStack_24,pBVar40,pBVar42,(MethodInfo *)0x0);
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if (pVStack_27 != (Vector3__Array *)0x0) {
                            pos_09.z = uStack_26._2_2_;
                            pos_09._0_4_ = uStack_30;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      ((MVCubeModelBase *)pVStack_27,pos_09,(CubeBase *)pVStack_24,
                                       (MethodInfo *)0x0);
                            pCVar14 = (this->fields).movingEdgeCube;
                            pCStack_31 = (CubePickingInfo *)func_?();
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      (pCStack_31,pCVar14,(MethodInfo *)0x0);
                            pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                            if (pMVar35 != (MVCubeModelBase *)0x0) {
                              pos_03.z = uStack_26._2_2_;
                              pos_03._0_4_ = uStack_30;
                              pCVar43 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar35,pos_03,(MethodInfo *)0x0);
                              pCVar43 = Cube::Cube_Clone_1(pCVar43,(MethodInfo *)0x0);
                              pVVar21 = (Vector3__Array *)
                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                              if (pCStack_31 != (CubePickingInfo *)0x0) {
                                (pCStack_31->fields).cube = pCVar43;
                                func_?();
                                *(MVCubeModelBase **)&(pCStack_31->fields).iLocalPos = uStack_30;
                                (pCStack_31->fields).iLocalPos.z = uStack_26._2_2_;
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar21 = (Vector3__Array *)
                                          CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                   (pVVar21 = (Vector3__Array *)
                                              CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                   (MVCubeModelBase *)0x0)) {
                                  MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                            ((e->fields)._TargetCubeModel_k__BackingField,
                                             (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                             (MethodInfo *)0x0);
                                  (this->fields).movingEdgeCube = pCStack_31;
                                  func_?();
                                  pVStack_24 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                  pVVar21 = (Vector3__Array *)
                                            CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                  if (pVStack_24 != (Vector3__Array *)0x0) {
                                    pVVar44 = Cube::Cube_GetFaceAxis
                                                        (&VStack_45,pVStack_24->max_length,
                                                         (MethodInfo *)0x0);
                                    Cube::Cube_MoveFace((CubePickingInfo *)pVStack_24,-1.0,*pVVar44,
                                                        (CubeOutOfBoundState__Enum *)
                                                        &stack0xffffff54,(MethodInfo *)0x0);
                                    pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                    pVVar21 = (Vector3__Array *)
                                              CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                    if (pVStack_27 != (Vector3__Array *)0x0) {
                                      pVStack_24 = (Vector3__Array *)
                                                   Cube::Cube_GetFaceAxis
                                                             (&VStack_45,pVStack_27->max_length,
                                                              (MethodInfo *)0x0);
                                      pCVar14 = (this->fields).movingEdgeCube;
                                      pVVar21 = (Vector3__Array *)
                                                CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                      if (pCVar14 != (CubePickingInfo *)0x0) {
                                        axis_00.z._2_2_ =
                                             (short)((uint)((CubePickingInfo__Fields *)
                                                           &pVStack_24->bounds)->cube >> 0x10);
                                        axis_00._0_10_ = *(unkbyte10 *)pVStack_24;
                                        Cube::Cube_MoveVertex
                                                  ((CubePickingInfo *)pVStack_27,-0.75,axis_00,
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
                else if (pVStack_24 == (Vector3__Array *)0x2) {
                  pMVar48 = (MethodInfo *)0x0;
                  pCVar14 = (this->fields).movingEdgeCube;
                  bVar18 = (bool)pCVar14;
                  targetGameObject = e;
                  CVar49 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                     (e,pCVar14,(MethodInfo *)0x0);
                  pCVar14 = (this->fields).movingEdgeCube;
                  if (CVar49 == CanPerformCubeActionResult__Enum_Yes) {
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      pVStack_24 = *(Vector3__Array **)&(pCVar14->fields).iLocalPos;
                      iVar15 = (pCVar14->fields).iLocalPos.z;
                      VStack_22.z._0_1_ = (bool)iVar15;
                      VStack_22.z._1_1_ = (undefined1)((ushort)iVar15 >> 8);
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar21 = pVStack_24;
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        pVStack_27 = (Vector3__Array *)(pCVar14->fields).pickedFace;
                        VStack_22.y = (float)pVStack_24;
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          cRam_? = '\x01';
                        }
                        IStack_20.x = 0;
                        IStack_20.y = 0;
                        IStack_20.z = 0;
                        pVVar21 = (Vector3__Array *)VStack_22.y;
                        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                          pVVar21 = (Vector3__Array *)VStack_22.y;
                        }
                        VStack_22.y._2_2_ = (undefined2)((uint)pVVar21 >> 0x10);
                        iVar36 = CONCAT22((short)(CONCAT13(VStack_22.z._1_1_,
                                                           CONCAT12(VStack_22.z._0_1_,
                                                                    VStack_22.y._2_2_)) >> 0x10),
                                          VStack_22.y._2_2_);
                        VStack_22.y = (float)pVVar21;
                        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                  (&IStack_20,(int32_t)pVStack_24,iVar36,
                                   CONCAT22(VStack_22.z._2_2_,
                                            CONCAT11(VStack_22.z._1_1_,VStack_22.z._0_1_)),
                                   (MethodInfo *)0x0);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        pVVar44 = Cube::Cube_GetFaceAxis
                                            (&VStack_45,(Face__Enum)pVStack_27,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        uVar50 = pVVar44->x;
                        uVar51 = pVVar44->y;
                        fVar28 = pVVar44->z;
                        VStack_22.y._0_2_ = (short)uVar51;
                        VStack_22.y._2_2_ = (undefined2)((uint)uVar51 >> 0x10);
                        VStack_22.z._0_1_ = SUB41(fVar28,0);
                        VStack_22.z._1_1_ = (undefined1)((uint)fVar28 >> 8);
                        VStack_22.z._2_2_ = (undefined2)((uint)fVar28 >> 0x10);
                        IStack_20.x = IStack_20.x - (short)(int)(float)uVar50;
                        IStack_20.y = IStack_20.y - (short)(int)(float)uVar51;
                        uStack_26 = (FaceCursor *)
                                    CONCAT22(IStack_20.z - (short)(int)fVar28,(undefined2)uStack_26);
                        VStack_22.x = (float)uVar50;
                        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                        pVVar21 = (Vector3__Array *)uVar51;
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pos_02.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          pos_02._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,pos_02,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                             pVVar21 = (Vector3__Array *)
                                       CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                             (e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)
                             ) {
                            pos_08.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                            pos_08._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                            MVCubeModelBase::MVCubeModelBase_RemoveCube
                                      ((e->fields)._TargetCubeModel_k__BackingField,pos_08,
                                       (MethodInfo *)0x0);
                            pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                            IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                            if (pMVar35 != (MVCubeModelBase *)0x0) {
                              pos_11.y = IStack_20.y;
                              pos_11.x = IStack_20.x;
                              pos_11.z._0_1_ = (char)((uint)uStack_26 >> 0x10);
                              pos_11.z._1_1_ = (char)((uint)uStack_26 >> 0x18);
                              pVVar21 = (Vector3__Array *)
                                        MVCubeModelBase::MVCubeModelBase_GetCube
                                                  (pMVar35,pos_11,(MethodInfo *)0x0);
                              pVStack_27 = pVVar21;
                              if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                       CubeBase_op_Inequality
                                                 ((CubeBase *)pVVar21,(CubeBase *)0x0,
                                                  (MethodInfo *)0x0);
                              if (bVar18 == 0) {
                                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                func_?();
                              }
                              else {
                                pCVar14 = (this->fields).movingEdgeCube;
                                pVVar52 = (Vector3__Array *)func_?();
                                pVStack_24 = pVVar52;
                                CubePickingInfo::CubePickingInfo__ctor_1
                                          ((CubePickingInfo *)pVVar52,pCVar14,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                pCVar43 = Cube::Cube_Clone_1((Cube *)pVStack_27,(MethodInfo *)0x0);
                                IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                                pVVar21 = (Vector3__Array *)
                                          CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                if (pVVar52 == (Vector3__Array *)0x0) goto code_?;
                                ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube = pCVar43;
                                func_?();
                                pVVar52->vector[2].z = (float)CONCAT22(IStack_20.y,IStack_20.x);
                                *(int16_t *)&pVVar52->vector[3].x = uStack_26._2_2_;
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
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (((pCVar14 != (CubePickingInfo *)0x0) &&
                        (pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                        (e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) &&
                       (pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                       (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                      iPos_02.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                      iPos_02._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)(this->fields).modelCursor,iPos_02,
                                 (GameObject *)targetGameObject,bVar18,pMVar48);
                      pCVar14 = (this->fields).movingEdgeCube;
                      pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                         (pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         pMVar35 != (MVCubeModelBase *)0x0)) {
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
                  if (pVStack_24 != (Vector3__Array *)0x0) break;
                  pMStack_32 = (MVCubeModelBase *)
                               CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                         (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                  pCVar14 = (this->fields).movingEdgeCube;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                     (pCVar43 = (pCVar14->fields).cube,
                     pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                     pCVar43 != (Cube *)0x0)) {
                    pVStack_24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                           ((CubeBase *)pCVar43,(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar18 = Cube::Cube_IsCollapsed(pVStack_24,(MethodInfo *)0x0);
                    if ((bVar18 == 0) || (pMStack_32 != (MVCubeModelBase *)0x1)) {
                      pCVar14 = (this->fields).movingEdgeCube;
                      if (pMStack_32 == (MVCubeModelBase *)0x2) {
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (((pCVar14 != (CubePickingInfo *)0x0) &&
                            (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                            pMVar35 != (MVCubeModelBase *)0x0)) &&
                           (pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                           (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                          iPos_03.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          iPos_03._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          ModelCursor::ModelCursor_SetErrorCursor
                                    ((ModelCursor *)(this->fields).modelCursor,iPos_03,
                                     (pMVar35->fields)._.gameObject,1,(MethodInfo *)0x0);
                          (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                          func_?();
                          break;
                        }
                      }
                      else {
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                                     (MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (pVVar21 = (Vector3__Array *)
                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                             pMVar35 != (MVCubeModelBase *)0x0)) {
                            iVector_03.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                            iVector_03._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                            MVCubeModelBase::MVCubeModelBase_CornersChanged
                                      (pMVar35,iVector_03,(pCVar14->fields).cube,(MethodInfo *)0x0);
                            break;
                          }
                        }
                      }
                    }
                    else {
                      pCVar14 = (this->fields).movingEdgeCube;
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (((pCVar14 != (CubePickingInfo *)0x0) &&
                          (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                          pMVar35 != (MVCubeModelBase *)0x0)) &&
                         (pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                        pMVar48 = (MethodInfo *)0x0;
                        bVar18 = 0;
                        targetGameObject =
                             (CubeModelingStateMachine *)(pMVar35->fields)._.gameObject;
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
            pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar41);
            IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
            pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
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
                IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                             (MethodInfo *)0x0);
                  uStack_2 = 2;
                  EStack_17 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                        (e,(MethodInfo *)0x0);
                  pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pMVar35 != (MVCubeModelBase *)0x0) {
                    iVar36 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                       (pMVar35,(MethodInfo *)0x0);
                    CubeModelTool::CubeModelTool_SendCubeEvent(iVar36,EStack_17,(MethodInfo *)0x0);
                    if (EStack_17 != EditCubeChange__Enum_None) {
code_?:
                      uStack_2 = 0xffffffff;
                      goto code_?;
                    }
                    pCVar14 = (e->fields)._SelectedCube_k__BackingField;
                    IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      pVStack_24._0_2_ = (pCVar14->fields).iLocalPos.x;
                      pVStack_24._2_2_ = (pCVar14->fields).iLocalPos.y;
                      uStack_30 = (MVCubeModelBase *)
                                  CONCAT22((pCVar14->fields).iLocalPos.z,(undefined2)uStack_30);
                      pVStack_27 = (Vector3__Array *)
                                   (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      localPos_02.z = (int16_t)pVStack_24;
                      localPos_02._0_4_ = &IStack_20;
                      IVar37 = Cube::Cube_GetCubePosAboveFace
                                         (localPos_02,CONCAT22(in_stack_12,uStack_30._2_2_),
                                          (MethodInfo *)pVStack_27);
                      pVStack_24 = IVar37._0_4_;
                      pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                      pMVar19 = (this->fields).modelCursor;
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if ((pMVar35 != (MVCubeModelBase *)0x0) &&
                         (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                         pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         pMVar19 != (ModelCursor3D *)0x0)) {
                        iPos_01.z._1_1_ = (char)((ushort)*(int16_t *)&pVStack_24->monitor >> 8);
                        iPos_01._0_5_ = *(undefined5 *)pVStack_24;
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)pMVar19,iPos_01,(pMVar35->fields)._.gameObject,0,
                                   (MethodInfo *)0x0);
                        goto code_?;
                      }
                    }
                  }
                }
              }
              else {
                pVStack_27 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                       (e,pCVar14,(MethodInfo *)0x0);
                pCVar14 = (this->fields).movingEdgeCube;
                if (pVStack_27 == (Vector3__Array *)0x2) {
                  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (((pCVar14 != (CubePickingInfo *)0x0) &&
                      (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                      pMVar35 != (MVCubeModelBase *)0x0)) &&
                     (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                     pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                    iPos.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                    iPos._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)(this->fields).modelCursor,iPos,
                               (pMVar35->fields)._.gameObject,1,(MethodInfo *)0x0);
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
                  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if ((pCVar14 != (CubePickingInfo *)0x0) &&
                     (pCVar43 = (pCVar14->fields).cube,
                     IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                     pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                     pCVar43 != (Cube *)0x0)) {
                    pVStack_24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                           ((CubeBase *)pCVar43,(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar18 = Cube::Cube_IsCollapsed(pVStack_24,(MethodInfo *)0x0);
                    pCVar14 = (this->fields).movingEdgeCube;
                    if (bVar18 == 0) {
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                                   (MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                           pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_)
                           , pMVar35 != (MVCubeModelBase *)0x0)) {
                          pCVar43 = (pCVar14->fields).cube;
                          uVar46 = SUB41(pCVar43,0);
                          uVar47 = (undefined1)((uint)pCVar43 >> 8);
                          uVar23 = (undefined2)((uint)pCVar43 >> 0x10);
code_?:
                          iVector_01.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          iVector_01._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                    (pMVar35,iVector_01,(Cube *)CONCAT22(uVar8,uVar6),
                                     (MethodInfo *)CONCAT22(uVar23,CONCAT11(uVar47,uVar46)));
                          goto code_?;
                        }
                      }
                    }
                    else if (pVStack_27 == (Vector3__Array *)0x0) {
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,(pCVar14->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                                   (MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                           pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_)
                           , pMVar35 != (MVCubeModelBase *)0x0)) {
                          pos_13.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          pos_13._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          MVCubeModelBase::MVCubeModelBase_RemoveCube
                                    (pMVar35,pos_13,(MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                    }
                    else {
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (((pCVar14 != (CubePickingInfo *)0x0) &&
                          (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
                          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                          pMVar35 != (MVCubeModelBase *)0x0)) &&
                         (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                         pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                        iPos_00.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                        iPos_00._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                        ModelCursor::ModelCursor_SetErrorCursor
                                  ((ModelCursor *)(this->fields).modelCursor,iPos_00,
                                   (pMVar35->fields)._.gameObject,0,(MethodInfo *)0x0);
                        pCVar14 = (this->fields).movingEdgeCube;
                        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (pCVar14 != (CubePickingInfo *)0x0) {
                          pIVar38 = &(pCVar14->fields).iLocalPos;
                          uVar6 = pIVar38->x;
                          uVar8 = pIVar38->y;
                          iVar15 = (pCVar14->fields).iLocalPos.z;
                          uVar46 = (undefined1)iVar15;
                          uVar47 = (undefined1)((ushort)iVar15 >> 8);
                          pos_12.z._1_1_ = uVar47;
                          pos_12._0_5_ = *(undefined5 *)pIVar38;
                          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                    (e,pos_12,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                          pCVar14 = (this->fields).movingEdgeCube;
                          pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                             (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                             pVVar21 = (Vector3__Array *)
                                       CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                             pMVar35 != (MVCubeModelBase *)0x0)) goto code_?;
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
        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
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
            pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
            IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
            pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
            if (pMVar35 != (MVCubeModelBase *)0x0) {
              iVar36 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar35,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar36,EStack_17,(MethodInfo *)0x0);
              if (EStack_17 != EditCubeChange__Enum_None) {
                cStack_25 = '\x01';
                uStack_2 = 0xffffffff;
                break;
              }
              pCVar14 = (e->fields)._SelectedCube_k__BackingField;
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if (pCVar14 != (CubePickingInfo *)0x0) {
                pVStack_24._0_2_ = (pCVar14->fields).iLocalPos.x;
                pVStack_24._2_2_ = (pCVar14->fields).iLocalPos.y;
                uStack_30 = (MVCubeModelBase *)
                            CONCAT22((pCVar14->fields).iLocalPos.z,(undefined2)uStack_30);
                pVStack_27 = (Vector3__Array *)
                             (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_03.z._0_1_ = (char)pVStack_24;
                localPos_03._0_4_ = &IStack_20;
                localPos_03.z._1_1_ = (char)((uint)pVStack_24 >> 8);
                IVar37 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_03,CONCAT22(uVar8,uStack_30._2_2_),
                                    (MethodInfo *)pVStack_27);
                pVStack_24 = IVar37._0_4_;
                pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
                pMVar19 = (this->fields).modelCursor;
                IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if ((pMVar35 != (MVCubeModelBase *)0x0) &&
                   (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                   pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                   pMVar19 != (ModelCursor3D *)0x0)) {
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar19,*(IntVector *)pVStack_24,
                             (pMVar35->fields)._.gameObject,0,(MethodInfo *)0x0);
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
          pVStack_24 = (Vector3__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
          if (_UNK_? < (float)pVStack_24 - (this->fields).prevMouseUpTime) {
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
              fVar28 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                (StringLiteral_Mouse_X,(MethodInfo *)0x0);
              pVStack_24 = (Vector3__Array *)((uint)fVar28 & _UNK_?);
              pVStack_27 = (Vector3__Array *)
                           MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                     (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
              if (((float)pVStack_24 != 0.0) || ((float)((uint)pVStack_27 & _UNK_?) != 0.0))
              {
                pCVar14 = (this->fields).prevSelectedCube;
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  pVStack_27 = (Vector3__Array *)(pCVar14->fields).cube;
                  pVStack_24 = (Vector3__Array *)
                               (((this->fields).prevSelectedCube)->fields).pickedFace;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  uVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                     ((CubeBase *)pVStack_27,(Face__Enum)pVStack_24,
                                      (MethodInfo *)0x0);
                  pMStack_32 = (MVCubeModelBase *)CONCAT31(pMStack_32._1_3_,uVar41);
                  pMVar53 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if ((pMVar53 != (MVNetworkGame *)0x0) &&
                     (this_00 = (pMVar53->fields)._MaterialRepository_k__BackingField,
                     IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                     pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                     this_00 != (MVMaterialRepository *)0x0)) {
                    bVar18 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                       (this_00,(uint8_t)pMStack_32,(MethodInfo *)0x0);
                    if (bVar18 == 0) {
                      pCVar14 = (this->fields).prevSelectedCube;
                      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (((pCVar14 == (CubePickingInfo *)0x0) ||
                          (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
                          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                          pMVar35 == (MVCubeModelBase *)0x0)) ||
                         (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                         pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         (this->fields).modelCursor == (ModelCursor3D *)0x0)) goto code_?;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)(this->fields).modelCursor,
                                 (pCVar14->fields).iLocalPos,(pMVar35->fields)._.gameObject,1,
                                 (MethodInfo *)0x0);
                    }
                    else {
                      uVar41 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      (this->fields).prevMaterial = uVar41;
                      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                (e,(uint8_t)pMStack_32,(MethodInfo *)0x0);
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
          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
          if ((e == (CubeModelingStateMachine *)0x0) ||
             (pMVar35 = (e->fields)._TargetCubeModel_k__BackingField,
             IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
             pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
             pMVar35 == (MVCubeModelBase *)0x0)) goto code_?;
          bVar18 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                             ((pMVar35->fields)._.gameObject,(IntVector *)&stack0xffffff58,
                              (MethodInfo *)0x0);
          if (bVar18 != 0) {
            IVar37.z._0_1_ = (char)iVar15;
            IVar37._0_4_ = pCVar14;
            IVar37.z._1_1_ = (char)((ushort)iVar15 >> 8);
            CVar49 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                               (e,IVar37,(MethodInfo *)0x0);
            if (CVar49 == CanPerformCubeActionResult__Enum_Yes) {
              pos_15.z = iVar15;
              pos_15._0_4_ = pCVar14;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_15,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              pMStack_32 = (e->fields)._TargetCubeModel_k__BackingField;
              uStack_30 = (MVCubeModelBase *)CONCAT22(iVar15,(undefined2)uStack_30);
              pCStack_31 = pCVar14;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVStack_24 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVStack_27 = (Vector3__Array *)
                           MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                           CubeDataPacker_CornersToByteArray(pVStack_24,(MethodInfo *)0x0);
              uVar41 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
              pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar41);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pBVar40 = Cube::Cube_CreateMaterialArray((uint8_t)pVStack_24,(MethodInfo *)0x0);
              pVStack_24 = (Vector3__Array *)func_?();
              Cube::Cube__ctor((Cube *)pVStack_24,(Byte__Array *)pVStack_27,pBVar40,
                               (MethodInfo *)0x0);
              IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if (pMStack_32 == (MVCubeModelBase *)0x0) goto code_?;
              pos_14.z._0_1_ = (char)((uint)uStack_30 >> 0x10);
              pos_14._0_4_ = pCStack_31;
              pos_14.z._1_1_ = (char)((uint)uStack_30 >> 0x18);
              MVCubeModelBase::MVCubeModelBase_AddCube
                        (pMStack_32,pos_14,(CubeBase *)pVStack_24,(MethodInfo *)0x0);
            }
          }
        }
        else {
          (this->fields).currentInternalState = 2;
          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
        }
      }
      if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
        pCVar43 = (Cube *)0x0;
      }
      else {
        pCVar43 = (((this->fields).movingEdgeCube)->fields).cube;
        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
        if (pCVar43 == (Cube *)0x0) goto code_?;
        pCVar43 = Cube::Cube_Clone(pCVar43,(MethodInfo *)0x0);
      }
      (this->fields).prevCubeState = pCVar43;
      func_?();
      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
        func_?();
        if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
        pVVar52 = (Vector3__Array *)(this->fields).movingEdgeCube;
        pCStack_31 = (CubePickingInfo *)(this->fields).modelCursor;
        pVStack_24 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
        pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
        pVStack_27 = pVVar52;
        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
        if (pMVar35 != (MVCubeModelBase *)0x0) {
          pMStack_32 = (MVCubeModelBase *)(pMVar35->fields)._.gameObject;
          iVar36 = (this->fields).currentInternalState;
          IStack_20.z = (int16_t)iVar36;
          uStack_29 = (undefined2)((uint)iVar36 >> 0x10);
          if (pVVar52 == (Vector3__Array *)0x0) {
            pCVar43 = (pCStack_31->fields).cube;
            if (pVStack_24 == (Vector3__Array *)0x0) {
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,0,(MethodInfo *)0x0);
                pCVar14 = pCStack_31;
                iVar55 = (pCStack_31->fields).pickedEdge;
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if ((iVar55 != 0) &&
                   (pGVar54 = *(GameObject **)(iVar55 + 0x14),
                   pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                   pGVar54 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar54,0,(MethodInfo *)0x0);
code_?:
                  this_01 = (CellCursor *)(pCVar14->fields).pickedFace;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (this_01 != (CellCursor *)0x0) {
                    CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
                    pVVar56 = pVStack_24;
                    if (CONCAT22(uStack_29,IStack_20.z) == 3) {
                      fVar34 = 0.0;
                      fVar28 = 0.0;
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
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (((pGVar57 != (GameEventManager *)0x0) &&
                          (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                          pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                         (pGVar59 = (pGVar58->fields).LaserCommands,
                         pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                         pGVar59 !=
                         (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
                         )) {
                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                  (pGVar59,0.2,(MethodInfo *)0x0);
                        pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (((pGVar57 != (GameEventManager *)0x0) &&
                            (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                            pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar59 = (pGVar58->fields).LaserCommands,
                           pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_)
                           , pGVar59 !=
                             (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *
                             )0x0)) {
                          to_00.y = (float)(CONCAT26(uVar8,CONCAT24(uVar6,fVar28)) >> 0x20);
                          to_00.x = fVar28;
                          to_00.z._0_2_ = SUB42(fVar34,0);
                          to_00.z._2_2_ = (short)((uint)fVar34 >> 0x10);
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar59,to_00,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_4;
                          return;
                        }
                      }
                    }
                    else if (pVVar52 == (Vector3__Array *)0x0) {
                      if (cStack_25 == '\0') {
                        if (pVStack_24 == (Vector3__Array *)0x0) goto code_?;
                        pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (((pGVar57 != (GameEventManager *)0x0) &&
                            (pGVar58 = (pGVar57->fields).AvatarCommandsBuildMode,
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                            pGVar58 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar59 = (pGVar58->fields).LaserCommands,
                           pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_)
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
                        pVVar21 = (Vector3__Array *)VStack_22.y;
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
                      VStack_22.z._0_1_ = (bool)iVar60;
                      VStack_22.z._1_1_ = (undefined1)(iVar60 >> 8);
                      VStack_22.z._2_2_ = (undefined2)(iVar60 >> 0x10);
                      fVar28 = pVVar52->vector[2].z;
                      IStack_20.z = SUB42(fVar28,0);
                      uStack_29 = (undefined2)((uint)fVar28 >> 0x10);
                      uStack_30 = (MVCubeModelBase *)
                                  CONCAT22(*(int16_t *)&pVVar52->vector[3].x,(undefined2)uStack_30);
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pMVar35 = pMStack_32;
                      iVector_00.y = uStack_29;
                      iVector_00.x = IStack_20.z;
                      iVector_00.z = uStack_30._2_2_;
                      pVVar56 = Cube::Cube_GetFaceVerticesWorld
                                          ((GameObject *)pMStack_32,pCVar43,
                                           CONCAT22(VStack_22.z._2_2_,
                                                    CONCAT11(VStack_22.z._1_1_,VStack_22.z._0_1_)),
                                           iVector_00,(MethodInfo *)0x0);
                      pVVar21 = (Vector3__Array *)VStack_22.y;
                      if (pVVar56 != (Vector3__Array *)0x0) {
                        if ((pVVar56->max_length == 0) || (pVVar56->max_length < 2))
                        goto code_?;
                        VStack_45.x = pVVar56->vector[1].x;
                        VStack_45.y = pVVar56->vector[1].y;
                        VStack_45.z = pVVar56->vector[1].z;
                        uVar61 = pVVar56->vector[0].x;
                        uVar62 = pVVar56->vector[0].y;
                        fVar28 = VStack_45.x + (float)uVar61;
                        fVar34 = VStack_45.y + (float)uVar62;
                        fVar63 = VStack_45.z + pVVar56->vector[0].z;
                        if (pVVar56->max_length < 3) goto code_?;
                        VStack_45.x = pVVar56->vector[2].x;
                        VStack_45.y = pVVar56->vector[2].y;
                        VStack_45.z = pVVar56->vector[2].z;
                        fVar28 = VStack_45.x + fVar28;
                        fVar34 = VStack_45.y + fVar34;
                        if (pVVar56->max_length < 4) goto code_?;
                        VStack_45.x = pVVar56->vector[3].x;
                        VStack_45.y = pVVar56->vector[3].y;
                        pVVar21 = (Vector3__Array *)((VStack_45.x + fVar28) * _UNK_?);
                        pVVar64 = (Vector3__Array *)((VStack_45.y + fVar34) * _UNK_?);
                        pMVar65 = (MVCubeModelBase *)
                                  ((pVVar56->vector[3].z + VStack_45.z + fVar63) * _UNK_?);
                        VStack_45.z = (float)pMVar65;
                        pMStack_32 = pMVar65;
                        pVStack_27 = pVVar64;
                        pVStack_24 = pVVar21;
                        if (pVVar52->vector[0].x == 0.0) {
                          IStack_20.x = 0;
                          IStack_20.y = 0;
                          IStack_20.z = 0;
                          uStack_29 = 0;
                          pVVar52 = pVVar21;
                          pVVar56 = pVVar64;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar66 = TypeInfo__UnityEngine__Vector3->static_fields;
                          uVar67 = (pVVar66->upVector).x;
                          uVar68 = (pVVar66->upVector).y;
                          VStack_45.z = (float)pMStack_32 + (pVVar66->upVector).z;
                          VStack_45.y = (float)pVStack_27 + (float)uVar68;
                          VStack_45.x = (float)pVStack_24 + (float)uVar67;
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          start_00.y = (float)pVVar64;
                          start_00.x = (float)pVVar21;
                          start_00.z = (float)pMVar65;
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
                          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
code_?:
                          VStack_22.y = (float)pVVar21;
                          pGVar57 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          pVVar21 = (Vector3__Array *)VStack_22.y;
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
                            to.z._0_1_ = (char)pMVar65;
                            to.z._1_1_ = (char)((uint)pMVar65 >> 8);
                            to.z._2_2_ = (short)((uint)pMVar65 >> 0x10);
                            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                      (pGVar59,to,(MethodInfo *)0x0);
                            pGVar57 = MVGameControllerBase::
                                      MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                        else {
                          uStack_26 = (FaceCursor *)
                                      ((CubePickingInfo__Fields *)&pVVar52->bounds)->cube;
                          pCStack_31 = (CubePickingInfo *)pVVar52->max_length;
                          fVar28 = pVVar52->vector[0].x;
                          VStack_22.z._0_1_ = SUB41(fVar28,0);
                          VStack_22.z._1_1_ = (undefined1)((uint)fVar28 >> 8);
                          VStack_22.z._2_2_ = (undefined2)((uint)fVar28 >> 0x10);
                          fVar28 = pVVar52->vector[2].z;
                          IStack_20.z = SUB42(fVar28,0);
                          uStack_29 = (undefined2)((uint)fVar28 >> 0x10);
                          uStack_30 = (MVCubeModelBase *)
                                      CONCAT22(*(int16_t *)&pVVar52->vector[3].x,
                                               (undefined2)uStack_30);
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          iVector.y = uStack_29;
                          iVector.x = IStack_20.z;
                          iVector.z._0_1_ = (char)((uint)uStack_30 >> 0x10);
                          iVector.z._1_1_ = (char)((uint)uStack_30 >> 0x18);
                          pVVar56 = Cube::Cube_GetEdgeVerticesWorld
                                              ((GameObject *)pMVar35,(Cube *)uStack_26,
                                               (Face__Enum)pCStack_31,
                                               CONCAT22(VStack_22.z._2_2_,
                                                        CONCAT11(VStack_22.z._1_1_,VStack_22.z._0_1_
                                                                )),iVector,(MethodInfo *)0x0);
                          if (*(bool *)&pVVar52->vector[0].y == 0) {
                            pVVar21 = (Vector3__Array *)
                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                            if (pVVar56 != (Vector3__Array *)0x0) {
                              if (*(bool *)((int)&pVVar52->vector[0].y + 1) == 0) {
                                if ((pVVar56->max_length == 0) || (pVVar56->max_length < 2))
                                goto code_?;
                                VStack_45.x = pVVar56->vector[1].x;
                                VStack_45.y = pVVar56->vector[1].y;
                                uVar69 = pVVar56->vector[0].x;
                                uVar70 = pVVar56->vector[0].y;
                                fVar28 = (pVVar56->vector[1].z + pVVar56->vector[0].z) *
                                        _UNK_?;
                                VStack_22.x = (VStack_45.x + (float)uVar69) * _UNK_?;
                                pVVar21 = (Vector3__Array *)
                                          ((VStack_45.y + (float)uVar70) * _UNK_?);
                                VStack_22.z._0_1_ = SUB41(fVar28,0);
                                VStack_22.z._1_1_ = (undefined1)((uint)fVar28 >> 8);
                                VStack_22.z._2_2_ = (undefined2)((uint)fVar28 >> 0x10);
                              }
                              else {
                                if (pVVar56->max_length < 2) goto code_?;
                                uVar71 = pVVar56->vector[1].x;
                                pVVar21 = (Vector3__Array *)pVVar56->vector[1].y;
                                fVar28 = pVVar56->vector[1].z;
                                VStack_22.z._0_1_ = SUB41(fVar28,0);
                                VStack_22.z._1_1_ = (undefined1)((uint)fVar28 >> 8);
                                VStack_22.z._2_2_ = (undefined2)((uint)fVar28 >> 0x10);
                                VStack_22.x = (float)uVar71;
                              }
code_?:
                              fVar28 = (float)CONCAT22(VStack_22.z._2_2_,
                                                      CONCAT11(VStack_22.z._1_1_,VStack_22.z._0_1_))
                              ;
                              pMVar65 = (MVCubeModelBase *)
                                        (fVar28 + ((float)pMStack_32 - fVar28) * _UNK_?);
                              pVVar52 = (Vector3__Array *)
                                        (VStack_22.x +
                                        ((float)pVStack_24 - VStack_22.x) * _UNK_?);
                              pVVar56 = (Vector3__Array *)
                                        ((float)pVVar21 +
                                        ((float)pVStack_27 - (float)pVVar21) * _UNK_?);
                              VStack_45.z = (float)pMVar65;
                              goto code_?;
                            }
                          }
                          else {
                            pVVar21 = (Vector3__Array *)VStack_22.y;
                            if (pVVar56 != (Vector3__Array *)0x0) {
                              if (pVVar56->max_length == 0) goto code_?;
                              uVar72 = pVVar56->vector[0].x;
                              uVar73 = pVVar56->vector[0].y;
                              fVar28 = pVVar56->vector[0].z;
                              VStack_22.y._0_2_ = (short)uVar73;
                              VStack_22.y._2_2_ = (undefined2)((uint)uVar73 >> 0x10);
                              IStack_20.x = (int16_t)uVar72;
                              IStack_20.y = (int16_t)((uint)uVar72 >> 0x10);
                              VStack_45.x = pVVar56->vector[0].x;
                              VStack_45.y = pVVar56->vector[0].y;
                              VStack_22.z._0_1_ = SUB41(fVar28,0);
                              VStack_22.z._1_1_ = (undefined1)((uint)fVar28 >> 8);
                              VStack_22.z._2_2_ = (undefined2)((uint)fVar28 >> 0x10);
                              IStack_20.z = VStack_22.y._0_2_;
                              uStack_29 = VStack_22.y._2_2_;
                              VStack_22.x = (float)uVar72;
                              VStack_45.z = fVar28;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pVVar66 = TypeInfo__UnityEngine__Vector3->static_fields;
                              uVar74 = (pVVar66->upVector).x;
                              uVar75 = (pVVar66->upVector).y;
                              VStack_45.z = VStack_45.z + (pVVar66->upVector).z;
                              VStack_45.y = VStack_45.y + (float)uVar75;
                              VStack_45.x = VStack_45.x + (float)uVar74;
                              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0
                                 ) {
                                func_?();
                              }
                              start.y = (float)(int)(CONCAT26(uStack_29,
                                                              CONCAT24(IStack_20.z,
                                                                       CONCAT22(IStack_20.y,
                                                                                IStack_20.x))) >>
                                                    0x20);
                              start.x = (float)CONCAT22(IStack_20.y,IStack_20.x);
                              start.z = fVar28;
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
                              pVVar21 = (Vector3__Array *)
                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
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
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,1,(MethodInfo *)0x0);
                pCVar14 = pCStack_31;
                pFVar76 = (FaceCursor *)(pCStack_31->fields).cube;
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if (pFVar76 != (FaceCursor *)0x0) {
                  FaceCursor::FaceCursor_UpdateCursor
                            (pFVar76,(CubePickingInfo *)pVStack_24,(GameObject *)pMStack_32,
                             (MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
          else {
            pIVar77 = (IndentArea *)(pCStack_31->fields).pickedEdge;
            pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
            if (pIVar77 != (IndentArea *)0x0) {
              IndentArea::IndentArea_UpdateIndentArea
                        (pIVar77,(CubePickingInfo *)pVVar52,(GameObject *)pMStack_32,
                         (MethodInfo *)0x0);
              pCVar14 = pCStack_31;
              pCVar43 = (pCStack_31->fields).cube;
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if ((pCVar43 != (Cube *)0x0) &&
                 (pGVar54 = *(GameObject **)&(pCVar43->fields).hiddenSides,
                 pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,1,(MethodInfo *)0x0);
                uStack_26 = (FaceCursor *)(pCVar14->fields).cube;
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if (uStack_26 != (FaceCursor *)0x0) {
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
                  VStack_22.z._0_1_ = (bool)iVar60;
                  VStack_22.z._1_1_ = (undefined1)(iVar60 >> 8);
                  VStack_22.z._2_2_ = (undefined2)(iVar60 >> 0x10);
                  pVStack_27 = (Vector3__Array *)pVVar52->vector[2].z;
                  uStack_30 = (MVCubeModelBase *)
                              CONCAT22(*(int16_t *)&pVVar52->vector[3].x,(undefined2)uStack_30);
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  iVector_02.z._0_1_ = (char)((uint)uStack_30 >> 0x10);
                  iVector_02._0_4_ = pVStack_27;
                  iVector_02.z._1_1_ = (char)((uint)uStack_30 >> 0x18);
                  pVStack_27 = Cube::Cube_GetFaceVerticesWorld
                                         ((GameObject *)pMStack_32,pCVar43,
                                          CONCAT22(VStack_22.z._2_2_,
                                                   CONCAT11(VStack_22.z._1_1_,VStack_22.z._0_1_)),
                                          iVector_02,(MethodInfo *)0x0);
                  this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)func_?();
                  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata
                  ::__Il2CppFullySharedGenericType]::
                  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                             this_02,MethodInfo__System__Collections__Generic__List<int>__List__);
                  pGVar54 = (uStack_26->fields).gameObject;
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                  if (pGVar54 != (GameObject *)0x0) {
                    this_03 = (MeshFilter *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponent_1
                                        (pGVar54,
                                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                        );
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                    if (this_03 != (MeshFilter *)0x0) {
                      uStack_30 = (MVCubeModelBase *)
                                  UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                  MeshFilter_get_mesh(this_03,(MethodInfo *)0x0);
                      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                      if (uStack_30 != (MVCubeModelBase *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                  ((Mesh *)uStack_30,(MethodInfo *)0x0);
                        pMVar48 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                        if (this_02 !=
                            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                             *)0x0) {
                          piVar78 = &(this_02->fields)._version;
                          *piVar78 = *piVar78 + 1;
                          pMVar79 = (this_02->fields)._items;
                          uVar33 = (this_02->fields)._size;
                          pVVar21 = (Vector3__Array *)VStack_22.y;
                          if (pMVar79 !=
                              (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                            if (uVar33 < pMVar79->max_length) {
                              (this_02->fields)._size = uVar33 + 1;
                              if (pMVar79->max_length <= uVar33) goto code_?;
                              (&pMVar79->vector[0].index)[uVar33] = 0;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        ((List_1_System_Int32_ *)this_02,0,
                                         pMVar48->klass->rgctx_data[0xe].method);
                            }
                            pMVar48 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                            piVar78 = &(this_02->fields)._version;
                            *piVar78 = *piVar78 + 1;
                            pMVar79 = (this_02->fields)._items;
                            uVar33 = (this_02->fields)._size;
                            pVVar21 = (Vector3__Array *)VStack_22.y;
                            if (pMVar79 !=
                                (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                              if (uVar33 < pMVar79->max_length) {
                                (this_02->fields)._size = uVar33 + 1;
                                if (pMVar79->max_length <= uVar33) goto code_?;
                                (&pMVar79->vector[0].index)[uVar33] = 3;
                              }
                              else {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                List_1_System_Int32__AddWithResize
                                          ((List_1_System_Int32_ *)this_02,3,
                                           pMVar48->klass->rgctx_data[0xe].method);
                              }
                              pMVar48 = 
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                              piVar78 = &(this_02->fields)._version;
                              *piVar78 = *piVar78 + 1;
                              pMVar79 = (this_02->fields)._items;
                              uVar33 = (this_02->fields)._size;
                              pVVar21 = (Vector3__Array *)VStack_22.y;
                              if (pMVar79 !=
                                  (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                                if (uVar33 < pMVar79->max_length) {
                                  (this_02->fields)._size = uVar33 + 1;
                                  if (pMVar79->max_length <= uVar33) goto code_?;
                                  (&pMVar79->vector[0].index)[uVar33] = 2;
                                }
                                else {
                                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]
                                  ::List_1_System_Int32__AddWithResize
                                            ((List_1_System_Int32_ *)this_02,2,
                                             pMVar48->klass->rgctx_data[0xe].method);
                                }
                                pMVar48 = 
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                piVar78 = &(this_02->fields)._version;
                                *piVar78 = *piVar78 + 1;
                                pMVar79 = (this_02->fields)._items;
                                uVar33 = (this_02->fields)._size;
                                pVVar21 = (Vector3__Array *)VStack_22.y;
                                if (pMVar79 !=
                                    (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                                {
                                  if (uVar33 < pMVar79->max_length) {
                                    (this_02->fields)._size = uVar33 + 1;
                                    if (pMVar79->max_length <= uVar33) goto code_?;
                                    (&pMVar79->vector[0].index)[uVar33] = 2;
                                  }
                                  else {
                                    mscorlib.dll::System::Collections::Generic::List`1[System::
                                    Int32]::List_1_System_Int32__AddWithResize
                                              ((List_1_System_Int32_ *)this_02,2,
                                               pMVar48->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar48 = 
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                  piVar78 = &(this_02->fields)._version;
                                  *piVar78 = *piVar78 + 1;
                                  pMVar79 = (this_02->fields)._items;
                                  uVar33 = (this_02->fields)._size;
                                  pVVar21 = (Vector3__Array *)VStack_22.y;
                                  if (pMVar79 !=
                                      (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                      0x0) {
                                    if (uVar33 < pMVar79->max_length) {
                                      (this_02->fields)._size = uVar33 + 1;
                                      if (pMVar79->max_length <= uVar33) goto code_?;
                                      (&pMVar79->vector[0].index)[uVar33] = 1;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Int32]::List_1_System_Int32__AddWithResize
                                                ((List_1_System_Int32_ *)this_02,1,
                                                 pMVar48->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar48 = 
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                    piVar78 = &(this_02->fields)._version;
                                    *piVar78 = *piVar78 + 1;
                                    pMVar79 = (this_02->fields)._items;
                                    uVar33 = (this_02->fields)._size;
                                    pVVar21 = (Vector3__Array *)VStack_22.y;
                                    if (pMVar79 !=
                                        (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                        0x0) {
                                      if (uVar33 < pMVar79->max_length) {
                                        (this_02->fields)._size = uVar33 + 1;
                                        if (pMVar79->max_length <= uVar33) goto code_?;
                                        (&pMVar79->vector[0].index)[uVar33] = 0;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)this_02,0,
                                                   pMVar48->klass->rgctx_data[0xe].method);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_vertices((Mesh *)uStack_30,pVStack_27,
                                                        (MethodInfo *)0x0);
                                      VStack_22.z._0_1_ = *(bool *)((int)&pVVar52->vector[0].y + 1);
                                      value_00 = FaceCursor::FaceCursor_SetUVs
                                                           (uStack_26,
                                                            (Edge__Enum)pVVar52->vector[0].x,
                                                            VStack_22.z._0_1_,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                                ((Mesh *)uStack_30,value_00,(MethodInfo *)0x0);
                                      pMVar79 = mscorlib.dll::System::Collections::Generic::
                                                List`1[UnityEngine::UIElements::Internal::
                                                MultiColumnCollectionHeader+ViewState+ColumnState]::
                                                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                          (this_02,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                      pMVar35 = uStack_30;
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_set_triangles((Mesh *)uStack_30,(Int32__Array *)pMVar79,
                                                         (MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateNormals((Mesh *)pMVar35,(MethodInfo *)0x0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                      Mesh_RecalculateBounds((Mesh *)pMVar35,(MethodInfo *)0x0);
                                      pFVar76 = uStack_26;
                                      if (pVVar52->vector[0].x == 0.0) {
                                        pGVar54 = (uStack_26->fields).gameObject;
                                        pVVar21 = (Vector3__Array *)
                                                  CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar21 = (Vector3__Array *)
                                                    CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            pBVar40 = (Byte__Array *)(pFVar76->fields).materialNone;
                                            uVar46 = SUB41(pBVar40,0);
                                            uVar47 = (undefined1)((uint)pBVar40 >> 8);
                                            uVar6 = (undefined2)((uint)pBVar40 >> 0x10);
                                            goto code_?;
                                          }
                                        }
                                      }
                                      else if ((*(bool *)&pVVar52->vector[0].y == 0) &&
                                              (*(bool *)((int)&pVVar52->vector[0].y + 1) == 0)) {
                                        pGVar54 = (uStack_26->fields).gameObject;
                                        pVVar21 = (Vector3__Array *)
                                                  CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar21 = (Vector3__Array *)
                                                    CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            pBVar40 = (Byte__Array *)(pFVar76->fields).materialEdge;
                                            uVar46 = SUB41(pBVar40,0);
                                            uVar47 = (undefined1)((uint)pBVar40 >> 8);
                                            uVar6 = (undefined2)((uint)pBVar40 >> 0x10);
code_?:
                                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                            Renderer_set_sharedMaterial
                                                      (this_04,(Material *)
                                                               CONCAT22(uVar6,CONCAT11(uVar47,
                                                  uVar46)),(MethodInfo *)0x0);
                                            pGVar54 = (pFVar76->fields).gameObject;
                                            pVVar21 = (Vector3__Array *)
                                                      CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                            if (pGVar54 != (GameObject *)0x0) {
                                              pTVar80 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar54,(MethodInfo *)0x0);
                                              VStack_22.z._0_1_ = (bool)pTVar80;
                                              VStack_22.z._1_1_ = (undefined1)((uint)pTVar80 >> 8);
                                              VStack_22.z._2_2_ =
                                                   (undefined2)((uint)pTVar80 >> 0x10);
                                              pVVar56 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Mesh::Mesh_get_vertices
                                                                  ((Mesh *)uStack_30,
                                                                   (MethodInfo *)0x0);
                                              pVVar21 = (Vector3__Array *)
                                                        CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_
                                                                );
                                              if (pVVar56 != (Vector3__Array *)0x0) {
                                                if (pVVar56->max_length == 0) goto code_?;
                                                pVVar21 = (Vector3__Array *)VStack_22.y;
                                                if (CONCAT22(VStack_22.z._2_2_,
                                                             CONCAT11(VStack_22.z._1_1_,
                                                                      VStack_22.z._0_1_)) != 0) {
                                                  pVVar44 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Transform::Transform_TransformPoint
                                                                      (&VStack_45,
                                                                       (Transform *)
                                                                       CONCAT22(VStack_22.z._2_2_,
                                                                                CONCAT11(VStack_22.z
                                                                                         ._1_1_,
                                                  VStack_22.z._0_1_)),pVVar56->vector[0],
                                                  (MethodInfo *)0x0);
                                                  fVar28 = pVVar44->x;
                                                  fVar34 = pVVar44->y;
                                                  fVar63 = pVVar44->z;
                                                  pGVar54 = (pFVar76->fields).gameObject;
                                                  pVVar21 = (Vector3__Array *)
                                                            CONCAT22(VStack_22.y._2_2_,
                                                                     VStack_22.y._0_2_);
                                                  if (pGVar54 != (GameObject *)0x0) {
                                                    pTVar80 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar54,(MethodInfo *)0x0);
                                                    pVVar21 = (Vector3__Array *)
                                                              CONCAT22(VStack_22.y._2_2_,
                                                                       VStack_22.y._0_2_);
                                                    if (pTVar80 != (Transform *)0x0) {
                                                      pVVar44 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_position
                                                                          (&VStack_22,pTVar80,
                                                                           (MethodInfo *)0x0);
                                                      VStack_45.x = pVVar44->x;
                                                      VStack_45.y = pVVar44->y;
                                                      VStack_45.z = pVVar44->z;
                                                      pVVar21 = (Vector3__Array *)VStack_22.y;
                                                      if (pVStack_27 != (Vector3__Array *)0x0) {
                                                        if (pVStack_27->max_length == 0)
                                                        goto code_?;
                                                        uVar81 = pVStack_27->vector[0].x;
                                                        uVar82 = pVStack_27->vector[0].y;
                                                        fVar83 = ((Vector3 *)
                                                                 &pVStack_27->vector[0].z)->x;
                                                        VStack_22.y._0_2_ = (short)uVar82;
                                                        VStack_22.y._2_2_ =
                                                             (undefined2)((uint)uVar82 >> 0x10);
                                                        VStack_22.z._0_1_ = SUB41(fVar83,0);
                                                        VStack_22.z._1_1_ =
                                                             (undefined1)((uint)fVar83 >> 8);
                                                        VStack_22.z._2_2_ =
                                                             (undefined2)((uint)fVar83 >> 0x10);
                                                        uVar84 = pVVar52->vector[0].z;
                                                        uVar85 = pVVar52->vector[1].x;
                                                        VStack_45.z = VStack_45.z +
                                                                      (fVar83 - fVar63) +
                                                                      pVVar52->vector[1].y *
                                                                      _UNK_?;
                                                        fVar34 = VStack_45.y +
                                                                 ((float)uVar82 - fVar34) +
                                                                 (float)uVar85 * _UNK_?;
                                                        value.y._0_2_ = SUB42(fVar34,0);
                                                        value.x = VStack_45.x +
                                                                  ((float)uVar81 - fVar28) +
                                                                  (float)uVar84 * _UNK_?;
                                                        value.y._2_2_ =
                                                             (short)((uint)fVar34 >> 0x10);
                                                        value.z = VStack_45.z;
                                                        VStack_22.x = (float)uVar81;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_set_position
                                                                  (pTVar80,value,(MethodInfo *)0x0);
                                                        pCVar14 = pCStack_31;
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
                                        pGVar54 = (uStack_26->fields).gameObject;
                                        pVVar21 = (Vector3__Array *)
                                                  CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                        if (pGVar54 != (GameObject *)0x0) {
                                          this_04 = (Renderer *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_GetComponent_1
                                                              (pGVar54,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                                  );
                                          pVVar21 = (Vector3__Array *)
                                                    CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                                          if (this_04 != (Renderer *)0x0) {
                                            uVar86 = *(undefined4 *)
                                                      &(pFVar76->fields).materialCorner;
                                            uVar46 = (undefined1)uVar86;
                                            uVar47 = (undefined1)((uint)uVar86 >> 8);
                                            uVar6 = (undefined2)((uint)uVar86 >> 0x10);
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
      IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
      pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar35 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar77 = (((this->fields).modelCursor)->fields).indentArea;
        IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
        pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
        if ((pMVar35 != (MVCubeModelBase *)0x0) &&
           (IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
           pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
           pIVar77 != (IndentArea *)0x0)) {
          pCVar87 = (e->fields)._SelectedCube_k__BackingField;
          uVar6 = SUB42(pCVar87,0);
          uVar8 = (undefined2)((uint)pCVar87 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar77,pCVar87,(pMVar35->fields)._.gameObject,(MethodInfo *)0x0);
          pMVar19 = (this->fields).modelCursor;
          IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
          pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
          if ((pMVar19 != (ModelCursor3D *)0x0) &&
             (pIVar77 = (pMVar19->fields).indentArea,
             IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
             pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
             pIVar77 != (IndentArea *)0x0)) {
            bVar18 = IndentArea::IndentArea_IsColliding(pIVar77,(MethodInfo *)0x0);
            if (bVar18 == 0) {
              pMVar19 = (this->fields).modelCursor;
              IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if (((pMVar19 != (ModelCursor3D *)0x0) &&
                  (pIVar77 = (pMVar19->fields).indentArea,
                  IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                  pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                  pIVar77 != (IndentArea *)0x0)) &&
                 (pGVar54 = (pIVar77->fields).gameObject,
                 IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                 pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                 pGVar54 != (GameObject *)0x0)) {
                bVar18 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar54,bVar18,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar87 = (e->fields)._SelectedCube_k__BackingField;
              IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
              pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
              if (pCVar87 != (CubePickingInfo *)0x0) {
                (pCVar87->fields).pickedEdge = 0;
                pMVar19 = (this->fields).modelCursor;
                IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x);
                pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_);
                if (((pMVar19 != (ModelCursor3D *)0x0) &&
                    (pIVar77 = (pMVar19->fields).indentArea,
                    IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                    pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
                    pIVar77 != (IndentArea *)0x0)) &&
                   (pGVar54 = (pIVar77->fields).gameObject,
                   IStack_20._0_4_ = CONCAT22(IStack_20.y,IStack_20.x),
                   pVVar21 = (Vector3__Array *)CONCAT22(VStack_22.y._2_2_,VStack_22.y._0_2_),
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
  VStack_22.y = (float)pVVar21;
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
  LOCK();
  UNLOCK();
  *(uint *)(unaff_retaddr + -0x739cefbb) = *(uint *)(unaff_retaddr + -0x739cefbb) & extraout_ECX;
  pcVar88 = (code *)swi(3);
  (*pcVar88)();
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

