
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
    if (this_01 != (ModelCursor3D *)0x0) {
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
  puStack_5 = &stack0xffffff00;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff00;
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
    func_?(&StringLiteral_____EditCube_multi_change___poin);
    func_?();
    in_stack_8 = 0x10ef;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_9 = 0xcc;
    in_stack_10 = 0x81;
    in_stack_11 = 0x10ee;
    func_?();
    in_stack_12 = 0x98;
    func_?();
    in_stack_13 = 0x80f0;
    in_stack_14 = 0x10ee;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_____EditCube_WithinBounds___unlo);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  bStack_15 = 0;
  pMVar16 = (MVCubeModelBase *)0x0;
  iVar17 = 0;
  CStack_18 = CubeOutOfBoundState__Enum_WithinBounds;
  puStack_19 = (undefined *)0x0;
  if (cRam_? == '\0') {
    in_stack_8 = 0x103d;
    func_?();
    cRam_? = '\x01';
  }
  pCVar20 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar20->cubeChange != 0) &&
     (pCVar20->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    in_stack_8 = (undefined2)((uint)pCVar20->cubeChange >> 0x10);
    (*(pCVar20->OnEditCubeChange->fields)._._.invoke_impl)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EVar21 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar22;
    goto code_?;
  }
  pMVar23 = (this->fields).modelCursor;
  pVVar24 = pVStack_25;
  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
  pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
  if (pMVar23 != (ModelCursor3D *)0x0) {
    if ((pMVar23->fields).indentArea == (IndentArea *)0x0 ||
        (this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_8 = 0x103d;
        func_?();
      }
      bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        in_stack_8 = 0;
        pVStack_31 = (Vector3__Array *)
                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)pVStack_31;
      }
      if (cRam_? == '\0') {
        in_stack_8 = 0x103d;
        func_?();
        cRam_? = '\x01';
      }
      pVVar24 = pVStack_25;
      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
      pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
      if (e != (CubeModelingStateMachine *)0x0) {
        if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
           ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
        pMVar32 = (e->fields)._TargetCubeModel_k__BackingField;
        uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
        pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
        if (pMVar32 != (MVCubeModelBase *)0x0) {
          pVStack_25 = (Vector3__Array *)(pMVar32->fields)._.gameObject;
          pCVar33 = (e->fields)._SelectedCube_k__BackingField;
          pVStack_31 = *(Vector3__Array **)&(pCVar33->fields).iLocalPos;
          uStack_34 = (Byte__Array *)CONCAT22((pCVar33->fields).iLocalPos.z,(undefined2)uStack_34);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IVar35.z = uStack_34._2_2_;
          IVar35._0_4_ = pVStack_31;
          pVVar36 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              ((Vector3 *)&stack0xffffff48,(GameObject *)pVStack_25,IVar35,
                               (MethodInfo *)0x0);
          in_stack_13 = 0;
          in_stack_14 = 0;
          uVar37 = pVVar36->x;
          uVar38 = pVVar36->y;
          uStack_28._0_2_ = (short)uVar38;
          uStack_28._2_2_ = (undefined2)((uint)uVar38 >> 0x10);
          uStack_30._0_2_ = SUB42(pVVar36->z,0);
          uStack_30._2_2_ = (undefined2)((uint)pVVar36->z >> 0x10);
          fStack_39 = (float)uVar37;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          pVVar24 = pVStack_25;
          uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
          fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
          if (this_02 != (MainCameraManager *)0x0) {
            pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0);
            pVVar24 = pVStack_25;
            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
            fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
            if (pTVar40 != (Transform *)0x0) {
              pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffff48,pTVar40,(MethodInfo *)0x0);
              uVar41 = pVVar36->y;
              uStack_26._0_2_ = (short)uVar41;
              uStack_26._2_2_ = (short)((uint)uVar41 >> 0x10);
              sStack_42 = SUB42(pVVar36->z,0);
              uStack_43 = (undefined2)((uint)pVVar36->z >> 0x10);
              fVar44 = (float10)func_?();
              pMVar32 = (e->fields)._TargetCubeModel_k__BackingField;
              pVStack_31 = (Vector3__Array *)(float)fVar44;
              pVVar24 = pVStack_25;
              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
              if (pMVar32 != (MVCubeModelBase *)0x0) {
                in_stack_8 = (undefined2)((uint)pMVar32 >> 0x10);
                puVar45 = (undefined8 *)(*(pMVar32->klass->vtable).get_Scale.methodPtr)();
                fStack_46 = (float)((ulonglong)*puVar45 >> 0x20);
                pMVar23 = (this->fields).modelCursor;
                pVVar24 = pVStack_25;
                if (fStack_46 * _UNK_? < (float)pVStack_31) {
                  (this->fields).mouseSensitivity = 0.1325;
                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                  pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                  if ((pMVar23 != (ModelCursor3D *)0x0) &&
                     (pIVar47 = (pMVar23->fields).indentArea,
                     uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                     pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                     pIVar47 != (IndentArea *)0x0)) {
                    (pIVar47->fields).size = 1.0;
                    goto code_?;
                  }
                }
                else {
                  (this->fields).mouseSensitivity = 0.0225;
                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                  pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                  if ((pMVar23 != (ModelCursor3D *)0x0) &&
                     (pIVar47 = (pMVar23->fields).indentArea,
                     uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                     pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                     pIVar47 != (IndentArea *)0x0)) {
                    (pIVar47->fields).size = 0.5;
code_?:
                    cStack_48 = '\0';
                    uStack_34 = (Byte__Array *)((uint)uStack_34 & 0xffffff);
                    uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                    switch((this->fields).currentInternalState) {
                    case 0:
                      if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar22 == 0) {
                          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          pVStack_31 = (Vector3__Array *)
                                       MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                                 (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                          pVVar24 = (Vector3__Array *)
                                    MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                              (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                          fVar49 = (float)pVStack_31 * _UNK_?;
                          sStack_42 = 0;
                          uStack_43 = 0;
                          uStack_26 = (float)pVVar24 * _UNK_?;
                          pMStack_50 = (e->fields)._TargetCubeModel_k__BackingField;
                          pVStack_31 = (Vector3__Array *)(this->fields).mouseSensitivity;
                          pMStack_51 = (MVCubeModelBase *)(this->fields).movingEdgeCube;
                          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                          fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                          if (pMStack_51 != (MVCubeModelBase *)0x0) {
                            pMStack_52 = (MVCubeModelBase *)
                                         CONCAT31(pMStack_52._1_3_,
                                                  (pMStack_51->fields)._._.inputState);
                            pVStack_25 = (Vector3__Array *)
                                         CONCAT31((int3)((uint)pVVar24 >> 8),
                                                  (((this->fields).movingEdgeCube)->fields).
                                                  pickedEdgeIndex1);
                            fVar29 = uStack_26;
                            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0)
                            {
                              in_stack_9 = SUB41(TypeInfo__SharedCubeFunctions,0);
                              in_stack_10 =
                                   (undefined1)((uint)TypeInfo__SharedCubeFunctions >> 8);
                              in_stack_11 =
                                   (undefined2)((uint)TypeInfo__SharedCubeFunctions >> 0x10);
                              in_stack_12 = 0x81;
                              func_?();
                              fVar29 = uStack_26;
                            }
                            uStack_26._2_2_ = (short)((uint)fVar29 >> 0x10);
                            uStack_26._0_2_ = SUB42(fVar29,0);
                            mousePositionDelta.y._0_2_ = (short)uStack_26;
                            mousePositionDelta.x = fVar49;
                            mousePositionDelta.y._2_2_ = uStack_26._2_2_;
                            mousePositionDelta.z._2_2_ = uStack_43;
                            mousePositionDelta.z._0_2_ = sStack_42;
                            uStack_26 = fVar29;
                            pVVar27 = (Vector3__Array *)
                                      SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                                (pMStack_50,(CubePickingInfo *)pMStack_51,
                                                 mousePositionDelta,&(this->fields).delta,
                                                 &(this->fields).deltaAccum,(float)pVStack_31,
                                                 &bStack_15,(bool)pMStack_52,(bool)pVStack_25,
                                                 (EditCubeChange__Enum *)&stack0xffffff6c,
                                                 (MethodInfo *)0x0);
                            uVar53 = (undefined2)((uint)pVStack_31 >> 0x10);
                            pVStack_31 = pVVar27;
                            if (pVVar27 == (Vector3__Array *)0x0) {
                              pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                              pVVar24 = pVStack_25;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
                              iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar16,(MethodInfo *)0x0);
                              in_stack_9 = (undefined1)EVar21;
                              in_stack_10 = (undefined1)(EVar21 >> 8);
                              in_stack_11 = (undefined2)(EVar21 >> 0x10);
                              in_stack_12 = (bool)iVar54;
                              in_stack_13 = 0xdbf5;
                              in_stack_14 = 0x103d;
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar54,EVar21,(MethodInfo *)0x0);
                            }
                            if ((bStack_15 & (this->fields).edgeHasMoved == 0) != 0) {
                              (this->fields).edgeHasMoved = 1;
                            }
                            pVVar24 = pVStack_25;
                            if (pVStack_31 == (Vector3__Array *)0x1) {
                              pCVar33 = (this->fields).movingEdgeCube;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = uStack_30;
                              if (pCVar33 != (CubePickingInfo *)0x0) {
                                pVStack_31 = *(Vector3__Array **)&(pCVar33->fields).iLocalPos;
                                uStack_34._2_2_ = (pCVar33->fields).iLocalPos.z;
                                pVStack_25 = (Vector3__Array *)
                                             (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_01.z = (int16_t)pVStack_31;
                                localPos_01._0_4_ = &uStack_26;
                                IVar35 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_01,CONCAT22(uVar53,uStack_34._2_2_),
                                                    (MethodInfo *)pVStack_25);
                                pIVar55 = IVar35._0_4_;
                                uStack_56 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                              **)pIVar55;
                                uStack_34 = (Byte__Array *)
                                            CONCAT22(pIVar55->z,(undefined2)uStack_34);
                                pMStack_52 = (MVCubeModelBase *)
                                             CubeModelingStateMachine::
                                             CubeModelingStateMachine_CanAddCubeAt
                                                       (e,*pIVar55,(this->fields).movingEdgeCube,
                                                        (MethodInfo *)0x0);
                                if (pMStack_52 == (MVCubeModelBase *)0x0) {
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pMVar16 != (MVCubeModelBase *)0x0) {
                                    pos_01.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                    pos_01._0_4_ = uStack_56;
                                    pos_01.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                    pVStack_31 = (Vector3__Array *)
                                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                                           (pMVar16,pos_01,(MethodInfo *)0x0);
                                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    bVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_op_Equality
                                                       ((CubeBase *)pVStack_31,(CubeBase *)0x0,
                                                        (MethodInfo *)0x0);
                                    if (bVar22 == 0) goto code_?;
                                    pos_05.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                    pos_05._0_4_ = uStack_56;
                                    pos_05.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_05,AudioActions__Enum_FaceMoved,
                                               (MethodInfo *)0x0);
                                    pMStack_52 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pVStack_25 = (Vector3__Array *)(pCVar33->fields).cube;
                                      pVStack_31 = (Vector3__Array *)
                                                   (((this->fields).movingEdgeCube)->fields).
                                                   pickedFace;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVStack_31 = Cube::Cube_GetCorners
                                                             ((Cube *)pVStack_25,
                                                              (Face__Enum)pVStack_31,
                                                              (MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVStack_25 = (Vector3__Array *)
                                                   MVWorldObject.dll::MV::WorldObject::
                                                   CubeDataPacker::CubeDataPacker_CornersToByteArray
                                                             (pVStack_31,(MethodInfo *)0x0);
                                      uVar57 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      pVStack_31 = (Vector3__Array *)
                                                   CONCAT31(pVStack_31._1_3_,uVar57);
                                      pVStack_31 = (Vector3__Array *)
                                                   Cube::Cube_CreateMaterialArray
                                                             (uVar57,(MethodInfo *)0x0);
                                      pMStack_51 = (MVCubeModelBase *)func_?();
                                      pVVar24 = pVStack_25;
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                      if (pMStack_51 != (MVCubeModelBase *)0x0) {
                                        Cube::Cube__ctor((Cube *)pMStack_51,
                                                         (Byte__Array *)pVStack_25,
                                                         (Byte__Array *)pVStack_31,(MethodInfo *)0x0
                                                        );
                                        pVVar24 = pVStack_25;
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30)
                                        ;
                                        if (pMStack_52 != (MVCubeModelBase *)0x0) {
                                          pos_06.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                          pos_06._0_4_ = uStack_56;
                                          pos_06.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    (pMStack_52,pos_06,(CubeBase *)pMStack_51,
                                                     (MethodInfo *)0x0);
                                          pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                          pVVar24 = pVStack_25;
                                          pVVar27 = (Vector3__Array *)
                                                    CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                          fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                   (int16_t)uStack_30);
                                          if (pMVar16 != (MVCubeModelBase *)0x0) {
                                            iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                               (pMVar16,(MethodInfo *)0x0);
                                            CubeModelTool::CubeModelTool_SendCubeEvent
                                                      (iVar54,EditCubeChange__Enum_CubeAdded,
                                                       (MethodInfo *)0x0);
                                            pVStack_31 = (Vector3__Array *)
                                                         (this->fields).movingEdgeCube;
                                            pMStack_50 = (MVCubeModelBase *)func_?();
                                            pVVar24 = pVStack_25;
                                            pVVar27 = (Vector3__Array *)
                                                      CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                            fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                     (int16_t)uStack_30);
                                            if (pMStack_50 != (MVCubeModelBase *)0x0) {
                                              CubePickingInfo::CubePickingInfo__ctor_1
                                                        ((CubePickingInfo *)pMStack_50,
                                                         (CubePickingInfo *)pVStack_31,
                                                         (MethodInfo *)0x0);
                                              pMVar16 = (e->fields)._TargetCubeModel_k__BackingField
                                              ;
                                              pVVar24 = pVStack_25;
                                              pVVar27 = (Vector3__Array *)
                                                        CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                              fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                       (int16_t)uStack_30);
                                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                                pos_17.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                                pos_17._0_4_ = uStack_56;
                                                pos_17.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                                pCVar58 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                    (pMVar16,pos_17,
                                                                     (MethodInfo *)0x0);
                                                pCVar58 = Cube::Cube_Clone_1(pCVar58,(MethodInfo *)
                                                                                     0x0);
                                                (pMStack_50->fields)._._.id = (int32_t)pCVar58;
                                                func_?();
                                                (pMStack_50->fields)._._.position.y =
                                                     (float)uStack_56;
                                                *(int16_t *)&(pMStack_50->fields)._._.position.z =
                                                     uStack_34._2_2_;
                                                pCVar33 = (this->fields).movingEdgeCube;
                                                pVVar24 = pVStack_25;
                                                pVVar27 = (Vector3__Array *)
                                                          CONCAT22(uStack_28._2_2_,(short)uStack_28)
                                                ;
                                                fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                         (int16_t)uStack_30);
                                                if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                                   (pVVar27 = (Vector3__Array *)
                                                              CONCAT22(uStack_28._2_2_,
                                                                       (short)uStack_28),
                                                   fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                            (int16_t)uStack_30),
                                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                                   (MVCubeModelBase *)0x0)) {
                                                  iVector_05.z._1_1_ =
                                                       (char)((ushort)(pCVar33->fields).iLocalPos.z
                                                             >> 8);
                                                  iVector_05._0_5_ =
                                                       *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             iVector_05,(pCVar33->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  (this->fields).movingEdgeCube =
                                                       (CubePickingInfo *)pMStack_50;
                                                  func_?();
                                                  pVStack_31 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  pVVar24 = pVStack_25;
                                                  pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                           (int16_t)uStack_30);
                                                  if (pVStack_31 != (Vector3__Array *)0x0) {
                                                    pVVar36 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffff48
                                                                         ,pVStack_31->max_length,
                                                                         (MethodInfo *)0x0);
                                                    Cube::Cube_MoveFace((CubePickingInfo *)
                                                                        pVStack_31,-0.75,*pVVar36,
                                                                        &CStack_18,(MethodInfo *)0x0
                                                                       );
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
                                else {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_59 = TypeInfo__CanPerformCubeActionResult;
                                  pSVar60 = mscorlib.dll::System::Enum::Enum_ToString
                                                      ((Enum *)&pCStack_59,(MethodInfo *)0x0);
                                  uVar61 = SUB41(pSVar60,0);
                                  uVar62 = (undefined1)((uint)pSVar60 >> 8);
                                  uVar63 = (undefined2)((uint)pSVar60 >> 0x10);
                                  uVar64 = SUB41(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                                  uVar65 = (undefined1)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >>
                                           8);
                                  uVar53 = (undefined2)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >>
                                           0x10);
code_?:
                                  mscorlib.dll::System::String::String_Concat_3
                                            ((String *)CONCAT22(uVar53,CONCAT11(uVar65,uVar64)),
                                             (String *)CONCAT22(uVar63,CONCAT11(uVar62,uVar61)),
                                             (MethodInfo *)0x0);
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pMVar23 = (this->fields).modelCursor;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if ((pMVar16 != (MVCubeModelBase *)0x0) &&
                                     (pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     pMVar23 != (ModelCursor3D *)0x0)) {
                                    iPos_00.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                    iPos_00._0_4_ = uStack_56;
                                    iPos_00.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)pMVar23,iPos_00,
                                               (pMVar16->fields)._.gameObject,
                                               pMStack_52 == (MVCubeModelBase *)0x2,
                                               (MethodInfo *)0x0);
                                    fVar49 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    pVVar66 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
joined_?:
                                      pVVar24 = pVStack_25;
                                      pVVar27 = pVVar66;
                                      fVar29 = fVar49;
                                      if (pMVar16 != (MVCubeModelBase *)0x0) {
                                        pCVar58 = (pCVar33->fields).cube;
                                        uVar64 = SUB41(pCVar58,0);
                                        uVar65 = (undefined1)((uint)pCVar58 >> 8);
                                        uVar53 = (undefined2)((uint)pCVar58 >> 0x10);
code_?:
                                        iVector_06.z._1_1_ =
                                             (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                        iVector_06._0_5_ =
                                             *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   iVector_06,
                                                   (Cube *)CONCAT22(uVar53,CONCAT11(uVar65,uVar64)),
                                                   (MethodInfo *)0x0);
                                        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                        func_?();
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if (pVStack_31 == (Vector3__Array *)0x4) {
                              pCVar33 = (this->fields).movingEdgeCube;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pCVar33 != (CubePickingInfo *)0x0) {
                                pVStack_31 = *(Vector3__Array **)&(pCVar33->fields).iLocalPos;
                                uStack_34._2_2_ = (pCVar33->fields).iLocalPos.z;
                                pVStack_25 = (Vector3__Array *)
                                             (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_00.z = (int16_t)pVStack_31;
                                localPos_00._0_4_ = &uStack_26;
                                IVar35 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_00,CONCAT22(uVar53,uStack_34._2_2_),
                                                    (MethodInfo *)pVStack_25);
                                pIVar55 = IVar35._0_4_;
                                uStack_56 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                              **)pIVar55;
                                uStack_34 = (Byte__Array *)
                                            CONCAT22(pIVar55->z,(undefined2)uStack_34);
                                pMStack_52 = (MVCubeModelBase *)
                                             CubeModelingStateMachine::
                                             CubeModelingStateMachine_CanAddCubeAt
                                                       (e,*pIVar55,(this->fields).movingEdgeCube,
                                                        (MethodInfo *)0x0);
                                if (pMStack_52 != (MVCubeModelBase *)0x0) {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_59 = TypeInfo__CanPerformCubeActionResult;
                                  pSVar60 = mscorlib.dll::System::Enum::Enum_ToString
                                                      ((Enum *)&pCStack_59,(MethodInfo *)0x0);
                                  uVar61 = SUB41(pSVar60,0);
                                  uVar62 = (undefined1)((uint)pSVar60 >> 8);
                                  uVar63 = (undefined2)((uint)pSVar60 >> 0x10);
                                  uVar64 = SUB41(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                                  uVar65 = (undefined1)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >>
                                           8);
                                  uVar53 = (undefined2)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >>
                                           0x10);
                                  goto code_?;
                                }
                                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                pVVar24 = pVStack_25;
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                if (pMVar16 != (MVCubeModelBase *)0x0) {
                                  pos_00.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                  pos_00._0_4_ = uStack_56;
                                  pos_00.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                  pVStack_31 = (Vector3__Array *)
                                               MVCubeModelBase::MVCubeModelBase_GetCube
                                                         (pMVar16,pos_00,(MethodInfo *)0x0);
                                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  bVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                           CubeBase_op_Equality
                                                     ((CubeBase *)pVStack_31,(CubeBase *)0x0,
                                                      (MethodInfo *)0x0);
                                  if (bVar22 == 0) goto code_?;
                                  pCVar33 = (this->fields).movingEdgeCube;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pCVar33 != (CubePickingInfo *)0x0) {
                                    pos_04.z._1_1_ =
                                         (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                    pos_04._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_04,AudioActions__Enum_CubeAdded,
                                               (MethodInfo *)0x0);
                                    pMStack_52 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pVStack_25 = (Vector3__Array *)(pCVar33->fields).cube;
                                      pVStack_31 = (Vector3__Array *)
                                                   (((this->fields).movingEdgeCube)->fields).
                                                   pickedFace;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVStack_31 = Cube::Cube_GetCorners
                                                             ((Cube *)pVStack_25,
                                                              (Face__Enum)pVStack_31,
                                                              (MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVStack_25 = (Vector3__Array *)
                                                   MVWorldObject.dll::MV::WorldObject::
                                                   CubeDataPacker::CubeDataPacker_CornersToByteArray
                                                             (pVStack_31,(MethodInfo *)0x0);
                                      uVar57 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      pVStack_31 = (Vector3__Array *)
                                                   CONCAT31(pVStack_31._1_3_,uVar57);
                                      pVStack_31 = (Vector3__Array *)
                                                   Cube::Cube_CreateMaterialArray
                                                             (uVar57,(MethodInfo *)0x0);
                                      pMStack_51 = (MVCubeModelBase *)func_?();
                                      pVVar24 = pVStack_25;
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                      if (pMStack_51 != (MVCubeModelBase *)0x0) {
                                        Cube::Cube__ctor((Cube *)pMStack_51,
                                                         (Byte__Array *)pVStack_25,
                                                         (Byte__Array *)pVStack_31,(MethodInfo *)0x0
                                                        );
                                        pVVar24 = pVStack_25;
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30)
                                        ;
                                        if (pMStack_52 != (MVCubeModelBase *)0x0) {
                                          pos_12.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                          pos_12._0_4_ = uStack_56;
                                          pos_12.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                          MVCubeModelBase::MVCubeModelBase_AddCube
                                                    (pMStack_52,pos_12,(CubeBase *)pMStack_51,
                                                     (MethodInfo *)0x0);
                                          pVStack_31 = (Vector3__Array *)
                                                       (this->fields).movingEdgeCube;
                                          pMStack_50 = (MVCubeModelBase *)func_?();
                                          pVVar24 = pVStack_25;
                                          pVVar27 = (Vector3__Array *)
                                                    CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                          fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                   (int16_t)uStack_30);
                                          if (pMStack_50 != (MVCubeModelBase *)0x0) {
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      ((CubePickingInfo *)pMStack_50,
                                                       (CubePickingInfo *)pVStack_31,
                                                       (MethodInfo *)0x0);
                                            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                            pVVar24 = pVStack_25;
                                            pVVar27 = (Vector3__Array *)
                                                      CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                            fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                     (int16_t)uStack_30);
                                            if (pMVar16 != (MVCubeModelBase *)0x0) {
                                              pos_16.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                              pos_16._0_4_ = uStack_56;
                                              pos_16.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                              pCVar58 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                  (pMVar16,pos_16,(MethodInfo *)0x0)
                                              ;
                                              pCVar58 = Cube::Cube_Clone_1(pCVar58,(MethodInfo *)0x0
                                                                          );
                                              (pMStack_50->fields)._._.id = (int32_t)pCVar58;
                                              func_?();
                                              (pMStack_50->fields)._._.position.y = (float)uStack_56
                                              ;
                                              *(int16_t *)&(pMStack_50->fields)._._.position.z =
                                                   uStack_34._2_2_;
                                              pCVar33 = (this->fields).movingEdgeCube;
                                              pVVar24 = pVStack_25;
                                              pVVar27 = (Vector3__Array *)
                                                        CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                              fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                       (int16_t)uStack_30);
                                              if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                                 (pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28),
                                                 fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                          (int16_t)uStack_30),
                                                 (e->fields)._TargetCubeModel_k__BackingField !=
                                                 (MVCubeModelBase *)0x0)) {
                                                iVector_04.z._1_1_ =
                                                     (char)((ushort)(pCVar33->fields).iLocalPos.z >>
                                                           8);
                                                iVector_04._0_5_ =
                                                     *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                          ((e->fields).
                                                           _TargetCubeModel_k__BackingField,
                                                           iVector_04,(pCVar33->fields).cube,
                                                           (MethodInfo *)0x0);
                                                (this->fields).movingEdgeCube =
                                                     (CubePickingInfo *)pMStack_50;
                                                func_?();
                                                pVStack_31 = (Vector3__Array *)
                                                             (this->fields).movingEdgeCube;
                                                pVVar24 = pVStack_25;
                                                pVVar27 = (Vector3__Array *)
                                                          CONCAT22(uStack_28._2_2_,(short)uStack_28)
                                                ;
                                                fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                         (int16_t)uStack_30);
                                                if (pVStack_31 != (Vector3__Array *)0x0) {
                                                  pVVar36 = Cube::Cube_GetFaceAxis
                                                                      ((Vector3 *)&stack0xffffff48,
                                                                       pVStack_31->max_length,
                                                                       (MethodInfo *)0x0);
                                                  axis.z._2_2_ = (short)((uint)pVVar36->z >> 0x10);
                                                  axis._0_10_ = *(unkbyte10 *)pVVar36;
                                                  Cube::Cube_MoveFace((CubePickingInfo *)pVStack_31,
                                                                      -1.0,axis,
                                                                      (CubeOutOfBoundState__Enum *)
                                                                      &puStack_19,(MethodInfo *)0x0)
                                                  ;
                                                  pVStack_31 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  pVVar24 = pVStack_25;
                                                  pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                           (int16_t)uStack_30);
                                                  if (pVStack_31 != (Vector3__Array *)0x0) {
                                                    pVVar36 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffff48
                                                                         ,pVStack_31->max_length,
                                                                         (MethodInfo *)0x0);
                                                    Cube::Cube_MoveEdge((CubePickingInfo *)
                                                                        pVStack_31,-0.75,*pVVar36,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&puStack_19,
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
                            else if (pVStack_31 == (Vector3__Array *)0x5) {
                              pCVar33 = (this->fields).movingEdgeCube;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pCVar33 != (CubePickingInfo *)0x0) {
                                pVStack_31 = *(Vector3__Array **)&(pCVar33->fields).iLocalPos;
                                uStack_34._2_2_ = (pCVar33->fields).iLocalPos.z;
                                pVStack_25 = (Vector3__Array *)
                                             (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos.z = (int16_t)pVStack_31;
                                localPos._0_4_ = &uStack_26;
                                IVar35 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos,CONCAT22(uVar53,uStack_34._2_2_),
                                                    (MethodInfo *)pVStack_25);
                                pIVar55 = IVar35._0_4_;
                                uStack_56 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                              **)pIVar55;
                                uStack_34 = (Byte__Array *)
                                            CONCAT22(pIVar55->z,(undefined2)uStack_34);
                                pMStack_52 = (MVCubeModelBase *)
                                             CubeModelingStateMachine::
                                             CubeModelingStateMachine_CanAddCubeAt
                                                       (e,*pIVar55,(this->fields).movingEdgeCube,
                                                        (MethodInfo *)0x0);
                                if (pMStack_52 == (MVCubeModelBase *)0x0) {
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pMVar16 != (MVCubeModelBase *)0x0) {
                                    pos.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                    pos._0_4_ = uStack_56;
                                    pos.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                    pVStack_31 = (Vector3__Array *)
                                                 MVCubeModelBase::MVCubeModelBase_GetCube
                                                           (pMVar16,pos,(MethodInfo *)0x0);
                                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    bVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_op_Equality
                                                       ((CubeBase *)pVStack_31,(CubeBase *)0x0,
                                                        (MethodInfo *)0x0);
                                    if (bVar22 == 0) goto code_?;
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pos_03.z._1_1_ =
                                           (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                      pos_03._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_03,AudioActions__Enum_CubeAdded,
                                                 (MethodInfo *)0x0);
                                      pMStack_52 = (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar33 = (this->fields).movingEdgeCube;
                                      pVVar24 = pVStack_25;
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                      if (pCVar33 != (CubePickingInfo *)0x0) {
                                        pVStack_25 = (Vector3__Array *)(pCVar33->fields).cube;
                                        pVStack_31 = (Vector3__Array *)
                                                     (((this->fields).movingEdgeCube)->fields).
                                                     pickedFace;
                                        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVStack_31 = Cube::Cube_GetCorners
                                                               ((Cube *)pVStack_25,
                                                                (Face__Enum)pVStack_31,
                                                                (MethodInfo *)0x0);
                                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                            cctor_finished_or_no_cctor == 0) {
                                          func_?();
                                        }
                                        pVStack_25 = (Vector3__Array *)
                                                     MVWorldObject.dll::MV::WorldObject::
                                                     CubeDataPacker::
                                                     CubeDataPacker_CornersToByteArray
                                                               (pVStack_31,(MethodInfo *)0x0);
                                        uVar57 = CubeModelingStateMachine::
                                                 CubeModelingStateMachine_get_CurrentMaterialId
                                                           (e,(MethodInfo *)0x0);
                                        pVStack_31 = (Vector3__Array *)
                                                     CONCAT31(pVStack_31._1_3_,uVar57);
                                        pVStack_31 = (Vector3__Array *)
                                                     Cube::Cube_CreateMaterialArray
                                                               (uVar57,(MethodInfo *)0x0);
                                        pMStack_51 = (MVCubeModelBase *)func_?();
                                        pVVar24 = pVStack_25;
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30)
                                        ;
                                        if (pMStack_51 != (MVCubeModelBase *)0x0) {
                                          Cube::Cube__ctor((Cube *)pMStack_51,
                                                           (Byte__Array *)pVStack_25,
                                                           (Byte__Array *)pVStack_31,
                                                           (MethodInfo *)0x0);
                                          pVVar24 = pVStack_25;
                                          pVVar27 = (Vector3__Array *)
                                                    CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                          fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                   (int16_t)uStack_30);
                                          if (pMStack_52 != (MVCubeModelBase *)0x0) {
                                            pos_11.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                            pos_11._0_4_ = uStack_56;
                                            pos_11.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                            MVCubeModelBase::MVCubeModelBase_AddCube
                                                      (pMStack_52,pos_11,(CubeBase *)pMStack_51,
                                                       (MethodInfo *)0x0);
                                            pVStack_31 = (Vector3__Array *)
                                                         (this->fields).movingEdgeCube;
                                            pMStack_50 = (MVCubeModelBase *)func_?();
                                            pVVar24 = pVStack_25;
                                            pVVar27 = (Vector3__Array *)
                                                      CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                            fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                     (int16_t)uStack_30);
                                            if (pMStack_50 != (MVCubeModelBase *)0x0) {
                                              CubePickingInfo::CubePickingInfo__ctor_1
                                                        ((CubePickingInfo *)pMStack_50,
                                                         (CubePickingInfo *)pVStack_31,
                                                         (MethodInfo *)0x0);
                                              pMVar16 = (e->fields)._TargetCubeModel_k__BackingField
                                              ;
                                              pVVar24 = pVStack_25;
                                              pVVar27 = (Vector3__Array *)
                                                        CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                              fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                       (int16_t)uStack_30);
                                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                                pos_15.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                                pos_15._0_4_ = uStack_56;
                                                pos_15.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                                pCVar58 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                    (pMVar16,pos_15,
                                                                     (MethodInfo *)0x0);
                                                pCVar58 = Cube::Cube_Clone_1(pCVar58,(MethodInfo *)
                                                                                     0x0);
                                                (pMStack_50->fields)._._.id = (int32_t)pCVar58;
                                                func_?();
                                                (pMStack_50->fields)._._.position.y =
                                                     (float)uStack_56;
                                                *(int16_t *)&(pMStack_50->fields)._._.position.z =
                                                     uStack_34._2_2_;
                                                pCVar33 = (this->fields).movingEdgeCube;
                                                pVVar24 = pVStack_25;
                                                pVVar27 = (Vector3__Array *)
                                                          CONCAT22(uStack_28._2_2_,(short)uStack_28)
                                                ;
                                                fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                         (int16_t)uStack_30);
                                                if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                                   (pVVar27 = (Vector3__Array *)
                                                              CONCAT22(uStack_28._2_2_,
                                                                       (short)uStack_28),
                                                   fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                            (int16_t)uStack_30),
                                                   (e->fields)._TargetCubeModel_k__BackingField !=
                                                   (MVCubeModelBase *)0x0)) {
                                                  iVector_03.z._1_1_ =
                                                       (char)((ushort)(pCVar33->fields).iLocalPos.z
                                                             >> 8);
                                                  iVector_03._0_5_ =
                                                       *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                                  MVCubeModelBase::
                                                  MVCubeModelBase_CornersChangedDone
                                                            ((e->fields).
                                                             _TargetCubeModel_k__BackingField,
                                                             iVector_03,(pCVar33->fields).cube,
                                                             (MethodInfo *)0x0);
                                                  (this->fields).movingEdgeCube =
                                                       (CubePickingInfo *)pMStack_50;
                                                  func_?();
                                                  pVStack_31 = (Vector3__Array *)
                                                               (this->fields).movingEdgeCube;
                                                  pVVar24 = pVStack_25;
                                                  pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                           (int16_t)uStack_30);
                                                  if (pVStack_31 != (Vector3__Array *)0x0) {
                                                    pVVar36 = Cube::Cube_GetFaceAxis
                                                                        ((Vector3 *)&stack0xffffff48
                                                                         ,pVStack_31->max_length,
                                                                         (MethodInfo *)0x0);
                                                    Cube::Cube_MoveFace((CubePickingInfo *)
                                                                        pVStack_31,-1.0,*pVVar36,
                                                                        (CubeOutOfBoundState__Enum *
                                                                        )&stack0xffffff34,
                                                                        (MethodInfo *)0x0);
                                                    pVStack_25 = (Vector3__Array *)
                                                                 (this->fields).movingEdgeCube;
                                                    pVVar24 = pVStack_25;
                                                    pVVar27 = (Vector3__Array *)
                                                              CONCAT22(uStack_28._2_2_,
                                                                       (short)uStack_28);
                                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                             (int16_t)uStack_30);
                                                    if (pVStack_25 != (Vector3__Array *)0x0) {
                                                      pVStack_31 = (Vector3__Array *)
                                                                   Cube::Cube_GetFaceAxis
                                                                             ((Vector3 *)
                                                                              &stack0xffffff48,
                                                                              pVStack_25->max_length
                                                                              ,(MethodInfo *)0x0);
                                                      pCVar33 = (this->fields).movingEdgeCube;
                                                      pVVar24 = pVStack_25;
                                                      pVVar27 = (Vector3__Array *)
                                                                CONCAT22(uStack_28._2_2_,
                                                                         (short)uStack_28);
                                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,
                                                                               (int16_t)uStack_30);
                                                      if (pCVar33 != (CubePickingInfo *)0x0) {
                                                        pCVar58 = ((CubePickingInfo__Fields *)
                                                                  &pVStack_31->bounds)->cube;
                                                        axis_00.z._1_1_ = (char)((uint)pCVar58 >> 8)
                                                        ;
                                                        axis_00._0_9_ = *(unkbyte9 *)pVStack_31;
                                                        axis_00.z._2_2_ =
                                                             (short)((uint)pCVar58 >> 0x10);
                                                        Cube::Cube_MoveVertex
                                                                  ((CubePickingInfo *)pVStack_25,
                                                                   -0.75,axis_00,
                                                                   (pCVar33->fields).
                                                                   pickedEdgeIndex0,
                                                                   (pCVar33->fields).
                                                                   pickedEdgeIndex1,
                                                                   (CubeOutOfBoundState__Enum *)
                                                                   &stack0xffffff34,
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
                                else {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_59 = TypeInfo__CanPerformCubeActionResult;
                                  pSVar60 = mscorlib.dll::System::Enum::Enum_ToString
                                                      ((Enum *)&pCStack_59,(MethodInfo *)0x0);
                                  mscorlib.dll::System::String::String_Concat_3
                                            (StringLiteral_____EditCube_OutOfBoundsAddVerte,pSVar60,
                                             (MethodInfo *)0x0);
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pMVar23 = (this->fields).modelCursor;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if ((pMVar16 != (MVCubeModelBase *)0x0) &&
                                     (pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     pMVar23 != (ModelCursor3D *)0x0)) {
                                    iPos.z = uStack_34._2_2_;
                                    iPos._0_4_ = uStack_56;
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)pMVar23,iPos,
                                               (pMVar16->fields)._.gameObject,
                                               pMStack_52 == (MVCubeModelBase *)0x2,
                                               (MethodInfo *)0x0);
                                    fVar49 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    pVVar66 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                      goto joined_?;
                                    }
                                  }
                                }
                              }
                            }
                            else if (pVStack_31 == (Vector3__Array *)0x2) {
                              CVar67 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_CanRemoveCubeAt
                                                 (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0)
                              ;
                              pCVar33 = (this->fields).movingEdgeCube;
                              pVVar24 = pVStack_25;
                              if (CVar67 == CanPerformCubeActionResult__Enum_Yes) {
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                if (pCVar33 != (CubePickingInfo *)0x0) {
                                  pVStack_31 = *(Vector3__Array **)&(pCVar33->fields).iLocalPos;
                                  uStack_30._0_2_ = (pCVar33->fields).iLocalPos.z;
                                  pCVar33 = (this->fields).movingEdgeCube;
                                  pVVar27 = pVStack_31;
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pCVar33 != (CubePickingInfo *)0x0) {
                                    pVStack_25 = (Vector3__Array *)(pCVar33->fields).pickedFace;
                                    pVVar27 = pVStack_31;
                                    if (cRam_? == '\0') {
                                      uStack_28 = pVStack_31;
                                      func_?();
                                      cRam_? = '\x01';
                                      pVVar27 = uStack_28;
                                    }
                                    uStack_28._2_2_ = (undefined2)((uint)pVVar27 >> 0x10);
                                    uStack_26._0_2_ = 0;
                                    uStack_26._2_2_ = 0;
                                    sStack_42 = 0;
                                    iVar54 = CONCAT22((int16_t)uStack_30,uStack_28._2_2_);
                                    uStack_28 = pVVar27;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              ((IntVector *)&uStack_26,(int32_t)pVStack_31,iVar54,
                                               CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                               (MethodInfo *)0x0);
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pVVar36 = Cube::Cube_GetFaceAxis
                                                        ((Vector3 *)&stack0xffffff48,
                                                         (Face__Enum)pVStack_25,(MethodInfo *)0x0);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    uVar68 = pVVar36->x;
                                    uVar69 = pVVar36->y;
                                    uStack_30 = pVVar36->z;
                                    uStack_28._0_2_ = (short)uVar69;
                                    uStack_28._2_2_ = (undefined2)((uint)uVar69 >> 0x10);
                                    uStack_26._0_2_ = (short)uStack_26 - (short)(int)(float)uVar68;
                                    uStack_26._2_2_ = uStack_26._2_2_ - (short)(int)(float)uVar69;
                                    uStack_34 = (Byte__Array *)
                                                CONCAT22(sStack_42 - (short)(int)uStack_30,
                                                         (undefined2)uStack_34);
                                    fStack_39 = (float)uVar68;
                                    pVVar24 = pVStack_25;
                                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                    pVVar27 = (Vector3__Array *)uVar69;
                                    fVar29 = uStack_30;
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pos_02.z._1_1_ =
                                           (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                      pos_02._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_02,AudioActions__Enum_CubeRemoved,
                                                 (MethodInfo *)0x0);
                                      pCVar33 = (this->fields).movingEdgeCube;
                                      pVVar24 = pVStack_25;
                                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      fVar29 = uStack_30;
                                      if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                         (uStack_26 = (float)CONCAT22(uStack_26._2_2_,
                                                                      (short)uStack_26),
                                         pVVar27 = (Vector3__Array *)
                                                   CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                         (e->fields)._TargetCubeModel_k__BackingField !=
                                         (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar33->fields).iLocalPos,(MethodInfo *)0x0);
                                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pVVar24 = pVStack_25;
                                        uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26
                                                                   );
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                        fVar29 = uStack_30;
                                        if (pMVar16 != (MVCubeModelBase *)0x0) {
                                          pos_14.y = uStack_26._2_2_;
                                          pos_14.x = (short)uStack_26;
                                          pos_14.z._0_1_ = (char)((uint)uStack_34 >> 0x10);
                                          pos_14.z._1_1_ = (char)((uint)uStack_34 >> 0x18);
                                          pMStack_52 = (MVCubeModelBase *)
                                                       MVCubeModelBase::MVCubeModelBase_GetCube
                                                                 (pMVar16,pos_14,(MethodInfo *)0x0);
                                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          bVar22 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                   CubeBase_op_Inequality
                                                             ((CubeBase *)pMStack_52,(CubeBase *)0x0
                                                              ,(MethodInfo *)0x0);
                                          if (bVar22 == 0) {
                                            (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                            func_?();
                                          }
                                          else {
                                            pVStack_31 = (Vector3__Array *)
                                                         (this->fields).movingEdgeCube;
                                            pMStack_51 = (MVCubeModelBase *)func_?();
                                            pVVar24 = pVStack_25;
                                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,
                                                                        (short)uStack_26);
                                            pVVar27 = (Vector3__Array *)
                                                      CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                            fVar29 = uStack_30;
                                            if (pMStack_51 == (MVCubeModelBase *)0x0)
                                            goto code_?;
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      ((CubePickingInfo *)pMStack_51,
                                                       (CubePickingInfo *)pVStack_31,
                                                       (MethodInfo *)0x0);
                                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0
                                               ) {
                                              func_?();
                                            }
                                            pCVar58 = Cube::Cube_Clone_1((Cube *)pMStack_52,
                                                                         (MethodInfo *)0x0);
                                            (pMStack_51->fields)._._.id = (int32_t)pCVar58;
                                            func_?();
                                            (pMStack_51->fields)._._.position.y =
                                                 (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                            *(int16_t *)&(pMStack_51->fields)._._.position.z =
                                                 uStack_34._2_2_;
                                            (this->fields).movingEdgeCube =
                                                 (CubePickingInfo *)pMStack_51;
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
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                if (((pCVar33 != (CubePickingInfo *)0x0) &&
                                    (pVVar27 = (Vector3__Array *)
                                               CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                    (e->fields)._TargetCubeModel_k__BackingField !=
                                    (MVCubeModelBase *)0x0)) &&
                                   (pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                   fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                   (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)(this->fields).modelCursor,
                                             (pCVar33->fields).iLocalPos,
                                             (GameObject *)
                                             CONCAT22(in_stack_14,in_stack_13),
                                             in_stack_12,
                                             (MethodInfo *)
                                             CONCAT22(in_stack_11,
                                                      CONCAT11(in_stack_10,in_stack_9))
                                            );
                                  pCVar33 = (this->fields).movingEdgeCube;
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                     (pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     (e->fields)._TargetCubeModel_k__BackingField !=
                                     (MVCubeModelBase *)0x0)) {
                                    pCVar58 = (this->fields).prevCubeState;
                                    uVar64 = SUB41(pCVar58,0);
                                    uVar65 = (undefined1)((uint)pCVar58 >> 8);
                                    uVar53 = (undefined2)((uint)pCVar58 >> 0x10);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                            else {
                              if (pVStack_31 != (Vector3__Array *)0x0) break;
                              pMStack_52 = (MVCubeModelBase *)
                                           CubeModelingStateMachine::
                                           CubeModelingStateMachine_CanRemoveCubeAt
                                                     (e,(this->fields).movingEdgeCube,
                                                      (MethodInfo *)0x0);
                              pCVar33 = (this->fields).movingEdgeCube;
                              pVVar24 = pVStack_25;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                 (pCVar58 = (pCVar33->fields).cube,
                                 pVVar27 = (Vector3__Array *)
                                           CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                 fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                 pCVar58 != (Cube *)0x0)) {
                                pVStack_31 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_get_Corners
                                                       ((CubeBase *)pCVar58,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                bVar22 = Cube::Cube_IsCollapsed(pVStack_31,(MethodInfo *)0x0);
                                pVVar24 = pVStack_25;
                                if ((bVar22 == 0) || (pMStack_52 != (MVCubeModelBase *)0x1)) {
                                  pCVar33 = (this->fields).movingEdgeCube;
                                  if (pMStack_52 == (MVCubeModelBase *)0x2) goto code_?;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pCVar33 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar33->fields).iLocalPos,
                                               AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
code_?:
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                       (pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                       fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                       (e->fields)._TargetCubeModel_k__BackingField !=
                                       (MVCubeModelBase *)0x0)) {
                                      iVector_02.z._1_1_ =
                                           (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                      iVector_02._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos
                                      ;
                                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 iVector_02,(pCVar33->fields).cube,(MethodInfo *)0x0
                                                );
                                      goto code_?;
                                    }
                                  }
                                }
                                else {
                                  pCVar33 = (this->fields).movingEdgeCube;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (((pCVar33 != (CubePickingInfo *)0x0) &&
                                      (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                      pMVar16 != (MVCubeModelBase *)0x0)) &&
                                     (pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    in_stack_9 = 0;
                                    in_stack_10 = 0;
                                    in_stack_11 = 0;
                                    in_stack_12 = 0;
                                    pGVar70 = (pMVar16->fields)._.gameObject;
                                    in_stack_13 = SUB42(pGVar70,0);
                                    in_stack_14 = (undefined2)((uint)pGVar70 >> 0x10);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          uVar57 = (this->fields).prevMaterial;
                          pVStack_31 = (Vector3__Array *)CONCAT31(pVStack_31._1_3_,uVar57);
                          (this->fields).currentInternalState = 2;
                          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                    (e,uVar57,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible
                                    (1,(MethodInfo *)0x0);
                          pCVar33 = (this->fields).movingEdgeCube;
                          if ((this->fields).edgeHasMoved == 0) {
                            uVar53 = 0x103d;
                            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing
                            ::PostProcessLayer::PostProcessLayer_set_sortedBundles
                                      ((PostProcessLayer *)e,
                                       (Dictionary_2_UnityEngine_Rendering_PostProcessing_PostProcessEvent_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef_
                                        *)pCVar33,(MethodInfo *)0x0);
                            pCVar33 = (e->fields)._SelectedCube_k__BackingField;
                            pVVar24 = pVStack_25;
                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                            if (pCVar33 != (CubePickingInfo *)0x0) {
                              pos_10.z._1_1_ = (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                              pos_10._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                        (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                              uStack_2 = 2;
                              EVar21 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                                 (e,(MethodInfo *)0x0);
                              pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                              pVVar24 = pVStack_25;
                              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                   (pMVar16,(MethodInfo *)0x0);
                                CubeModelTool::CubeModelTool_SendCubeEvent
                                          (iVar54,EVar21,(MethodInfo *)0x0);
                                if (EVar21 != EditCubeChange__Enum_None) {
code_?:
                                  uStack_2 = 0xffffffff;
                                  goto code_?;
                                }
                                pCVar33 = (e->fields)._SelectedCube_k__BackingField;
                                pVVar24 = pVStack_25;
                                uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                if (pCVar33 != (CubePickingInfo *)0x0) {
                                  pVStack_31._0_2_ = (pCVar33->fields).iLocalPos.x;
                                  pVStack_31._2_2_ = (pCVar33->fields).iLocalPos.y;
                                  uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                               *)CONCAT22((pCVar33->fields).iLocalPos.z,
                                                          (undefined2)uStack_56);
                                  pVStack_25 = (Vector3__Array *)
                                               (((e->fields)._SelectedCube_k__BackingField)->fields)
                                               .pickedFace;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  localPos_02.z = (int16_t)pVStack_31;
                                  localPos_02._0_4_ = &uStack_26;
                                  IVar35 = Cube::Cube_GetCubePosAboveFace
                                                     (localPos_02,CONCAT22(uVar53,uStack_56._2_2_),
                                                      (MethodInfo *)pVStack_25);
                                  pVStack_31 = IVar35._0_4_;
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pMVar23 = (this->fields).modelCursor;
                                  pVVar24 = pVStack_25;
                                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if ((pMVar16 != (MVCubeModelBase *)0x0) &&
                                     (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                     pVVar27 = (Vector3__Array *)
                                               CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     pMVar23 != (ModelCursor3D *)0x0)) {
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)pMVar23,*(IntVector *)pVStack_31,
                                               (pMVar16->fields)._.gameObject,0,(MethodInfo *)0x0);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            pVStack_25 = (Vector3__Array *)
                                         CubeModelingStateMachine::
                                         CubeModelingStateMachine_CanRemoveCubeAt
                                                   (e,pCVar33,(MethodInfo *)0x0);
                            pCVar33 = (this->fields).movingEdgeCube;
                            pVVar24 = pVStack_25;
                            if (pVStack_25 == (Vector3__Array *)0x2) {
                              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (((pCVar33 != (CubePickingInfo *)0x0) &&
                                  (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                  pMVar16 != (MVCubeModelBase *)0x0)) &&
                                 (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                 pVVar27 = (Vector3__Array *)
                                           CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                 fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                 (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)(this->fields).modelCursor,
                                           (pCVar33->fields).iLocalPos,
                                           (pMVar16->fields)._.gameObject,1,(MethodInfo *)0x0);
code_?:
                                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                func_?();
                                (this->fields).edgeHasMoved = 0;
                                break;
                              }
                            }
                            else {
                              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                 (pCVar58 = (pCVar33->fields).cube,
                                 uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                 pVVar27 = (Vector3__Array *)
                                           CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                 fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                 pCVar58 != (Cube *)0x0)) {
                                uVar64 = 0;
                                uVar65 = 0;
                                uVar53 = 0;
                                pVStack_31 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_get_Corners
                                                       ((CubeBase *)pCVar58,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  in_stack_8 = 0x103d;
                                  func_?();
                                }
                                bVar22 = Cube::Cube_IsCollapsed(pVStack_31,(MethodInfo *)0x0);
                                pCVar33 = (this->fields).movingEdgeCube;
                                pVVar24 = pVStack_25;
                                if (bVar22 == 0) {
                                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pCVar33 != (CubePickingInfo *)0x0) {
                                    pos_07.z._1_1_ =
                                         (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                    pos_07._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_07,AudioActions__Enum_EdgeMoved,
                                               (MethodInfo *)0x0);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                       (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26
                                                                   ),
                                       pVVar27 = (Vector3__Array *)
                                                 CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                       fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                       (e->fields)._TargetCubeModel_k__BackingField !=
                                       (MVCubeModelBase *)0x0)) {
                                      pCVar58 = (pCVar33->fields).cube;
                                      uVar61 = SUB41(pCVar58,0);
                                      uVar62 = (undefined1)((uint)pCVar58 >> 8);
                                      in_stack_8 = (undefined2)((uint)pCVar58 >> 0x10);
code_?:
                                      iVector_01.z._1_1_ =
                                           (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                      iVector_01._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos
                                      ;
                                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 iVector_01,
                                                 (Cube *)CONCAT22(uVar53,CONCAT11(uVar65,uVar64)),
                                                 (MethodInfo *)
                                                 CONCAT22(in_stack_8,CONCAT11(uVar62,uVar61))
                                                );
                                      goto code_?;
                                    }
                                  }
                                }
                                else if (pVStack_25 == (Vector3__Array *)0x0) {
                                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (pCVar33 != (CubePickingInfo *)0x0) {
                                    pos_08.z._1_1_ =
                                         (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                    pos_08._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_08,AudioActions__Enum_CubeRemoved,
                                               (MethodInfo *)0x0);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                       (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26
                                                                   ),
                                       pVVar27 = (Vector3__Array *)
                                                 CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                       fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                       (e->fields)._TargetCubeModel_k__BackingField !=
                                       (MVCubeModelBase *)0x0)) {
                                      pos_19.z._1_1_ =
                                           (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                      pos_19._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                ((e->fields)._TargetCubeModel_k__BackingField,pos_19
                                                 ,(MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                  }
                                }
                                else {
                                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (((pCVar33 != (CubePickingInfo *)0x0) &&
                                      (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                      pMVar16 != (MVCubeModelBase *)0x0)) &&
                                     (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                     pVVar27 = (Vector3__Array *)
                                               CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,
                                               (pCVar33->fields).iLocalPos,
                                               (pMVar16->fields)._.gameObject,0,(MethodInfo *)0x0);
                                    pCVar33 = (this->fields).movingEdgeCube;
                                    pVVar24 = pVStack_25;
                                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    if (pCVar33 != (CubePickingInfo *)0x0) {
                                      pIVar55 = &(pCVar33->fields).iLocalPos;
                                      uVar71 = pIVar55->x;
                                      uVar53 = pIVar55->y;
                                      uVar64 = (undefined1)uVar71;
                                      uVar65 = (undefined1)((ushort)uVar71 >> 8);
                                      iVar17 = (pCVar33->fields).iLocalPos.z;
                                      uVar61 = (undefined1)iVar17;
                                      uVar62 = (undefined1)((ushort)iVar17 >> 8);
                                      pos_18.z._1_1_ = uVar62;
                                      pos_18._0_5_ = *(undefined5 *)pIVar55;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_18,AudioActions__Enum_FaceMoved,
                                                 (MethodInfo *)0x0);
                                      pCVar33 = (this->fields).movingEdgeCube;
                                      pVVar24 = pVStack_25;
                                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                      if ((pCVar33 != (CubePickingInfo *)0x0) &&
                                         (uStack_26 = (float)CONCAT22(uStack_26._2_2_,
                                                                      (short)uStack_26),
                                         pVVar27 = (Vector3__Array *)
                                                   CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                         fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30
                                                                 ),
                                         (e->fields)._TargetCubeModel_k__BackingField !=
                                         (MVCubeModelBase *)0x0)) goto code_?;
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
                      uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                      if ((this->fields).currentInternalState == 1) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar22 != 0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible
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
                        bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar22 != 0) {
                          bVar22 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
                          if (bVar22 != 0) {
                            (this->fields).currentInternalState = 3;
                            uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                            break;
                          }
                        }
                      }
                      else {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar22 != 0) {
                          uStack_2 = 0;
                          EVar21 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                             (e,(MethodInfo *)0x0);
                          pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                          pVVar24 = pVStack_25;
                          uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                          fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                          if (pMVar16 != (MVCubeModelBase *)0x0) {
                            iVar54 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                               (pMVar16,(MethodInfo *)0x0);
                            uVar53 = 0;
                            CubeModelTool::CubeModelTool_SendCubeEvent
                                      (iVar54,EVar21,(MethodInfo *)0x0);
                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                            if (EVar21 != EditCubeChange__Enum_None) {
                              cStack_48 = '\x01';
                              uStack_2 = 0xffffffff;
                              uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              break;
                            }
                            pCVar33 = (e->fields)._SelectedCube_k__BackingField;
                            pVVar24 = pVStack_25;
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                            if (pCVar33 != (CubePickingInfo *)0x0) {
                              pVStack_31._0_2_ = (pCVar33->fields).iLocalPos.x;
                              pVStack_31._2_2_ = (pCVar33->fields).iLocalPos.y;
                              uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                           *)CONCAT22((pCVar33->fields).iLocalPos.z,
                                                      (undefined2)uStack_56);
                              pVStack_25 = (Vector3__Array *)
                                           (((e->fields)._SelectedCube_k__BackingField)->fields).
                                           pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_03.z._0_1_ = (char)pVStack_31;
                              localPos_03._0_4_ = &uStack_26;
                              localPos_03.z._1_1_ = (char)((uint)pVStack_31 >> 8);
                              IVar35 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_03,CONCAT22(uVar53,uStack_56._2_2_),
                                                  (MethodInfo *)pVStack_25);
                              pVStack_31 = IVar35._0_4_;
                              pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                              pMVar23 = (this->fields).modelCursor;
                              pVVar24 = pVStack_25;
                              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if ((pMVar16 != (MVCubeModelBase *)0x0) &&
                                 (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                 pVVar27 = (Vector3__Array *)
                                           CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                 fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                 pMVar23 != (ModelCursor3D *)0x0)) {
                                iPos_02.z._1_1_ =
                                     (char)((ushort)*(int16_t *)&pVStack_31->monitor >> 8);
                                iPos_02._0_5_ = *(undefined5 *)pVStack_31;
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)pMVar23,iPos_02,
                                           (pMVar16->fields)._.gameObject,0,(MethodInfo *)0x0);
                                uStack_2 = 0xffffffff;
                                uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
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
                      bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                      if (bVar22 != 0) {
                        pVStack_31 = (Vector3__Array *)
                                     UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                               ((MethodInfo *)0x0);
                        uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                        uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                        if (_UNK_? < (float)pVStack_31 - (this->fields).prevMouseUpTime) {
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                          uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                          if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
                            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pVStack_25 = (Vector3__Array *)
                                         MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                                   (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                            pVStack_31 = (Vector3__Array *)
                                         MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                                   (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                            if (((float)((uint)pVStack_25 & _UNK_?) != 0.0) ||
                               (uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                               (float)((uint)pVStack_31 & _UNK_?) != 0.0)) {
                              pCVar33 = (this->fields).prevSelectedCube;
                              pVVar24 = pVStack_25;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pCVar33 != (CubePickingInfo *)0x0) {
                                pVStack_25 = (Vector3__Array *)(pCVar33->fields).cube;
                                pVStack_31 = (Vector3__Array *)
                                             (((this->fields).prevSelectedCube)->fields).pickedFace;
                                if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                uVar57 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_GetMaterial
                                                   ((CubeBase *)pVStack_25,(Face__Enum)pVStack_31,
                                                    (MethodInfo *)0x0);
                                pMStack_52 = (MVCubeModelBase *)CONCAT31(pMStack_52._1_3_,uVar57);
                                pMVar72 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                pVVar24 = pVStack_25;
                                uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                if ((pMVar72 != (MVNetworkGame *)0x0) &&
                                   (this_00 = (pMVar72->fields)._MaterialRepository_k__BackingField,
                                   uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                                   pVVar27 = (Vector3__Array *)
                                             CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                   fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                   this_00 != (MVMaterialRepository *)0x0)) {
                                  bVar22 = MVMaterialRepository::
                                           MVMaterialRepository_IsMaterialUnlocked_1
                                                     (this_00,(uint8_t)pMStack_52,(MethodInfo *)0x0)
                                  ;
                                  if (bVar22 != 0) {
                                    uVar57 = CubeModelingStateMachine::
                                             CubeModelingStateMachine_get_CurrentMaterialId
                                                       (e,(MethodInfo *)0x0);
                                    (this->fields).prevMaterial = uVar57;
                                    CubeModelingStateMachine::
                                    CubeModelingStateMachine_set_CurrentMaterialId
                                              (e,(uint8_t)pMStack_52,(MethodInfo *)0x0);
                                    (this->fields).movingEdgeCube = (this->fields).prevSelectedCube;
                                    func_?();
                                    (this->fields).currentInternalState = 0;
                                    (this->fields).deltaAccum = 0.0;
                                    UnityEngine.CoreModule.dll::UnityEngine::Cursor::
                                    Cursor_set_visible(0,(MethodInfo *)0x0);
                                    uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                                    break;
                                  }
                                  pCVar33 = (this->fields).prevSelectedCube;
code_?:
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                  if (((pCVar33 != (CubePickingInfo *)0x0) &&
                                      (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                      pMVar16 != (MVCubeModelBase *)0x0)) &&
                                     (pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    iPos_01.z._1_1_ =
                                         (char)((ushort)(pCVar33->fields).iLocalPos.z >> 8);
                                    iPos_01._0_5_ = *(undefined5 *)&(pCVar33->fields).iLocalPos;
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                                               (pMVar16->fields)._.gameObject,1,(MethodInfo *)0x0);
                                    uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                    break;
                                  }
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
                      bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                      if (bVar22 == 0) {
                        pMVar32 = (e->fields)._TargetCubeModel_k__BackingField;
                        pVVar24 = pVStack_25;
                        pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                        if (pMVar32 == (MVCubeModelBase *)0x0) goto code_?;
                        bVar22 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                                           ((pMVar32->fields)._.gameObject,
                                            (IntVector *)&stack0xffffff40,(MethodInfo *)0x0);
                        uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                        uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                        if (bVar22 != 0) {
                          requestedCubePos.z = iVar17;
                          requestedCubePos._0_4_ = pMVar16;
                          CVar67 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                             (e,requestedCubePos,(MethodInfo *)0x0);
                          uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                          uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                          if (CVar67 == CanPerformCubeActionResult__Enum_Yes) {
                            pos_09.z = iVar17;
                            pos_09._0_4_ = pMVar16;
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            pMStack_52 = (e->fields)._TargetCubeModel_k__BackingField;
                            uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                         *)CONCAT22(iVar17,(undefined2)uStack_56);
                            pMStack_50 = pMVar16;
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            pVStack_31 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pVStack_25 = (Vector3__Array *)
                                         MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                         CubeDataPacker_CornersToByteArray
                                                   (pVStack_31,(MethodInfo *)0x0);
                            uVar57 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_get_CurrentMaterialId
                                               (e,(MethodInfo *)0x0);
                            pVStack_31 = (Vector3__Array *)CONCAT31(pVStack_31._1_3_,uVar57);
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pVStack_31 = (Vector3__Array *)
                                         Cube::Cube_CreateMaterialArray
                                                   ((uint8_t)pVStack_31,(MethodInfo *)0x0);
                            pMStack_51 = (MVCubeModelBase *)func_?();
                            pVVar24 = pVStack_25;
                            uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                            if (pMStack_51 != (MVCubeModelBase *)0x0) {
                              Cube::Cube__ctor((Cube *)pMStack_51,(Byte__Array *)pVStack_25,
                                               (Byte__Array *)pVStack_31,(MethodInfo *)0x0);
                              pVVar24 = pVStack_25;
                              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                              if (pMStack_52 != (MVCubeModelBase *)0x0) {
                                pos_13.z._0_1_ = (char)((uint)uStack_56 >> 0x10);
                                pos_13._0_4_ = pMStack_50;
                                pos_13.z._1_1_ = (char)((uint)uStack_56 >> 0x18);
                                MVCubeModelBase::MVCubeModelBase_AddCube
                                          (pMStack_52,pos_13,(CubeBase *)pMStack_51,
                                           (MethodInfo *)0x0);
code_?:
                                uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                                break;
                              }
                            }
                            goto code_?;
                          }
                        }
                      }
                      else {
                        (this->fields).currentInternalState = 2;
                        uStack_30 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                      }
                    }
                    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
                      pCVar58 = (Cube *)0x0;
                    }
                    else {
                      pCVar58 = (((this->fields).movingEdgeCube)->fields).cube;
                      pVVar24 = pVStack_25;
                      pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                      fVar29 = uStack_30;
                      if (pCVar58 == (Cube *)0x0) goto code_?;
                      pCVar58 = Cube::Cube_Clone(pCVar58,(MethodInfo *)0x0);
                    }
                    (this->fields).prevCubeState = pCVar58;
                    func_?();
                    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
                    func_?();
                    if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
                    pVVar66 = (Vector3__Array *)(this->fields).movingEdgeCube;
                    pMStack_52 = (MVCubeModelBase *)(this->fields).modelCursor;
                    pVStack_31 = (Vector3__Array *)(e->fields)._SelectedCube_k__BackingField;
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    pVVar24 = pVVar66;
                    pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                    fVar29 = uStack_30;
                    if (pMVar16 != (MVCubeModelBase *)0x0) {
                      pMStack_50 = (MVCubeModelBase *)(pMVar16->fields)._.gameObject;
                      iVar54 = (this->fields).currentInternalState;
                      sStack_42 = (short)iVar54;
                      uStack_43 = (undefined2)((uint)iVar54 >> 0x10);
                      pVStack_25 = pVVar66;
                      if (pVVar66 == (Vector3__Array *)0x0) {
                        iVar73 = (pMStack_52->fields)._._.id;
                        if (pVStack_31 == (Vector3__Array *)0x0) {
                          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                          if ((iVar73 != 0) &&
                             (pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                             , *(GameObject **)(iVar73 + 0x14) != (GameObject *)0x0)) {
                            sStack_42 = -0x973;
                            uStack_43 = 0x103d;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive
                                      (*(GameObject **)(iVar73 + 0x14),0,(MethodInfo *)0x0);
                            this = (EditCubes *)pMStack_52;
                            pBVar74 = (Byte__Array *)(pMStack_52->fields)._._.itemId;
                            pVVar24 = pVStack_25;
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            fVar29 = uStack_30;
                            if ((pBVar74 != (Byte__Array *)0x0) &&
                               (pGVar70 = *(GameObject **)(pBVar74->vector + 4),
                               pVVar27 = (Vector3__Array *)
                                         CONCAT22(uStack_28._2_2_,(short)uStack_28),
                               pGVar70 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar70,0,(MethodInfo *)0x0);
code_?:
                              pBVar74 = (Byte__Array *)
                                        (((MVCubeModelBase *)this)->fields)._._.groupId;
                              pVVar24 = pVStack_25;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = uStack_30;
                              if (pBVar74 != (Byte__Array *)0x0) {
                                CellCursor::CellCursor_UpdateCursor
                                          ((CellCursor *)pBVar74,(MethodInfo *)0x0);
                                pVVar75 = pVStack_31;
                                if (CONCAT22(uStack_43,sStack_42) == 3) {
                                  fVar76 = 0.0;
                                  fVar49 = 0.0;
                                  fVar77 = 0.0;
                                  bVar22 = DrawPlane::DrawPlane_Pick
                                                     ((Vector3 *)&stack0xffffff18,(MethodInfo *)0x0)
                                  ;
                                  if (bVar22 == 0) {
code_?:
                                    *unaff_FS_OFFSET = uStack_4;
                                    return;
                                  }
                                  pGVar78 = MVGameControllerBase::
                                            MVGameControllerBase_get_GameEventManager
                                                      ((MethodInfo *)0x0);
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = uStack_30;
                                  if (((pGVar78 != (GameEventManager *)0x0) &&
                                      (pGVar79 = (pGVar78->fields).AvatarCommandsBuildMode,
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                      pGVar79 !=
                                      (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                     (pGVar80 = (pGVar79->fields).LaserCommands,
                                     pVVar27 = (Vector3__Array *)
                                               CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                     pGVar80 !=
                                     (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                    ::
                                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                              (pGVar80,0.2,(MethodInfo *)0x0);
                                    pGVar78 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = uStack_30;
                                    if (((pGVar78 != (GameEventManager *)0x0) &&
                                        (pGVar79 = (pGVar78->fields).AvatarCommandsBuildMode,
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                        pGVar79 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar80 = (pGVar79->fields).LaserCommands,
                                       pVVar27 = (Vector3__Array *)
                                                 CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                       pGVar80 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      to_00.y = fVar77;
                                      to_00.x = fVar49;
                                      to_00.z = fVar76;
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                (pGVar80,to_00,(MethodInfo *)0x0);
                                      *unaff_FS_OFFSET = uStack_4;
                                      return;
                                    }
                                  }
                                }
                                else if (pVVar66 == (Vector3__Array *)0x0) {
                                  if (cStack_48 == '\0') {
                                    if (pVStack_31 == (Vector3__Array *)0x0) goto code_?;
                                    pGVar78 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = uStack_30;
                                    if (((pGVar78 != (GameEventManager *)0x0) &&
                                        (pGVar79 = (pGVar78->fields).AvatarCommandsBuildMode,
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                        pGVar79 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar80 = (pGVar79->fields).LaserCommands,
                                       pVVar27 = (Vector3__Array *)
                                                 CONCAT22(uStack_28._2_2_,(short)uStack_28),
                                       pGVar80 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                (pGVar80,*(Vector3 *)&pVVar75->vector[1].z,
                                                 (MethodInfo *)0x0);
                                      *unaff_FS_OFFSET = uStack_4;
                                      return;
                                    }
                                  }
                                  else {
                                    pGVar78 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
code_?:
                                    pVVar24 = pVStack_25;
                                    pVVar27 = uStack_28;
                                    fVar29 = uStack_30;
                                    if (((pGVar78 != (GameEventManager *)0x0) &&
                                        (pGVar79 = (pGVar78->fields).AvatarCommandsBuildMode,
                                        pGVar79 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar80 = (pGVar79->fields).LaserCommands,
                                       pGVar80 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                                (pGVar80,0.2,(MethodInfo *)0x0);
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
                                  pCVar58 = ((CubePickingInfo__Fields *)&pVVar66->bounds)->cube;
                                  uStack_30._0_2_ = (int16_t)pVVar66->max_length;
                                  uStack_30._2_2_ = (undefined2)(pVVar66->max_length >> 0x10);
                                  fVar29 = pVVar66->vector[2].z;
                                  sStack_42 = SUB42(fVar29,0);
                                  uStack_43 = (undefined2)((uint)fVar29 >> 0x10);
                                  uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                               *)CONCAT22(*(int16_t *)&pVVar66->vector[3].x,
                                                          (undefined2)uStack_56);
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  this = (EditCubes *)pMStack_50;
                                  iVector_00.y = uStack_43;
                                  iVector_00.x = sStack_42;
                                  iVector_00.z._0_1_ = (char)((uint)uStack_56 >> 0x10);
                                  iVector_00.z._1_1_ = (char)((uint)uStack_56 >> 0x18);
                                  pVVar81 = Cube::Cube_GetFaceVerticesWorld
                                                      ((GameObject *)pMStack_50,pCVar58,
                                                       CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                                                       iVector_00,(MethodInfo *)0x0);
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  pVVar24 = pVStack_25;
                                  fVar29 = uStack_30;
                                  if (pVVar81 != (Vector3__Array *)0x0) {
                                    pVVar75 = pVVar27;
                                    if ((pVVar81->max_length == 0) || (pVVar81->max_length < 2))
                                    goto code_?;
                                    uVar82 = pVVar81->vector[1].x;
                                    uVar83 = pVVar81->vector[1].y;
                                    uVar84 = pVVar81->vector[0].x;
                                    uVar85 = pVVar81->vector[0].y;
                                    if (pVVar81->max_length < 3) goto code_?;
                                    uVar86 = pVVar81->vector[2].x;
                                    uVar87 = pVVar81->vector[2].y;
                                    if (pVVar81->max_length < 4) goto code_?;
                                    uVar88 = pVVar81->vector[3].x;
                                    uVar89 = pVVar81->vector[3].y;
                                    pVVar27 = (Vector3__Array *)
                                              (((float)uVar88 +
                                               (float)uVar86 + (float)uVar82 + (float)uVar84) *
                                              _UNK_?);
                                    pVVar24 = (Vector3__Array *)
                                              (((float)uVar89 +
                                               (float)uVar87 + (float)uVar83 + (float)uVar85) *
                                              _UNK_?);
                                    fVar49 = (pVVar81->vector[3].z +
                                             pVVar81->vector[2].z +
                                             pVVar81->vector[1].z + pVVar81->vector[0].z) *
                                             _UNK_?;
                                    pVStack_25 = pVVar24;
                                    pVStack_31 = pVVar27;
                                    if (pVVar66->vector[0].x == 0.0) {
                                      uStack_26._0_2_ = 0;
                                      uStack_26._2_2_ = 0;
                                      sStack_42 = 0;
                                      uStack_43 = 0;
                                      pVVar66 = pVVar27;
                                      pVVar75 = pVVar24;
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      pVVar90 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      pCStack_59 = (CanPerformCubeActionResult__Enum__Class *)
                                                   (pVVar90->upVector).x;
                                      unique0x0000a404 = (MonitorData *)(pVVar90->upVector).y;
                                      fVar29 = (pVVar90->upVector).z;
                                      fVar77 = (float)pCStack_59 + (float)pVStack_31;
                                      fVar76 = (float)unique0x0000a404 + (float)pVStack_25;
                                      if ((TypeInfo__UnityEngine__Debug->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      start_00.y = (float)pVVar24;
                                      start_00.x = (float)pVVar27;
                                      start_00.z = fVar49;
                                      end_00.y = fVar76;
                                      end_00.x = fVar77;
                                      end_00.z = fVar29 + fVar49;
                                      color_00.g = (float)_UNK_?;
                                      color_00.r = (float)_UNK_?;
                                      color_00.b = (float)_UNK_?;
                                      color_00.a._0_1_ = (char)_UNK_?;
                                      color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                      color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                      UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                      Debug_1_DrawLine_1(start_00,end_00,color_00,(MethodInfo *)0x0)
                                      ;
                                      pVVar27 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
code_?:
                                      uStack_28 = pVVar27;
                                      pGVar78 = MVGameControllerBase::
                                                MVGameControllerBase_get_GameEventManager
                                                          ((MethodInfo *)0x0);
                                      pVVar24 = pVStack_25;
                                      pVVar27 = uStack_28;
                                      fVar29 = uStack_30;
                                      if (((pGVar78 != (GameEventManager *)0x0) &&
                                          (pGVar79 = (pGVar78->fields).AvatarCommandsBuildMode,
                                          pGVar79 !=
                                          (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
                                         && (pGVar80 = (pGVar79->fields).LaserCommands,
                                            pGVar80 !=
                                            (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                             *)0x0)) {
                                        to.y._0_1_ = (char)pVVar75;
                                        to.x = (float)pVVar66;
                                        to.y._1_1_ = (char)((uint)pVVar75 >> 8);
                                        to.y._2_2_ = (short)((uint)pVVar75 >> 0x10);
                                        to.z._0_1_ = SUB41(fVar49,0);
                                        to.z._1_1_ = (char)((uint)fVar49 >> 8);
                                        to.z._2_2_ = (short)((uint)fVar49 >> 0x10);
                                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                        ::
                                        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                  (pGVar80,to,(MethodInfo *)0x0);
                                        pGVar78 = MVGameControllerBase::
                                                  MVGameControllerBase_get_GameEventManager
                                                            ((MethodInfo *)0x0);
                                        goto code_?;
                                      }
                                    }
                                    else {
                                      pCVar58 = ((CubePickingInfo__Fields *)&pVVar66->bounds)->cube;
                                      face = pVVar66->max_length;
                                      fVar29 = pVVar66->vector[0].x;
                                      uStack_30._0_2_ = SUB42(fVar29,0);
                                      uStack_30._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                                      fVar29 = pVVar66->vector[2].z;
                                      sStack_42 = SUB42(fVar29,0);
                                      uStack_43 = (undefined2)((uint)fVar29 >> 0x10);
                                      uStack_56 = (
                                                  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                  *)CONCAT22(*(int16_t *)&pVVar66->vector[3].x,
                                                             (undefined2)uStack_56);
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      iVector.y = uStack_43;
                                      iVector.x = sStack_42;
                                      iVector.z = uStack_56._2_2_;
                                      pVVar81 = Cube::Cube_GetEdgeVerticesWorld
                                                          ((GameObject *)this,pCVar58,face,
                                                           CONCAT22(uStack_30._2_2_,
                                                                    (int16_t)uStack_30),iVector,
                                                           (MethodInfo *)0x0);
                                      pVVar75 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      pVVar24 = pVStack_25;
                                      if (*(bool *)&pVVar66->vector[0].y == 0) {
                                        pVVar27 = (Vector3__Array *)
                                                  CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30)
                                        ;
                                        if (pVVar81 != (Vector3__Array *)0x0) {
                                          if (*(bool *)((int)&pVVar66->vector[0].y + 1) == 0) {
                                            if ((pVVar81->max_length == 0) ||
                                               (pVVar81->max_length < 2)) goto code_?;
                                            uVar91 = pVVar81->vector[1].x;
                                            uVar92 = pVVar81->vector[1].y;
                                            uVar93 = pVVar81->vector[0].x;
                                            uVar94 = pVVar81->vector[0].y;
                                            uStack_30 = (pVVar81->vector[1].z + pVVar81->vector[0].z
                                                        ) * _UNK_?;
                                            fStack_39 = ((float)uVar91 + (float)uVar93) *
                                                        _UNK_?;
                                            pVVar27 = (Vector3__Array *)
                                                      (((float)uVar92 + (float)uVar94) *
                                                      _UNK_?);
                                          }
                                          else {
                                            if (pVVar81->max_length < 2) goto code_?;
                                            uVar95 = pVVar81->vector[1].x;
                                            pVVar27 = (Vector3__Array *)pVVar81->vector[1].y;
                                            uStack_30 = pVVar81->vector[1].z;
                                            fStack_39 = (float)uVar95;
                                          }
code_?:
                                          fVar49 = uStack_30 + (fVar49 - uStack_30) * _UNK_?;
                                          pVVar66 = (Vector3__Array *)
                                                    (fStack_39 +
                                                    ((float)pVStack_31 - fStack_39) * _UNK_?)
                                          ;
                                          pVVar75 = (Vector3__Array *)
                                                    ((float)pVVar27 +
                                                    ((float)pVStack_25 - (float)pVVar27) *
                                                    _UNK_?);
                                          goto code_?;
                                        }
                                      }
                                      else {
                                        pVVar27 = pVVar75;
                                        fVar29 = uStack_30;
                                        if (pVVar81 != (Vector3__Array *)0x0) {
                                          if (pVVar81->max_length == 0) goto code_?;
                                          uVar96 = pVVar81->vector[0].x;
                                          uVar97 = pVVar81->vector[0].y;
                                          fVar29 = pVVar81->vector[0].z;
                                          uStack_28._0_2_ = (short)uVar97;
                                          uStack_28._2_2_ = (undefined2)((uint)uVar97 >> 0x10);
                                          uStack_26._0_2_ = (short)uVar96;
                                          uStack_26._2_2_ = (short)((uint)uVar96 >> 0x10);
                                          uVar98 = pVVar81->vector[0].x;
                                          uVar99 = pVVar81->vector[0].y;
                                          uStack_30._0_2_ = SUB42(fVar29,0);
                                          uStack_30._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                                          sStack_42 = (short)uStack_28;
                                          uStack_43 = uStack_28._2_2_;
                                          fStack_39 = (float)uVar96;
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pVVar90 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar100 = (pVVar90->upVector).x;
                                          uVar101 = (pVVar90->upVector).y;
                                          stack0xffffff5c =
                                               (MonitorData *)((float)uVar99 + (float)uVar101);
                                          pCStack_59 = (CanPerformCubeActionResult__Enum__Class *)
                                                       ((float)uVar98 + (float)uVar100);
                                          fVar77 = fVar29 + (pVVar90->upVector).z;
                                          if ((TypeInfo__UnityEngine__Debug->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          start.y = (float)(int)(CONCAT26(uStack_43,
                                                                          CONCAT24(sStack_42,
                                                                                   CONCAT22(
                                                  uStack_26._2_2_,(short)uStack_26))) >> 0x20);
                                          start.x = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26
                                                                   );
                                          start.z = fVar29;
                                          end.z = fVar77;
                                          end.x = (float)pCStack_59;
                                          end.y = (float)stack0xffffff5c;
                                          color.g = (float)_UNK_?;
                                          color.r = (float)_UNK_?;
                                          color.b = (float)_UNK_?;
                                          color.a._0_1_ = (char)_UNK_?;
                                          color.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                          color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                          UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                          Debug_1_DrawLine_1(start,end,color,(MethodInfo *)0x0);
                                          pVVar27 = (Vector3__Array *)
                                                    CONCAT22(uStack_28._2_2_,(short)uStack_28);
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
                          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                          if ((iVar73 != 0) &&
                             (pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                             , *(GameObject **)(iVar73 + 0x14) != (GameObject *)0x0)) {
                            sStack_42 = -0x92a;
                            uStack_43 = 0x103d;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive
                                      (*(GameObject **)(iVar73 + 0x14),1,(MethodInfo *)0x0);
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            this_01 = (FaceCursor *)(pMStack_52->fields)._._.id;
                            pVVar75 = pVStack_31;
                            this = (EditCubes *)pMStack_52;
joined_?:
                            pVVar24 = pVStack_25;
                            fVar29 = uStack_30;
                            if (this_01 != (FaceCursor *)0x0) {
                              FaceCursor::FaceCursor_UpdateCursor
                                        (this_01,(CubePickingInfo *)pVVar75,(GameObject *)pMStack_50
                                         ,(MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                        }
                      }
                      else {
                        uStack_34 = (Byte__Array *)(pMStack_52->fields)._._.itemId;
                        pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                        if (uStack_34 != (Byte__Array *)0x0) {
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            sStack_42 = -0x8d7;
                            uStack_43 = 0x103d;
                            func_?();
                            sStack_42 = 0x5e28;
                            uStack_43 = 0x10ee;
                            uStack_26._0_2_ = -0x8cd;
                            uStack_26._2_2_ = 0x103d;
                            func_?();
                            uStack_26._0_2_ = 0x5bec;
                            uStack_26._2_2_ = 0x10ee;
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          pMStack_51 = (MVCubeModelBase *)pVVar66->max_length;
                          pCVar58 = ((CubePickingInfo__Fields *)&pVVar66->bounds)->cube;
                          pVStack_25 = (Vector3__Array *)pVVar66->vector[2].z;
                          uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                                      )CONCAT22(*(int16_t *)&pVVar66->vector[3].x,
                                                (undefined2)uStack_56);
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          iVector_07.z._0_1_ = (char)((uint)uStack_56 >> 0x10);
                          iVector_07._0_4_ = pVStack_25;
                          iVector_07.z._1_1_ = (char)((uint)uStack_56 >> 0x18);
                          pVStack_25 = Cube::Cube_GetFaceVerticesWorld
                                                 ((GameObject *)pMStack_50,pCVar58,
                                                  (Face__Enum)pMStack_51,iVector_07,
                                                  (MethodInfo *)0x0);
                          this = (EditCubes *)func_?();
                          pVVar24 = pVStack_25;
                          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                          fVar29 = uStack_30;
                          if ((MVCubeModelBase *)this != (MVCubeModelBase *)0x0) {
                            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::
                            Object]::LowLevelList_1_System_Object___ctor
                                      ((LowLevelList_1_System_Object_ *)this,
                                       MethodInfo__System__Collections__Generic__List<int>__List__);
                            pVVar24 = pVStack_25;
                            pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                            fVar29 = uStack_30;
                            if (*(GameObject **)(uStack_34->vector + 4) != (GameObject *)0x0) {
                              this_03 = (MeshFilter *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponent_1
                                                  (*(GameObject **)(uStack_34->vector + 4),
                                                                                                      
                                                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                                  );
                              pVVar24 = pVStack_25;
                              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28)
                              ;
                              fVar29 = uStack_30;
                              if (this_03 != (MeshFilter *)0x0) {
                                pMStack_51 = (MVCubeModelBase *)
                                             UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                             MeshFilter_get_mesh(this_03,(MethodInfo *)0x0);
                                pVVar24 = pVStack_25;
                                pVVar27 = (Vector3__Array *)
                                          CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                fVar29 = uStack_30;
                                if (pMStack_51 != (MVCubeModelBase *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                            ((Mesh *)pMStack_51,(MethodInfo *)0x0);
                                  func_?();
                                  func_?();
                                  func_?();
                                  func_?();
                                  func_?();
                                  func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                            ((Mesh *)pMStack_51,pVStack_25,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    func_?();
                                    func_?();
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  uStack_56 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                               *)func_?();
                                  pVVar24 = pVStack_25;
                                  pVVar27 = (Vector3__Array *)
                                            CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                  fVar29 = uStack_30;
                                  if (uStack_56 !=
                                      (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *
                                      )0x0) {
                                    mscorlib.dll::System::Collections::Generic::
                                    LowLevelList`1[System::Object]::
                                    LowLevelList_1_System_Object___ctor
                                              ((LowLevelList_1_System_Object_ *)uStack_56,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__
                                              );
                                    uStack_30._0_2_ = 0;
                                    uStack_30._2_2_ = 0;
                                    uStack_28._0_2_ = 0;
                                    uStack_28._2_2_ = 0;
                                    func_?();
                                    uStack_30._0_2_ = 0;
                                    uStack_30._2_2_ = 0;
                                    uStack_28._0_2_ = 0;
                                    uStack_28._2_2_ = 0x3f80;
                                    func_?();
                                    uStack_30._0_2_ = 0;
                                    uStack_30._2_2_ = 0x3f80;
                                    uStack_28._0_2_ = 0;
                                    uStack_28._2_2_ = 0x3f80;
                                    func_?();
                                    uStack_30._0_2_ = 0;
                                    uStack_30._2_2_ = 0x3f80;
                                    uStack_28._0_2_ = 0;
                                    uStack_28._2_2_ = 0;
                                    func_?(uStack_56);
                                    pUVar102 = mscorlib.dll::System::Collections::Generic::
                                              List`1[UnityEngine::
                                              UnitySynchronizationContext+WorkRequest]::
                                              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                                        (uStack_56,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                                  );
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                              ((Mesh *)pMStack_51,(Vector2__Array *)pUVar102,
                                               (MethodInfo *)0x0);
                                    pUVar102 = mscorlib.dll::System::Collections::Generic::
                                              List`1[UnityEngine::
                                              UnitySynchronizationContext+WorkRequest]::
                                              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                                        ((
                                                  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                  *)this,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                    this = (EditCubes *)pMStack_51;
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_set_triangles((Mesh *)pMStack_51,(Int32__Array *)pUVar102,
                                                       (MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_RecalculateNormals((Mesh *)this,(MethodInfo *)0x0);
                                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_RecalculateBounds((Mesh *)this,(MethodInfo *)0x0);
                                    pVVar24 = pVStack_25;
                                    pVVar27 = (Vector3__Array *)
                                              CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                    fVar29 = uStack_30;
                                    if (pVStack_25 != (Vector3__Array *)0x0) {
                                      pVVar75 = (Vector3__Array *)
                                                CONCAT22(uStack_28._2_2_,(short)uStack_28);
                                      if (pVStack_25->max_length < 3) goto code_?;
                                      uVar103 = pVStack_25->vector[0].x;
                                      uVar104 = pVStack_25->vector[0].y;
                                      uVar105 = pVStack_25->vector[2].x;
                                      uVar106 = pVStack_25->vector[2].y;
                                      uStack_30 = pVStack_25->vector[2].z;
                                      uStack_28._0_2_ = (short)uVar106;
                                      uStack_28._2_2_ = (undefined2)((uint)uVar106 >> 0x10);
                                      fStack_39 = (float)uVar105;
                                      pVVar75 = (Vector3__Array *)uVar106;
                                      if (pVStack_25->max_length == 0) goto code_?;
                                      uVar107 = pVStack_25->vector[0].x;
                                      uVar108 = pVStack_25->vector[0].y;
                                      pMStack_51 = (MVCubeModelBase *)
                                                   ((float)uVar107 +
                                                   ((float)uVar105 - (float)uVar103) * _UNK_?);
                                      uStack_56 = (
                                                  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                                  *)((float)uVar108 +
                                                    ((float)uVar106 - (float)uVar104) * _UNK_?)
                                      ;
                                      pVVar27 = (Vector3__Array *)uVar106;
                                      fVar29 = uStack_30;
                                      if (*(GameObject **)(uStack_34->vector + 4) !=
                                          (GameObject *)0x0) {
                                        pVStack_25 = (Vector3__Array *)
                                                     UnityEngine.CoreModule.dll::UnityEngine::
                                                     GameObject::GameObject_get_transform
                                                               (*(GameObject **)
                                                                 (uStack_34->vector + 4),
                                                                (MethodInfo *)0x0);
                                        if (cRam_? == '\0') {
                                          func_?();
                                          cRam_? = '\x01';
                                        }
                                        pVVar90 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        uVar109 = (pVVar90->oneVector).x;
                                        uVar110 = (pVVar90->oneVector).y;
                                        fVar29 = *(float *)(uStack_34->vector + 8);
                                        fStack_39 = (float)uVar109 * fVar29;
                                        pVVar27 = (Vector3__Array *)((float)uVar110 * fVar29);
                                        uStack_28._2_2_ = (undefined2)((uint)pVVar27 >> 0x10);
                                        fVar29 = (pVVar90->oneVector).z * fVar29;
                                        uStack_30._2_2_ = (undefined2)((uint)fVar29 >> 0x10);
                                        pVVar24 = pVStack_25;
                                        if (pVStack_25 != (Vector3__Array *)0x0) {
                                          value.y._0_1_ = (char)pVVar27;
                                          value.x = fStack_39;
                                          value.y._1_1_ = (char)((uint)pVVar27 >> 8);
                                          value.y._2_2_ = uStack_28._2_2_;
                                          value.z._0_1_ = SUB41(fVar29,0);
                                          value.z._1_1_ = (char)((uint)fVar29 >> 8);
                                          value.z._2_2_ = uStack_30._2_2_;
                                          uStack_28 = pVVar27;
                                          uStack_30 = fVar29;
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localScale
                                                    ((Transform *)pVStack_25,value,(MethodInfo *)0x0
                                                    );
                                          pVVar24 = pVStack_25;
                                          pVVar27 = uStack_28;
                                          fVar29 = uStack_30;
                                          if (*(GameObject **)(uStack_34->vector + 4) !=
                                              (GameObject *)0x0) {
                                            pVStack_25 = (Vector3__Array *)
                                                         UnityEngine.CoreModule.dll::UnityEngine::
                                                         GameObject::GameObject_get_transform
                                                                   (*(GameObject **)
                                                                     (uStack_34->vector + 4),
                                                                    (MethodInfo *)0x0);
                                            pVVar81 = UnityEngine.CoreModule.dll::UnityEngine::Mesh
                                                      ::Mesh_get_vertices((Mesh *)this,
                                                                          (MethodInfo *)0x0);
                                            pVVar24 = pVStack_25;
                                            pVVar27 = uStack_28;
                                            fVar29 = uStack_30;
                                            if (pVVar81 != (Vector3__Array *)0x0) {
                                              pVVar75 = uStack_28;
                                              if (pVVar81->max_length == 0) goto code_?;
                                              if (pVStack_25 != (Vector3__Array *)0x0) {
                                                pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_TransformPoint
                                                                    ((Vector3 *)&stack0xffffff48,
                                                                     (Transform *)pVStack_25,
                                                                     pVVar81->vector[0],
                                                                     (MethodInfo *)0x0);
                                                uVar111 = pVVar36->x;
                                                uVar112 = pVVar36->y;
                                                uStack_30 = pVVar36->z;
                                                uStack_28._0_2_ = (short)uVar112;
                                                uStack_28._2_2_ = (undefined2)((uint)uVar112 >> 0x10)
                                                ;
                                                fStack_39 = (float)uVar111;
                                                pVVar24 = pVStack_25;
                                                pVVar27 = (Vector3__Array *)uVar112;
                                                fVar29 = uStack_30;
                                                if (*(GameObject **)(uStack_34->vector + 4) !=
                                                    (GameObject *)0x0) {
                                                  pVStack_25 = (Vector3__Array *)
                                                               UnityEngine.CoreModule.dll::
                                                               UnityEngine::GameObject::
                                                               GameObject_get_transform
                                                                         (*(GameObject **)
                                                                           (uStack_34->vector + 4),
                                                                          (MethodInfo *)0x0);
                                                  pVVar81 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Mesh::Mesh_get_vertices
                                                                      ((Mesh *)this,
                                                                       (MethodInfo *)0x0);
                                                  pVVar75 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  pVVar24 = pVStack_25;
                                                  pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  fVar29 = uStack_30;
                                                  if (pVVar81 != (Vector3__Array *)0x0) {
                                                    if (pVVar81->max_length < 3)
                                                    goto code_?;
                                                    pVVar27 = pVVar75;
                                                    if (pVStack_25 != (Vector3__Array *)0x0) {
                                                      position.z._2_2_ =
                                                           (short)((uint)pVVar81->vector[2].z >>
                                                                  0x10);
                                                      position._0_10_ =
                                                           *(unkbyte10 *)(pVVar81->vector + 2);
                                                      pVVar36 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_TransformPoint
                                                                          ((Vector3 *)
                                                                           &stack0xffffff48,
                                                                           (Transform *)pVStack_25,
                                                                           position,(MethodInfo *)
                                                                                    0x0);
                                                      pVVar27 = (Vector3__Array *)
                                                                CONCAT22(uStack_28._2_2_,
                                                                         (short)uStack_28);
                                                      uVar113 = pVVar36->x;
                                                      uVar114 = pVVar36->y;
                                                      pVVar24 = (Vector3__Array *)
                                                                (fStack_39 +
                                                                ((float)uVar113 - fStack_39) *
                                                                _UNK_?);
                                                      fVar49 = (float)pVVar27 +
                                                               ((float)uVar114 - (float)pVVar27) *
                                                               _UNK_?;
                                                      uStack_30 = uStack_30 +
                                                                  (pVVar36->z - uStack_30) *
                                                                  _UNK_?;
                                                      pGVar70 = *(GameObject **)
                                                                 (uStack_34->vector + 4);
                                                      fVar29 = uStack_30;
                                                      if (pGVar70 != (GameObject *)0x0) {
                                                        stack0xffffff5c = (MonitorData *)pGVar70;
                                                        pCStack_59 = (
                                                  CanPerformCubeActionResult__Enum__Class *)
                                                  &UNK_?;
                                                  pVVar75 = pVStack_25;
                                                  pVStack_25 = pVVar24;
                                                  pTVar40 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar70,(MethodInfo *)0x0);
                                                  this = (EditCubes *)0x0;
                                                  pVVar24 = pVStack_25;
                                                  pVVar27 = (Vector3__Array *)
                                                            CONCAT22(uStack_28._2_2_,
                                                                     (short)uStack_28);
                                                  fVar29 = uStack_30;
                                                  if (pTVar40 != (Transform *)0x0) {
                                                    stack0xffffff5c = (MonitorData *)&UNK_?;
                                                    pVVar36 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff48
                                                                         ,pTVar40,(MethodInfo *)0x0)
                                                    ;
                                                    uVar115 = pVVar36->x;
                                                    uVar116 = pVVar36->y;
                                                    uVar117 = pVVar66->vector[0].z;
                                                    uVar118 = pVVar66->vector[1].x;
                                                    value_00.y = (float)uVar116 +
                                                                 (float)uVar118 * _UNK_? +
                                                                 ((float)uStack_56 - fVar49);
                                                    value_00.x = (float)uVar115 +
                                                                 (float)uVar117 * _UNK_? +
                                                                 ((float)pMStack_51 -
                                                                 (float)pVStack_25);
                                                    value_00.z = pVVar36->z +
                                                                 pVVar66->vector[1].y *
                                                                 _UNK_? +
                                                                 ((float)pVVar75 - uStack_30);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar40,value_00,(MethodInfo *)0x0);
                                                    this = (EditCubes *)pMStack_52;
                                                    iVar73 = (pMStack_52->fields)._._.id;
                                                    pVVar24 = pVStack_25;
                                                    pVVar27 = (Vector3__Array *)
                                                              CONCAT22(uStack_28._2_2_,
                                                                       (short)uStack_28);
                                                    fVar29 = uStack_30;
                                                    if ((iVar73 != 0) &&
                                                       (pGVar70 = *(GameObject **)(iVar73 + 0x14),
                                                       pVVar27 = (Vector3__Array *)
                                                                 CONCAT22(uStack_28._2_2_,
                                                                          (short)uStack_28),
                                                       pGVar70 != (GameObject *)0x0)) {
                                                      sStack_42 = -0x2af;
                                                      uStack_43 = 0x103d;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar70,1,(MethodInfo *)0x0);
                                                      pVVar27 = (Vector3__Array *)
                                                                CONCAT22(uStack_28._2_2_,
                                                                         (short)uStack_28);
                                                      this_01 = (FaceCursor *)
                                                                (((MVCubeModelBase *)this)->fields).
                                                                _._.id;
                                                      pVVar75 = pVVar66;
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
    else {
      uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
      pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
      fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar32 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar47 = (((this->fields).modelCursor)->fields).indentArea;
        uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
        pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
        fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
        if ((pMVar32 != (MVCubeModelBase *)0x0) &&
           (uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
           pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
           fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
           pIVar47 != (IndentArea *)0x0)) {
          pGVar70 = (pMVar32->fields)._.gameObject;
          in_stack_8 = (undefined2)((uint)pGVar70 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar47,(e->fields)._SelectedCube_k__BackingField,pGVar70,(MethodInfo *)0x0);
          pMVar23 = (this->fields).modelCursor;
          pVVar24 = pVStack_25;
          uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
          pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
          fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
          if ((pMVar23 != (ModelCursor3D *)0x0) &&
             (pIVar47 = (pMVar23->fields).indentArea,
             uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
             pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
             fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
             pIVar47 != (IndentArea *)0x0)) {
            bVar22 = IndentArea::IndentArea_IsColliding(pIVar47,(MethodInfo *)0x0);
            pVVar24 = pVStack_25;
            if (bVar22 == 0) {
              pMVar23 = (this->fields).modelCursor;
              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
              if (((pMVar23 != (ModelCursor3D *)0x0) &&
                  (pIVar47 = (pMVar23->fields).indentArea,
                  uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                  pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                  fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                  pIVar47 != (IndentArea *)0x0)) &&
                 (pGVar70 = (pIVar47->fields).gameObject,
                 uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                 pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                 fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                 pGVar70 != (GameObject *)0x0)) {
                bVar22 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar70,bVar22,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar33 = (e->fields)._SelectedCube_k__BackingField;
              uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
              pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
              fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
              if (pCVar33 != (CubePickingInfo *)0x0) {
                (pCVar33->fields).pickedEdge = 0;
                pMVar23 = (this->fields).modelCursor;
                uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26);
                pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28);
                fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30);
                if (((pMVar23 != (ModelCursor3D *)0x0) &&
                    (pIVar47 = (pMVar23->fields).indentArea,
                    uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                    pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                    fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                    pIVar47 != (IndentArea *)0x0)) &&
                   (pGVar70 = (pIVar47->fields).gameObject,
                   uStack_26 = (float)CONCAT22(uStack_26._2_2_,(short)uStack_26),
                   pVVar27 = (Vector3__Array *)CONCAT22(uStack_28._2_2_,(short)uStack_28),
                   fVar29 = (float)CONCAT22(uStack_30._2_2_,(int16_t)uStack_30),
                   pGVar70 != (GameObject *)0x0)) {
                  bVar22 = 1;
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
  pVStack_25 = pVVar24;
  uStack_28 = pVVar27;
  uStack_30 = fVar29;
  func_?();
  func_?();
  func_?();
  pVVar75 = uStack_28;
code_?:
  uStack_28 = pVVar75;
  pMVar119 = (MVCubeModelBase__Class *)func_?();
  *(char *)&((MVCubeModelBase *)this)->monitor =
       *(char *)&((MVCubeModelBase *)this)->monitor + (char)&stack0xfffffffc +
       (pMVar119 < ((MVCubeModelBase *)this)->klass);
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
  (*(this->klass->vtable).HideCursor.methodPtr)(this,(this->klass->vtable).HideCursor.method);
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
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
    cRam_? = '\x01';
  }
  *(undefined4 *)localPos._0_4_ = 0;
  *(undefined2 *)(localPos._0_4_ + 4) = 0;
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).Remove.method;
    (*(pMStack_2->klass->vtable).Remove.methodPtr)();
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
                     (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                               (&puStack_8,(short)pMVar1,(pMVar1->klass->vtable).get_Scale.method);
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).get_CursorVisible.method;
    bVar3 = (*(pMStack_2->klass->vtable).get_CursorVisible.methodPtr)();
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).set_CursorVisible.method;
    uStack_3 = _value;
    (*(pMStack_2->klass->vtable).set_CursorVisible.methodPtr)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

