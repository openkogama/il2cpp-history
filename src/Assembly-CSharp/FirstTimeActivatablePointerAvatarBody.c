
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
        WaitForFrames::WaitForFrames_WithCallback(1,(UnityAction *)this_04,(MethodInfo *)0x0);
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
  key = (this->fields).bubbleId;
  if (x != (TextBubbleController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pDVar1 = (x->fields).textBubbles;
    if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar1 = (x->fields).textBubbles;
      if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             ), pOVar3 != (Object *)0x0)) {
        pOVar3[1].klass = (Object__Class *)(x->fields).bubbleLifeTime;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  key = (this->fields).bubbleId;
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
      uVar5 = (this->fields).bubbleWorldSpaceOffset.x;
      uVar6 = (this->fields).bubbleWorldSpaceOffset.y;
      fVar7 = (float)uVar5 + (float)*puVar3;
      fVar8 = (float)uVar6 + (float)((ulonglong)*puVar3 >> 0x20);
      fVar9 = (this->fields).bubbleWorldSpaceOffset.z + *(float *)(puVar3 + 1);
      VStack_10.y = (this->fields).offset.x;
      VStack_10.z = (this->fields).offset.y;
      uVar11._4_4_ = fVar8;
      uVar11._0_4_ = fVar7;
      if ((x != (TextBubbleController *)0x0) &&
         (pCVar12 = (x->fields).mainCamera, pCVar12 != (Camera *)0x0)) {
        position.y = fVar8;
        position.x = fVar7;
        position.z = fVar9;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)&stack0xffffffe4,pCVar12,position,(MethodInfo *)0x0);
        if (pVVar13->z <= 0.0) {
          return;
        }
        uStack_4._0_4_ = pVVar13->x;
        uStack_4._4_4_ = pVVar13->y;
        offset.y = VStack_10.z;
        offset.x = VStack_10.y;
        screenSpacePos.z = pVVar13->z;
        screenSpacePos.x = (float)(undefined4)uStack_4;
        screenSpacePos.y = uStack_4._4_4_;
        pVVar13 = TextBubbleController::TextBubbleController_CalculateOffSet
                            (&VStack_10,x,offset,screenSpacePos,(MethodInfo *)0x0);
        uVar14 = pVVar13->y;
        fVar8 = (float)uVar14 + uStack_4._4_4_;
        pCVar12 = (x->fields).mainCamera;
        if (pCVar12 != (Camera *)0x0) {
          position_00.z = fVar9;
          position_00.x = (float)uVar11;
          position_00.y = SUB84(uVar11,4);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&stack0xffffffd8,pCVar12,position_00,(MethodInfo *)0x0);
          uStack_4._0_4_ = pVVar13->x;
          uStack_4._4_4_ = pVVar13->y;
          VStack_10.y = (float)(undefined4)uStack_4 * _UNK_?;
          VStack_10.z = uStack_4._4_4_ * _UNK_?;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          pDVar15 = (x->fields).textBubbles;
          if (((pDVar15 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
              (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                   ), pOVar16 != (Object *)0x0)) &&
             (pOVar16[2].klass != (Object__Class *)0x0)) {
            center.y = VStack_10.z;
            center.x = VStack_10.y;
            TextBubble::TextBubble_Initialize
                      ((TextBubble *)pOVar16[2].klass,center,key,(MethodInfo *)0x0);
            pDVar15 = (x->fields).textBubbles;
            if (pDVar15 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
              uStack_4 = CONCAT44(&UNK_?,(undefined4)uStack_4);
              pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                  );
              if ((pOVar16 != (Object *)0x0) && (pOVar16[2].klass != (Object__Class *)0x0)) {
                TextBubble::TextBubble_set_Position
                          ((TextBubble *)pOVar16[2].klass,(Vector2)((ulonglong)(uint)fVar8 << 0x20)
                           ,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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

