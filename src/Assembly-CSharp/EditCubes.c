
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
  cVar21 = true;
  if (pMVar20 != (ModelCursor3D *)0x0) {
    if ((pMVar20->fields).indentArea == (IndentArea *)0x0 ||
        (this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_12 = 0x1045;
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        in_stack_12 = 0;
        pVStack_22 = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)pVStack_22;
      }
      if (cRam_? == '\0') {
        in_stack_12 = 0x1045;
        func_?();
        cRam_? = '\x01';
      }
      cVar21 = true;
      if (e != (CubeModelingStateMachine *)0x0) {
        if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
           ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
        cVar21 = true;
        if (pMVar23 != (MVCubeModelBase *)0x0) {
          pVStack_24 = (Vector3__Array *)(pMVar23->fields)._.gameObject;
          pCVar25 = (e->fields)._SelectedCube_k__BackingField;
          pVStack_22 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
          uStack_26 = (IndentArea *)CONCAT22((pCVar25->fields).iLocalPos.z,(undefined2)uStack_26);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IVar27.z = uStack_26._2_2_;
          IVar27._0_4_ = pVStack_22;
          pVVar28 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              (&VStack_29,(GameObject *)pVStack_24,IVar27,(MethodInfo *)0x0);
          uVar30 = pVVar28->x;
          uVar31 = pVVar28->y;
          fVar3 = pVVar28->z;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          cVar21 = true;
          if (this_02 != (MainCameraManager *)0x0) {
            pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0);
            cVar21 = true;
            if (pTVar32 != (Transform *)0x0) {
              pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_29,pTVar32,(MethodInfo *)0x0);
              uVar33 = pVVar28->x;
              uVar34 = pVVar28->y;
              VStack_29.z = pVVar28->z - fVar3;
              VStack_29.y = (float)uVar34 - (float)uVar31;
              VStack_29.x = (float)uVar33 - (float)uVar30;
              fVar35 = (float10)func_?();
              pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
              pVStack_22 = (Vector3__Array *)(float)fVar35;
              cVar21 = true;
              if (pMVar23 != (MVCubeModelBase *)0x0) {
                in_stack_12 = (undefined2)((uint)pMVar23 >> 0x10);
                puVar36 = (undefined8 *)(*(code *)(pMVar23->klass->vtable).get_Scale.method)();
                pMVar20 = (this->fields).modelCursor;
                if ((float)((ulonglong)*puVar36 >> 0x20) * _UNK_? < (float)pVStack_22) {
                  (this->fields).mouseSensitivity = 0.1325;
                  cVar21 = pMVar20 == (ModelCursor3D *)0x0;
                  if (!(bool)cVar21) {
                    pIVar37 = (pMVar20->fields).indentArea;
                    cVar21 = pIVar37 == (IndentArea *)0x0;
                    if (!(bool)cVar21) {
                      (pIVar37->fields).size = 1.0;
                      goto code_?;
                    }
                  }
                }
                else {
                  (this->fields).mouseSensitivity = 0.0225;
                  cVar21 = true;
                  if (pMVar20 != (ModelCursor3D *)0x0) {
                    pIVar37 = (pMVar20->fields).indentArea;
                    cVar21 = true;
                    if (pIVar37 != (IndentArea *)0x0) {
                      (pIVar37->fields).size = 0.5;
code_?:
                      uStack_4 = (ushort)((uint)fVar3 >> 0x10);
                      bVar38 = false;
                      uStack_26 = (IndentArea *)((uint)uStack_26 & 0xffffff);
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
                            pVStack_22 = (Vector3__Array *)
                                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                                   (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                            pVStack_24 = (Vector3__Array *)
                                         MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                            fVar39 = (float)pVStack_22 * _UNK_?;
                            fVar3 = (float)pVStack_24 * _UNK_?;
                            uStack_40 = (Vector3__Array *)
                                        (e->fields)._TargetCubeModel_k__BackingField;
                            pVStack_22 = (Vector3__Array *)(this->fields).mouseSensitivity;
                            pCVar25 = (this->fields).movingEdgeCube;
                            iVar15 = 0;
                            uVar41 = 0;
                            cVar21 = true;
                            if (pCVar25 != (CubePickingInfo *)0x0) {
                              bVar19 = (pCVar25->fields).pickedEdgeIndex0;
                              pVStack_24._1_3_ = (undefined3)((uint)pVStack_24 >> 8);
                              pVStack_24 = (Vector3__Array *)
                                           CONCAT31(pVStack_24._1_3_,
                                                    (((this->fields).movingEdgeCube)->fields).
                                                    pickedEdgeIndex1);
                              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor ==
                                  0) {
                                func_?();
                              }
                              pMVar42 = (MethodInfo *)((int)&uStack_13 + 3);
                              showUnlockNotification = (bool)pVStack_22;
                              uVar43 = (undefined2)((uint)pVStack_22 >> 0x10);
                              pGVar44 = (GameObject *)&(this->fields).deltaAccum;
                              mousePositionDelta.z._2_2_ = uVar41;
                              mousePositionDelta.z._0_2_ = iVar15;
                              mousePositionDelta.y =
                                   (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),
                                                         CONCAT24(SUB42(fVar3,0),fVar39)) >> 0x20);
                              mousePositionDelta.x = fVar39;
                              pVStack_22 = (Vector3__Array *)
                                           SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                                     ((MVCubeModelBase *)uStack_40,pCVar25,
                                                      mousePositionDelta,&(this->fields).delta,
                                                      (float *)pGVar44,(float)pVStack_22,
                                                      (bool *)pMVar42,bVar19,(bool)pVStack_24,
                                                      (EditCubeChange__Enum *)&stack0xffffff64,
                                                      (MethodInfo *)0x0);
                              if (pVStack_22 == (Vector3__Array *)0x0) {
                                pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                cVar21 = true;
                                if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
                                iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                   (pMVar23,(MethodInfo *)0x0);
                                CubeModelTool::CubeModelTool_SendCubeEvent
                                          (iVar45,EVar18,(MethodInfo *)0x0);
                              }
                              if ((uStack_13._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
                                (this->fields).edgeHasMoved = 1;
                              }
                              if (pVStack_22 == (Vector3__Array *)0x1) {
                                pCVar25 = (this->fields).movingEdgeCube;
                                cVar21 = true;
                                if (pCVar25 != (CubePickingInfo *)0x0) {
                                  pVStack_22 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
                                  uStack_26._2_2_ = (pCVar25->fields).iLocalPos.z;
                                  pVStack_24 = (Vector3__Array *)
                                               (((this->fields).movingEdgeCube)->fields).pickedFace;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  localPos.z = (int16_t)pVStack_22;
                                  localPos._0_4_ = &stack0xffffff6c;
                                  IVar27 = Cube::Cube_GetCubePosAboveFace
                                                     (localPos,CONCAT22(uVar1,uStack_26._2_2_),
                                                      (MethodInfo *)pVStack_24);
                                  pIVar46 = IVar27._0_4_;
                                  uStack_40 = *(Vector3__Array **)pIVar46;
                                  uStack_26 = (IndentArea *)
                                              CONCAT22(pIVar46->z,(undefined2)uStack_26);
                                  pVStack_24 = (Vector3__Array *)
                                               CubeModelingStateMachine::
                                               CubeModelingStateMachine_CanAddCubeAt
                                                         (e,*pIVar46,(this->fields).movingEdgeCube,
                                                          (MethodInfo *)0x0);
                                  if (pVStack_24 == (Vector3__Array *)0x0) {
                                    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                    cVar21 = true;
                                    if (pMVar23 != (MVCubeModelBase *)0x0) {
                                      pos.z = uStack_26._2_2_;
                                      pos._0_4_ = uStack_40;
                                      pVStack_22 = (Vector3__Array *)
                                                   MVCubeModelBase::MVCubeModelBase_GetCube
                                                             (pMVar23,pos,(MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?(TypeInfo__MV__WorldObject__CubeBase);
                                      }
                                      bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                               CubeBase_op_Equality
                                                         ((CubeBase *)pVStack_22,(CubeBase *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (bVar19 == 0) goto code_?;
                                      pos_00.z = uStack_26._2_2_;
                                      pos_00._0_4_ = uStack_40;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_00,AudioActions__Enum_FaceMoved,
                                                 (MethodInfo *)0x0);
                                      pVStack_24 = (Vector3__Array *)
                                                   (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      cVar21 = true;
                                      if (pCVar25 != (CubePickingInfo *)0x0) {
                                        pVStack_22 = (Vector3__Array *)(pCVar25->fields).cube;
                                        FVar47 = (((this->fields).movingEdgeCube)->fields).
                                                 pickedFace;
                                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVVar48 = Cube::Cube_GetCorners
                                                            ((Cube *)pVStack_22,FVar47,
                                                             (MethodInfo *)0x0);
                                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker
                                                  ::CubeDataPacker_CornersToByteArray
                                                            (pVVar48,(MethodInfo *)0x0);
                                        uVar50 = CubeModelingStateMachine::
                                                 CubeModelingStateMachine_get_CurrentMaterialId
                                                           (e,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)
                                                     CONCAT31(pVStack_22._1_3_,uVar50);
                                        pBVar51 = Cube::Cube_CreateMaterialArray
                                                            (uVar50,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)func_?();
                                        Cube::Cube__ctor((Cube *)pVStack_22,pBVar49,pBVar51,
                                                         (MethodInfo *)0x0);
                                        cVar21 = true;
                                        if (pVStack_24 != (Vector3__Array *)0x0) {
                                          pos_07.z = uStack_26._2_2_;
                                          pos_07._0_4_ = uStack_40;
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    ((MVCubeModelBase *)pVStack_24,pos_07,
                                                     (CubeBase *)pVStack_22,(MethodInfo *)0x0);
                                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                          cVar21 = true;
                                          if (pMVar23 != (MVCubeModelBase *)0x0) {
                                            iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                               (pMVar23,(MethodInfo *)0x0);
                                            CubeModelTool::CubeModelTool_SendCubeEvent
                                                      (iVar45,EditCubeChange__Enum_CubeAdded,
                                                       (MethodInfo *)0x0);
                                            pCVar25 = (this->fields).movingEdgeCube;
                                            pCVar52 = (CubePickingInfo *)func_?();
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      (pCVar52,pCVar25,(MethodInfo *)0x0);
                                            pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                            cVar21 = true;
                                            if (pMVar23 != (MVCubeModelBase *)0x0) {
                                              pos_08.z = uStack_26._2_2_;
                                              pos_08._0_4_ = uStack_40;
                                              pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                  (pMVar23,pos_08,(MethodInfo *)0x0)
                                              ;
                                              pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0
                                                                          );
                                              cVar21 = true;
                                              if (pCVar52 != (CubePickingInfo *)0x0) {
                                                (pCVar52->fields).cube = pCVar53;
                                                func_?();
                                                *(Vector3__Array **)&(pCVar52->fields).iLocalPos =
                                                     uStack_40;
                                                (pCVar52->fields).iLocalPos.z = uStack_26._2_2_;
                                                pCVar25 = (this->fields).movingEdgeCube;
                                                cVar21 = true;
                                                if ((pCVar25 != (CubePickingInfo *)0x0) &&
                                                   (cVar21 = true,
                                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                                   (MVCubeModelBase *)0x0)) {
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             (pCVar25->fields).iLocalPos,
                                                             (pCVar25->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  (this->fields).movingEdgeCube = pCVar52;
                                                  func_?();
                                                  pVStack_22 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  cVar21 = true;
                                                  if (pVStack_22 != (Vector3__Array *)0x0) {
                                                    pVVar28 = Cube::Cube_GetFaceAxis
                                                                        (&VStack_29,
                                                                         pVStack_22->max_length,
                                                                         (MethodInfo *)0x0);
                                                    Cube::Cube_MoveFace((CubePickingInfo *)
                                                                        pVStack_22,-0.75,*pVVar28,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff38,
                                                                        (MethodInfo *)0x0);
code_?:
                                                    pCVar25 = (this->fields).movingEdgeCube;
                                                    cVar21 = true;
                                                    if ((pCVar25 != (CubePickingInfo *)0x0) &&
                                                       (cVar21 = true,
                                                       (e->fields)._TargetCubeModel_k__BackingField
                                                       != (MVCubeModelBase *)0x0)) {
                                                      MVCubeModelBase::
                                                      MVCubeModelBase_CornersChanged
                                                                ((e->fields).
                                                                 _TargetCubeModel_k__BackingField,
                                                                 (pCVar25->fields).iLocalPos,
                                                                 (pCVar25->fields).cube,
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
                                    VStack_29.z = (float)pVStack_24;
                                    VStack_29.y = -NAN;
                                    VStack_29.x = (float)TypeInfo__CanPerformCubeActionResult;
                                    str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                     ((Enum *)&VStack_29,(MethodInfo *)0x0);
                                    uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0)
                                    ;
                                    uVar41 = (undefined2)
                                             ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er
                                             >> 0x10);
code_?:
                                    mscorlib.dll::System::String::String_Concat_3
                                              ((String *)CONCAT22(uVar41,uVar1),str1,
                                               (MethodInfo *)0x0);
                                    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pMVar20 = (this->fields).modelCursor;
                                    cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                    if ((!(bool)cVar21) &&
                                       (cVar21 = pMVar20 == (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                      iPos.z = uStack_26._2_2_;
                                      iPos._0_4_ = uStack_40;
                                      ModelCursor::ModelCursor_SetErrorCursor
                                                ((ModelCursor *)pMVar20,iPos,
                                                 (pMVar23->fields)._.gameObject,
                                                 pVStack_24 == (Vector3__Array *)0x2,
                                                 (MethodInfo *)0x0);
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if ((!(bool)cVar21) &&
                                         (cVar21 = pMVar23 == (MVCubeModelBase *)0x0, !(bool)cVar21)
                                         ) {
                                        pCVar53 = (pCVar25->fields).cube;
code_?:
                                        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                  (pMVar23,(pCVar25->fields).iLocalPos,pCVar53,
                                                   (MethodInfo *)0x0);
                                        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                        func_?();
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                              else if (pVStack_22 == (Vector3__Array *)0x4) {
                                pCVar25 = (this->fields).movingEdgeCube;
                                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                if (!(bool)cVar21) {
                                  pVStack_22 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
                                  uStack_26._2_2_ = (pCVar25->fields).iLocalPos.z;
                                  pVStack_24 = (Vector3__Array *)
                                               (((this->fields).movingEdgeCube)->fields).pickedFace;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  localPos_02.z = (int16_t)pVStack_22;
                                  localPos_02._0_4_ = &stack0xffffff6c;
                                  IVar27 = Cube::Cube_GetCubePosAboveFace
                                                     (localPos_02,CONCAT22(uVar43,uStack_26._2_2_),
                                                      (MethodInfo *)pVStack_24);
                                  puVar54 = IVar27._0_4_;
                                  uStack_40 = *(Vector3__Array **)puVar54;
                                  uStack_26 = (IndentArea *)
                                              CONCAT22(*(undefined2 *)((int)puVar54 + 4),
                                                       (undefined2)uStack_26);
                                  requestedCubePos_00.z._1_1_ =
                                       (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8);
                                  requestedCubePos_00._0_5_ = *puVar54;
                                  pVStack_24 = (Vector3__Array *)
                                               CubeModelingStateMachine::
                                               CubeModelingStateMachine_CanAddCubeAt
                                                         (e,requestedCubePos_00,
                                                          (this->fields).movingEdgeCube,
                                                          (MethodInfo *)0x0);
                                  if (pVStack_24 != (Vector3__Array *)0x0) {
code_?:
                                    VStack_29.z = (float)pVStack_24;
                                    VStack_29.y = -NAN;
                                    VStack_29.x = (float)TypeInfo__CanPerformCubeActionResult;
                                    str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                     ((Enum *)&VStack_29,(MethodInfo *)0x0);
                                    uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0)
                                    ;
                                    uVar41 = (undefined2)
                                             ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_
                                             >> 0x10);
                                    goto code_?;
                                  }
                                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                  cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                  if (!(bool)cVar21) {
                                    pos_03.z._0_1_ = (char)((uint)uStack_26 >> 0x10);
                                    pos_03._0_4_ = uStack_40;
                                    pos_03.z._1_1_ = (char)((uint)uStack_26 >> 0x18);
                                    pVStack_22 = (Vector3__Array *)
                                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                                           (pMVar23,pos_03,(MethodInfo *)0x0);
                                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_op_Equality
                                                       ((CubeBase *)pVStack_22,(CubeBase *)0x0,
                                                        (MethodInfo *)0x0);
                                    if (bVar19 == 0) goto code_?;
                                    pCVar25 = (this->fields).movingEdgeCube;
                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                    if (!(bool)cVar21) {
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,(pCVar25->fields).iLocalPos,
                                                 AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                      pVStack_24 = (Vector3__Array *)
                                                   (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        pVStack_22 = (Vector3__Array *)(pCVar25->fields).cube;
                                        FVar47 = (((this->fields).movingEdgeCube)->fields).
                                                 pickedFace;
                                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVVar48 = Cube::Cube_GetCorners
                                                            ((Cube *)pVStack_22,FVar47,
                                                             (MethodInfo *)0x0);
                                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker
                                                  ::CubeDataPacker_CornersToByteArray
                                                            (pVVar48,(MethodInfo *)0x0);
                                        uVar50 = CubeModelingStateMachine::
                                                 CubeModelingStateMachine_get_CurrentMaterialId
                                                           (e,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)
                                                     CONCAT31(pVStack_22._1_3_,uVar50);
                                        pBVar51 = Cube::Cube_CreateMaterialArray
                                                            (uVar50,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)func_?();
                                        Cube::Cube__ctor((Cube *)pVStack_22,pBVar49,pBVar51,
                                                         (MethodInfo *)0x0);
                                        cVar21 = pVStack_24 == (Vector3__Array *)0x0;
                                        if (!(bool)cVar21) {
                                          pos_12.z = uStack_26._2_2_;
                                          pos_12._0_4_ = uStack_40;
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    ((MVCubeModelBase *)pVStack_24,pos_12,
                                                     (CubeBase *)pVStack_22,(MethodInfo *)0x0);
                                          pCVar25 = (this->fields).movingEdgeCube;
                                          pCVar52 = (CubePickingInfo *)func_?();
                                          CubePickingInfo::CubePickingInfo__ctor_1
                                                    (pCVar52,pCVar25,(MethodInfo *)0x0);
                                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                          cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                          if (!(bool)cVar21) {
                                            pos_06.z = uStack_26._2_2_;
                                            pos_06._0_4_ = uStack_40;
                                            pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                (pMVar23,pos_06,(MethodInfo *)0x0);
                                            pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                                            cVar21 = pCVar52 == (CubePickingInfo *)0x0;
                                            if (!(bool)cVar21) {
                                              (pCVar52->fields).cube = pCVar53;
                                              func_?();
                                              *(Vector3__Array **)&(pCVar52->fields).iLocalPos =
                                                   uStack_40;
                                              (pCVar52->fields).iLocalPos.z = uStack_26._2_2_;
                                              pCVar25 = (this->fields).movingEdgeCube;
                                              cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                              if ((!(bool)cVar21) &&
                                                 (cVar21 = (e->fields).
                                                           _TargetCubeModel_k__BackingField ==
                                                           (MVCubeModelBase *)0x0, !(bool)cVar21)) {
                                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                          ((e->fields).
                                                           _TargetCubeModel_k__BackingField,
                                                           (pCVar25->fields).iLocalPos,
                                                           (pCVar25->fields).cube,(MethodInfo *)0x0)
                                                ;
                                                (this->fields).movingEdgeCube = pCVar52;
                                                func_?();
                                                pVStack_22 = (Vector3__Array *)
                                                             (this->fields).movingEdgeCube;
                                                cVar21 = pVStack_22 == (Vector3__Array *)0x0;
                                                if (!(bool)cVar21) {
                                                  pVVar28 = Cube::Cube_GetFaceAxis
                                                                      (&VStack_29,
                                                                       pVStack_22->max_length,
                                                                       (MethodInfo *)0x0);
                                                  axis_00.z._1_1_ = (char)((uint)pVVar28->z >> 8);
                                                  axis_00._0_9_ = *(unkbyte9 *)pVVar28;
                                                  axis_00.z._2_2_ =
                                                       (short)((uint)pVVar28->z >> 0x10);
                                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_22,
                                                                      -1.0,axis_00,
                                                                      (CubeOutOfBoundState__Enum *)
                                                                      &stack0xffffff48,
                                                                      (MethodInfo *)0x0);
                                                  pVStack_22 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  cVar21 = pVStack_22 == (Vector3__Array *)0x0;
                                                  if (!(bool)cVar21) {
                                                    pVVar28 = Cube::Cube_GetFaceAxis
                                                                        (&VStack_29,
                                                                         pVStack_22->max_length,
                                                                         (MethodInfo *)0x0);
                                                    axis_02.z._2_2_ =
                                                         (short)((uint)pVVar28->z >> 0x10);
                                                    axis_02._0_10_ = *(unkbyte10 *)pVVar28;
                                                    Cube::Cube_MoveEdge((CubePickingInfo *)
                                                                        pVStack_22,-0.75,axis_02,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff48,
                                                                        (MethodInfo *)0x0);
                                                    pCVar25 = (this->fields).movingEdgeCube;
                                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                                    if ((!(bool)cVar21) &&
                                                       (cVar21 = (e->fields).
                                                                 _TargetCubeModel_k__BackingField ==
                                                                 (MVCubeModelBase *)0x0,
                                                       !(bool)cVar21)) {
                                                      MVCubeModelBase::
                                                      MVCubeModelBase_CornersChanged
                                                                ((e->fields).
                                                                 _TargetCubeModel_k__BackingField,
                                                                 (pCVar25->fields).iLocalPos,
                                                                 (pCVar25->fields).cube,
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
                              else if (pVStack_22 == (Vector3__Array *)0x5) {
                                pCVar25 = (this->fields).movingEdgeCube;
                                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                if (!(bool)cVar21) {
                                  pVStack_22 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
                                  uStack_26._2_2_ = (pCVar25->fields).iLocalPos.z;
                                  pVStack_24 = (Vector3__Array *)
                                               (((this->fields).movingEdgeCube)->fields).pickedFace;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  localPos_01.z = (int16_t)pVStack_22;
                                  localPos_01._0_4_ = &stack0xffffff6c;
                                  IVar27 = Cube::Cube_GetCubePosAboveFace
                                                     (localPos_01,CONCAT22(uVar43,uStack_26._2_2_),
                                                      (MethodInfo *)pVStack_24);
                                  puVar54 = IVar27._0_4_;
                                  uStack_40 = *(Vector3__Array **)puVar54;
                                  uStack_26 = (IndentArea *)
                                              CONCAT22(*(undefined2 *)((int)puVar54 + 4),
                                                       (undefined2)uStack_26);
                                  requestedCubePos.z._1_1_ =
                                       (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8);
                                  requestedCubePos._0_5_ = *puVar54;
                                  pVStack_24 = (Vector3__Array *)
                                               CubeModelingStateMachine::
                                               CubeModelingStateMachine_CanAddCubeAt
                                                         (e,requestedCubePos,
                                                          (this->fields).movingEdgeCube,
                                                          (MethodInfo *)0x0);
                                  if (pVStack_24 != (Vector3__Array *)0x0) {
code_?:
                                    VStack_29.z = (float)pVStack_24;
                                    VStack_29.y = -NAN;
                                    VStack_29.x = (float)TypeInfo__CanPerformCubeActionResult;
                                    str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                     ((Enum *)&VStack_29,(MethodInfo *)0x0);
                                    uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0)
                                    ;
                                    uVar41 = (undefined2)
                                             ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte
                                             >> 0x10);
                                    goto code_?;
                                  }
                                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                  cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                  if (!(bool)cVar21) {
                                    pos_02.z._0_1_ = (char)((uint)uStack_26 >> 0x10);
                                    pos_02._0_4_ = uStack_40;
                                    pos_02.z._1_1_ = (char)((uint)uStack_26 >> 0x18);
                                    pVStack_22 = (Vector3__Array *)
                                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                                           (pMVar23,pos_02,(MethodInfo *)0x0);
                                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_op_Equality
                                                       ((CubeBase *)pVStack_22,(CubeBase *)0x0,
                                                        (MethodInfo *)0x0);
                                    if (bVar19 == 0) goto code_?;
                                    pCVar25 = (this->fields).movingEdgeCube;
                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                    if (!(bool)cVar21) {
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,(pCVar25->fields).iLocalPos,
                                                 AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                      pVStack_24 = (Vector3__Array *)
                                                   (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        pVStack_22 = (Vector3__Array *)(pCVar25->fields).cube;
                                        FVar47 = (((this->fields).movingEdgeCube)->fields).
                                                 pickedFace;
                                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVVar48 = Cube::Cube_GetCorners
                                                            ((Cube *)pVStack_22,FVar47,
                                                             (MethodInfo *)0x0);
                                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker
                                                  ::CubeDataPacker_CornersToByteArray
                                                            (pVVar48,(MethodInfo *)0x0);
                                        uVar50 = CubeModelingStateMachine::
                                                 CubeModelingStateMachine_get_CurrentMaterialId
                                                           (e,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)
                                                     CONCAT31(pVStack_22._1_3_,uVar50);
                                        pBVar51 = Cube::Cube_CreateMaterialArray
                                                            (uVar50,(MethodInfo *)0x0);
                                        pVStack_22 = (Vector3__Array *)func_?();
                                        Cube::Cube__ctor((Cube *)pVStack_22,pBVar49,pBVar51,
                                                         (MethodInfo *)0x0);
                                        cVar21 = pVStack_24 == (Vector3__Array *)0x0;
                                        if (!(bool)cVar21) {
                                          pos_11.z = uStack_26._2_2_;
                                          pos_11._0_4_ = uStack_40;
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    ((MVCubeModelBase *)pVStack_24,pos_11,
                                                     (CubeBase *)pVStack_22,(MethodInfo *)0x0);
                                          pCVar25 = (this->fields).movingEdgeCube;
                                          pCVar52 = (CubePickingInfo *)func_?();
                                          CubePickingInfo::CubePickingInfo__ctor_1
                                                    (pCVar52,pCVar25,(MethodInfo *)0x0);
                                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                          cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                          if (!(bool)cVar21) {
                                            pos_05.z = uStack_26._2_2_;
                                            pos_05._0_4_ = uStack_40;
                                            pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                (pMVar23,pos_05,(MethodInfo *)0x0);
                                            pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                                            cVar21 = pCVar52 == (CubePickingInfo *)0x0;
                                            if (!(bool)cVar21) {
                                              (pCVar52->fields).cube = pCVar53;
                                              func_?();
                                              *(Vector3__Array **)&(pCVar52->fields).iLocalPos =
                                                   uStack_40;
                                              (pCVar52->fields).iLocalPos.z = uStack_26._2_2_;
                                              pCVar25 = (this->fields).movingEdgeCube;
                                              cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                              if ((!(bool)cVar21) &&
                                                 (cVar21 = (e->fields).
                                                           _TargetCubeModel_k__BackingField ==
                                                           (MVCubeModelBase *)0x0, !(bool)cVar21)) {
                                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                          ((e->fields).
                                                           _TargetCubeModel_k__BackingField,
                                                           (pCVar25->fields).iLocalPos,
                                                           (pCVar25->fields).cube,(MethodInfo *)0x0)
                                                ;
                                                (this->fields).movingEdgeCube = pCVar52;
                                                func_?();
                                                pVStack_22 = (Vector3__Array *)
                                                             (this->fields).movingEdgeCube;
                                                cVar21 = pVStack_22 == (Vector3__Array *)0x0;
                                                if (!(bool)cVar21) {
                                                  pVVar28 = Cube::Cube_GetFaceAxis
                                                                      (&VStack_29,
                                                                       pVStack_22->max_length,
                                                                       (MethodInfo *)0x0);
                                                  axis.z._1_1_ = (char)((uint)pVVar28->z >> 8);
                                                  axis._0_9_ = *(unkbyte9 *)pVVar28;
                                                  axis.z._2_2_ = (short)((uint)pVVar28->z >> 0x10);
                                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_22,
                                                                      -1.0,axis,&CStack_16,
                                                                      (MethodInfo *)0x0);
                                                  pVStack_24 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  cVar21 = pVStack_24 == (Vector3__Array *)0x0;
                                                  if (!(bool)cVar21) {
                                                    pVStack_22 = (Vector3__Array *)
                                                                 Cube::Cube_GetFaceAxis
                                                                           (&VStack_29,
                                                                            pVStack_24->max_length,
                                                                            (MethodInfo *)0x0);
                                                    pCVar25 = (this->fields).movingEdgeCube;
                                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                                    if (!(bool)cVar21) {
                                                      pvVar55 = (void *)(((MVCubeModelBase__Fields *
                                                                          )&pVStack_22->bounds)->_).
                                                                        _.id;
                                                      axis_01.z._1_1_ = (char)((uint)pvVar55 >> 8);
                                                      axis_01._0_9_ = *(unkbyte9 *)pVStack_22;
                                                      axis_01.z._2_2_ =
                                                           (short)((uint)pvVar55 >> 0x10);
                                                      Cube::Cube_MoveVertex
                                                                ((CubePickingInfo *)pVStack_24,-0.75
                                                                 ,axis_01,(pCVar25->fields).
                                                                          pickedEdgeIndex0,
                                                                 (pCVar25->fields).pickedEdgeIndex1,
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
                              else if (pVStack_22 == (Vector3__Array *)0x2) {
                                CVar56 = CubeModelingStateMachine::
                                         CubeModelingStateMachine_CanRemoveCubeAt
                                                   (e,(this->fields).movingEdgeCube,
                                                    (MethodInfo *)0x0);
                                pCVar25 = (this->fields).movingEdgeCube;
                                if (CVar56 == CanPerformCubeActionResult__Enum_Yes) {
                                  cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                  if (!(bool)cVar21) {
                                    pVStack_22 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
                                    iStack_57 = (int16_t)((uint)pVStack_22 >> 0x10);
                                    iVar15 = (pCVar25->fields).iLocalPos.z;
                                    pCVar25 = (this->fields).movingEdgeCube;
                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                    if (!(bool)cVar21) {
                                      pVStack_24 = (Vector3__Array *)(pCVar25->fields).pickedFace;
                                      if (cRam_? == '\0') {
                                        func_?();
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      sVar58 = 0;
                                      sVar59 = 0;
                                      sVar60 = 0;
                                      if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      MVWorldObject.dll::MV::WorldObject::IntVector::
                                      IntVector__ctor_1((IntVector *)&stack0xffffff6c,
                                                        (int32_t)pVStack_22,
                                                        CONCAT22(iVar15,iStack_57),
                                                        CONCAT22(uStack_4,iVar15),(MethodInfo *)0x0
                                                       );
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVVar28 = Cube::Cube_GetFaceAxis
                                                          (&VStack_29,(Face__Enum)pVStack_24,
                                                           (MethodInfo *)0x0);
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      uVar61 = pVVar28->x;
                                      uVar62 = pVVar28->y;
                                      sVar58 = sVar58 - (short)(int)(float)uVar61;
                                      sVar59 = sVar59 - (short)(int)(float)uVar62;
                                      uStack_26 = (IndentArea *)
                                                  CONCAT22(sVar60 - (short)(int)pVVar28->z,
                                                           (undefined2)uStack_26);
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        pos_04.z._1_1_ =
                                             (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                        pos_04._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,pos_04,AudioActions__Enum_CubeRemoved,
                                                   (MethodInfo *)0x0);
                                        pCVar25 = (this->fields).movingEdgeCube;
                                        cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = (e->fields)._TargetCubeModel_k__BackingField ==
                                                     (MVCubeModelBase *)0x0, !(bool)cVar21)) {
                                          MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                    ((e->fields)._TargetCubeModel_k__BackingField,
                                                     (pCVar25->fields).iLocalPos,(MethodInfo *)0x0);
                                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                          cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                          if (!(bool)cVar21) {
                                            pos_13.y = sVar59;
                                            pos_13.x = sVar58;
                                            pos_13.z._0_1_ = (char)((uint)uStack_26 >> 0x10);
                                            pos_13.z._1_1_ = (char)((uint)uStack_26 >> 0x18);
                                            pVVar48 = (Vector3__Array *)
                                                      MVCubeModelBase::MVCubeModelBase_GetCube
                                                                (pMVar23,pos_13,(MethodInfo *)0x0);
                                            pVStack_24 = pVVar48;
                                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                     CubeBase_op_Inequality
                                                               ((CubeBase *)pVVar48,(CubeBase *)0x0,
                                                                (MethodInfo *)0x0);
                                            if (bVar19 == 0) {
                                              (this->fields).movingEdgeCube = (CubePickingInfo *)0x0
                                              ;
                                              func_?();
                                            }
                                            else {
                                              pCVar25 = (this->fields).movingEdgeCube;
                                              pVVar48 = (Vector3__Array *)func_?();
                                              pVStack_22 = pVVar48;
                                              CubePickingInfo::CubePickingInfo__ctor_1
                                                        ((CubePickingInfo *)pVVar48,pCVar25,
                                                         (MethodInfo *)0x0);
                                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor ==
                                                  0) {
                                                func_?();
                                              }
                                              pCVar53 = Cube::Cube_Clone_1((Cube *)pVStack_24,
                                                                           (MethodInfo *)0x0);
                                              cVar21 = true;
                                              if (pVVar48 == (Vector3__Array *)0x0)
                                              goto code_?;
                                              (((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.
                                              id = (int32_t)pCVar53;
                                              func_?();
                                              pVVar48->vector[2].z = (float)CONCAT22(sVar59,sVar58);
                                              *(int16_t *)&pVVar48->vector[3].x = uStack_26._2_2_;
                                              (this->fields).movingEdgeCube =
                                                   (CubePickingInfo *)pVVar48;
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
                                  cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                  if (((!(bool)cVar21) &&
                                      (cVar21 = (e->fields)._TargetCubeModel_k__BackingField ==
                                                (MVCubeModelBase *)0x0, !(bool)cVar21)) &&
                                     (cVar21 = (this->fields).modelCursor == (ModelCursor3D *)0x0,
                                     !(bool)cVar21)) {
code_?:
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,
                                               (pCVar25->fields).iLocalPos,pGVar44,
                                               showUnlockNotification,pMVar42);
                                    pCVar25 = (this->fields).movingEdgeCube;
                                    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                    if ((!(bool)cVar21) &&
                                       (cVar21 = pMVar23 == (MVCubeModelBase *)0x0, !(bool)cVar21))
                                    {
                                      pCVar53 = (this->fields).prevCubeState;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                              else {
                                if (pVStack_22 != (Vector3__Array *)0x0) break;
                                pVStack_24 = (Vector3__Array *)
                                             CubeModelingStateMachine::
                                             CubeModelingStateMachine_CanRemoveCubeAt
                                                       (e,(this->fields).movingEdgeCube,
                                                        (MethodInfo *)0x0);
                                pCVar25 = (this->fields).movingEdgeCube;
                                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                if (!(bool)cVar21) {
                                  pCVar53 = (pCVar25->fields).cube;
                                  cVar21 = pCVar53 == (Cube *)0x0;
                                  if (!(bool)cVar21) {
                                    pVStack_22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                 CubeBase_get_Corners
                                                           ((CubeBase *)pCVar53,(MethodInfo *)0x0);
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    bVar19 = Cube::Cube_IsCollapsed(pVStack_22,(MethodInfo *)0x0);
                                    if ((bVar19 == 0) || (pVStack_24 != (Vector3__Array *)0x1)) {
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      if (pVStack_24 == (Vector3__Array *)0x2)
                                      goto code_?;
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,(pCVar25->fields).iLocalPos,
                                                   AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                                        pCVar25 = (this->fields).movingEdgeCube;
                                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                        cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = pMVar23 == (MVCubeModelBase *)0x0,
                                           !(bool)cVar21)) {
                                          iVector.z._1_1_ =
                                               (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                          iVector._0_5_ =
                                               *(undefined5 *)&(pCVar25->fields).iLocalPos;
                                          MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                    (pMVar23,iVector,(pCVar25->fields).cube,
                                                     (MethodInfo *)0x0);
                                          break;
                                        }
                                      }
                                    }
                                    else {
                                      pCVar25 = (this->fields).movingEdgeCube;
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                        cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = (this->fields).modelCursor ==
                                                     (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                          pMVar42 = (MethodInfo *)0x0;
                                          showUnlockNotification = 0;
                                          pGVar44 = (pMVar23->fields)._.gameObject;
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            uVar50 = (this->fields).prevMaterial;
                            pVStack_22 = (Vector3__Array *)CONCAT31(pVStack_22._1_3_,uVar50);
                            (this->fields).currentInternalState = 2;
                            CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                      (e,uVar50,(MethodInfo *)0x0);
                            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                      (1,(MethodInfo *)0x0);
                            value = (WebHeaderCollection *)(this->fields).movingEdgeCube;
                            if ((this->fields).edgeHasMoved == 0) {
                              uVar1 = 0x1045;
                              System.dll::System::Net::WebResponseStream::
                              WebResponseStream_set_Headers
                                        ((WebResponseStream *)e,value,(MethodInfo *)0x0);
                              pCVar25 = (e->fields)._SelectedCube_k__BackingField;
                              cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                              if (!(bool)cVar21) {
                                pos_10.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                pos_10._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
                                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                          (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                uStack_6 = 2;
                                EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                                   (e,(MethodInfo *)0x0);
                                pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                if (!(bool)cVar21) {
                                  iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                     (pMVar23,(MethodInfo *)0x0);
                                  CubeModelTool::CubeModelTool_SendCubeEvent
                                            (iVar45,EVar18,(MethodInfo *)0x0);
                                  if (EVar18 != EditCubeChange__Enum_None) {
code_?:
                                    uStack_6 = 0xffffffff;
code_?:
                                    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                    func_?();
                                    (this->fields).edgeHasMoved = 0;
                                    break;
                                  }
                                  pCVar25 = (e->fields)._SelectedCube_k__BackingField;
                                  cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                  if (!(bool)cVar21) {
                                    pVStack_22._0_2_ = (pCVar25->fields).iLocalPos.x;
                                    pVStack_22._2_2_ = (pCVar25->fields).iLocalPos.y;
                                    uStack_40 = (Vector3__Array *)
                                                CONCAT22((pCVar25->fields).iLocalPos.z,
                                                         (undefined2)uStack_40);
                                    pVStack_24 = (Vector3__Array *)
                                                 (((e->fields)._SelectedCube_k__BackingField)->
                                                 fields).pickedFace;
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    localPos_03.z = (int16_t)pVStack_22;
                                    localPos_03._0_4_ = &stack0xffffff6c;
                                    IVar27 = Cube::Cube_GetCubePosAboveFace
                                                       (localPos_03,CONCAT22(uVar1,uStack_40._2_2_)
                                                        ,(MethodInfo *)pVStack_24);
                                    pVStack_22 = IVar27._0_4_;
                                    pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pMVar20 = (this->fields).modelCursor;
                                    cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                    if ((!(bool)cVar21) &&
                                       (cVar21 = pMVar20 == (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                      ModelCursor::ModelCursor_SetErrorCursor
                                                ((ModelCursor *)pMVar20,*(IntVector *)pVStack_22,
                                                 (pMVar23->fields)._.gameObject,0,(MethodInfo *)0x0)
                                      ;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              pVStack_24 = (Vector3__Array *)
                                           CubeModelingStateMachine::
                                           CubeModelingStateMachine_CanRemoveCubeAt
                                                     (e,(CubePickingInfo *)value,(MethodInfo *)0x0);
                              pCVar25 = (this->fields).movingEdgeCube;
                              if (pVStack_24 == (Vector3__Array *)0x2) {
                                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                if (!(bool)cVar21) {
                                  pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                  cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                  if ((!(bool)cVar21) &&
                                     (cVar21 = (this->fields).modelCursor == (ModelCursor3D *)0x0,
                                     !(bool)cVar21)) {
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,
                                               (pCVar25->fields).iLocalPos,
                                               (pMVar23->fields)._.gameObject,1,(MethodInfo *)0x0);
                                    goto code_?;
                                  }
                                }
                              }
                              else {
                                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                if (!(bool)cVar21) {
                                  pCVar53 = (pCVar25->fields).cube;
                                  cVar21 = pCVar53 == (Cube *)0x0;
                                  if (!(bool)cVar21) {
                                    uVar1 = 0;
                                    uVar41 = 0;
                                    pVStack_22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                 CubeBase_get_Corners
                                                           ((CubeBase *)pCVar53,(MethodInfo *)0x0);
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      in_stack_12 = 0x1045;
                                      func_?();
                                    }
                                    bVar19 = Cube::Cube_IsCollapsed(pVStack_22,(MethodInfo *)0x0);
                                    pCVar25 = (this->fields).movingEdgeCube;
                                    if (bVar19 == 0) {
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,(pCVar25->fields).iLocalPos,
                                                   AudioActions__Enum_EdgeMoved,(MethodInfo *)0x0);
                                        pCVar25 = (this->fields).movingEdgeCube;
                                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                        cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = pMVar23 == (MVCubeModelBase *)0x0,
                                           !(bool)cVar21)) {
                                          pCVar53 = (pCVar25->fields).cube;
                                          uVar63 = SUB41(pCVar53,0);
                                          uVar64 = (undefined1)((uint)pCVar53 >> 8);
                                          in_stack_12 = (undefined2)((uint)pCVar53 >> 0x10);
code_?:
                                          iVector_02.z._1_1_ =
                                               (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                          iVector_02._0_5_ =
                                               *(undefined5 *)&(pCVar25->fields).iLocalPos;
                                          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                    (pMVar23,iVector_02,
                                                     (Cube *)CONCAT22(uVar41,uVar1),
                                                     (MethodInfo *)
                                                     CONCAT22(in_stack_12,
                                                              CONCAT11(uVar64,uVar63)));
                                          goto code_?;
                                        }
                                      }
                                    }
                                    else if (pVStack_24 == (Vector3__Array *)0x0) {
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        CubeModelingStateMachine::
                                        CubeModelingStateMachine_HandleAudio
                                                  (e,(pCVar25->fields).iLocalPos,
                                                   AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0)
                                        ;
                                        pCVar25 = (this->fields).movingEdgeCube;
                                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                        cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = pMVar23 == (MVCubeModelBase *)0x0,
                                           !(bool)cVar21)) {
                                          pos_15.z._1_1_ =
                                               (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                          pos_15._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos
                                          ;
                                          MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                    (pMVar23,pos_15,(MethodInfo *)0x0);
                                          goto code_?;
                                        }
                                      }
                                    }
                                    else {
                                      cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                      if (!(bool)cVar21) {
                                        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                        cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                        if ((!(bool)cVar21) &&
                                           (cVar21 = (this->fields).modelCursor ==
                                                     (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                          ModelCursor::ModelCursor_SetErrorCursor
                                                    ((ModelCursor *)(this->fields).modelCursor,
                                                     (pCVar25->fields).iLocalPos,
                                                     (pMVar23->fields)._.gameObject,0,
                                                     (MethodInfo *)0x0);
                                          pCVar25 = (this->fields).movingEdgeCube;
                                          cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                          if (!(bool)cVar21) {
                                            pIVar46 = &(pCVar25->fields).iLocalPos;
                                            uVar1 = pIVar46->x;
                                            uVar41 = pIVar46->y;
                                            iVar15 = (pCVar25->fields).iLocalPos.z;
                                            uVar63 = (undefined1)iVar15;
                                            uVar64 = (undefined1)((ushort)iVar15 >> 8);
                                            pos_14.z._1_1_ = uVar64;
                                            pos_14._0_5_ = *(undefined5 *)pIVar46;
                                            CubeModelingStateMachine::
                                            CubeModelingStateMachine_HandleAudio
                                                      (e,pos_14,AudioActions__Enum_FaceMoved,
                                                       (MethodInfo *)0x0);
                                            pCVar25 = (this->fields).movingEdgeCube;
                                            pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                            cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                            if ((!(bool)cVar21) &&
                                               (cVar21 = pMVar23 == (MVCubeModelBase *)0x0,
                                               !(bool)cVar21)) goto code_?;
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
                             (bVar19 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0)
                             , bVar19 != 0)) {
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
                            pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                            cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                            if (!(bool)cVar21) {
                              iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar23,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar45,EVar18,(MethodInfo *)0x0);
                              if (EVar18 != EditCubeChange__Enum_None) {
                                bVar38 = true;
                                uStack_6 = 0xffffffff;
                                break;
                              }
                              pCVar25 = (e->fields)._SelectedCube_k__BackingField;
                              cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                              if (!(bool)cVar21) {
                                pVStack_22._0_2_ = (pCVar25->fields).iLocalPos.x;
                                pVStack_22._2_2_ = (pCVar25->fields).iLocalPos.y;
                                uStack_40 = (Vector3__Array *)
                                            CONCAT22((pCVar25->fields).iLocalPos.z,
                                                     (undefined2)uStack_40);
                                pVStack_24 = (Vector3__Array *)
                                             (((e->fields)._SelectedCube_k__BackingField)->fields).
                                             pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_00.z = (int16_t)pVStack_22;
                                localPos_00._0_4_ = &stack0xffffff6c;
                                IVar27 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_00,
                                                    CONCAT22(in_stack_65,uStack_40._2_2_),
                                                    (MethodInfo *)pVStack_24);
                                pVStack_22 = IVar27._0_4_;
                                pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                pMVar20 = (this->fields).modelCursor;
                                cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                if ((!(bool)cVar21) &&
                                   (cVar21 = pMVar20 == (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                  iPos_00.z._1_1_ =
                                       (char)((ushort)*(undefined2 *)&pVStack_22->monitor >> 8);
                                  iPos_00._0_5_ = *(undefined5 *)pVStack_22;
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)pMVar20,iPos_00,
                                             (pMVar23->fields)._.gameObject,0,(MethodInfo *)0x0);
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
                           (pVStack_22 = (Vector3__Array *)
                                         UnityEngine.CoreModule.dll::UnityEngine::Time::
                                         Time_1_get_time((MethodInfo *)0x0),
                           _UNK_? < (float)pVStack_22 - (this->fields).prevMouseUpTime)) {
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
                            pVStack_22 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
                            pVStack_24 = (Vector3__Array *)
                                         MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                            if (((float)pVStack_22 != 0.0) ||
                               ((float)((uint)pVStack_24 & _UNK_?) != 0.0)) {
                              pCVar25 = (this->fields).prevSelectedCube;
                              cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                              if (!(bool)cVar21) {
                                pVStack_24 = (Vector3__Array *)(pCVar25->fields).cube;
                                pVStack_22 = (Vector3__Array *)
                                             (((this->fields).prevSelectedCube)->fields).pickedFace;
                                if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                uVar50 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_GetMaterial
                                                   ((CubeBase *)pVStack_24,(Face__Enum)pVStack_22,
                                                    (MethodInfo *)0x0);
                                pVStack_24 = (Vector3__Array *)CONCAT31(pVStack_24._1_3_,uVar50);
                                pMVar66 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                cVar21 = pMVar66 == (MVNetworkGame *)0x0;
                                if (!(bool)cVar21) {
                                  this_00 = (pMVar66->fields)._MaterialRepository_k__BackingField;
                                  cVar21 = this_00 == (MVMaterialRepository *)0x0;
                                  if (!(bool)cVar21) {
                                    bVar19 = MVMaterialRepository::
                                             MVMaterialRepository_IsMaterialUnlocked_1
                                                       (this_00,(uint8_t)pVStack_24,
                                                        (MethodInfo *)0x0);
                                    if (bVar19 != 0) {
                                      uVar50 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      (this->fields).prevMaterial = uVar50;
                                      CubeModelingStateMachine::
                                      CubeModelingStateMachine_set_CurrentMaterialId
                                                (e,(uint8_t)pVStack_24,(MethodInfo *)0x0);
                                      (this->fields).movingEdgeCube =
                                           (this->fields).prevSelectedCube;
                                      func_?();
                                      (this->fields).currentInternalState = 0;
                                      (this->fields).deltaAccum = 0.0;
                                      UnityEngine.CoreModule.dll::UnityEngine::Cursor::
                                      Cursor_1_set_visible(0,(MethodInfo *)0x0);
                                      break;
                                    }
                                    pCVar25 = (this->fields).prevSelectedCube;
code_?:
                                    cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                                    if (!(bool)cVar21) {
                                      pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                                      cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                                      if ((!(bool)cVar21) &&
                                         (cVar21 = (this->fields).modelCursor ==
                                                   (ModelCursor3D *)0x0, !(bool)cVar21)) {
                                        iPos_01.z._1_1_ =
                                             (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                                        iPos_01._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
                                        ModelCursor::ModelCursor_SetErrorCursor
                                                  ((ModelCursor *)(this->fields).modelCursor,iPos_01
                                                   ,(pMVar23->fields)._.gameObject,1,
                                                   (MethodInfo *)0x0);
                                        break;
                                      }
                                    }
                                  }
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
                          pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                          cVar21 = true;
                          if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
                          bVar19 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                                             ((pMVar23->fields)._.gameObject,
                                              (IntVector *)&puStack_14,(MethodInfo *)0x0);
                          if ((bVar19 != 0) &&
                             (requestedCubePos_01.z = iVar15, requestedCubePos_01._0_4_ = puStack_14
                             , CVar56 = CubeModelingStateMachine::
                                        CubeModelingStateMachine_CanAddCubeAt_1
                                                  (e,requestedCubePos_01,(MethodInfo *)0x0),
                             CVar56 == CanPerformCubeActionResult__Enum_Yes)) {
                            pos_09.z = iVar15;
                            pos_09._0_4_ = puStack_14;
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            puVar67 = puStack_14;
                            pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                            uStack_40 = (Vector3__Array *)CONCAT22(iVar15,(undefined2)uStack_40);
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            pVStack_22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pVStack_24 = (Vector3__Array *)
                                         MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                         CubeDataPacker_CornersToByteArray
                                                   (pVStack_22,(MethodInfo *)0x0);
                            uVar50 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_get_CurrentMaterialId
                                               (e,(MethodInfo *)0x0);
                            pVStack_22 = (Vector3__Array *)CONCAT31(pVStack_22._1_3_,uVar50);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pBVar49 = Cube::Cube_CreateMaterialArray
                                                ((uint8_t)pVStack_22,(MethodInfo *)0x0);
                            pVStack_22 = (Vector3__Array *)func_?();
                            Cube::Cube__ctor((Cube *)pVStack_22,(Byte__Array *)pVStack_24,pBVar49,
                                             (MethodInfo *)0x0);
                            cVar21 = true;
                            if (pMVar23 == (MVCubeModelBase *)0x0) goto code_?;
                            pos_01.z._0_1_ = (char)((uint)uStack_40 >> 0x10);
                            pos_01._0_4_ = puVar67;
                            pos_01.z._1_1_ = (char)((uint)uStack_40 >> 0x18);
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      (pMVar23,pos_01,(CubeBase *)pVStack_22,(MethodInfo *)0x0);
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
                        cVar21 = true;
                        if (pCVar53 == (Cube *)0x0) goto code_?;
                        pCVar53 = Cube::Cube_Clone(pCVar53,(MethodInfo *)0x0);
                      }
                      (this->fields).prevCubeState = pCVar53;
                      func_?();
                      (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
                      func_?();
                      if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
                      pVVar48 = (Vector3__Array *)(this->fields).movingEdgeCube;
                      pMVar20 = (this->fields).modelCursor;
                      pVStack_22 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
                      pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
                      cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
                      if (!(bool)cVar21) {
                        pVVar68 = (Vector3__Array *)(pMVar23->fields)._.gameObject;
                        pVVar69 = (Vector3__Array *)(this->fields).currentInternalState;
                        pVStack_24 = pVVar68;
                        if (pVVar48 == (Vector3__Array *)0x0) {
                          pFVar70 = (pMVar20->fields)._.faceCursor;
                          if (pVStack_22 == (Vector3__Array *)0x0) {
                            cVar21 = pFVar70 == (FaceCursor *)0x0;
                            if (!(bool)cVar21) {
                              pGVar44 = (pFVar70->fields).gameObject;
                              cVar21 = pGVar44 == (GameObject *)0x0;
                              if (!(bool)cVar21) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar44,0,(MethodInfo *)0x0);
                                pIVar37 = (pMVar20->fields).indentArea;
                                cVar21 = pIVar37 == (IndentArea *)0x0;
                                if (!(bool)cVar21) {
                                  pGVar44 = (pIVar37->fields).gameObject;
                                  cVar21 = pGVar44 == (GameObject *)0x0;
                                  if (!(bool)cVar21) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar44,0,(MethodInfo *)0x0);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            cVar21 = pFVar70 == (FaceCursor *)0x0;
                            if (!(bool)cVar21) {
                              pGVar44 = (pFVar70->fields).gameObject;
                              cVar21 = pGVar44 == (GameObject *)0x0;
                              if (!(bool)cVar21) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar44,1,(MethodInfo *)0x0);
                                pFVar70 = (pMVar20->fields)._.faceCursor;
                                pVVar68 = pVStack_22;
joined_?:
                                cVar21 = pFVar70 == (FaceCursor *)0x0;
                                if (!(bool)cVar21) {
                                  FaceCursor::FaceCursor_UpdateCursor
                                            (pFVar70,(CubePickingInfo *)pVVar68,
                                             (GameObject *)pVStack_24,(MethodInfo *)0x0);
code_?:
                                  this_01 = (pMVar20->fields)._.errorCursor;
                                  cVar21 = this_01 == (CellCursor *)0x0;
                                  if (!(bool)cVar21) {
                                    CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
                                    pVVar68 = pVStack_22;
                                    if (pVVar69 == (Vector3__Array *)0x3) {
                                      fVar71 = 0.0;
                                      fVar3 = 0.0;
                                      fVar39 = 0.0;
                                      bVar19 = DrawPlane::DrawPlane_Pick
                                                         ((Vector3 *)&stack0xffffff3c,
                                                          (MethodInfo *)0x0);
                                      if (bVar19 == 0) {
code_?:
                                        *unaff_FS_OFFSET = uStack_8;
                                        return;
                                      }
                                      pGVar72 = MVGameControllerBase::
                                                MVGameControllerBase_get_GameEventManager
                                                          ((MethodInfo *)0x0);
                                      cVar21 = pGVar72 == (GameEventManager *)0x0;
                                      if (!(bool)cVar21) {
                                        pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode;
                                        cVar21 = pGVar73 ==
                                                 (GameEventManager_AvatarCommandsBuildModeManager *)
                                                 0x0;
                                        if (!(bool)cVar21) {
                                          pGVar74 = (pGVar73->fields).LaserCommands;
                                          cVar21 = pGVar74 ==
                                                   (
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                                  *)0x0;
                                          if (!(bool)cVar21) {
                                            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                            ::
                                            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                                      (pGVar74,0.2,(MethodInfo *)0x0);
                                            pGVar72 = MVGameControllerBase::
                                                      MVGameControllerBase_get_GameEventManager
                                                                ((MethodInfo *)0x0);
                                            cVar21 = pGVar72 == (GameEventManager *)0x0;
                                            if (!(bool)cVar21) {
                                              pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode;
                                              cVar21 = pGVar73 ==
                                                       (
                                                  GameEventManager_AvatarCommandsBuildModeManager *)
                                                  0x0;
                                              if (!(bool)cVar21) {
                                                pGVar74 = (pGVar73->fields).LaserCommands;
                                                cVar21 = pGVar74 ==
                                                         (
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                                  *)0x0;
                                                if (!(bool)cVar21) {
                                                  to_00.y = fVar39;
                                                  to_00.x = fVar3;
                                                  to_00.z = fVar71;
                                                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                                  ::
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                            (pGVar74,to_00,(MethodInfo *)0x0);
                                                  *unaff_FS_OFFSET = uStack_8;
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else if (pVVar48 == (Vector3__Array *)0x0) {
                                      if (bVar38) {
                                        pGVar72 = MVGameControllerBase::
                                                  MVGameControllerBase_get_GameEventManager
                                                            ((MethodInfo *)0x0);
code_?:
                                        cVar21 = pGVar72 == (GameEventManager *)0x0;
                                        if (!(bool)cVar21) {
                                          pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode;
                                          cVar21 = pGVar73 ==
                                                   (GameEventManager_AvatarCommandsBuildModeManager
                                                    *)0x0;
                                          if (!(bool)cVar21) {
                                            pGVar74 = (pGVar73->fields).LaserCommands;
                                            cVar21 = pGVar74 ==
                                                     (
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                                  *)0x0;
                                            if (!(bool)cVar21) {
                                              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                              ::
                                              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                                        (pGVar74,0.2,(MethodInfo *)0x0);
                                              *unaff_FS_OFFSET = uStack_8;
                                              return;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        if (pVStack_22 == (Vector3__Array *)0x0)
                                        goto code_?;
                                        pGVar72 = MVGameControllerBase::
                                                  MVGameControllerBase_get_GameEventManager
                                                            ((MethodInfo *)0x0);
                                        cVar21 = pGVar72 == (GameEventManager *)0x0;
                                        if (!(bool)cVar21) {
                                          pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode;
                                          cVar21 = pGVar73 ==
                                                   (GameEventManager_AvatarCommandsBuildModeManager
                                                    *)0x0;
                                          if (!(bool)cVar21) {
                                            pGVar74 = (pGVar73->fields).LaserCommands;
                                            cVar21 = pGVar74 ==
                                                     (
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                                  *)0x0;
                                            if (!(bool)cVar21) {
                                              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                              ::
                                              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                        (pGVar74,*(Vector3 *)&pVVar68->vector[1].z,
                                                         (MethodInfo *)0x0);
                                              *unaff_FS_OFFSET = uStack_8;
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      if (cRam_? == '\0') {
                                        func_?();
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      FVar47 = pVVar48->max_length;
                                      pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)
                                                         &pVVar48->bounds)->_)._.id;
                                      fVar3 = pVVar48->vector[2].z;
                                      iVar15 = SUB42(fVar3,0);
                                      uVar1 = (undefined2)((uint)fVar3 >> 0x10);
                                      uStack_40 = (Vector3__Array *)
                                                  CONCAT22(*(int16_t *)&pVVar48->vector[3].x,
                                                           (undefined2)uStack_40);
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVVar68 = pVStack_24;
                                      iVector_01.y = uVar1;
                                      iVector_01.x = iVar15;
                                      iVector_01.z = uStack_40._2_2_;
                                      pVVar69 = Cube::Cube_GetFaceVerticesWorld
                                                          ((GameObject *)pVStack_24,pCVar53,FVar47,
                                                           iVector_01,(MethodInfo *)0x0);
                                      cVar21 = pVVar69 == (Vector3__Array *)0x0;
                                      if (!(bool)cVar21) {
                                        cVar75 = '\0';
                                        cVar21 = '\x01';
                                        if (pVVar69->max_length == 0) goto code_?;
                                        uVar76 = pVVar69->max_length;
                                        cVar75 = uVar76 == 0;
                                        cVar21 = uVar76 == 1;
                                        if (uVar76 < 2) goto code_?;
                                        VStack_29.x = pVVar69->vector[1].x;
                                        VStack_29.y = pVVar69->vector[1].y;
                                        VStack_29.z = pVVar69->vector[1].z;
                                        uVar77 = pVVar69->vector[0].x;
                                        uVar78 = pVVar69->vector[0].y;
                                        fVar3 = VStack_29.x + (float)uVar77;
                                        fVar39 = VStack_29.y + (float)uVar78;
                                        fVar71 = VStack_29.z + pVVar69->vector[0].z;
                                        uVar76 = pVVar69->max_length;
                                        cVar75 = uVar76 < 2;
                                        cVar21 = uVar76 == 2;
                                        if (uVar76 < 3) goto code_?;
                                        VStack_29.x = pVVar69->vector[2].x;
                                        VStack_29.y = pVVar69->vector[2].y;
                                        VStack_29.z = pVVar69->vector[2].z;
                                        fVar3 = VStack_29.x + fVar3;
                                        fVar39 = VStack_29.y + fVar39;
                                        uVar76 = pVVar69->max_length;
                                        cVar75 = uVar76 < 3;
                                        cVar21 = uVar76 == 3;
                                        if (uVar76 < 4) goto code_?;
                                        VStack_29.x = pVVar69->vector[3].x;
                                        VStack_29.y = pVVar69->vector[3].y;
                                        fVar3 = (VStack_29.x + fVar3) * _UNK_?;
                                        pVVar79 = (Vector3__Array *)
                                                  ((VStack_29.y + fVar39) * _UNK_?);
                                        pVVar69 = (Vector3__Array *)
                                                  ((pVVar69->vector[3].z + VStack_29.z + fVar71) *
                                                  _UNK_?);
                                        VStack_29.z = (float)pVVar69;
                                        pVStack_24 = pVVar79;
                                        pVStack_22 = pVVar69;
                                        if (pVVar48->vector[0].x == 0.0) {
                                          fStack_80 = fVar3;
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pVVar81 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar82 = (pVVar81->upVector).x;
                                          uVar83 = (pVVar81->upVector).y;
                                          VStack_29.z = (pVVar81->upVector).z + (float)pVStack_22;
                                          VStack_29.y = (float)uVar83 + (float)pVStack_24;
                                          VStack_29.x = (float)uVar82 + fVar3;
                                          if ((TypeInfo__UnityEngine__Debug->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          start_00.y._0_1_ = (char)pVVar79;
                                          start_00.x = fStack_80;
                                          start_00.y._1_1_ = (char)((uint)pVVar79 >> 8);
                                          start_00.y._2_2_ = (short)((uint)pVVar79 >> 0x10);
                                          start_00.z = (float)pVVar69;
                                          end_00.z = VStack_29.z;
                                          end_00.x = VStack_29.x;
                                          end_00.y = VStack_29.y;
                                          color_00.g = (float)_UNK_?;
                                          color_00.r = (float)_UNK_?;
                                          color_00.b = (float)_UNK_?;
                                          color_00.a._0_1_ = (char)_UNK_?;
                                          color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                          color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                          UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                          Debug_2_DrawLine_1(start_00,end_00,color_00,
                                                             (MethodInfo *)0x0);
code_?:
                                          pGVar72 = MVGameControllerBase::
                                                    MVGameControllerBase_get_GameEventManager
                                                              ((MethodInfo *)0x0);
                                          cVar21 = pGVar72 == (GameEventManager *)0x0;
                                          if (!(bool)cVar21) {
                                            pGVar73 = (pGVar72->fields).AvatarCommandsBuildMode;
                                            cVar21 = pGVar73 ==
                                                     (
                                                  GameEventManager_AvatarCommandsBuildModeManager *)
                                                  0x0;
                                            if (!(bool)cVar21) {
                                              pGVar74 = (pGVar73->fields).LaserCommands;
                                              cVar21 = pGVar74 ==
                                                       (
                                                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                                  *)0x0;
                                              if (!(bool)cVar21) {
                                                to.y._0_2_ = (short)pVVar79;
                                                to.x = fStack_80;
                                                to.y._2_2_ = (short)((uint)pVVar79 >> 0x10);
                                                to.z._0_1_ = (char)pVVar69;
                                                to.z._1_1_ = (char)((uint)pVVar69 >> 8);
                                                to.z._2_2_ = (short)((uint)pVVar69 >> 0x10);
                                                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                                ::
                                                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                          (pGVar74,to,(MethodInfo *)0x0);
                                                pGVar72 = MVGameControllerBase::
                                                          MVGameControllerBase_get_GameEventManager
                                                                    ((MethodInfo *)0x0);
                                                goto code_?;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)
                                                             &pVVar48->bounds)->_)._.id;
                                          fStack_84 = (float)pVVar48->max_length;
                                          fVar39 = pVVar48->vector[0].x;
                                          fVar71 = pVVar48->vector[2].z;
                                          iVar15 = SUB42(fVar71,0);
                                          uVar1 = (undefined2)((uint)fVar71 >> 0x10);
                                          uStack_40 = (Vector3__Array *)
                                                      CONCAT22(*(int16_t *)&pVVar48->vector[3].x,
                                                               (undefined2)uStack_40);
                                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0)
                                          {
                                            func_?();
                                          }
                                          iVector_00.y = uVar1;
                                          iVector_00.x = iVar15;
                                          iVector_00.z = uStack_40._2_2_;
                                          pVVar68 = Cube::Cube_GetEdgeVerticesWorld
                                                              ((GameObject *)pVVar68,pCVar53,
                                                               (Face__Enum)fStack_84,
                                                               (Edge__Enum)fVar39,iVector_00,
                                                               (MethodInfo *)0x0);
                                          if (*(bool *)&pVVar48->vector[0].y == 0) {
                                            cVar21 = pVVar68 == (Vector3__Array *)0x0;
                                            if (!(bool)cVar21) {
                                              if (*(bool *)((int)&pVVar48->vector[0].y + 1) == 0) {
                                                cVar75 = '\0';
                                                cVar21 = '\x01';
                                                if (pVVar68->max_length == 0) goto code_?;
                                                uVar76 = pVVar68->max_length;
                                                cVar75 = uVar76 == 0;
                                                cVar21 = uVar76 == 1;
                                                if (uVar76 < 2) goto code_?;
                                                VStack_29.x = pVVar68->vector[1].x;
                                                VStack_29.y = pVVar68->vector[1].y;
                                                uVar85 = pVVar68->vector[0].x;
                                                uVar86 = pVVar68->vector[0].y;
                                                fVar87 = (pVVar68->vector[1].z +
                                                         pVVar68->vector[0].z) * _UNK_?;
                                                fStack_80 = (VStack_29.x + (float)uVar85) *
                                                            _UNK_?;
                                                fVar88 = (VStack_29.y + (float)uVar86) *
                                                         _UNK_?;
                                              }
                                              else {
                                                uVar76 = pVVar68->max_length;
                                                cVar75 = uVar76 == 0;
                                                cVar21 = uVar76 == 1;
                                                if (uVar76 < 2) goto code_?;
                                                uVar89 = pVVar68->vector[1].x;
                                                fVar88 = pVVar68->vector[1].y;
                                                fVar87 = pVVar68->vector[1].z;
                                                fStack_80 = (float)uVar89;
                                              }
code_?:
                                              pVVar69 = (Vector3__Array *)
                                                        (((float)pVStack_22 - fVar87) *
                                                         _UNK_? + fVar87);
                                              fStack_80 = (fVar3 - fStack_80) * _UNK_? +
                                                          fStack_80;
                                              pVVar79 = (Vector3__Array *)
                                                        (((float)pVStack_24 - fVar88) *
                                                         _UNK_? + fVar88);
                                              VStack_29.z = (float)pVVar69;
                                              goto code_?;
                                            }
                                          }
                                          else {
                                            cVar21 = pVVar68 == (Vector3__Array *)0x0;
                                            if (!(bool)cVar21) {
                                              cVar75 = '\0';
                                              cVar21 = '\x01';
                                              if (pVVar68->max_length == 0) goto code_?;
                                              uVar90 = pVVar68->vector[0].x;
                                              uVar91 = pVVar68->vector[0].y;
                                              fVar87 = pVVar68->vector[0].z;
                                              iStack_92 = (int16_t)uVar91;
                                              iStack_57 = (int16_t)((uint)uVar91 >> 0x10);
                                              fVar39 = pVVar68->vector[0].x;
                                              fVar71 = pVVar68->vector[0].y;
                                              fVar88 = (float)uVar90;
                                              fVar93 = fVar87;
                                              if (cRam_? == '\0') {
                                                func_?();
                                                cRam_? = '\x01';
                                              }
                                              pVVar81 = TypeInfo__UnityEngine__Vector3->
                                                        static_fields;
                                              uVar94 = (pVVar81->upVector).x;
                                              uVar95 = (pVVar81->upVector).y;
                                              VStack_29.z = (pVVar81->upVector).z + fVar93;
                                              VStack_29.y = (float)uVar95 + fVar71;
                                              VStack_29.x = (float)uVar94 + fVar39;
                                              if ((TypeInfo__UnityEngine__Debug->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?();
                                              }
                                              start.y._0_2_ = iStack_92;
                                              start.x = fVar88;
                                              start.y._2_2_ = iStack_57;
                                              start.z = fVar87;
                                              end.z = VStack_29.z;
                                              end.x = VStack_29.x;
                                              end.y = VStack_29.y;
                                              color.g = (float)_UNK_?;
                                              color.r = (float)_UNK_?;
                                              color.b = (float)_UNK_?;
                                              color.a._0_1_ = (char)_UNK_?;
                                              color.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                              color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                              UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                              Debug_2_DrawLine_1(start,end,color,(MethodInfo *)0x0);
                                              fStack_80 = (float)uVar90;
                                              fVar88 = (float)uVar91;
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
                        else {
                          uStack_26 = (pMVar20->fields).indentArea;
                          cVar21 = uStack_26 == (IndentArea *)0x0;
                          if (!(bool)cVar21) {
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
                            pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.
                                              id;
                            fStack_96 = (float)pVVar48->max_length;
                            fVar3 = pVVar48->vector[2].z;
                            iVar15 = *(int16_t *)&pVVar48->vector[3].x;
                            uStack_40._2_2_ = iVar15;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            iVector_03.z._0_1_ = (char)uStack_40._2_2_;
                            iVector_03._0_4_ = fVar3;
                            iVector_03.z._1_1_ = (char)((ushort)uStack_40._2_2_ >> 8);
                            uStack_40 = Cube::Cube_GetFaceVerticesWorld
                                                  ((GameObject *)pVVar68,pCVar53,
                                                   (Face__Enum)fStack_96,iVector_03,
                                                   (MethodInfo *)0x0);
                            this_03 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                       *)func_?();
                            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP
                            ::Metadata::__Il2CppFullySharedGenericType]::
                            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                        *)this_03,
                                       MethodInfo__System__Collections__Generic__List<int>__List__);
                            pGVar44 = (uStack_26->fields).gameObject;
                            cVar21 = pGVar44 == (GameObject *)0x0;
                            if (!(bool)cVar21) {
                              this_04 = (MeshFilter *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponent_1
                                                  (pGVar44,
                                                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                                  );
                              cVar21 = this_04 == (MeshFilter *)0x0;
                              if (!(bool)cVar21) {
                                this_05 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                          MeshFilter_get_mesh(this_04,(MethodInfo *)0x0);
                                cVar21 = this_05 == (Mesh *)0x0;
                                if (!(bool)cVar21) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                            (this_05,(MethodInfo *)0x0);
                                  pMVar42 = 
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                  cVar21 = this_03 ==
                                           (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                            *)0x0;
                                  if (!(bool)cVar21) {
                                    piVar97 = &(this_03->fields)._version;
                                    *piVar97 = *piVar97 + 1;
                                    pMVar98 = (this_03->fields)._items;
                                    uVar76 = (this_03->fields)._size;
                                    cVar21 = pMVar98 ==
                                             (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                              *)0x0;
                                    if (!(bool)cVar21) {
                                      if (uVar76 < pMVar98->max_length) {
                                        (this_03->fields)._size = uVar76 + 1;
                                        cVar75 = uVar76 < pMVar98->max_length;
                                        cVar21 = uVar76 == pMVar98->max_length;
                                        if (!(bool)cVar75) goto code_?;
                                        (&pMVar98->vector[0].index)[uVar76] = 0;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)this_03,0,
                                                   pMVar42->klass->rgctx_data[0xe].method);
                                      }
                                      pMVar42 = 
                                      MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                      piVar97 = &(this_03->fields)._version;
                                      *piVar97 = *piVar97 + 1;
                                      pMVar98 = (this_03->fields)._items;
                                      uVar76 = (this_03->fields)._size;
                                      cVar21 = pMVar98 ==
                                               (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                *)0x0;
                                      if (!(bool)cVar21) {
                                        if (uVar76 < pMVar98->max_length) {
                                          (this_03->fields)._size = uVar76 + 1;
                                          cVar75 = uVar76 < pMVar98->max_length;
                                          cVar21 = uVar76 == pMVar98->max_length;
                                          if (!(bool)cVar75) goto code_?;
                                          (&pMVar98->vector[0].index)[uVar76] = 3;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Int32]::List_1_System_Int32__AddWithResize
                                                    ((List_1_System_Int32_ *)this_03,3,
                                                     pMVar42->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar42 = 
                                        MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                        ;
                                        piVar97 = &(this_03->fields)._version;
                                        *piVar97 = *piVar97 + 1;
                                        pMVar98 = (this_03->fields)._items;
                                        uVar76 = (this_03->fields)._size;
                                        cVar21 = pMVar98 ==
                                                 (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                  *)0x0;
                                        if (!(bool)cVar21) {
                                          if (uVar76 < pMVar98->max_length) {
                                            (this_03->fields)._size = uVar76 + 1;
                                            cVar75 = uVar76 < pMVar98->max_length;
                                            cVar21 = uVar76 == pMVar98->max_length;
                                            if (!(bool)cVar75) goto code_?;
                                            (&pMVar98->vector[0].index)[uVar76] = 2;
                                          }
                                          else {
                                            mscorlib.dll::System::Collections::Generic::
                                            List`1[System::Int32]::
                                            List_1_System_Int32__AddWithResize
                                                      ((List_1_System_Int32_ *)this_03,2,
                                                       pMVar42->klass->rgctx_data[0xe].method);
                                          }
                                          pMVar42 = 
                                          MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                          ;
                                          piVar97 = &(this_03->fields)._version;
                                          *piVar97 = *piVar97 + 1;
                                          pMVar98 = (this_03->fields)._items;
                                          uVar76 = (this_03->fields)._size;
                                          cVar21 = pMVar98 ==
                                                   (
                                                  MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                  *)0x0;
                                          if (!(bool)cVar21) {
                                            if (uVar76 < pMVar98->max_length) {
                                              (this_03->fields)._size = uVar76 + 1;
                                              cVar75 = uVar76 < pMVar98->max_length;
                                              cVar21 = uVar76 == pMVar98->max_length;
                                              if (!(bool)cVar75) goto code_?;
                                              (&pMVar98->vector[0].index)[uVar76] = 2;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::
                                              List`1[System::Int32]::
                                              List_1_System_Int32__AddWithResize
                                                        ((List_1_System_Int32_ *)this_03,2,
                                                         pMVar42->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar42 = 
                                            MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                            ;
                                            piVar97 = &(this_03->fields)._version;
                                            *piVar97 = *piVar97 + 1;
                                            pMVar98 = (this_03->fields)._items;
                                            uVar76 = (this_03->fields)._size;
                                            cVar21 = pMVar98 ==
                                                     (
                                                  MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                  *)0x0;
                                            if (!(bool)cVar21) {
                                              if (uVar76 < pMVar98->max_length) {
                                                (this_03->fields)._size = uVar76 + 1;
                                                cVar75 = uVar76 < pMVar98->max_length;
                                                cVar21 = uVar76 == pMVar98->max_length;
                                                if (!(bool)cVar75) goto code_?;
                                                (&pMVar98->vector[0].index)[uVar76] = 1;
                                              }
                                              else {
                                                mscorlib.dll::System::Collections::Generic::
                                                List`1[System::Int32]::
                                                List_1_System_Int32__AddWithResize
                                                          ((List_1_System_Int32_ *)this_03,1,
                                                           pMVar42->klass->rgctx_data[0xe].method);
                                              }
                                              pMVar42 = 
                                              MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                              ;
                                              piVar97 = &(this_03->fields)._version;
                                              *piVar97 = *piVar97 + 1;
                                              pMVar98 = (this_03->fields)._items;
                                              uVar76 = (this_03->fields)._size;
                                              cVar21 = pMVar98 ==
                                                       (
                                                  MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                  *)0x0;
                                              if (!(bool)cVar21) {
                                                if (uVar76 < pMVar98->max_length) {
                                                  (this_03->fields)._size = uVar76 + 1;
                                                  cVar75 = uVar76 < pMVar98->max_length;
                                                  cVar21 = uVar76 == pMVar98->max_length;
                                                  if (!(bool)cVar75) goto code_?;
                                                  (&pMVar98->vector[0].index)[uVar76] = 0;
                                                }
                                                else {
                                                  mscorlib.dll::System::Collections::Generic::
                                                  List`1[System::Int32]::
                                                  List_1_System_Int32__AddWithResize
                                                            ((List_1_System_Int32_ *)this_03,0,
                                                             pMVar42->klass->rgctx_data[0xe].method)
                                                  ;
                                                }
                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_set_vertices(this_05,uStack_40,
                                                                  (MethodInfo *)0x0);
                                                value_02 = IndentArea::IndentArea_SetUVs
                                                                     (uStack_26,(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_set_uv(this_05,value_02,(MethodInfo *)0x0);
                                                pMVar98 = mscorlib.dll::System::Collections::Generic
                                                          ::List`1[UnityEngine::UIElements::Internal
                                                          ::
                                                  MultiColumnCollectionHeader+ViewState+ColumnState]
                                                  ::
                                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                            (this_03,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_set_triangles(this_05,(Int32__Array *)pMVar98,
                                                                   (MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_RecalculateNormals(this_05,(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_RecalculateBounds(this_05,(MethodInfo *)0x0);
                                                cVar21 = uStack_40 == (Vector3__Array *)0x0;
                                                if (!(bool)cVar21) {
                                                  uVar76 = uStack_40->max_length;
                                                  cVar75 = uVar76 < 2;
                                                  cVar21 = uVar76 == 2;
                                                  if (uVar76 < 3) goto code_?;
                                                  uVar99 = uStack_40->vector[0].x;
                                                  uVar100 = uStack_40->vector[0].y;
                                                  uVar101 = uStack_40->vector[2].x;
                                                  uVar102 = uStack_40->vector[2].y;
                                                  fVar3 = ((float)uVar102 - (float)uVar100) *
                                                           _UNK_?;
                                                  cVar75 = '\0';
                                                  cVar21 = '\x01';
                                                  if (uStack_40->max_length == 0)
                                                  goto code_?;
                                                  uVar103 = uStack_40->vector[0].x;
                                                  uVar104 = uStack_40->vector[0].y;
                                                  fStack_96 = (float)uVar103 +
                                                              ((float)uVar101 - (float)uVar99) *
                                                              _UNK_?;
                                                  fStack_84 = uStack_40->vector[0].z +
                                                              (uStack_40->vector[2].z -
                                                              uStack_40->vector[0].z) *
                                                              _UNK_?;
                                                  pGVar44 = (uStack_26->fields).gameObject;
                                                  cVar21 = pGVar44 == (GameObject *)0x0;
                                                  if (!(bool)cVar21) {
                                                    pTVar32 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar44,(MethodInfo *)0x0);
                                                    if (cRam_? == '\0') {
                                                      func_?();
                                                      cRam_? = '\x01';
                                                    }
                                                    pVVar81 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    uVar105 = (pVVar81->oneVector).x;
                                                    uVar106 = (pVVar81->oneVector).y;
                                                    fVar39 = (uStack_26->fields).size;
                                                    fVar71 = (pVVar81->oneVector).z * fVar39;
                                                    cVar21 = pTVar32 == (Transform *)0x0;
                                                    if (!(bool)cVar21) {
                                                      value_00.y._0_2_ =
                                                           SUB42((float)uVar106 * fVar39,0);
                                                      value_00.x = (float)uVar105 * fVar39;
                                                      value_00.y._2_2_ =
                                                           (short)((uint)((float)uVar106 * fVar39) >>
                                                                  0x10);
                                                      value_00.z._0_1_ = SUB41(fVar71,0);
                                                      value_00.z._1_1_ = (char)((uint)fVar71 >> 8);
                                                      value_00.z._2_2_ =
                                                           (short)((uint)fVar71 >> 0x10);
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_localScale
                                                                (pTVar32,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pGVar44 = (uStack_26->fields).gameObject;
                                                      cVar21 = pGVar44 == (GameObject *)0x0;
                                                      if (!(bool)cVar21) {
                                                        pTVar32 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar44,(MethodInfo *)
                                                                                     0x0);
                                                        pVVar68 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Mesh::
                                                                  Mesh_get_vertices(this_05,(
                                                  MethodInfo *)0x0);
                                                  cVar21 = pVVar68 == (Vector3__Array *)0x0;
                                                  if (!(bool)cVar21) {
                                                    cVar75 = '\0';
                                                    cVar21 = '\x01';
                                                    if (pVVar68->max_length == 0)
                                                    goto code_?;
                                                    cVar21 = pTVar32 == (Transform *)0x0;
                                                    if (!(bool)cVar21) {
                                                      pVVar28 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_TransformPoint
                                                                          (&VStack_29,pTVar32,
                                                                           pVVar68->vector[0],
                                                                           (MethodInfo *)0x0);
                                                      uVar107 = pVVar28->x;
                                                      uVar108 = pVVar28->y;
                                                      fVar39 = pVVar28->z;
                                                      pGVar44 = (uStack_26->fields).gameObject;
                                                      cVar21 = pGVar44 == (GameObject *)0x0;
                                                      if (!(bool)cVar21) {
                                                        pTVar32 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar44,(MethodInfo *)
                                                                                     0x0);
                                                        pVVar68 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Mesh::
                                                                  Mesh_get_vertices(this_05,(
                                                  MethodInfo *)0x0);
                                                  cVar21 = pVVar68 == (Vector3__Array *)0x0;
                                                  if (!(bool)cVar21) {
                                                    uVar76 = pVVar68->max_length;
                                                    cVar75 = uVar76 < 2;
                                                    cVar21 = uVar76 == 2;
                                                    if (uVar76 < 3) goto code_?;
                                                    cVar21 = pTVar32 == (Transform *)0x0;
                                                    if (!(bool)cVar21) {
                                                      pVVar28 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_TransformPoint
                                                                          (&VStack_29,pTVar32,
                                                                           pVVar68->vector[2],
                                                                           (MethodInfo *)0x0);
                                                      uVar109 = pVVar28->x;
                                                      uVar110 = pVVar28->y;
                                                      fVar71 = ((float)uVar109 - (float)uVar107) *
                                                               _UNK_?;
                                                      fVar87 = (pVVar28->z - fVar39) * _UNK_?
                                                      ;
                                                      uStack_40 = (Vector3__Array *)
                                                                  (((float)uVar110 - (float)uVar108) *
                                                                   _UNK_? + (float)uVar108);
                                                      pGVar44 = (uStack_26->fields).gameObject;
                                                      cVar21 = pGVar44 == (GameObject *)0x0;
                                                      if (!(bool)cVar21) {
                                                        pTVar32 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar44,(MethodInfo *)
                                                                                     0x0);
                                                        cVar21 = pTVar32 == (Transform *)0x0;
                                                        if (!(bool)cVar21) {
                                                          pVVar28 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_position
                                                                              ((Vector3 *)
                                                                               &stack0xffffff80,
                                                                               pTVar32,(MethodInfo *
                                                                                       )0x0);
                                                          VStack_29.x = pVVar28->x;
                                                          VStack_29.y = pVVar28->y;
                                                          uVar111 = pVVar48->vector[0].z;
                                                          uVar112 = pVVar48->vector[1].x;
                                                          VStack_29.z = pVVar28->z +
                                                                        (fStack_84 -
                                                                        (fVar87 + fVar39)) +
                                                                        pVVar48->vector[1].y *
                                                                        _UNK_?;
                                                          fVar3 = VStack_29.y +
                                                                   (((float)uVar104 + fVar3) -
                                                                   (float)uStack_40) +
                                                                   (float)uVar112 * _UNK_?;
                                                          pMVar20 = (ModelCursor3D *)&UNK_?;
                                                          value_01.y._0_2_ = SUB42(fVar3,0);
                                                          value_01.x = VStack_29.x +
                                                                       (fStack_96 -
                                                                       (fVar71 + (float)uVar107)) +
                                                                       (float)uVar111 * _UNK_?
                                                          ;
                                                          value_01.y._2_2_ =
                                                               (int16_t)((uint)fVar3 >> 0x10);
                                                          value_01.z._0_2_ = SUB42(VStack_29.z,0);
                                                          value_01.z._2_2_ =
                                                               (short)((uint)VStack_29.z >> 0x10);
                                                          pVVar69 = (Vector3__Array *)VStack_29.z;
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_set_position
                                                                    (pTVar32,value_01,
                                                                     (MethodInfo *)0x0);
                                                          pFVar70 = (pMVar20->fields)._.faceCursor;
                                                          cVar21 = pFVar70 == (FaceCursor *)0x0;
                                                          if (!(bool)cVar21) {
                                                            pGVar44 = (pFVar70->fields).gameObject;
                                                            cVar21 = pGVar44 == (GameObject *)0x0;
                                                            if (!(bool)cVar21) {
                                                              uStack_13 = (MethodInfo **)
                                                                          &UNK_?;
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_SetActive
                                                                        (pGVar44,1,(MethodInfo *)0x0
                                                                        );
                                                              pFVar70 = (pMVar20->fields)._.
                                                                        faceCursor;
                                                              pVVar68 = pVVar48;
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
    else {
      cVar21 = e == (CubeModelingStateMachine *)0x0;
      if (!(bool)cVar21) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar23 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar37 = (((this->fields).modelCursor)->fields).indentArea;
        cVar21 = pMVar23 == (MVCubeModelBase *)0x0;
        if ((!(bool)cVar21) && (cVar21 = pIVar37 == (IndentArea *)0x0, !(bool)cVar21)) {
          pGVar44 = (pMVar23->fields)._.gameObject;
          in_stack_12 = (undefined2)((uint)pGVar44 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar37,(e->fields)._SelectedCube_k__BackingField,pGVar44,(MethodInfo *)0x0);
          pMVar20 = (this->fields).modelCursor;
          cVar21 = pMVar20 == (ModelCursor3D *)0x0;
          if (!(bool)cVar21) {
            pIVar37 = (pMVar20->fields).indentArea;
            cVar21 = pIVar37 == (IndentArea *)0x0;
            if (!(bool)cVar21) {
              bVar19 = IndentArea::IndentArea_IsColliding(pIVar37,(MethodInfo *)0x0);
              if (bVar19 == 0) {
                pMVar20 = (this->fields).modelCursor;
                cVar21 = pMVar20 == (ModelCursor3D *)0x0;
                if (!(bool)cVar21) {
                  pIVar37 = (pMVar20->fields).indentArea;
                  cVar21 = pIVar37 == (IndentArea *)0x0;
                  if (!(bool)cVar21) {
                    pGVar44 = (pIVar37->fields).gameObject;
                    cVar21 = pGVar44 == (GameObject *)0x0;
                    if (!(bool)cVar21) {
                      bVar19 = 0;
code_?:
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar44,bVar19,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
              else {
                pCVar25 = (e->fields)._SelectedCube_k__BackingField;
                cVar21 = pCVar25 == (CubePickingInfo *)0x0;
                if (!(bool)cVar21) {
                  (pCVar25->fields).pickedEdge = 0;
                  pMVar20 = (this->fields).modelCursor;
                  cVar21 = pMVar20 == (ModelCursor3D *)0x0;
                  if (!(bool)cVar21) {
                    pIVar37 = (pMVar20->fields).indentArea;
                    cVar21 = pIVar37 == (IndentArea *)0x0;
                    if (!(bool)cVar21) {
                      pGVar44 = (pIVar37->fields).gameObject;
                      cVar21 = pGVar44 == (GameObject *)0x0;
                      if (!(bool)cVar21) {
                        bVar19 = 1;
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
code_?:
  cVar75 = '\0';
  func_?();
  func_?();
  func_?();
code_?:
  uVar113 = func_?();
  if (extraout_ECX == 1 || cVar21 != '\0') {
    pcVar114 = (char *)CONCAT31((int3)((uint)uVar113 >> 8),(byte)uVar113 + 0xbb);
    *pcVar114 = *pcVar114 + extraout_DH + (char)((uint)uVar113 >> 8) + cVar75 + ((byte)uVar113 < 0x45);
    pcVar115 = (code *)swi(3);
    (*pcVar115)();
    return;
  }
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

