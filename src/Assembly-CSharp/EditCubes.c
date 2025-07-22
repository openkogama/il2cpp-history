
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
  puStack_5 = (undefined1 *)((int)&uStack_6 + 3);
  uStack_6._3_1_ = (undefined1)unaff_EBX;
  uStack_7 = (undefined3)((uint)unaff_EBX >> 8);
  uStack_8 = 0xffffffff;
  puStack_9 = &DAT_?;
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  puStack_11 = &stack0xffffff00;
  puVar12 = (undefined1 *)((int)&uStack_6 + 3);
  puVar13 = &stack0xffffff00;
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
    in_stack_14 = 0x11b4;
    func_?();
    in_stack_15 = 0x65b8;
    in_stack_16 = 0x11b4;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_17 = 0x11b4;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar12 = puStack_5;
    puVar13 = puStack_11;
  }
  puStack_11 = puVar13;
  puStack_5 = puVar12;
  uStack_18 = (MethodInfo **)((uint)uStack_18 & 0xffffff);
  puStack_19 = (undefined *)0x0;
  iVar20 = 0;
  CStack_21 = CubeOutOfBoundState__Enum_WithinBounds;
  if (cRam_? == '\0') {
    in_stack_14 = 0x1045;
    iVar20 = 0;
    func_?();
    cRam_? = '\x01';
  }
  pCVar22 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar22->cubeChange != 0) &&
     (pCVar22->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    unaff_ESI = (Vector3__Array *)pCVar22->OnEditCubeChange;
    in_stack_14 = (undefined2)((uint)pCVar22->cubeChange >> 0x10);
    in_stack_15 = (undefined2)pCVar22->cubeCount;
    in_stack_16 = (undefined2)((uint)pCVar22->cubeCount >> 0x10);
    (*(code *)unaff_ESI->max_length)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EVar23 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar24;
    goto code_?;
  }
  pMVar25 = (this->fields).modelCursor;
  pVVar26 = (Vector3__Array *)this;
  if (pMVar25 == (ModelCursor3D *)0x0) {
code_?:
    func_?();
    func_?();
    pMStack_27 = (MVCubeModelBase__Class *)pVVar26->klass;
    func_?();
  }
  else {
    unaff_ESI = (Vector3__Array *)e;
    if ((pMVar25->fields).indentArea != (IndentArea *)0x0 &&
        (this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar29 = (((this->fields).modelCursor)->fields).indentArea;
        if ((pMVar28 != (MVCubeModelBase *)0x0) && (pIVar29 != (IndentArea *)0x0)) {
          pGVar30 = (pMVar28->fields)._.gameObject;
          in_stack_14 = (undefined2)((uint)pGVar30 >> 0x10);
          pCVar31 = (e->fields)._SelectedCube_k__BackingField;
          in_stack_15 = SUB42(pCVar31,0);
          in_stack_16 = (undefined2)((uint)pCVar31 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea(pIVar29,pCVar31,pGVar30,(MethodInfo *)0x0);
          pMVar25 = (this->fields).modelCursor;
          if ((pMVar25 != (ModelCursor3D *)0x0) &&
             (pIVar29 = (pMVar25->fields).indentArea, pIVar29 != (IndentArea *)0x0)) {
            bVar24 = IndentArea::IndentArea_IsColliding(pIVar29,(MethodInfo *)0x0);
            if (bVar24 == 0) {
              pMVar25 = (this->fields).modelCursor;
              if (((pMVar25 != (ModelCursor3D *)0x0) &&
                  (pIVar29 = (pMVar25->fields).indentArea, pIVar29 != (IndentArea *)0x0)) &&
                 (pGVar30 = (pIVar29->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
                bVar24 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar30,bVar24,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar31 = (e->fields)._SelectedCube_k__BackingField;
              if (pCVar31 != (CubePickingInfo *)0x0) {
                (pCVar31->fields).pickedEdge = 0;
                pMVar25 = (this->fields).modelCursor;
                if (((pMVar25 != (ModelCursor3D *)0x0) &&
                    (pIVar29 = (pMVar25->fields).indentArea, pIVar29 != (IndentArea *)0x0)) &&
                   (pGVar30 = (pIVar29->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
                  bVar24 = 1;
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
      in_stack_14 = 0x1045;
      func_?();
    }
    bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar24 != 0) {
      in_stack_14 = 0;
      in_stack_15 = 0xca40;
      in_stack_16 = 0x1045;
      pVStack_32 = (Vector3__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      (this->fields).prevMouseUpTime = (float)pVStack_32;
    }
    if (cRam_? == '\0') {
      in_stack_14 = 0x1045;
      func_?();
      cRam_? = '\x01';
    }
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pCVar33 = (Cube *)CONCAT22(in_stack_16,in_stack_15);
    if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
       (pCVar33 = (Cube *)CONCAT22(in_stack_16,in_stack_15),
       (this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
    pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
    pVStack_34 = (Vector3__Array *)(pMVar28->fields)._.gameObject;
    pCVar31 = (e->fields)._SelectedCube_k__BackingField;
    pVStack_32 = *(Vector3__Array **)&(pCVar31->fields).iLocalPos;
    uStack_35 = (Byte__Array *)CONCAT22((pCVar31->fields).iLocalPos.z,(undefined2)uStack_35);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar36.z = uStack_35._2_2_;
    IVar36._0_4_ = pVStack_32;
    pVVar37 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                        ((Vector3 *)auStack_38,(GameObject *)pVStack_34,IVar36,(MethodInfo *)0x0);
    in_stack_17 = 0;
    uVar39 = pVVar37->x;
    uVar40 = pVVar37->y;
    fVar3 = pVVar37->z;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_03 == (MainCameraManager *)0x0) ||
       (pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_03,(MethodInfo *)0x0), pTVar41 == (Transform *)0x0))
    goto code_?;
    pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)auStack_38,pTVar41,(MethodInfo *)0x0);
    uVar42 = pVVar37->x;
    uVar43 = pVVar37->y;
    auStack_38._8_4_ = pVVar37->z - fVar3;
    auStack_38._4_4_ = (MonitorData *)((float)uVar43 - (float)uVar40);
    auStack_38._0_4_ = (Enum__Class *)((float)uVar42 - (float)uVar39);
    fVar44 = (float10)func_?();
    pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
    pVStack_32 = (Vector3__Array *)(float)fVar44;
    if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
    pCVar33 = (Cube *)auStack_38;
    in_stack_14 = (undefined2)((uint)pMVar28 >> 0x10);
    puVar45 = (undefined8 *)(*(code *)(pMVar28->klass->vtable).get_Scale.method)();
    pMVar25 = (this->fields).modelCursor;
    if ((float)((ulonglong)*puVar45 >> 0x20) * _UNK_? < (float)pVStack_32) {
      (this->fields).mouseSensitivity = 0.1325;
      if ((pMVar25 != (ModelCursor3D *)0x0) &&
         (pIVar29 = (pMVar25->fields).indentArea, pIVar29 != (IndentArea *)0x0)) {
        (pIVar29->fields).size = 1.0;
        goto code_?;
      }
      goto code_?;
    }
    (this->fields).mouseSensitivity = 0.0225;
    if ((pMVar25 == (ModelCursor3D *)0x0) ||
       (pIVar29 = (pMVar25->fields).indentArea, pIVar29 == (IndentArea *)0x0))
    goto code_?;
    (pIVar29->fields).size = 0.5;
code_?:
    uStack_4 = (ushort)((uint)fVar3 >> 0x10);
    bVar46 = false;
    uStack_35 = (Byte__Array *)((uint)uStack_35 & 0xffffff);
    switch((this->fields).currentInternalState) {
    case 0:
      if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar24 == 0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_32 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          pVStack_34 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          fVar47 = (float)pVStack_32 * _UNK_?;
          fVar3 = (float)pVStack_34 * _UNK_?;
          uStack_48 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
          pVStack_32 = (Vector3__Array *)(this->fields).mouseSensitivity;
          pCVar31 = (this->fields).movingEdgeCube;
          iVar20 = 0;
          uVar49 = 0;
          if (pCVar31 != (CubePickingInfo *)0x0) {
            bVar24 = (pCVar31->fields).pickedEdgeIndex0;
            pVStack_34._1_3_ = (undefined3)((uint)pVStack_34 >> 8);
            pVStack_34 = (Vector3__Array *)
                         CONCAT31(pVStack_34._1_3_,
                                  (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar50 = (undefined2)((uint)pVStack_32 >> 0x10);
            uVar51 = 0xcd59;
            uVar52 = 0x1045;
            mousePositionDelta.y =
                 (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),
                                       CONCAT24(SUB42(fVar3,0),fVar47)) >> 0x20);
            mousePositionDelta.x = fVar47;
            mousePositionDelta.z._0_1_ = (char)iVar20;
            mousePositionDelta.z._1_1_ = (char)((ushort)iVar20 >> 8);
            mousePositionDelta.z._2_2_ = uVar49;
            pVVar53 = uStack_48;
            pVStack_32 = (Vector3__Array *)
                         SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                   ((MVCubeModelBase *)uStack_48,pCVar31,mousePositionDelta,
                                    &(this->fields).delta,&(this->fields).deltaAccum,
                                    (float)pVStack_32,(bool *)((int)&uStack_18 + 3),bVar24,
                                    (bool)pVStack_34,(EditCubeChange__Enum *)&stack0xffffff64,
                                    (MethodInfo *)0x0);
            bVar24 = (bool)pVVar53;
            if (pVStack_32 == (Vector3__Array *)0x0) {
              pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
              iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar28,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar54,EVar23,(MethodInfo *)0x0);
            }
            if ((uStack_18._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
              (this->fields).edgeHasMoved = 1;
            }
            if (pVStack_32 == (Vector3__Array *)0x1) {
              pCVar31 = (this->fields).movingEdgeCube;
              if (pCVar31 != (CubePickingInfo *)0x0) {
                pVStack_32 = *(Vector3__Array **)&(pCVar31->fields).iLocalPos;
                uStack_35._2_2_ = (pCVar31->fields).iLocalPos.z;
                pVStack_34 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos.z = (int16_t)pVStack_32;
                localPos._0_4_ = &stack0xffffff6c;
                IVar36 = Cube::Cube_GetCubePosAboveFace
                                   (localPos,CONCAT22(uVar1,uStack_35._2_2_),
                                    (MethodInfo *)pVStack_34);
                pIVar55 = IVar36._0_4_;
                uStack_48 = *(Vector3__Array **)pIVar55;
                uStack_35 = (Byte__Array *)CONCAT22(pIVar55->z,(undefined2)uStack_35);
                pVStack_34 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,*pIVar55,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                if (pVStack_34 == (Vector3__Array *)0x0) {
                  pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                  if (pMVar28 != (MVCubeModelBase *)0x0) {
                    pos.z = uStack_35._2_2_;
                    pos._0_4_ = uStack_48;
                    pVStack_32 = (Vector3__Array *)
                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                           (pMVar28,pos,(MethodInfo *)0x0);
                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__MV__WorldObject__CubeBase);
                    }
                    bVar24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                       ((CubeBase *)pVStack_32,(CubeBase *)0x0,(MethodInfo *)0x0);
                    if (bVar24 == 0) goto code_?;
                    pos_00.z = uStack_35._2_2_;
                    pos_00._0_4_ = uStack_48;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_00,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                    pVStack_34 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar31 = (this->fields).movingEdgeCube;
                    if (pCVar31 != (CubePickingInfo *)0x0) {
                      pVStack_32 = (Vector3__Array *)(pCVar31->fields).cube;
                      FVar56 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Cube);
                      }
                      pVVar26 = Cube::Cube_GetCorners((Cube *)pVStack_32,FVar56,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pVVar26 = (Vector3__Array *)
                                MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar26,(MethodInfo *)0x0);
                      uVar57 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)CONCAT31(pVStack_32._1_3_,uVar57);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar57,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_32,(Byte__Array *)pVVar26,
                                       (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                      if (pVStack_34 != (Vector3__Array *)0x0) {
                        pos_09.z = uStack_35._2_2_;
                        pos_09._0_4_ = uStack_48;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_34,pos_09,(CubeBase *)pVStack_32,
                                   (MethodInfo *)0x0);
                        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar28 != (MVCubeModelBase *)0x0) {
                          iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                             (pMVar28,(MethodInfo *)0x0);
                          CubeModelTool::CubeModelTool_SendCubeEvent
                                    (iVar54,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
                          pCVar31 = (this->fields).movingEdgeCube;
                          pCVar58 = (CubePickingInfo *)func_?();
                          CubePickingInfo::CubePickingInfo__ctor_1
                                    (pCVar58,pCVar31,(MethodInfo *)0x0);
                          pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                          unaff_ESI = (Vector3__Array *)e;
                          pVVar26 = (Vector3__Array *)this;
                          if (pMVar28 != (MVCubeModelBase *)0x0) {
                            pos_10.z = uStack_35._2_2_;
                            pos_10._0_4_ = uStack_48;
                            pCVar33 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                (pMVar28,pos_10,(MethodInfo *)0x0);
                            pCVar33 = Cube::Cube_Clone_1(pCVar33,(MethodInfo *)0x0);
                            if (pCVar58 != (CubePickingInfo *)0x0) {
                              (pCVar58->fields).cube = pCVar33;
                              func_?();
                              *(Vector3__Array **)&(pCVar58->fields).iLocalPos = uStack_48;
                              (pCVar58->fields).iLocalPos.z = uStack_35._2_2_;
                              pCVar31 = (this->fields).movingEdgeCube;
                              if ((pCVar31 != (CubePickingInfo *)0x0) &&
                                 ((e->fields)._TargetCubeModel_k__BackingField !=
                                  (MVCubeModelBase *)0x0)) {
                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                          ((e->fields)._TargetCubeModel_k__BackingField,
                                           (pCVar31->fields).iLocalPos,(pCVar31->fields).cube,
                                           (MethodInfo *)0x0);
                                (this->fields).movingEdgeCube = pCVar58;
                                func_?();
                                pVStack_32 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_32 != (Vector3__Array *)0x0) {
                                  pVVar37 = Cube::Cube_GetFaceAxis
                                                      ((Vector3 *)auStack_38,pVStack_32->max_length,
                                                       (MethodInfo *)0x0);
                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_32,-0.75,*pVVar37,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff38,
                                                      (MethodInfo *)0x0);
code_?:
                                  pCVar31 = (this->fields).movingEdgeCube;
                                  unaff_ESI = (Vector3__Array *)e;
                                  pVVar26 = (Vector3__Array *)this;
                                  if ((pCVar31 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar31->fields).iLocalPos,(pCVar31->fields).cube,
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
                  auStack_38._8_4_ = pVStack_34;
                  auStack_38._4_4_ = (MonitorData *)0xffffffff;
                  auStack_38._0_4_ = TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)auStack_38,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                  uVar49 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)CONCAT22(uVar49,uVar1),str1,(MethodInfo *)0x0);
                  pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar25 = (this->fields).modelCursor;
                  if ((pMVar28 != (MVCubeModelBase *)0x0) && (pMVar25 != (ModelCursor3D *)0x0)) {
                    iPos.z = uStack_35._2_2_;
                    iPos._0_4_ = uStack_48;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar25,iPos,(pMVar28->fields)._.gameObject,
                               pVStack_34 == (Vector3__Array *)0x2,(MethodInfo *)0x0);
                    pCVar31 = (this->fields).movingEdgeCube;
                    unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0))
                    {
                      pCVar33 = (pCVar31->fields).cube;
                      uVar1 = SUB42(pCVar33,0);
                      uVar49 = (undefined2)((uint)pCVar33 >> 0x10);
code_?:
                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                ((MVCubeModelBase *)unaff_ESI,(pCVar31->fields).iLocalPos,
                                 (Cube *)CONCAT22(uVar49,uVar1),(MethodInfo *)0x0);
                      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                      func_?((short)&(this->fields).movingEdgeCube);
                      break;
                    }
                  }
                }
              }
            }
            else if (pVStack_32 == (Vector3__Array *)0x4) {
              pCVar31 = (this->fields).movingEdgeCube;
              if (pCVar31 != (CubePickingInfo *)0x0) {
                pVStack_32 = *(Vector3__Array **)&(pCVar31->fields).iLocalPos;
                uStack_35._2_2_ = (pCVar31->fields).iLocalPos.z;
                pVStack_34 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_02.z = (int16_t)pVStack_32;
                localPos_02._0_4_ = &stack0xffffff6c;
                IVar36 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_02,CONCAT22(uVar50,uStack_35._2_2_),
                                    (MethodInfo *)pVStack_34);
                pIVar55 = IVar36._0_4_;
                uStack_48 = *(Vector3__Array **)pIVar55;
                uStack_35 = (Byte__Array *)CONCAT22(pIVar55->z,(undefined2)uStack_35);
                pVStack_34 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,*pIVar55,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                if (pVStack_34 != (Vector3__Array *)0x0) {
code_?:
                  auStack_38._8_4_ = pVStack_34;
                  auStack_38._4_4_ = (MonitorData *)0xffffffff;
                  auStack_38._0_4_ = TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)auStack_38,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                  uVar49 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                  goto code_?;
                }
                pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar28 != (MVCubeModelBase *)0x0) {
                  pos_03.z = uStack_35._2_2_;
                  pos_03._0_4_ = uStack_48;
                  pVStack_32 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar28,pos_03,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_32,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar24 == 0) goto code_?;
                  pCVar31 = (this->fields).movingEdgeCube;
                  if (pCVar31 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar31->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_34 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar31 = (this->fields).movingEdgeCube;
                    if (pCVar31 != (CubePickingInfo *)0x0) {
                      pVStack_32 = (Vector3__Array *)(pCVar31->fields).cube;
                      FVar56 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar26 = Cube::Cube_GetCorners((Cube *)pVStack_32,FVar56,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pVVar26 = (Vector3__Array *)
                                MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar26,(MethodInfo *)0x0);
                      uVar57 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)CONCAT31(pVStack_32._1_3_,uVar57);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar57,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_32,(Byte__Array *)pVVar26,
                                       (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                      if (pVStack_34 != (Vector3__Array *)0x0) {
                        pos_12.z = uStack_35._2_2_;
                        pos_12._0_4_ = uStack_48;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_34,pos_12,(CubeBase *)pVStack_32,
                                   (MethodInfo *)0x0);
                        pCVar31 = (this->fields).movingEdgeCube;
                        pCVar58 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar58,pCVar31,(MethodInfo *)0x0);
                        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                        unaff_ESI = (Vector3__Array *)e;
                        pVVar26 = (Vector3__Array *)this;
                        if (pMVar28 != (MVCubeModelBase *)0x0) {
                          pos_08.z = uStack_35._2_2_;
                          pos_08._0_4_ = uStack_48;
                          pCVar33 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar28,pos_08,(MethodInfo *)0x0);
                          pCVar33 = Cube::Cube_Clone_1(pCVar33,(MethodInfo *)0x0);
                          if (pCVar58 != (CubePickingInfo *)0x0) {
                            (pCVar58->fields).cube = pCVar33;
                            func_?();
                            *(Vector3__Array **)&(pCVar58->fields).iLocalPos = uStack_48;
                            (pCVar58->fields).iLocalPos.z = uStack_35._2_2_;
                            pCVar31 = (this->fields).movingEdgeCube;
                            if ((pCVar31 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar31->fields).iLocalPos,(pCVar31->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar58;
                              func_?();
                              pVStack_32 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_32 != (Vector3__Array *)0x0) {
                                pVVar37 = Cube::Cube_GetFaceAxis
                                                    ((Vector3 *)auStack_38,pVStack_32->max_length,
                                                     (MethodInfo *)0x0);
                                axis.z._2_2_ = (short)((uint)pVVar37->z >> 0x10);
                                axis._0_10_ = *(unkbyte10 *)pVVar37;
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_32,-1.0,axis,
                                                    (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                    (MethodInfo *)0x0);
                                pVStack_32 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_32 != (Vector3__Array *)0x0) {
                                  pVVar37 = Cube::Cube_GetFaceAxis
                                                      ((Vector3 *)auStack_38,pVStack_32->max_length,
                                                       (MethodInfo *)0x0);
                                  axis_01.z._2_2_ = (short)((uint)pVVar37->z >> 0x10);
                                  axis_01._0_10_ = *(unkbyte10 *)pVVar37;
                                  Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_32,-0.75,axis_01,
                                                      (CubeOutOfBoundState__Enum *)&stack0xffffff48,
                                                      (MethodInfo *)0x0);
                                  pCVar31 = (this->fields).movingEdgeCube;
                                  if ((pCVar31 != (CubePickingInfo *)0x0) &&
                                     ((e->fields)._TargetCubeModel_k__BackingField !=
                                      (MVCubeModelBase *)0x0)) {
                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                              ((e->fields)._TargetCubeModel_k__BackingField,
                                               (pCVar31->fields).iLocalPos,(pCVar31->fields).cube,
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
            else if (pVStack_32 == (Vector3__Array *)0x5) {
              pCVar31 = (this->fields).movingEdgeCube;
              if (pCVar31 != (CubePickingInfo *)0x0) {
                pVStack_32 = *(Vector3__Array **)&(pCVar31->fields).iLocalPos;
                uStack_35._2_2_ = (pCVar31->fields).iLocalPos.z;
                pVStack_34 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                localPos_01.z = (int16_t)pVStack_32;
                localPos_01._0_4_ = &stack0xffffff6c;
                IVar36 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_01,CONCAT22(uVar50,uStack_35._2_2_),
                                    (MethodInfo *)pVStack_34);
                pIVar55 = IVar36._0_4_;
                uStack_48 = *(Vector3__Array **)pIVar55;
                uStack_35 = (Byte__Array *)CONCAT22(pIVar55->z,(undefined2)uStack_35);
                pVStack_34 = (Vector3__Array *)
                             CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                       (e,*pIVar55,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                if (pVStack_34 != (Vector3__Array *)0x0) {
code_?:
                  auStack_38._8_4_ = pVStack_34;
                  auStack_38._4_4_ = (MonitorData *)0xffffffff;
                  auStack_38._0_4_ = TypeInfo__CanPerformCubeActionResult;
                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)auStack_38,(MethodInfo *)0x0);
                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                  uVar49 = (undefined2)
                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
                  goto code_?;
                }
                pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar28 != (MVCubeModelBase *)0x0) {
                  pos_02.z = uStack_35._2_2_;
                  pos_02._0_4_ = uStack_48;
                  pVStack_32 = (Vector3__Array *)
                               MVCubeModelBase::MVCubeModelBase_GetCube
                                         (pMVar28,pos_02,(MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar24 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                     ((CubeBase *)pVStack_32,(CubeBase *)0x0,(MethodInfo *)0x0);
                  if (bVar24 == 0) goto code_?;
                  pCVar31 = (this->fields).movingEdgeCube;
                  if (pCVar31 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar31->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                               (MethodInfo *)0x0);
                    pVStack_34 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    pCVar31 = (this->fields).movingEdgeCube;
                    if (pCVar31 != (CubePickingInfo *)0x0) {
                      pVStack_32 = (Vector3__Array *)(pCVar31->fields).cube;
                      FVar56 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pVVar26 = Cube::Cube_GetCorners((Cube *)pVStack_32,FVar56,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        func_?();
                      }
                      pVVar26 = (Vector3__Array *)
                                MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                CubeDataPacker_CornersToByteArray(pVVar26,(MethodInfo *)0x0);
                      uVar57 = CubeModelingStateMachine::
                               CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)CONCAT31(pVStack_32._1_3_,uVar57);
                      unaff_ESI = (Vector3__Array *)
                                  Cube::Cube_CreateMaterialArray(uVar57,(MethodInfo *)0x0);
                      pVStack_32 = (Vector3__Array *)func_?();
                      Cube::Cube__ctor((Cube *)pVStack_32,(Byte__Array *)pVVar26,
                                       (Byte__Array *)unaff_ESI,(MethodInfo *)0x0);
                      if (pVStack_34 != (Vector3__Array *)0x0) {
                        pos_11.z = uStack_35._2_2_;
                        pos_11._0_4_ = uStack_48;
                        MVCubeModelBase::MVCubeModelBase_AddCube
                                  ((MVCubeModelBase *)pVStack_34,pos_11,(CubeBase *)pVStack_32,
                                   (MethodInfo *)0x0);
                        pCVar31 = (this->fields).movingEdgeCube;
                        pCVar58 = (CubePickingInfo *)func_?();
                        CubePickingInfo::CubePickingInfo__ctor_1(pCVar58,pCVar31,(MethodInfo *)0x0);
                        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                        unaff_ESI = (Vector3__Array *)e;
                        pVVar26 = (Vector3__Array *)this;
                        if (pMVar28 != (MVCubeModelBase *)0x0) {
                          pos_07.z = uStack_35._2_2_;
                          pos_07._0_4_ = uStack_48;
                          pCVar33 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar28,pos_07,(MethodInfo *)0x0);
                          pCVar33 = Cube::Cube_Clone_1(pCVar33,(MethodInfo *)0x0);
                          if (pCVar58 != (CubePickingInfo *)0x0) {
                            (pCVar58->fields).cube = pCVar33;
                            func_?();
                            *(Vector3__Array **)&(pCVar58->fields).iLocalPos = uStack_48;
                            (pCVar58->fields).iLocalPos.z = uStack_35._2_2_;
                            pCVar31 = (this->fields).movingEdgeCube;
                            if ((pCVar31 != (CubePickingInfo *)0x0) &&
                               ((e->fields)._TargetCubeModel_k__BackingField !=
                                (MVCubeModelBase *)0x0)) {
                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                        ((e->fields)._TargetCubeModel_k__BackingField,
                                         (pCVar31->fields).iLocalPos,(pCVar31->fields).cube,
                                         (MethodInfo *)0x0);
                              (this->fields).movingEdgeCube = pCVar58;
                              func_?();
                              pVStack_32 = (Vector3__Array *)(this->fields).movingEdgeCube;
                              if (pVStack_32 != (Vector3__Array *)0x0) {
                                pVVar37 = Cube::Cube_GetFaceAxis
                                                    ((Vector3 *)auStack_38,pVStack_32->max_length,
                                                     (MethodInfo *)0x0);
                                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_32,-1.0,*pVVar37,
                                                    &CStack_21,(MethodInfo *)0x0);
                                pVStack_34 = (Vector3__Array *)(this->fields).movingEdgeCube;
                                if (pVStack_34 != (Vector3__Array *)0x0) {
                                  pVStack_32 = (Vector3__Array *)
                                               Cube::Cube_GetFaceAxis
                                                         ((Vector3 *)auStack_38,
                                                          pVStack_34->max_length,(MethodInfo *)0x0);
                                  pCVar31 = (this->fields).movingEdgeCube;
                                  if (pCVar31 != (CubePickingInfo *)0x0) {
                                    axis_00.z._2_2_ =
                                         (short)((uint)(((MVCubeModelBase__Fields *)
                                                        &pVStack_32->bounds)->_)._.id >> 0x10);
                                    axis_00._0_10_ = *(unkbyte10 *)pVStack_32;
                                    Cube::Cube_MoveVertex
                                              ((CubePickingInfo *)pVStack_34,-0.75,axis_00,
                                               (pCVar31->fields).pickedEdgeIndex0,
                                               (pCVar31->fields).pickedEdgeIndex1,&CStack_21,
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
            else if (pVStack_32 == (Vector3__Array *)0x2) {
              CVar59 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                 (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar58 = (this->fields).movingEdgeCube;
              if (CVar59 == CanPerformCubeActionResult__Enum_Yes) {
                if (pCVar58 != (CubePickingInfo *)0x0) {
                  pVStack_32 = *(Vector3__Array **)&(pCVar58->fields).iLocalPos;
                  iStack_60 = (int16_t)((uint)pVStack_32 >> 0x10);
                  iVar20 = (pCVar58->fields).iLocalPos.z;
                  pCVar31 = (this->fields).movingEdgeCube;
                  if (pCVar31 != (CubePickingInfo *)0x0) {
                    pVStack_34 = (Vector3__Array *)(pCVar31->fields).pickedFace;
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    sVar61 = 0;
                    sVar62 = 0;
                    sVar63 = 0;
                    if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0)
                    {
                      func_?();
                    }
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              ((IntVector *)&stack0xffffff6c,(int32_t)pVStack_32,
                               CONCAT22(iVar20,iStack_60),CONCAT22(uStack_4,iVar20),
                               (MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pVVar37 = Cube::Cube_GetFaceAxis
                                        ((Vector3 *)auStack_38,(Face__Enum)pVStack_34,
                                         (MethodInfo *)0x0);
                    pCVar31 = (this->fields).movingEdgeCube;
                    uVar64 = pVVar37->x;
                    uVar65 = pVVar37->y;
                    sVar61 = sVar61 - (short)(int)(float)uVar64;
                    sVar62 = sVar62 - (short)(int)(float)uVar65;
                    uStack_35 = (Byte__Array *)
                                CONCAT22(sVar63 - (short)(int)pVVar37->z,(undefined2)uStack_35);
                    if (pCVar31 != (CubePickingInfo *)0x0) {
                      pos_05.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
                      pos_05._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                (e,pos_05,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                      pCVar31 = (this->fields).movingEdgeCube;
                      if ((pCVar31 != (CubePickingInfo *)0x0) &&
                         ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) {
                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                   (pCVar31->fields).iLocalPos,(MethodInfo *)0x0);
                        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar28 != (MVCubeModelBase *)0x0) {
                          pos_13.y = sVar62;
                          pos_13.x = sVar61;
                          pos_13.z._0_1_ = (char)((uint)uStack_35 >> 0x10);
                          pos_13.z._1_1_ = (char)((uint)uStack_35 >> 0x18);
                          pVVar53 = (Vector3__Array *)
                                    MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar28,pos_13,(MethodInfo *)0x0);
                          pVStack_34 = pVVar53;
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar24 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Inequality
                                             ((CubeBase *)pVVar53,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar24 == 0) {
                            (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                            func_?();
                          }
                          else {
                            pCVar31 = (this->fields).movingEdgeCube;
                            pVVar53 = (Vector3__Array *)func_?();
                            pVStack_32 = pVVar53;
                            CubePickingInfo::CubePickingInfo__ctor_1
                                      ((CubePickingInfo *)pVVar53,pCVar31,(MethodInfo *)0x0);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pCVar33 = Cube::Cube_Clone_1((Cube *)pVStack_34,(MethodInfo *)0x0);
                            unaff_ESI = (Vector3__Array *)0x0;
                            if (pVVar53 == (Vector3__Array *)0x0) goto code_?;
                            (((MVCubeModelBase__Fields *)&pVVar53->bounds)->_)._.id =
                                 (int32_t)pCVar33;
                            func_?();
                            pVVar53->vector[2].z = (float)CONCAT22(sVar62,sVar61);
                            *(int16_t *)&pVVar53->vector[3].x = uStack_35._2_2_;
                            (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar53;
                            func_?();
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
              else if (((pCVar58 != (CubePickingInfo *)0x0) &&
                       ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar58->fields).iLocalPos,
                           (GameObject *)CONCAT22(uVar52,uVar51),bVar24,(MethodInfo *)pCVar31);
                pCVar31 = (this->fields).movingEdgeCube;
                unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                  pCVar33 = (this->fields).prevCubeState;
                  uVar1 = SUB42(pCVar33,0);
                  uVar49 = (undefined2)((uint)pCVar33 >> 0x10);
                  goto code_?;
                }
              }
            }
            else {
              if (pVStack_32 != (Vector3__Array *)0x0) break;
              pVStack_34 = (Vector3__Array *)
                           CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                     (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
              pCVar31 = (this->fields).movingEdgeCube;
              if ((pCVar31 != (CubePickingInfo *)0x0) &&
                 (pCVar33 = (pCVar31->fields).cube, pCVar33 != (Cube *)0x0)) {
                pVStack_32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                       ((CubeBase *)pCVar33,(MethodInfo *)0x0);
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar24 = Cube::Cube_IsCollapsed(pVStack_32,(MethodInfo *)0x0);
                if ((bVar24 == 0) || (pVStack_34 != (Vector3__Array *)0x1)) {
                  pCVar31 = (this->fields).movingEdgeCube;
                  if (pVStack_34 == (Vector3__Array *)0x2) {
                    if (((pCVar31 != (CubePickingInfo *)0x0) &&
                        (pMVar28 = (e->fields)._TargetCubeModel_k__BackingField,
                        pMVar28 != (MVCubeModelBase *)0x0)) &&
                       ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)(this->fields).modelCursor,
                                 (pCVar31->fields).iLocalPos,(pMVar28->fields)._.gameObject,1,
                                 (MethodInfo *)0x0);
                      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                      func_?(&(this->fields).movingEdgeCube,0);
                      break;
                    }
                  }
                  else if (pCVar31 != (CubePickingInfo *)0x0) {
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,(pCVar31->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                               (MethodInfo *)0x0);
                    pCVar31 = (this->fields).movingEdgeCube;
                    unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0))
                    {
                      iVector.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
                      iVector._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                ((MVCubeModelBase *)unaff_ESI,iVector,(pCVar31->fields).cube,
                                 (MethodInfo *)0x0);
                      break;
                    }
                  }
                }
                else {
                  pCVar58 = (this->fields).movingEdgeCube;
                  if (((pCVar58 != (CubePickingInfo *)0x0) &&
                      (pMVar28 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar28 != (MVCubeModelBase *)0x0)) &&
                     ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                    pCVar31 = (CubePickingInfo *)0x0;
                    bVar24 = 0;
                    pGVar30 = (pMVar28->fields)._.gameObject;
                    uVar51 = SUB42(pGVar30,0);
                    uVar52 = (undefined2)((uint)pGVar30 >> 0x10);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        else {
          uVar57 = (this->fields).prevMaterial;
          pVStack_32 = (Vector3__Array *)CONCAT31(pVStack_32._1_3_,uVar57);
          (this->fields).currentInternalState = 2;
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (e,uVar57,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          pCVar31 = (this->fields).movingEdgeCube;
          if ((this->fields).edgeHasMoved == 0) {
            UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_set_onValueChanged
                      ((ScrollRect *)e,(ScrollRect_ScrollRectEvent *)pCVar31,(MethodInfo *)0x0);
            pCVar31 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar31 != (CubePickingInfo *)0x0) {
              pos_06.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
              pos_06._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_06,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              uStack_8 = 2;
              EVar23 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                 (e,(MethodInfo *)0x0);
              pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar28 != (MVCubeModelBase *)0x0) {
                iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar28,(MethodInfo *)0x0);
                CubeModelTool::CubeModelTool_SendCubeEvent(iVar54,EVar23,(MethodInfo *)0x0);
                if (EVar23 != EditCubeChange__Enum_None) {
code_?:
                  uStack_8 = 0xffffffff;
                  goto code_?;
                }
                pCVar31 = (e->fields)._SelectedCube_k__BackingField;
                if (pCVar31 != (CubePickingInfo *)0x0) {
                  pVStack_32._0_2_ = (pCVar31->fields).iLocalPos.x;
                  pVStack_32._2_2_ = (pCVar31->fields).iLocalPos.y;
                  uStack_48 = (Vector3__Array *)
                              CONCAT22((pCVar31->fields).iLocalPos.z,(undefined2)uStack_48);
                  pVStack_34 = (Vector3__Array *)
                               (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  localPos_03.z = (int16_t)pVStack_32;
                  localPos_03._0_4_ = &stack0xffffff6c;
                  IVar36 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_03,CONCAT22(in_stack_17,uStack_48._2_2_),
                                      (MethodInfo *)pVStack_34);
                  pVStack_32 = IVar36._0_4_;
                  pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
                  pMVar25 = (this->fields).modelCursor;
                  if ((pMVar28 != (MVCubeModelBase *)0x0) && (pMVar25 != (ModelCursor3D *)0x0)) {
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar25,*(IntVector *)pVStack_32,
                               (pMVar28->fields)._.gameObject,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
          else {
            pVStack_34 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                   (e,pCVar31,(MethodInfo *)0x0);
            pCVar31 = (this->fields).movingEdgeCube;
            if (pVStack_34 == (Vector3__Array *)0x2) {
              if (((pCVar31 != (CubePickingInfo *)0x0) &&
                  (pMVar28 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar28 != (MVCubeModelBase *)0x0)) &&
                 ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                iPos_00.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
                iPos_00._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,iPos_00,
                           (pMVar28->fields)._.gameObject,1,(MethodInfo *)0x0);
                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                func_?();
code_?:
                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                func_?();
                (this->fields).edgeHasMoved = 0;
                break;
              }
            }
            else if ((pCVar31 != (CubePickingInfo *)0x0) &&
                    (pCVar66 = (pCVar31->fields).cube, pCVar66 != (Cube *)0x0)) {
              pVStack_32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                     ((CubeBase *)pCVar66,(MethodInfo *)0x0);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar24 = Cube::Cube_IsCollapsed(pVStack_32,(MethodInfo *)0x0);
              pCVar31 = (this->fields).movingEdgeCube;
              if (bVar24 == 0) {
                if (pCVar31 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar31->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                             (MethodInfo *)0x0);
                  pCVar31 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                    pCVar66 = (pCVar31->fields).cube;
                    uVar67 = SUB41(pCVar66,0);
                    uVar68 = (undefined1)((uint)pCVar66 >> 8);
                    in_stack_14 = (undefined2)((uint)pCVar66 >> 0x10);
code_?:
                    iVector_02.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
                    iVector_02._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                              ((MVCubeModelBase *)unaff_ESI,iVector_02,pCVar33,
                               (MethodInfo *)CONCAT22(in_stack_14,CONCAT11(uVar68,uVar67)));
                    goto code_?;
                  }
                }
              }
              else if (pVStack_34 == (Vector3__Array *)0x0) {
                if (pCVar31 != (CubePickingInfo *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,(pCVar31->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                             (MethodInfo *)0x0);
                  pCVar31 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0)) {
                    pos_15.z._1_1_ = (char)((ushort)(pCVar31->fields).iLocalPos.z >> 8);
                    pos_15._0_5_ = *(undefined5 *)&(pCVar31->fields).iLocalPos;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube
                              ((MVCubeModelBase *)unaff_ESI,pos_15,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else if (((pCVar31 != (CubePickingInfo *)0x0) &&
                       (pMVar28 = (e->fields)._TargetCubeModel_k__BackingField,
                       pMVar28 != (MVCubeModelBase *)0x0)) &&
                      ((this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)(this->fields).modelCursor,(pCVar31->fields).iLocalPos,
                           (pMVar28->fields)._.gameObject,0,(MethodInfo *)0x0);
                pCVar31 = (this->fields).movingEdgeCube;
                if (pCVar31 != (CubePickingInfo *)0x0) {
                  pIVar55 = &(pCVar31->fields).iLocalPos;
                  uVar1 = pIVar55->x;
                  uVar49 = pIVar55->y;
                  iVar20 = (pCVar31->fields).iLocalPos.z;
                  uVar67 = (undefined1)iVar20;
                  uVar68 = (undefined1)((ushort)iVar20 >> 8);
                  pos_14.z._1_1_ = uVar68;
                  pos_14._0_5_ = *(undefined5 *)pIVar55;
                  CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                            (e,pos_14,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                  pCVar33 = (Cube *)CONCAT22(uVar49,uVar1);
                  pCVar31 = (this->fields).movingEdgeCube;
                  unaff_ESI = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                  if ((pCVar31 != (CubePickingInfo *)0x0) && (unaff_ESI != (Vector3__Array *)0x0))
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
        bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar24 != 0) {
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
        bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar24 != 0) &&
           (bVar24 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar24 != 0)) {
          (this->fields).currentInternalState = 3;
          break;
        }
      }
      else {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar24 != 0) {
          uStack_8 = 0;
          EVar23 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar28 != (MVCubeModelBase *)0x0) {
            iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar28,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent(iVar54,EVar23,(MethodInfo *)0x0);
            if (EVar23 != EditCubeChange__Enum_None) {
              bVar46 = true;
              uStack_8 = 0xffffffff;
              break;
            }
            pCVar31 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar31 != (CubePickingInfo *)0x0) {
              pVStack_32._0_2_ = (pCVar31->fields).iLocalPos.x;
              pVStack_32._2_2_ = (pCVar31->fields).iLocalPos.y;
              uStack_48 = (Vector3__Array *)
                          CONCAT22((pCVar31->fields).iLocalPos.z,(undefined2)uStack_48);
              pVStack_34 = (Vector3__Array *)
                           (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              localPos_00.z = (int16_t)pVStack_32;
              localPos_00._0_4_ = &stack0xffffff6c;
              IVar36 = Cube::Cube_GetCubePosAboveFace
                                 (localPos_00,CONCAT22(in_stack_69,uStack_48._2_2_),
                                  (MethodInfo *)pVStack_34);
              pVStack_32 = IVar36._0_4_;
              pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
              pMVar25 = (this->fields).modelCursor;
              if ((pMVar28 != (MVCubeModelBase *)0x0) && (pMVar25 != (ModelCursor3D *)0x0)) {
                ModelCursor::ModelCursor_SetErrorCursor
                          ((ModelCursor *)pMVar25,*(IntVector *)pVStack_32,
                           (pMVar28->fields)._.gameObject,0,(MethodInfo *)0x0);
                uStack_8 = 0xffffffff;
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
      bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar24 != 0) &&
         (pVStack_32 = (Vector3__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0),
         _UNK_? < (float)pVStack_32 - (this->fields).prevMouseUpTime)) {
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
          pVStack_32 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
          pVStack_34 = (Vector3__Array *)
                       MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                 (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          if (((float)pVStack_32 != 0.0) || ((float)((uint)pVStack_34 & _UNK_?) != 0.0)) {
            pCVar31 = (this->fields).prevSelectedCube;
            if (pCVar31 != (CubePickingInfo *)0x0) {
              pVStack_34 = (Vector3__Array *)(pCVar31->fields).cube;
              pVStack_32 = (Vector3__Array *)(((this->fields).prevSelectedCube)->fields).pickedFace;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar57 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pVStack_34,(Face__Enum)pVStack_32,(MethodInfo *)0x0);
              pVStack_34 = (Vector3__Array *)CONCAT31(pVStack_34._1_3_,uVar57);
              pMVar70 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar70 != (MVNetworkGame *)0x0) &&
                 (this_00 = (pMVar70->fields)._MaterialRepository_k__BackingField,
                 this_00 != (MVMaterialRepository *)0x0)) {
                bVar24 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                   (this_00,(uint8_t)pVStack_34,(MethodInfo *)0x0);
                if (bVar24 == 0) {
                  pCVar31 = (this->fields).prevSelectedCube;
                  if (((pCVar31 == (CubePickingInfo *)0x0) ||
                      (pMVar28 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar28 == (MVCubeModelBase *)0x0)) ||
                     ((this->fields).modelCursor == (ModelCursor3D *)0x0)) goto code_?;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)(this->fields).modelCursor,(pCVar31->fields).iLocalPos,
                             (pMVar28->fields)._.gameObject,1,(MethodInfo *)0x0);
                }
                else {
                  uVar57 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                     (e,(MethodInfo *)0x0);
                  (this->fields).prevMaterial = uVar57;
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (e,(uint8_t)pVStack_34,(MethodInfo *)0x0);
                  pCVar31 = (this->fields).prevSelectedCube;
                  (this->fields).movingEdgeCube = pCVar31;
                  func_?((char)this + ',',(short)pCVar31);
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
      bVar24 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar24 == 0) {
        pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
        bVar24 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                           ((pMVar28->fields)._.gameObject,(IntVector *)&puStack_19,
                            (MethodInfo *)0x0);
        if ((bVar24 != 0) &&
           (requestedCubePos.z = iVar20, requestedCubePos._0_4_ = puStack_19,
           CVar59 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                              (e,requestedCubePos,(MethodInfo *)0x0),
           CVar59 == CanPerformCubeActionResult__Enum_Yes)) {
          pos_04.z._0_1_ = (char)iVar20;
          pos_04._0_4_ = puStack_19;
          pos_04.z._1_1_ = (char)((ushort)iVar20 >> 8);
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,pos_04,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          puVar71 = puStack_19;
          pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
          uStack_48 = (Vector3__Array *)CONCAT22(iVar20,(undefined2)uStack_48);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_32 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                 ((MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pVStack_34 = (Vector3__Array *)
                       MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                       CubeDataPacker_CornersToByteArray(pVStack_32,(MethodInfo *)0x0);
          uVar57 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                             (e,(MethodInfo *)0x0);
          pVStack_32 = (Vector3__Array *)CONCAT31(pVStack_32._1_3_,uVar57);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          unaff_ESI = (Vector3__Array *)
                      Cube::Cube_CreateMaterialArray((uint8_t)pVStack_32,(MethodInfo *)0x0);
          pVStack_32 = (Vector3__Array *)func_?();
          Cube::Cube__ctor((Cube *)pVStack_32,(Byte__Array *)pVStack_34,(Byte__Array *)unaff_ESI,
                           (MethodInfo *)0x0);
          if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
          pos_01.z._0_1_ = (char)((uint)uStack_48 >> 0x10);
          pos_01._0_4_ = puVar71;
          pos_01.z._1_1_ = (char)((uint)uStack_48 >> 0x18);
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (pMVar28,pos_01,(CubeBase *)pVStack_32,(MethodInfo *)0x0);
        }
      }
      else {
        (this->fields).currentInternalState = 2;
      }
    }
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      pCVar33 = (Cube *)0x0;
    }
    else {
      pCVar33 = (((this->fields).movingEdgeCube)->fields).cube;
      unaff_ESI = (Vector3__Array *)e;
      pVVar26 = (Vector3__Array *)this;
      if (pCVar33 == (Cube *)0x0) goto code_?;
      pCVar33 = Cube::Cube_Clone(pCVar33,(MethodInfo *)0x0);
    }
    (this->fields).prevCubeState = pCVar33;
    func_?();
    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
    func_?();
    if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
    pVVar53 = (Vector3__Array *)(this->fields).movingEdgeCube;
    pVVar72 = (Vector3__Array *)(this->fields).modelCursor;
    pVStack_32 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
    pMVar28 = (e->fields)._TargetCubeModel_k__BackingField;
    unaff_ESI = (Vector3__Array *)e;
    pVVar26 = (Vector3__Array *)this;
    if (pMVar28 == (MVCubeModelBase *)0x0) goto code_?;
    unaff_ESI = (Vector3__Array *)(pMVar28->fields)._.gameObject;
    pVVar73 = (Vector3__Array *)(this->fields).currentInternalState;
    pVVar26 = pVVar53;
    pVStack_34 = unaff_ESI;
    if (pVVar53 == (Vector3__Array *)0x0) {
      iVar74 = (((MVCubeModelBase__Fields *)&pVVar72->bounds)->_)._.id;
      if (pVStack_32 == (Vector3__Array *)0x0) {
        if ((iVar74 != 0) && (*(GameObject **)(iVar74 + 0x14) != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)(iVar74 + 0x14),0,(MethodInfo *)0x0);
          fVar3 = pVVar72->vector[0].x;
          unaff_ESI = pVVar72;
          if ((fVar3 != 0.0) &&
             (pGVar30 = *(GameObject **)((int)fVar3 + 0x14), pGVar30 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar30,0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        if ((iVar74 == 0) || (*(GameObject **)(iVar74 + 0x14) == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(iVar74 + 0x14),1,(MethodInfo *)0x0);
        this_01 = (FaceCursor *)(((MVCubeModelBase__Fields *)&pVVar72->bounds)->_)._.id;
        info = pVStack_32;
joined_?:
        unaff_ESI = pVVar72;
        if (this_01 != (FaceCursor *)0x0) {
          FaceCursor::FaceCursor_UpdateCursor
                    (this_01,(CubePickingInfo *)info,(GameObject *)pVStack_34,(MethodInfo *)0x0);
code_?:
          unaff_ESI = pVVar72;
          if ((CellCursor *)pVVar72->max_length != (CellCursor *)0x0) {
            CellCursor::CellCursor_UpdateCursor((CellCursor *)pVVar72->max_length,(MethodInfo *)0x0)
            ;
            unaff_ESI = pVStack_32;
            if (pVVar73 == (Vector3__Array *)0x3) {
              fVar75 = 0.0;
              fVar3 = 0.0;
              fVar47 = 0.0;
              bVar24 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffff3c,(MethodInfo *)0x0);
              if (bVar24 == 0) {
code_?:
                *unaff_FS_OFFSET = uStack_10;
                return;
              }
              pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              unaff_ESI = pVVar72;
              if (((pGVar76 != (GameEventManager *)0x0) &&
                  (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                  pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                 (pGVar78 = (pGVar77->fields).LaserCommands,
                 pGVar78 !=
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                          (pGVar78,0.2,(MethodInfo *)0x0);
                pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar76 != (GameEventManager *)0x0) &&
                    (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                    pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar78 = (pGVar77->fields).LaserCommands,
                   pGVar78 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  to_00.y = fVar47;
                  to_00.x = fVar3;
                  to_00.z = fVar75;
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar78,to_00,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_10;
                  return;
                }
              }
            }
            else if (pVVar53 == (Vector3__Array *)0x0) {
              if (bVar46) {
                pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
code_?:
                unaff_ESI = pVVar72;
                if (((pGVar76 != (GameEventManager *)0x0) &&
                    (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                    pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar78 = (pGVar77->fields).LaserCommands,
                   pGVar78 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                            (pGVar78,0.2,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_10;
                  return;
                }
              }
              else {
                if (pVStack_32 == (Vector3__Array *)0x0) goto code_?;
                pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if (((pGVar76 != (GameEventManager *)0x0) &&
                    (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                    pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                   (pGVar78 = (pGVar77->fields).LaserCommands,
                   pGVar78 !=
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar78,*(Vector3 *)&unaff_ESI->vector[1].z,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_10;
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
              FVar56 = pVVar53->max_length;
              pCVar33 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar53->bounds)->_)._.id;
              fVar3 = pVVar53->vector[2].z;
              iVar20 = SUB42(fVar3,0);
              uVar1 = (undefined2)((uint)fVar3 >> 0x10);
              uStack_48 = (Vector3__Array *)
                          CONCAT22(*(undefined2 *)&pVVar53->vector[3].x,(undefined2)uStack_48);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              unaff_ESI = pVStack_34;
              iVector_01.y = uVar1;
              iVector_01.x = iVar20;
              iVector_01.z = uStack_48._2_2_;
              pVVar72 = Cube::Cube_GetFaceVerticesWorld
                                  ((GameObject *)pVStack_34,pCVar33,FVar56,iVector_01,
                                   (MethodInfo *)0x0);
              if (pVVar72 != (Vector3__Array *)0x0) {
                if ((pVVar72->max_length != 0) && (1 < pVVar72->max_length)) {
                  auStack_38._0_8_ = *(Enum *)(pVVar72->vector + 1);
                  auStack_38._8_4_ = pVVar72->vector[1].z;
                  uVar79 = pVVar72->vector[0].x;
                  uVar80 = pVVar72->vector[0].y;
                  fVar3 = (float)auStack_38._0_4_ + (float)uVar79;
                  fVar47 = (float)auStack_38._4_4_ + (float)uVar80;
                  fVar75 = (float)auStack_38._8_4_ + pVVar72->vector[0].z;
                  if (2 < pVVar72->max_length) {
                    auStack_38._0_8_ = *(Enum *)(pVVar72->vector + 2);
                    auStack_38._8_4_ = pVVar72->vector[2].z;
                    fVar3 = (float)auStack_38._0_4_ + fVar3;
                    fVar47 = (float)auStack_38._4_4_ + fVar47;
                    if (3 < pVVar72->max_length) {
                      auStack_38._0_8_ = *(Enum *)(pVVar72->vector + 3);
                      fVar3 = ((float)auStack_38._0_4_ + fVar3) * _UNK_?;
                      pVVar73 = (Vector3__Array *)
                                (((float)auStack_38._4_4_ + fVar47) * _UNK_?);
                      pVVar72 = (Vector3__Array *)
                                ((pVVar72->vector[3].z + (float)auStack_38._8_4_ + fVar75) *
                                _UNK_?);
                      uVar67 = SUB41(fVar3,0);
                      uVar68 = (undefined1)((uint)fVar3 >> 8);
                      uVar1 = (undefined2)((uint)fVar3 >> 0x10);
                      auStack_38._8_4_ = pVVar72;
                      pVStack_34 = pVVar73;
                      pVStack_32 = pVVar72;
                      if (pVVar53->vector[0].x == 0.0) {
                        fStack_81 = fVar3;
                        if (cRam_? == '\0') {
                          func_?();
                          fVar3 = (float)CONCAT22(uVar1,CONCAT11(uVar68,uVar67));
                          cRam_? = '\x01';
                        }
                        pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
                        uVar83 = (pVVar82->upVector).x;
                        uVar84 = (pVVar82->upVector).y;
                        auStack_38._8_4_ = (pVVar82->upVector).z + (float)pVStack_32;
                        auStack_38._4_4_ = (MonitorData *)((float)uVar84 + (float)pVStack_34);
                        auStack_38._0_4_ = (Enum__Class *)((float)uVar83 + fVar3);
                        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        start_00.y = (float)pVVar73;
                        start_00.x = fStack_81;
                        start_00.z = (float)pVVar72;
                        end_00.z = (float)auStack_38._8_4_;
                        end_00.x = (float)auStack_38._0_4_;
                        end_00.y = (float)auStack_38._4_4_;
                        color_00.g._0_2_ = (short)_UNK_?;
                        color_00.r = (float)_UNK_?;
                        color_00.g._2_2_ = (short)((uint)_UNK_? >> 0x10);
                        color_00.b = (float)_UNK_?;
                        color_00.a._0_2_ = (short)_UNK_?;
                        color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                  (start_00,end_00,color_00,(MethodInfo *)0x0);
code_?:
                        pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        unaff_ESI = pVVar72;
                        if (((pGVar76 != (GameEventManager *)0x0) &&
                            (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
                            pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar78 = (pGVar77->fields).LaserCommands,
                           pGVar78 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          to.y._0_2_ = (short)pVVar73;
                          to.x = fStack_81;
                          to.y._2_2_ = (short)((uint)pVVar73 >> 0x10);
                          to.z._0_1_ = (char)pVVar72;
                          to.z._1_1_ = (char)((uint)pVVar72 >> 8);
                          to.z._2_2_ = (short)((uint)pVVar72 >> 0x10);
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                    (pGVar78,to,(MethodInfo *)0x0);
                          pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          goto code_?;
                        }
                      }
                      else {
                        pCVar33 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar53->bounds)->_)._.id;
                        fStack_85 = (float)pVVar53->max_length;
                        fVar3 = pVVar53->vector[0].x;
                        fVar47 = pVVar53->vector[2].z;
                        iVar20 = SUB42(fVar47,0);
                        uVar49 = (undefined2)((uint)fVar47 >> 0x10);
                        uStack_48 = (Vector3__Array *)
                                    CONCAT22(*(undefined2 *)&pVVar53->vector[3].x,
                                             (undefined2)uStack_48);
                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        iVector_00.y = uVar49;
                        iVector_00.x = iVar20;
                        iVector_00.z = uStack_48._2_2_;
                        pVVar72 = Cube::Cube_GetEdgeVerticesWorld
                                            ((GameObject *)unaff_ESI,pCVar33,(Face__Enum)fStack_85,
                                             (Edge__Enum)fVar3,iVector_00,(MethodInfo *)0x0);
                        if (*(bool *)&pVVar53->vector[0].y == 0) {
                          if (pVVar72 != (Vector3__Array *)0x0) {
                            if (*(char *)((int)&pVVar53->vector[0].y + 1) == '\0') {
                              if ((pVVar72->max_length != 0) && (1 < pVVar72->max_length)) {
                                auStack_38._0_8_ = *(Enum *)(pVVar72->vector + 1);
                                uVar86 = pVVar72->vector[0].x;
                                uVar87 = pVVar72->vector[0].y;
                                fVar3 = (pVVar72->vector[1].z + pVVar72->vector[0].z) *
                                         _UNK_?;
                                fStack_81 = ((float)auStack_38._0_4_ + (float)uVar86) *
                                            _UNK_?;
                                fVar47 = ((float)auStack_38._4_4_ + (float)uVar87) * _UNK_?;
code_?:
                                pVVar72 = (Vector3__Array *)
                                          (((float)pVStack_32 - fVar3) * _UNK_? + fVar3);
                                fStack_81 = ((float)CONCAT22(uVar1,CONCAT11(uVar68,uVar67)) -
                                            fStack_81) * _UNK_? + fStack_81;
                                pVVar73 = (Vector3__Array *)
                                          (((float)pVStack_34 - fVar47) * _UNK_? + fVar47);
                                auStack_38._8_4_ = pVVar72;
                                goto code_?;
                              }
                            }
                            else if (1 < pVVar72->max_length) {
                              uVar88 = pVVar72->vector[1].x;
                              fVar47 = pVVar72->vector[1].y;
                              fVar3 = pVVar72->vector[1].z;
                              fStack_81 = (float)uVar88;
                              goto code_?;
                            }
                            goto code_?;
                          }
                        }
                        else if (pVVar72 != (Vector3__Array *)0x0) {
                          if (pVVar72->max_length != 0) {
                            uVar89 = pVVar72->vector[0].x;
                            uVar90 = pVVar72->vector[0].y;
                            fVar3 = pVVar72->vector[0].z;
                            iStack_91 = (int16_t)uVar90;
                            iStack_60 = (int16_t)((uint)uVar90 >> 0x10);
                            auStack_38._0_4_ = pVVar72->vector[0].x;
                            auStack_38._4_4_ = pVVar72->vector[0].y;
                            fVar47 = (float)uVar89;
                            auStack_38._8_4_ = fVar3;
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar92 = (pVVar82->upVector).x;
                            uVar93 = (pVVar82->upVector).y;
                            auStack_38._8_4_ = (float)auStack_38._8_4_ + (pVVar82->upVector).z;
                            auStack_38._4_4_ =
                                 (MonitorData *)((float)auStack_38._4_4_ + (float)uVar93);
                            auStack_38._0_4_ =
                                 (Enum__Class *)((float)uVar92 + (float)auStack_38._0_4_);
                            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            start.y = (float)(int)(CONCAT26(iStack_60,CONCAT24(iStack_91,fVar47)) >>
                                                  0x20);
                            start.x = fVar47;
                            start.z = fVar3;
                            end.z = (float)auStack_38._8_4_;
                            end.x = (float)auStack_38._0_4_;
                            end.y = (float)auStack_38._4_4_;
                            color.g._0_2_ = (short)_UNK_?;
                            color.r = (float)_UNK_?;
                            color.g._2_2_ = (short)((uint)_UNK_? >> 0x10);
                            color.b = (float)_UNK_?;
                            color.a._0_2_ = (short)_UNK_?;
                            color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                                      (start,end,color,(MethodInfo *)0x0);
                            fStack_81 = (float)uVar89;
                            fVar47 = (float)uVar90;
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
    uStack_35 = (Byte__Array *)pVVar72->vector[0].x;
    if (uStack_35 == (Byte__Array *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      uStack_18 = &MethodInfo__System__Collections__Generic__List<int>__ToArray__;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pCVar33 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar53->bounds)->_)._.id;
    fStack_94 = (float)pVVar53->max_length;
    fVar3 = pVVar53->vector[2].z;
    uVar1 = *(undefined2 *)&pVVar53->vector[3].x;
    uStack_48._2_2_ = uVar1;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVector_03.z._0_1_ = (char)uStack_48._2_2_;
    iVector_03._0_4_ = fVar3;
    iVector_03.z._1_1_ = SUB21(uStack_48._2_2_,1);
    uStack_48 = Cube::Cube_GetFaceVerticesWorld
                          ((GameObject *)unaff_ESI,pCVar33,(Face__Enum)fStack_94,iVector_03,
                           (MethodInfo *)0x0);
    unaff_ESI = (Vector3__Array *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)unaff_ESI,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    if ((((*(GameObject **)((int)uStack_35->vector + 4) == (GameObject *)0x0) ||
         (this_04 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (*(GameObject **)((int)uStack_35->vector + 4),
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_04 == (MeshFilter *)0x0)) ||
        (pVVar72 = (Vector3__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_04,(MethodInfo *)0x0), pVVar72 == (Vector3__Array *)0x0)) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear((Mesh *)pVVar72,(MethodInfo *)0x0)
       , pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
       unaff_ESI == (Vector3__Array *)0x0)) goto code_?;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (uVar96 < *(uint *)(iVar74 + 0xc)) {
        *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 0;
        goto code_?;
      }
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
    List_1_System_Int32__AddWithResize
              ((List_1_System_Int32_ *)unaff_ESI,0,pMVar95->klass->rgctx_data[0xe].method);
code_?:
    pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (*(uint *)(iVar74 + 0xc) <= uVar96) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,3,pMVar95->klass->rgctx_data[0xe].method);
    }
    pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (*(uint *)(iVar74 + 0xc) <= uVar96) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,2,pMVar95->klass->rgctx_data[0xe].method);
    }
    pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (*(uint *)(iVar74 + 0xc) <= uVar96) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,2,pMVar95->klass->rgctx_data[0xe].method);
    }
    pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (*(uint *)(iVar74 + 0xc) <= uVar96) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,1,pMVar95->klass->rgctx_data[0xe].method);
    }
    pMVar95 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    unaff_ESI->vector[0].x = (float)((int)unaff_ESI->vector[0].x + 1);
    iVar74 = (((MVCubeModelBase__Fields *)&unaff_ESI->bounds)->_)._.id;
    uVar96 = unaff_ESI->max_length;
    if (iVar74 == 0) goto code_?;
    if (uVar96 < *(uint *)(iVar74 + 0xc)) {
      unaff_ESI->max_length = uVar96 + 1;
      if (*(uint *)(iVar74 + 0xc) <= uVar96) goto code_?;
      *(undefined4 *)(iVar74 + 0x10 + uVar96 * 4) = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)unaff_ESI,0,pMVar95->klass->rgctx_data[0xe].method);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              ((Mesh *)pVVar72,uStack_48,(MethodInfo *)0x0);
    value_01 = IndentArea::IndentArea_SetUVs((IndentArea *)uStack_35,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
              ((Mesh *)pVVar72,value_01,(MethodInfo *)0x0);
    value_02 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)unaff_ESI,
                          MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              ((Mesh *)pVVar72,(Int32__Array *)value_02,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              ((Mesh *)pVVar72,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
              ((Mesh *)pVVar72,(MethodInfo *)0x0);
    unaff_ESI = pVVar72;
    if (uStack_48 == (Vector3__Array *)0x0) goto code_?;
    if (2 < uStack_48->max_length) {
      uVar97 = uStack_48->vector[0].x;
      uVar98 = uStack_48->vector[0].y;
      uVar99 = uStack_48->vector[2].x;
      uVar100 = uStack_48->vector[2].y;
      fVar3 = ((float)uVar100 - (float)uVar98) * _UNK_?;
      if (uStack_48->max_length != 0) {
        uVar101 = uStack_48->vector[0].x;
        uVar102 = uStack_48->vector[0].y;
        fStack_94 = (float)uVar101 + ((float)uVar99 - (float)uVar97) * _UNK_?;
        fStack_85 = uStack_48->vector[0].z +
                    (uStack_48->vector[2].z - uStack_48->vector[0].z) * _UNK_?;
        if (*(GameObject **)((int)uStack_35->vector + 4) != (GameObject *)0x0) {
          pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (*(GameObject **)((int)uStack_35->vector + 4),(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar103 = (pVVar82->oneVector).x;
          uVar104 = (pVVar82->oneVector).y;
          fVar47 = *(float *)((int)uStack_35->vector + 8);
          fVar75 = (pVVar82->oneVector).z * fVar47;
          if (pTVar41 != (Transform *)0x0) {
            value.y._0_2_ = SUB42((float)uVar104 * fVar47,0);
            value.x = (float)uVar103 * fVar47;
            value.y._2_2_ = (short)((uint)((float)uVar104 * fVar47) >> 0x10);
            value.z._0_1_ = SUB41(fVar75,0);
            value.z._1_1_ = (char)((uint)fVar75 >> 8);
            value.z._2_2_ = (short)((uint)fVar75 >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar41,value,(MethodInfo *)0x0);
            if (*(GameObject **)((int)uStack_35->vector + 4) != (GameObject *)0x0) {
              pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform
                                  (*(GameObject **)((int)uStack_35->vector + 4),(MethodInfo *)0x0);
              pVVar73 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                  ((Mesh *)pVVar72,(MethodInfo *)0x0);
              if (pVVar73 != (Vector3__Array *)0x0) {
                if (pVVar73->max_length == 0) goto code_?;
                if (pTVar41 != (Transform *)0x0) {
                  pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_TransformPoint
                                      ((Vector3 *)auStack_38,pTVar41,pVVar73->vector[0],
                                       (MethodInfo *)0x0);
                  uVar105 = pVVar37->x;
                  uVar106 = pVVar37->y;
                  fVar47 = pVVar37->z;
                  if (*(GameObject **)((int)uStack_35->vector + 4) != (GameObject *)0x0) {
                    pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform
                                        (*(GameObject **)((int)uStack_35->vector + 4),
                                         (MethodInfo *)0x0);
                    pVVar72 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                        ((Mesh *)pVVar72,(MethodInfo *)0x0);
                    if (pVVar72 != (Vector3__Array *)0x0) {
                      if (pVVar72->max_length < 3) goto code_?;
                      if (pTVar41 != (Transform *)0x0) {
                        pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformPoint
                                            ((Vector3 *)auStack_38,pTVar41,pVVar72->vector[2],
                                             (MethodInfo *)0x0);
                        uVar107 = pVVar37->x;
                        uVar108 = pVVar37->y;
                        fVar75 = ((float)uVar107 - (float)uVar105) * _UNK_?;
                        fVar109 = (pVVar37->z - fVar47) * _UNK_?;
                        uStack_48 = (Vector3__Array *)
                                    (((float)uVar108 - (float)uVar106) * _UNK_? + (float)uVar106
                                    );
                        if (*(GameObject **)((int)uStack_35->vector + 4) != (GameObject *)0x0) {
                          pTVar41 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform
                                              (*(GameObject **)((int)uStack_35->vector + 4),
                                               (MethodInfo *)0x0);
                          unaff_ESI = (Vector3__Array *)0x0;
                          if (pTVar41 != (Transform *)0x0) {
                            pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_position
                                                ((Vector3 *)&stack0xffffff80,pTVar41,
                                                 (MethodInfo *)0x0);
                            auStack_38._0_4_ = pVVar37->x;
                            auStack_38._4_4_ = pVVar37->y;
                            uVar110 = *(undefined8 *)&pVVar53->vector[0].z;
                            auStack_38._8_4_ =
                                 pVVar37->z +
                                 (fStack_85 - (fVar109 + fVar47)) +
                                 (float)pVVar53->vector[1].y * _UNK_?;
                            fVar3 = (float)auStack_38._4_4_ +
                                     (((float)uVar102 + fVar3) - (float)uStack_48) +
                                     (float)((ulonglong)uVar110 >> 0x20) * _UNK_?;
                            pVVar72 = (Vector3__Array *)&UNK_?;
                            value_00.y._0_2_ = SUB42(fVar3,0);
                            value_00.x = (float)auStack_38._0_4_ +
                                         (fStack_94 - (fVar75 + (float)uVar105)) +
                                         (float)uVar110 * _UNK_?;
                            value_00.y._2_2_ = (int16_t)((uint)fVar3 >> 0x10);
                            value_00.z._0_2_ = (int16_t)auStack_38._8_4_;
                            value_00.z._2_2_ = (short)((uint)auStack_38._8_4_ >> 0x10);
                            pVVar73 = (Vector3__Array *)auStack_38._8_4_;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar41,value_00,(MethodInfo *)0x0);
                            iVar74 = (((MVCubeModelBase__Fields *)&pVVar72->bounds)->_)._.id;
                            unaff_ESI = pVVar72;
                            if ((iVar74 != 0) &&
                               (pGVar30 = *(GameObject **)(iVar74 + 0x14),
                               pGVar30 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar30,1,(MethodInfo *)0x0);
                              this_01 = (FaceCursor *)
                                        (((MVCubeModelBase__Fields *)&pVVar72->bounds)->_)._.id;
                              info = pVVar53;
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
  func_?();
  bVar111 = extraout_AH ^ (byte)extraout_ECX;
  pbVar112 = (byte *)(extraout_EDX + -0x13efba1f);
  bVar113 = *pbVar112;
  *pbVar112 = *pbVar112 + bVar111;
  if (extraout_ECX == 1 || *pbVar112 != 0) {
    cRam_? = cRam_? + (char)((uint)extraout_EDX >> 8) + CARRY1(bVar113,bVar111);
    pcVar114 = (code *)swi(3);
    (*pcVar114)();
    return;
  }
  pcVar115 = (char *)((int)&unaff_ESI[0xd17ae].vector[2].z + 1);
  *pcVar115 = *pcVar115 + (char)((uint)((int)&uStack_6 + 3) >> 8) + CARRY1(bVar113,bVar111);
  func_?();
  piVar116 = (int *)uStack_6;
  uRam_? = 1;
  TypeInfo__CubeModelTool->static_fields->cubeCount = 0;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if (*(int *)((int)uStack_6 + 0x24) == 0) {
    iVar74 = CONCAT13(unaff_retaddr,uStack_7);
    *(int *)((int)uStack_6 + 0x24) = 2;
    if (iVar74 == 0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              ((CubeModelingStateMachine *)CONCAT22((short)((uint)iVar74 >> 0x10),(short)uStack_7),
               *(uint8_t *)((int)uStack_6 + 0x18),(MethodInfo *)0x0);
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = *(uint8_t *)(piVar116 + 6)
    ;
    if (piVar116[0xb] != 0) {
      this_02 = *(CubeBase **)(piVar116[0xb] + 8);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar26 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                          ((MethodInfo *)0x0);
      if (this_02 == (CubeBase *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                (this_02,pVVar26,(MethodInfo *)0x0);
      iVar117 = piVar116[0xb];
      if ((iVar117 == 0) || (*(MVCubeModelBase **)(iVar74 + 0x4c) == (MVCubeModelBase *)0x0))
      goto code_?;
      iVector_04.z._1_1_ = (char)((ushort)*(undefined2 *)(iVar117 + 0x34) >> 8);
      iVector_04._0_5_ = *(undefined5 *)(iVar117 + 0x30);
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (*(MVCubeModelBase **)(iVar74 + 0x4c),iVector_04,*(Cube **)(iVar117 + 8),
                 (MethodInfo *)0x0);
    }
    piVar116[0xb] = 0;
    func_?();
    *(undefined1 *)((int)piVar116 + 0x19) = 0;
  }
  (**(code **)(*piVar116 + 0x120))();
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar76 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar76 != (GameEventManager *)0x0) &&
      (pGVar77 = (pGVar76->fields).AvatarCommandsBuildMode,
      pGVar77 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (pGVar78 = (pGVar77->fields).LaserCommands,
     pGVar78 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    uStack_7 = 0;
    pIVar118 = (pMStack_27->_0).byval_arg.data.array;
    if (pIVar118 != (Il2CppArrayType *)0x0) {
      uStack_6 = pGVar78;
      (*(code *)pIVar118->lobounds)();
    }
    return;
  }
code_?:
  func_?();
  pcVar114 = (code *)swi(3);
  (*pcVar114)();
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

