
/* Void CalculateShouldShowAccessoryPopup() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowAccessoryPopup
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryMenuButton___CalculateShouldShowAccessoryPopup_c__AnonStorey0;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  if (pSVar1 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pSVar1->fields).state = (int32_t)this;
  *(undefined1 *)&(pSVar1->fields)._._._._.m_CachedPtr = 0;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
  pUVar4 = this_02;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)pSVar1,
             MethodInfo__AccessoryMenuButton___CalculateShouldShowAccessoryPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(char *)&(pSVar1->fields)._._._._.m_CachedPtr == '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar5 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar5 == (IEditModeUI *)0x0) {
      if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = (HighlightManager__Class *)
                HighlightManager::HighlightManager_GetHighLights_2
                          (HighlightType__Enum_AccessoryPopup,
                           System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                          );
      this_04 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_04,MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__
                );
      index = 0;
      if (this_03 != (HighlightManager__Class *)0x0) {
        for (; pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_03,
                                   MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                                  ), index < (int)pOVar6; index = index + 1) {
          pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,index,
                              MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                             );
          if ((pIVar7 == (IEventSystemHandler *)0x0) || (pIVar7[1].monitor == (MonitorData *)0x0))
          goto code_?;
          id = *(int32_t *)(pIVar7[1].monitor + 8);
          if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
            func_?();
          }
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)0x0;
          this_05 = (AccessoryData *)
                    AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (id,(MethodInfo *)0x0);
          if (this_05 != (AccessoryData *)0x0) {
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)&UNK_?;
            bVar8 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                    AccessoryData_GetShowInShop(this_05,(MethodInfo *)0x0);
            if (((bVar8 != 0) && ((this_05->fields).owns == 0)) && ((this_05->fields).iAvlb != 0)) {
              pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                                 );
              if (pIVar7 == (IEventSystemHandler *)0x0) goto code_?;
              highlightId = pIVar7[1].klass;
              if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
                highlightId = (IEventSystemHandler__Class *)&UNK_?;
                this_03 = TypeInfo__HighlightManager;
                func_?();
              }
              HighlightManager::HighlightManager_SetHighlightToSeen
                        ((int32_t)highlightId,(MethodInfo *)0x0);
              if (this_04 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_04,(UIPushOption__Enum)this_05,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                        );
              pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_04,
                                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                                 );
              if (2 < (int)pOVar6) break;
            }
          }
        }
        if (this_04 != (List_1_UnityEngine_Vector4_ *)0x0) {
          pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                              MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                             );
          if ((int)pOVar6 < 1) {
            return;
          }
          pSVar1 = (ScaleAnimationBase *)
                   func_?(
                                  TypeInfo__AccessoryMenuButton___CalculateShouldShowAccessoryPopup_c__AnonStorey1
                                  );
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)pUVar4);
          pXVar9 = (XpBoostParticlePreviewer *)this_01->parameters;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (pXVar9,
                              AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                             );
          if (pSVar1 != (ScaleAnimationBase *)0x0) {
            (pSVar1->fields)._._._._.m_CachedPtr = pXVar9;
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)pSVar1,
                       MethodInfo__AccessoryMenuButton___CalculateShouldShowAccessoryPopup_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar3,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            this_00 = (pSVar1->fields)._._._._.m_CachedPtr;
            if (this_00 != (AccessoryPreviewPopup *)0x0) {
              AccessoryPreviewPopup::AccessoryPreviewPopup_Initialize
                        (this_00,(List_1_AccessoryDataClient_ *)this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void CalculateShouldShowBundleAd() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowBundleAd
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  this_02 = HighlightManager::HighlightManager_GetHighLights_2
                      (HighlightType__Enum_AccessoryBundle,
                       System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                      );
  iVar1 = 0;
  if (this_02 !=
      (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
       *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                         );
      if ((int)pOVar2 <= iVar1) {
        return;
      }
      iVar3 = iVar1;
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar1,
                          MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                         );
      if ((pIVar4 == (IEventSystemHandler *)0x0) || (pIVar4[1].monitor == (MonitorData *)0x0))
      goto code_?;
      iVar5 = *(int *)(pIVar4[1].monitor + 8);
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        this = (AccessoryMenuButton *)TypeInfo__AccessoryDataManager;
        func_?();
      }
      iVar6 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId((MethodInfo *)0x0);
      if (iVar5 == iVar6) break;
      iVar1 = iVar1 + 1;
    }
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar1,
                        MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                       );
    if (pIVar4 != (IEventSystemHandler *)0x0) {
      if (pIVar4[1].klass == (IEventSystemHandler__Class *)0xffffffff) {
        return;
      }
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AccessoryDataManager,iVar3,pIVar4[1].klass);
      }
      pAVar7 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      if (pAVar7 != (AccessoryBundleClient *)0x0) {
        this_00 = (pAVar7->fields)._.accessoryBundleItems;
        iVar1 = 0;
        if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
          while( true ) {
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                               );
            if ((int)pOVar2 <= iVar1) {
              return;
            }
            pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                iVar1,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                               );
            if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
            id = pIVar4[1].monitor;
            if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
              this = (AccessoryMenuButton *)TypeInfo__AccessoryDataManager;
              func_?();
            }
            pAVar8 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                               ((int32_t)id,(MethodInfo *)0x0);
            if (pAVar8 == (AccessoryDataClient *)0x0) goto code_?;
            if ((pAVar8->fields)._.owns == 0) break;
            iVar1 = iVar1 + 1;
          }
          pGVar9 = (this->fields).redDotNotification;
          if (pGVar9 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar9,1,(MethodInfo *)0x0);
            this_01 = (this->fields).shineEffect;
            if ((this_01 != (AccessoryShinyButton *)0x0) &&
               (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0),
               pGVar9 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar9,1,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
                func_?(TypeInfo__FirstTimeEventManager);
              }
              iVar6 = 0x19;
              bVar10 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                                (FirstTimeEvent__Enum_PM_AccessoryShop,(MethodInfo *)0x0);
              if (bVar10 == 0) {
                return;
              }
              if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
                func_?();
              }
              HighlightManager::HighlightManager_SetHighlightToSeen(iVar6,(MethodInfo *)0x0);
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              if (TypeInfo__AccessoryMenuButton->static_fields->__f__am_cache0 ==
                  (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
                this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_03,(Object *)0x0,
                           MethodInfo__AccessoryMenuButton___CalculateShouldShowBundleAd_m__0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>__EventFunction_System__Object__void__
                          );
                TypeInfo__AccessoryMenuButton->static_fields->__f__am_cache0 =
                     (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)this_03;
              }
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__AccessoryMenuButton->static_fields->__f__am_cache0;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar9,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CalculateShouldShowHighlightIcon() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowHighlightIcon
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  this_02 = HighlightManager::HighlightManager_GetHighLights_2
                      (HighlightType__Enum_Accessory,
                       System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                      );
  iVar1 = 0;
  if (this_02 !=
      (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
       *)0x0) {
    for (; pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                               MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                              ), iVar1 < (int)pOVar2; iVar1 = iVar1 + 1) {
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar1,
                          MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                         );
      if ((pIVar3 == (IEventSystemHandler *)0x0) || (pIVar3[1].monitor == (MonitorData *)0x0))
      goto code_?;
      id = *(int32_t *)(pIVar3[1].monitor + 8);
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        this = (AccessoryMenuButton *)TypeInfo__AccessoryDataManager;
        func_?();
      }
      this_03 = (AccessoryData *)
                AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                          (id,(MethodInfo *)0x0);
      if (this_03 != (AccessoryData *)0x0) {
        MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_GetShowInShop
                  (this_03,(MethodInfo *)0x0);
      }
    }
    this_00 = (this->fields).shineEffect;
    if (this_00 != (AccessoryShinyButton *)0x0) {
      iVar1 = 0;
      this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_04 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_04,0 < iVar1,(MethodInfo *)0x0);
        this_01 = (this->fields).redDotNotification;
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0 < (int)this_04,(MethodInfo *)0x0);
          pTVar4 = (this->fields).redDotNotificationText;
          uVar5 = func_?();
          if (pTVar4 != (Text *)0x0) {
            (*(code *)(pTVar4->klass->vtable).set_text.method)
                      (pTVar4,uVar5,
                       (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnAccessoryDataReady() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnAccessoryDataReady
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
  (this->fields).playerReady = 1;
  AccessoryMenuButton_CalculateShouldShowHighlightIcon(this,(MethodInfo *)0x0);
  AccessoryMenuButton_CalculateShouldShowBundleAd(this,(MethodInfo *)0x0);
  AccessoryMenuButton_CalculateShouldShowAccessoryPopup(this,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnEnable
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if ((this->fields).playerReady != 0) {
    this_00 = (this->fields).redDotNotification;
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryMenuButton_CalculateShouldShowHighlightIcon(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnJoinChanged(MVJoinState) */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnJoinChanged
               (AccessoryMenuButton *this,MVJoinState__Enum joinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (joinState == MVJoinState__Enum_Playing) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_,
               MethodInfo__System__Action<MVJoinState>__Action_System__Object__void__);
    pAVar2 = (Action_1_MVJoinState_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_MVJoinState_ *)0x0;
    if (pAVar2 != (Action_1_MVJoinState_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<MVJoinState>) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action_1_MVJoinState_ *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar1,(MethodInfo *)0x0);
    AccessoryMenuButton_PlayerReady(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void PlayerReady() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_PlayerReady
               (AccessoryMenuButton *this,MethodInfo *method)

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
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)0x0,0,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      object = TypeInfo__UnityEngine__Events__UnityAction;
      pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)object,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
                 (MethodInfo *)0x0);
      pUStack3 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      pUVar2 = (UnityAction *)0x0;
      if (pUStack3 == (UnityAction *)0x0) {
code_?:
        TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
        AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
        return;
      }
      if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUStack3;
      }
      if (pUVar2 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  pUStack3 = (UnityAction *)func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_Start
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      bVar3 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            this_01 = (Behaviour *)0x0;
            bVar3 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar2,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        (this_01,0,(MethodInfo *)0x0);
              return;
            }
            if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
              func_?();
            }
            pUVar4 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
            object_00 = TypeInfo__UnityEngine__Events__UnityAction;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)object_00,
                       MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,(MethodInfo *)0x0);
            pUVar6 = (UnityAction *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
            pUVar4 = (UnityAction *)0x0;
            if (pUVar6 == (UnityAction *)0x0) {
code_?:
              TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar4;
              AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
              return;
            }
            if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar4 = pUVar6;
            }
            if (pUVar4 != (UnityAction *)0x0) goto code_?;
            goto code_?;
          }
        }
        func_?();
code_?:
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      a = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
      object = TypeInfo__System__Action<MVJoinState>;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)object,MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_
                 ,MethodInfo__System__Action<MVJoinState>__Action_System__Object__void__);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar8 != (Delegate *)0x0) {
        pDVar9 = (Delegate *)0x0;
        if ((Action_1_MVJoinState___Class *)pDVar8->klass == TypeInfo__System__Action<MVJoinState>)
        {
          pDVar9 = pDVar8;
        }
        if (pDVar9 == (Delegate *)0x0) goto code_?;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar10 != (MVGameControllerBase *)0x0) {
        (pMVar10->fields).onJoinStateChanged = in_stack_11;
        pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar10 != (MVGameControllerBase *)0x0) {
          if ((pMVar10->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar10 == (MVGameControllerBase *)0x0) ||
               (this_00 = (Action_1_UIPushOption_ *)(pMVar10->fields).onJoinStateChanged,
               this_00 == (Action_1_UIPushOption_ *)0x0)) goto code_?;
            mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                      (this_00,(pMVar10->fields)._joinState,
                       MethodInfo__System__Action<MVJoinState>__Invoke_MVJoinState_);
          }
          return;
        }
      }
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <CalculateShouldShowBundleAd>m__0(IActivateUIElement, BaseEventData) */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton__CalculateShouldShowBundleAd_m__0
               (IActivateUIElement *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IActivateUIElement *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IActivateUIElement,x,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

