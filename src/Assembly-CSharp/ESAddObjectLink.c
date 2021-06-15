
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_DoAddLink
               (ESAddObjectLink *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
              (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Enter
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    this_00 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClient *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_state_started_with_multi_selecti,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
      return;
    }
    pOVar1 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
    MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(pOVar1,(MethodInfo *)0x0);
    (this->fields).tempLink = pOVar1;
    pTVar2 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                       ((CloudyThemeBase *)this_00,(MethodInfo *)0x0);
    if (pTVar2 != (ThemeSkybox *)0x3) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Should_not_happen___object_links,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
      return;
    }
    pOVar1 = (this->fields).tempLink;
    this_01 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClient *)0x0) {
      pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      if (pOVar1 != (ObjectLink *)0x0) {
        (pOVar1->fields).objectConnectorWOID = (int32_t)pIVar3;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_02 != (MainCameraManager *)0x0) {
          this_03 = (ObjectPool_1_System_Object_ *)
                    ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0
                              );
          if (this_03 != (ObjectPool_1_System_Object_ *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
            ObjectPool_1_System_Object__set_countAll
                      (this_03,(int32_t)(this->fields).tempLink,(MethodInfo *)0x0);
            this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
            if (this_04 != (MVWorldObjectClientManager *)0x0) {
              pWVar4 = MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWorldObjectClientRef
                                 (this_04,(int32_t)pIVar3,(MethodInfo *)0x0);
              (this->fields).woRef = pWVar4;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Execute
               (ESAddObjectLink *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,(float)e,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).woRef;
  if (this_00 == (WorldObjectClientRef *)0x0) goto code_?;
  this_01 = WorldObjectClientRef`1[MVRoundCube]::
            WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                      ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if (this_01 == (MVRoundCube *)0x0) {
    ESAddObjectLink_LeaveAddLink(this,e,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    method_00 = TypeInfo__ESAddObjectLink___Execute_c__AnonStorey0;
    this_02 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
    iVar2 = 0x48;
    pvVar3 = (void *)0x0;
    func_?(&stack0xffffffac);
    if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
    (this_02->fields)._._._._.m_CachedPtr = pvVar3;
    (this_02->fields).state = iVar2;
    (this_02->fields).originalScale.x = (float)method_00;
    (this_02->fields).originalScale.y = fStack_4;
    (this_02->fields).originalScale.z = fStack_5;
    (this_02->fields).target = pTStack_6;
    (this_02->fields).testState = iStack_7;
    (this_02->fields).OnScaleAnimationStopped = pSStack_8;
    this_02[1].klass = pSStack_9;
    this_02[1].monitor = pMStack_10;
    this_02[1].fields._._._._.m_CachedPtr = pvStack_11;
    this_02[1].fields.state = iStack_12;
    this_02[1].fields.originalScale.x = fStack_13;
    this_02[1].fields.originalScale.y = fStack_14;
    this_02[1].fields.originalScale.z = fStack_15;
    this_02[1].fields.target = pTStack_16;
    this_02[1].fields.testState = (undefined4)uStack_17;
    this_02[1].fields.OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)uStack_17._4_4_;
    bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&this_02->fields,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if ((bVar1 != 0) && (this_02[1].fields._._._._.m_CachedPtr != (void *)0xffffffff)) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,(int32_t)this_02[1].fields._._._._.m_CachedPtr,(MethodInfo *)0x0);
      if (pMVar18 != (MVWorldObject *)0x0) {
        pIVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        if (pIVar19 != this_02[1].fields._._._._.m_CachedPtr) {
          this_04 = (List_1_VoxelHit_ *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                    KeyValuePair`2[System::Object,System::Object],System::Object]::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                *)this_01,(MethodInfo *)0x0);
          this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__System__Predicate<MV::WorldObject::ObjectLink>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_05,(Object *)this_02,
                     MethodInfo__ESAddObjectLink___Execute_c__AnonStorey0____m__0_MV__WorldObject__ObjectLink_
                     ,
                     MethodInfo__System__Predicate<MV::WorldObject::ObjectLink>__Predicate_System__Object__void__
                    );
          if (this_04 == (List_1_VoxelHit_ *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                  List_1_VoxelHit__Exists
                            (this_04,(Predicate_1_VoxelHit_ *)this_05,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                            );
          if (bVar1 == 0) {
            cVar20 = (*(code *)(this_01->klass->vtable).ValidateObjectLinkTarget.method)
                              (this_01,pMVar18,(this_01->klass->vtable).ReceivePackage.methodPtr);
            if (cVar20 != '\0') {
              pOVar21 = (this->fields).tempLink;
              if (pOVar21 == (ObjectLink *)0x0) goto code_?;
              bVar22 = cRam_? == '\0';
              (pOVar21->fields).objectWOID = (int32_t)this_02[1].fields._._._._.m_CachedPtr;
              if (bVar22) {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_06 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              if (this_06 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
                        (this_06,(this->fields).tempLink,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    if (e == (EditorStateMachine *)0x0) {
code_?:
      func_?(0);
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    ESAddObjectLink_LeaveAddLink(this,e,(MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Exit
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = (ObjectPool_1_System_Object_ *)
              ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (ObjectPool_1_System_Object_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
      ObjectPool_1_System_Object__set_countAll(this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_LeaveAddLink
               (ESAddObjectLink *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pIVar1 = (IList_1_VoxelHit_ *)
             EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (MVGroup *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        if (pIVar1 != pIVar2) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          return;
        }
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

