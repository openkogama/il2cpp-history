
/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableGotItPointer::FirstTimeActivatableGotItPointer_OnShow
               (FirstTimeActivatableGotItPointer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    unaff_EDI = (ExecuteEvents_EventFunction_1_System_Object_ *)
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (this_01,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__UI__LayoutRebuilder);
    }
    layoutRoot = (ExecuteEvents_EventFunction_1_System_Object_ *)0x0;
    if (unaff_EDI != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      if (unaff_EDI->klass ==
          (ExecuteEvents_EventFunction_1_System_Object___Class *)
          TypeInfo__UnityEngine__RectTransform) {
        layoutRoot = unaff_EDI;
      }
      pRVar1 = TypeInfo__UnityEngine__RectTransform;
      if (layoutRoot == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) goto code_?;
    }
    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
    LayoutRebuilder_ForceRebuildLayoutImmediate((RectTransform *)layoutRoot,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      MethodInfo__FirstTimeActivatableGotItPointer___ShowGotItBubble_b__1_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                     );
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    if (unaff_EDI != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)unaff_EDI,(Object *)this,
                 MethodInfo__FirstTimeActivatableGotItPointer___ShowGotItBubble_b__1_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,unaff_EDI,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      pBVar2 = (this->fields)._.button;
      if (pBVar2 != (Button *)0x0) {
        this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick;
        unaff_EDI = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction);
        if (unaff_EDI != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    ((NavMesh_OnNavMeshPreUpdate *)unaff_EDI,(Object *)this,
                     (this->klass->vtable).OnShown.method,(MethodInfo *)0x0);
          if (this_00 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_00,(UnityAction *)unaff_EDI,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pRVar1 = extraout_ECX;
code_?:
  func_?(unaff_EDI,pRVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowGotItBubble() */

void Assembly-CSharp.dll::FirstTimeActivatableGotItPointer::
     FirstTimeActivatableGotItPointer_ShowGotItBubble
               (FirstTimeActivatableGotItPointer *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatableGotItPointer___ShowGotItBubble_b__1_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__FirstTimeActivatableGotItPointer___ShowGotItBubble_b__1_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowGotItBubble>b__1_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableGotItPointer::
     FirstTimeActivatableGotItPointer__ShowGotItBubble_b__1_0
               (FirstTimeActivatableGotItPointer *this,TextBubbleController *x,BaseEventData *y,
               MethodInfo *method)

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
  pTVar1 = (Transform *)(this->fields)._.pointToTransform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (Transform *)(this->fields)._.pointToTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      fVar5 = (float)uVar3 + (this->fields)._.pointerBodyDirectionOffset.x;
      fVar6 = (float)uVar4 + (this->fields)._.pointerBodyDirectionOffset.y;
      lifeTime = (this->fields)._.bubbleLifetimeWhileShown;
      content = (this->fields)._.bubbleContent;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (x != (TextBubbleController *)0x0) {
        anchoredPosition.y = 0.0;
        anchoredPosition.x = (float)pTVar1;
        targetCenterPoint.y = fVar6 + fVar6;
        targetCenterPoint.x = fVar5 + fVar5;
        iVar7 = TextBubbleController::TextBubbleController_ShowBubble2D
                          (x,anchoredPosition,targetCenterPoint,lifeTime,content,pTVar1,
                           (MethodInfo *)0x0);
        (this->fields)._.bubbleId = iVar7;
        if ((this->fields)._.skipAllowed == 0) {
          return;
        }
        original = (this->fields)._.skipElement;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = (Component *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                            );
        if ((this_01 != (Component *)0x0) &&
           (this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(),
           this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0)) {
          this_00 = (this->klass->vtable).OnShown.method;
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor(this_02,(Object *)this,this_00,(MethodInfo *)0x0);
          if (this_00 != (MethodInfo *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      ((UnityEvent *)this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
            iVar7 = (this->fields)._.bubbleId;
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_01,(MethodInfo *)0x0);
            pTVar1 = (Transform *)0x0;
            if (pTVar8 == (Transform *)0x0) {
code_?:
              TextBubbleController::TextBubbleController_AddElement
                        ((TextBubbleController *)0x0,iVar7,(RectTransform *)pTVar1,(MethodInfo *)0x0
                        );
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


/* FirstTimeActivatableGotItPointer() */

void Assembly-CSharp.dll::FirstTimeActivatableGotItPointer::FirstTimeActivatableGotItPointer__ctor
               (FirstTimeActivatableGotItPointer *this,MethodInfo *method)

{
  (this->fields)._.bubbleId = -1;
  (this->fields)._.bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields)._.skipAllowed = 1;
  (this->fields)._._.onShowSound = 3;
  (this->fields)._._.prerequisiteEvent = -1;
  (this->fields)._._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

