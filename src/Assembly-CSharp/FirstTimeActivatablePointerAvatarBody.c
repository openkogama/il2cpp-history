
/* Void Clear() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Clear
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatablePointerAvatarBody___Clear_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__FirstTimeActivatablePointerAvatarBody___Clear_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnDestroy
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if ((this->fields).bubbleId != -1) {
    FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
  }
  (this->fields).bodyController = (AvatarEditModeBodyController *)0x0;
  func_?(&(this->fields).bodyController,0);
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnDisable
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).showing = 0;
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShow
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarEditModeBodyController_MethodInfo__UnityEngine__Component__GetComponentInParent<AvatarEditModeBodyController>__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerAvatarBody___OnShow_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  (this->fields).showing = 1;
  pAVar1 = (AvatarEditModeBodyController *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                     ((Component *)this,
                      AvatarEditModeBodyController_MethodInfo__UnityEngine__Component__GetComponentInParent<AvatarEditModeBodyController>__
                     );
  (this->fields).bodyController = pAVar1;
  func_?(&(this->fields).bodyController,pAVar1);
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
             MethodInfo__FirstTimeActivatablePointerAvatarBody___OnShow_b__13_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_OnShown
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_OnShown_done);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnShown_done,(MethodInfo *)0x0);
  (this->fields).showing = 0;
  FirstTimeActivatablePointerAvatarBody_Clear(this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody_Update
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_TPose);
    cRam_? = '\x01';
  }
  if ((this->fields).showing == 0) {
    return;
  }
  pAVar1 = (this->fields).bodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields).bodies;
    if ((this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,(pAVar1->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       RVar2 != (RegexCharClass_SingleRange)0x0)) {
      x = *(Object_1 **)((int)RVar2 + 0x88);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__FirstTimeActivatablePointerAvatarBody___Update_b__12_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                );
      pAVar1 = (this->fields).bodyController;
      if (((pAVar1 != (AvatarEditModeBodyController *)0x0) &&
          (this_02 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                               (pAVar1,(MethodInfo *)0x0), this_02 != (MVBody *)0x0)) &&
         (this_03 = MVBody::MVBody_get_Animation(this_02,(MethodInfo *)0x0),
         this_03 != (BoneAnimation *)0x0)) {
        bVar3 = BoneAnimation::BoneAnimation_IsPlaying
                          (this_03,StringLiteral_TPose,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        routine = (IEnumerator *)&UNK_?;
        this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_04,(Object *)this,
                   MethodInfo__FirstTimeActivatablePointerAvatarBody__OnShown__,(MethodInfo *)0x0);
        WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)this_04,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (this_00 != (MonoBehaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    (this_00,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar4 = func_?(&stack0xffffffe4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Clear>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Clear_b__16_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

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


/* Void <OnShow>b__13_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__OnShow_b__13_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).bodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields).bodies;
    if ((this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(pAVar1->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       RVar2 != (RegexCharClass_SingleRange)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(int *)RVar2 + 0x188))
                         (&uStack_4,RVar2,*(undefined4 *)(*(int *)RVar2 + 0x18c));
      uStack_4._0_4_ = (this->fields).bubbleWorldSpaceOffset.x;
      uStack_4._4_4_ = (this->fields).bubbleWorldSpaceOffset.y;
      fStack_5 = (float)*puVar3;
      fStack_6 = (this->fields).bubbleWorldSpaceOffset.z;
      fStack_5 = fStack_5 + (float)(undefined4)uStack_4;
      fStack_7 = (float)((ulonglong)*puVar3 >> 0x20);
      fStack_7 = (float)uStack_4._4_4_ + fStack_7;
      fVar8 = fStack_6 + *(float *)(puVar3 + 1);
      lifeTime = (this->fields).bubbleLifetimeWhileShown;
      content = (this->fields).bubbleContent;
      parentTransform =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
      pVVar9 = &(this->fields).offset;
      uStack_4 = CONCAT44(pVVar9->x,(undefined4)uStack_4);
      fStack_6 = (this->fields).offset.y;
      if (x != (TextBubbleController *)0x0) {
        worldPosition.y = fStack_7;
        worldPosition.x = fStack_5;
        worldPosition.z = fVar8;
        iVar10 = TextBubbleController::TextBubbleController_ShowBubble3D_1
                          (x,worldPosition,lifeTime,content,parentTransform,*pVVar9,
                           (MethodInfo *)0x0);
        (this->fields).bubbleId = iVar10;
        if (((this->fields).skipAllowed == 0) || ((this->fields).hasButtonBeenAdded != 0)) {
          return;
        }
        original = (this->fields).skipElement;
        (this->fields).hasButtonBeenAdded = 1;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                           );
        if (pOVar11 != (Object *)0x0) {
          this_01 = (UnityEvent *)pOVar11[0x16].monitor;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,(this->klass->vtable).get_CanShow_1.methodPtr,
                     (MethodInfo *)0x0);
          if (this_01 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_01,(UnityAction *)this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <Update>b__12_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__Update_b__12_0
               (FirstTimeActivatablePointerAvatarBody *this,TextBubbleController *x,BaseEventData *y
               ,MethodInfo *method)

{
  pAVar1 = (this->fields).bodyController;
  bubbleId = (this->fields).bubbleId;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields).bodies;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(pAVar1->fields).currentBodyIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*(int *)RVar2 + 0x188))
                           (&fStack_4,RVar2,*(undefined4 *)(*(int *)RVar2 + 0x18c));
        uVar5 = (this->fields).bubbleWorldSpaceOffset.x;
        uVar6 = (this->fields).bubbleWorldSpaceOffset.y;
        uStack_7._4_4_ = (float)((ulonglong)*puVar3 >> 0x20);
        uStack_7._0_4_ = (float)*puVar3;
        pVVar8 = &(this->fields).offset;
        _fStack_10 = CONCAT44(pVVar8->x,uVar5);
        fStack_9 = (this->fields).offset.y;
        if (x != (TextBubbleController *)0x0) {
          worldPosition.z = (this->fields).bubbleWorldSpaceOffset.z + *(float *)(puVar3 + 1);
          worldPosition.x = (float)uVar5 + (float)uStack_7;
          worldPosition.y = uStack_7._4_4_ + (float)uVar6;
          TextBubbleController::TextBubbleController_UpdatePosition3D
                    (x,bubbleId,worldPosition,*pVVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* FirstTimeActivatablePointerAvatarBody() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerAvatarBody::
     FirstTimeActivatablePointerAvatarBody__ctor
               (FirstTimeActivatablePointerAvatarBody *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).bubbleWorldSpaceOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).bubbleWorldSpaceOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).bubbleLifetimeWhileShown = 3.4028235e+38;
  (this->fields).bubbleWorldSpaceOffset.z = 0.0;
  (this->fields).skipAllowed = 1;
  (this->fields).bubbleId = -1;
  FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
            ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
  return;
}

