
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_Clear
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__);
    func_?(&
                    MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_b__15_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 == (EnterPlayModeButton *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = (Action *)0x0;
code_?:
      this_00 = &(pEVar1->fields).enteringPlayMode;
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
                 MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_b__15_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      return;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 != (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_CreateBubble
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___CreateBubble_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___CreateBubble_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnActivate() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnActivate
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 == (EnterPlayModeButton *)0x0) {
    uVar2 = func_?();
  }
  else {
    pAVar3 = (pEVar1->fields).enteringPlayMode;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
    if (pAVar3 == (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = (Action *)0x0;
      ppAStack4 = &(pEVar1->fields).enteringPlayMode;
      pAStack5 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar3;
    }
    if (pAVar6 != (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = pAVar6;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack5 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack5 = pAVar3;
      }
      if (pAStack5 != (Action *)0x0) {
        ppAStack4 = &(pEVar1->fields).enteringPlayMode;
        func_?();
        return;
      }
    }
  }
  _ppAStack0000000c = uVar2;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnDestroy
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__);
    func_?(&
                    MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_b__15_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 == (EnterPlayModeButton *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pEVar1->fields).enteringPlayMode;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = (Action *)0x0;
code_?:
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode___Clear_b__15_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
                ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
      this_01 = (EventHandler_1_Object_ *)func_?();
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0)
      ;
      FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
                ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)this_01,(MethodInfo *)0x0);
      return;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
    (pEVar1->fields).enteringPlayMode = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnEnable
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if ((this->fields)._.waitingForDelay != 0) {
    routine = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_ShowDelay
                        ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  if ((this->fields).shouldBeDelayedDestroyed != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode_OnShown
               (FirstTimeActivatableButtonPointerEnterEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).button;
  if (pEVar1 == (EnterPlayModeButton *)0x0) {
    uVar2 = func_?();
  }
  else {
    pAVar3 = (pEVar1->fields).enteringPlayMode;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableButtonPointerEnterEditMode__OnShown__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
    pAStack4 = (Action *)0x0;
    if (pAVar3 == (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = (Action *)0x0;
code_?:
      ppAStack5 = &(pEVar1->fields).enteringPlayMode;
      func_?();
      (this->fields).shouldBeDelayedDestroyed = 1;
      return;
    }
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAStack4 = pAVar3;
    }
    if (pAStack4 != (Action *)0x0) {
      (pEVar1->fields).enteringPlayMode = pAStack4;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack4 = pAVar3;
      }
      if (pAStack4 != (Action *)0x0) goto code_?;
    }
  }
  _ppAStack0000000c = uVar2;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Clear>b__15_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode__Clear_b__15_0
               (FirstTimeActivatableButtonPointerEnterEditMode *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    if (x == (TextBubbleController *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
              (x,(this->fields).bubbleId,(MethodInfo *)0x0);
  }
  return;
}


/* Void <CreateBubble>b__13_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableButtonPointerEnterEditMode::
     FirstTimeActivatableButtonPointerEnterEditMode__CreateBubble_b__13_0
               (FirstTimeActivatableButtonPointerEnterEditMode *this,TextBubbleController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (Transform *)(this->fields).pointToTransform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields).pointToTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      fVar5 = (float)uVar3 + (this->fields).pointerBodyDirectionOffset.x;
      fVar6 = (float)uVar4 + (this->fields).pointerBodyDirectionOffset.y;
      fVar6 = fVar6 + fVar6;
      lifeTime = (this->fields).bubbleLifetimeWhileShown;
      content = (this->fields).bubbleContent;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        anchoredPosition.y = 0.0;
        anchoredPosition.x = (float)pTVar1;
        targetCenterPoint.y = fVar6;
        targetCenterPoint.x = fVar5 + fVar5;
        iVar7 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,anchoredPosition,targetCenterPoint,lifeTime,content,pTVar1,
                           (MethodInfo *)0x0);
        (this->fields).bubbleId = iVar7;
        if ((this->fields).skipAllowed == 0) {
          return;
        }
        original = (this->fields).skipElement;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        if (this_01 != (Component *)0x0) {
          this_00 = this_01[0xf].klass;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,(this->klass->vtable).get_CanShow_1.methodPtr,
                     (MethodInfo *)this_02);
          if (this_00 != (Component__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      ((UnityEvent *)this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
            iVar7 = (this->fields).bubbleId;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_01,(MethodInfo *)0x0);
            pTVar1 = (Transform *)0x0;
            if (pTVar8 == (Transform *)0x0) {
code_?:
              TextBubbleController::TextBubbleController_AddFirstElement
                        ((TextBubbleController *)&UNK_?,iVar7,(RectTransform *)pTVar1,
                         (MethodInfo *)0x0);
              return;
            }
            if (pTVar8->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              pTVar1 = pTVar8;
            }
            if (pTVar1 != (Transform *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

