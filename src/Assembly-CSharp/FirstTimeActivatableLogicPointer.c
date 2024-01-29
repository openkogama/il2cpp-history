
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Clear
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableLogicPointer___Clear_b__19_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__FirstTimeActivatableLogicPointer___Clear_b__19_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
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
  func_?(&(this->fields).editorStateMachine,0);
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShow
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableLogicPointer___OnShow_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  this_00 = (this->fields).placedWo;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pOVar1 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    (this->fields).showing = pOVar1 != (Object *)0x0;
    if (pOVar1 != (Object *)0x0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__FirstTimeActivatableLogicPointer___OnShow_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_OnShown
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).showing = 0;
  FirstTimeActivatableLogicPointer_Clear(this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer_Start
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    DesktopEditModeController_MethodInfo__UnityEngine__Component__GetComponentInParent<DesktopEditModeController>__
                   );
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_Start
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                     ((Component *)this,
                      DesktopEditModeController_MethodInfo__UnityEngine__Component__GetComponentInParent<DesktopEditModeController>__
                     );
  if (pOVar1 != (Object *)0x0) {
    (this->fields).editorStateMachine = (EditorStateMachine *)pOVar1[0xe].monitor;
    func_?();
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableLogicPointer___Update_b__17_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__FirstTimeActivatableLogicPointer____c___Update_b__17_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableLogicPointer____c);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
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
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__FirstTimeActivatableLogicPointer____c->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            callbackFunction =
                 TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9__17_1;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)0x0
               ) {
              if ((TypeInfo__FirstTimeActivatableLogicPointer____c->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              object = TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IFirstTimeElementActivator_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__FirstTimeActivatableLogicPointer____c___Update_b__17_1_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->__9__17_1 =
                   callbackFunction;
              func_?(&TypeInfo__FirstTimeActivatableLogicPointer____c->static_fields->
                               __9__17_1);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
                      );
          }
        }
        return;
      }
      (this->fields).finishedESInsert = 1;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pEVar1 = (this->fields).editorStateMachine;
      if (((pEVar1 != (EditorStateMachine *)0x0) &&
          (pMVar4 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                              (pEVar1,(MethodInfo *)0x0), pMVar4 != (MVWorldObjectClient *)0x0)) &&
         (this_00 != (MVWorldObjectClientManager *)0x0)) {
        pWVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                           (this_00,(pMVar4->fields)._.id,(MethodInfo *)0x0);
        (this->fields).placedWo = pWVar5;
        func_?(&(this->fields).placedWo);
        return;
      }
    }
  }
  else {
    pWVar5 = (this->fields).placedWo;
    if (pWVar5 != (WorldObjectClientRef *)0x0) {
      pOVar6 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)pWVar5,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar6 != (Object *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
                   MethodInfo__FirstTimeActivatableLogicPointer___Update_b__17_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
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
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Clear>b__19_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__Clear_b__19_0
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (x != (TextBubbleController *)0x0) {
    TextBubbleController::TextBubbleController_ClearBubblesWithId
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnShow>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__OnShow_b__16_0
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeActivatableLogicPointer__OnShown__);
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  this_00 = (this->fields).placedWo;
  if ((this_00 != (WorldObjectClientRef *)0x0) &&
     (pOVar1 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)this_00,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         ), pOVar1 != (Object *)0x0)) {
    pOVar2 = pOVar1->klass;
    uVar3._0_2_ = pOVar2[1]._1.interfaces_count;
    uVar3._2_2_ = pOVar2[1]._1.interface_offsets_count;
    puVar4 = (undefined8 *)(**(code **)&pOVar2[1]._1.nested_type_count)(&uStack_5,pOVar1,uVar3);
    uStack_5._0_4_ = (this->fields).bubbleWorldSpaceOffset.x;
    uStack_5._4_4_ = (this->fields).bubbleWorldSpaceOffset.y;
    fStack_6 = (this->fields).bubbleWorldSpaceOffset.z;
    fVar7 = fStack_6 + *(float *)(puVar4 + 1);
    uVar8 = CONCAT44((float)uStack_5._4_4_ + (float)((ulonglong)*puVar4 >> 0x20),
                      (float)(undefined4)uStack_5 + (float)*puVar4);
    lifeTime = (this->fields).bubbleLifetimeWhileShown;
    content = (this->fields).bubbleContent;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pVVar10 = &(this->fields).offset;
    uStack_5 = CONCAT44(pVVar10->x,(undefined4)uStack_5);
    fStack_6 = (this->fields).offset.y;
    if (x != (TextBubbleController *)0x0) {
      worldPosition.z = fVar7;
      worldPosition.x = (float)(int)uVar8;
      worldPosition.y = (float)(int)((ulonglong)uVar8 >> 0x20);
      iVar11 = TextBubbleController::TextBubbleController_ShowBubble3D_1
                        (x,worldPosition,lifeTime,content,pTVar9,*pVVar10,(MethodInfo *)0x0);
      (this->fields).bubbleId = iVar11;
      if (((this->fields).skipAllowed == 0) || ((this->fields).hasButtonBeenAdded != 0)) {
        return;
      }
      original = (this->fields).skipElement;
      (this->fields).hasButtonBeenAdded = 1;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                          );
      if (this_02 != (Component *)0x0) {
        this_01 = this_02[0xf].klass;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,MethodInfo__FirstTimeActivatableLogicPointer__OnShown__,
                   (MethodInfo *)0x0);
        if (this_01 != (Component__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    ((UnityEvent *)this_01,(UnityAction *)this_03,(MethodInfo *)0x0);
          iVar11 = (this->fields).bubbleId;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_02,(MethodInfo *)0x0);
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
          pRVar13 = TypeInfo__UnityEngine__RectTransform;
          if (pTVar9 != (Transform *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pTVar12 = extraout_ECX;
  pRVar13 = extraout_EDX;
code_?:
  func_?(pTVar12,pRVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void <Update>b__17_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::
     FirstTimeActivatableLogicPointer__Update_b__17_0
               (FirstTimeActivatableLogicPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  this_00 = (this->fields).placedWo;
  bubbleId = (this->fields).bubbleId;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pOVar1 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar2 = pOVar1->klass;
      uVar3._0_2_ = pOVar2[1]._1.interfaces_count;
      uVar3._2_2_ = pOVar2[1]._1.interface_offsets_count;
      puVar4 = (undefined8 *)(**(code **)&pOVar2[1]._1.nested_type_count)(&fStack_5,pOVar1,uVar3);
      uVar6 = (this->fields).bubbleWorldSpaceOffset.x;
      uVar7 = (this->fields).bubbleWorldSpaceOffset.y;
      uStack_8._4_4_ = (float)((ulonglong)*puVar4 >> 0x20);
      uStack_8._0_4_ = (float)*puVar4;
      pVVar9 = &(this->fields).offset;
      _fStack_10 = CONCAT44(pVVar9->x,uVar6);
      fStack_10 = (this->fields).offset.y;
      if (x != (TextBubbleController *)0x0) {
        worldPosition.z = (this->fields).bubbleWorldSpaceOffset.z + *(float *)(puVar4 + 1);
        worldPosition.x = (float)uVar6 + (float)uStack_8;
        worldPosition.y = uStack_8._4_4_ + (float)uVar7;
        TextBubbleController::TextBubbleController_UpdatePosition3D
                  (x,bubbleId,worldPosition,*pVVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* FirstTimeActivatableLogicPointer() */

void Assembly-CSharp.dll::FirstTimeActivatableLogicPointer::FirstTimeActivatableLogicPointer__ctor
               (FirstTimeActivatableLogicPointer *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).bubbleWorldSpaceOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).bubbleWorldSpaceOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).bubbleId = -1;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields).bubbleWorldSpaceOffset.z = 0.0;
  (this->fields).skipAllowed = 1;
  FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
            ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
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
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).hasPlacedObject;
    }
  }
  return 0;
}

