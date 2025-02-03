
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CellCursor);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      material = (pPVar1->fields).cellCursorMaterial;
      this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (value->fields).paintCursor = this_01;
      func_?(&value->fields,this_01);
      (this->fields).paintCursor = value;
      func_?(&(this->fields).paintCursor,value);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar2 != (GameEventManager *)0x0) &&
          (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
          pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar3->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
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
      uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                         (e,(MethodInfo *)0x0);
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar10 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar10->fields)._MaterialRepository_k__BackingField,
         this_00 == (MVMaterialRepository *)0x0)) goto code_?;
      bVar3 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                         (this_00,uVar8,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pCVar11 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar11 == (CubePickingInfo *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,(pCVar11->fields).iLocalPos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
        pCVar11 = (e->fields)._SelectedCube_k__BackingField;
        pMVar12 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pCVar11 == (CubePickingInfo *)0x0) goto code_?;
        uVar13._0_2_ = (pCVar11->fields).iLocalPos.x;
        uVar13._2_2_ = (pCVar11->fields).iLocalPos.y;
        iVar14 = (pCVar11->fields).iLocalPos.z;
        uVar8 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if (pMVar12 == (MVCubeModelBase *)0x0) goto code_?;
        iVector.z = iVar14;
        iVector.x = (short)uVar13;
        iVector.y = (short)((uint)uVar13 >> 0x10);
        MVCubeModelBase::MVCubeModelBase_ReplaceCube(pMVar12,iVector,uVar8,(MethodInfo *)0x0);
        pMVar12 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar12 == (MVCubeModelBase *)0x0) goto code_?;
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar12,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubePainted,(MethodInfo *)0x0);
        goto code_?;
      }
      pPVar5 = (this->fields).paintCursor;
      if (pPVar5 == (PaintCursor *)0x0) goto code_?;
      pCVar15 = (pPVar5->fields).paintCursor;
      (pPVar5->fields).flashingTime = 1.0;
      (pPVar5->fields).flashing = 1;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar16 == (PrefabPool *)0x0) || (pCVar15 == (CellCursor *)0x0)) goto code_?;
      CellCursor::CellCursor_ChangeMaterial
                (pCVar15,(pPVar16->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
      ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
      pPVar5 = (this->fields).paintCursor;
      cVar4 = '\x01';
    }
  }
  pCVar11 = (e->fields)._SelectedCube_k__BackingField;
  pMVar12 = (e->fields)._TargetCubeModel_k__BackingField;
  if (pPVar5 != (PaintCursor *)0x0) {
    if ((pPVar5->fields).flashing != 0) {
      fVar17 = (pPVar5->fields).flashingTime;
      if (_UNK_? < fVar17) {
        (pPVar5->fields).flashingTime = fVar17 - _UNK_?;
      }
      else {
        pCVar15 = (pPVar5->fields).paintCursor;
        (pPVar5->fields).flashing = 0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar16 == (PrefabPool *)0x0) || (pCVar15 == (CellCursor *)0x0)) goto code_?;
        CellCursor::CellCursor_ChangeMaterial
                  (pCVar15,(pPVar16->fields).cellCursorMaterial,(MethodInfo *)0x0);
      }
    }
    pCVar15 = (pPVar5->fields).paintCursor;
    if (pCVar11 == (CubePickingInfo *)0x0) {
      if (pCVar15 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar15,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pCVar15 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar15,1,(MethodInfo *)0x0);
      uVar18._0_2_ = (pCVar11->fields).iLocalPos.x;
      uVar18._2_2_ = (pCVar11->fields).iLocalPos.y;
      iVar14 = (pCVar11->fields).iLocalPos.z;
      if (pMVar12 != (MVCubeModelBase *)0x0) {
        pCVar15 = (pPVar5->fields).paintCursor;
        cubeGameObject = (pMVar12->fields)._.gameObject;
        if (pCVar15 != (CellCursor *)0x0) {
          this_01 = CellCursor::CellCursor_GetCellCursor
                              (pCVar15,(pCVar11->fields).iLocalPos,(MethodInfo *)0x0);
          if (this_01 != (CellCursorCubeLineMesh *)0x0) {
            position.z = iVar14;
            position.x = (short)uVar18;
            position.y = (short)((uint)uVar18 >> 0x10);
            CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                      (this_01,position,cubeGameObject,(MethodInfo *)0x0);
            if (cVar4 != '\0') {
              pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar19 == (GameEventManager *)0x0) ||
                  (pGVar20 = (pGVar19->fields).AvatarCommandsBuildMode,
                  pGVar20 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
                 (pGVar21 = (pGVar20->fields).LaserCommands,
                 pGVar21 ==
                 (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
              goto code_?;
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                        (pGVar21,0.5,(MethodInfo *)0x0);
            }
            pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar19 != (GameEventManager *)0x0) &&
                (pGVar20 = (pGVar19->fields).AvatarCommandsBuildMode,
                pGVar20 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
               (pGVar21 = (pGVar20->fields).LaserCommands,
               pGVar21 !=
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                        (pGVar21,(pCVar11->fields).point,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    (*(code *)(this->klass->vtable).HideCursor.method)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

