
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Enter
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CERoamUUI____c);
    cRam_? = '\x01';
  }
  (this->fields).didExit = 0;
  if (esm != (EditorStateMachine *)0x0) {
    pGVar1 = (esm->fields).gameObject;
    if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CERoamUUI____c);
    }
    callbackFunction = TypeInfo__CERoamUUI____c->static_fields->__9__4_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CERoamUUI____c);
      }
      pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pCVar2,
                 MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CERoamUUI____c->static_fields->__9__4_0 = callbackFunction;
      func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    this_00 = (esm->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(this_00,(MethodInfo *)0x0);
      pWVar3 = MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
      (this->fields)._.tintedWo = pWVar3;
      func_?(&(this->fields)._.tintedWo,pWVar3);
      pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pMVar4 != (MVGroup *)0x0) {
        pTVar5 = (pMVar4->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar5,1,(MethodInfo *)0x0);
        pGVar1 = (esm->fields).gameObject;
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CERoamUUI____c);
        }
        callbackFunction_00 = TypeInfo__CERoamUUI____c->static_fields->__9__4_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0)
        {
          if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CERoamUUI____c);
          }
          pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                              );
          if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0
             ) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pCVar2,
                     MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__4_1 = callbackFunction_00;
          func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_1,callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                  );
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           (pGVar8 = (pMVar7->fields).GameEventManager, pGVar8 != (GameEventManager *)0x0)) {
          uStack_9._0_4_ = (this->fields).centerPos.x;
          uStack_9._4_4_ = (this->fields).centerPos.y;
          pGVar10 = (pGVar8->fields).AvatarCommandsBuildMode;
          iVar11 = (this->fields)._.stateType;
          fVar12 = (this->fields).centerPos.z;
          pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if ((pMVar4 != (MVGroup *)0x0) &&
             (pTVar5 = (pMVar4->fields)._.transform, pTVar5 != (Transform *)0x0)) {
            pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_14,pTVar5,(MethodInfo *)0x0);
            uStack_15._0_4_ = pVVar13->x;
            uStack_15._4_4_ = pVVar13->y;
            fStack_16 = pVVar13->z;
            if (cRam_? == '\0') {
              VStack_14.y = (float)&TypeInfo__UnityEngine__Vector3;
              VStack_14.x = (float)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_18._0_4_ = (pVVar17->upVector).x;
            uStack_18._4_4_ = (pVVar17->upVector).y;
            fStack_19 = (pVVar17->upVector).z;
            VStack_14.z = fStack_19 + fStack_16;
            VStack_14.y = (float)TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData;
            VStack_14.x = (float)&UNK_?;
            this_01 = (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)func_?();
            if (this_01 != (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)0x0) {
              centerPos.z = fVar12;
              centerPos.x = (float)(undefined4)uStack_9;
              centerPos.y = (float)uStack_9._4_4_;
              lookAtPosition.y = VStack_14.y;
              lookAtPosition.x = VStack_14.x;
              lookAtPosition.z = VStack_14.z;
              MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
              MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
                        (this_01,centerPos,lookAtPosition,(MethodInfo *)0x0);
              if (pGVar10 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                if ((pGVar10->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0)
                {
                  pAVar20 = (pGVar10->fields).OnEnterBuildStateEvent;
                  (*(pAVar20->fields)._._.invoke_impl)
                            ((pAVar20->fields)._._.method_code,iVar11,this_01,
                             (pAVar20->fields)._._.method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean EnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_EnterObject
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  pEVar1 = esm;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CERoamUUI____c);
    cRam_? = '\x01';
  }
  if (pEVar1 != (EditorStateMachine *)0x0) {
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0);
    if (((pMVar2 == (MVWorldObjectClient *)0x0) ||
        ((pMVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth)) ||
       ((MVCubeModelInstance__Class *)
        (pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelInstance)) {
code_?:
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0)
      ;
      if (pMVar2 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      if ((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) {
        return 0;
      }
      if ((MVGroup__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVGroup) {
        return 0;
      }
      unaff_EBX = (MVGroup *)
                  EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                            (pEVar1,(MethodInfo *)0x0);
      if (unaff_EBX == (MVGroup *)0x0) {
        EditorStateMachine::EditorStateMachine_EnterGroup(pEVar1,(MVGroup *)0x0,(MethodInfo *)0x0);
      }
      else {
        pMVar3 = TypeInfo__MVGroup;
        if (((unaff_EBX->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth)
           || ((MVGroup__Class *)
               (unaff_EBX->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1]
               != TypeInfo__MVGroup)) goto code_?;
        EditorStateMachine::EditorStateMachine_EnterGroup(pEVar1,unaff_EBX,(MethodInfo *)0x0);
        t = (unaff_EBX->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
        this_00 = (pEVar1->fields).weCamera;
        if (this_00 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,1,(MethodInfo *)0x0);
          esm = (EditorStateMachine *)0x34;
          value = (Object *)func_?(TypeInfo__EditorEvent,&esm);
          FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,value,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    else {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0)
      ;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        iVar4 = (pMVar2->fields)._.groupId;
        iVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(pEVar1,(MethodInfo *)0x0);
        if (iVar4 != iVar5) goto code_?;
        root = (pEVar1->fields).gameObject;
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__CERoamUUI____c;
          esm = (EditorStateMachine *)&UNK_?;
          func_?();
        }
        pEVar1 = (EditorStateMachine *)TypeInfo__CERoamUUI____c->static_fields->__9__9_0;
        if (pEVar1 != (EditorStateMachine *)0x0) {
code_?:
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            method = (MethodInfo *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
            esm = (EditorStateMachine *)&UNK_?;
            func_?();
          }
          method = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
          ;
          esm = pEVar1;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                    );
          uRam_? = 1;
          return 1;
        }
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__CERoamUUI____c;
          esm = (EditorStateMachine *)&UNK_?;
          func_?();
        }
        method = (MethodInfo *)
                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
        ;
        unaff_EBX = (MVGroup *)TypeInfo__CERoamUUI____c->static_fields->__9;
        esm = (EditorStateMachine *)&UNK_?;
        pEVar1 = (EditorStateMachine *)func_?();
        if (pEVar1 != (EditorStateMachine *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)unaff_EBX,
                     MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__9_0 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)pEVar1;
          func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__9_0,pEVar1);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(unaff_EBX,pMVar3);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Execute
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    ESStateBase::ESStateBase_TintObjectsOnMouseOver((ESStateBase *)this_00,e,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  if ((this_00->fields).didExit == 0) {
    func_?(&VStack_1,0,0x48);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar2 = ~(1 << (uVar2 & 0x1f)) & 0xfffffffb;
    this = (CERoamUUI *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this == (CERoamUUI *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              ((HashSet_1_UnityEngine_Vector3_ *)this,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (&VStack_1,(HashSet_1_System_Int32_ *)this,uVar2,(MethodInfo *)0x0);
    if ((bVar4 != 0) && (VStack_1.woId != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar4 == 0) || ((this_00->fields).downWorldObjectID != VStack_1.woId)) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          (this_00->fields).downWorldObjectID = VStack_1.woId;
        }
      }
      else {
        (this_00->fields).downWorldObjectID = -1;
        if (e == (EditorStateMachine *)0x0) goto code_?;
        pWVar5 = EditorStateMachine::EditorStateMachine_Select(e,0,uVar2,(MethodInfo *)0x0);
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
  ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).didExit = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
     pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    if ((pGVar4->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
      pAVar5 = (pGVar4->fields).OnExitBuildStateEvent;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(this->fields)._.stateType,0,
                 (pAVar5->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean HandleSelect(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_HandleSelect
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  if ((this->fields).didExit == 0) {
    func_?(auStack_1,0,0x48);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar2 = ~(1 << (uVar2 & 0x1f)) & 0xfffffffb;
    this_00 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)auStack_1,(HashSet_1_System_Int32_ *)this_00,uVar2,
                       (MethodInfo *)0x0);
    if ((bVar4 != 0) && (iStack_5 != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar4 != 0) && ((this->fields).downWorldObjectID == iStack_5)) {
        (this->fields).downWorldObjectID = -1;
        if (esm != (EditorStateMachine *)0x0) {
          pWVar6 = EditorStateMachine::EditorStateMachine_Select(esm,0,uVar2,(MethodInfo *)0x0);
          return pWVar6 != (WorldObjectClientRef *)0x0;
        }
        goto code_?;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (this->fields).downWorldObjectID = iStack_5;
      }
    }
  }
  return 0;
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

