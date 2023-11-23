
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
    pTStack_1 = (Transform *)(esm->fields).gameObject;
    if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CERoamUUI____c);
    }
    pEStack_2 = TypeInfo__CERoamUUI____c->static_fields->__9__4_0;
    if (pEStack_2 == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CERoamUUI____c);
      }
      pCVar3 = TypeInfo__CERoamUUI____c->static_fields->__9;
      pEStack_2 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEStack_2,(Object *)pCVar3,
                 MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CERoamUUI____c->static_fields->__9__4_0 = pEStack_2;
      func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_0,pEStack_2);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)pTStack_1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)pEStack_2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    this_00 = (esm->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(this_00,(MethodInfo *)0x0);
      pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields)._.tintedWo = pWVar4;
      func_?(&(this->fields)._.tintedWo,pWVar4);
      pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pMVar5 != (MVGroup *)0x0) {
        pTStack_1 = (pMVar5->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTStack_1,1,(MethodInfo *)0x0)
        ;
        pTStack_1 = (Transform *)(esm->fields).gameObject;
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CERoamUUI____c);
        }
        pEStack_2 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                     TypeInfo__CERoamUUI____c->static_fields->__9__4_1;
        if (pEStack_2 == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
          if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CERoamUUI____c);
          }
          pCVar3 = TypeInfo__CERoamUUI____c->static_fields->__9;
          pEStack_2 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                       func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEStack_2,(Object *)pCVar3,
                     MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__4_1 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)pEStack_2;
          func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_1,pEStack_2);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)pTStack_1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEStack_2,
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
          pGStack_9 = (pGVar8->fields).AvatarCommandsBuildMode;
          uStack_10._0_4_ = (this->fields).centerPos.x;
          uStack_10._4_4_ = (this->fields).centerPos.y;
          iStack_11 = (this->fields)._.stateType;
          pEStack_2 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                       (this->fields).centerPos.z;
          pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if ((pMVar5 != (MVGroup *)0x0) &&
             (this_01 = (pMVar5->fields)._.transform, this_01 != (Transform *)0x0)) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_13,this_01,(MethodInfo *)0x0);
            uVar14 = pVVar12->y;
            fVar15 = pVVar12->z;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_13.x = (pVVar16->upVector).x;
            VStack_13.y = (pVVar16->upVector).y;
            VStack_13.z = (pVVar16->upVector).z;
            pTStack_1 = (Transform *)(VStack_13.y + (float)uVar14);
            fVar15 = VStack_13.z + fVar15;
            pMVar17 = TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData;
            this_02 = (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)
                      func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData,
                                      0,0,0);
            centerPos.z = (float)pEStack_2;
            centerPos.x = (float)(undefined4)uStack_10;
            centerPos.y = (float)uStack_10._4_4_;
            lookAtPosition.y = (float)pTStack_1;
            lookAtPosition.x = (float)pMVar17;
            lookAtPosition.z = fVar15;
            MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
            MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
                      (this_02,centerPos,lookAtPosition,(MethodInfo *)0x0);
            if (pGStack_9 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
              if ((pGStack_9->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0
                 ) {
                pAVar18 = (pGStack_9->fields).OnEnterBuildStateEvent;
                (*(pAVar18->fields)._._.invoke_impl)
                          ((pAVar18->fields)._._.method_code,iStack_11,this_02,
                           (pAVar18->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    if (((pMVar2 != (MVWorldObjectClient *)0x0) &&
        (unaff_ESI = pMVar2->klass,
        (TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (unaff_ESI->_1).naturalAligment)) &&
       ((MVCubeModelInstance__Class *)
        (unaff_ESI->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0)
      ;
      if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
      iVar3 = (pMVar2->fields)._.groupId;
      iVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(pEVar1,(MethodInfo *)0x0);
      if (iVar3 == iVar4) {
        root = (pEVar1->fields).gameObject;
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__CERoamUUI____c;
          esm = (EditorStateMachine *)&UNK_?;
          func_?();
        }
        pEVar1 = (EditorStateMachine *)TypeInfo__CERoamUUI____c->static_fields->__9__9_0;
        if (pEVar1 == (EditorStateMachine *)0x0) {
          if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)TypeInfo__CERoamUUI____c;
            esm = (EditorStateMachine *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)
                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
          ;
          object = TypeInfo__CERoamUUI____c->static_fields->__9;
          esm = (EditorStateMachine *)&UNK_?;
          pEVar1 = (EditorStateMachine *)func_?();
          esm = (EditorStateMachine *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar1,(Object *)object,
                     MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__9_0 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)pEVar1;
          esm = pEVar1;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          method = (MethodInfo *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
          esm = (EditorStateMachine *)&UNK_?;
          func_?();
        }
        method = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
        ;
        esm = pEVar1;
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar1,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                  );
        uRam_? = 1;
        return 1;
      }
    }
    pMVar2 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(pEVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    if ((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) {
      return 0;
    }
    if ((MVGroup__Class *)
        (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
        TypeInfo__MVGroup) {
      return 0;
    }
    unaff_ESI = (MVWorldObjectClient__Class *)
                EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                          (pEVar1,(MethodInfo *)0x0);
    if (unaff_ESI == (MVWorldObjectClient__Class *)0x0) {
      EditorStateMachine::EditorStateMachine_EnterGroup(pEVar1,(MVGroup *)0x0,(MethodInfo *)0x0);
    }
    else {
      pIVar5 = (unaff_ESI->_0).image;
      pMVar6 = TypeInfo__MVGroup;
      if ((*(byte *)&pIVar5[4].assembly < (TypeInfo__MVGroup->_1).naturalAligment) ||
         (*(MVGroup__Class **)
           ((pIVar5[2].typeCount - 4) + (uint)(TypeInfo__MVGroup->_1).naturalAligment * 4) !=
          TypeInfo__MVGroup)) goto code_?;
      EditorStateMachine::EditorStateMachine_EnterGroup
                (pEVar1,(MVGroup *)unaff_ESI,(MethodInfo *)0x0);
      unaff_ESI = (MVWorldObjectClient__Class *)(unaff_ESI->_1).static_fields_size;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)unaff_ESI,1,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pMVar6 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar6);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
    this = (CERoamUUI *)(~(1 << (uVar2 & 0x1f)) & 0xfffffffb);
    this_01 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      (&VStack_1,this_01,(int32_t)this,(MethodInfo *)0x0);
    if ((bVar3 != 0) && (VStack_1.woId != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 == 0) || ((this_00->fields).downWorldObjectID != VStack_1.woId)) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          (this_00->fields).downWorldObjectID = VStack_1.woId;
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
    this_00 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)auStack_1,this_00,uVar2,(MethodInfo *)0x0);
    if ((bVar3 != 0) && (iStack_4 != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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

