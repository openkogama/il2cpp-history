
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Enter
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__PaintCursor);
    cRam_? = '\x01';
  }
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
    value = (PaintCursor *)func_?(TypeInfo__PaintCursor);
    if (value != (PaintCursor *)0x0) {
      if (cRam_? == '\0') {
        unaff_ESI = (MethodInfo *)&UNK_?;
        func_?(&TypeInfo__CellCursor);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar1 != (PrefabPool *)0x0) {
        material = (pPVar1->fields).cellCursorMaterial;
        this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
        if (this_01 != (CellCursor *)0x0) {
          CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
          (value->fields).paintCursor = this_01;
          func_?(&value->fields,this_01);
          (this->fields).paintCursor = value;
          func_?(&(this->fields).paintCursor,value);
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar2 != (GameEventManager *)0x0) &&
              (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
              pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
             (this_00 = (pGVar3->fields).LaserCommands,
             this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)
             ) {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                      (this_00,LaserPointerState__Enum_PaintCubes,(MethodInfo *)0x0);
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                              (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
            (this->fields)._.waitForMouseUp = bVar4;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Execute
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar1->cubeChange != 0) &&
     (pCVar1->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar2 = pCVar1->OnEditCubeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pCVar1->cubeCount,pCVar1->cubeChange,
               (pAVar2->fields)._._.method);
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar3;
    return;
  }
  cVar4 = '\0';
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    cVar4 = '\0';
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    pPVar5 = (this->fields).paintCursor;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) goto code_?;
    pCVar6 = (((e->fields)._SelectedCube_k__BackingField)->fields).cube;
    if ((pCVar6 == (Cube *)0x0) ||
       (pBVar7 = (pCVar6->fields)._.faceMaterials, pBVar7 == (Byte__Array *)0x0))
    goto code_?;
    if (pBVar7->max_length == 0) {
      func_?();
      goto code_?;
    }
    uVar8 = pBVar7->vector[0];
    uVar9 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                       (e,(MethodInfo *)0x0);
    if (uVar8 == uVar9) {
code_?:
      pPVar5 = (this->fields).paintCursor;
      cVar4 = '\x01';
    }
    else {
      pCVar10 = (e->fields)._SelectedCube_k__BackingField;
      CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId(e,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar11 == (MVNetworkGame *)0x0) || (pCVar10 == (CubePickingInfo *)0x0)) ||
          (pCVar6 = (pCVar10->fields).cube, pCVar6 == (Cube *)0x0)) ||
         (pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField,
         pMVar12 == (MVMaterialRepository *)0x0)) goto code_?;
      bVar3 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                         (pMVar12,(pCVar6->fields)._.faceMaterials,(MethodInfo *)0x0);
      if (bVar3 == 0) {
code_?:
        pPVar5 = (this->fields).paintCursor;
        if (pPVar5 == (PaintCursor *)0x0) goto code_?;
        pCVar13 = (pPVar5->fields).paintCursor;
        (pPVar5->fields).flashingTime = 1.0;
        (pPVar5->fields).flashing = 1;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar14 == (PrefabPool *)0x0) || (pCVar13 == (CellCursor *)0x0)) goto code_?;
        CellCursor::CellCursor_ChangeMaterial
                  (pCVar13,(pPVar14->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
        ModelCursor::ModelCursor_ShowUnlockMaterialNotification((MethodInfo *)0x0);
        goto code_?;
      }
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar11 == (MVNetworkGame *)0x0) ||
         (pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField,
         pMVar12 == (MVMaterialRepository *)0x0)) goto code_?;
      bVar3 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                         (pMVar12,0,(MethodInfo *)0x0);
      if (bVar3 == 0) goto code_?;
      pCVar10 = (e->fields)._SelectedCube_k__BackingField;
      if (pCVar10 == (CubePickingInfo *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                (e,(pCVar10->fields).iLocalPos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
      pCVar10 = (e->fields)._SelectedCube_k__BackingField;
      pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
      if (pCVar10 == (CubePickingInfo *)0x0) goto code_?;
      uVar16._0_2_ = (pCVar10->fields).iLocalPos.x;
      uVar16._2_2_ = (pCVar10->fields).iLocalPos.y;
      iVar17 = (pCVar10->fields).iLocalPos.z;
      uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                         (e,(MethodInfo *)0x0);
      if (pMVar15 == (MVCubeModelBase *)0x0) goto code_?;
      iVector.z = iVar17;
      iVector.x = (short)uVar16;
      iVector.y = (short)((uint)uVar16 >> 0x10);
      MVCubeModelBase::MVCubeModelBase_ReplaceCube(pMVar15,iVector,uVar8,(MethodInfo *)0x0);
      pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
      if (pMVar15 == (MVCubeModelBase *)0x0) goto code_?;
      cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar15,(MethodInfo *)0x0);
      CubeModelTool::CubeModelTool_SendCubeEvent
                (cubeCount,EditCubeChange__Enum_CubePainted,(MethodInfo *)0x0);
      pPVar5 = (this->fields).paintCursor;
      cVar4 = '\x01';
    }
  }
  pCVar10 = (e->fields)._SelectedCube_k__BackingField;
  pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
  if (pPVar5 != (PaintCursor *)0x0) {
    if ((pPVar5->fields).flashing != 0) {
      fVar18 = (pPVar5->fields).flashingTime;
      if (_UNK_? < fVar18) {
        (pPVar5->fields).flashingTime = fVar18 - _UNK_?;
      }
      else {
        pCVar13 = (pPVar5->fields).paintCursor;
        (pPVar5->fields).flashing = 0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar14 == (PrefabPool *)0x0) || (pCVar13 == (CellCursor *)0x0)) goto code_?;
        CellCursor::CellCursor_ChangeMaterial
                  (pCVar13,(pPVar14->fields).cellCursorMaterial,(MethodInfo *)0x0);
      }
    }
    pCVar13 = (pPVar5->fields).paintCursor;
    if (pCVar10 == (CubePickingInfo *)0x0) {
      if (pCVar13 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar13,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pCVar13 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar13,1,(MethodInfo *)0x0);
      uVar19._0_2_ = (pCVar10->fields).iLocalPos.x;
      uVar19._2_2_ = (pCVar10->fields).iLocalPos.y;
      iVar17 = (pCVar10->fields).iLocalPos.z;
      if (pMVar15 != (MVCubeModelBase *)0x0) {
        pCVar13 = (pPVar5->fields).paintCursor;
        cubeGameObject = (pMVar15->fields)._.gameObject;
        if (pCVar13 != (CellCursor *)0x0) {
          this_00 = CellCursor::CellCursor_GetCellCursor
                              (pCVar13,(pCVar10->fields).iLocalPos,(MethodInfo *)0x0);
          if (this_00 != (CellCursorCubeLineMesh *)0x0) {
            position.z = iVar17;
            position.x = (short)uVar19;
            position.y = (short)((uint)uVar19 >> 0x10);
            CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                      (this_00,position,cubeGameObject,(MethodInfo *)0x0);
            if (cVar4 != '\0') {
              pGVar20 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar20 == (GameEventManager *)0x0) ||
                  (pGVar21 = (pGVar20->fields).AvatarCommandsBuildMode,
                  pGVar21 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
                 (pGVar22 = (pGVar21->fields).LaserCommands,
                 pGVar22 ==
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
              goto code_?;
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                        (pGVar22,0.5,(MethodInfo *)0x0);
            }
            pGVar20 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar20 != (GameEventManager *)0x0) &&
                (pGVar21 = (pGVar20->fields).AvatarCommandsBuildMode,
                pGVar21 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
               (pGVar22 = (pGVar21->fields).LaserCommands,
               pGVar22 !=
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                        (pGVar22,(pCVar10->fields).point,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Exit
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    (*(this->klass->vtable).HideCursor.methodPtr)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

