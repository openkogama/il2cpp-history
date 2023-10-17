
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
  key = (Object *)(this->fields).currSelectedSlot;
  AvatarSelectionController_set_CurrentlySelectedSlotIndex(slotIndex,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarBodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
              (pAVar1,slotIndex,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pAVar1 = (this->fields).avatarBodyController;
    if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pAVar1->fields).bodies;
      if (((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
          (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar2,(pAVar1->fields).currentBodyIndex,
                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_)
          , RVar3 != (RegexCharClass_SingleRange)0x0)) &&
         (this_03 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                  (this_03,*(int32_t *)((int)RVar3 + 8),(MethodInfo *)0x0);
        AvatarSelectionController_SetStateToRoam(this,(MethodInfo *)0x0);
        this_00 = (this->fields).avatarSlots;
        if ((this_00 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) &&
           (this_04 = (Component *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                 (Int32Enum__Enum)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                                ), this_04 != (Component *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_04,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_01,key,(Object *)0x0,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            pAVar1 = (this->fields).avatarBodyController;
            this_05 = (Action_2_Int32Enum_Object_ *)func_?();
            if ((this_05 != (Action_2_Int32Enum_Object_ *)0x0) &&
               (mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                          (this_05,(Object *)this,
                           MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                           ,(MethodInfo *)0x0), pAVar1 != (AvatarEditModeBodyController *)0x0)) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (pAVar1->fields).bodies;
              this_02 = (pAVar1->fields).pictureTaker;
              if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             0x0) &&
                 (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar2,(int32_t)key,
                                     MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                    ), this_02 != (AvatarPictureTakerUGUI *)0x0)) {
                AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                          (this_02,(MVWorldObjectClient *)RVar3,(int32_t)key,
                           (Action_2_Int32_UnityEngine_Texture2D_ *)this_05,0,(MethodInfo *)0x0);
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
  (this->fields).avatarBodyController = bodyController;
  func_?(&(this->fields).avatarBodyController,bodyController);
  pAVar1 = (this->fields).avatarBodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    pGVar2 = (this->fields).publishAvatarGO;
    (pAVar1->fields).publishAvatarBtn = pGVar2;
    func_?(&(pAVar1->fields).publishAvatarBtn,pGVar2);
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetPublishAvatarButtonActive
              (pAVar1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).avatarBodyController;
    this_00 = (Action_2_Int32Enum_Object_ *)
              func_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    if ((this_00 != (Action_2_Int32Enum_Object_ *)0x0) &&
       (mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
                   ,(MethodInfo *)0x0), pAVar1 != (AvatarEditModeBodyController *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
        cRam_? = '\x01';
      }
      (pAVar1->fields).Picture2DTakenCallback = (Action_2_Int32_UnityEngine_Texture2D_ *)this_00;
      func_?(&(pAVar1->fields).Picture2DTakenCallback,this_00);
      index = 0;
      pLVar3 = (pAVar1->fields).bodies;
      while (pLVar3 != (List_1_MVBody_ *)0x0) {
        if ((pLVar3->fields)._size <= index) {
          return;
        }
        AvatarEditModeBodyController::AvatarEditModeBodyController_GenerateIconForBody
                  (pAVar1,index,(MethodInfo *)0x0);
        index = index + 1;
        pLVar3 = (pAVar1->fields).bodies;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    this_00 = this_02[1].klass;
    this_02[1].fields._.m_CachedPtr = (void *)index;
    if (this_00 != (Component__Class *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                ((RawImage *)this_00,(Texture *)image,(MethodInfo *)0x0);
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
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_01,(Object *)index,(Object *)this_02,
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
  this_02 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                      );
  if (this_02 != (Component *)0x0) {
    this_00 = this_02[1].klass;
    this_02[1].fields._.m_CachedPtr = (void *)index;
    if (this_00 != (Component__Class *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                ((RawImage *)this_00,(Texture *)image,(MethodInfo *)0x0);
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
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_01,(Object *)index,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                      );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pAVar2 = TypeInfo__AvatarSelectionController->static_fields->instance;
            if (pAVar2 != (AvatarSelectionController *)0x0) {
              if (index != (pAVar2->fields).currSelectedSlot) {
                return;
              }
              if (((Component *)this_02[1].monitor != (Component *)0x0) &&
                 (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      ((Component *)this_02[1].monitor,(MethodInfo *)0x0),
                 this_03 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_03,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
  this_02 = (this->fields).avatarBodyController;
  if (this_02 != (AvatarEditModeBodyController *)0x0) {
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
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_retaddr);
      original = (this_02->fields).resetAvatarHandler;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar1 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                         );
      value[1].klass = pOVar1;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this_02,(MethodInfo *)0x0);
      pGVar2 = (GameObject *)&UNK_?;
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
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
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this_02->fields).bodies;
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(this_02->fields).currentBodyIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
          this_03 = (Object_1__Class **)func_?();
          if (((NavMesh_OnNavMeshPreUpdate *)this_03 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
             (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        ((NavMesh_OnNavMeshPreUpdate *)this_03,(Object *)this_02,
                         MethodInfo__AvatarEditModeBodyController__ExecuteReset__,(MethodInfo *)0x0)
             , pOVar1 != (Object__Class *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              this_03 = &TypeInfo__UnityEngine__Object;
              func_?();
              cRam_? = '\x01';
            }
            (pOVar1->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)this_03;
            func_?();
            (pOVar1->_0).interopData = (Il2CppInteropData *)RVar3;
            func_?();
            pIVar4 = (pOVar1->_0).klass;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pGVar2 = (GameObject *)func_?();
              if (pGVar2 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                        (pGVar2,(MethodInfo *)0x0);
              pIVar4 = (Il2CppClass *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0);
              (pOVar1->_0).klass = pIVar4;
              func_?();
            }
            if (RVar3 != (RegexCharClass_SingleRange)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              avatarWoID = &UNK_?;
              this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
              if ((this_04 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
                 (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            (this_04,(Object *)pOVar1,
                             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                             ,(MethodInfo *)0x0), pMVar6 != (MVNetworkGame *)0x0)) {
                MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                          (pMVar6,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_04,
                           (MethodInfo *)0x0);
                pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar6 != (MVNetworkGame *)0x0) &&
                   (this_01 = (pMVar6->fields).operationRequests,
                   this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetResetAvatar
                            (this_01,(int32_t)avatarWoID,(MethodInfo *)0x0);
                  return;
                }
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
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
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)object,
                 MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = callbackFunction_00;
      func_?(&TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1,
                      callbackFunction_00);
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
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetToNextAnimation
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar1 = (this_00->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      if ((this_00->fields).currentAnimationIndex < (pLVar1->fields)._size + -1) {
        index = (this_00->fields).currentAnimationIndex + 1;
      }
      else {
        index = 0;
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__AvatarEditModeBodyController____c);
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    callbackFunction = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__AvatarEditModeBodyController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AvatarEditModeBodyController____c);
      }
      object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 = callbackFunction;
      func_?(&TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0,
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
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  pAVar1 = (this->fields).avatarBodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields).bodies;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                (this_00,(pAVar1->fields).currentBodyIndex,
                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (x != (IAvatarSetBodyGroup *)0x0) {
        func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  this_00 = (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>
                           );
  if (this_00 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
              );
    (this->fields).avatarSlots = this_00;
    func_?(&(this->fields).avatarSlots,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    pDVar2 = (pAVar1->fields).avatarSlots;
    if (pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                        (pAVar1->fields).currSelectedSlot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || (pOVar3[2].klass == (Object__Class *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].klass,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if ((pAVar1 == (AvatarSelectionController *)0x0) ||
       (pDVar2 = (pAVar1->fields).avatarSlots,
       pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0)) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || (pOVar3[2].klass == (Object__Class *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].klass,(MethodInfo *)0x0);
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

