
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Enter
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    cubeCorners = CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
                            (e,(MethodInfo *)0x0);
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__PaintCursor);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_EDI);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      material = PrefabPool::PrefabPool_get_CellCursorMaterial(this_02,(MethodInfo *)0x0);
      this_03 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_03,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (this_01->fields)._._._._.m_CachedPtr = this_03;
      (this->fields).paintCursor = (PaintCursor *)this_01;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar1 != (GameEventManager *)0x0) &&
          (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
          pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar2->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (this_00,LaserPointerState__Enum_PaintCubes,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar3;
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Execute
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar1;
    return;
  }
  bVar2 = false;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                        ((PrefabPool *)e,(MethodInfo *)0x0);
    if (pOVar3 != (ObjectiveArrow *)0x0) {
      pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          ((PrefabPool *)e,(MethodInfo *)0x0);
      if ((pOVar3 == (ObjectiveArrow *)0x0) ||
         (this_00 = (pOVar3->fields)._._._._.m_CachedPtr,
         this_00 ==
         (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
          *)0x0)) goto code_?;
      pOVar4 = System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_00,(MethodInfo *)0x0);
      if (pOVar4 == (Object *)0x0) goto code_?;
      if (pOVar4[1].monitor == (MonitorData *)0x0) {
        func_?();
        func_?();
        goto code_?;
      }
      uVar5 = *(uint8_t *)&pOVar4[2].klass;
      uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (e,(MethodInfo *)0x0);
      if (uVar5 != uVar6) {
        pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            ((PrefabPool *)e,(MethodInfo *)0x0);
        if (pOVar3 == (ObjectiveArrow *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,*(IntVector *)&(pOVar3->fields).initialScale.y,AudioActions__Enum_CubeAdded,
                   (MethodInfo *)0x0);
        pMVar7 = (MVCubeModelBase *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
        pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            ((PrefabPool *)e,(MethodInfo *)0x0);
        if (pOVar3 == (ObjectiveArrow *)0x0) goto code_?;
        fVar8 = (pOVar3->fields).initialScale.y;
        iVar9 = *(int16_t *)&(pOVar3->fields).initialScale.z;
        uVar5 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if (pMVar7 == (MVCubeModelBase *)0x0) goto code_?;
        iVector.z = iVar9;
        iVector._0_4_ = fVar8;
        MVCubeModelBase::MVCubeModelBase_ReplaceCube(pMVar7,iVector,uVar5,(MethodInfo *)0x0);
        pMVar7 = (MVCubeModelBase *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
        if (pMVar7 == (MVCubeModelBase *)0x0) goto code_?;
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar7,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubePainted,(MethodInfo *)0x0);
      }
      bVar2 = true;
    }
  }
  pPVar10 = (this->fields).paintCursor;
  if (e != (CubeModelingStateMachine *)0x0) {
    pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                        ((PrefabPool *)e,(MethodInfo *)0x0);
    this_01 = (DayNightCycle *)
              PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
    if (pPVar10 != (PaintCursor *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pCVar11 = (pPVar10->fields).paintCursor;
      if (pOVar3 == (ObjectiveArrow *)0x0) {
        if (pCVar11 != (CellCursor *)0x0) {
          CellCursor::CellCursor_set_Active(pCVar11,0,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pCVar11 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar11,1,(MethodInfo *)0x0);
        fVar8 = (pOVar3->fields).initialScale.y;
        pCVar11 = (pPVar10->fields).paintCursor;
        iVar9 = *(int16_t *)&(pOVar3->fields).initialScale.z;
        if (this_01 != (DayNightCycle *)0x0) {
          cubeGameObject =
               DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
          if (pCVar11 != (CellCursor *)0x0) {
            position.z = iVar9;
            position._0_4_ = fVar8;
            CellCursor::CellCursor_SetCursor_1
                      (pCVar11,position,(GameObject *)cubeGameObject,(MethodInfo *)0x0);
            if (bVar2) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if (((pGVar12 == (GameEventManager *)0x0) ||
                  (pGVar13 = (pGVar12->fields).AvatarCommandsBuildMode,
                  pGVar13 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
                 (pGVar14 = (pGVar13->fields).LaserCommands,
                 pGVar14 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) goto code_?;
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                        (pGVar14,0.5,(MethodInfo *)0x0);
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar12 != (GameEventManager *)0x0) &&
                (pGVar13 = (pGVar12->fields).AvatarCommandsBuildMode,
                pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
               (pGVar14 = (pGVar13->fields).LaserCommands,
               pGVar14 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
               )) {
              to.x = (pOVar3->fields).animationLerpTime;
              to.y = (pOVar3->fields).distanceScale;
              to.z = (pOVar3->fields).initialScale.x;
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                        (pGVar14,to,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Exit
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).HideCursor.method)(this,this->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PaintCubes() */

void Assembly-CSharp.dll::PaintCubes::PaintCubes__ctor(PaintCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  return;
}

