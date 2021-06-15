
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Enter
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    cubeCorners = CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
                            (e,(MethodInfo *)0x0);
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__SprayCursor);
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
      material = PrefabPool::PrefabPool_get_CellCursorMaterial(this_02,(MethodInfo *)0x0);
      this_03 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_03,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (this_01->fields)._._._._.m_CachedPtr = this_03;
      (this->fields).sprayCursor = (SprayCursor *)this_01;
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
                  (this_00,LaserPointerState__Enum_SprayCubes,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Execute
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

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
  bVar1 = 0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    bVar1 = 0;
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                       ((PrefabPool *)e,(MethodInfo *)0x0);
    if (pOVar3 == (ObjectiveArrow *)0x0) {
      bVar2 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
      if (bVar2 != 0) {
        hit = (Vector3 *)&stack0xffffffd8;
        bVar2 = DrawPlane::DrawPlane_Pick(hit,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          iVar4 = 0x2331;
          this_01 = (DayNightCycle *)
                    PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
          if (this_01 == (DayNightCycle *)0x0) goto code_?;
          gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
          bVar1 = 0;
          bVar2 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                            ((GameObject *)gameObject,(IntVector *)&stack0xffffffe4,
                             (MethodInfo *)0x0);
          if (bVar2 != 0) {
            IVar5.z = iVar4;
            IVar5._0_4_ = hit;
            bVar2 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                              (e,IVar5,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              pos.z = iVar4;
              pos._0_4_ = hit;
              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                        (e,pos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
              pMVar6 = (MVCubeModelBase *)
                       PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0)
              ;
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                  ((MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                func_?();
              }
              byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                            CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
              material = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (e,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Cube->_1).cctor_started == 0)) {
                func_?();
              }
              faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
              this_02 = (Cube *)func_?();
              Cube::Cube__ctor(this_02,byteCorners,faceMaterials,(MethodInfo *)0x0);
              if (pMVar6 == (MVCubeModelBase *)0x0) goto code_?;
              pos_00.z = iVar4;
              pos_00._0_4_ = hit;
              MVCubeModelBase::MVCubeModelBase_AddCube
                        (pMVar6,pos_00,(CubeBase *)this_02,(MethodInfo *)0x0);
              bVar1 = 1;
            }
          }
        }
      }
      (this->fields).cubeNotToBeSprayed = (CubePickingInfo *)0x0;
    }
    else {
      if ((this->fields).cubeNotToBeSprayed != (CubePickingInfo *)0x0) {
        pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           ((PrefabPool *)e,(MethodInfo *)0x0);
        if (pOVar3 == (ObjectiveArrow *)0x0) goto code_?;
        IVar5 = *(IntVector *)&(pOVar3->fields).initialScale.y;
        pCVar7 = (this->fields).cubeNotToBeSprayed;
        if (pCVar7 == (CubePickingInfo *)0x0) goto code_?;
        pIVar8 = *(IntVector__Class **)&(pCVar7->fields).iLocalPos;
        iVar4 = (pCVar7->fields).iLocalPos.z;
        if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
          pIVar8 = TypeInfo__MV__WorldObject__IntVector;
          func_?();
        }
        b.z = iVar4;
        b._0_4_ = pIVar8;
        bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                          (IVar5,b,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
      pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         ((PrefabPool *)e,(MethodInfo *)0x0);
      if (pOVar3 == (ObjectiveArrow *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                (e,*(IntVector *)&(pOVar3->fields).initialScale.y,AudioActions__Enum_CubeAdded,
                 (MethodInfo *)0x0);
      EVar9 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube(e,(MethodInfo *)0x0);
      bVar1 = EVar9 != EditCubeChange__Enum_None;
      pCVar7 = CubeModelingStateMachine::CubeModelingStateMachine_DoPicking(e,(MethodInfo *)0x0);
      (this->fields).cubeNotToBeSprayed = pCVar7;
    }
  }
code_?:
  this_00 = (this->fields).sprayCursor;
  if (e != (CubeModelingStateMachine *)0x0) {
    pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                       ((PrefabPool *)e,(MethodInfo *)0x0);
    pMVar6 = (MVCubeModelBase *)
             PrefabPool::PrefabPool_get_MVJetPackPrefab((PrefabPool *)e,(MethodInfo *)0x0);
    if (this_00 != (SprayCursor *)0x0) {
      SprayCursor::SprayCursor_UpdateCursor
                (this_00,(CubePickingInfo *)pOVar3,pMVar6,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_Exit
               (SprayCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).HideCursor.method)(this,this->klass[1]._0.image);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     ((pGVar2->fields).LaserCommands !=
      (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (pARam00000010 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (pARam00000010,UIPushOption__Enum_None,
                 MethodInfo__System__Action<LaserPointerState>__Invoke_LaserPointerState_);
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::SprayCubes::SprayCubes_HideCursor(SprayCubes *this,MethodInfo *method)

{
  pSVar1 = (this->fields).sprayCursor;
  if ((pSVar1 == (SprayCursor *)0x0) ||
     (pCVar2 = (pSVar1->fields).sprayCursor, pCVar2 == (CellCursor *)0x0)) {
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


/* SprayCubes() */

void Assembly-CSharp.dll::SprayCubes::SprayCubes__ctor(SprayCubes *this,MethodInfo *method)

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

