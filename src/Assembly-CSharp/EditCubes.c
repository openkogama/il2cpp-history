
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  bVar4 = (bool)unaff_EBX;
  bVar5 = (byte)((uint)unaff_EBX >> 8);
  uVar6 = (undefined2)((uint)unaff_EBX >> 0x10);
  bVar7 = bVar5;
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
  bVar8 = 0;
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  EVar9 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp == 0) {
    pCVar10 = (CubeModelingStateMachine *)&(this->fields).movingEdgeCube;
    pMVar11 = (this->fields).modelCursor;
    if (pMVar11 == (ModelCursor3D *)0x0) {
code_?:
      uVar12 = 0;
      func_?();
      func_?();
      func_?();
      pCVar13 = pCVar10;
    }
    else {
      if (*(CubePickingInfo **)pCVar10 == (CubePickingInfo *)0x0 &&
          (pMVar11->fields).indentArea != (IndentArea *)0x0) {
        if (e != (CubeModelingStateMachine *)0x0) {
          pCVar14 = (e->fields)._SelectedCube_k__BackingField;
          if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
          pIVar15 = (pMVar11->fields).indentArea;
          pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
          if ((pMVar16 != (MVCubeModelBase *)0x0) && (pIVar15 != (IndentArea *)0x0)) {
            bVar4 = 0;
            bVar7 = 0;
            uVar6 = 0;
            IndentArea::IndentArea_UpdateIndentArea
                      (pIVar15,pCVar14,(pMVar16->fields)._.gameObject,(MethodInfo *)0x0);
            pMVar11 = (this->fields).modelCursor;
            if ((pMVar11 != (ModelCursor3D *)0x0) &&
               (pIVar15 = (pMVar11->fields).indentArea, pIVar15 != (IndentArea *)0x0)) {
              bVar17 = IndentArea::IndentArea_IsColliding(pIVar15,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                pMVar11 = (this->fields).modelCursor;
                if (((pMVar11 != (ModelCursor3D *)0x0) &&
                    (pIVar15 = (pMVar11->fields).indentArea, pIVar15 != (IndentArea *)0x0)) &&
                   (pGVar18 = (pIVar15->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
                  bVar17 = 0;
code_?:
                  in_stack_19 = (undefined2)((uint)pGVar18 >> 0x10);
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar18,bVar17,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              else {
                pCVar14 = (e->fields)._SelectedCube_k__BackingField;
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  (pCVar14->fields).pickedEdge = 0;
                  pMVar11 = (this->fields).modelCursor;
                  if (((pMVar11 != (ModelCursor3D *)0x0) &&
                      (pIVar15 = (pMVar11->fields).indentArea, pIVar15 != (IndentArea *)0x0)) &&
                     (pGVar18 = (pIVar15->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
                    bVar17 = 1;
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
        func_?();
      }
      uVar12 = 0x67;
      uVar20 = 0xa6;
      iVar21 = 0x1044;
      bVar17 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        in_stack_22 = 0;
        in_stack_23 = 0;
        in_stack_24 = 0;
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = fVar25;
      }
      if (cRam_? == '\0') {
        in_stack_22 = 0x9b;
        in_stack_23 = 0xa6;
        in_stack_24 = 0x1044;
        func_?();
        cRam_? = '\x01';
      }
      if (e == (CubeModelingStateMachine *)0x0) goto code_?;
      pCVar14 = (e->fields)._SelectedCube_k__BackingField;
      if ((pCVar14 == (CubePickingInfo *)0x0) ||
         (*(CubePickingInfo **)pCVar10 != (CubePickingInfo *)0x0)) goto code_?;
      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
      if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
      uVar26._0_2_ = (pCVar14->fields).iLocalPos.x;
      uVar26._2_2_ = (pCVar14->fields).iLocalPos.y;
      iVar27 = (pCVar14->fields).iLocalPos.z;
      pGVar18 = (pMVar16->fields)._.gameObject;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar12 = 0x1e;
      uVar20 = 0xa7;
      iVar21 = 0x1044;
      IVar28.z._0_1_ = (char)iVar27;
      IVar28.x = (short)uVar26;
      IVar28.y = (short)((uint)uVar26 >> 0x10);
      IVar28.z._1_1_ = (char)((ushort)iVar27 >> 8);
      SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                ((Vector3 *)&stack0xffffff74,pGVar18,IVar28,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_01 == (MainCameraManager *)0x0) ||
         (pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0), pTVar29 == (Transform *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffff74,pTVar29,(MethodInfo *)0x0);
      fVar30 = (float10)func_?();
      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
      fVar25 = (float)fVar30;
      if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
      in_stack_22 = SUB41(pMVar16,0);
      in_stack_23 = (undefined1)((uint)pMVar16 >> 8);
      in_stack_24 = (undefined2)((uint)pMVar16 >> 0x10);
      puVar31 = (undefined8 *)(*(code *)(pMVar16->klass->vtable).get_Scale.method)();
      pMVar11 = (this->fields).modelCursor;
      if ((float)((ulonglong)*puVar31 >> 0x20) * _UNK_? < fVar25) {
        (this->fields).mouseSensitivity = 0.1325;
        if ((pMVar11 != (ModelCursor3D *)0x0) &&
           (pIVar15 = (pMVar11->fields).indentArea, pIVar15 != (IndentArea *)0x0)) {
          (pIVar15->fields).size = 1.0;
          goto code_?;
        }
        goto code_?;
      }
      (this->fields).mouseSensitivity = 0.0225;
      if ((pMVar11 == (ModelCursor3D *)0x0) ||
         (pIVar15 = (pMVar11->fields).indentArea, pIVar15 == (IndentArea *)0x0))
      goto code_?;
      (pIVar15->fields).size = 0.5;
code_?:
      bVar17 = 0;
      uVar32 = SUB41(e,0);
      uVar33 = (undefined1)((uint)e >> 8);
      switch((this->fields).currentInternalState) {
      case 0:
        if (*(CubePickingInfo **)pCVar10 != (CubePickingInfo *)0x0) {
          bVar17 = 0;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            in_stack_22 = 0x8d;
            in_stack_23 = 0xa8;
            in_stack_24 = 0x1044;
            bVar17 = 0;
            func_?();
          }
          bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            fVar25 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                               (StringLiteral_Mouse_X,(MethodInfo *)0x0);
            uVar34 = 0;
            bVar4 = 0xd5;
            bVar7 = 0xa8;
            uVar6 = 0x1044;
            fVar35 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                               (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            fVar25 = fVar25 * _UNK_?;
            uVar36 = 0;
            uVar37 = 0;
            uVar38 = 0;
            uVar12 = SUB41(fVar25,0);
            uVar20 = (undefined1)((uint)fVar25 >> 8);
            uVar39 = (undefined2)((uint)fVar25 >> 0x10);
            fVar35 = fVar35 * _UNK_?;
            uVar32 = SUB41(fVar35,0);
            uVar33 = (undefined1)((uint)fVar35 >> 8);
            uVar40 = (undefined2)((uint)fVar35 >> 0x10);
            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar14 = *(CubePickingInfo **)pCVar10;
            fVar25 = (this->fields).mouseSensitivity;
            deltaAccum = &(this->fields).deltaAccum;
            delta = &(this->fields).delta;
            pCVar10 = (CubeModelingStateMachine *)&(this->fields).movingEdgeCube;
            if (pCVar14 != (CubePickingInfo *)0x0) {
              bVar41 = (pCVar14->fields).pickedEdgeIndex0;
              edgeIndex1 = (pCVar14->fields).pickedEdgeIndex1;
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                uVar36 = SUB41(TypeInfo__SharedCubeFunctions,0);
                uVar37 = (undefined1)((uint)TypeInfo__SharedCubeFunctions >> 8);
                uVar38 = (undefined2)((uint)TypeInfo__SharedCubeFunctions >> 0x10);
                uVar32 = 0x52;
                uVar33 = 0xa9;
                uVar40 = 0x1044;
                func_?();
              }
              mousePositionDelta.z._1_1_ = uVar37;
              mousePositionDelta.z._0_1_ = uVar36;
              mousePositionDelta.z._2_2_ = uVar38;
              uVar26 = CONCAT22(uVar39,CONCAT11(uVar20,uVar12));
              mousePositionDelta.y =
                   (float)(int)(CONCAT26(uVar40,CONCAT15(uVar33,CONCAT14(uVar32,uVar26))) >> 0x20);
              mousePositionDelta.x = (float)uVar26;
              uVar39 = in_stack_42;
              CVar43 = SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                 (pMVar16,pCVar14,mousePositionDelta,delta,deltaAccum,fVar25,
                                  &stack0xffffffeb,bVar41,edgeIndex1,
                                  (EditCubeChange__Enum *)&stack0xffffffdc,(MethodInfo *)0x0);
              if (CVar43 == CubeOutOfBoundState__Enum_WithinBounds) {
                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
                iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar16,(MethodInfo *)0x0);
                CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar9,(MethodInfo *)0x0);
              }
              if ((bVar8 & (this->fields).edgeHasMoved == 0) != 0) {
                (this->fields).edgeHasMoved = 1;
              }
              if (CVar43 == CubeOutOfBoundState__Enum_OutOfBoundsAdd) {
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  uVar39 = (pCVar14->fields).iLocalPos.x;
                  iVar21 = (pCVar14->fields).iLocalPos.z;
                  pMVar45 = (MethodInfo *)(pCVar14->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar4 = (bool)&stack0xffffffac;
                  bVar7 = (byte)((uint)&stack0xffffffac >> 8);
                  uVar6 = (undefined2)((uint)&stack0xffffffac >> 0x10);
                  localPos_01.z._0_1_ = (char)uVar39;
                  localPos_01._0_4_ = &stack0xffffffac;
                  localPos_01.z._1_1_ = (char)((ushort)uVar39 >> 8);
                  IVar28 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_01,CONCAT22(uVar34,iVar21),pMVar45);
                  puVar46 = IVar28._0_4_;
                  uVar26 = *puVar46;
                  iVar21 = *(int16_t *)(puVar46 + 1);
                  uVar47 = *puVar46;
                  uVar34 = *(undefined2 *)(puVar46 + 1);
                  pCVar14 = *(CubePickingInfo **)pCVar10;
                  pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((((pMVar48 != (MVNetworkGame *)0x0) &&
                       (pMVar49 = (pMVar48->fields)._MaterialRepository_k__BackingField,
                       pCVar14 != (CubePickingInfo *)0x0)) &&
                      (pCVar50 = (pCVar14->fields).cube, pCVar50 != (Cube *)0x0)) &&
                     (pMVar49 != (MVMaterialRepository *)0x0)) {
                    bVar41 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                       (pMVar49,(pCVar50->fields)._.faceMaterials,(MethodInfo *)0x0)
                    ;
                    if (bVar41 == 0) {
                      CVar51 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                    }
                    else {
                      requestedCubePos_02.z._0_1_ = (char)uVar34;
                      requestedCubePos_02.x = (short)uVar47;
                      requestedCubePos_02.y = (short)((uint)uVar47 >> 0x10);
                      requestedCubePos_02.z._1_1_ = (char)((ushort)uVar34 >> 8);
                      CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                         (e,requestedCubePos_02,(MethodInfo *)0x0);
                      if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar16 != (MVCubeModelBase *)0x0) {
                          pos_14.z = iVar21;
                          pos_14.x = (short)uVar26;
                          pos_14.y = (short)((uint)uVar26 >> 0x10);
                          pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar16,pos_14,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Equality
                                             ((CubeBase *)pCVar50,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar41 == 0) goto code_?;
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                          if (pMVar16 != (MVCubeModelBase *)0x0) {
                            pGVar18 = (pMVar16->fields)._.gameObject;
                            if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            localPos_05.z._0_1_ = (char)iVar21;
                            localPos_05.x = (short)uVar26;
                            localPos_05.y = (short)((uint)uVar26 >> 0x10);
                            localPos_05.z._1_1_ = (char)((ushort)iVar21 >> 8);
                            AudioEventHandler::AudioEventHandler_PlaySound
                                      (AudioActions__Enum_FaceMoved,localPos_05,pGVar18,
                                       (MethodInfo *)0x0);
                            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                            pCVar14 = *(CubePickingInfo **)pCVar10;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              pCVar50 = (pCVar14->fields).cube;
                              FVar52 = (pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pVVar53 = Cube::Cube_GetCorners(pCVar50,FVar52,(MethodInfo *)0x0);
                              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pCVar10 = (CubeModelingStateMachine *)
                                        MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                        CubeDataPacker_CornersToByteArray(pVVar53,(MethodInfo *)0x0)
                              ;
                              uVar54 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_get_CurrentMaterialId
                                                 (e,(MethodInfo *)0x0);
                              pBVar55 = Cube::Cube_CreateMaterialArray(uVar54,(MethodInfo *)0x0);
                              pCVar50 = (Cube *)func_?();
                              Cube::Cube__ctor(pCVar50,(Byte__Array *)pCVar10,pBVar55,
                                               (MethodInfo *)0x0);
                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                pos_03.z._0_1_ = (char)iVar21;
                                pos_03.x = (short)uVar26;
                                pos_03.y = (short)((uint)uVar26 >> 0x10);
                                pos_03.z._1_1_ = (char)((ushort)iVar21 >> 8);
                                MVCubeModelBase::MVCubeModelBase_AddCube
                                          (pMVar16,pos_03,(CubeBase *)pCVar50,(MethodInfo *)0x0);
                                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                pCVar10 = e;
                                if (pMVar16 != (MVCubeModelBase *)0x0) {
                                  iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                     (pMVar16,(MethodInfo *)0x0);
                                  CubeModelTool::CubeModelTool_SendCubeEvent
                                            (iVar44,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0
                                            );
                                  pCVar14 = (this->fields).movingEdgeCube;
                                  pCVar56 = (CubePickingInfo *)func_?();
                                  CubePickingInfo::CubePickingInfo__ctor_1
                                            (pCVar56,pCVar14,(MethodInfo *)0x0);
                                  pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                  if (pMVar16 != (MVCubeModelBase *)0x0) {
                                    pos_04.z._0_1_ = (char)iVar21;
                                    pos_04.x = (short)uVar26;
                                    pos_04.y = (short)((uint)uVar26 >> 0x10);
                                    pos_04.z._1_1_ = (char)((ushort)iVar21 >> 8);
                                    pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                        (pMVar16,pos_04,(MethodInfo *)0x0);
                                    pCVar50 = Cube::Cube_Clone_1(pCVar50,(MethodInfo *)0x0);
                                    if (pCVar56 != (CubePickingInfo *)0x0) {
                                      (pCVar56->fields).cube = pCVar50;
                                      func_?();
                                      (pCVar56->fields).iLocalPos.x = (short)uVar26;
                                      (pCVar56->fields).iLocalPos.y = (short)((uint)uVar26 >> 0x10);
                                      (pCVar56->fields).iLocalPos.z = iVar21;
                                      ppCVar57 = &(this->fields).movingEdgeCube;
                                      pCVar14 = *ppCVar57;
                                      if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                         ((e->fields)._TargetCubeModel_k__BackingField !=
                                          (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar14->fields).iLocalPos,
                                                   (pCVar14->fields).cube,(MethodInfo *)0x0);
                                        *ppCVar57 = pCVar56;
                                        func_?();
                                        pCVar14 = *ppCVar57;
                                        if (pCVar14 != (CubePickingInfo *)0x0) {
                                          pVVar58 = Cube::Cube_GetFaceAxis
                                                              ((Vector3 *)&stack0xffffff74,
                                                               (pCVar14->fields).pickedFace,
                                                               (MethodInfo *)0x0);
                                          Cube::Cube_MoveFace(pCVar14,-0.75,*pVVar58,
                                                              (CubeOutOfBoundState__Enum *)
                                                              &stack0xffffffa4,(MethodInfo *)0x0);
code_?:
                                          pCVar14 = (this->fields).movingEdgeCube;
                                          pCVar10 = e;
                                          if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                             ((e->fields)._TargetCubeModel_k__BackingField !=
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
                        goto code_?;
                      }
                    }
code_?:
                    pSVar59 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&stack0xffffff74,(MethodInfo *)0x0);
                    uVar12 = SUB41(pSVar59,0);
                    uVar20 = (undefined1)((uint)pSVar59 >> 8);
                    uVar40 = (undefined2)((uint)pSVar59 >> 0x10);
                    uVar34 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                    uVar39 = (undefined2)
                             ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >> 0x10);
code_?:
                    mscorlib.dll::System::String::String_Concat_3
                              ((String *)CONCAT22(uVar39,uVar34),
                               (String *)CONCAT22(uVar40,CONCAT11(uVar20,uVar12)),(MethodInfo *)0x0)
                    ;
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    pMVar11 = (this->fields).modelCursor;
                    if ((pMVar16 != (MVCubeModelBase *)0x0) && (pMVar11 != (ModelCursor3D *)0x0)) {
                      iPos_05.z._0_1_ = (char)iVar21;
                      iPos_05.x = (short)uVar26;
                      iPos_05.y = (short)((uint)uVar26 >> 0x10);
                      iPos_05.z._1_1_ = (char)((ushort)iVar21 >> 8);
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)pMVar11,iPos_05,(pMVar16->fields)._.gameObject,
                                 CVar51 == CanPerformCubeActionResult__Enum_UnlockMaterial,
                                 (MethodInfo *)0x0);
                      pCVar14 = *(CubePickingInfo **)pCVar10;
                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
joined_?:
                      if ((pCVar14 != (CubePickingInfo *)0x0) && (pMVar16 != (MVCubeModelBase *)0x0)
                         ) {
                        uVar39 = 0;
                        uVar40 = 0;
                        pCVar50 = ((CubePickingInfo__Fields *)((int)pCVar14 + 8))->cube;
                        uVar12 = SUB41(pCVar50,0);
                        uVar20 = (undefined1)((uint)pCVar50 >> 8);
                        uVar34 = (undefined2)((uint)pCVar50 >> 0x10);
code_?:
                        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                  (pMVar16,(pCVar14->fields).iLocalPos,
                                   (Cube *)CONCAT22(uVar34,CONCAT11(uVar20,uVar12)),
                                   (MethodInfo *)CONCAT22(uVar40,uVar39));
                        *(CubePickingInfo **)pCVar10 = (CubePickingInfo *)0x0;
                        func_?();
                        break;
                      }
                    }
                  }
                }
              }
              else if (CVar43 == CubeOutOfBoundState__Enum_OutOfBoundsAddEdge) {
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  uVar40 = (pCVar14->fields).iLocalPos.x;
                  iVar21 = (pCVar14->fields).iLocalPos.z;
                  pMVar45 = (MethodInfo *)(pCVar14->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar4 = (bool)&stack0xffffffac;
                  bVar7 = (byte)((uint)&stack0xffffffac >> 8);
                  uVar6 = (undefined2)((uint)&stack0xffffffac >> 0x10);
                  localPos_00.z._0_1_ = (char)uVar40;
                  localPos_00._0_4_ = &stack0xffffffac;
                  localPos_00.z._1_1_ = (char)((ushort)uVar40 >> 8);
                  IVar28 = Cube::Cube_GetCubePosAboveFace
                                     (localPos_00,CONCAT22(uVar34,iVar21),pMVar45);
                  puVar46 = IVar28._0_4_;
                  uVar26 = *puVar46;
                  iVar21 = *(int16_t *)(puVar46 + 1);
                  uVar47 = *puVar46;
                  uVar34 = *(undefined2 *)(puVar46 + 1);
                  pCVar14 = *(CubePickingInfo **)pCVar10;
                  pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar48 != (MVNetworkGame *)0x0) &&
                      (pMVar49 = (pMVar48->fields)._MaterialRepository_k__BackingField,
                      pCVar14 != (CubePickingInfo *)0x0)) &&
                     ((pCVar50 = (pCVar14->fields).cube, pCVar50 != (Cube *)0x0 &&
                      (pMVar49 != (MVMaterialRepository *)0x0)))) {
                    bVar41 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                       (pMVar49,(pCVar50->fields)._.faceMaterials,(MethodInfo *)0x0)
                    ;
                    if (bVar41 == 0) {
                      CVar51 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                    }
                    else {
                      requestedCubePos_01.z._0_1_ = (char)uVar34;
                      requestedCubePos_01.x = (short)uVar47;
                      requestedCubePos_01.y = (short)((uint)uVar47 >> 0x10);
                      requestedCubePos_01.z._1_1_ = (char)((ushort)uVar34 >> 8);
                      CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                         (e,requestedCubePos_01,(MethodInfo *)0x0);
                      if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar16 != (MVCubeModelBase *)0x0) {
                          pos_13.z = iVar21;
                          pos_13.x = (short)uVar26;
                          pos_13.y = (short)((uint)uVar26 >> 0x10);
                          pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar16,pos_13,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Equality
                                             ((CubeBase *)pCVar50,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar41 == 0) goto code_?;
                          pCVar14 = *(CubePickingInfo **)pCVar10;
                          if (pCVar14 != (CubePickingInfo *)0x0) {
                            bVar17 = 0;
                            pos_15.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                            pos_15._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,pos_15,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                            pCVar14 = *(CubePickingInfo **)pCVar10;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              pCVar50 = (pCVar14->fields).cube;
                              FVar52 = (pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pVVar53 = Cube::Cube_GetCorners(pCVar50,FVar52,(MethodInfo *)0x0);
                              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pCVar10 = (CubeModelingStateMachine *)
                                        MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                        CubeDataPacker_CornersToByteArray(pVVar53,(MethodInfo *)0x0)
                              ;
                              uVar54 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_get_CurrentMaterialId
                                                 (e,(MethodInfo *)0x0);
                              pBVar55 = Cube::Cube_CreateMaterialArray(uVar54,(MethodInfo *)0x0);
                              pCVar50 = (Cube *)func_?();
                              bVar4 = (bool)pBVar55;
                              bVar7 = (byte)((uint)pBVar55 >> 8);
                              uVar6 = (undefined2)((uint)pBVar55 >> 0x10);
                              Cube::Cube__ctor(pCVar50,(Byte__Array *)pCVar10,pBVar55,
                                               (MethodInfo *)0x0);
                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                pos_08.z = iVar21;
                                pos_08.x = (short)uVar26;
                                pos_08.y = (short)((uint)uVar26 >> 0x10);
                                MVCubeModelBase::MVCubeModelBase_AddCube
                                          (pMVar16,pos_08,(CubeBase *)pCVar50,(MethodInfo *)0x0);
                                pCVar14 = (this->fields).movingEdgeCube;
                                pCVar56 = (CubePickingInfo *)func_?();
                                uVar34 = SUB42(pCVar56,0);
                                uVar39 = (undefined2)((uint)pCVar56 >> 0x10);
                                CubePickingInfo::CubePickingInfo__ctor_1
                                          (pCVar56,pCVar14,(MethodInfo *)0x0);
                                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                pCVar10 = e;
                                if (pMVar16 != (MVCubeModelBase *)0x0) {
                                  pos_02.z._0_1_ = (char)iVar21;
                                  pos_02.x = (short)uVar26;
                                  pos_02.y = (short)((uint)uVar26 >> 0x10);
                                  pos_02.z._1_1_ = (char)((ushort)iVar21 >> 8);
                                  pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                      (pMVar16,pos_02,(MethodInfo *)0x0);
                                  pCVar50 = Cube::Cube_Clone_1(pCVar50,(MethodInfo *)0x0);
                                  if (pCVar56 != (CubePickingInfo *)0x0) {
                                    (pCVar56->fields).cube = pCVar50;
                                    func_?();
                                    (pCVar56->fields).iLocalPos.x = (short)uVar26;
                                    (pCVar56->fields).iLocalPos.y = (short)((uint)uVar26 >> 0x10);
                                    (pCVar56->fields).iLocalPos.z = iVar21;
                                    ppCVar57 = &(this->fields).movingEdgeCube;
                                    pCVar14 = *ppCVar57;
                                    if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                       ((e->fields)._TargetCubeModel_k__BackingField !=
                                        (MVCubeModelBase *)0x0)) {
                                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                                 (MethodInfo *)0x0);
                                      *ppCVar57 = (CubePickingInfo *)CONCAT22(uVar39,uVar34);
                                      func_?();
                                      pCVar14 = *ppCVar57;
                                      if (pCVar14 != (CubePickingInfo *)0x0) {
                                        pVVar58 = Cube::Cube_GetFaceAxis
                                                            ((Vector3 *)&stack0xffffff74,
                                                             (pCVar14->fields).pickedFace,
                                                             (MethodInfo *)0x0);
                                        bVar4 = 0;
                                        bVar7 = 0;
                                        uVar6 = 0xbf80;
                                        axis_00.z._2_2_ = (short)((uint)pVVar58->z >> 0x10);
                                        axis_00._0_10_ = *(unkbyte10 *)pVVar58;
                                        Cube::Cube_MoveFace(pCVar14,-1.0,axis_00,
                                                            (CubeOutOfBoundState__Enum *)
                                                            &stack0xffffffd0,(MethodInfo *)0x0);
                                        pCVar14 = *ppCVar57;
                                        if (pCVar14 != (CubePickingInfo *)0x0) {
                                          pVVar58 = Cube::Cube_GetFaceAxis
                                                              ((Vector3 *)&stack0xffffff74,
                                                               (pCVar14->fields).pickedFace,
                                                               (MethodInfo *)0x0);
                                          Cube::Cube_MoveEdge(pCVar14,-0.75,*pVVar58,
                                                              (CubeOutOfBoundState__Enum *)
                                                              &stack0xffffffd0,(MethodInfo *)0x0);
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
                    pSVar59 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&stack0xffffff74,(MethodInfo *)0x0);
                    uVar12 = SUB41(pSVar59,0);
                    uVar20 = (undefined1)((uint)pSVar59 >> 8);
                    uVar40 = (undefined2)((uint)pSVar59 >> 0x10);
                    uVar34 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                    uVar39 = (undefined2)
                             ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >> 0x10);
                    goto code_?;
                  }
                }
              }
              else if (CVar43 == CubeOutOfBoundState__Enum_OutOfBoundsAddVertex) {
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (pCVar14 != (CubePickingInfo *)0x0) {
                  uVar34 = (pCVar14->fields).iLocalPos.x;
                  iVar21 = (pCVar14->fields).iLocalPos.z;
                  pMVar45 = (MethodInfo *)(pCVar14->fields).pickedFace;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  localPos.z._0_1_ = (char)uVar34;
                  localPos._0_4_ = &stack0xffffffac;
                  localPos.z._1_1_ = (char)((ushort)uVar34 >> 8);
                  IVar28 = Cube::Cube_GetCubePosAboveFace
                                     (localPos,CONCAT22(in_stack_42,iVar21),pMVar45);
                  puVar46 = IVar28._0_4_;
                  uVar26 = *puVar46;
                  iVar21 = *(int16_t *)(puVar46 + 1);
                  uVar47 = *puVar46;
                  uVar34 = *(undefined2 *)(puVar46 + 1);
                  pCVar14 = *(CubePickingInfo **)pCVar10;
                  pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((((pMVar48 != (MVNetworkGame *)0x0) &&
                       (pMVar49 = (pMVar48->fields)._MaterialRepository_k__BackingField,
                       pCVar14 != (CubePickingInfo *)0x0)) &&
                      (pCVar50 = (pCVar14->fields).cube, pCVar50 != (Cube *)0x0)) &&
                     (pMVar49 != (MVMaterialRepository *)0x0)) {
                    bVar4 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                                       (pMVar49,(pCVar50->fields)._.faceMaterials,(MethodInfo *)0x0)
                    ;
                    if (bVar4 == 0) {
                      CVar51 = CanPerformCubeActionResult__Enum_UnlockMaterial;
                    }
                    else {
                      bVar4 = (bool)uVar34;
                      bVar7 = (byte)((ushort)uVar34 >> 8);
                      requestedCubePos.z._0_1_ = bVar4;
                      requestedCubePos.x = (short)uVar47;
                      requestedCubePos.y = (short)((uint)uVar47 >> 0x10);
                      requestedCubePos.z._1_1_ = bVar7;
                      CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                         (e,requestedCubePos,(MethodInfo *)0x0);
                      if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                        if (pMVar16 != (MVCubeModelBase *)0x0) {
                          pos_00.z._0_1_ = (char)iVar21;
                          pos_00.x = (short)uVar26;
                          pos_00.y = (short)((uint)uVar26 >> 0x10);
                          pos_00.z._1_1_ = (char)((ushort)iVar21 >> 8);
                          pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                              (pMVar16,pos_00,(MethodInfo *)0x0);
                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?();
                          }
                          bVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                   CubeBase_op_Equality
                                             ((CubeBase *)pCVar50,(CubeBase *)0x0,(MethodInfo *)0x0)
                          ;
                          if (bVar41 == 0) goto code_?;
                          if (*(CubePickingInfo **)pCVar10 != (CubePickingInfo *)0x0) {
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,((*(CubePickingInfo **)pCVar10)->fields).iLocalPos,
                                       AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                            pCVar14 = *(CubePickingInfo **)pCVar10;
                            if (pCVar14 != (CubePickingInfo *)0x0) {
                              pCVar50 = (pCVar14->fields).cube;
                              face = (undefined *)(pCVar14->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                face = &UNK_?;
                                pMVar16 = (MVCubeModelBase *)TypeInfo__Cube;
                                func_?();
                              }
                              pVVar53 = Cube::Cube_GetCorners
                                                  (pCVar50,(Face__Enum)face,(MethodInfo *)0x0);
                              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pCVar10 = (CubeModelingStateMachine *)
                                        MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                        CubeDataPacker_CornersToByteArray(pVVar53,(MethodInfo *)0x0)
                              ;
                              uVar54 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_get_CurrentMaterialId
                                                 (e,(MethodInfo *)0x0);
                              pBVar55 = Cube::Cube_CreateMaterialArray(uVar54,(MethodInfo *)0x0);
                              pCVar50 = (Cube *)func_?();
                              bVar4 = (bool)pBVar55;
                              bVar7 = (byte)((uint)pBVar55 >> 8);
                              uVar6 = (undefined2)((uint)pBVar55 >> 0x10);
                              Cube::Cube__ctor(pCVar50,(Byte__Array *)pCVar10,pBVar55,
                                               (MethodInfo *)0x0);
                              if (pMVar16 != (MVCubeModelBase *)0x0) {
                                pos_07.z = iVar21;
                                pos_07.x = (short)uVar26;
                                pos_07.y = (short)((uint)uVar26 >> 0x10);
                                MVCubeModelBase::MVCubeModelBase_AddCube
                                          (pMVar16,pos_07,(CubeBase *)pCVar50,(MethodInfo *)0x0);
                                pCVar14 = (this->fields).movingEdgeCube;
                                pCVar56 = (CubePickingInfo *)func_?();
                                uVar34 = SUB42(pCVar56,0);
                                uVar39 = (undefined2)((uint)pCVar56 >> 0x10);
                                CubePickingInfo::CubePickingInfo__ctor_1
                                          (pCVar56,pCVar14,(MethodInfo *)0x0);
                                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                                pCVar10 = e;
                                if (pMVar16 != (MVCubeModelBase *)0x0) {
                                  pos_01.z._0_1_ = (char)iVar21;
                                  pos_01.x = (short)uVar26;
                                  pos_01.y = (short)((uint)uVar26 >> 0x10);
                                  pos_01.z._1_1_ = (char)((ushort)iVar21 >> 8);
                                  pCVar50 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                      (pMVar16,pos_01,(MethodInfo *)0x0);
                                  pCVar50 = Cube::Cube_Clone_1(pCVar50,(MethodInfo *)0x0);
                                  if (pCVar56 != (CubePickingInfo *)0x0) {
                                    (pCVar56->fields).cube = pCVar50;
                                    func_?();
                                    (pCVar56->fields).iLocalPos.x = (short)uVar26;
                                    (pCVar56->fields).iLocalPos.y = (short)((uint)uVar26 >> 0x10);
                                    (pCVar56->fields).iLocalPos.z = iVar21;
                                    ppCVar57 = &(this->fields).movingEdgeCube;
                                    pCVar14 = *ppCVar57;
                                    if ((pCVar14 != (CubePickingInfo *)0x0) &&
                                       ((e->fields)._TargetCubeModel_k__BackingField !=
                                        (MVCubeModelBase *)0x0)) {
                                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                ((e->fields)._TargetCubeModel_k__BackingField,
                                                 (pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
                                                 (MethodInfo *)0x0);
                                      *ppCVar57 = (CubePickingInfo *)CONCAT22(uVar39,uVar34);
                                      func_?();
                                      pCVar14 = *ppCVar57;
                                      if (pCVar14 != (CubePickingInfo *)0x0) {
                                        pVVar58 = Cube::Cube_GetFaceAxis
                                                            ((Vector3 *)&stack0xffffff74,
                                                             (pCVar14->fields).pickedFace,
                                                             (MethodInfo *)0x0);
                                        axis.z._1_1_ = (char)((uint)pVVar58->z >> 8);
                                        axis._0_9_ = *(unkbyte9 *)pVVar58;
                                        axis.z._2_2_ = (short)((uint)pVVar58->z >> 0x10);
                                        Cube::Cube_MoveFace(pCVar14,-1.0,axis,
                                                            (CubeOutOfBoundState__Enum *)
                                                            &stack0xffffffd4,(MethodInfo *)0x0);
                                        pCVar14 = *ppCVar57;
                                        if (pCVar14 != (CubePickingInfo *)0x0) {
                                          bVar4 = 0;
                                          bVar7 = 0;
                                          uVar6 = 0;
                                          pVVar58 = Cube::Cube_GetFaceAxis
                                                              ((Vector3 *)&stack0xffffff74,
                                                               (pCVar14->fields).pickedFace,
                                                               (MethodInfo *)0x0);
                                          pCVar56 = *ppCVar57;
                                          if (pCVar56 != (CubePickingInfo *)0x0) {
                                            bVar4 = (pCVar56->fields).pickedEdgeIndex0;
                                            bVar7 = 0;
                                            uVar6 = 0;
                                            Cube::Cube_MoveVertex
                                                      (pCVar14,-0.75,*pVVar58,bVar4,
                                                       (pCVar56->fields).pickedEdgeIndex1,
                                                       (CubeOutOfBoundState__Enum *)&stack0xffffffd4
                                                       ,(MethodInfo *)0x0);
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
                    pSVar59 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&stack0xffffff74,(MethodInfo *)0x0);
                    bVar4 = (bool)pSVar59;
                    bVar7 = (byte)((uint)pSVar59 >> 8);
                    uVar6 = (undefined2)((uint)pSVar59 >> 0x10);
                    mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_____EditCube_OutOfBoundsAddVerte,pSVar59,
                               (MethodInfo *)0x0);
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    pMVar11 = (this->fields).modelCursor;
                    if ((pMVar16 != (MVCubeModelBase *)0x0) && (pMVar11 != (ModelCursor3D *)0x0)) {
                      bVar4 = 0xc9;
                      bVar7 = 0xb2;
                      uVar6 = 0x1044;
                      iPos.z = iVar21;
                      iPos.x = (short)uVar26;
                      iPos.y = (short)((uint)uVar26 >> 0x10);
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)pMVar11,iPos,(pMVar16->fields)._.gameObject,
                                 CVar51 == CanPerformCubeActionResult__Enum_UnlockMaterial,
                                 (MethodInfo *)0x0);
                      pCVar14 = *(CubePickingInfo **)pCVar10;
                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                      goto joined_?;
                    }
                  }
                }
              }
              else if (CVar43 == CubeOutOfBoundState__Enum_OutOfBoundsRemove) {
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                   (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                   pMVar16 != (MVCubeModelBase *)0x0)) {
                  if ((((pMVar16->fields)._.interactionFlags & 4) == 0) &&
                     (((e->fields).constraint != (IModelingConstraint *)0x0 &&
                      (cVar60 = func_?(), cVar60 == '\0')))) {
code_?:
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    pMVar11 = (this->fields).modelCursor;
                    if (((pCVar14 != (CubePickingInfo *)0x0) &&
                        (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                        pMVar16 != (MVCubeModelBase *)0x0)) && (pMVar11 != (ModelCursor3D *)0x0)) {
                      uVar39 = 0;
                      uVar40 = 0;
                      iPos_03.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                      iPos_03._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)pMVar11,iPos_03,(pMVar16->fields)._.gameObject,0,
                                 (MethodInfo *)0x0);
                      pCVar14 = *(CubePickingInfo **)pCVar10;
                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                      if ((pCVar14 != (CubePickingInfo *)0x0) && (pMVar16 != (MVCubeModelBase *)0x0)
                         ) {
                        pCVar50 = (this->fields).prevCubeState;
                        uVar12 = SUB41(pCVar50,0);
                        uVar20 = (undefined1)((uint)pCVar50 >> 8);
                        uVar34 = (undefined2)((uint)pCVar50 >> 0x10);
                        goto code_?;
                      }
                    }
                  }
                  else {
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      iVar44._0_2_ = (pCVar14->fields).iLocalPos.x;
                      iVar44._2_2_ = (pCVar14->fields).iLocalPos.y;
                      iVar21 = (pCVar14->fields).iLocalPos.z;
                      uVar12 = (undefined1)iVar21;
                      uVar20 = (undefined1)((ushort)iVar21 >> 8);
                      FVar52 = (pCVar14->fields).pickedFace;
                      x = iVar44;
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      sVar61 = 0;
                      sVar62 = 0;
                      sVar63 = 0;
                      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0
                         ) {
                        func_?();
                      }
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                ((IntVector *)&stack0xffffffbc,x,
                                 CONCAT13(uVar20,CONCAT12(uVar12,iVar44._2_2_)),
                                 CONCAT22(uVar39,CONCAT11(uVar20,uVar12)),(MethodInfo *)0x0);
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar4 = 0;
                      bVar7 = 0;
                      uVar6 = 0;
                      pVVar58 = Cube::Cube_GetFaceAxis
                                          ((Vector3 *)&stack0xffffff74,FVar52,(MethodInfo *)0x0);
                      pCVar14 = *(CubePickingInfo **)pCVar10;
                      uVar64 = pVVar58->x;
                      uVar65 = pVVar58->y;
                      sVar61 = sVar61 - (short)(int)(float)uVar64;
                      sVar62 = sVar62 - (short)(int)(float)uVar65;
                      sVar63 = sVar63 - (short)(int)pVVar58->z;
                      if (pCVar14 != (CubePickingInfo *)0x0) {
                        pIVar66 = &(pCVar14->fields).iLocalPos;
                        uVar67 = pIVar66->x;
                        uVar6 = pIVar66->y;
                        bVar4 = (bool)uVar67;
                        bVar7 = (byte)((ushort)uVar67 >> 8);
                        pos.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                        pos._0_5_ = *(undefined5 *)pIVar66;
                        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                  (e,pos,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                        pCVar14 = *(CubePickingInfo **)pCVar10;
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           ((e->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0))
                        {
                          pos_06.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                          pos_06._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                          MVCubeModelBase::MVCubeModelBase_RemoveCube
                                    ((e->fields)._TargetCubeModel_k__BackingField,pos_06,
                                     (MethodInfo *)0x0);
                          pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                          if (pMVar16 != (MVCubeModelBase *)0x0) {
                            pos_11.y = sVar62;
                            pos_11.x = sVar61;
                            pos_11.z._0_1_ = (char)sVar63;
                            pos_11.z._1_1_ = (char)((ushort)sVar63 >> 8);
                            a = MVCubeModelBase::MVCubeModelBase_GetCube
                                          (pMVar16,pos_11,(MethodInfo *)0x0);
                            pCVar50 = a;
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            bVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                     CubeBase_op_Inequality
                                               ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                            if (bVar41 == 0) {
                              *(CubePickingInfo **)pCVar10 = (CubePickingInfo *)0x0;
                              func_?();
                            }
                            else {
                              iVar21 = (int16_t)TypeInfo__CubePickingInfo;
                              iVar27 = (int16_t)((uint)TypeInfo__CubePickingInfo >> 0x10);
                              pCVar14 = *(CubePickingInfo **)pCVar10;
                              pCVar56 = (CubePickingInfo *)func_?();
                              CubePickingInfo::CubePickingInfo__ctor_1
                                        (pCVar56,pCVar14,(MethodInfo *)0x0);
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              pCVar50 = Cube::Cube_Clone_1(pCVar50,(MethodInfo *)0x0);
                              if (pCVar56 == (CubePickingInfo *)0x0) goto code_?;
                              (pCVar56->fields).cube = pCVar50;
                              func_?();
                              (pCVar56->fields).iLocalPos.x = iVar21;
                              (pCVar56->fields).iLocalPos.y = iVar27;
                              (pCVar56->fields).iLocalPos.z = sVar63;
                              *(CubePickingInfo **)pCVar10 = pCVar56;
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
                if (CVar43 != CubeOutOfBoundState__Enum_WithinBounds) break;
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((pCVar14 != (CubePickingInfo *)0x0) &&
                   (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                   pMVar16 != (MVCubeModelBase *)0x0)) {
                  if ((((pMVar16->fields)._.interactionFlags & 4) == 0) &&
                     ((e->fields).constraint != (IModelingConstraint *)0x0)) {
                    cVar60 = func_?();
                    uVar68 = (uint)(cVar60 == '\0');
                  }
                  else {
                    uVar68 = 0;
                  }
                  if ((*(CubePickingInfo **)pCVar10 != (CubePickingInfo *)0x0) &&
                     (pCVar50 = ((*(CubePickingInfo **)pCVar10)->fields).cube,
                     pCVar50 != (Cube *)0x0)) {
                    pVVar53 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                        ((CubeBase *)pCVar50,(MethodInfo *)0x0);
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar41 = Cube::Cube_IsCollapsed(pVVar53,(MethodInfo *)0x0);
                    if ((bVar41 != 0) && (uVar68 == 1)) goto code_?;
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      uVar69._0_2_ = (pCVar14->fields).iLocalPos.x;
                      uVar69._2_2_ = (pCVar14->fields).iLocalPos.y;
                      iVar21 = (pCVar14->fields).iLocalPos.z;
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar16 != (MVCubeModelBase *)0x0) {
                        pGVar18 = (pMVar16->fields)._.gameObject;
                        if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        localPos_04.z._0_1_ = (char)iVar21;
                        localPos_04.x = (short)uVar69;
                        localPos_04.y = (short)((uint)uVar69 >> 0x10);
                        localPos_04.z._1_1_ = (char)((ushort)iVar21 >> 8);
                        AudioEventHandler::AudioEventHandler_PlaySound
                                  (AudioActions__Enum_FaceMoved,localPos_04,pGVar18,
                                   (MethodInfo *)0x0);
                        pCVar14 = *(CubePickingInfo **)pCVar10;
                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (pMVar16 != (MVCubeModelBase *)0x0)) {
                          MVCubeModelBase::MVCubeModelBase_CornersChanged
                                    (pMVar16,(pCVar14->fields).iLocalPos,(pCVar14->fields).cube,
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
          else {
            (this->fields).currentInternalState = 2;
            CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                      (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
            bVar4 = 0x60;
            bVar7 = 0xbb;
            uVar6 = 0x1044;
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                      (1,(MethodInfo *)0x0);
            pCVar14 = *(CubePickingInfo **)pCVar10;
            if ((this->fields).edgeHasMoved == 0) {
              pCVar10 = (CubeModelingStateMachine *)&(e->fields)._SelectedCube_k__BackingField;
              *(CubePickingInfo **)pCVar10 = pCVar14;
              func_?();
              if (*(CubePickingInfo **)pCVar10 != (CubePickingInfo *)0x0) {
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          (e,((*(CubePickingInfo **)pCVar10)->fields).iLocalPos,
                           AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                bVar4 = 0;
                bVar7 = 0;
                uVar6 = 0;
                uStack_1 = 2;
                EVar9 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                   (e,(MethodInfo *)0x0);
                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                if (pMVar16 != (MVCubeModelBase *)0x0) {
                  iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar16,(MethodInfo *)0x0)
                  ;
                  CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar9,(MethodInfo *)0x0);
                  if (EVar9 != EditCubeChange__Enum_None) {
code_?:
                    uStack_1 = 0xffffffff;
                    goto code_?;
                  }
                  pCVar14 = *(CubePickingInfo **)pCVar10;
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    iVar21 = (pCVar14->fields).iLocalPos.z;
                    uVar70 = (pCVar14->fields).iLocalPos.x;
                    pMVar45 = (MethodInfo *)(pCVar14->fields).pickedFace;
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    localPos_02.z = uVar70;
                    localPos_02._0_4_ = &stack0xffffffac;
                    IVar28 = Cube::Cube_GetCubePosAboveFace
                                       (localPos_02,CONCAT22(in_stack_19,iVar21),pMVar45);
                    pCVar10 = IVar28._0_4_;
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    pMVar11 = (this->fields).modelCursor;
                    if ((pMVar16 != (MVCubeModelBase *)0x0) && (pMVar11 != (ModelCursor3D *)0x0)) {
                      iPos_01.z._1_1_ = (char)((ushort)*(undefined2 *)&pCVar10->monitor >> 8);
                      iPos_01._0_5_ = *(undefined5 *)pCVar10;
                      ModelCursor::ModelCursor_SetErrorCursor
                                ((ModelCursor *)pMVar11,iPos_01,(pMVar16->fields)._.gameObject,0,
                                 (MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
            else {
              CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                 (e,pCVar14,(MethodInfo *)0x0);
              pCVar14 = *(CubePickingInfo **)pCVar10;
              if (CVar51 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
                pCVar10 = (CubeModelingStateMachine *)(this->fields).modelCursor;
                if (((pCVar14 != (CubePickingInfo *)0x0) &&
                    (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                    pMVar16 != (MVCubeModelBase *)0x0)) &&
                   (pCVar10 != (CubeModelingStateMachine *)0x0)) {
                  iPos_02.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                  iPos_02._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pCVar10,iPos_02,(pMVar16->fields)._.gameObject,1,
                             (MethodInfo *)0x0);
code_?:
                  (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                  func_?();
                  (this->fields).edgeHasMoved = 0;
                  break;
                }
              }
              else if ((pCVar14 != (CubePickingInfo *)0x0) &&
                      (pCVar50 = (pCVar14->fields).cube, pCVar50 != (Cube *)0x0)) {
                pVVar53 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                    ((CubeBase *)pCVar50,(MethodInfo *)0x0);
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  in_stack_22 = 0x95;
                  in_stack_23 = 0xbd;
                  in_stack_24 = 0x1044;
                  func_?();
                }
                bVar41 = Cube::Cube_IsCollapsed(pVVar53,(MethodInfo *)0x0);
                pCVar14 = *(CubePickingInfo **)pCVar10;
                if (bVar41 == 0) {
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      func_?();
                      cRam_? = '\x01';
                    }
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar14 != (CubePickingInfo *)0x0) && (pMVar16 != (MVCubeModelBase *)0x0))
                    {
                      pCVar50 = (pCVar14->fields).cube;
                      uVar34 = SUB42(pCVar50,0);
                      uVar39 = (undefined2)((uint)pCVar50 >> 0x10);
code_?:
                      iVector.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                      iVector._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                (pMVar16,iVector,(Cube *)CONCAT22(uVar39,uVar34),
                                 (MethodInfo *)
                                 CONCAT22(in_stack_24,
                                          CONCAT11(in_stack_23,in_stack_22)));
                      goto code_?;
                    }
                  }
                }
                else if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                  if (pCVar14 != (CubePickingInfo *)0x0) {
                    pos_05.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                    pos_05._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                              (e,pos_05,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                    if ((pCVar14 != (CubePickingInfo *)0x0) && (pMVar16 != (MVCubeModelBase *)0x0))
                    {
                      pos_12.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                      pos_12._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                      MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar16,pos_12,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
                else {
                  pMVar11 = (this->fields).modelCursor;
                  if (((pCVar14 != (CubePickingInfo *)0x0) &&
                      (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                      pMVar16 != (MVCubeModelBase *)0x0)) && (pMVar11 != (ModelCursor3D *)0x0)) {
                    iPos_00.z._1_1_ = (char)((ushort)(pCVar14->fields).iLocalPos.z >> 8);
                    iPos_00._0_5_ = *(undefined5 *)&(pCVar14->fields).iLocalPos;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pMVar11,iPos_00,(pMVar16->fields)._.gameObject,0,
                               (MethodInfo *)0x0);
                    pCVar14 = *(CubePickingInfo **)pCVar10;
                    if (pCVar14 != (CubePickingInfo *)0x0) {
                      uVar47._0_2_ = (pCVar14->fields).iLocalPos.x;
                      uVar47._2_2_ = (pCVar14->fields).iLocalPos.y;
                      iVar21 = (pCVar14->fields).iLocalPos.z;
                      if (cRam_? == '\0') {
                        func_?();
                        func_?();
                        cRam_? = '\x01';
                      }
                      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                      if (pMVar16 != (MVCubeModelBase *)0x0) {
                        pGVar18 = (pMVar16->fields)._.gameObject;
                        if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        localPos_03.z._0_1_ = (char)iVar21;
                        localPos_03.x = (short)uVar47;
                        localPos_03.y = (short)((uint)uVar47 >> 0x10);
                        localPos_03.z._1_1_ = (char)((ushort)iVar21 >> 8);
                        AudioEventHandler::AudioEventHandler_PlaySound
                                  (AudioActions__Enum_FaceMoved,localPos_03,pGVar18,
                                   (MethodInfo *)0x0);
                        pCVar14 = *(CubePickingInfo **)pCVar10;
                        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                        if ((pCVar14 != (CubePickingInfo *)0x0) &&
                           (pMVar16 != (MVCubeModelBase *)0x0)) {
                          in_stack_22 = 0;
                          in_stack_23 = 0;
                          in_stack_24 = 0;
                          pCVar50 = (this->fields).prevCubeState;
                          uVar34 = SUB42(pCVar50,0);
                          uVar39 = (undefined2)((uint)pCVar50 >> 0x10);
                          goto code_?;
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
        bVar17 = 0;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
        (this->fields).edgeHasMoved = 0;
        break;
      case 1:
        bVar17 = 0;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          bVar17 = 0;
          func_?();
        }
        bVar41 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar41 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
code_?:
          (this->fields).currentInternalState = 2;
        }
        break;
      case 2:
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
          bVar17 = 0;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            bVar17 = 0;
            func_?();
          }
          bVar41 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if ((bVar41 != 0) &&
             (bVar41 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar41 != 0))
          {
            (this->fields).currentInternalState = 3;
            break;
          }
        }
        else {
          bVar17 = 0;
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            bVar17 = 0;
            func_?();
          }
          uVar34 = 0;
          bVar41 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                             (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
          if (bVar41 != 0) {
            uStack_1 = 0;
            EVar9 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0)
            ;
            pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
            if (pMVar16 != (MVCubeModelBase *)0x0) {
              iVar44 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar16,(MethodInfo *)0x0);
              CubeModelTool::CubeModelTool_SendCubeEvent(iVar44,EVar9,(MethodInfo *)0x0);
              if (EVar9 != EditCubeChange__Enum_None) {
                bVar17 = 1;
                uStack_1 = 0xffffffff;
                break;
              }
              pCVar14 = (e->fields)._SelectedCube_k__BackingField;
              if (pCVar14 != (CubePickingInfo *)0x0) {
                iVar21 = (pCVar14->fields).iLocalPos.z;
                uVar71 = (pCVar14->fields).iLocalPos.x;
                method_00 = (Cube__Class *)(pCVar14->fields).pickedFace;
                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                  method_00 = TypeInfo__Cube;
                  func_?();
                }
                localPos_06.z._0_1_ = (char)uVar71;
                localPos_06._0_4_ = &stack0xffffffac;
                localPos_06.z._1_1_ = (char)((ushort)uVar71 >> 8);
                IVar28 = Cube::Cube_GetCubePosAboveFace
                                   (localPos_06,CONCAT22(uVar34,iVar21),(MethodInfo *)method_00);
                pCVar10 = IVar28._0_4_;
                pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
                pMVar11 = (this->fields).modelCursor;
                if ((pMVar16 != (MVCubeModelBase *)0x0) && (pMVar11 != (ModelCursor3D *)0x0)) {
                  iPos_04.z._1_1_ = (char)((ushort)*(undefined2 *)&pCVar10->monitor >> 8);
                  iPos_04._0_5_ = *(undefined5 *)pCVar10;
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar11,iPos_04,(pMVar16->fields)._.gameObject,0,
                             (MethodInfo *)0x0);
                  uStack_1 = 0xffffffff;
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
        bVar41 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar41 != 0) &&
           (fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0),
           _UNK_? < fVar25 - (this->fields).prevMouseUpTime)) {
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
            fVar25 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                               (StringLiteral_Mouse_X,(MethodInfo *)0x0);
            fVar25 = (float)((uint)fVar25 & _UNK_?);
            fVar35 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                               (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
            if ((fVar25 != 0.0) || ((float)((uint)fVar35 & _UNK_?) != 0.0)) {
              pCVar14 = (this->fields).prevSelectedCube;
              if (pCVar14 != (CubePickingInfo *)0x0) {
                cube = (CubeBase__Class *)(pCVar14->fields).cube;
                FVar52 = (pCVar14->fields).pickedFace;
                if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                  cube = TypeInfo__MV__WorldObject__CubeBase;
                  func_?();
                }
                uVar54 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                                   ((CubeBase *)cube,FVar52,(MethodInfo *)0x0);
                pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar48 != (MVNetworkGame *)0x0) &&
                   (pMVar49 = (pMVar48->fields)._MaterialRepository_k__BackingField,
                   pMVar49 != (MVMaterialRepository *)0x0)) {
                  bVar4 = 0x29;
                  bVar7 = 0xc2;
                  uVar6 = 0x1044;
                  bVar41 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                                     (pMVar49,uVar54,(MethodInfo *)0x0);
                  if (bVar41 == 0) {
                    pCVar14 = (this->fields).prevSelectedCube;
                    pCVar10 = (CubeModelingStateMachine *)(this->fields).modelCursor;
                    if (((pCVar14 == (CubePickingInfo *)0x0) ||
                        (pMVar16 = (e->fields)._TargetCubeModel_k__BackingField,
                        pMVar16 == (MVCubeModelBase *)0x0)) ||
                       (pCVar10 == (CubeModelingStateMachine *)0x0)) goto code_?;
                    bVar4 = 0xc0;
                    bVar7 = 0xc2;
                    uVar6 = 0x1044;
                    ModelCursor::ModelCursor_SetErrorCursor
                              ((ModelCursor *)pCVar10,(pCVar14->fields).iLocalPos,
                               (pMVar16->fields)._.gameObject,1,(MethodInfo *)0x0);
                  }
                  else {
                    uVar72 = CubeModelingStateMachine::
                             CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
                    (this->fields).prevMaterial = uVar72;
                    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                              (e,uVar54,(MethodInfo *)0x0);
                    *(CubePickingInfo **)pCVar10 = (this->fields).prevSelectedCube;
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
        bVar17 = 0;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          bVar17 = 0;
          func_?();
        }
        bVar41 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar41 != 0) goto code_?;
        pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
        bVar41 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                           ((pMVar16->fields)._.gameObject,(IntVector *)&stack0xffffff8c,
                            (MethodInfo *)0x0);
        if (bVar41 != 0) {
          requestedCubePos_00.x._1_1_ = uVar20;
          requestedCubePos_00.x._0_1_ = uVar12;
          uVar12 = 0;
          uVar20 = 0;
          requestedCubePos_00.y = iVar21;
          requestedCubePos_00.z = 0;
          CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                             (e,requestedCubePos_00,(MethodInfo *)0x0);
          if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
            pos_09.x._1_1_ = uVar20;
            pos_09.x._0_1_ = uVar12;
            pos_09.y = iVar21;
            pos_09.z = (int16_t)e;
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            iVar21 = CONCAT11(uVar33,uVar32);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar53 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pCVar13 = (CubeModelingStateMachine *)
                      MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_CornersToByteArray(pVVar53,(MethodInfo *)0x0);
            uVar54 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (pCVar13,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar27 = -0x3a67;
            uVar34 = 0x1044;
            pBVar55 = Cube::Cube_CreateMaterialArray(uVar54,(MethodInfo *)0x0);
            uVar12 = SUB41(TypeInfo__Cube,0);
            uVar20 = (undefined1)((uint)TypeInfo__Cube >> 8);
            uVar39 = (undefined2)((uint)TypeInfo__Cube >> 0x10);
            pCVar10 = (CubeModelingStateMachine *)func_?();
            Cube::Cube__ctor((Cube *)pCVar10,(Byte__Array *)pCVar13,pBVar55,(MethodInfo *)0x0);
            if (CONCAT22(uVar34,iVar27) == 0) goto code_?;
            pos_10.x._1_1_ = uVar20;
            pos_10.x._0_1_ = uVar12;
            pos_10.y = uVar39;
            pos_10.z = iVar21;
            MVCubeModelBase::MVCubeModelBase_AddCube
                      ((MVCubeModelBase *)CONCAT22(uVar34,iVar27),pos_10,(CubeBase *)pCVar10,
                       (MethodInfo *)0x0);
          }
        }
      }
      pCVar14 = (this->fields).movingEdgeCube;
      if (pCVar14 == (CubePickingInfo *)0x0) {
        (this->fields).prevCubeState = (Cube *)0x0;
        func_?();
      }
      else {
        pCVar50 = (pCVar14->fields).cube;
        pCVar10 = e;
        if (pCVar50 == (Cube *)0x0) goto code_?;
        pCVar50 = Cube::Cube_Clone(pCVar50,(MethodInfo *)0x0);
        (this->fields).prevCubeState = pCVar50;
        func_?();
      }
      (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
      func_?();
      pMVar11 = (this->fields).modelCursor;
      if (pMVar11 == (ModelCursor3D *)0x0) goto code_?;
      pCVar13 = (CubeModelingStateMachine *)(this->fields).movingEdgeCube;
      pCVar14 = (e->fields)._SelectedCube_k__BackingField;
      pMVar16 = (e->fields)._TargetCubeModel_k__BackingField;
      uVar12 = SUB41(pCVar14,0);
      uVar20 = (undefined1)((uint)pCVar14 >> 8);
      uVar34 = (undefined2)((uint)pCVar14 >> 0x10);
      pCVar10 = e;
      if (pMVar16 == (MVCubeModelBase *)0x0) goto code_?;
      pTVar29 = (Transform *)(pMVar16->fields)._.gameObject;
      iVar44 = (this->fields).currentInternalState;
      uVar32 = (undefined1)iVar44;
      uVar33 = (undefined1)((uint)iVar44 >> 8);
      uVar39 = (undefined2)((uint)iVar44 >> 0x10);
      pCVar10 = pCVar13;
      if (pCVar13 == (CubeModelingStateMachine *)0x0) {
        pFVar73 = (pMVar11->fields)._.faceCursor;
        if (pCVar14 == (CubePickingInfo *)0x0) {
          if ((pFVar73 != (FaceCursor *)0x0) &&
             (pGVar18 = (pFVar73->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar18,0,(MethodInfo *)0x0);
            pIVar15 = (pMVar11->fields).indentArea;
            if ((pIVar15 != (IndentArea *)0x0) &&
               (pGVar18 = (pIVar15->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar18,0,(MethodInfo *)0x0);
code_?:
              this_00 = (pMVar11->fields)._.errorCursor;
              if (this_00 != (CellCursor *)0x0) {
                CellCursor::CellCursor_UpdateCursor(this_00,(MethodInfo *)0x0);
                ModelCursor::ModelCursor_HandleLaser
                          ((ModelCursor *)pMVar11,(CubePickingInfo *)pCVar13,
                           (CubePickingInfo *)CONCAT22(uVar34,CONCAT11(uVar20,uVar12)),
                           (GameObject *)pTVar29,CONCAT22(uVar39,CONCAT11(uVar33,uVar32)),bVar17,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
        else if ((pFVar73 != (FaceCursor *)0x0) &&
                (pGVar18 = (pFVar73->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar18,1,(MethodInfo *)0x0);
          pFVar73 = (pMVar11->fields)._.faceCursor;
          if (pFVar73 != (FaceCursor *)0x0) {
            FaceCursor::FaceCursor_UpdateCursor
                      (pFVar73,(CubePickingInfo *)CONCAT22(uVar34,CONCAT11(uVar20,uVar12)),
                       (GameObject *)pTVar29,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        goto code_?;
      }
      pIVar15 = (pMVar11->fields).indentArea;
      if (pIVar15 == (IndentArea *)0x0) goto code_?;
      pMVar74 = pMVar11;
      IndentArea::IndentArea_UpdateIndentArea
                (pIVar15,(CubePickingInfo *)pCVar13,(GameObject *)pTVar29,(MethodInfo *)0x0);
      pFVar73 = (pMVar11->fields)._.faceCursor;
      if ((pFVar73 == (FaceCursor *)0x0) ||
         (pGVar18 = (pFVar73->fields).gameObject, pGVar18 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar18,1,(MethodInfo *)0x0);
      pFVar73 = (pMVar11->fields)._.faceCursor;
      if (pFVar73 == (FaceCursor *)0x0) goto code_?;
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
      face_00 = (pCVar13->fields)._.currentState;
      pCVar50 = (Cube *)(pCVar13->fields)._.transitionTable;
      uVar75._0_2_ = *(undefined2 *)&(pCVar13->fields).currentMaterialId.currentCryptoKey;
      uVar75._2_2_ = *(undefined2 *)&(pCVar13->fields).currentMaterialId.fakeValue;
      iVar21 = *(int16_t *)&(pCVar13->fields).currentMaterial;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVector_00.z._0_1_ = (char)iVar21;
      iVector_00.x = (short)uVar75;
      iVector_00.y = (short)((uint)uVar75 >> 0x10);
      iVector_00.z._1_1_ = (char)((ushort)iVar21 >> 8);
      pVVar53 = Cube::Cube_GetFaceVerticesWorld
                          ((GameObject *)pTVar29,pCVar50,(Face__Enum)face_00,iVector_00,
                           (MethodInfo *)0x0);
      uVar34 = SUB42(pVVar53,0);
      uVar40 = (undefined2)((uint)pVVar53 >> 0x10);
      this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pGVar18 = (pFVar73->fields).gameObject;
      if ((((pGVar18 == (GameObject *)0x0) ||
           (this_03 = (MeshFilter *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar18,
                                 UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                ), this_03 == (MeshFilter *)0x0)) ||
          (this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                               (this_03,(MethodInfo *)0x0), this_04 == (Mesh *)0x0)) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_04,(MethodInfo *)0x0),
         pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
         this_02 ==
         (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)0x0)) goto code_?;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = 0;
        if (uVar68 < pMVar77->max_length) {
          (&pMVar77->vector[0].index)[uVar68] = 0;
          goto code_?;
        }
        goto code_?;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddWithResize
                ((List_1_System_Int32_ *)this_02,0,pMVar45->klass->rgctx_data[0xe].method);
code_?:
      pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = uVar68 < pMVar77->max_length;
        if (!(bool)uVar12) goto code_?;
        (&pMVar77->vector[0].index)[uVar68] = 3;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_02,3,pMVar45->klass->rgctx_data[0xe].method);
      }
      pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = uVar68 < pMVar77->max_length;
        if (!(bool)uVar12) goto code_?;
        (&pMVar77->vector[0].index)[uVar68] = 2;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_02,2,pMVar45->klass->rgctx_data[0xe].method);
      }
      pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = uVar68 < pMVar77->max_length;
        if (!(bool)uVar12) goto code_?;
        (&pMVar77->vector[0].index)[uVar68] = 2;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_02,2,pMVar45->klass->rgctx_data[0xe].method);
      }
      pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = uVar68 < pMVar77->max_length;
        if (!(bool)uVar12) goto code_?;
        (&pMVar77->vector[0].index)[uVar68] = 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_02,1,pMVar45->klass->rgctx_data[0xe].method);
      }
      pMVar45 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      piVar76 = &(this_02->fields)._version;
      *piVar76 = *piVar76 + 1;
      pMVar77 = (this_02->fields)._items;
      uVar68 = (this_02->fields)._size;
      if (pMVar77 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
      goto code_?;
      if (uVar68 < pMVar77->max_length) {
        (this_02->fields)._size = uVar68 + 1;
        uVar12 = uVar68 < pMVar77->max_length;
        if (!(bool)uVar12) goto code_?;
        (&pMVar77->vector[0].index)[uVar68] = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_02,0,pMVar45->klass->rgctx_data[0xe].method);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (this_04,(Vector3__Array *)CONCAT22(uVar40,uVar34),(MethodInfo *)0x0);
      value_00 = FaceCursor::FaceCursor_SetUVs
                           (pFVar73,(Edge__Enum)(pCVar13->fields)._.prevEvent,
                            *(bool *)((int)&(pCVar13->fields)._.curEvent + 1),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(this_04,value_00,(MethodInfo *)0x0)
      ;
      pMVar77 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (this_02,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                (this_04,(Int32__Array *)pMVar77,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                (this_04,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                (this_04,(MethodInfo *)0x0);
      if ((pCVar13->fields)._.prevEvent == (Object *)0x0) {
        pGVar18 = (pFVar73->fields).gameObject;
        if ((pGVar18 != (GameObject *)0x0) &&
           (this_05 = (Renderer *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar18,
                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                ), this_05 != (Renderer *)0x0)) {
          pMVar78 = (pFVar73->fields).materialNone;
          uVar12 = SUB41(pMVar78,0);
          uVar20 = (undefined1)((uint)pMVar78 >> 8);
          uVar38 = (undefined2)((uint)pMVar78 >> 0x10);
          goto code_?;
        }
        goto code_?;
      }
      if ((*(bool *)&(pCVar13->fields)._.curEvent != 0) ||
         (*(bool *)((int)&(pCVar13->fields)._.curEvent + 1) != 0)) {
        pGVar18 = (pFVar73->fields).gameObject;
        if ((pGVar18 != (GameObject *)0x0) &&
           (this_05 = (Renderer *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar18,
                                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                ), this_05 != (Renderer *)0x0)) {
          pMVar78 = (pFVar73->fields).materialCorner;
          uVar12 = SUB41(pMVar78,0);
          uVar20 = (undefined1)((uint)pMVar78 >> 8);
          uVar38 = (undefined2)((uint)pMVar78 >> 0x10);
          goto code_?;
        }
        goto code_?;
      }
      pGVar18 = (pFVar73->fields).gameObject;
      if ((pGVar18 == (GameObject *)0x0) ||
         (this_05 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar18,
                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                              ), this_05 == (Renderer *)0x0)) goto code_?;
      pMVar78 = (pFVar73->fields).materialEdge;
      uVar12 = SUB41(pMVar78,0);
      uVar20 = (undefined1)((uint)pMVar78 >> 8);
      uVar38 = (undefined2)((uint)pMVar78 >> 0x10);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (this_05,(Material *)CONCAT22(uVar38,CONCAT11(uVar20,uVar12)),(MethodInfo *)0x0);
      pGVar18 = (pFVar73->fields).gameObject;
      if (pGVar18 == (GameObject *)0x0) goto code_?;
      pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar18,(MethodInfo *)0x0);
      pVVar53 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                          (this_04,(MethodInfo *)0x0);
      if (pVVar53 == (Vector3__Array *)0x0) goto code_?;
      uVar12 = 0;
      if (pVVar53->max_length != 0) {
        if (pTVar29 != (Transform *)0x0) {
          pVVar58 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                              ((Vector3 *)&stack0xffffff74,pTVar29,pVVar53->vector[0],
                               (MethodInfo *)0x0);
          uVar79 = pVVar58->x;
          uVar80 = pVVar58->y;
          fVar25 = pVVar58->z;
          pGVar18 = (pFVar73->fields).gameObject;
          uVar36 = (undefined1)uVar79;
          uVar37 = (undefined1)((uint)uVar79 >> 8);
          uVar38 = (undefined2)((uint)uVar79 >> 0x10);
          uVar81 = (undefined2)uVar80;
          uVar82 = (undefined2)((uint)uVar80 >> 0x10);
          if (pGVar18 != (GameObject *)0x0) {
            bVar17 = 0x78;
            pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar18,(MethodInfo *)0x0);
            if (pTVar29 != (Transform *)0x0) {
              pVVar58 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffff80,pTVar29,(MethodInfo *)0x0);
              uVar83 = pVVar58->x;
              uVar84 = pVVar58->y;
              iVar85 = CONCAT22(uVar40,uVar34);
              if (iVar85 != 0) {
                uVar12 = 0;
                if (*(int *)(iVar85 + 0xc) != 0) {
                  uVar86 = (pCVar13->fields)._.nextEvent;
                  uVar87 = (pCVar13->fields)._.stateName;
                  fVar25 = pVVar58->z +
                           (float)(pCVar13->fields)._.data * _UNK_? +
                           (*(float *)(iVar85 + 0x18) - fVar25);
                  fVar35 = (float)uVar84 +
                           (float)uVar87 * _UNK_? +
                           ((float)((ulonglong)*(undefined8 *)(iVar85 + 0x10) >> 0x20) -
                           (float)CONCAT22(uVar82,uVar81));
                  uVar12 = SUB41(fVar25,0);
                  uVar20 = (undefined1)((uint)fVar25 >> 8);
                  uVar34 = (undefined2)((uint)fVar25 >> 0x10);
                  value.y._0_2_ = SUB42(fVar35,0);
                  value.x = (float)uVar83 +
                            (float)uVar86 * _UNK_? +
                            ((float)*(undefined8 *)(iVar85 + 0x10) -
                            (float)CONCAT22(uVar38,CONCAT11(uVar37,uVar36)));
                  value.y._2_2_ = (short)((uint)fVar35 >> 0x10);
                  value.z._0_1_ = uVar12;
                  value.z._1_1_ = uVar20;
                  value.z._2_2_ = uVar34;
                  pMVar11 = pMVar74;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar29,value,(MethodInfo *)0x0);
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
        }
        goto code_?;
      }
    }
code_?:
    cVar60 = func_?();
    this = (EditCubes *)pCVar13;
    if ((bool)uVar12) {
      cRam_? = cRam_? + cVar60 +
                     (CARRY1(bVar5,extraout_DH) || 0xfe < (byte)(bVar5 + extraout_DH));
      pcVar88 = (code *)swi(3);
      (*pcVar88)();
      return;
    }
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = 0;
    bVar7 = 0;
    uVar6 = 0;
  }
  *(int *)(unaff_EBX + 0x6a04c4) = *(int *)(unaff_EBX + 0x6a04c4) + 1;
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                     (KogamaControls__Enum_PointerSelect,
                      (MethodInfo *)CONCAT22(uVar6,CONCAT11(bVar7,bVar4)));
  *(bool *)&(((CubeModelingStateMachine *)this)->fields)._.transitionTable = bVar4;
code_?:
  *unaff_FS_OFFSET = uStack_3;
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

