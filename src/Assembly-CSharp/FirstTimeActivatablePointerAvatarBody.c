
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Clear
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

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
             MethodInfo__FirstTimeActivatablePointerAvatarBody___Clear_m__2_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnDestroy
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
  }
  (this->fields).bodyController = (AvatarEditModeBodyController *)0x0;
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShow
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInParent_6
                     ((Component_1 *)this,
                      AvatarEditModeBodyController_MethodInfo__UnityEngine__Component__GetComponentInParent<AvatarEditModeBodyController>__
                     );
  (this->fields).bodyController = (AvatarEditModeBodyController *)pTVar1;
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
             MethodInfo__FirstTimeActivatablePointerAvatarBody___OnShow_m__1_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShown
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnShown_done,(MethodInfo *)0x0);
  (this->fields).showing = 0;
  FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
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


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Update
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).showing != 0) {
    pAVar1 = (this->fields).bodyController;
    if ((pAVar1 == (AvatarEditModeBodyController *)0x0) ||
       (pMVar2 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                           (pAVar1,(MethodInfo *)0x0), pMVar2 == (MVBody *)0x0)) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    x = DayNightCycle::DayNightCycle_get_CurrentMoonParam((DayNightCycle *)pMVar2,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__FirstTimeActivatablePointerAvatarBody___Update_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      pAVar1 = (this->fields).bodyController;
      if (((pAVar1 == (AvatarEditModeBodyController *)0x0) ||
          (pMVar2 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                              (pAVar1,(MethodInfo *)0x0), pMVar2 == (MVBody *)0x0)) ||
         (this_01 = MVBody::MVBody_get_Animation(pMVar2,(MethodInfo *)0x0),
         this_01 == (BoneAnimation *)0x0)) goto code_?;
      bVar4 = BoneAnimation::BoneAnimation_IsPlaying(this_01,StringLiteral_TPose,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__FirstTimeActivatablePointerAvatarBody__OnShown__,(MethodInfo *)0x0);
        WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)pUVar5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (this_00 == (MonoBehaviour *)0x0) {
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  (this_00,in_stack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


/* Void <Clear>m__2(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Clear_m__2
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

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


/* Void <OnShow>m__1(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__OnShow_m__1
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyController;
  if ((this_00 != (AvatarEditModeBodyController *)0x0) &&
     (pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                         (this_00,(MethodInfo *)0x0), pMVar1 != (MVBody *)0x0)) {
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                       (auStack_3,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
    uStack_4._0_4_ = (this->fields).bubbleWorldSpaceOffset.x;
    uStack_4._4_4_ = (this->fields).bubbleWorldSpaceOffset.y;
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
    b.x = (float)(undefined4)uStack_4;
    b.y = (float)uStack_4._4_4_;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)auStack_6,a,b,(MethodInfo *)0x0);
    content = (this->fields).bubbleContent;
    uStack_4._0_4_ = pVVar8->x;
    uStack_4._4_4_ = pVVar8->y;
    fVar7 = pVVar8->z;
    fVar5 = (this->fields).bubbleLifetimeWhileShown;
    parentTransform =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                   ((Component_1 *)this,(MethodInfo *)0x0);
    pVVar9 = &(this->fields).offset;
    auStack_6._4_8_ = *pVVar9;
    if (x != (TextBubbleController *)0x0) {
      worldPosition.z = fVar7;
      worldPosition.x = (float)(undefined4)uStack_4;
      worldPosition.y = (float)uStack_4._4_4_;
      iVar10 = TextBubbleController::TextBubbleController_ShowBubble3D_1
                        (x,worldPosition,fVar5,content,parentTransform,*pVVar9,(MethodInfo *)0x0);
      (this->fields).bubbleId = iVar10;
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
                  (this_03,(Object *)this,MethodInfo__FirstTimeActivatableElementBase__SkipEvent__,
                   (MethodInfo *)0x0);
        if (this_02 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Update>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Update_m__0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyController;
  bubbleId = (this->fields).bubbleId;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVBody *)0x0) {
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


/* FirstTimeActivatablePointerAvatarBody() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__ctor
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3fa66666,0,0);
  (this->fields).bubbleWorldSpaceOffset.x = (float)(undefined4)uStack_2;
  (this->fields).bubbleWorldSpaceOffset.y = (float)uStack_2._4_4_;
  (this->fields).bubbleWorldSpaceOffset.z = fStack_1;
  (this->fields).skipAllowed = 1;
  (this->fields).bubbleId = -1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

