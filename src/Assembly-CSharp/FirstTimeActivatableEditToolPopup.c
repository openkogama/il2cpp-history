
/* Void OnCubeChanged(Int32, EditCubeChange) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnCubeChanged
               (FirstTimeActivatableEditToolPopup *this,int32_t cubeCount,
               EditCubeChange__Enum changeMade,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).cubeChangesToCheck;
  while (pLVar1 != (List_1_EditCubeChange_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Count__)
    ;
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).cubeChangesToCheck;
    if (pLVar1 == (List_1_EditCubeChange_ *)0x0) break;
    EVar3 = mscorlib.dll::System::Collections::Generic::List`1[EditCubeChange]::
            List_1_EditCubeChange__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_
                      );
    if (EVar3 == changeMade) {
      FirstTimeActivatableEditToolPopup_OnShown(this,(MethodInfo *)0x0);
      return;
    }
    index = index + 1;
    pLVar1 = (this->fields).cubeChangesToCheck;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPopupRemoved(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnPopupRemoved
               (FirstTimeActivatableEditToolPopup *this,GameObject *popupGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableEditToolPopup___OnPopupRemoved_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    (this_00->fields)._._._._.m_CachedPtr = popupGameObject;
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_OnShown_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_OnShown_,(args->klass->_0).element_class), iVar2 == 0)
       ) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_OnShown_;
    pOVar3 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent,&stack0xfffffff8);
    if ((pOVar3 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar3,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    if ((::StringLiteral___ != (String *)0x0) &&
       (iVar2 = func_?(::StringLiteral___,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)::StringLiteral___;
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if ((pOVar3 == (Object *)0x0) ||
       (iVar2 = func_?(pOVar3,(args->klass->_0).element_class), iVar2 != 0)) {
      if (3 < args->max_length) {
        args->vector[3] = pOVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__FirstTimeActivatableEditToolPopup___OnPopupRemoved_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
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
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (firstTimeEvent,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnShow
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableEditToolPopup___OnShow_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this_00->fields).state = (int32_t)this;
  if ((this->fields).showing == 0) {
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__FirstTimeActivatableEditToolPopup___OnShow_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._._._.m_CachedPtr != '\0') {
      (this->fields).wantsToShow = 1;
      return;
    }
    FirstTimeActivatableEditToolPopup_ShowPopup(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnShown
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CubeModelTool);
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_,
             MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
  pAVar3 = (Action_2_Int32_EditCubeChange_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)0x0;
  if (pAVar3 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
  pFVar4 = (this->fields).popup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  pFVar4 = (this->fields).popup;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeActivatableEditToolPopup__OnPopupRemoved_UnityEngine__GameObject_,
             MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
  if (pFVar4 != (FirstTimeEventPopup *)0x0) {
    this_00 = (pFVar4->fields).fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)pFVar4,(MethodInfo *)0x0);
    if (this_00 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_00,(Action_1_UnityEngine_GameObject_ *)pUVar2,targetGameObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_ShowPopup
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_onshow_,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CubeModelTool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CubeModelTool->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar3 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_,
               MethodInfo__System__Action<int,_EditCubeChange>__Action_System__Object__void__);
    pAVar5 = (Action_2_Int32_EditCubeChange_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    uVar6 = CONCAT44(TypeInfo__System__Action<int,_EditCubeChange>,pAVar5);
    pAVar3 = (Action_2_Int32_EditCubeChange_ *)0x0;
    if (pAVar5 != (Action_2_Int32_EditCubeChange_ *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action<int,_EditCubeChange>) {
        pAVar3 = pAVar5;
      }
      if (pAVar3 == (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar3;
    pXVar7 = (XpBoostParticlePreviewer *)(this->fields).popupPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar7,
                        FirstTimeEventPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopup>_FirstTimeEventPopup_
                       );
    (this->fields).popup = (FirstTimeEventPopup *)pXVar7;
    if (pXVar7 != (XpBoostParticlePreviewer *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
                ((FirstTimeEventPopup *)pXVar7,(this->fields).skipAllowed,(MethodInfo *)0x0);
      pFVar8 = (this->fields).popup;
      if ((pFVar8 != (FirstTimeEventPopup *)0x0) &&
         (pFVar9 = (pFVar8->fields).fader, pFVar9 != (FirstTimeFadeHandler *)0x0)) {
        this_00 = (pFVar9->fields).canvasGroup;
        (pFVar9->fields).fadingIn = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pFVar9->fields).currentFadeInTime = 0.0;
          (this->fields).showing = 1;
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__FirstTimeActivatableEditToolPopup___ShowPopup_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar1,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  uVar6 = func_?(0);
code_?:
  func_?(uVar6);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_Update
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).wantsToShow != 0) {
    method_00 = TypeInfo__FirstTimeActivatableEditToolPopup___Update_c__AnonStorey1;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 == (ScaleAnimationBase *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this_00->fields).state = (int32_t)this;
    *(undefined1 *)&(this_00->fields)._._._._.m_CachedPtr = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__FirstTimeActivatableEditToolPopup___Update_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)0x0,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&(this_00->fields)._._._._.m_CachedPtr == '\0') {
      FirstTimeActivatableEditToolPopup_ShowPopup(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <ShowPopup>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup__ShowPopup_m__0
               (FirstTimeActivatableEditToolPopup *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (FirstTimeEventPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FirstTimeActivatableEditToolPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::FirstTimeActivatableEditToolPopup__ctor
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_get_CanShow
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_canshow_;
  if (bVar1 == 0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
              (pGVar3,(MethodInfo *)0x0);
  }
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat((Object *)pSVar2,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar3,(MethodInfo *)0x0);
    return bVar1;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}

