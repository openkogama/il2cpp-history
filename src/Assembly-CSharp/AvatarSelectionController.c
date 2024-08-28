
/* Void AvatarSlotClicked(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_AvatarSlotClicked
               (AvatarSelectionController *this,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    func_?(&
                    MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (slotIndex == (this->fields).currSelectedSlot) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarSelectionController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 == (AvatarSelectionController *)0x0) goto code_?;
  if ((pAVar1->fields).currSelectedSlot != -1) {
    pDVar2 = (pAVar1->fields).avatarSlots;
    if ((((pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                              (pAVar1->fields).currSelectedSlot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                             ), pOVar3 == (Object *)0x0)) ||
        ((Component *)pOVar3[2].monitor == (Component *)0x0)) ||
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0),
       pGVar4 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if (((pAVar1 == (AvatarSelectionController *)0x0) ||
        (pDVar2 = (pAVar1->fields).avatarSlots,
        pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0)) ||
       ((pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,slotIndex,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                            ), pOVar3 == (Object *)0x0 ||
        (((Component *)pOVar3[2].monitor == (Component *)0x0 ||
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0),
         pGVar4 == (GameObject *)0x0)))))) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    (pAVar1->fields).currSelectedSlot = slotIndex;
    pAVar5 = (this->fields).avatarBodyController;
    if (pAVar5 != (AvatarEditModeBodyController *)0x0) {
      AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
                (pAVar5,slotIndex,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pAVar5 = (this->fields).avatarBodyController;
      if (((pAVar5 != (AvatarEditModeBodyController *)0x0) &&
          (pMVar6 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                              (pAVar5,(MethodInfo *)0x0), pMVar6 != (MVBody *)0x0)) &&
         (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        key = (MethodInfo **)&UNK_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                  (this_00,(pMVar6->fields)._._._._.id,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          key = &
                MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
          ;
          func_?();
          func_?(&TypeInfo__AvatarSelectionController____c);
          cRam_? = '\x01';
        }
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                   MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                  );
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarSelectionController____c);
        }
        callbackFunction_00 = TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
          if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarSelectionController____c);
          }
          object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = callbackFunction_00;
          func_?(&TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1,
                          callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                  );
        pDVar2 = (this->fields).avatarSlots;
        if ((pDVar2 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) &&
           (this_01 = (Component *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,(int32_t)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                                ), this_01 != (Component *)0x0)) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar4,(MethodInfo *)0x0);
          pDVar2 = (this->fields).avatarSlots;
          if (pDVar2 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,(int32_t)key,(Object *)0x0
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            pAVar5 = (this->fields).avatarBodyController;
            this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
                      func_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
            Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                      (this_02,(Object *)this,
                       MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                       ,(MethodInfo *)0x0);
            if (pAVar5 != (AvatarEditModeBodyController *)0x0) {
              AvatarEditModeBodyController::AvatarEditModeBodyController_CaptureScreenshotForBody
                        (pAVar5,(int32_t)key,(Action_2_Int32_UnityEngine_Texture2D_ *)this_02,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Destroy
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarSelectionController);
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
  func_?(TypeInfo__AvatarSelectionController->static_fields,0);
  return;
}


/* Void Initialize(AvatarEditModeBodyController, EditorStateMachine) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Initialize
               (AvatarSelectionController *this,AvatarEditModeBodyController *bodyController,
               EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    func_?(&
                    MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
                   );
    func_?(&TypeInfo__AvatarSelectionController);
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = this;
  func_?(TypeInfo__AvatarSelectionController->static_fields,this);
  ppAVar1 = &(this->fields).avatarBodyController;
  *ppAVar1 = bodyController;
  func_?(ppAVar1,bodyController);
  if (*ppAVar1 != (AvatarEditModeBodyController *)0x0) {
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetPublishAvatarGO
              (*ppAVar1,(this->fields).publishAvatarGO,(MethodInfo *)0x0);
    this_00 = *ppAVar1;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
               ,(MethodInfo *)0x0);
    if (this_00 != (AvatarEditModeBodyController *)0x0) {
      AvatarEditModeBodyController::AvatarEditModeBodyController_CaptureScreenshotsForAllAvatars
                (this_00,(Action_2_Int32_UnityEngine_Texture2D_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPicUpdateForPrevAvatar(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPicUpdateForPrevAvatar
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                   );
    func_?(&
                    AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).avatarSelectionSlotPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_02 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                      );
  if (this_02 != (Component *)0x0) {
    this_00 = (RawImage *)this_02[1].monitor;
    this_02[2].klass = (Component__Class *)index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_02,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar1,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_02,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar1,index,(MethodInfo *)0x0);
          this_01 = (this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,index,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPictureTakenCallback(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPictureTakenCallback
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                   );
    func_?(&
                    AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).avatarSelectionSlotPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (Component *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                     );
  if (pCVar1 != (Component *)0x0) {
    this_00 = (RawImage *)pCVar1[1].monitor;
    pCVar1[2].klass = (Component__Class *)index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (pCVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (pCVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar2,index,(MethodInfo *)0x0);
          this_01 = (this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,index,(Object *)pCVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pAVar3 = TypeInfo__AvatarSelectionController->static_fields->instance;
            if (pAVar3 != (AvatarSelectionController *)0x0) {
              if (index != (pAVar3->fields).currSelectedSlot) {
                return;
              }
              pCVar1 = pCVar1[1].fields._.m_CachedPtr;
              if ((pCVar1 != (Component *)0x0) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(pCVar1,(MethodInfo *)0x0),
                 this_02 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OpenAvatarShop() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_OpenAvatarShop
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarSelectionController____c___OpenAvatarShop_b__20_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarSelectionController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarSelectionController____c);
  }
  callbackFunction = TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
    if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarSelectionController____c___OpenAvatarShop_b__20_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0 = callbackFunction;
    func_?(&TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
            );
  return;
}


/* Void ResetCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_ResetCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&
                      MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this_00->fields).resetAvatarHandler;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar1;
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar1 = value[1].klass;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this_00->fields).bodies;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,(this_00->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__AvatarEditModeBodyController__ExecuteReset__,(MethodInfo *)0x0);
        if (pOVar1 != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          (pOVar1->_0).interopData = (Il2CppInteropData *)this_03;
          func_?();
          (pOVar1->_0).klass = (Il2CppClass *)RVar3;
          func_?();
          pFVar4 = (pOVar1->_0).fields;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pFVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pGVar2 = (GameObject *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                      (pGVar2,(MethodInfo *)0x0);
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            pFVar4 = (FieldInfo *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            (pOVar1->_0).fields = pFVar4;
            func_?();
          }
          if (RVar3 != (RegexCharClass_SingleRange)0x0) {
            avatarWoID = *(int32_t *)((int)RVar3 + 8);
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            this_04 = (EventHandler_1_Object_ *)func_?();
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (this_04,(Object *)pOVar1,
                       MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar6 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                        (pMVar6,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_04,
                         (MethodInfo *)0x0);
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 != (MVNetworkGame *)0x0) &&
                 (this_02 = (pMVar6->fields).operationRequests,
                 this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetResetAvatar
                          (this_02,avatarWoID,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SellCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SellCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarSelectionController____c___SellCurrentAvatar_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarSelectionController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarSelectionController____c);
  }
  callbackFunction = TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarSelectionController____c___SellCurrentAvatar_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0 = callbackFunction;
    func_?(&TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void SetStateToRoam() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetStateToRoam
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarSelectionController____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction_00 = TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1;
  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)object,
               MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = callbackFunction_00;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetToNextAnimation
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar1 = (this_00->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      iVar2 = (this_00->fields).currentAnimationIndex;
      index = 0;
      if (iVar2 < (pLVar1->fields)._size + -1) {
        index = iVar2 + 1;
      }
      (this_00->fields).currentAnimationIndex = index;
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this_00->fields).animations;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        animation = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                              );
        AvatarEditModeBodyController::AvatarEditModeBodyController_Set
                  (this_00,(String *)animation,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TakeScreenshotForProfile() */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_TakeScreenshotForProfile
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__AvatarEditModeBodyController____c);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 = callbackFunction;
      func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <SetStateToRoam>b__15_0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController__SetStateToRoam_b__15_0
               (AvatarSelectionController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
            iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
            (*(code *)(&(x->klass->vtable).SetBodyGroup)[iVar5].method)
                      (x,pMVar1,(&(x->klass->vtable).SelectEditorStateMachineToBodyGroup)[iVar5].
                                methodPtr);
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup,0);
      (*(code *)*puVar6)(x,pMVar1,puVar6[1]);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AvatarSelectionController() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__ctor
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>);
    cRam_? = '\x01';
  }
  (this->fields).currSelectedSlot = -1;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
            );
  ppDVar1 = &(this->fields).avatarSlots;
  *ppDVar1 = (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)this_00;
  func_?(ppDVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_CurrentlySelectedSlotIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionController::
        AvatarSelectionController_get_CurrentlySelectedSlotIndex(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    return (pAVar1->fields).currSelectedSlot;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void set_CurrentlySelectedSlotIndex(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_set_CurrentlySelectedSlotIndex(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarSelectionController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 == (AvatarSelectionController *)0x0) goto code_?;
  if ((pAVar1->fields).currSelectedSlot != -1) {
    pDVar2 = (pAVar1->fields).avatarSlots;
    if (pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                        (pAVar1->fields).currSelectedSlot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || ((Component *)pOVar3[2].monitor == (Component *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if ((pAVar1 == (AvatarSelectionController *)0x0) ||
       (pDVar2 = (pAVar1->fields).avatarSlots,
       pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0)) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || ((Component *)pOVar3[2].monitor == (Component *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    (pAVar1->fields).currSelectedSlot = value;
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

