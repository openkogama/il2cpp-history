
/* Void ActivateActiveBoostIconEffect() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_ActivateActiveBoostIconEffect
               (BoostMenuItem *this,MethodInfo *method)

{
  pNVar1 = (this->fields).boostActiveIconFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar1,0,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields).boost;
    if ((this_00 != (Boost *)0x0) &&
       (type = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
       , this_02 != (ObjectiveArrow *)0x0)) {
      boostUnlocked =
           BoostController::BoostController_IsBoostActive
                     ((BoostController *)this_02,(BoostType__Enum)type,(MethodInfo *)0x0);
      BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
      if (boostUnlocked == 0) {
        return;
      }
      pNVar1 = (this->fields).boostActiveIconFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar1,0,(MethodInfo *)0x0);
        pNVar1 = (this->fields).boostActiveIconFader;
        if (pNVar1 != (NotificationFade *)0x0) {
          NotificationFade::NotificationFade_Activate(pNVar1,(MethodInfo *)0x0);
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).activeIconScaleEffectStartTime = fVar2;
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNVar1,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
      (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                           (this_01,
                            MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                           ), this_02 != (MVRoundCube *)0x0)) &&
     (this_03 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                          ((MVGameOptionDataObject *)this_02,(MethodInfo *)0x0),
     this_03 != (GameBoosterSettingsManager *)0x0)) {
    this_04 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
              GameBoosterSettings::GameBoosterSettingsManager::
              GameBoosterSettingsManager_get_ActiveSettingsList(this_03,(MethodInfo *)0x0);
    index = 0;
    if (this_04 !=
        (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
         *)0x0) {
      while( true ) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                           );
        if ((int)pOVar1 <= index) {
          return 0;
        }
        this_05 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                            );
        if (this_05 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        a = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items(this_05,(MethodInfo *)0x0);
        this_00 = (this->fields).boost;
        if (this_00 == (Boost *)0x0) goto code_?;
        b = (String *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                       (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          this = (BoostMenuItem *)TypeInfo__System__String;
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
        if (bVar2 != 0) break;
        index = index + 1;
      }
      this_06 = (GameBoosterSettingWithGoldSetting *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                          );
      if ((this_06 != (GameBoosterSettingWithGoldSetting *)0x0) &&
         (this_07 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting
                    ::GameBoosterSettingWithGoldSetting_get_GoldPrice(this_06,(MethodInfo *)0x0),
         this_07 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
        iVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                          (this_07,
                           MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                          );
        return iVar3;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void Initialize(Boost, Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_Initialize
               (BoostMenuItem *this,Boost *boost,bool boostUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pTVar2 = (this->fields).boostDescription;
  (this->fields).boost = boost;
  if ((boost != (Boost *)0x0) &&
     (pSVar3 = Boost::Boost_get_Description(boost,(MethodInfo *)0x0), pTVar2 != (Text *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).boostImageController;
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)boost,(MethodInfo *)0x0);
    if (this_00 != (BoostImageController *)0x0) {
      original = BoostImageController::BoostImageController_GetBoostVisualization
                           (this_00,(BoostType__Enum)pIVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original,
                          UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                         );
      if (pXVar5 != (XpBoostParticlePreviewer *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar5,(MethodInfo *)0x0);
        this_01 = (this->fields).boostActiveIcon;
        if ((this_01 != (RectTransform *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_01,(MethodInfo *)0x0),
           pTVar6 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar6,parent,0,(MethodInfo *)0x0);
          BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_03 = (PrefabPool *)
                    MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (this_03 != (PrefabPool *)0x0) {
            this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                (this_03,(MethodInfo *)0x0);
            pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)boost,(MethodInfo *)0x0);
            this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(TypeInfo__System__Action);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_05,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,
                       (MethodInfo *)0x0);
            if (this_04 != (ObjectiveArrow *)0x0) {
              BoostController::BoostController_SubscribeToBoostChanged
                        ((BoostController *)this_04,(BoostType__Enum)pIVar4,(Action *)this_05,
                         (MethodInfo *)0x0);
              pLVar7 = (this->fields).boosterList;
              index = 0;
              if (pLVar7 != (List_1_BoostMenuItem_BoosterDef_ *)0x0) {
                while (pOVar8 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)pLVar7,
                                           MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Count__
                                          ), index < (int)pOVar8) {
                  pLVar7 = (this->fields).boosterList;
                  if (pLVar7 == (List_1_BoostMenuItem_BoosterDef_ *)0x0) goto code_?;
                  BVar9 = mscorlib.dll::System::Collections::Generic::
                          List`1[BoostMenuItem+BoosterDef]::
                          List_1_BoostMenuItem_BoosterDef__get_Item
                                    (pLVar7,index,
                                     MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                                    );
                  pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                           Collection_1_VoxelHit__get_Items
                                     ((Collection_1_VoxelHit_ *)boost,(MethodInfo *)0x0);
                  pLVar7 = (this->fields).boosterList;
                  if ((IList_1_VoxelHit_ *)BVar9.type == pIVar4) {
                    if (pLVar7 != (List_1_BoostMenuItem_BoosterDef_ *)0x0) {
                      BVar9 = mscorlib.dll::System::Collections::Generic::
                              List`1[BoostMenuItem+BoosterDef]::
                              List_1_BoostMenuItem_BoosterDef__get_Item
                                        (pLVar7,index,
                                         MethodInfo__System__Collections__Generic__List<BoostMenuItem::BoosterDef>__get_Item_int_
                                        );
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                      }
                      pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_Instantiate_251
                                         ((XpBoostParticlePreviewer *)BVar9.iconPrefab,
                                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                         );
                      if ((pXVar5 != (XpBoostParticlePreviewer *)0x0) &&
                         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform((GameObject *)pXVar5,(MethodInfo *)0x0),
                         pTVar6 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                  (pTVar6,(Transform *)(this->fields).boostTypeImageParent,0,
                                   (MethodInfo *)0x0);
                        break;
                      }
                    }
                    goto code_?;
                  }
                  index = index + 1;
                  if (pLVar7 == (List_1_BoostMenuItem_BoosterDef_ *)0x0) goto code_?;
                }
                if (boostUnlocked != 0) {
                  this_02 = (this->fields).boostActiveIconCanvasGroup;
                  if (this_02 == (CanvasGroup *)0x0) goto code_?;
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (this_02,1.0,(MethodInfo *)0x0);
                }
                pTVar2 = (this->fields).priceText;
                iStack_1 = BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
                pSVar3 = (String *)func_?(&iStack_1,StringLiteral_N0,0);
                if ((pSVar3 != (String *)0x0) &&
                   (pSVar3 = mscorlib.dll::System::String::String_Replace_1
                                       (pSVar3,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0
                                       ), pTVar2 != (Text *)0x0)) {
                  (*(code *)(pTVar2->klass->vtable).set_text.method)
                            (pTVar2,pSVar3,
                             (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnDestroy
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields).boost;
    if (this_00 != (Boost *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(pIVar2);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,MethodInfo__BoostMenuItem__BoostChanged__,(MethodInfo *)0x0)
      ;
      if (this_02 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_UnSubscribeToBoostChanged
                  ((BoostController *)this_02,BoostType__Enum_AmmoIntMultiplier,(Action *)this_03,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseBoostPressed() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseBoostPressed
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    method_00 = TypeInfo__BoostMenuItem___OnPurchaseBoostPressed_c__AnonStorey1;
    pSVar2 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_00);
    pBVar3 = (this->fields).purchasePopupPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pBVar3,
                        BoostPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<BoostPurchasePopup>_BoostPurchasePopup_
                       );
    if (pSVar2 != (ScaleAnimationBase *)0x0) {
      (pSVar2->fields)._._._._.m_CachedPtr = pXVar4;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)pSVar2,
                 MethodInfo__BoostMenuItem___OnPurchaseBoostPressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar6
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      iVar7 = BoostMenuItem_GetBoostPrice(this,(MethodInfo *)0x0);
      (this->fields).price = iVar7;
      pBVar8 = (this->fields).boost;
      pBVar3 = (pSVar2->fields)._._._._.m_CachedPtr;
      if (pBVar8 != (Boost *)0x0) {
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pBVar8,(MethodInfo *)0x0);
        pBVar8 = (this->fields).boost;
        if (pBVar8 != (Boost *)0x0) {
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pBVar8,
                     (MethodInfo *)0x0);
          pBVar8 = (this->fields).boost;
          if (pBVar8 != (Boost *)0x0) {
            boostName = (String *)
                        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pBVar8,
                                   (MethodInfo *)0x0);
            iVar7 = (this->fields).price;
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)this,MethodInfo__BoostMenuItem__OnPurchaseSuccessful__,
                       (MethodInfo *)0x0);
            if (pBVar3 != (BoostPurchasePopup *)0x0) {
              BoostPurchasePopup::BoostPurchasePopup_Initialize
                        (pBVar3,(BoostType__Enum)pUVar6,(String *)0x0,boostName,iVar7,
                         (UnityAction *)pUVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    method_01 = TypeInfo__BoostMenuItem___OnPurchaseBoostPressed_c__AnonStorey0;
    pSVar2 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_01);
    pXVar4 = (XpBoostParticlePreviewer *)(this->fields).boostTouristInformation;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (pSVar2 != (ScaleAnimationBase *)0x0) {
      (pSVar2->fields)._._._._.m_CachedPtr = pXVar4;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)pSVar2,
                 MethodInfo__BoostMenuItem___OnPurchaseBoostPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar6
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPurchaseSuccessful() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnPurchaseSuccessful
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (pPVar1 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0)
     , pPVar1 != (PrefabPool *)0x0)) {
    pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar1,(MethodInfo *)0x0);
    pBVar3 = (this->fields).boost;
    if ((pBVar3 != (Boost *)0x0) &&
       (pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pBVar3,(MethodInfo *)0x0),
       pOVar2 != (ObjectiveArrow *)0x0)) {
      BoostController::BoostController_ActivateBoost
                ((BoostController *)pOVar2,(BoostType__Enum)pIVar4,(MethodInfo *)0x0);
      pBVar3 = (this->fields).boost;
      if (pBVar3 != (Boost *)0x0) {
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pBVar3,(MethodInfo *)0x0);
        piVar5 = (int *)func_?();
        if (piVar5 != (int *)0x0) {
          pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))();
          func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Purchase_Booster_,pSVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
            func_?(TypeInfo__StatHatWrapper);
          }
          StatHatWrapper::StatHatWrapper_Count(pSVar6,1,(MethodInfo *)0x0);
          StatHatWrapper::StatHatWrapper_Count
                    (StringLiteral_Purchase_Booster_GoldSpent,(this->fields).price,(MethodInfo *)0x0
                    );
          pPVar1 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pPVar1 != (PrefabPool *)0x0) {
            pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                               (pPVar1,(MethodInfo *)0x0);
            pBVar3 = (this->fields).boost;
            if ((pBVar3 != (Boost *)0x0) &&
               (pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pBVar3,(MethodInfo *)0x0),
               pOVar2 != (ObjectiveArrow *)0x0)) {
              boostUnlocked =
                   BoostController::BoostController_IsBoostActive
                             ((BoostController *)pOVar2,(BoostType__Enum)pIVar4,(MethodInfo *)0x0);
              BoostMenuItem_SetBoostUIUnlocked(this,boostUnlocked,(MethodInfo *)0x0);
              if (boostUnlocked == 0) {
                return;
              }
              pNVar7 = (this->fields).boostActiveIconFader;
              if (pNVar7 != (NotificationFade *)0x0) {
                NotificationFade::NotificationFade_set_ShouldHideWhenDone
                          (pNVar7,0,(MethodInfo *)0x0);
                pNVar7 = (this->fields).boostActiveIconFader;
                if (pNVar7 != (NotificationFade *)0x0) {
                  NotificationFade::NotificationFade_Activate(pNVar7,(MethodInfo *)0x0);
                  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                    ((MethodInfo *)0x0);
                  (this->fields).activeIconScaleEffectStartTime = fVar8;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUnlockBoostWithAdClicked() */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_OnUnlockBoostWithAdClicked
               (BoostMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostMenuItem___OnUnlockBoostWithAdClicked_m__0_IBoostAdController__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IBoostAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IBoostAdController>_
            );
  return;
}


/* Void SetBoostUIUnlocked(Boolean) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem_SetBoostUIUnlocked
               (BoostMenuItem *this,bool boostUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_EDI);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  }
  this_00 = (this->fields).timeLeftText;
  if ((this_00 != (Text *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,boostUnlocked,(MethodInfo *)0x0);
    pGVar2 = (this->fields).boostUnlockedGlow;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,boostUnlocked,(MethodInfo *)0x0);
      pGVar2 = (this->fields).boostActiveUI;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,boostUnlocked,(MethodInfo *)0x0);
        pBVar3 = (this->fields).getWithAd;
        if ((pBVar3 != (Button *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pBVar3,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pBVar3 = (this->fields).getWithAdDisabled;
          if ((pBVar3 != (Button *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pBVar3,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            pGVar2 = (this->fields).buttonAdImage;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,MVar4 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
              this_01 = (this->fields).embeddedPlayerConfig;
              if (this_01 != (EmbeddedPlayerConfig *)0x0) {
                EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                          ((EmbeddedSiteConfigData *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
                pBVar3 = (this->fields).getWithGold;
                if ((pBVar3 != (Button *)0x0) &&
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pBVar3,(MethodInfo *)0x0),
                   pGVar2 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    fStack_2 = 0.0;
    uStack_3 = (ulonglong)(uint)fVar1;
    func_?(&uStack_3,fVar1);
    if (this_01 != (Transform *)0x0) {
      value.z = fStack_2;
      value.x = (float)(undefined4)uStack_3;
      value.y = (float)uStack_3._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnUnlockBoostWithAdClicked>m__0(IBoostAdController, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuItem::BoostMenuItem__OnUnlockBoostWithAdClicked_m__0
               (BoostMenuItem *this,IBoostAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).boost;
  if (this_00 != (Boost *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__BoostMenuItem__BoostUnlockedResponse_bool_,
               MethodInfo__System__Action<bool>__Action_System__Object__void__);
    if (x != (IBoostAdController *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__IBoostAdController) {
            ppMVar5 = &(&x->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].TryShowAd.method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__IBoostAdController,0);
code_?:
      (*(code *)*ppMVar5)(x,pIVar1,this_01,ppMVar5[1]);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

