
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Clear
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableLogicPointer___Clear_m__3_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
            );
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer_OnDestroy
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
  }
  (this->fields).editorStateMachine = (EditorStateMachine *)0x0;
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShow
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).placedWo;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    (this->fields).showing = pMVar1 != (MVRoundCube *)0x0;
    if (pMVar1 != (MVRoundCube *)0x0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__FirstTimeActivatableLogicPointer___OnShow_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShown
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).showing = 0;
  FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  firstTimeEvent = (this->fields)._._.firstTimeEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?();
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Start
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_Start
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInParent_6
                      ((Component_1 *)this,
                       DesktopEditModeController_MethodInfo__UnityEngine__Component__GetComponentInParent<DesktopEditModeController>__
                      );
  if (this_00 != (ThemeSkybox *)0x0) {
    pEVar1 = (EditorStateMachine *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,(MethodInfo *)0x0);
    (this->fields).editorStateMachine = pEVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Update
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).showing == 0) {
    pEVar1 = (this->fields).editorStateMachine;
    if (pEVar1 != (EditorStateMachine *)0x0) {
      EVar2 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar1,(MethodInfo *)0x0);
      if (EVar2 != EditorEvent__Enum_ESInsert) {
        if ((this->fields).finishedESInsert != 0) {
          pEVar1 = (this->fields).editorStateMachine;
          if (pEVar1 == (EditorStateMachine *)0x0) goto code_?;
          EVar2 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar1,(MethodInfo *)0x0);
          if (EVar2 == EditorEvent__Enum_ESTerrainEdit) {
            (this->fields).hasPlacedObject = 1;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__FirstTimeActivatableLogicPointer->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0) {
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)0x0,
                         MethodInfo__FirstTimeActivatableLogicPointer___Update_m__2_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
                        );
              TypeInfo__FirstTimeActivatableLogicPointer->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)pUVar4;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__FirstTimeActivatableLogicPointer->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar3,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                      );
          }
        }
        return;
      }
      (this->fields).finishedESInsert = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pEVar1 = (this->fields).editorStateMachine;
      if (((pEVar1 != (EditorStateMachine *)0x0) &&
          (this_01 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               (pEVar1,(MethodInfo *)0x0), this_01 != (MVWorldObjectClient *)0x0))
         && (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
            this_00 != (MVWorldObjectClientManager *)0x0)) {
        pWVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                           (this_00,(int32_t)id,(MethodInfo *)0x0);
        (this->fields).placedWo = pWVar5;
        return;
      }
    }
  }
  else {
    pWVar5 = (this->fields).placedWo;
    if (pWVar5 != (WorldObjectClientRef *)0x0) {
      pMVar6 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar5,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pMVar6 != (MVRoundCube *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,
                   MethodInfo__FirstTimeActivatableLogicPointer___Update_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  );
        if ((this->fields).hasPlacedObject == 0) {
          return;
        }
        pEVar1 = (this->fields).editorStateMachine;
        if (pEVar1 == (EditorStateMachine *)0x0) goto code_?;
        EVar2 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar1,(MethodInfo *)0x0);
        if (EVar2 != EditorEvent__Enum_ObjectSelected) {
          return;
        }
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                          (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return;
        }
      }
      FirstTimeActivatableLogicPointer_OnShown(this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Clear>m__3(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__Clear_m__3
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (x != (TextBubbleController *)0x0) {
    TextBubbleController::TextBubbleController_ClearBubblesWithId
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnShow>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__OnShow_m__0
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).placedWo;
  if ((this_00 != (WorldObjectClientRef *)0x0) &&
     (pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         ), pMVar1 != (MVRoundCube *)0x0)) {
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe4,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr)
    ;
    uVar3._0_4_ = (this->fields).bubbleWorldSpaceOffset.x;
    uStack_4 = (this->fields).bubbleWorldSpaceOffset.y;
    fVar5 = (this->fields).bubbleWorldSpaceOffset.z;
    auStack_6._4_8_ = *puVar2;
    fVar7 = *(float *)(puVar2 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar7;
    a.x = (float)auStack_6._4_4_;
    a.y = (float)auStack_6._8_4_;
    b.z = fVar5;
    b.x = (float)(int)uVar3;
    b.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)auStack_6,a,b,(MethodInfo *)0x0);
    content = (this->fields).bubbleContent;
    uVar3._0_4_ = pVVar8->x;
    uStack_4 = pVVar8->y;
    fVar7 = pVVar8->z;
    fVar5 = (this->fields).bubbleLifetimeWhileShown;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pVVar10 = &(this->fields).offset;
    auStack_6._4_8_ = *pVVar10;
    if (x != (TextBubbleController *)0x0) {
      worldPosition.z = fVar7;
      uStack_4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      worldPosition.x = (float)(undefined4)uVar3;
      worldPosition.y = (float)uStack_4;
      iVar11 = TextBubbleController::TextBubbleController_ShowBubble3D_1
                        (x,worldPosition,fVar5,content,pTVar9,*pVVar10,(MethodInfo *)0x0);
      (this->fields).bubbleId = iVar11;
      if (((this->fields).skipAllowed == 0) || ((this->fields).hasButtonBeenAdded != 0)) {
        return;
      }
      original = (this->fields).skipElement;
      (this->fields).hasButtonBeenAdded = 1;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_01 = (HoverCraftMotor *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)original,
                           UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                          );
      if (this_01 != (HoverCraftMotor *)0x0) {
        this_02 = (UnityEvent *)
                  HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_01,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer__OnShown__,
                   (MethodInfo *)0x0);
        if (this_02 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
          iVar11 = (this->fields).bubbleId;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_01,(MethodInfo *)0x0);
          pTVar9 = (Transform *)0x0;
          if (pTVar12 == (Transform *)0x0) {
code_?:
            TextBubbleController::TextBubbleController_AddElement
                      (x,iVar11,(RectTransform *)pTVar9,(MethodInfo *)0x0);
            return;
          }
          if (pTVar12->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar9 = pTVar12;
          }
          if (pTVar9 != (Transform *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <Update>m__1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__Update_m__1
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).placedWo;
  bubbleId = (this->fields).bubbleId;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar1 != (MVRoundCube *)0x0) {
      puVar2 = (undefined8 *)
               (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                         (&VStack_3,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
      VStack_3.y = (this->fields).bubbleWorldSpaceOffset.x;
      VStack_3.z = (this->fields).bubbleWorldSpaceOffset.y;
      VStack_4 = (Vector2)*puVar2;
      fVar5 = *(float *)(puVar2 + 1);
      fVar6 = (this->fields).bubbleWorldSpaceOffset.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar5;
      a.x = VStack_4.x;
      a.y = VStack_4.y;
      b.z = fVar6;
      b.x = VStack_3.y;
      b.y = VStack_3.z;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         (&VStack_3,a,b,(MethodInfo *)0x0);
      pVVar8 = &(this->fields).offset;
      VStack_4 = *pVVar8;
      if (x != (TextBubbleController *)0x0) {
        TextBubbleController::TextBubbleController_UpdatePosition3D
                  (x,bubbleId,*pVVar7,*pVVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Update>m__2(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__Update_m__2
               (IFirstTimeElementActivator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeActivatableLogicPointer() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__ctor
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).bubbleId = -1;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3fa66666,0,0);
  (this->fields).bubbleWorldSpaceOffset.x = (float)(undefined4)uStack_2;
  (this->fields).bubbleWorldSpaceOffset.y = (float)uStack_2._4_4_;
  (this->fields).bubbleWorldSpaceOffset.z = fStack_1;
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer_get_CanShow
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).hasPlacedObject != 0;
    }
  }
  return 0;
}

