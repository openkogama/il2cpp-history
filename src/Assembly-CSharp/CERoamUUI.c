
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Enter
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).didExit = 0;
  if (esm != (EditorStateMachine *)0x0) {
    pGVar1 = (GameObject *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)esm,(MethodInfo *)0x0);
    if (TypeInfo__CERoamUUI->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__CERoamUUI___Enter_m__0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>__EventFunction_System__Object__void__
                );
      TypeInfo__CERoamUUI->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__CERoamUUI->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    this_01 = (CubeModelingStateMachine *)
              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)esm,(MethodInfo *)0x0);
    if (this_01 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(this_01,(MethodInfo *)0x0);
      pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields)._.tintedWo = pWVar4;
      pPVar5 = (PrefabPool *)
               EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pPVar5 != (PrefabPool *)0x0) {
        pMVar6 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)pMVar6,1,(MethodInfo *)0x0);
        pGVar1 = (GameObject *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                 TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)esm,(MethodInfo *)0x0);
        if (TypeInfo__CERoamUUI->static_fields->__f__am_cache1 ==
            (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0) {
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)0x0,
                     MethodInfo__CERoamUUI___Enter_m__1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>__EventFunction_System__Object__void__
                    );
          TypeInfo__CERoamUUI->static_fields->__f__am_cache1 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)pUVar2;
        }
        pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__CERoamUUI->static_fields->__f__am_cache1;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,pEVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar7 != (GameEventManager *)0x0) {
          this_00 = (pGVar7->fields).AvatarCommandsBuildMode;
          editorEvent = (this->fields)._.stateType;
          centerPos = (this->fields).centerPos;
          pPVar5 = (PrefabPool *)
                   EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if (pPVar5 != (PrefabPool *)0x0) {
            pMVar6 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar5,(MethodInfo *)0x0);
            if (pMVar6 != (MVPointLightObject *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffe0,(Transform *)pMVar6,(MethodInfo *)0x0
                                  );
              VVar9 = *pVVar8;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                  ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffffe0,VVar9,*pVVar8,(MethodInfo *)0x0);
              VVar9 = *pVVar8;
              this_02 = (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)func_?();
              MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
              MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
                        (this_02,centerPos,VVar9,(MethodInfo *)0x0);
              if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                GameEventManager+AvatarCommandsBuildModeManager::
                GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                          (this_00,editorEvent,(Object *)this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean EnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_EnterObject
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (CERoamUUI *)esm;
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    esm = (EditorStateMachine *)0x0;
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClient *)0x0) {
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                       ((EditorStateMachine *)this,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      bVar4 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVCubeModelInstance__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVWorldObjectClient *)0x0;
      if (bVar5) {
        pMVar6 = pMVar3;
      }
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                           ((EditorStateMachine *)this,(MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
        esm = (EditorStateMachine *)0x0;
        pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar3,
                            (MethodInfo *)0x0);
        esm = (EditorStateMachine *)0x0;
        pOVar8 = (Object *)
                 EditorStateMachine::EditorStateMachine_get_ParentGroupID
                           ((EditorStateMachine *)this,(MethodInfo *)0x0);
        if (pOVar7 == pOVar8) {
          in_stack_9 = (StateTransitionTable *)&UNK_?;
          root = (GameObject *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                 TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this,(MethodInfo *)0x0)
          ;
          if (TypeInfo__CERoamUUI->static_fields->__f__am_cache2 ==
              (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0) {
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            method = 
            MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>__EventFunction_System__Object__void__
            ;
            esm = (EditorStateMachine *)
                  MethodInfo__CERoamUUI___EnterObject_m__2_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
            ;
            this = (CERoamUUI *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)0x0,
                       MethodInfo__CERoamUUI___EnterObject_m__2_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>__EventFunction_System__Object__void__
                      );
            TypeInfo__CERoamUUI->static_fields->__f__am_cache2 =
                 (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)this_00;
          }
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__CERoamUUI->static_fields->__f__am_cache2;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          in_stack_9 = (StateTransitionTable *)&UNK_?;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                    );
          (this->fields).enterEditNextFrame = 1;
          return 1;
        }
      }
    }
    in_stack_9 = (StateTransitionTable *)&UNK_?;
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                       ((EditorStateMachine *)this,(MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVGroup__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVGroup)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar6 = (MVWorldObjectClient *)0x0;
      if (bVar5) {
        pMVar6 = pMVar3;
      }
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                  ((EditorStateMachine *)this,(MethodInfo *)0x0);
        this_01 = (PrefabPool *)func_?();
        EditorStateMachine::EditorStateMachine_EnterGroup
                  ((EditorStateMachine *)this,(MVGroup *)this_01,(MethodInfo *)0x0);
        if (this_01 != (PrefabPool *)0x0) {
          t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)t,1,(MethodInfo *)0x0);
          this_02 = (MainCameraManager *)
                    GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)this,(MethodInfo *)0x0);
          if (this_02 != (MainCameraManager *)0x0) {
            esm = (EditorStateMachine *)0x0;
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_02,1,(MethodInfo *)0x0);
            esm = (EditorStateMachine *)&esm;
            pOVar7 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this,pOVar7,(MethodInfo *)0x0);
            return 1;
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Execute
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  e = esm;
  this_00 = this;
  if ((this->fields).enterEditNextFrame != 0) {
    (this->fields).enterEditNextFrame = 0;
    this = (CERoamUUI *)0x35;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (e == (EditorStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  ESStateBase::ESStateBase_TintObjectsOnMouseOver((ESStateBase *)this_00,e,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this_00->fields).didExit == 0) {
    func_?(&stack0xffffffb4,0,0x48);
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    this = (CERoamUUI *)(~(1 << (uVar1 & 0x1f)) & 0xfffffffb);
    this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)this_01,(int32_t)this
                       ,(MethodInfo *)0x0);
    if ((bVar2 != 0) && (iStack_3 != -1)) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar2 == 0) || ((this_00->fields).downWorldObjectID != iStack_3)) {
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          (this_00->fields).downWorldObjectID = iStack_3;
        }
      }
      else {
        (this_00->fields).downWorldObjectID = -1;
        if (e == (EditorStateMachine *)0x0) {
code_?:
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pWVar5 = EditorStateMachine::EditorStateMachine_Select(e,0,(int32_t)this,(MethodInfo *)0x0);
        if (pWVar5 != (WorldObjectClientRef *)0x0) {
          CERoamUUI_EnterObject(this_00,e,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Exit
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).didExit = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsBuildMode,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
              (this_00,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean HandleSelect(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_HandleSelect
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).didExit == 0) {
    func_?(auStack_1,0,0x48);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar2 = ~(1 << (uVar2 & 0x1f)) & 0xfffffffb;
    this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)auStack_1,(HashSet_1_System_Int32_ *)this_00,uVar2,
                       (MethodInfo *)0x0);
    if ((bVar3 != 0) && (iStack_4 != -1)) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 != 0) && ((this->fields).downWorldObjectID == iStack_4)) {
        (this->fields).downWorldObjectID = -1;
        if (esm != (EditorStateMachine *)0x0) {
          pWVar5 = EditorStateMachine::EditorStateMachine_Select(esm,0,uVar2,(MethodInfo *)0x0);
          return pWVar5 != (WorldObjectClientRef *)0x0;
        }
        func_?();
        pcVar6 = (code *)swi(3);
        bVar3 = (*pcVar6)();
        return bVar3;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        (this->fields).downWorldObjectID = iStack_4;
      }
    }
  }
  return 0;
}


/* Void <EnterObject>m__2(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__EnterObject_m__2
               (IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditAnimationState *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState,x,
                    StringLiteral_TPose);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Enter>m__0(IAvatarEditUIState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__Enter_m__0
               (IAvatarEditUIState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditUIState *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState,x,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Enter>m__1(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__Enter_m__1
               (IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditAnimationState *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState,x,
                    StringLiteral_Idle);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CERoamUUI(Vector3) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__ctor
               (CERoamUUI *this,Vector3 centerPos,MethodInfo *method)

{
  (this->fields).downWorldObjectID = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).centerPos.x = centerPos.x;
  (this->fields).centerPos.y = centerPos.y;
  (this->fields).centerPos.z = centerPos.z;
  return;
}

