
/* Void SetControl(KogamaControls) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_SetControl
               (FirstTimeSystemPopupMovement *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).controlImages;
      if (pLVar1 == (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) goto code_?;
      pFVar3 = mscorlib.dll::System::Collections::Generic::
               List`1[FirstTimeSystemPopupMovement+ControlImage]::
               List_1_FirstTimeSystemPopupMovement_ControlImage__get_Item
                         (&FStack_4,pLVar1,(int32_t)index,
                          MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Item_int_
                         );
      uStack_5._0_4_ = pFVar3->key;
      uStack_5._4_4_ = (int)pFVar3->control;
      if (control == (undefined4)uStack_5) break;
      index = index + -1;
    }
    pLVar1 = (this->fields).controlImages;
    if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
      FStack_4.key =
           (int32_t)
           MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Item_int_
      ;
      puVar6 = (undefined8 *)func_?(&FStack_4,pLVar1,index);
      uVar7 = *puVar6;
      uStack_5._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      iVar8 = uStack_5._4_4_;
      bVar9 = uStack_5._4_4_ != 0;
      uStack_5 = uVar7;
      if (bVar9) {
        func_?(0x17,iVar8,(this->fields).deactivated.r,(this->fields).deactivated.g,
                        (this->fields).deactivated.b,(this->fields).deactivated.a);
        pLVar1 = (this->fields).controlImages;
        if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
          puVar6 = (undefined8 *)
                   func_?(&FStack_4,pLVar1,index,
                                   MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Item_int_
                                  );
          uStack_5 = *puVar6;
          if (*(GameObject **)(puVar6 + 1) != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)(puVar6 + 1),1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).controlImages;
            if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              List`1[FirstTimeSystemPopupMovement+ControlImage]::
              List_1_FirstTimeSystemPopupMovement_ControlImage__RemoveAt
                        (pLVar1,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__RemoveAt_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_Update
               (FirstTimeSystemPopupMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_EditMoveForward,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveForward,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_EditMoveLeft,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveLeft,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_EditMoveRight,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveRight,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_EditMoveBackwards,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveBackwards,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controlImages;
  if (this_00 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      fVar3 = (this->fields).currentFade;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar4 = fVar4 + fVar3;
      this_01 = (this->fields).group;
      (this->fields).currentFade = fVar4;
      if (this_01 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,_UNK_? - fVar4 / (this->fields).fadeDuration,(MethodInfo *)0x0);
      if ((this->fields).fadeDuration <= (this->fields).currentFade) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__FirstTimeSystemPopupMovement->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__FirstTimeSystemPopupMovement___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__FirstTimeSystemPopupMovement->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__FirstTimeSystemPopupMovement->static_fields->__f__am_cache0;
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
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement__Update_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Boolean get_IsFinished() */

bool Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_get_IsFinished
               (FirstTimeSystemPopupMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controlImages;
  if (this_00 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                       );
    return pOVar1 == (Object *)0x0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

