
/* Void CreatePopup() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_CreatePopup
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_This_class_does_not_implement_sk,(MethodInfo *)0x0);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).popupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                     );
  (this->fields).createdPopup = (CanvasGroup *)pXVar1;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnDestroy
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).destroyCreatedPopup != 0) {
    this_00 = (this->fields).createdPopup;
    if (this_00 == (CanvasGroup *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  firstTimeEvent = (this->fields)._._.firstTimeEvent;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?();
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent(firstTimeEvent,(MethodInfo *)0x0);
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnPop
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(this,0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnShow
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  this_00 = this;
  if ((this->fields).isShown != 0) {
    return;
  }
  (this->fields).isShown = 1;
  FirstTimeActivatablePopupTimed_CreatePopup(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatablePopupTimed___PushToStack_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    (this_01->fields)._._._._.m_CachedPtr = (void *)0x0;
    pLVar1 = (this->fields).pushOptions;
    if (pLVar1 != (List_1_UIPushOption_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__)
      ;
      if ((int)pOVar2 < 1) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this_01,
                   MethodInfo__FirstTimeActivatablePopupTimed___PushToStack_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      pLVar1 = (this->fields).pushOptions;
      if (pLVar1 != (List_1_UIPushOption_ *)0x0) {
        pvVar3 = (void *)mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                         List_1_UIPushOption__get_Item
                                   (pLVar1,0,
                                    MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                                   );
        (this_01->fields)._._._._.m_CachedPtr = pvVar3;
        pLVar1 = (this->fields).pushOptions;
        this = (FirstTimeActivatablePopupTimed *)0x1;
        while (pLVar1 != (List_1_UIPushOption_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__
                             );
          if ((int)pOVar2 <= (int)this) goto code_?;
          pvVar3 = (this_01->fields)._._._._.m_CachedPtr;
          pLVar1 = (this_00->fields).pushOptions;
          if (pLVar1 == (List_1_UIPushOption_ *)0x0) break;
          UVar4 = mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__get_Item
                            (pLVar1,(int32_t)this,
                             MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                            );
          this = (FirstTimeActivatablePopupTimed *)((int)&this->klass + 1);
          (this_01->fields)._._._._.m_CachedPtr = (void *)(UVar4 | (uint)pvVar3);
          pLVar1 = (this_00->fields).pushOptions;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ParentPopupToGameObject() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::
     FirstTimeActivatablePopupTimed_ParentPopupToGameObject
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  this_00 = (this->fields).createdPopup;
  if (this_00 != (CanvasGroup *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      (this->fields).destroyCreatedPopup = 1;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushToStack() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_PushToStack
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatablePopupTimed___PushToStack_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    (this_00->fields)._._._._.m_CachedPtr = (void *)0x0;
    pLVar1 = (this->fields).pushOptions;
    if (pLVar1 != (List_1_UIPushOption_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__)
      ;
      if ((int)pOVar2 < 1) {
code_?:
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__FirstTimeActivatablePopupTimed___PushToStack_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
        return;
      }
      pLVar1 = (this->fields).pushOptions;
      if (pLVar1 != (List_1_UIPushOption_ *)0x0) {
        pvVar3 = (void *)mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                         List_1_UIPushOption__get_Item
                                   (pLVar1,0,
                                    MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                                   );
        (this_00->fields)._._._._.m_CachedPtr = pvVar3;
        index = 1;
        pLVar1 = (this->fields).pushOptions;
        while (pLVar1 != (List_1_UIPushOption_ *)0x0) {
          iVar4 = index;
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__
                             );
          if ((int)pOVar2 <= iVar4) goto code_?;
          pvVar3 = (this_00->fields)._._._._.m_CachedPtr;
          pLVar1 = (this->fields).pushOptions;
          if (pLVar1 == (List_1_UIPushOption_ *)0x0) break;
          UVar5 = mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                            );
          index = index + 1;
          (this_00->fields)._._._._.m_CachedPtr = (void *)(UVar5 | (uint)pvVar3);
          pLVar1 = (this->fields).pushOptions;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_Update
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isShown != 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if ((((0.0 < fVar1) || (0.0 < fVar2)) || ((this->fields).isFading != 0)) ||
       ((this->fields).inputRequired == 0)) {
      (this->fields).isUpdating = 1;
    }
    else if ((this->fields).isUpdating == 0) {
      return;
    }
    fVar1 = (this->fields).currentTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 + fVar1;
    fVar1 = (this->fields).visibleDuration;
    (this->fields).currentTime = fVar2;
    if (fVar1 <= fVar2) {
      if ((this->fields).destroyCreatedPopup == 0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__FirstTimeActivatablePopupTimed->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__FirstTimeActivatablePopupTimed___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__FirstTimeActivatablePopupTimed->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__FirstTimeActivatablePopupTimed->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
    }
    else {
      fVar3 = (this->fields).fadeTime;
      fVar1 = fVar1 - fVar3;
      if (fVar1 <= fVar2) {
        this_00 = (this->fields).createdPopup;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,_UNK_? - (fVar2 - fVar1) / fVar3,(MethodInfo *)0x0);
          (this->fields).isFading = 1;
          return;
        }
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::
     FirstTimeActivatablePopupTimed__Update_m__0(IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

