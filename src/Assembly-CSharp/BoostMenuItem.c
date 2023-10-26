
/* Void ActivateActiveBoostIconEffect() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_ActivateActiveBoostIconEffect
               (BoostMenuItem *this,MethodInfo *method)

{
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).shouldHideWhenDone = 0;
    pNVar1 = (this->fields).boostActiveIconFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).activeIconScaleEffectStartTime = fVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void BoostChanged() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_BoostChanged
               (BoostMenuItem *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) && (pBVar2 = (this->fields).boost, pBVar2 != (Boost *)0x0)) {
    key = (Object *)(pBVar2->fields)._Type_k__BackingField;
    pBVar3 = (pMVar1->fields).boostController;
    if (pBVar3 != (BoostController *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pBVar3->fields).activeBoosts;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        boostUnlocked =
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Object,GUILoginHandler+PlanetData]::
             Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                       (this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       );
        BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
        if (boostUnlocked == 0) {
          return;
        }
        pNVar4 = (this->fields).boostActiveIconFader;
        if (pNVar4 != (NotificationFade *)0x0) {
          (pNVar4->fields).shouldHideWhenDone = 0;
          pNVar4 = (this->fields).boostActiveIconFader;
          if (pNVar4 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(pNVar4,(MethodInfo *)0x0);
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).activeIconScaleEffectStartTime = fVar5;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void BoostUnlockedResponse(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_BoostUnlockedResponse
               (BoostMenuItem *this,bool boostUnlocked,MethodInfo *method)

{
  BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
  if (boostUnlocked == 0) {
    return;
  }
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).shouldHideWhenDone = 0;
    pNVar1 = (this->fields).boostActiveIconFader;
    if (pNVar1 != (NotificationFade *)0x0) {
      NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).activeIconScaleEffectStartTime = fVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 GetBoostPrice() */

int32_t Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_GetBoostPrice
                  (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
      (this_01 = (MVGameOptionDataObject *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                           (this_00,
                            MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                           ), this_01 != (MVGameOptionDataObject *)0x0)) &&
     (this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                          (this_01,(MethodInfo *)0x0), this_02 != (GameBoosterSettingsManager *)0x0)
     ) {
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              GameBoosterSettings::GameBoosterSettingsManager::
              GameBoosterSettingsManager_get_ActiveSettingsList(this_02,(MethodInfo *)0x0);
    index = 0;
    if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      while( true ) {
        if ((this_03->fields)._size <= index) {
          return 0;
        }
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,index,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                          );
        if ((RVar1 == (RegexCharClass_SingleRange)0x0) ||
           (pBVar2 = (this->fields).boost, pBVar2 == (Boost *)0x0)) goto code_?;
        bVar3 = mscorlib.dll::System::String::String_op_Equality
                          (*(String **)((int)RVar1 + 8),(pBVar2->fields)._BoostKey_k__BackingField,
                           (MethodInfo *)0x0);
        if (bVar3 != 0) break;
        index = index + 1;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_03,index,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                        );
      if ((RVar1 != (RegexCharClass_SingleRange)0x0) &&
         (this_04 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting
                    ::GameBoosterSettingWithGoldSetting_get_GoldPrice
                              ((GameBoosterSettingWithGoldSetting *)RVar1,(MethodInfo *)0x0),
         this_04 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
        pOVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Object]::
                 KogamaSettingNumericBase_1_System_Object__get_NumericValue
                           ((KogamaSettingNumericBase_1_System_Object_ *)this_04,
                            MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                           );
        return (int32_t)pOVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(Boost, Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_Initialize
               (BoostMenuItem *this,Boost *boost,bool boostUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostMenuItem__BoostChanged__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).boost = boost;
  func_?(&(this->fields).boost,boost);
  pTVar1 = (this->fields).boostDescription;
  if (boost != (Boost *)0x0) {
    pSVar2 = (boost->fields).description;
    arg0 = Boost::Boost_get_Value(boost,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Format(pSVar2,arg0,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
      this_00 = (this->fields).boostImageController;
      if (this_00 != (BoostImageController *)0x0) {
        original = BoostImageController::BoostImageController_GetBoostVisualization
                             (this_00,(boost->fields)._Type_k__BackingField,(MethodInfo *)0x0);
        this_01 = (this->fields).boostActiveIcon;
        if (this_01 != (RectTransform *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                    ((Object *)original,pTVar3,0,
                     UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                    );
          BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar4 != (MVLocalPlayer *)0x0) {
            this_02 = (pMVar4->fields).boostController;
            type = (boost->fields)._Type_k__BackingField;
            this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            if ((this_04 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
               (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_04,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,
                           (MethodInfo *)0x0), this_02 != (BoostController *)0x0)) {
              BoostController::BoostController_SubscribeToBoostChanged
                        (this_02,type,(Action *)this_04,(MethodInfo *)0x0);
              pLVar5 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).boosterList;
              index = 0;
              while (pLVar5 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
                if ((pLVar5->fields)._size <= index) {
code_?:
                  if (boostUnlocked != 0) {
                    this_03 = (this->fields).boostActiveIconCanvasGroup;
                    if (this_03 == (CanvasGroup *)0x0) break;
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (this_03,1.0,(MethodInfo *)0x0);
                  }
                  pTVar1 = (this->fields).priceText;
                  BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
                  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_1
                                     ((Int32 *)&stack0xfffffff8,StringLiteral_N0,(MethodInfo *)0x0);
                  if ((pSVar2 != (String *)0x0) &&
                     (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                                         (pSVar2,::StringLiteral__,::StringLiteral__,
                                          (MethodInfo *)0x0), pTVar1 != (Text *)0x0)) {
                    (*(pTVar1->klass->vtable).set_text.methodPtr)
                              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
                    return;
                  }
                  break;
                }
                pLVar5 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
                         (this->fields).boosterList;
                if (pLVar5 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) break;
                TVar6 = mscorlib.dll::System::Collections::Generic::
                        List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                        List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                  (pLVar5,index,
                                   MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                                  );
                pLVar5 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
                         (this->fields).boosterList;
                if (TVar6.tabID == (boost->fields)._Type_k__BackingField) {
                  if (pLVar5 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
                    TVar6 = mscorlib.dll::System::Collections::Generic::
                            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                            List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                                      (pLVar5,index,
                                       MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                                      );
                    pTVar3 = (Transform *)(this->fields).boostTypeImageParent;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      boostUnlocked = (bool)TypeInfo__UnityEngine__Object;
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)TVar6.streamedImagePrefab,pTVar3,0,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                              );
                    goto code_?;
                  }
                  break;
                }
                index = index + 1;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnDestroy
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostMenuItem__BoostChanged__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar2 != (MVLocalPlayer *)0x0) {
    this_00 = (pMVar2->fields).boostController;
    pBVar3 = (this->fields).boost;
    if (pBVar3 != (Boost *)0x0) {
      type = (pBVar3->fields)._Type_k__BackingField;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if ((this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
         (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,
                     (MethodInfo *)0x0), this_00 != (BoostController *)0x0)) {
        BoostController::BoostController_UnSubscribeToBoostChanged
                  (this_00,type,(Action *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPurchaseBoostPressed() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseBoostPressed
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BoostMenuItem__OnPurchaseSuccessful__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    BoostPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<BoostPurchasePopup>_BoostPurchasePopup_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__BoostMenuItem____c__DisplayClass29_0___OnPurchaseBoostPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostMenuItem____c__DisplayClass29_0);
    func_?(&
                    MethodInfo__BoostMenuItem____c__DisplayClass29_1___OnPurchaseBoostPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostMenuItem____c__DisplayClass29_1);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pOVar2 = (Object *)func_?(TypeInfo__BoostMenuItem____c__DisplayClass29_1);
    if (pOVar2 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar2,ExceptionArgument__Enum_obj,unaff_ESI);
      original = (this->fields).purchasePopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          BoostPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<BoostPurchasePopup>_BoostPurchasePopup_
                         );
      pOVar2[1].klass = pOVar3;
      func_?(pOVar2 + 1,pOVar3);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      if (pEVar5 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar2,
                   MethodInfo__BoostMenuItem____c__DisplayClass29_1___OnPurchaseBoostPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,pEVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        price = BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
        (this->fields).price = price;
        pOVar3 = pOVar2[1].klass;
        pBVar6 = (this->fields).boost;
        if (pBVar6 != (Boost *)0x0) {
          pBVar7 = (this->fields).boost;
          boostType = (pBVar6->fields)._Type_k__BackingField;
          boostKey = (pBVar7->fields)._BoostKey_k__BackingField;
          boostName = (pBVar7->fields)._EditTitle_k__BackingField;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction);
          if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_00,(Object *)this,MethodInfo__BoostMenuItem__OnPurchaseSuccessful__,
                       (MethodInfo *)0x0);
            if (pOVar3 != (Object__Class *)0x0) {
              BoostPurchasePopup::BoostPurchasePopup_Initialize
                        ((BoostPurchasePopup *)pOVar3,boostType,boostKey,boostName,price,
                         (UnityAction *)this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pOVar2 = (Object *)func_?(TypeInfo__BoostMenuItem____c__DisplayClass29_0);
    if (pOVar2 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar2,ExceptionArgument__Enum_obj,unaff_ESI);
      pGVar4 = (this->fields).boostTouristInformation;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar4,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      pOVar2[1].klass = pOVar3;
      func_?(pOVar2 + 1,pOVar3);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      if (pEVar5 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar2,
                   MethodInfo__BoostMenuItem____c__DisplayClass29_0___OnPurchaseBoostPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,pEVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPurchaseSuccessful() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseSuccessful
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_Purchase_Booster_GoldSpent);
    func_?(&StringLiteral_Purchase_Booster_);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_01 != (MVNetworkGame *)0x0) &&
       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar1 != (MVLocalPlayer *)0x0)) && (pBVar2 = (this->fields).boost, pBVar2 != (Boost *)0x0))
     && (pBVar3 = (pMVar1->fields).boostController, pBVar3 != (BoostController *)0x0)) {
    BoostController::BoostController_ActivateBoost
              (pBVar3,(pBVar2->fields)._Type_k__BackingField,(MethodInfo *)0x0);
    pBVar2 = (this->fields).boost;
    if (pBVar2 != (Boost *)0x0) {
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                         ((Enum *)0xffffffff,(MethodInfo *)(pBVar2->fields)._Type_k__BackingField);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Purchase_Booster_,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar4,1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_Purchase_Booster_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar1 != (MVLocalPlayer *)0x0) &&
         (pBVar2 = (this->fields).boost, pBVar2 != (Boost *)0x0)) {
        pBVar3 = (pMVar1->fields).boostController;
        key = (Object *)(pBVar2->fields)._Type_k__BackingField;
        if (pBVar3 != (BoostController *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (pBVar3->fields).activeBoosts;
          if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            boostUnlocked =
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                 Object,GUILoginHandler+PlanetData]::
                 Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                           (this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                           );
            BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
            if (boostUnlocked == 0) {
              return;
            }
            pNVar5 = (this->fields).boostActiveIconFader;
            if (pNVar5 != (NotificationFade *)0x0) {
              (pNVar5->fields).shouldHideWhenDone = 0;
              pNVar5 = (this->fields).boostActiveIconFader;
              if (pNVar5 != (NotificationFade *)0x0) {
                NotificationFade::NotificationFade_Activate(pNVar5,(MethodInfo *)0x0);
                fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
                (this->fields).activeIconScaleEffectStartTime = fVar6;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnUnlockBoostWithAdClicked() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnUnlockBoostWithAdClicked
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__BoostMenuItem___OnUnlockBoostWithAdClicked_b__28_0_IBoostAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>
                      );
  if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__BoostMenuItem___OnUnlockBoostWithAdClicked_b__28_0_IBoostAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUnlockBoostWithSubscriptionClicked() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnUnlockBoostWithSubscriptionClicked
               (BoostMenuItem *this,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_01 != (MVNetworkGame *)0x0) &&
       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar1 != (MVLocalPlayer *)0x0)) && (pBVar2 = (this->fields).boost, pBVar2 != (Boost *)0x0))
     && (pBVar3 = (pMVar1->fields).boostController, pBVar3 != (BoostController *)0x0)) {
    BoostController::BoostController_ActivateBoost
              (pBVar3,(pBVar2->fields)._Type_k__BackingField,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) && (pBVar2 = (this->fields).boost, pBVar2 != (Boost *)0x0))
    {
      key = (Object *)(pBVar2->fields)._Type_k__BackingField;
      pBVar3 = (pMVar1->fields).boostController;
      if (pBVar3 != (BoostController *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (pBVar3->fields).activeBoosts;
        if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          boostUnlocked =
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Object,GUILoginHandler+PlanetData]::
               Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                         (this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                         );
          BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
          if (boostUnlocked == 0) {
            return;
          }
          pNVar4 = (this->fields).boostActiveIconFader;
          if (pNVar4 != (NotificationFade *)0x0) {
            (pNVar4->fields).shouldHideWhenDone = 0;
            pNVar4 = (this->fields).boostActiveIconFader;
            if (pNVar4 != (NotificationFade *)0x0) {
              NotificationFade::NotificationFade_Activate(pNVar4,(MethodInfo *)0x0);
              fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
              (this->fields).activeIconScaleEffectStartTime = fVar5;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetBoostUIUnlocked(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_SetBoostUIUnlocked
               (BoostMenuItem *this,bool boostUnlocked,MethodInfo *method)

{
  MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  bVar1 = MVClientSettings::MVClientSettings_get_BoostersEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    bVar3 = 1 - (MVar2 != MVGameMode__Enum_Edit);
  }
  else {
    bVar3 = 1;
  }
  bVar1 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
    MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  }
  this_00 = (this->fields).timeLeftText;
  if ((this_00 != (Text *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,boostUnlocked,(MethodInfo *)0x0);
    pGVar4 = (this->fields).boostUnlockedGlow;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,boostUnlocked,(MethodInfo *)0x0);
      pGVar4 = (this->fields).boostActiveUI;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,boostUnlocked,(MethodInfo *)0x0);
        pBVar5 = (this->fields).getWithAdOrSubscriptionButton;
        if (pBVar5 != (Button *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar5,(MethodInfo *)0x0);
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,(boostUnlocked ^ 1) & ((byte)((uint)pBVar5 >> 0x18) | 0x53) & bVar3,
                       (MethodInfo *)0x0);
            pBVar5 = (this->fields).getWithAdDisabled;
            if ((pBVar5 != (Button *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pGVar4 = (this->fields).buttonIcon;
              MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,MVar2 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
                this_01 = (this->fields).embeddedPlayerConfig;
                if (this_01 != (EmbeddedPlayerConfig *)0x0) {
                  EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                            ((EmbeddedSiteConfigData *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
                  pBVar5 = (this->fields).getWithGold;
                  if ((pBVar5 != (Button *)0x0) &&
                     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                     pGVar4 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
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

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_Update
               (BoostMenuItem *this,MethodInfo *method)

{
  this_00 = (this->fields).activeIconScaleEffect;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(fVar1 - (this->fields).activeIconScaleEffectStartTime) /
                               (this->fields).activeIconScaleEffectDuration,(MethodInfo *)0x0);
    this_01 = (Transform *)(this->fields).boostActiveIcon;
    if (this_01 != (Transform *)0x0) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnUnlockBoostWithAdClicked>b__28_0(IBoostAdController, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem__OnUnlockBoostWithAdClicked_b__28_0
               (BoostMenuItem *this,IBoostAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__BoostMenuItem__BoostUnlockedResponse_bool_);
    func_?(&TypeInfo__IBoostAdController);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).boost;
  if (pBVar1 != (Boost *)0x0) {
    iVar2 = (pBVar1->fields)._Type_k__BackingField;
    this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)this,MethodInfo__BoostMenuItem__BoostUnlockedResponse_bool_,
                 (MethodInfo *)0x0);
      if (x != (IBoostAdController *)0x0) {
        uVar3 = 0;
        uVar4 = (x->klass->_1).interface_offsets_count;
        if (uVar4 != 0) {
          do {
            if (x->klass->interfaceOffsets[uVar3].interfaceType ==
                (Il2CppClass *)TypeInfo__IBoostAdController) {
              pIVar5 = &x->klass->vtable + x->klass->interfaceOffsets[uVar3].offset;
              goto code_?;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        pIVar5 = (IBoostAdController__VTable *)func_?(x,TypeInfo__IBoostAdController,0);
code_?:
        (*(pIVar5->TryShowAd).methodPtr)(x,iVar2,this_00,(pIVar5->TryShowAd).method);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

