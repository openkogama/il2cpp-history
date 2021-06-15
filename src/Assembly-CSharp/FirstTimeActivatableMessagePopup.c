
/* Void FadeOut() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_FadeOut
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,
             MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_,
             MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    this_01 = (this_00->fields).fader;
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)this_02,targetGameObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFinished(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup_OnFinished
               (FirstTimeActivatableMessagePopup *this,GameObject *firstTimeEventMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableMessagePopup___OnFinished_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = firstTimeEventMessage;
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
               MethodInfo__FirstTimeActivatableMessagePopup___OnFinished_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_OnPop
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  firstTimeEvent = (this->fields)._._.firstTimeEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_OnShow
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).firstTimeEventMessagePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  (this->fields).firstTimeEventMessage = (FirstTimeEventMessage *)pXVar1;
  pSVar2 = TM::TM__((this->fields).messageText,(MethodInfo *)0x0);
  if ((pXVar1 != (XpBoostParticlePreviewer *)0x0) &&
     (pCVar3 = (pXVar1->fields).previewCam, pCVar3 != (Camera *)0x0)) {
    (*(code *)pCVar3->klass[3]._1.cctor_finished_or_no_cctor)(pCVar3,pSVar2);
    (this->fields).isShown = 1;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pFVar4 = (this->fields).firstTimeEventMessage;
    if ((pFVar4 != (FirstTimeEventMessage *)0x0) &&
       (pFVar5 = (pFVar4->fields).fader, pFVar5 != (FirstTimeFadeHandler *)0x0)) {
      this_00 = (pFVar5->fields).canvasGroup;
      (pFVar5->fields).fadingIn = 1;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pFVar5->fields).currentFadeInTime = 0.0;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PushToStack() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup_PushToStack
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_Update
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if ((this->fields).isDone == 0) {
    fVar1 = (this->fields).showedTime;
    pfVar2 = &(this->fields).stayTimeInSeconds;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (this->fields).firstTimeEventMessage;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_,
                 MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__)
      ;
      if (this_00 == (FirstTimeEventMessage *)0x0) {
code_?:
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (this_00->fields).fader;
      targetGameObject =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 == (FirstTimeFadeHandler *)0x0) goto code_?;
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_01,(Action_1_UnityEngine_GameObject_ *)this_02,targetGameObject,
                 (MethodInfo *)0x0);
      (this->fields).isDone = 1;
    }
    if ((this->fields).isShown != 0) {
      fVar1 = (this->fields).showedTime;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (this->fields).showedTime = fVar4 + fVar1;
    }
  }
  return;
}


/* Void <PushToStack>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup__PushToStack_m__0
               (FirstTimeActivatableMessagePopup *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UStack_1 = UIPushOption__Enum_None;
  index = 0;
  pLVar2 = (this->fields).pushOptions;
  do {
    if (pLVar2 == (List_1_UIPushOption_ *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    if ((int)pOVar4 <= index) {
      this_00 = (this->fields).firstTimeEventMessage;
      if (this_00 != (FirstTimeEventMessage *)0x0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,MethodInfo__FirstTimeActivatableMessagePopup__OnPop__,
                   (MethodInfo *)0x0);
        if (x != (IUIStack *)0x0) {
          func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar5,UStack_1,this_01,
                          0x20);
          return;
        }
      }
      goto code_?;
    }
    pLVar2 = (this->fields).pushOptions;
    if (pLVar2 == (List_1_UIPushOption_ *)0x0) goto code_?;
    UVar6 = mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__get_Item
                      (pLVar2,index,
                       MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    UStack_1 = UStack_1 | UVar6;
    index = index + 1;
    pLVar2 = (this->fields).pushOptions;
  } while( true );
}


/* FirstTimeActivatableMessagePopup() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup__ctor
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  (this->fields).pushOptions = (List_1_UIPushOption_ *)this_00;
  (this->fields).stayTimeInSeconds = 2.0;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

