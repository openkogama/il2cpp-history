
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Enter
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelCursor3D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).delta = 0.0;
  (this->fields).deltaAccum = 0.0;
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    this_00 = (ModelCursor3D *)FUN_?(TypeInfo__ModelCursor3D);
    ModelCursor3D::ModelCursor3D__ctor(this_00,cubeCorners,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).modelCursor = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).modelCursor >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
        (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)) &&
       ((pGVar9 = (pGVar8->fields).AvatarCommandsBuildMode,
        pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
        (pGVar10 = (pGVar9->fields).LaserCommands,
        pGVar10 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
      pAVar11 = (pGVar10->fields).OnChangeState;
      if (pAVar11 != (Action_1_LaserPointerState_ *)0x0) {
        (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code,2);
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                         (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,
                          (MethodInfo *)0x0);
      (this->fields)._.waitForMouseUp = bVar12;
      (this->fields).currentInternalState = 2;
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uStackX_8 = (MVCubeModelBase *)this;
  uStackX_10 = (MVCubeModelBase *)e;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CanPerformCubeActionResult);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubePickingInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAdd___er);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_main_state);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___edge);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAddVerte);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_move_edge___pointer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_main_state___update);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsRemove__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsRemove__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_WithinBounds___erro);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAddEdge_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAddVerte);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_paint_state);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAdd___ad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_OutOfBoundsAddEdge_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_multi_change___poin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_WithinBounds___corn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_____EditCube_WithinBounds___unlo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  abStackX_20[0] = 0;
  uStack_1 = (Cube *)((ulonglong)uStack_1._6_2_ << 0x30);
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  aEStack_2[0] = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    (this->fields)._.waitForMouseUp = bVar3;
    return;
  }
  pMVar4 = (this->fields).modelCursor;
  if (pMVar4 == (ModelCursor3D *)0x0) goto code_?;
  if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0 &&
      (pMVar4->fields).indentArea != (IndentArea *)0x0) {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
      pIVar5 = (((this->fields).modelCursor)->fields).indentArea;
      pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
      if ((pMVar6 == (MVCubeModelBase *)0x0) || (pIVar5 == (IndentArea *)0x0))
      goto code_?;
      IndentArea::IndentArea_UpdateIndentArea
                (pIVar5,(e->fields)._SelectedCube_k__BackingField,(pMVar6->fields)._.gameObject,
                 (MethodInfo *)0x0);
      pMVar4 = (this->fields).modelCursor;
      if ((pMVar4 == (ModelCursor3D *)0x0) ||
         (pIVar5 = (pMVar4->fields).indentArea, pIVar5 == (IndentArea *)0x0))
      goto code_?;
      bVar3 = IndentArea::IndentArea_IsColliding(pIVar5,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pMVar4 = (this->fields).modelCursor;
        if (((pMVar4 == (ModelCursor3D *)0x0) ||
            (pIVar5 = (pMVar4->fields).indentArea, pIVar5 == (IndentArea *)0x0)) ||
           (pGVar7 = (pIVar5->fields).gameObject, pGVar7 == (GameObject *)0x0))
        goto code_?;
        bVar3 = 0;
      }
      else {
        pCVar8 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
        (pCVar8->fields).pickedEdge = 0;
        pMVar4 = (this->fields).modelCursor;
        if (((pMVar4 == (ModelCursor3D *)0x0) ||
            (pIVar5 = (pMVar4->fields).indentArea, pIVar5 == (IndentArea *)0x0)) ||
           (pGVar7 = (pIVar5->fields).gameObject, pGVar7 == (GameObject *)0x0))
        goto code_?;
        bVar3 = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,bVar3,(MethodInfo *)0x0);
    }
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                     (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).prevMouseUpTime = fVar9;
  }
  EditCubes_SetEditDetail(this,e,(MethodInfo *)0x0);
  cStack_10 = '\0';
  iVar11 = (this->fields).currentInternalState;
  if (iVar11 == 0) {
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      (this->fields).currentInternalState = 1;
      if (e == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
      (this->fields).edgeHasMoved = 0;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar9 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                         (StringLiteral_Mouse_X,(MethodInfo *)0x0);
      fVar12 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                         (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      fVar9 = fVar9 * _UNK_?;
      fVar12 = fVar12 * _UNK_?;
      if (e == (CubeModelingStateMachine *)0x0) goto code_?;
      pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
      pCVar8 = (this->fields).movingEdgeCube;
      fVar13 = (this->fields).mouseSensitivity;
      if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
      bVar3 = (pCVar8->fields).pickedEdgeIndex0;
      edgeIndex1 = (pCVar8->fields).pickedEdgeIndex1;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_14._0_8_ = CONCAT44(fVar12,fVar9);
      VStack_14.z = 0.0;
      CVar15 = SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                         (pMVar6,pCVar8,&VStack_14,&(this->fields).delta,
                          &(this->fields).deltaAccum,fVar13,abStackX_20,bVar3,edgeIndex1,
                          aEStack_2,(MethodInfo *)0x0);
      if (CVar15 == CubeOutOfBoundState__Enum_WithinBounds) {
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar6 == (MVCubeModelBase *)0x0) goto code_?;
        iVar16 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar6,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent(iVar16,aEStack_2[0],(MethodInfo *)0x0);
      }
      if ((abStackX_20[0] & (this->fields).edgeHasMoved == 0) != 0) {
        (this->fields).edgeHasMoved = 1;
      }
      if (CVar15 == CubeOutOfBoundState__Enum_OutOfBoundsAdd) {
        pCVar8 = (this->fields).movingEdgeCube;
        if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
        IVar17 = (pCVar8->fields).iLocalPos;
        FVar18 = (pCVar8->fields).pickedFace;
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStackX_8._0_6_ = IVar17;
        pIVar19 = Cube::Cube_GetCubePosAboveFace
                            ((IntVector *)&uStackX_10,(IntVector *)&uStackX_8,FVar18,
                             (MethodInfo *)0x0);
        uVar20._0_2_ = pIVar19->x;
        uVar20._2_2_ = pIVar19->y;
        iVar21 = pIVar19->z;
        IVar22 = *pIVar19;
        IVar23 = *pIVar19;
        IVar24 = *pIVar19;
        IVar17 = *pIVar19;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,*pIVar19);
        CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                           (e,(IntVector *)&uStackX_8,(this->fields).movingEdgeCube,
                            (MethodInfo *)0x0);
        if (CVar25 == CanPerformCubeActionResult__Enum_Yes) {
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          if ((pMVar6 == (MVCubeModelBase *)0x0) ||
             (pRVar26 = (pMVar6->fields).prototypeCubeModel,
             pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
          pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                              (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pCVar27 == (Cube *)0x0) {
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar24);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,(IntVector *)&uStackX_8,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
            uStackX_10 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pCVar27 = (pCVar8->fields).cube;
            FVar18 = (pCVar8->fields).pickedFace;
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar28 = Cube::Cube_GetCorners(pCVar27,FVar18,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            pBVar29 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_CornersToByteArray(pVVar28,(MethodInfo *)0x0);
            uVar30 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (e,(MethodInfo *)0x0);
            pBVar31 = Cube::Cube_CreateMaterialArray(uVar30,(MethodInfo *)0x0);
            VStack_14._0_8_ = FUN_?(TypeInfo__Cube);
            Cube::Cube__ctor((Cube *)VStack_14._0_8_,pBVar29,pBVar31,(MethodInfo *)0x0);
            if (uStackX_10 == (MVCubeModelBase *)0x0) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar23);
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (uStackX_10,(IntVector *)&uStackX_8,(CubeBase *)VStack_14._0_8_,
                       (MethodInfo *)0x0);
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            if (pMVar6 == (MVCubeModelBase *)0x0) goto code_?;
            iVar16 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar6,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent
                      (iVar16,EditCubeChange__Enum_CubeAdded,(MethodInfo *)0x0);
            pCVar8 = (this->fields).movingEdgeCube;
            pCVar32 = (CubePickingInfo *)FUN_?(TypeInfo__CubePickingInfo);
            CubePickingInfo::CubePickingInfo__ctor_1(pCVar32,pCVar8,(MethodInfo *)0x0);
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            if ((pMVar6 == (MVCubeModelBase *)0x0) ||
               (pRVar26 = (pMVar6->fields).prototypeCubeModel,
               pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar22);
            pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
            pCVar27 = Cube::Cube_Clone_1(pCVar27,(MethodInfo *)0x0);
            if (pCVar32 == (CubePickingInfo *)0x0) goto code_?;
            (pCVar32->fields).cube = pCVar27;
            func_?(&pCVar32->fields);
            (pCVar32->fields).iLocalPos.x = (undefined2)uVar20;
            (pCVar32->fields).iLocalPos.y = uVar20._2_2_;
            (pCVar32->fields).iLocalPos.z = iVar21;
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
            goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
            MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                      (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
            (this->fields).movingEdgeCube = pCVar32;
            func_?(&(this->fields).movingEdgeCube);
            uStackX_10 = (MVCubeModelBase *)((ulonglong)uStackX_10 & 0xffffffff00000000);
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pVVar33 = Cube::Cube_GetFaceAxis
                                (&VStack_34,(pCVar8->fields).pickedFace,(MethodInfo *)0x0);
            VStack_14._0_8_ = *(undefined8 *)pVVar33;
            VStack_14.z = pVVar33->z;
            Cube::Cube_MoveFace(pCVar8,_UNK_?,&VStack_14,
                                (CubeOutOfBoundState__Enum *)&uStackX_10,(MethodInfo *)0x0);
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
            goto code_?;
code_?:
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
            MVCubeModelBase::MVCubeModelBase_CornersChanged
                      (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        EStack_35.klass = (Enum__Class *)TypeInfo__CanPerformCubeActionResult;
        EStack_35.monitor = (MonitorData *)0xffffffffffffffff;
        CStack_36 = CVar25;
        str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_35,(MethodInfo *)0x0);
        pSVar37 = StringLiteral_____EditCube_OutOfBoundsAdd___er;
code_?:
        mscorlib.dll::System::String::String_Concat_4(pSVar37,str1,(MethodInfo *)0x0);
        pMVar4 = (this->fields).modelCursor;
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar6 == (MVCubeModelBase *)0x0) || (pMVar4 == (ModelCursor3D *)0x0)) {
code_?:
          FUN_?();
          pcVar38 = (code *)swi(3);
          (*pcVar38)();
          return;
        }
        uStackX_8._0_6_ = (IntVector)CONCAT24(iVar21,uVar20);
        ModelCursor::ModelCursor_SetErrorCursor
                  ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,(pMVar6->fields)._.gameObject,
                   CVar25 == CanPerformCubeActionResult__Enum_UnlockMaterial,(MethodInfo *)0x0);
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        pCVar8 = (this->fields).movingEdgeCube;
        if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
        goto code_?;
code_?:
        pCVar27 = (pCVar8->fields).cube;
code_?:
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
        MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                  (pMVar6,(IntVector *)&uStackX_8,pCVar27,(MethodInfo *)0x0);
code_?:
        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
        func_?(&(this->fields).movingEdgeCube);
        goto code_?;
      }
      if (CVar15 == CubeOutOfBoundState__Enum_OutOfBoundsAddEdge) {
        pCVar8 = (this->fields).movingEdgeCube;
        if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
        IVar17 = (pCVar8->fields).iLocalPos;
        FVar18 = (pCVar8->fields).pickedFace;
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStackX_8._0_6_ = IVar17;
        pIVar19 = Cube::Cube_GetCubePosAboveFace
                            ((IntVector *)&uStackX_10,(IntVector *)&uStackX_8,FVar18,
                             (MethodInfo *)0x0);
        uVar20._0_2_ = pIVar19->x;
        uVar20._2_2_ = pIVar19->y;
        iVar21 = pIVar19->z;
        IVar23 = *pIVar19;
        IVar24 = *pIVar19;
        IVar17 = *pIVar19;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,*pIVar19);
        CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                           (e,(IntVector *)&uStackX_8,(this->fields).movingEdgeCube,
                            (MethodInfo *)0x0);
        if (CVar25 == CanPerformCubeActionResult__Enum_Yes) {
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          if ((pMVar6 == (MVCubeModelBase *)0x0) ||
             (pRVar26 = (pMVar6->fields).prototypeCubeModel,
             pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
          pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                              (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pCVar27 == (Cube *)0x0) {
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            uStackX_10 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pCVar27 = (pCVar8->fields).cube;
            FVar18 = (pCVar8->fields).pickedFace;
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar28 = Cube::Cube_GetCorners(pCVar27,FVar18,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            pBVar29 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                      CubeDataPacker_CornersToByteArray(pVVar28,(MethodInfo *)0x0);
            uVar30 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (e,(MethodInfo *)0x0);
            pBVar31 = Cube::Cube_CreateMaterialArray(uVar30,(MethodInfo *)0x0);
            VStack_14._0_8_ = FUN_?(TypeInfo__Cube);
            Cube::Cube__ctor((Cube *)VStack_14._0_8_,pBVar29,pBVar31,(MethodInfo *)0x0);
            if (uStackX_10 == (MVCubeModelBase *)0x0) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar24);
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (uStackX_10,(IntVector *)&uStackX_8,(CubeBase *)VStack_14._0_8_,
                       (MethodInfo *)0x0);
            pCVar8 = (this->fields).movingEdgeCube;
            pCVar32 = (CubePickingInfo *)FUN_?(TypeInfo__CubePickingInfo);
            CubePickingInfo::CubePickingInfo__ctor_1(pCVar32,pCVar8,(MethodInfo *)0x0);
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            if ((pMVar6 == (MVCubeModelBase *)0x0) ||
               (pRVar26 = (pMVar6->fields).prototypeCubeModel,
               pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar23);
            pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
            pCVar27 = Cube::Cube_Clone_1(pCVar27,(MethodInfo *)0x0);
            if (pCVar32 == (CubePickingInfo *)0x0) goto code_?;
            (pCVar32->fields).cube = pCVar27;
            func_?(&pCVar32->fields);
            (pCVar32->fields).iLocalPos.x = (undefined2)uVar20;
            (pCVar32->fields).iLocalPos.y = uVar20._2_2_;
            (pCVar32->fields).iLocalPos.z = iVar21;
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
            goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
            MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                      (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
            (this->fields).movingEdgeCube = pCVar32;
            func_?(&(this->fields).movingEdgeCube);
            uStackX_10 = (MVCubeModelBase *)((ulonglong)uStackX_10 & 0xffffffff00000000);
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pVVar33 = Cube::Cube_GetFaceAxis
                                (&VStack_34,(pCVar8->fields).pickedFace,(MethodInfo *)0x0);
            VStack_14._0_8_ = *(undefined8 *)pVVar33;
            VStack_14.z = pVVar33->z;
            Cube::Cube_MoveFace(pCVar8,_UNK_?,&VStack_14,
                                (CubeOutOfBoundState__Enum *)&uStackX_10,(MethodInfo *)0x0);
            pCVar8 = (this->fields).movingEdgeCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pVVar33 = Cube::Cube_GetFaceAxis
                                (&VStack_34,(pCVar8->fields).pickedFace,(MethodInfo *)0x0);
            VStack_14._0_8_ = *(undefined8 *)pVVar33;
            VStack_14.z = pVVar33->z;
            Cube::Cube_MoveEdge(pCVar8,_UNK_?,&VStack_14,
                                (CubeOutOfBoundState__Enum *)&uStackX_10,(MethodInfo *)0x0);
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
            goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
            MVCubeModelBase::MVCubeModelBase_CornersChanged
                      (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        EStack_35.klass = (Enum__Class *)TypeInfo__CanPerformCubeActionResult;
        EStack_35.monitor = (MonitorData *)0xffffffffffffffff;
        CStack_36 = CVar25;
        str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_35,(MethodInfo *)0x0);
        pSVar37 = StringLiteral_____EditCube_OutOfBoundsAddEdge_;
        goto code_?;
      }
      if (CVar15 != CubeOutOfBoundState__Enum_OutOfBoundsAddVertex) {
        if (CVar15 != CubeOutOfBoundState__Enum_OutOfBoundsRemove) {
          if (CVar15 != CubeOutOfBoundState__Enum_WithinBounds) goto code_?;
          CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                             (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
          pCVar8 = (this->fields).movingEdgeCube;
          if ((pCVar8 != (CubePickingInfo *)0x0) &&
             (pCVar27 = (pCVar8->fields).cube, pCVar27 != (Cube *)0x0)) {
            pVVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                ((CubeBase *)pCVar27,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar3 = Cube::Cube_IsCollapsed(pVVar28,(MethodInfo *)0x0);
            if ((bVar3 == 0) || (CVar25 != CanPerformCubeActionResult__Enum_No)) {
              pCVar8 = (this->fields).movingEdgeCube;
              if (CVar25 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
                pMVar4 = (this->fields).modelCursor;
                if (((pCVar8 != (CubePickingInfo *)0x0) &&
                    (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
                    pMVar6 != (MVCubeModelBase *)0x0)) && (pMVar4 != (ModelCursor3D *)0x0)) {
                  uStackX_8 = (MVCubeModelBase *)
                              CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,
                             (pMVar6->fields)._.gameObject,1,(MethodInfo *)0x0);
                  (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                  func_?(&(this->fields).movingEdgeCube);
                  goto code_?;
                }
              }
              else if (pCVar8 != (CubePickingInfo *)0x0) {
                uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos)
                ;
                CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                          (e,(IntVector *)&uStackX_8,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0)
                ;
                pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
                pCVar8 = (this->fields).movingEdgeCube;
joined_?:
                if ((pCVar8 != (CubePickingInfo *)0x0) && (pMVar6 != (MVCubeModelBase *)0x0))
                goto code_?;
              }
            }
            else {
              pMVar4 = (this->fields).modelCursor;
              pCVar8 = (this->fields).movingEdgeCube;
              if (((pCVar8 != (CubePickingInfo *)0x0) &&
                  (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar6 != (MVCubeModelBase *)0x0)) && (pMVar4 != (ModelCursor3D *)0x0)) {
                bVar39 = false;
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                           (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
        pCVar8 = (this->fields).movingEdgeCube;
        if (CVar25 != CanPerformCubeActionResult__Enum_Yes) {
          pMVar4 = (this->fields).modelCursor;
          if (((pCVar8 == (CubePickingInfo *)0x0) ||
              (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
              pMVar6 == (MVCubeModelBase *)0x0)) || (pMVar4 == (ModelCursor3D *)0x0))
          goto code_?;
          bVar39 = CVar25 == CanPerformCubeActionResult__Enum_UnlockMaterial;
code_?:
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,(pMVar6->fields)._.gameObject,
                     bVar39,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar8 = (this->fields).movingEdgeCube;
          if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
          goto code_?;
          pCVar27 = (this->fields).prevCubeState;
          goto code_?;
        }
        if ((pCVar8 == (CubePickingInfo *)0x0) ||
           (pCVar32 = (this->fields).movingEdgeCube, pCVar32 == (CubePickingInfo *)0x0))
        goto code_?;
        FVar18 = (pCVar32->fields).pickedFace;
        uVar40._0_2_ = (pCVar8->fields).iLocalPos.x;
        uVar40._2_2_ = (pCVar8->fields).iLocalPos.y;
        uStackX_8 = (MVCubeModelBase *)CONCAT44(uStackX_8._4_4_,uVar40);
        sVar41 = (pCVar8->fields).iLocalPos.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Cube);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MV__WorldObject__IntVector);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar33 = Cube::Cube_GetFaceAxis(&VStack_34,FVar18,(MethodInfo *)0x0);
        pCVar27 = *(Cube **)pVVar33;
        VStack_14.x = SUB84(pCVar27,0);
        VStack_14.y = (float)((ulonglong)pCVar27 >> 0x20);
        uStackX_10._0_4_ =
             CONCAT22(uStackX_8._2_2_ - (short)(int)VStack_14.y,
                      (undefined2)uVar40 - (short)(int)VStack_14.x);
        sVar41 = sVar41 - (short)(int)pVVar33->z;
        pCVar8 = (this->fields).movingEdgeCube;
        VStack_14._0_8_ = pCVar27;
        if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        pCVar8 = (this->fields).movingEdgeCube;
        if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
        goto code_?;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
        MVCubeModelBase::MVCubeModelBase_RemoveCube
                  (pMVar6,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar6 == (MVCubeModelBase *)0x0) ||
           (pRVar26 = (pMVar6->fields).prototypeCubeModel,
           pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
        uStackX_8._0_6_ = (IntVector)CONCAT24(sVar41,(CubeOutOfBoundState__Enum)uStackX_10);
        pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                            (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                           ((CubeBase *)pCVar27,(CubeBase *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pCVar8 = (this->fields).movingEdgeCube;
          pCVar32 = (CubePickingInfo *)FUN_?(TypeInfo__CubePickingInfo);
          CubePickingInfo::CubePickingInfo__ctor_1(pCVar32,pCVar8,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
            FUN_?();
          }
          pCVar27 = Cube::Cube_Clone_1(pCVar27,(MethodInfo *)0x0);
          if (pCVar32 != (CubePickingInfo *)0x0) {
            (pCVar32->fields).cube = pCVar27;
            func_?(&pCVar32->fields);
            pMVar6 = uStackX_10;
            (pCVar32->fields).iLocalPos.x = (undefined2)uStackX_10;
            (pCVar32->fields).iLocalPos.y = uStackX_10._2_2_;
            (pCVar32->fields).iLocalPos.z = sVar41;
            (this->fields).movingEdgeCube = pCVar32;
            uStackX_10 = pMVar6;
            func_?(&(this->fields).movingEdgeCube);
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      pCVar8 = (this->fields).movingEdgeCube;
      if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
      IVar17 = (pCVar8->fields).iLocalPos;
      FVar18 = (pCVar8->fields).pickedFace;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStackX_8._0_6_ = IVar17;
      pIVar19 = Cube::Cube_GetCubePosAboveFace
                          ((IntVector *)&uStackX_10,(IntVector *)&uStackX_8,FVar18,(MethodInfo *)0x0)
      ;
      iVar42 = pIVar19->x;
      iVar43 = pIVar19->y;
      iVar21 = pIVar19->z;
      IVar22 = *pIVar19;
      IVar23 = *pIVar19;
      IVar24 = *pIVar19;
      IVar17 = *pIVar19;
      uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,*pIVar19);
      CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                         (e,(IntVector *)&uStackX_8,(this->fields).movingEdgeCube,(MethodInfo *)0x0)
      ;
      if (CVar25 == CanPerformCubeActionResult__Enum_Yes) {
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar6 == (MVCubeModelBase *)0x0) ||
           (pRVar26 = (pMVar6->fields).prototypeCubeModel,
           pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
        pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                            (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pCVar27 == (Cube *)0x0) {
          pCVar8 = (this->fields).movingEdgeCube;
          if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          uStackX_10 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar8 = (this->fields).movingEdgeCube;
          if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
          pCVar27 = (pCVar8->fields).cube;
          FVar18 = (pCVar8->fields).pickedFace;
          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
            FUN_?();
          }
          pVVar28 = Cube::Cube_GetCorners(pCVar27,FVar18,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
            FUN_?();
          }
          pBVar29 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                    CubeDataPacker_CornersToByteArray(pVVar28,(MethodInfo *)0x0);
          uVar30 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                             (e,(MethodInfo *)0x0);
          pBVar31 = Cube::Cube_CreateMaterialArray(uVar30,(MethodInfo *)0x0);
          VStack_14._0_8_ = FUN_?(TypeInfo__Cube);
          Cube::Cube__ctor((Cube *)VStack_14._0_8_,pBVar29,pBVar31,(MethodInfo *)0x0);
          if (uStackX_10 == (MVCubeModelBase *)0x0) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar24);
          MVCubeModelBase::MVCubeModelBase_AddCube
                    (uStackX_10,(IntVector *)&uStackX_8,(CubeBase *)VStack_14._0_8_,
                     (MethodInfo *)0x0);
          pCVar8 = (this->fields).movingEdgeCube;
          pCVar32 = (CubePickingInfo *)FUN_?(TypeInfo__CubePickingInfo);
          CubePickingInfo::CubePickingInfo__ctor_1(pCVar32,pCVar8,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          if ((pMVar6 == (MVCubeModelBase *)0x0) ||
             (pRVar26 = (pMVar6->fields).prototypeCubeModel,
             pRVar26 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar23);
          pCVar27 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                              (pRVar26,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
          pCVar27 = Cube::Cube_Clone_1(pCVar27,(MethodInfo *)0x0);
          if (pCVar32 != (CubePickingInfo *)0x0) {
            (pCVar32->fields).cube = pCVar27;
            func_?(&pCVar32->fields);
            (pCVar32->fields).iLocalPos.x = iVar42;
            (pCVar32->fields).iLocalPos.y = iVar43;
            (pCVar32->fields).iLocalPos.z = iVar21;
            pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
            pCVar8 = (this->fields).movingEdgeCube;
            if ((pCVar8 != (CubePickingInfo *)0x0) && (pMVar6 != (MVCubeModelBase *)0x0)) {
              uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                        (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
              (this->fields).movingEdgeCube = pCVar32;
              func_?(&(this->fields).movingEdgeCube);
              uStackX_10 = (MVCubeModelBase *)((ulonglong)uStackX_10 & 0xffffffff00000000);
              pCVar8 = (this->fields).movingEdgeCube;
              if (pCVar8 != (CubePickingInfo *)0x0) {
                pVVar33 = Cube::Cube_GetFaceAxis
                                    (&VStack_34,(pCVar8->fields).pickedFace,(MethodInfo *)0x0);
                VStack_14._0_8_ = *(undefined8 *)pVVar33;
                VStack_14.z = pVVar33->z;
                Cube::Cube_MoveFace(pCVar8,_UNK_?,&VStack_14,
                                    (CubeOutOfBoundState__Enum *)&uStackX_10,(MethodInfo *)0x0);
                pCVar8 = (this->fields).movingEdgeCube;
                if (pCVar8 != (CubePickingInfo *)0x0) {
                  pVVar33 = Cube::Cube_GetFaceAxis
                                      (&VStack_34,(pCVar8->fields).pickedFace,(MethodInfo *)0x0);
                  pCVar32 = (this->fields).movingEdgeCube;
                  if (pCVar32 != (CubePickingInfo *)0x0) {
                    VStack_14._0_8_ = *(undefined8 *)pVVar33;
                    VStack_14.z = pVVar33->z;
                    Cube::Cube_MoveVertex
                              (pCVar8,_UNK_?,&VStack_14,(pCVar32->fields).pickedEdgeIndex0
                               ,(pCVar32->fields).pickedEdgeIndex1,
                               (CubeOutOfBoundState__Enum *)&uStackX_10,(MethodInfo *)0x0);
                    pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
                    pCVar8 = (this->fields).movingEdgeCube;
                    goto joined_?;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      EStack_35.klass = (Enum__Class *)TypeInfo__CanPerformCubeActionResult;
      EStack_35.monitor = (MonitorData *)0xffffffffffffffff;
      CStack_36 = CVar25;
      pSVar37 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_35,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_____EditCube_OutOfBoundsAddVerte,pSVar37,(MethodInfo *)0x0);
      pMVar4 = (this->fields).modelCursor;
      pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
      if ((pMVar6 != (MVCubeModelBase *)0x0) && (pMVar4 != (ModelCursor3D *)0x0)) {
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar22);
        ModelCursor::ModelCursor_SetErrorCursor
                  ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,(pMVar6->fields)._.gameObject,
                   CVar25 == CanPerformCubeActionResult__Enum_UnlockMaterial,(MethodInfo *)0x0);
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        pCVar8 = (this->fields).movingEdgeCube;
        if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
        goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (this->fields).currentInternalState = 2;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
    pCVar8 = (this->fields).movingEdgeCube;
    if ((this->fields).edgeHasMoved != 0) {
      CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                         (e,pCVar8,(MethodInfo *)0x0);
      pCVar8 = (this->fields).movingEdgeCube;
      if (CVar25 == CanPerformCubeActionResult__Enum_UnlockMaterial) {
        pMVar4 = (this->fields).modelCursor;
        if (((pCVar8 == (CubePickingInfo *)0x0) ||
            (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
            pMVar6 == (MVCubeModelBase *)0x0)) || (pMVar4 == (ModelCursor3D *)0x0))
        goto code_?;
        uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
        ModelCursor::ModelCursor_SetErrorCursor
                  ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,(pMVar6->fields)._.gameObject,1,
                   (MethodInfo *)0x0);
        (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
        func_?(&(this->fields).movingEdgeCube);
      }
      else {
        if ((pCVar8 == (CubePickingInfo *)0x0) ||
           (pCVar27 = (pCVar8->fields).cube, pCVar27 == (Cube *)0x0)) goto code_?;
        pVVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                            ((CubeBase *)pCVar27,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = Cube::Cube_IsCollapsed(pVVar28,(MethodInfo *)0x0);
        pCVar8 = (this->fields).movingEdgeCube;
        if (bVar3 == 0) {
          if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,(IntVector *)&uStackX_8,AudioActions__Enum_EdgeMoved,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar8 = (this->fields).movingEdgeCube;
          if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
          goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                    (pMVar6,(IntVector *)&uStackX_8,(pCVar8->fields).cube,(MethodInfo *)0x0);
        }
        else if (CVar25 == CanPerformCubeActionResult__Enum_Yes) {
          if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar8 = (this->fields).movingEdgeCube;
          if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
          goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          MVCubeModelBase::MVCubeModelBase_RemoveCube
                    (pMVar6,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
        }
        else {
          pMVar4 = (this->fields).modelCursor;
          if (((pCVar8 == (CubePickingInfo *)0x0) ||
              (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
              pMVar6 == (MVCubeModelBase *)0x0)) || (pMVar4 == (ModelCursor3D *)0x0))
          goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,(pMVar6->fields)._.gameObject,0
                     ,(MethodInfo *)0x0);
          pCVar8 = (this->fields).movingEdgeCube;
          if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                    (e,(IntVector *)&uStackX_8,AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          pCVar8 = (this->fields).movingEdgeCube;
          if ((pCVar8 == (CubePickingInfo *)0x0) || (pMVar6 == (MVCubeModelBase *)0x0))
          goto code_?;
          uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
          MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                    (pMVar6,(IntVector *)&uStackX_8,(this->fields).prevCubeState,(MethodInfo *)0x0)
          ;
        }
      }
code_?:
      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
      func_?(&(this->fields).movingEdgeCube);
      (this->fields).edgeHasMoved = 0;
      goto code_?;
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::Object]::
    MouseEventBase_1_System_Object__set_sourcePointerEvent
              ((MouseEventBase_1_System_Object_ *)e,(IPointerEvent *)pCVar8,method_00);
    pCVar8 = (e->fields)._SelectedCube_k__BackingField;
    if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
    uStack_1 = (Cube *)CONCAT26(uStack_1._6_2_,(pCVar8->fields).iLocalPos);
    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
              (e,(IntVector *)&uStack_1,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
    aEStack_2[0] = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0)
    ;
    pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar6 == (MVCubeModelBase *)0x0) goto code_?;
    iVar16 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar6,(MethodInfo *)0x0);
    CubeModelTool::CubeModelTool_SendCubeEvent(iVar16,aEStack_2[0],(MethodInfo *)0x0);
    if (aEStack_2[0] != EditCubeChange__Enum_None) goto code_?;
    pCVar8 = (e->fields)._SelectedCube_k__BackingField;
    if (pCVar8 != (CubePickingInfo *)0x0) {
      IVar17 = (pCVar8->fields).iLocalPos;
      FVar18 = (pCVar8->fields).pickedFace;
      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStack_1 = (Cube *)CONCAT26(uStack_1._6_2_,IVar17);
      pIVar19 = Cube::Cube_GetCubePosAboveFace
                          ((IntVector *)&VStack_14,(IntVector *)&uStack_1,FVar18,(MethodInfo *)0x0
                          );
      pMVar4 = (this->fields).modelCursor;
      pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
      if (pMVar6 != (MVCubeModelBase *)0x0) {
        if (pMVar4 != (ModelCursor3D *)0x0) {
          uStack_1 = (Cube *)CONCAT26(uStack_1._6_2_,*pIVar19);
          ModelCursor::ModelCursor_SetErrorCursor
                    ((ModelCursor *)pMVar4,(IntVector *)&uStack_1,(pMVar6->fields)._.gameObject,
                     0,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (iVar11 == 1) {
      if ((this->fields).currentInternalState == 1) {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0)
          ;
          (this->fields).currentInternalState = 2;
        }
      }
    }
    else if (iVar11 == 2) {
      if (e == (CubeModelingStateMachine *)0x0) goto code_?;
      if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if ((bVar3 != 0) &&
           (bVar3 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0), bVar3 != 0)) {
          (this->fields).currentInternalState = 3;
          goto code_?;
        }
      }
      else {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          aEStack_2[0] =
               CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
          pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar6 != (MVCubeModelBase *)0x0) {
            iVar16 = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar6,(MethodInfo *)0x0);
            CubeModelTool::CubeModelTool_SendCubeEvent(iVar16,aEStack_2[0],(MethodInfo *)0x0);
            if (aEStack_2[0] != EditCubeChange__Enum_None) {
              cStack_10 = '\x01';
              goto code_?;
            }
            pCVar8 = (e->fields)._SelectedCube_k__BackingField;
            if (pCVar8 != (CubePickingInfo *)0x0) {
              IVar17 = (pCVar8->fields).iLocalPos;
              FVar18 = (pCVar8->fields).pickedFace;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              uStack_1 = (Cube *)CONCAT26(uStack_1._6_2_,IVar17);
              pIVar19 = Cube::Cube_GetCubePosAboveFace
                                  ((IntVector *)&VStack_14,(IntVector *)&uStack_1,FVar18,
                                   (MethodInfo *)0x0);
              pMVar4 = (this->fields).modelCursor;
              pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
              if (pMVar6 != (MVCubeModelBase *)0x0) {
                if (pMVar4 != (ModelCursor3D *)0x0) {
                  uStack_1 = (Cube *)CONCAT26(uStack_1._6_2_,*pIVar19);
                  ModelCursor::ModelCursor_SetErrorCursor
                            ((ModelCursor *)pMVar4,(IntVector *)&uStack_1,
                             (pMVar6->fields)._.gameObject,0,(MethodInfo *)0x0);
                  goto code_?;
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
          goto code_?;
        }
      }
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 != 0) &&
         (fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
         , _UNK_? < fVar9 - (this->fields).prevMouseUpTime)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVInputWrapper);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Mouse_Y);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Mouse_X);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar9 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                             (StringLiteral_Mouse_X,(MethodInfo *)0x0);
          fVar9 = (float)((uint)fVar9 & _UNK_?);
          fVar12 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                             (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
          if ((fVar9 != 0.0) || ((float)((uint)fVar12 & _UNK_?) != 0.0)) {
            pCVar8 = (this->fields).prevSelectedCube;
            if (pCVar8 == (CubePickingInfo *)0x0) goto code_?;
            pCVar27 = (pCVar8->fields).cube;
            FVar18 = (pCVar8->fields).pickedFace;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar30 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                               ((CubeBase *)pCVar27,FVar18,(MethodInfo *)0x0);
            pMVar44 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar44 == (MVNetworkGame *)0x0) ||
                (this_00 = (pMVar44->fields)._MaterialRepository_k__BackingField,
                this_00 == (MVMaterialRepository *)0x0)) ||
               (pMVar45 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (this_00,uVar30,(MethodInfo *)0x0), pMVar45 == (MVMaterial *)0x0
               )) goto code_?;
            if ((pMVar45->fields).isUnlocked == 0) {
              pMVar4 = (this->fields).modelCursor;
              pCVar8 = (this->fields).prevSelectedCube;
              if (((pCVar8 == (CubePickingInfo *)0x0) ||
                  (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
                  pMVar6 == (MVCubeModelBase *)0x0)) || (pMVar4 == (ModelCursor3D *)0x0))
              goto code_?;
              uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,(pCVar8->fields).iLocalPos);
              ModelCursor::ModelCursor_SetErrorCursor
                        ((ModelCursor *)pMVar4,(IntVector *)&uStackX_8,
                         (pMVar6->fields)._.gameObject,1,(MethodInfo *)0x0);
            }
            else {
              uVar46 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                 (e,(MethodInfo *)0x0);
              (this->fields).prevMaterial = uVar46;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (e,uVar30,(MethodInfo *)0x0);
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
    }
    else if (iVar11 == 3) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((e == (CubeModelingStateMachine *)0x0) ||
           (pMVar6 = (e->fields)._TargetCubeModel_k__BackingField,
           pMVar6 == (MVCubeModelBase *)0x0)) goto code_?;
        bVar3 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                           ((pMVar6->fields)._.gameObject,(IntVector *)&uStack_1,
                            (MethodInfo *)0x0);
        if (bVar3 != 0) {
          uStackX_8._0_6_ = SUB86(uStack_1,0);
          IVar17 = uStackX_8._0_6_;
          CVar25 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                             (e,(IntVector *)&uStackX_8,(MethodInfo *)0x0);
          if (CVar25 == CanPerformCubeActionResult__Enum_Yes) {
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                      (e,(IntVector *)&uStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            uStackX_8 = (e->fields)._TargetCubeModel_k__BackingField;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            pVVar28 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
              FUN_?();
            }
            uStackX_10 = (MVCubeModelBase *)
                         MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                         CubeDataPacker_CornersToByteArray(pVVar28,(MethodInfo *)0x0);
            uVar30 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                               (e,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
              FUN_?();
            }
            pBVar29 = Cube::Cube_CreateMaterialArray(uVar30,(MethodInfo *)0x0);
            pCVar27 = (Cube *)FUN_?(TypeInfo__Cube);
            Cube::Cube__ctor(pCVar27,(Byte__Array *)uStackX_10,pBVar29,(MethodInfo *)0x0);
            pMVar6 = uStackX_8;
            if (uStackX_8 == (MVCubeModelBase *)0x0) goto code_?;
            uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
            MVCubeModelBase::MVCubeModelBase_AddCube
                      (pMVar6,(IntVector *)&uStackX_8,(CubeBase *)pCVar27,(MethodInfo *)0x0);
          }
        }
      }
      else {
        (this->fields).currentInternalState = 2;
      }
    }
code_?:
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
      (this->fields).prevCubeState = (Cube *)0x0;
      if (iRam_? != 0) {
        uVar47 = (uint)((ulonglong)&(this->fields).prevCubeState >> 0xc);
        uVar48 = (ulonglong)((uVar47 & 0x1fffff) >> 6);
        do {
          uVar49 = *(ulonglong *)(uVar48 * 8 + 0xADDR);
          puVar50 = (ulonglong *)(uVar48 * 8 + 0xADDR);
          LOCK();
          bVar39 = uVar49 == *puVar50;
          if (bVar39) {
            *puVar50 = uVar49 | 1L << (uVar47 & 0x3f);
          }
          UNLOCK();
        } while (!bVar39);
      }
code_?:
      if (e != (CubeModelingStateMachine *)0x0) {
        (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
        if (iRam_? != 0) {
          uVar47 = (uint)((ulonglong)&(this->fields).prevSelectedCube >> 0xc);
          uVar48 = (ulonglong)((uVar47 & 0x1fffff) >> 6);
          do {
            uVar49 = *(ulonglong *)(uVar48 * 8 + 0xADDR);
            puVar50 = (ulonglong *)(uVar48 * 8 + 0xADDR);
            LOCK();
            bVar39 = uVar49 == *puVar50;
            if (bVar39) {
              *puVar50 = uVar49 | 1L << (uVar47 & 0x3f);
            }
            UNLOCK();
          } while (!bVar39);
        }
        if ((this->fields).modelCursor == (ModelCursor3D *)0x0) {
          return;
        }
        pMVar4 = (this->fields).modelCursor;
        pCVar8 = (this->fields).movingEdgeCube;
        pCVar32 = (e->fields)._SelectedCube_k__BackingField;
        pMVar6 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar6 != (MVCubeModelBase *)0x0) {
          pGVar7 = (pMVar6->fields)._.gameObject;
          iVar11 = (this->fields).currentInternalState;
          if (pCVar8 == (CubePickingInfo *)0x0) {
            pFVar51 = (pMVar4->fields)._.faceCursor;
            if (pFVar51 != (FaceCursor *)0x0) {
              pGVar52 = (pFVar51->fields).gameObject;
              if (pCVar32 == (CubePickingInfo *)0x0) {
                if (pGVar52 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar52,0,(MethodInfo *)0x0);
                  pIVar5 = (pMVar4->fields).indentArea;
                  if ((pIVar5 != (IndentArea *)0x0) &&
                     (pGVar52 = (pIVar5->fields).gameObject, pGVar52 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar52,0,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
              else if (pGVar52 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar52,1,(MethodInfo *)0x0);
                pFVar51 = (pMVar4->fields)._.faceCursor;
                info = pCVar32;
                goto joined_?;
              }
            }
          }
          else {
            pIVar5 = (pMVar4->fields).indentArea;
            if (pIVar5 != (IndentArea *)0x0) {
              IndentArea::IndentArea_UpdateIndentArea(pIVar5,pCVar8,pGVar7,(MethodInfo *)0x0);
              pFVar51 = (pMVar4->fields)._.faceCursor;
              if ((pFVar51 != (FaceCursor *)0x0) &&
                 (pGVar52 = (pFVar51->fields).gameObject, pGVar52 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar52,1,(MethodInfo *)0x0);
                pFVar51 = (pMVar4->fields)._.faceCursor;
                info = pCVar8;
joined_?:
                if (pFVar51 != (FaceCursor *)0x0) {
                  FaceCursor::FaceCursor_UpdateCursor(pFVar51,info,pGVar7,(MethodInfo *)0x0);
code_?:
                  this_01 = (pMVar4->fields)._.errorCursor;
                  if (this_01 != (CellCursor *)0x0) {
                    CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
                    if (iVar11 == 3) {
                      VStack_14._0_8_ = (Cube *)0x0;
                      VStack_14.z = 0.0;
                      bVar3 = DrawPlane::DrawPlane_Pick(&VStack_14,(MethodInfo *)0x0);
                      if (bVar3 == 0) {
                        return;
                      }
                      pGVar53 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                          ((MethodInfo *)0x0);
                      if (((pGVar53 != (GameEventManager *)0x0) &&
                          (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                          pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                         (pGVar55 = (pGVar54->fields).LaserCommands,
                         pGVar55 !=
                         (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
                         )) {
                        pAVar56 = (pGVar55->fields).OnActivateLaserForDuration;
                        if (pAVar56 != (Action_1_Single_ *)0x0) {
                          (*(pAVar56->fields)._._.invoke_impl)
                                    ((pAVar56->fields)._._.method_code,_UNK_?,
                                     (pAVar56->fields)._._.method);
                        }
                        pGVar53 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar53 != (GameEventManager *)0x0) &&
                            (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                            pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar55 = (pGVar54->fields).LaserCommands,
                           pGVar55 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          pAVar57 = (pGVar55->fields).OnUpdatePosition;
                          if (pAVar57 == (Action_1_UnityEngine_Vector3_ *)0x0) {
                            return;
                          }
                          VStack_34.x = VStack_14.x;
                          VStack_34.y = VStack_14.y;
                          VStack_34.z = VStack_14.z;
                          (*(pAVar57->fields)._._.invoke_impl)
                                    ((pAVar57->fields)._._.method_code,&VStack_34,
                                     (pAVar57->fields)._._.method);
                          return;
                        }
                      }
                    }
                    else if (pCVar8 == (CubePickingInfo *)0x0) {
                      if (cStack_10 == '\0') {
                        if (pCVar32 == (CubePickingInfo *)0x0) {
                          return;
                        }
                        pGVar53 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar53 != (GameEventManager *)0x0) &&
                            (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                            pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar55 = (pGVar54->fields).LaserCommands,
                           pGVar55 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          pAVar57 = (pGVar55->fields).OnUpdatePosition;
                          if (pAVar57 == (Action_1_UnityEngine_Vector3_ *)0x0) {
                            return;
                          }
                          VStack_14.x = (pCVar32->fields).point.x;
                          VStack_14.y = (pCVar32->fields).point.y;
                          VStack_14.z = (pCVar32->fields).point.z;
                          (*(pAVar57->fields)._._.invoke_impl)
                                    ((pAVar57->fields)._._.method_code,&VStack_14,
                                     (pAVar57->fields)._._.method);
                          return;
                        }
                      }
                      else {
                        pGVar53 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar53 != (GameEventManager *)0x0) &&
                            (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                            pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar55 = (pGVar54->fields).LaserCommands,
                           pGVar55 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          pAVar56 = (pGVar55->fields).OnActivateLaserForDuration;
                          if (pAVar56 == (Action_1_Single_ *)0x0) {
                            return;
                          }
                          (*(pAVar56->fields)._._.invoke_impl)
                                    ((pAVar56->fields)._._.method_code,_UNK_?,
                                     (pAVar56->fields)._._.method);
                          return;
                        }
                      }
                    }
                    else {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__Cube);
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__UnityEngine__Debug);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pCVar27 = (pCVar8->fields).cube;
                      FVar18 = (pCVar8->fields).pickedFace;
                      IVar17 = (pCVar8->fields).iLocalPos;
                      if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      uStackX_8 = (MVCubeModelBase *)CONCAT26(uStackX_8._6_2_,IVar17);
                      pVVar28 = Cube::Cube_GetFaceVerticesWorld
                                          (pGVar7,pCVar27,FVar18,(IntVector *)&uStackX_8,
                                           (MethodInfo *)0x0);
                      if (pVVar28 != (Vector3__Array *)0x0) {
                        if (((int)pVVar28->max_length == 0) || ((uint)pVVar28->max_length < 2)) {
code_?:
                          FUN_?();
                          pcVar38 = (code *)swi(3);
                          (*pcVar38)();
                          return;
                        }
                        uVar58 = pVVar28->vector[1].x;
                        uVar59 = pVVar28->vector[1].y;
                        VStack_34._0_8_ = *(undefined8 *)pVVar28->vector;
                        fVar9 = (float)VStack_34._0_8_;
                        uVar48 = (ulonglong)VStack_34._0_8_ >> 0x20;
                        if ((uint)pVVar28->max_length < 3) goto code_?;
                        VStack_34._0_8_ = *(undefined8 *)(pVVar28->vector + 2);
                        fVar12 = (float)VStack_34._0_8_;
                        uVar49 = (ulonglong)VStack_34._0_8_ >> 0x20;
                        if ((uint)pVVar28->max_length < 4) goto code_?;
                        VStack_34._0_8_ = *(undefined8 *)(pVVar28->vector + 3);
                        fVar13 = ((float)VStack_34._0_8_ + fVar12 + fVar9 + (float)uVar58) *
                                 _UNK_?;
                        fVar12 = ((float)((ulonglong)VStack_34._0_8_ >> 0x20) +
                                 (float)uVar49 + (float)uVar59 + (float)uVar48) * _UNK_?;
                        fVar9 = (pVVar28->vector[3].z +
                                 pVVar28->vector[2].z + pVVar28->vector[1].z + pVVar28->vector[0].z)
                                 * _UNK_?;
                        if ((pCVar8->fields).pickedEdge == 0) {
                          VStack_14._0_8_ = CONCAT44(fVar12,fVar13);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          VStack_34._0_8_ =
                               *(undefined8 *)
                                &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
                          fVar60 = (float)VStack_34._0_8_;
                          uVar48 = (ulonglong)VStack_34._0_8_ >> 0x20;
                          fVar61 = fVar9 + (TypeInfo__UnityEngine__Vector3->static_fields->upVector
                                            ).z;
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Debug);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar62 = _UNK_?;
                          pCVar63 = _UNK_?;
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          EStack_35.klass = (Enum__Class *)pCVar63;
                          EStack_35.monitor = pMVar62;
                          VStack_34._0_8_ = CONCAT44(fVar12 + (float)uVar48,fVar13 + fVar60);
                          uStack_1 = (Cube *)CONCAT44(fVar12,fVar13);
                          fStack_64 = fVar9;
                          VStack_34.z = fVar61;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Debug);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pcVar38 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar38 = (code *)FUN_?(&UNK_?),
                             pcVar38 == (code *)0x0)) {
                            uVar65 = func_?(&UNK_?);
                            FUN_?(uVar65,0);
                            pcVar38 = (code *)swi(3);
                            (*pcVar38)();
                            return;
                          }
                          pcRam_? = pcVar38;
                          (*pcRam_?)(&uStack_1,&VStack_34,&EStack_35,0,1);
code_?:
                          fVar12 = _UNK_?;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar66 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if ((((pMVar66 != (MVGameControllerBase *)0x0) &&
                               (pMVar44 = (pMVar66->fields).game, pMVar44 != (MVNetworkGame *)0x0))
                              && (pGVar53 = (pMVar44->fields).GameEventManager,
                                 pGVar53 != (GameEventManager *)0x0)) &&
                             ((pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                              pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
                              (pGVar55 = (pGVar54->fields).LaserCommands,
                              pGVar55 !=
                              (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                               *)0x0)))) {
                            pAVar57 = (pGVar55->fields).OnUpdatePosition;
                            if (pAVar57 != (Action_1_UnityEngine_Vector3_ *)0x0) {
                              VStack_34.x = VStack_14.x;
                              VStack_34.y = VStack_14.y;
                              VStack_34.z = fVar9;
                              (*(pAVar57->fields)._._.invoke_impl)
                                        ((pAVar57->fields)._._.method_code,&VStack_34,
                                         (pAVar57->fields)._._.method);
                            }
                            pGVar53 = MVGameControllerBase::
                                      MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                            if (((pGVar53 != (GameEventManager *)0x0) &&
                                (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
                                pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
                               && (pGVar55 = (pGVar54->fields).LaserCommands,
                                  pGVar55 !=
                                  (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                   *)0x0)) {
                              pAVar56 = (pGVar55->fields).OnActivateLaserForDuration;
                              if (pAVar56 != (Action_1_Single_ *)0x0) {
                                (*(pAVar56->fields)._._.invoke_impl)
                                          ((pAVar56->fields)._._.method_code,fVar12,
                                           (pAVar56->fields)._._.method);
                              }
                              return;
                            }
                          }
                        }
                        else {
                          pCVar27 = (pCVar8->fields).cube;
                          FVar18 = (pCVar8->fields).pickedFace;
                          edge = (pCVar8->fields).pickedEdge;
                          uVar67._0_2_ = (pCVar8->fields).iLocalPos.x;
                          uVar67._2_2_ = (pCVar8->fields).iLocalPos.y;
                          uVar68 = (pCVar8->fields).iLocalPos.z;
                          uStackX_10 = (MVCubeModelBase *)CONCAT62(uStackX_10._2_6_,uVar68);
                          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                            FUN_?();
                            uVar68 = (undefined2)uStackX_10;
                          }
                          uStackX_8._0_6_ = (IntVector)CONCAT24(uVar68,uVar67);
                          pVVar28 = Cube::Cube_GetEdgeVerticesWorld
                                              (pGVar7,pCVar27,FVar18,edge,(IntVector *)&uStackX_8,
                                               (MethodInfo *)0x0);
                          if ((pCVar8->fields).pickedEdgeIndex0 == 0) {
                            if (pVVar28 != (Vector3__Array *)0x0) {
                              if ((pCVar8->fields).pickedEdgeIndex1 == 0) {
                                if (((int)pVVar28->max_length == 0) ||
                                   ((uint)pVVar28->max_length < 2)) goto code_?;
                                VStack_34._0_8_ = *(undefined8 *)(pVVar28->vector + 1);
                                uVar69 = pVVar28->vector[0].x;
                                uVar70 = pVVar28->vector[0].y;
                                VStack_14.z = (pVVar28->vector[0].z + pVVar28->vector[1].z) *
                                               _UNK_?;
                                VStack_14._0_8_ =
                                     CONCAT44(((float)uVar70 +
                                              (float)((ulonglong)VStack_34._0_8_ >> 0x20)) *
                                              _UNK_?,
                                              ((float)uVar69 + (float)VStack_34._0_8_) *
                                              _UNK_?);
                              }
                              else {
                                if ((uint)pVVar28->max_length < 2) goto code_?;
                                VStack_14._0_8_ = *(undefined8 *)(pVVar28->vector + 1);
                                VStack_14.z = pVVar28->vector[1].z;
                              }
code_?:
                              fVar9 = (fVar9 - VStack_14.z) * _UNK_? + VStack_14.z;
                              VStack_14._0_8_ =
                                   CONCAT44((fVar12 - VStack_14.y) * _UNK_? + VStack_14.y,
                                            (fVar13 - VStack_14.x) * _UNK_? + VStack_14.x)
                              ;
                              goto code_?;
                            }
                          }
                          else if (pVVar28 != (Vector3__Array *)0x0) {
                            if ((int)pVVar28->max_length == 0) goto code_?;
                            pCVar27 = *(Cube **)pVVar28->vector;
                            fVar60 = pVVar28->vector[0].z;
                            VStack_14._0_8_ = pCVar27;
                            VStack_14.z = fVar60;
                            uStack_1 = pCVar27;
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            VStack_34._0_8_ =
                                 *(undefined8 *)
                                  &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
                            fVar61 = (float)uStack_1 + (float)VStack_34._0_8_;
                            fVar71 = uStack_1._4_4_ + (float)((ulonglong)VStack_34._0_8_ >> 0x20)
                            ;
                            fVar72 = fVar60 + (TypeInfo__UnityEngine__Vector3->static_fields->
                                              upVector).z;
                            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Debug);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar62 = _UNK_?;
                            pCVar63 = _UNK_?;
                            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            EStack_35.klass = (Enum__Class *)pCVar63;
                            EStack_35.monitor = pMVar62;
                            uStack_1 = (Cube *)CONCAT44(fVar71,fVar61);
                            fStack_64 = fVar72;
                            VStack_34._0_8_ = pCVar27;
                            VStack_34.z = fVar60;
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Debug);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pcVar38 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar38 = (code *)FUN_?(&UNK_?),
                               pcVar38 == (code *)0x0)) goto code_?;
                            pcRam_? = pcVar38;
                            (*pcRam_?)(&VStack_34,&uStack_1,&EStack_35,0,1);
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
      pCVar8 = (this->fields).movingEdgeCube;
      if ((pCVar8 != (CubePickingInfo *)0x0) &&
         (pCVar27 = (pCVar8->fields).cube, pCVar27 != (Cube *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Cube);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar27 = Cube::Cube_Clone_1(pCVar27,(MethodInfo *)0x0);
        (this->fields).prevCubeState = pCVar27;
        func_?(&(this->fields).prevCubeState);
        goto code_?;
      }
    }
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  FUN_?();
code_?:
  uVar65 = func_?(&UNK_?);
  FUN_?(uVar65,0);
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Exit
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsControllerEditMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
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
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
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
      IStackX_8.x = (pCVar1->fields).iLocalPos.x;
      IStackX_8.y = (pCVar1->fields).iLocalPos.y;
      IStackX_8.z = (pCVar1->fields).iLocalPos.z;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (this_01,&IStackX_8,(pCVar1->fields).cube,(MethodInfo *)0x0);
    }
    bVar2 = iRam_? != 0;
    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).movingEdgeCube >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    (this->fields).edgeHasMoved = 0;
  }
  (*(this->klass->vtable).HideCursor.methodPtr)(this,(this->klass->vtable).HideCursor.method);
  pcVar7 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar7 = (code *)FUN_?(&UNK_?);
    if (pcVar7 == (code *)0x0) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
       (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
      (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0)) &&
     ((pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
      pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar13 = (pGVar12->fields).LaserCommands,
      pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar14 = (pGVar13->fields).OnChangeState;
    if (pAVar14 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar14->fields)._._.invoke_impl)
                ((pAVar14->fields)._._.method_code,0,(pAVar14->fields)._._.method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IntVector GetCubePosNeighborOppositeFace(IntVector, Face) */

IntVector *
Assembly-CSharp.dll::EditCubes::EditCubes_GetCubePosNeighborOppositeFace
          (IntVector *__return_storage_ptr__,IntVector *localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = localPos->x;
  iVar2 = localPos->y;
  iVar3 = localPos->z;
  __return_storage_ptr__->x = 0;
  __return_storage_ptr__->y = 0;
  __return_storage_ptr__->z = 0;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->x = iVar1;
  __return_storage_ptr__->y = iVar2;
  __return_storage_ptr__->z = iVar3;
  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar4 = Cube::Cube_GetFaceAxis(&VStack_5,face,(MethodInfo *)0x0);
  uVar6 = pVVar4->x;
  uVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  __return_storage_ptr__->x = __return_storage_ptr__->x - (short)(int)(float)uVar6;
  __return_storage_ptr__->y = __return_storage_ptr__->y - (short)(int)(float)uVar7;
  __return_storage_ptr__->z = __return_storage_ptr__->z - (short)(int)fVar8;
  return __return_storage_ptr__;
}


/* Boolean GotoMultiChangeCubes() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_GotoMultiChangeCubes
               (EditCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
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
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).Remove.methodPtr)(pMVar1,(pMVar1->klass->vtable).Remove.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetEditDetail(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_SetEditDetail
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
      return;
    }
    if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
      return;
    }
    pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      gameObject = (pMVar1->fields)._.gameObject;
      IVar2 = (((e->fields)._SelectedCube_k__BackingField)->fields).iLocalPos;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStack_3 = CONCAT26(uStack_3._6_2_,IVar2);
      pVVar4 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         (aVStack_5,gameObject,(IntVector *)&uStack_3,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar4->x;
      uStack_6._4_4_ = pVVar4->y;
      fVar7 = pVVar4->z;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_00 != (MainCameraManager *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_3 = 0;
        fStack_8 = 0.0;
        pvVar9 = (obj->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&uStack_3);
        fStack_12 = fStack_8 - fVar7;
        uStack_6 = CONCAT44(uStack_3._4_4_ - uStack_6._4_4_,(float)uStack_3 - (float)uStack_6);
        fVar7 = (float)FUN_?(&uStack_6);
        pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          puVar13 = (undefined8 *)
                   (*(pMVar1->klass->vtable).get_Scale.methodPtr)
                             (aVStack_5,pMVar1,(pMVar1->klass->vtable).get_Scale.method);
          pMVar14 = (this->fields).modelCursor;
          if ((float)((ulonglong)*puVar13 >> 0x20) * _UNK_? < fVar7) {
            (this->fields).mouseSensitivity = 0.1325;
            if ((pMVar14 != (ModelCursor3D *)0x0) &&
               (pIVar15 = (pMVar14->fields).indentArea, pIVar15 != (IndentArea *)0x0)) {
              (pIVar15->fields).size = 1.0;
              return;
            }
          }
          else {
            (this->fields).mouseSensitivity = 0.0225;
            if ((pMVar14 != (ModelCursor3D *)0x0) &&
               (pIVar15 = (pMVar14->fields).indentArea, pIVar15 != (IndentArea *)0x0)) {
              (pIVar15->fields).size = 0.5;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pMVar1->klass->vtable).get_CursorVisible.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_CursorVisible.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::EditCubes::EditCubes_set_CursorVisible
               (EditCubes *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).modelCursor;
  if (pMVar1 != (ModelCursor3D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).set_CursorVisible.methodPtr)
              (pMVar1,value,(pMVar1->klass->vtable).set_CursorVisible.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

