
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
    in_stack_12 = 0x119b;
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
  if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
  if ((pMVar20->fields).indentArea != (IndentArea *)0x0 &&
      (this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
    cVar21 = true;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
      pIVar23 = (((this->fields).modelCursor)->fields).indentArea;
      cVar21 = true;
      if ((pMVar22 == (MVCubeModelBase *)0x0) || (cVar21 = true, pIVar23 == (IndentArea *)0x0))
      goto code_?;
      pGVar24 = (pMVar22->fields)._.gameObject;
      in_stack_12 = (undefined2)((uint)pGVar24 >> 0x10);
      IndentArea::IndentArea_UpdateIndentArea
                (pIVar23,(e->fields)._SelectedCube_k__BackingField,pGVar24,(MethodInfo *)0x0);
      pMVar20 = (this->fields).modelCursor;
      cVar21 = true;
      if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
      pIVar23 = (pMVar20->fields).indentArea;
      cVar21 = true;
      if (pIVar23 == (IndentArea *)0x0) goto code_?;
      bVar19 = IndentArea::IndentArea_IsColliding(pIVar23,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        pMVar20 = (this->fields).modelCursor;
        cVar21 = true;
        if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
        pIVar23 = (pMVar20->fields).indentArea;
        cVar21 = true;
        if (pIVar23 == (IndentArea *)0x0) goto code_?;
        pGVar24 = (pIVar23->fields).gameObject;
        cVar21 = true;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        bVar19 = 0;
      }
      else {
        pCVar25 = (e->fields)._SelectedCube_k__BackingField;
        cVar21 = true;
        if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
        (pCVar25->fields).pickedEdge = 0;
        pMVar20 = (this->fields).modelCursor;
        cVar21 = true;
        if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
        pIVar23 = (pMVar20->fields).indentArea;
        cVar21 = true;
        if (pIVar23 == (IndentArea *)0x0) goto code_?;
        pGVar24 = (pIVar23->fields).gameObject;
        cVar21 = true;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        bVar19 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,bVar19,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    in_stack_12 = 0x1044;
    func_?();
  }
  bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar19 != 0) {
    in_stack_12 = 0;
    pVStack_26 = (Vector3__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).prevMouseUpTime = (float)pVStack_26;
  }
  if (cRam_? == '\0') {
    in_stack_12 = 0x1044;
    func_?();
    cRam_? = '\x01';
  }
  cVar21 = true;
  if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  if (((e->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) &&
     ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0)) {
    pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
    cVar21 = true;
    if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
    pVStack_27 = (Vector3__Array *)(pMVar22->fields)._.gameObject;
    pCVar25 = (e->fields)._SelectedCube_k__BackingField;
    pVStack_26 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
    uStack_28 = (IndentArea *)CONCAT22((pCVar25->fields).iLocalPos.z,(undefined2)uStack_28);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar29.z = uStack_28._2_2_;
    IVar29._0_4_ = pVStack_26;
    pVVar30 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                        (&VStack_31,(GameObject *)pVStack_27,IVar29,(MethodInfo *)0x0);
    uVar32 = pVVar30->x;
    uVar33 = pVVar30->y;
    fVar3 = pVVar30->z;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    cVar21 = true;
    if (this_02 == (MainCameraManager *)0x0) goto code_?;
    pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_02,(MethodInfo *)0x0);
    cVar21 = true;
    if (pTVar34 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_31,pTVar34,(MethodInfo *)0x0);
    uVar35 = pVVar30->x;
    uVar36 = pVVar30->y;
    VStack_31.z = pVVar30->z - fVar3;
    VStack_31.y = (float)uVar36 - (float)uVar33;
    VStack_31.x = (float)uVar35 - (float)uVar32;
    fVar37 = (float10)func_?();
    pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
    pVStack_26 = (Vector3__Array *)(float)fVar37;
    cVar21 = true;
    if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
    in_stack_12 = (undefined2)((uint)pMVar22 >> 0x10);
    puVar38 = (undefined8 *)(*(code *)(pMVar22->klass->vtable).get_Scale.method)();
    pMVar20 = (this->fields).modelCursor;
    if ((float)((ulonglong)*puVar38 >> 0x20) * _UNK_? < (float)pVStack_26) {
      (this->fields).mouseSensitivity = 0.1325;
      cVar21 = true;
      if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
      pIVar23 = (pMVar20->fields).indentArea;
      cVar21 = true;
      if (pIVar23 == (IndentArea *)0x0) goto code_?;
      (pIVar23->fields).size = 1.0;
    }
    else {
      (this->fields).mouseSensitivity = 0.0225;
      cVar21 = true;
      if (pMVar20 == (ModelCursor3D *)0x0) goto code_?;
      pIVar23 = (pMVar20->fields).indentArea;
      cVar21 = true;
      if (pIVar23 == (IndentArea *)0x0) goto code_?;
      (pIVar23->fields).size = 0.5;
    }
  }
  uStack_4 = (ushort)((uint)fVar3 >> 0x10);
  bVar39 = false;
  uStack_28 = (IndentArea *)((uint)uStack_28 & 0xffffff);
  switch((this->fields).currentInternalState) {
  case 0:
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      (this->fields).currentInternalState = 1;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
      (this->fields).edgeHasMoved = 0;
    }
    else {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVStack_26 = (Vector3__Array *)
                     MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                               (StringLiteral_Mouse_X,(MethodInfo *)0x0);
        pVStack_27 = (Vector3__Array *)
                     MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                               (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        fVar40 = (float)pVStack_26 * _UNK_?;
        fVar3 = (float)pVStack_27 * _UNK_?;
        uStack_41 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
        pVStack_26 = (Vector3__Array *)(this->fields).mouseSensitivity;
        pCVar25 = (this->fields).movingEdgeCube;
        iVar15 = 0;
        uVar42 = 0;
        cVar21 = true;
        if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
        bVar19 = (pCVar25->fields).pickedEdgeIndex0;
        pVStack_27._1_3_ = (undefined3)((uint)pVStack_27 >> 8);
        pVStack_27 = (Vector3__Array *)
                     CONCAT31(pVStack_27._1_3_,
                              (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar43 = (MethodInfo *)((int)&uStack_13 + 3);
        showUnlockNotification = (bool)pVStack_26;
        uVar44 = (undefined2)((uint)pVStack_26 >> 0x10);
        pGVar24 = (GameObject *)&(this->fields).deltaAccum;
        mousePositionDelta.z._2_2_ = uVar42;
        mousePositionDelta.z._0_2_ = iVar15;
        mousePositionDelta.y =
             (float)(int)(CONCAT26((int16_t)((uint)fVar3 >> 0x10),CONCAT24(SUB42(fVar3,0),fVar40))
                         >> 0x20);
        mousePositionDelta.x = fVar40;
        pVStack_26 = (Vector3__Array *)
                     SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                               ((MVCubeModelBase *)uStack_41,pCVar25,mousePositionDelta,
                                &(this->fields).delta,(float *)pGVar24,(float)pVStack_26,
                                (bool *)pMVar43,bVar19,(bool)pVStack_27,
                                (EditCubeChange__Enum *)&stack0xffffff64,(MethodInfo *)0x0);
        if (pVStack_26 == (Vector3__Array *)0x0) {
          pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
          cVar21 = true;
          if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
          iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar22,(MethodInfo *)0x0);
          CubeModelTool::CubeModelTool_SendCubeEvent(iVar45,EVar18,(MethodInfo *)0x0);
        }
        if ((uStack_13._3_1_ & (this->fields).edgeHasMoved == 0) != 0) {
          (this->fields).edgeHasMoved = 1;
        }
        if (pVStack_26 == (Vector3__Array *)0x1) {
          pCVar25 = (this->fields).movingEdgeCube;
          cVar21 = true;
          if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
          pVStack_26 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
          uStack_28._2_2_ = (pCVar25->fields).iLocalPos.z;
          pVStack_27 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          localPos.z = (int16_t)pVStack_26;
          localPos._0_4_ = &stack0xffffff6c;
          IVar29 = Cube::Cube_GetCubePosAboveFace
                             (localPos,CONCAT22(uVar1,uStack_28._2_2_),(MethodInfo *)pVStack_27);
          pIVar46 = IVar29._0_4_;
          uStack_41 = *(Vector3__Array **)pIVar46;
          uStack_28 = (IndentArea *)CONCAT22(pIVar46->z,(undefined2)uStack_28);
          pVStack_27 = (Vector3__Array *)
                       CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                 (e,*pIVar46,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
          if (pVStack_27 == (Vector3__Array *)0x0) {
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            cVar21 = true;
            if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
            pos.z = uStack_28._2_2_;
            pos._0_4_ = uStack_41;
            pVStack_26 = (Vector3__Array *)
                         MVCubeModelBase::MVCubeModelBase_GetCube(pMVar22,pos,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                               ((CubeBase *)pVStack_26,(CubeBase *)0x0,(MethodInfo *)0x0);
            if (bVar19 != 0) {
              pos_00.z = uStack_28._2_2_;
              pos_00._0_4_ = uStack_41;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_00,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
              pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
              pCVar25 = (this->fields).movingEdgeCube;
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              pVStack_26 = (Vector3__Array *)(pCVar25->fields).cube;
              FVar47 = (((this->fields).movingEdgeCube)->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar48 = Cube::Cube_GetCorners((Cube *)pVStack_26,FVar47,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                        CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
              uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
              pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar50);
              pBVar51 = Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
              pVStack_26 = (Vector3__Array *)func_?();
              Cube::Cube__ctor((Cube *)pVStack_26,pBVar49,pBVar51,(MethodInfo *)0x0);
              cVar21 = true;
              if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
              pos_07.z = uStack_28._2_2_;
              pos_07._0_4_ = uStack_41;
              MVCubeModelBase::MVCubeModelBase_AddCube
                        ((MVCubeModelBase *)pVStack_27,pos_07,(CubeBase *)pVStack_26,
                         (MethodInfo *)0x0);
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
              iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar22,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent
                        (iVar45,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
              pCVar25 = (this->fields).movingEdgeCube;
              pCVar52 = (CubePickingInfo *)func_?();
              CubePickingInfo::CubePickingInfo__ctor_1(pCVar52,pCVar25,(MethodInfo *)0x0);
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
              pos_08.z = uStack_28._2_2_;
              pos_08._0_4_ = uStack_41;
              pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar22,pos_08,(MethodInfo *)0x0);
              pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
              cVar21 = true;
              if (pCVar52 == (CubePickingInfo *)0x0) goto code_?;
              (pCVar52->fields).cube = pCVar53;
              func_?();
              *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_41;
              (pCVar52->fields).iLocalPos.z = uStack_28._2_2_;
              pCVar25 = (this->fields).movingEdgeCube;
              cVar21 = true;
              if ((pCVar25 == (CubePickingInfo *)0x0) ||
                 (cVar21 = true,
                 (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                        ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                         (pCVar25->fields).cube,(MethodInfo *)0x0);
              (this->fields).movingEdgeCube = pCVar52;
              func_?();
              pVStack_26 = (Vector3__Array *)(this->fields).movingEdgeCube;
              cVar21 = true;
              if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
              pVVar30 = Cube::Cube_GetFaceAxis(&VStack_31,pVStack_26->max_length,(MethodInfo *)0x0);
              Cube::Cube_MoveFace((CubePickingInfo *)pVStack_26,-0.75,*pVVar30,
                                  (CubeOutOfBoundState__Enum *)&stack0xffffff38,(MethodInfo *)0x0);
code_?:
              pCVar25 = (this->fields).movingEdgeCube;
              cVar21 = true;
              if ((pCVar25 == (CubePickingInfo *)0x0) ||
                 (cVar21 = true,
                 (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
              goto code_?;
              MVCubeModelBase::MVCubeModelBase_CornersChanged
                        ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                         (pCVar25->fields).cube,(MethodInfo *)0x0);
              break;
            }
          }
          VStack_31.z = (float)pVStack_27;
          VStack_31.y = -NAN;
          VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
          str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&VStack_31,(MethodInfo *)0x0);
          uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
          uVar42 = (undefined2)((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
          mscorlib.dll::System::String::String_Concat_3
                    ((String *)CONCAT22(uVar42,uVar1),str1,(MethodInfo *)0x0);
          pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
          pMVar20 = (this->fields).modelCursor;
          cVar21 = true;
          if ((pMVar22 == (MVCubeModelBase *)0x0) ||
             (cVar21 = true, pMVar20 == (ModelCursor3D *)0x0)) goto code_?;
          iPos.z = uStack_28._2_2_;
          iPos._0_4_ = uStack_41;
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar20,iPos,(pMVar22->fields)._.gameObject,
                     pVStack_27 == (Vector3__Array *)0x2,(MethodInfo *)0x0);
          pCVar25 = (this->fields).movingEdgeCube;
          pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
          cVar21 = true;
          if ((pCVar25 == (CubePickingInfo *)0x0) ||
             (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
          pCVar53 = (pCVar25->fields).cube;
        }
        else {
          if (pVStack_26 == (Vector3__Array *)0x4) {
            pCVar25 = (this->fields).movingEdgeCube;
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pVStack_26 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
            uStack_28._2_2_ = (pCVar25->fields).iLocalPos.z;
            pVStack_27 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            localPos_02.z = (int16_t)pVStack_26;
            localPos_02._0_4_ = &stack0xffffff6c;
            IVar29 = Cube::Cube_GetCubePosAboveFace
                               (localPos_02,CONCAT22(uVar44,uStack_28._2_2_),
                                (MethodInfo *)pVStack_27);
            puVar54 = IVar29._0_4_;
            uStack_41 = *(Vector3__Array **)puVar54;
            uStack_28 = (IndentArea *)
                        CONCAT22(*(undefined2 *)((int)puVar54 + 4),(undefined2)uStack_28);
            requestedCubePos_00.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8);
            requestedCubePos_00._0_5_ = *puVar54;
            pVStack_27 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                   (e,requestedCubePos_00,(this->fields).movingEdgeCube,
                                    (MethodInfo *)0x0);
            if (pVStack_27 == (Vector3__Array *)0x0) {
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
              pos_03.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
              pos_03._0_4_ = uStack_41;
              pos_03.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
              pVStack_26 = (Vector3__Array *)
                           MVCubeModelBase::MVCubeModelBase_GetCube
                                     (pMVar22,pos_03,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                 ((CubeBase *)pVStack_26,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar19 != 0) {
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          (e,(pCVar25->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                           (MethodInfo *)0x0);
                pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                pVStack_26 = (Vector3__Array *)(pCVar25->fields).cube;
                FVar47 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pVVar48 = Cube::Cube_GetCorners((Cube *)pVStack_26,FVar47,(MethodInfo *)0x0);
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
                uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (e,(MethodInfo *)0x0);
                pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar50);
                pBVar51 = Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
                pVStack_26 = (Vector3__Array *)func_?();
                Cube::Cube__ctor((Cube *)pVStack_26,pBVar49,pBVar51,(MethodInfo *)0x0);
                cVar21 = true;
                if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
                pos_12.z = uStack_28._2_2_;
                pos_12._0_4_ = uStack_41;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          ((MVCubeModelBase *)pVStack_27,pos_12,(CubeBase *)pVStack_26,
                           (MethodInfo *)0x0);
                pCVar25 = (this->fields).movingEdgeCube;
                pCVar52 = (CubePickingInfo *)func_?();
                CubePickingInfo::CubePickingInfo__ctor_1(pCVar52,pCVar25,(MethodInfo *)0x0);
                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                cVar21 = true;
                if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
                pos_06.z = uStack_28._2_2_;
                pos_06._0_4_ = uStack_41;
                pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar22,pos_06,(MethodInfo *)0x0)
                ;
                pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                cVar21 = true;
                if (pCVar52 == (CubePickingInfo *)0x0) goto code_?;
                (pCVar52->fields).cube = pCVar53;
                func_?();
                *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_41;
                (pCVar52->fields).iLocalPos.z = uStack_28._2_2_;
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if ((pCVar25 == (CubePickingInfo *)0x0) ||
                   (cVar21 = true,
                   (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
                goto code_?;
                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                          ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                           (pCVar25->fields).cube,(MethodInfo *)0x0);
                (this->fields).movingEdgeCube = pCVar52;
                func_?();
                pVStack_26 = (Vector3__Array *)(this->fields).movingEdgeCube;
                cVar21 = true;
                if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
                pVVar30 = Cube::Cube_GetFaceAxis
                                    (&VStack_31,pVStack_26->max_length,(MethodInfo *)0x0);
                axis_00.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                axis_00._0_9_ = *(unkbyte9 *)pVVar30;
                axis_00.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_26,-1.0,axis_00,
                                    (CubeOutOfBoundState__Enum *)&stack0xffffff48,(MethodInfo *)0x0)
                ;
                pVStack_26 = (Vector3__Array *)(this->fields).movingEdgeCube;
                cVar21 = true;
                if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
                pVVar30 = Cube::Cube_GetFaceAxis
                                    (&VStack_31,pVStack_26->max_length,(MethodInfo *)0x0);
                axis_02.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                axis_02._0_10_ = *(unkbyte10 *)pVVar30;
                Cube::Cube_MoveEdge((CubePickingInfo *)pVStack_26,-0.75,axis_02,
                                    (CubeOutOfBoundState__Enum *)&stack0xffffff48,(MethodInfo *)0x0)
                ;
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if ((pCVar25 == (CubePickingInfo *)0x0) ||
                   (cVar21 = true,
                   (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
                goto code_?;
                MVCubeModelBase::MVCubeModelBase_CornersChanged
                          ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                           (pCVar25->fields).cube,(MethodInfo *)0x0);
                break;
              }
            }
            VStack_31.z = (float)pVStack_27;
            VStack_31.y = -NAN;
            VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
            str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&VStack_31,(MethodInfo *)0x0);
            uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
            uVar42 = (undefined2)((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
            goto code_?;
          }
          if (pVStack_26 == (Vector3__Array *)0x5) {
            pCVar25 = (this->fields).movingEdgeCube;
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pVStack_26 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
            uStack_28._2_2_ = (pCVar25->fields).iLocalPos.z;
            pVStack_27 = (Vector3__Array *)(((this->fields).movingEdgeCube)->fields).pickedFace;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            localPos_01.z = (int16_t)pVStack_26;
            localPos_01._0_4_ = &stack0xffffff6c;
            IVar29 = Cube::Cube_GetCubePosAboveFace
                               (localPos_01,CONCAT22(uVar44,uStack_28._2_2_),
                                (MethodInfo *)pVStack_27);
            puVar54 = IVar29._0_4_;
            uStack_41 = *(Vector3__Array **)puVar54;
            uStack_28 = (IndentArea *)
                        CONCAT22(*(undefined2 *)((int)puVar54 + 4),(undefined2)uStack_28);
            requestedCubePos.z._1_1_ = (char)((ushort)*(undefined2 *)((int)puVar54 + 4) >> 8);
            requestedCubePos._0_5_ = *puVar54;
            pVStack_27 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                   (e,requestedCubePos,(this->fields).movingEdgeCube,
                                    (MethodInfo *)0x0);
            if (pVStack_27 == (Vector3__Array *)0x0) {
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
              pos_02.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
              pos_02._0_4_ = uStack_41;
              pos_02.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
              pVStack_26 = (Vector3__Array *)
                           MVCubeModelBase::MVCubeModelBase_GetCube
                                     (pMVar22,pos_02,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                 ((CubeBase *)pVStack_26,(CubeBase *)0x0,(MethodInfo *)0x0);
              if (bVar19 != 0) {
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          (e,(pCVar25->fields).iLocalPos,AudioActions__Enum_CubeAdded,
                           (MethodInfo *)0x0);
                pVStack_27 = (Vector3__Array *)(e->fields)._TargetCubeModel_k__BackingField;
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                pVStack_26 = (Vector3__Array *)(pCVar25->fields).cube;
                FVar47 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pVVar48 = Cube::Cube_GetCorners((Cube *)pVStack_26,FVar47,(MethodInfo *)0x0);
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                pBVar49 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(pVVar48,(MethodInfo *)0x0);
                uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (e,(MethodInfo *)0x0);
                pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar50);
                pBVar51 = Cube::Cube_CreateMaterialArray(uVar50,(MethodInfo *)0x0);
                pVStack_26 = (Vector3__Array *)func_?();
                Cube::Cube__ctor((Cube *)pVStack_26,pBVar49,pBVar51,(MethodInfo *)0x0);
                cVar21 = true;
                if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
                pos_11.z = uStack_28._2_2_;
                pos_11._0_4_ = uStack_41;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          ((MVCubeModelBase *)pVStack_27,pos_11,(CubeBase *)pVStack_26,
                           (MethodInfo *)0x0);
                pCVar25 = (this->fields).movingEdgeCube;
                pCVar52 = (CubePickingInfo *)func_?();
                CubePickingInfo::CubePickingInfo__ctor_1(pCVar52,pCVar25,(MethodInfo *)0x0);
                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                cVar21 = true;
                if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
                pos_05.z = uStack_28._2_2_;
                pos_05._0_4_ = uStack_41;
                pCVar53 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar22,pos_05,(MethodInfo *)0x0)
                ;
                pCVar53 = Cube::Cube_Clone_1(pCVar53,(MethodInfo *)0x0);
                cVar21 = true;
                if (pCVar52 == (CubePickingInfo *)0x0) goto code_?;
                (pCVar52->fields).cube = pCVar53;
                func_?();
                *(Vector3__Array **)&(pCVar52->fields).iLocalPos = uStack_41;
                (pCVar52->fields).iLocalPos.z = uStack_28._2_2_;
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if ((pCVar25 == (CubePickingInfo *)0x0) ||
                   (cVar21 = true,
                   (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
                goto code_?;
                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                          ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                           (pCVar25->fields).cube,(MethodInfo *)0x0);
                (this->fields).movingEdgeCube = pCVar52;
                func_?();
                pVStack_26 = (Vector3__Array *)(this->fields).movingEdgeCube;
                cVar21 = true;
                if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
                pVVar30 = Cube::Cube_GetFaceAxis
                                    (&VStack_31,pVStack_26->max_length,(MethodInfo *)0x0);
                axis.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                axis._0_9_ = *(unkbyte9 *)pVVar30;
                axis.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                Cube::Cube_MoveFace((CubePickingInfo *)pVStack_26,-1.0,axis,&CStack_16,
                                    (MethodInfo *)0x0);
                pVStack_27 = (Vector3__Array *)(this->fields).movingEdgeCube;
                cVar21 = true;
                if (pVStack_27 == (Vector3__Array *)0x0) goto code_?;
                pVStack_26 = (Vector3__Array *)
                             Cube::Cube_GetFaceAxis
                                       (&VStack_31,pVStack_27->max_length,(MethodInfo *)0x0);
                pCVar25 = (this->fields).movingEdgeCube;
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                pvVar55 = (void *)(((MVCubeModelBase__Fields *)&pVStack_26->bounds)->_)._.id;
                axis_01.z._1_1_ = (char)((uint)pvVar55 >> 8);
                axis_01._0_9_ = *(unkbyte9 *)pVStack_26;
                axis_01.z._2_2_ = (short)((uint)pvVar55 >> 0x10);
                Cube::Cube_MoveVertex
                          ((CubePickingInfo *)pVStack_27,-0.75,axis_01,
                           (pCVar25->fields).pickedEdgeIndex0,(pCVar25->fields).pickedEdgeIndex1,
                           &CStack_16,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            VStack_31.z = (float)pVStack_27;
            VStack_31.y = -NAN;
            VStack_31.x = (float)TypeInfo__CanPerformCubeActionResult;
            str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&VStack_31,(MethodInfo *)0x0);
            uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
            uVar42 = (undefined2)((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >> 0x10);
            goto code_?;
          }
          if (pVStack_26 != (Vector3__Array *)0x2) {
            if (pVStack_26 != (Vector3__Array *)0x0) break;
            pVStack_27 = (Vector3__Array *)
                         CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                   (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
            pCVar25 = (this->fields).movingEdgeCube;
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pCVar53 = (pCVar25->fields).cube;
            cVar21 = true;
            if (pCVar53 == (Cube *)0x0) goto code_?;
            pVStack_26 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                   ((CubeBase *)pCVar53,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar19 = Cube::Cube_IsCollapsed(pVStack_26,(MethodInfo *)0x0);
            if ((bVar19 != 0) && (pVStack_27 == (Vector3__Array *)0x1)) {
              pCVar25 = (this->fields).movingEdgeCube;
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if ((pMVar22 == (MVCubeModelBase *)0x0) ||
                 (cVar21 = true, (this->fields).modelCursor == (ModelCursor3D *)0x0))
              goto code_?;
              pMVar43 = (MethodInfo *)0x0;
              showUnlockNotification = 0;
              pGVar24 = (pMVar22->fields)._.gameObject;
              goto code_?;
            }
            pCVar25 = (this->fields).movingEdgeCube;
            if (pVStack_27 != (Vector3__Array *)0x2) {
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,(pCVar25->fields).iLocalPos,AudioActions__Enum_FaceMoved,
                         (MethodInfo *)0x0);
              pCVar25 = (this->fields).movingEdgeCube;
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if ((pCVar25 == (CubePickingInfo *)0x0) ||
                 (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
              iVector.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
              iVector._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
              MVCubeModelBase::MVCubeModelBase_CornersChanged
                        (pMVar22,iVector,(pCVar25->fields).cube,(MethodInfo *)0x0);
              break;
            }
code_?:
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            cVar21 = true;
            if ((pMVar22 == (MVCubeModelBase *)0x0) ||
               (cVar21 = true, (this->fields).modelCursor == (ModelCursor3D *)0x0))
            goto code_?;
            iPos_01.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
            iPos_01._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                       (pMVar22->fields)._.gameObject,1,(MethodInfo *)0x0);
            break;
          }
          CVar56 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                             (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
          pCVar25 = (this->fields).movingEdgeCube;
          if (CVar56 == CanPerformCubeActionResult__Enum_Yes) {
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pVStack_26 = *(Vector3__Array **)&(pCVar25->fields).iLocalPos;
            iStack_57 = (int16_t)((uint)pVStack_26 >> 0x10);
            iVar15 = (pCVar25->fields).iLocalPos.z;
            pCVar25 = (this->fields).movingEdgeCube;
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pVStack_27 = (Vector3__Array *)(pCVar25->fields).pickedFace;
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            sVar58 = 0;
            sVar59 = 0;
            sVar60 = 0;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      ((IntVector *)&stack0xffffff6c,(int32_t)pVStack_26,CONCAT22(iVar15,iStack_57),
                       CONCAT22(uStack_4,iVar15),(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar30 = Cube::Cube_GetFaceAxis(&VStack_31,(Face__Enum)pVStack_27,(MethodInfo *)0x0);
            pCVar25 = (this->fields).movingEdgeCube;
            uVar61 = pVVar30->x;
            uVar62 = pVVar30->y;
            sVar58 = sVar58 - (short)(int)(float)uVar61;
            sVar59 = sVar59 - (short)(int)(float)uVar62;
            uStack_28 = (IndentArea *)
                        CONCAT22(sVar60 - (short)(int)pVVar30->z,(undefined2)uStack_28);
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pos_04.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
            pos_04._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,pos_04,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
            pCVar25 = (this->fields).movingEdgeCube;
            cVar21 = true;
            if ((pCVar25 == (CubePickingInfo *)0x0) ||
               (cVar21 = true,
               (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0))
            goto code_?;
            MVCubeModelBase::MVCubeModelBase_RemoveCube
                      ((e->fields)._TargetCubeModel_k__BackingField,(pCVar25->fields).iLocalPos,
                       (MethodInfo *)0x0);
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            cVar21 = true;
            if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
            pos_13.y = sVar59;
            pos_13.x = sVar58;
            pos_13.z._0_1_ = (char)((uint)uStack_28 >> 0x10);
            pos_13.z._1_1_ = (char)((uint)uStack_28 >> 0x18);
            pVVar48 = (Vector3__Array *)
                      MVCubeModelBase::MVCubeModelBase_GetCube(pMVar22,pos_13,(MethodInfo *)0x0);
            pVStack_27 = pVVar48;
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                               ((CubeBase *)pVVar48,(CubeBase *)0x0,(MethodInfo *)0x0);
            if (bVar19 == 0) {
              (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
              func_?();
            }
            else {
              pCVar25 = (this->fields).movingEdgeCube;
              pVVar48 = (Vector3__Array *)func_?();
              pVStack_26 = pVVar48;
              CubePickingInfo::CubePickingInfo__ctor_1
                        ((CubePickingInfo *)pVVar48,pCVar25,(MethodInfo *)0x0);
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar53 = Cube::Cube_Clone_1((Cube *)pVStack_27,(MethodInfo *)0x0);
              cVar21 = true;
              if (pVVar48 == (Vector3__Array *)0x0) goto code_?;
              (((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.id = (int32_t)pCVar53;
              func_?();
              pVVar48->vector[2].z = (float)CONCAT22(sVar59,sVar58);
              *(int16_t *)&pVVar48->vector[3].x = uStack_28._2_2_;
              (this->fields).movingEdgeCube = (CubePickingInfo *)pVVar48;
              func_?();
            }
            break;
          }
          cVar21 = true;
          if (((pCVar25 == (CubePickingInfo *)0x0) ||
              (cVar21 = true, (e->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0
              )) || (cVar21 = true, (this->fields).modelCursor == (ModelCursor3D *)0x0))
          goto code_?;
code_?:
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)(this->fields).modelCursor,(pCVar25->fields).iLocalPos,pGVar24,
                     showUnlockNotification,pMVar43);
          pCVar25 = (this->fields).movingEdgeCube;
          pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
          cVar21 = true;
          if ((pCVar25 == (CubePickingInfo *)0x0) ||
             (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
          pCVar53 = (this->fields).prevCubeState;
        }
        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                  (pMVar22,(pCVar25->fields).iLocalPos,pCVar53,(MethodInfo *)0x0);
        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
        func_?();
      }
      else {
        uVar50 = (this->fields).prevMaterial;
        pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar50);
        (this->fields).currentInternalState = 2;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (e,uVar50,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
        value = (WebHeaderCollection *)(this->fields).movingEdgeCube;
        if ((this->fields).edgeHasMoved == 0) {
          uVar1 = 0x1044;
          System.dll::System::Net::WebResponseStream::WebResponseStream_set_Headers
                    ((WebResponseStream *)e,value,(MethodInfo *)0x0);
          pCVar25 = (e->fields)._SelectedCube_k__BackingField;
          cVar21 = true;
          if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
          pos_10.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
          pos_10._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          uStack_6 = 2;
          EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
          cVar21 = true;
          if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
          iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar22,(MethodInfo *)0x0);
          CubeModelTool::CubeModelTool_SendCubeEvent(iVar45,EVar18,(MethodInfo *)0x0);
          if (EVar18 == EditCubeChange__Enum_None) {
            pCVar25 = (e->fields)._SelectedCube_k__BackingField;
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pVStack_26._0_2_ = (pCVar25->fields).iLocalPos.x;
            pVStack_26._2_2_ = (pCVar25->fields).iLocalPos.y;
            uStack_41 = (Vector3__Array *)
                        CONCAT22((pCVar25->fields).iLocalPos.z,(undefined2)uStack_41);
            pVStack_27 = (Vector3__Array *)
                         (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            localPos_03.z = (int16_t)pVStack_26;
            localPos_03._0_4_ = &stack0xffffff6c;
            IVar29 = Cube::Cube_GetCubePosAboveFace
                               (localPos_03,CONCAT22(uVar1,uStack_41._2_2_),
                                (MethodInfo *)pVStack_27);
            pVStack_26 = IVar29._0_4_;
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            pMVar20 = (this->fields).modelCursor;
            cVar21 = true;
            if ((pMVar22 == (MVCubeModelBase *)0x0) ||
               (cVar21 = true, pMVar20 == (ModelCursor3D *)0x0)) goto code_?;
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)pMVar20,*(IntVector *)pVStack_26,
                       (pMVar22->fields)._.gameObject,0,(MethodInfo *)0x0);
          }
          uStack_6 = 0xffffffff;
        }
        else {
          pVStack_27 = (Vector3__Array *)
                       CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                 (e,(CubePickingInfo *)value,(MethodInfo *)0x0);
          pCVar25 = (this->fields).movingEdgeCube;
          if (pVStack_27 == (Vector3__Array *)0x2) {
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
            cVar21 = true;
            if ((pMVar22 == (MVCubeModelBase *)0x0) ||
               (cVar21 = true, (this->fields).modelCursor == (ModelCursor3D *)0x0))
            goto code_?;
            ModelCursor::ModelCursor_SetErrorCursor
                      ((ModelCursor *)(this->fields).modelCursor,(pCVar25->fields).iLocalPos,
                       (pMVar22->fields)._.gameObject,1,(MethodInfo *)0x0);
          }
          else {
            cVar21 = true;
            if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
            pCVar53 = (pCVar25->fields).cube;
            cVar21 = true;
            if (pCVar53 == (Cube *)0x0) goto code_?;
            uVar1 = 0;
            uVar42 = 0;
            pVStack_26 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                   ((CubeBase *)pCVar53,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              in_stack_12 = 0x1044;
              func_?();
            }
            bVar19 = Cube::Cube_IsCollapsed(pVStack_26,(MethodInfo *)0x0);
            pCVar25 = (this->fields).movingEdgeCube;
            if (bVar19 == 0) {
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,(pCVar25->fields).iLocalPos,AudioActions__Enum_EdgeMoved,
                         (MethodInfo *)0x0);
              pCVar25 = (this->fields).movingEdgeCube;
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if ((pCVar25 == (CubePickingInfo *)0x0) ||
                 (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
              pCVar53 = (pCVar25->fields).cube;
              uVar63 = SUB41(pCVar53,0);
              uVar64 = (undefined1)((uint)pCVar53 >> 8);
              in_stack_12 = (undefined2)((uint)pCVar53 >> 0x10);
            }
            else {
              if (pVStack_27 == (Vector3__Array *)0x0) {
                cVar21 = true;
                if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          (e,(pCVar25->fields).iLocalPos,AudioActions__Enum_CubeRemoved,
                           (MethodInfo *)0x0);
                pCVar25 = (this->fields).movingEdgeCube;
                pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
                cVar21 = true;
                if ((pCVar25 == (CubePickingInfo *)0x0) ||
                   (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
                pos_15.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
                pos_15._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
                MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar22,pos_15,(MethodInfo *)0x0);
                goto code_?;
              }
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if ((pMVar22 == (MVCubeModelBase *)0x0) ||
                 (cVar21 = true, (this->fields).modelCursor == (ModelCursor3D *)0x0))
              goto code_?;
              ModelCursor::ModelCursor_SetErrorCursor
                        ((ModelCursor *)(this->fields).modelCursor,(pCVar25->fields).iLocalPos,
                         (pMVar22->fields)._.gameObject,0,(MethodInfo *)0x0);
              pCVar25 = (this->fields).movingEdgeCube;
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              pIVar46 = &(pCVar25->fields).iLocalPos;
              uVar1 = pIVar46->x;
              uVar42 = pIVar46->y;
              iVar15 = (pCVar25->fields).iLocalPos.z;
              uVar63 = (undefined1)iVar15;
              uVar64 = (undefined1)((ushort)iVar15 >> 8);
              pos_14.z._1_1_ = uVar64;
              pos_14._0_5_ = *(undefined5 *)pIVar46;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos_14,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
              pCVar25 = (this->fields).movingEdgeCube;
              pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
              cVar21 = true;
              if ((pCVar25 == (CubePickingInfo *)0x0) ||
                 (cVar21 = true, pMVar22 == (MVCubeModelBase *)0x0)) goto code_?;
            }
            iVector_02.z._1_1_ = (char)((ushort)(pCVar25->fields).iLocalPos.z >> 8);
            iVector_02._0_5_ = *(undefined5 *)&(pCVar25->fields).iLocalPos;
            MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                      (pMVar22,iVector_02,(Cube *)CONCAT22(uVar42,uVar1),
                       (MethodInfo *)CONCAT22(in_stack_12,CONCAT11(uVar64,uVar63)));
          }
        }
code_?:
        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
        func_?();
        (this->fields).edgeHasMoved = 0;
      }
    }
    break;
  case 1:
    if ((this->fields).currentInternalState == 1) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
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
      if ((bVar19 == 0) ||
         (bVar19 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar19 == 0)) {
code_?:
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar19 != 0) &&
           (pVStack_26 = (Vector3__Array *)
                         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0),
           _UNK_? < (float)pVStack_26 - (this->fields).prevMouseUpTime)) {
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
            pVStack_26 = (Vector3__Array *)((uint)fVar3 & _UNK_?);
            pVStack_27 = (Vector3__Array *)
                         MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            if (((float)pVStack_26 != 0.0) || ((float)((uint)pVStack_27 & _UNK_?) != 0.0)) {
              pCVar25 = (this->fields).prevSelectedCube;
              cVar21 = true;
              if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
              pVStack_27 = (Vector3__Array *)(pCVar25->fields).cube;
              pVStack_26 = (Vector3__Array *)(((this->fields).prevSelectedCube)->fields).pickedFace;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar50 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                 ((CubeBase *)pVStack_27,(Face__Enum)pVStack_26,(MethodInfo *)0x0);
              pVStack_27 = (Vector3__Array *)CONCAT31(pVStack_27._1_3_,uVar50);
              pMVar65 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              cVar21 = true;
              if (pMVar65 == (MVNetworkGame *)0x0) goto code_?;
              this_00 = (pMVar65->fields)._MaterialRepository_k__BackingField;
              cVar21 = true;
              if (this_00 == (MVMaterialRepository *)0x0) goto code_?;
              bVar19 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                 (this_00,(uint8_t)pVStack_27,(MethodInfo *)0x0);
              if (bVar19 == 0) {
                pCVar25 = (this->fields).prevSelectedCube;
                goto code_?;
              }
              uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
              (this->fields).prevMaterial = uVar50;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (e,(uint8_t)pVStack_27,(MethodInfo *)0x0);
              (this->fields).movingEdgeCube = (this->fields).prevSelectedCube;
              func_?();
              (this->fields).currentInternalState = 0;
              (this->fields).deltaAccum = 0.0;
              UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                        (0,(MethodInfo *)0x0);
            }
          }
        }
      }
      else {
        (this->fields).currentInternalState = 3;
      }
    }
    else {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 == 0) goto code_?;
      uStack_6 = 0;
      EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
      pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
      cVar21 = true;
      if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
      iVar45 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar22,(MethodInfo *)0x0);
      CubeModelTool::CubeModelTool_SendCubeEvent(iVar45,EVar18,(MethodInfo *)0x0);
      if (EVar18 == EditCubeChange__Enum_None) {
        pCVar25 = (e->fields)._SelectedCube_k__BackingField;
        cVar21 = true;
        if (pCVar25 == (CubePickingInfo *)0x0) goto code_?;
        pVStack_26._0_2_ = (pCVar25->fields).iLocalPos.x;
        pVStack_26._2_2_ = (pCVar25->fields).iLocalPos.y;
        uStack_41 = (Vector3__Array *)CONCAT22((pCVar25->fields).iLocalPos.z,(undefined2)uStack_41);
        pVStack_27 = (Vector3__Array *)
                     (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        localPos_00.z = (int16_t)pVStack_26;
        localPos_00._0_4_ = &stack0xffffff6c;
        IVar29 = Cube::Cube_GetCubePosAboveFace
                           (localPos_00,CONCAT22(in_stack_66,uStack_41._2_2_),
                            (MethodInfo *)pVStack_27);
        pVStack_26 = IVar29._0_4_;
        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
        pMVar20 = (this->fields).modelCursor;
        cVar21 = true;
        if ((pMVar22 == (MVCubeModelBase *)0x0) || (cVar21 = true, pMVar20 == (ModelCursor3D *)0x0))
        goto code_?;
        iPos_00.z._1_1_ = (char)((ushort)*(undefined2 *)&pVStack_26->monitor >> 8);
        iPos_00._0_5_ = *(undefined5 *)pVStack_26;
        ModelCursor::ModelCursor_SetErrorCursor
                  ((ModelCursor *)pMVar20,iPos_00,(pMVar22->fields)._.gameObject,0,(MethodInfo *)0x0
                  );
        uStack_6 = 0xffffffff;
      }
      else {
        bVar39 = true;
        uStack_6 = 0xffffffff;
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
      cVar21 = true;
      if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
      bVar19 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                         ((pMVar22->fields)._.gameObject,(IntVector *)&puStack_14,(MethodInfo *)0x0)
      ;
      if ((bVar19 != 0) &&
         (requestedCubePos_01.z = iVar15, requestedCubePos_01._0_4_ = puStack_14,
         CVar56 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                            (e,requestedCubePos_01,(MethodInfo *)0x0),
         CVar56 == CanPerformCubeActionResult__Enum_Yes)) {
        pos_09.z = iVar15;
        pos_09._0_4_ = puStack_14;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
        puVar67 = puStack_14;
        pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
        uStack_41 = (Vector3__Array *)CONCAT22(iVar15,(undefined2)uStack_41);
        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVStack_26 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                               ((MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVStack_27 = (Vector3__Array *)
                     MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                     CubeDataPacker_CornersToByteArray(pVStack_26,(MethodInfo *)0x0);
        uVar50 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        pVStack_26 = (Vector3__Array *)CONCAT31(pVStack_26._1_3_,uVar50);
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pBVar49 = Cube::Cube_CreateMaterialArray((uint8_t)pVStack_26,(MethodInfo *)0x0);
        pVStack_26 = (Vector3__Array *)func_?();
        Cube::Cube__ctor((Cube *)pVStack_26,(Byte__Array *)pVStack_27,pBVar49,(MethodInfo *)0x0);
        cVar21 = true;
        if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
        pos_01.z._0_1_ = (char)((uint)uStack_41 >> 0x10);
        pos_01._0_4_ = puVar67;
        pos_01.z._1_1_ = (char)((uint)uStack_41 >> 0x18);
        MVCubeModelBase::MVCubeModelBase_AddCube
                  (pMVar22,pos_01,(CubeBase *)pVStack_26,(MethodInfo *)0x0);
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
  pVStack_26 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
  pMVar22 = (e->fields)._TargetCubeModel_k__BackingField;
  cVar21 = true;
  if (pMVar22 == (MVCubeModelBase *)0x0) goto code_?;
  pVVar68 = (Vector3__Array *)(pMVar22->fields)._.gameObject;
  pVVar69 = (Vector3__Array *)(this->fields).currentInternalState;
  pVStack_27 = pVVar68;
  if (pVVar48 == (Vector3__Array *)0x0) {
    pFVar70 = (pMVar20->fields)._.faceCursor;
    if (pVStack_26 != (Vector3__Array *)0x0) {
      cVar21 = true;
      if (pFVar70 == (FaceCursor *)0x0) goto code_?;
      pGVar24 = (pFVar70->fields).gameObject;
      cVar21 = true;
      if (pGVar24 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,1,(MethodInfo *)0x0);
      pFVar70 = (pMVar20->fields)._.faceCursor;
      pVVar68 = pVStack_26;
      goto joined_?;
    }
    cVar21 = true;
    if (pFVar70 == (FaceCursor *)0x0) goto code_?;
    pGVar24 = (pFVar70->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar24,0,(MethodInfo *)0x0);
    pIVar23 = (pMVar20->fields).indentArea;
    cVar21 = true;
    if (pIVar23 == (IndentArea *)0x0) goto code_?;
    pGVar24 = (pIVar23->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar24,0,(MethodInfo *)0x0);
  }
  else {
    uStack_28 = (pMVar20->fields).indentArea;
    cVar21 = true;
    if (uStack_28 == (IndentArea *)0x0) goto code_?;
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
    pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.id;
    fStack_71 = (float)pVVar48->max_length;
    fVar3 = pVVar48->vector[2].z;
    iVar15 = *(int16_t *)&pVVar48->vector[3].x;
    uStack_41._2_2_ = iVar15;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVector_03.z._0_1_ = (char)uStack_41._2_2_;
    iVector_03._0_4_ = fVar3;
    iVector_03.z._1_1_ = (char)((ushort)uStack_41._2_2_ >> 8);
    uStack_41 = Cube::Cube_GetFaceVerticesWorld
                          ((GameObject *)pVVar68,pCVar53,(Face__Enum)fStack_71,iVector_03,
                           (MethodInfo *)0x0);
    this_03 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar24 = (uStack_28->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    this_04 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar24,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    cVar21 = true;
    if (this_04 == (MeshFilter *)0x0) goto code_?;
    this_05 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                        (this_04,(MethodInfo *)0x0);
    cVar21 = true;
    if (this_05 == (Mesh *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_05,(MethodInfo *)0x0);
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    cVar21 = true;
    if (this_03 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,0,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,3,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,2,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,2,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,1,pMVar43->klass->rgctx_data[0xe].method);
    }
    pMVar43 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar72 = &(this_03->fields)._version;
    *piVar72 = *piVar72 + 1;
    pMVar73 = (this_03->fields)._items;
    uVar74 = (this_03->fields)._size;
    cVar21 = true;
    if (pMVar73 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
    goto code_?;
    if (uVar74 < pMVar73->max_length) {
      (this_03->fields)._size = uVar74 + 1;
      cVar21 = uVar74 == pMVar73->max_length;
      if (pMVar73->max_length <= uVar74) goto code_?;
      (&pMVar73->vector[0].index)[uVar74] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_03,0,pMVar43->klass->rgctx_data[0xe].method);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
              (this_05,uStack_41,(MethodInfo *)0x0);
    value_02 = IndentArea::IndentArea_SetUVs(uStack_28,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(this_05,value_02,(MethodInfo *)0x0);
    pMVar73 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                        (this_03,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
              (this_05,(Int32__Array *)pMVar73,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
              (this_05,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds(this_05,(MethodInfo *)0x0)
    ;
    cVar21 = true;
    if (uStack_41 == (Vector3__Array *)0x0) goto code_?;
    cVar21 = uStack_41->max_length == 2;
    if (uStack_41->max_length < 3) goto code_?;
    uVar75 = uStack_41->vector[0].x;
    uVar76 = uStack_41->vector[0].y;
    uVar77 = uStack_41->vector[2].x;
    uVar78 = uStack_41->vector[2].y;
    fVar3 = ((float)uVar78 - (float)uVar76) * _UNK_?;
    cVar21 = '\x01';
    if (uStack_41->max_length == 0) goto code_?;
    uVar79 = uStack_41->vector[0].x;
    uVar80 = uStack_41->vector[0].y;
    fStack_71 = (float)uVar79 + ((float)uVar77 - (float)uVar75) * _UNK_?;
    fStack_81 = uStack_41->vector[0].z +
                (uStack_41->vector[2].z - uStack_41->vector[0].z) * _UNK_?;
    pGVar24 = (uStack_28->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar24,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar83 = (pVVar82->oneVector).x;
    uVar84 = (pVVar82->oneVector).y;
    fVar40 = (uStack_28->fields).size;
    fVar85 = (pVVar82->oneVector).z * fVar40;
    cVar21 = true;
    if (pTVar34 == (Transform *)0x0) goto code_?;
    value_00.y._0_2_ = SUB42((float)uVar84 * fVar40,0);
    value_00.x = (float)uVar83 * fVar40;
    value_00.y._2_2_ = (short)((uint)((float)uVar84 * fVar40) >> 0x10);
    value_00.z._0_1_ = SUB41(fVar85,0);
    value_00.z._1_1_ = (char)((uint)fVar85 >> 8);
    value_00.z._2_2_ = (short)((uint)fVar85 >> 0x10);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar34,value_00,(MethodInfo *)0x0);
    pGVar24 = (uStack_28->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar24,(MethodInfo *)0x0);
    pVVar68 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (this_05,(MethodInfo *)0x0);
    cVar21 = true;
    if (pVVar68 == (Vector3__Array *)0x0) goto code_?;
    cVar21 = '\x01';
    if (pVVar68->max_length == 0) goto code_?;
    cVar21 = true;
    if (pTVar34 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        (&VStack_31,pTVar34,pVVar68->vector[0],(MethodInfo *)0x0);
    uVar86 = pVVar30->x;
    uVar87 = pVVar30->y;
    fVar40 = pVVar30->z;
    pGVar24 = (uStack_28->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar24,(MethodInfo *)0x0);
    pVVar68 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                        (this_05,(MethodInfo *)0x0);
    cVar21 = true;
    if (pVVar68 == (Vector3__Array *)0x0) goto code_?;
    cVar21 = pVVar68->max_length == 2;
    if (pVVar68->max_length < 3) goto code_?;
    cVar21 = true;
    if (pTVar34 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        (&VStack_31,pTVar34,pVVar68->vector[2],(MethodInfo *)0x0);
    uVar88 = pVVar30->x;
    uVar89 = pVVar30->y;
    fVar85 = ((float)uVar88 - (float)uVar86) * _UNK_?;
    fVar90 = (pVVar30->z - fVar40) * _UNK_?;
    uStack_41 = (Vector3__Array *)(((float)uVar89 - (float)uVar87) * _UNK_? + (float)uVar87);
    pGVar24 = (uStack_28->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    pTVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar24,(MethodInfo *)0x0);
    cVar21 = true;
    if (pTVar34 == (Transform *)0x0) goto code_?;
    pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff80,pTVar34,(MethodInfo *)0x0);
    VStack_31.x = pVVar30->x;
    VStack_31.y = pVVar30->y;
    uVar91 = pVVar48->vector[0].z;
    uVar92 = pVVar48->vector[1].x;
    VStack_31.z = pVVar30->z +
                  (fStack_81 - (fVar90 + fVar40)) + pVVar48->vector[1].y * _UNK_?;
    fVar3 = VStack_31.y +
             (((float)uVar80 + fVar3) - (float)uStack_41) + (float)uVar92 * _UNK_?;
    pMVar20 = (ModelCursor3D *)&UNK_?;
    value_01.y._0_2_ = SUB42(fVar3,0);
    value_01.x = VStack_31.x + (fStack_71 - (fVar85 + (float)uVar86)) + (float)uVar91 * _UNK_?
    ;
    value_01.y._2_2_ = (int16_t)((uint)fVar3 >> 0x10);
    value_01.z._0_2_ = SUB42(VStack_31.z,0);
    value_01.z._2_2_ = (short)((uint)VStack_31.z >> 0x10);
    pVVar69 = (Vector3__Array *)VStack_31.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar34,value_01,(MethodInfo *)0x0);
    pFVar70 = (pMVar20->fields)._.faceCursor;
    cVar21 = true;
    if (pFVar70 == (FaceCursor *)0x0) goto code_?;
    pGVar24 = (pFVar70->fields).gameObject;
    cVar21 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar24,1,(MethodInfo *)0x0);
    pFVar70 = (pMVar20->fields)._.faceCursor;
    pVVar68 = pVVar48;
joined_?:
    cVar21 = true;
    if (pFVar70 == (FaceCursor *)0x0) goto code_?;
    FaceCursor::FaceCursor_UpdateCursor
              (pFVar70,(CubePickingInfo *)pVVar68,(GameObject *)pVStack_27,(MethodInfo *)0x0);
  }
  this_01 = (pMVar20->fields)._.errorCursor;
  cVar21 = this_01 == (CellCursor *)0x0;
  if (!(bool)cVar21) {
    CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
    pVVar68 = pVStack_26;
    if (pVVar69 == (Vector3__Array *)0x3) {
      fVar85 = 0.0;
      fVar3 = 0.0;
      fVar40 = 0.0;
      bVar19 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffff3c,(MethodInfo *)0x0);
      if (bVar19 == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_8;
        return;
      }
      pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      cVar21 = pGVar93 == (GameEventManager *)0x0;
      if (!(bool)cVar21) {
        pGVar94 = (pGVar93->fields).AvatarCommandsBuildMode;
        cVar21 = pGVar94 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0;
        if (!(bool)cVar21) {
          pGVar95 = (pGVar94->fields).LaserCommands;
          cVar21 = pGVar95 ==
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0;
          if (!(bool)cVar21) {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                      (pGVar95,0.2,(MethodInfo *)0x0);
            pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            cVar21 = pGVar93 == (GameEventManager *)0x0;
            if (!(bool)cVar21) {
              pGVar94 = (pGVar93->fields).AvatarCommandsBuildMode;
              cVar21 = pGVar94 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0;
              if (!(bool)cVar21) {
                pGVar95 = (pGVar94->fields).LaserCommands;
                cVar21 = pGVar95 ==
                         (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
                ;
                if (!(bool)cVar21) {
                  to_00.y = fVar40;
                  to_00.x = fVar3;
                  to_00.z = fVar85;
                  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                            (pGVar95,to_00,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_8;
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (pVVar48 == (Vector3__Array *)0x0) {
        if (!bVar39) {
          if (pVStack_26 == (Vector3__Array *)0x0) goto code_?;
          pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          cVar21 = pGVar93 == (GameEventManager *)0x0;
          if (!(bool)cVar21) {
            pGVar94 = (pGVar93->fields).AvatarCommandsBuildMode;
            cVar21 = pGVar94 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0;
            if (!(bool)cVar21) {
              pGVar95 = (pGVar94->fields).LaserCommands;
              cVar21 = pGVar95 ==
                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0;
              if (!(bool)cVar21) {
                GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                          (pGVar95,*(Vector3 *)&pVVar68->vector[1].z,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_8;
                return;
              }
            }
          }
          goto code_?;
        }
        pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        FVar47 = pVVar48->max_length;
        pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.id;
        fVar3 = pVVar48->vector[2].z;
        iVar15 = SUB42(fVar3,0);
        uVar1 = (undefined2)((uint)fVar3 >> 0x10);
        uStack_41 = (Vector3__Array *)
                    CONCAT22(*(int16_t *)&pVVar48->vector[3].x,(undefined2)uStack_41);
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar68 = pVStack_27;
        iVector_01.y = uVar1;
        iVector_01.x = iVar15;
        iVector_01.z = uStack_41._2_2_;
        pVVar69 = Cube::Cube_GetFaceVerticesWorld
                            ((GameObject *)pVStack_27,pCVar53,FVar47,iVector_01,(MethodInfo *)0x0);
        cVar21 = true;
        if (pVVar69 == (Vector3__Array *)0x0) goto code_?;
        cVar21 = '\x01';
        if (pVVar69->max_length == 0) goto code_?;
        cVar21 = pVVar69->max_length == 1;
        if (pVVar69->max_length < 2) goto code_?;
        VStack_31.x = pVVar69->vector[1].x;
        VStack_31.y = pVVar69->vector[1].y;
        VStack_31.z = pVVar69->vector[1].z;
        uVar96 = pVVar69->vector[0].x;
        uVar97 = pVVar69->vector[0].y;
        fVar3 = VStack_31.x + (float)uVar96;
        fVar40 = VStack_31.y + (float)uVar97;
        fVar85 = VStack_31.z + pVVar69->vector[0].z;
        cVar21 = pVVar69->max_length == 2;
        if (pVVar69->max_length < 3) goto code_?;
        VStack_31.x = pVVar69->vector[2].x;
        VStack_31.y = pVVar69->vector[2].y;
        VStack_31.z = pVVar69->vector[2].z;
        fVar3 = VStack_31.x + fVar3;
        fVar40 = VStack_31.y + fVar40;
        cVar21 = pVVar69->max_length == 3;
        if (pVVar69->max_length < 4) goto code_?;
        VStack_31.x = pVVar69->vector[3].x;
        VStack_31.y = pVVar69->vector[3].y;
        fVar3 = (VStack_31.x + fVar3) * _UNK_?;
        pVVar98 = (Vector3__Array *)((VStack_31.y + fVar40) * _UNK_?);
        pVVar69 = (Vector3__Array *)((pVVar69->vector[3].z + VStack_31.z + fVar85) * _UNK_?);
        VStack_31.z = (float)pVVar69;
        pVStack_27 = pVVar98;
        pVStack_26 = pVVar69;
        if (pVVar48->vector[0].x == 0.0) {
          fStack_99 = fVar3;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar100 = (pVVar82->upVector).x;
          uVar101 = (pVVar82->upVector).y;
          VStack_31.z = (pVVar82->upVector).z + (float)pVStack_26;
          VStack_31.y = (float)uVar101 + (float)pVStack_27;
          VStack_31.x = (float)uVar100 + fVar3;
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          start_00.y._0_1_ = (char)pVVar98;
          start_00.x = fStack_99;
          start_00.y._1_1_ = (char)((uint)pVVar98 >> 8);
          start_00.y._2_2_ = (short)((uint)pVVar98 >> 0x10);
          start_00.z = (float)pVVar69;
          end_00.z = VStack_31.z;
          end_00.x = VStack_31.x;
          end_00.y = VStack_31.y;
          color_00.g = (float)_UNK_?;
          color_00.r = (float)_UNK_?;
          color_00.b = (float)_UNK_?;
          color_00.a._0_1_ = (char)_UNK_?;
          color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
          color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                    (start_00,end_00,color_00,(MethodInfo *)0x0);
        }
        else {
          pCVar53 = (Cube *)(((MVCubeModelBase__Fields *)&pVVar48->bounds)->_)._.id;
          fStack_81 = (float)pVVar48->max_length;
          fVar40 = pVVar48->vector[0].x;
          fVar85 = pVVar48->vector[2].z;
          iVar15 = SUB42(fVar85,0);
          uVar1 = (undefined2)((uint)fVar85 >> 0x10);
          uStack_41 = (Vector3__Array *)
                      CONCAT22(*(int16_t *)&pVVar48->vector[3].x,(undefined2)uStack_41);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVector_00.y = uVar1;
          iVector_00.x = iVar15;
          iVector_00.z = uStack_41._2_2_;
          pVVar68 = Cube::Cube_GetEdgeVerticesWorld
                              ((GameObject *)pVVar68,pCVar53,(Face__Enum)fStack_81,
                               (Edge__Enum)fVar40,iVector_00,(MethodInfo *)0x0);
          if (*(bool *)&pVVar48->vector[0].y == 0) {
            cVar21 = true;
            if (pVVar68 == (Vector3__Array *)0x0) goto code_?;
            if (*(bool *)((int)&pVVar48->vector[0].y + 1) == 0) {
              cVar21 = '\x01';
              if (pVVar68->max_length == 0) goto code_?;
              cVar21 = pVVar68->max_length == 1;
              if (pVVar68->max_length < 2) goto code_?;
              VStack_31.x = pVVar68->vector[1].x;
              VStack_31.y = pVVar68->vector[1].y;
              uVar102 = pVVar68->vector[0].x;
              uVar103 = pVVar68->vector[0].y;
              fVar90 = (pVVar68->vector[1].z + pVVar68->vector[0].z) * _UNK_?;
              fStack_99 = (VStack_31.x + (float)uVar102) * _UNK_?;
              fVar104 = (VStack_31.y + (float)uVar103) * _UNK_?;
            }
            else {
              cVar21 = pVVar68->max_length == 1;
              if (pVVar68->max_length < 2) goto code_?;
              uVar105 = pVVar68->vector[1].x;
              fVar104 = pVVar68->vector[1].y;
              fVar90 = pVVar68->vector[1].z;
              fStack_99 = (float)uVar105;
            }
          }
          else {
            cVar21 = true;
            if (pVVar68 == (Vector3__Array *)0x0) goto code_?;
            cVar21 = '\x01';
            if (pVVar68->max_length == 0) goto code_?;
            uVar106 = pVVar68->vector[0].x;
            uVar107 = pVVar68->vector[0].y;
            fVar90 = pVVar68->vector[0].z;
            iStack_108 = (int16_t)uVar107;
            iStack_57 = (int16_t)((uint)uVar107 >> 0x10);
            fVar40 = pVVar68->vector[0].x;
            fVar85 = pVVar68->vector[0].y;
            fVar104 = (float)uVar106;
            fVar109 = fVar90;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar82 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar110 = (pVVar82->upVector).x;
            uVar111 = (pVVar82->upVector).y;
            VStack_31.z = (pVVar82->upVector).z + fVar109;
            VStack_31.y = (float)uVar111 + fVar85;
            VStack_31.x = (float)uVar110 + fVar40;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            start.y._0_2_ = iStack_108;
            start.x = fVar104;
            start.y._2_2_ = iStack_57;
            start.z = fVar90;
            end.z = VStack_31.z;
            end.x = VStack_31.x;
            end.y = VStack_31.y;
            color.g = (float)_UNK_?;
            color.r = (float)_UNK_?;
            color.b = (float)_UNK_?;
            color.a._0_1_ = (char)_UNK_?;
            color.a._1_1_ = (char)((uint)_UNK_? >> 8);
            color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                      (start,end,color,(MethodInfo *)0x0);
            fStack_99 = (float)uVar106;
            fVar104 = (float)uVar107;
          }
          pVVar69 = (Vector3__Array *)(((float)pVStack_26 - fVar90) * _UNK_? + fVar90);
          fStack_99 = (fVar3 - fStack_99) * _UNK_? + fStack_99;
          pVVar98 = (Vector3__Array *)(((float)pVStack_27 - fVar104) * _UNK_? + fVar104);
          VStack_31.z = (float)pVVar69;
        }
        pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        cVar21 = true;
        if (pGVar93 == (GameEventManager *)0x0) goto code_?;
        pGVar94 = (pGVar93->fields).AvatarCommandsBuildMode;
        cVar21 = true;
        if (pGVar94 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)
        goto code_?;
        pGVar95 = (pGVar94->fields).LaserCommands;
        cVar21 = true;
        if (pGVar95 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
        goto code_?;
        to.y._0_2_ = (short)pVVar98;
        to.x = fStack_99;
        to.y._2_2_ = (short)((uint)pVVar98 >> 0x10);
        to.z._0_1_ = (char)pVVar69;
        to.z._1_1_ = (char)((uint)pVVar69 >> 8);
        to.z._2_2_ = (short)((uint)pVVar69 >> 0x10);
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar95,to,(MethodInfo *)0x0);
        pGVar93 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
      }
      cVar21 = pGVar93 == (GameEventManager *)0x0;
      if (!(bool)cVar21) {
        pGVar94 = (pGVar93->fields).AvatarCommandsBuildMode;
        cVar21 = pGVar94 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0;
        if (!(bool)cVar21) {
          pGVar95 = (pGVar94->fields).LaserCommands;
          cVar21 = pGVar95 ==
                   (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0;
          if (!(bool)cVar21) {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                      (pGVar95,0.2,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_8;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  do {
    func_?();
    func_?();
code_?:
    func_?();
  } while (extraout_ECX != 1 && cVar21 == '\0');
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

