
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
      ppPVar2 = &(this->fields).paintCursor;
      *ppPVar2 = value;
      func_?(ppPVar2,value);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar4->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
        AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_00,6,(MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar5;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Execute
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar2;
    return;
  }
  this._0_1_ = 0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                     (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    this._0_1_ = 0;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pCVar3 = (e->fields)._SelectedCube_k__BackingField;
    if (pCVar3 != (CubePickingInfo *)0x0) {
      pCVar4 = (pCVar3->fields).cube;
      if ((pCVar4 == (Cube *)0x0) ||
         (pBVar5 = (pCVar4->fields)._.faceMaterials, pBVar5 == (Byte__Array *)0x0))
      goto code_?;
      if (pBVar5->max_length == 0) {
        func_?();
        goto code_?;
      }
      uVar6 = pBVar5->vector[0];
      uVar7 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                         (e,(MethodInfo *)0x0);
      if (uVar6 != uVar7) {
        uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar8 == (MVNetworkGame *)0x0) ||
           (this_00 = (pMVar8->fields)._MaterialRepository_k__BackingField,
           this_00 == (MVMaterialRepository *)0x0)) goto code_?;
        bVar2 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                           (this_00,uVar6,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pPVar9 = (pPVar1->fields).paintCursor;
          if (pPVar9 == (PaintCursor *)0x0) goto code_?;
          this_01 = (pPVar9->fields).paintCursor;
          (pPVar9->fields).flashingTime = 1.0;
          (pPVar9->fields).flashing = 1;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar10 == (PrefabPool *)0x0) || (this_01 == (CellCursor *)0x0))
          goto code_?;
          CellCursor::CellCursor_ChangeMaterial
                    (this_01,(pPVar10->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
          ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                    (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
          this._0_1_ = 1;
          goto code_?;
        }
        pCVar3 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar3 == (CubePickingInfo *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,(pCVar3->fields).iLocalPos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
        pCVar3 = (e->fields)._SelectedCube_k__BackingField;
        pMVar11 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pCVar3 == (CubePickingInfo *)0x0) goto code_?;
        uVar12._0_2_ = (pCVar3->fields).iLocalPos.x;
        uVar12._2_2_ = (pCVar3->fields).iLocalPos.y;
        iVar13 = (pCVar3->fields).iLocalPos.z;
        uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if (pMVar11 == (MVCubeModelBase *)0x0) goto code_?;
        iVector.z = iVar13;
        iVector.x = (short)uVar12;
        iVector.y = (short)((uint)uVar12 >> 0x10);
        MVCubeModelBase::MVCubeModelBase_ReplaceCube(pMVar11,iVector,uVar6,(MethodInfo *)0x0);
        pMVar11 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pMVar11 == (MVCubeModelBase *)0x0) goto code_?;
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar11,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubePainted,(MethodInfo *)0x0);
      }
      this._0_1_ = 1;
    }
  }
code_?:
  pPVar9 = (pPVar1->fields).paintCursor;
  if (pPVar9 != (PaintCursor *)0x0) {
    PaintCursor::PaintCursor_UpdateCursor
              (pPVar9,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,(bool)this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
    AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_00,0,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).HideCursor.method)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

