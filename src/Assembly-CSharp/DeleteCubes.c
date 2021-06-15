
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Enter
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    cubeCorners = CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
                            (e,(MethodInfo *)0x0);
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__DeleteCursor);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this_01->fields).originalScale.x = 0.2;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_EDI);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      material = PrefabPool::PrefabPool_get_CellCursorErrorMaterial(this_02,(MethodInfo *)0x0);
      this_03 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_03,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (this_01->fields)._._._._.m_CachedPtr = this_03;
      (this->fields).deleteCursor = (DeleteCursor *)this_01;
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
                  (this_00,LaserPointerState__Enum_DeletingCubes,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Execute
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  this_00 = e;
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
  e._3_1_ = '\0';
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0;
  }
  if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
  pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                      ((PrefabPool *)this_00,(MethodInfo *)0x0);
  if (pOVar2 == (ObjectiveArrow *)0x0) {
    (this->fields).cubeNotToBeDeleted = (CubePickingInfo *)0x0;
  }
  else {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          ((PrefabPool *)this_00,(MethodInfo *)0x0);
      if (pOVar2 == (ObjectiveArrow *)0x0) goto code_?;
      pfVar3 = &(pOVar2->fields).initialScale.y;
      e._3_1_ = (char)((uint)*pfVar3 >> 0x18);
      method._1_1_ = (undefined1)((ushort)*(undefined2 *)&(pOVar2->fields).initialScale.z >> 8);
      IVar4.z._1_1_ = method._1_1_;
      IVar4._0_5_ = *(undefined5 *)pfVar3;
      bVar1 = CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                        (this_00,IVar4,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((this->fields).cubeNotToBeDeleted != (CubePickingInfo *)0x0) {
          pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              ((PrefabPool *)this_00,(MethodInfo *)0x0);
          if (pOVar2 == (ObjectiveArrow *)0x0) goto code_?;
          fVar5 = (pOVar2->fields).initialScale.y;
          iVar6 = *(int16_t *)&(pOVar2->fields).initialScale.z;
          pCVar7 = (this->fields).cubeNotToBeDeleted;
          if (pCVar7 == (CubePickingInfo *)0x0) goto code_?;
          uVar8._0_2_ = (pCVar7->fields).iLocalPos.x;
          uVar8._2_2_ = (pCVar7->fields).iLocalPos.y;
          iVar9 = (pCVar7->fields).iLocalPos.z;
          if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
            func_?();
          }
          e._3_1_ = (char)((uint)uVar8 >> 0x18);
          method._0_1_ = (undefined1)iVar9;
          method._1_1_ = (undefined1)((ushort)iVar9 >> 8);
          a.z = iVar6;
          a._0_4_ = fVar5;
          b.z._0_1_ = method._0_1_;
          b.x = (short)uVar8;
          b.y = (short)((uint)uVar8 >> 0x10);
          b.z._1_1_ = method._1_1_;
          bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                            (a,b,(MethodInfo *)0x0);
          if (bVar1 == 0) goto code_?;
        }
        pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            ((PrefabPool *)this_00,(MethodInfo *)0x0);
        if (pOVar2 == (ObjectiveArrow *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (this_00,*(IntVector *)&(pOVar2->fields).initialScale.y,
                   AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
        pMVar10 = (MVCubeModelBase *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab
                            ((PrefabPool *)this_00,(MethodInfo *)0x0);
        pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            ((PrefabPool *)this_00,(MethodInfo *)0x0);
        if ((pOVar2 == (ObjectiveArrow *)0x0) || (pMVar10 == (MVCubeModelBase *)0x0))
        goto code_?;
        MVCubeModelBase::MVCubeModelBase_RemoveCube
                  (pMVar10,*(IntVector *)&(pOVar2->fields).initialScale.y,(MethodInfo *)0x0);
        pCVar7 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking
                            (this_00,(MethodInfo *)0x0);
        (this->fields).cubeNotToBeDeleted = pCVar7;
        pMVar10 = (MVCubeModelBase *)
                  PrefabPool::PrefabPool_get_MVJetPackPrefab
                            ((PrefabPool *)this_00,(MethodInfo *)0x0);
        if (pMVar10 == (MVCubeModelBase *)0x0) goto code_?;
        e._3_1_ = '\x10';
        cubeCount = MVCubeModelBase::MVCubeModelBase_get_CubeCount(pMVar10,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
          func_?();
        }
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubeDeleted,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pDVar11 = (this->fields).deleteCursor;
  pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                      ((PrefabPool *)this_00,(MethodInfo *)0x0);
  this_01 = (DayNightCycle *)
            PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)this_00,(MethodInfo *)0x0);
  if (pDVar11 != (DeleteCursor *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (e._3_1_ != '\0') {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar12 == (GameEventManager *)0x0) ||
          (pGVar13 = (pGVar12->fields).AvatarCommandsBuildMode,
          pGVar13 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
         (pGVar14 = (pGVar13->fields).LaserCommands,
         pGVar14 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
      goto code_?;
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar14,(pDVar11->fields).deleteCubeLaserOnTime,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (pDVar11->fields).deleteCubeTime = fVar5;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pOVar2 == (ObjectiveArrow *)0x0) {
      pCVar15 = (pDVar11->fields).deleteCursor;
      if (pCVar15 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar15,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar12 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar12 != (GameEventManager *)0x0) &&
          (pGVar13 = (pGVar12->fields).AvatarCommandsBuildMode,
          pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar14 = (pGVar13->fields).LaserCommands,
         pGVar14 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        to.x = (pOVar2->fields).animationLerpTime;
        to.y = (pOVar2->fields).distanceScale;
        to.z = (pOVar2->fields).initialScale.x;
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar14,to,(MethodInfo *)0x0);
        pCVar15 = (pDVar11->fields).deleteCursor;
        if (pCVar15 != (CellCursor *)0x0) {
          CellCursor::CellCursor_set_Active(pCVar15,1,(MethodInfo *)0x0);
          pCVar15 = (pDVar11->fields).deleteCursor;
          IVar4 = *(IntVector *)&(pOVar2->fields).initialScale.y;
          if (this_01 != (DayNightCycle *)0x0) {
            cubeGameObject =
                 DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
            if (pCVar15 != (CellCursor *)0x0) {
              CellCursor::CellCursor_SetCursor_1
                        (pCVar15,IVar4,(GameObject *)cubeGameObject,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_Exit
               (DeleteCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

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


/* Void HideCursor() */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes_HideCursor(DeleteCubes *this,MethodInfo *method)

{
  pDVar1 = (this->fields).deleteCursor;
  if ((pDVar1 == (DeleteCursor *)0x0) ||
     (pCVar2 = (pDVar1->fields).deleteCursor, pCVar2 == (CellCursor *)0x0)) {
    uStack_3 = 0;
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_3 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  puStack_7 = &stack0xffffffb8;
  puVar8 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar8 = puStack_7;
  }
  puStack_7 = puVar8;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(pCVar2->fields).cursorCubes;
  puStack_10 = (undefined4 *)&stack0xffffffb8;
  puStack_7 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffffb8;
    puStack_7 = &stack0xffffffb8;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_9.monitor = (MonitorData *)pLVar11->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_3 = 0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_9,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                         );
      if (pOVar14 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar14[3].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    *puStack_10 = 0x3e;
    uStack_3 = 0xffffffff;
    func_?(&CStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(pCVar2->fields).cursorCubes;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
      *unaff_FS_OFFSET = uStack_6;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DeleteCubes() */

void Assembly-CSharp.dll::DeleteCubes::DeleteCubes__ctor(DeleteCubes *this,MethodInfo *method)

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

