
/* Void CalculateShouldShowAccessoryPopup() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowAccessoryPopup
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    func_?(&
                    AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryMenuButton____c__DisplayClass10_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass10_0);
    func_?(&
                    MethodInfo__AccessoryMenuButton____c__DisplayClass10_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass10_1);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__AccessoryMenuButton____c__DisplayClass10_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if (pOVar1 == (Object *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar1[1].monitor = (MonitorData *)this;
  func_?(&pOVar1[1].monitor,this);
  *(undefined1 *)&pOVar1[1].klass = 0;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
  method_00 = (AccessoryData *)
              MethodInfo__AccessoryMenuButton____c__DisplayClass10_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar4,pOVar1,
             MethodInfo__AccessoryMenuButton____c__DisplayClass10_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (AccessoryMenuButton *)
         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar3,(BaseEventData *)0x0,pEVar4,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(char *)&pOVar1[1].klass == '\0') {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                HighlightManager::HighlightManager_GetHighLights
                          (HighlightType__Enum_AccessoryPopup,
                           System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                          );
      previewedAccessories = (List_1_AccessoryDataClient_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                 previewedAccessories,
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
      index = (AccessoryMenuButton *)0x0;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        for (; (int)index < (this_00->fields)._size;
            index = (AccessoryMenuButton *)((int)&index->klass + 1)) {
          RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                            );
          if ((RVar5 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar5 + 0xc) == 0))
          goto code_?;
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
          this_01 = (AccessoryData *)
                    AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (*(int32_t *)(*(int *)((int)RVar5 + 0xc) + 8),(MethodInfo *)0x0);
          if (this_01 != (AccessoryData *)0x0) {
            this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      &UNK_?;
            bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                    AccessoryData_GetShowInShop(this_01,(MethodInfo *)0x0);
            if (((bVar6 != 0) && ((this_01->fields).owns == 0)) && ((this_01->fields).iAvlb != 0)) {
              RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                                );
              if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
              highlightId = *(int32_t *)((int)RVar5 + 8);
              if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
              if (previewedAccessories == (List_1_AccessoryDataClient_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)previewedAccessories,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                        );
              this = index;
              method_00 = this_01;
              if (2 < (previewedAccessories->fields)._size) goto code_?;
            }
          }
        }
        if (previewedAccessories != (List_1_AccessoryDataClient_ *)0x0) {
code_?:
          if ((previewedAccessories->fields)._size < 1) {
            return;
          }
          pOVar1 = (Object *)func_?(TypeInfo__AccessoryMenuButton____c__DisplayClass10_1);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          original = (this->fields).accessoryPreviewPopup;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar7 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                             );
          if (pOVar1 != (Object *)0x0) {
            pOVar1[1].klass = pOVar7;
            func_?(pOVar1 + 1,pOVar7);
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar4,pOVar1,
                       MethodInfo__AccessoryMenuButton____c__DisplayClass10_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,pEVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (pOVar1[1].klass != (Object__Class *)0x0) {
              AccessoryPreviewPopup::AccessoryPreviewPopup_Initialize
                        ((AccessoryPreviewPopup *)pOVar1[1].klass,previewedAccessories,
                         (MethodInfo *)0x0);
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__AccessoryMenuButton____c___CalculateShouldShowBundleAd_b__12_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryMenuButton____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HighlightManager);
  }
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           HighlightManager::HighlightManager_GetHighLights
                     (HighlightType__Enum_AccessoryBundle,
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                     );
  iVar2 = 0;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= iVar2) {
        return;
      }
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                        );
      if ((RVar3 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar3 + 0xc) == 0))
      goto code_?;
      iVar4 = *(int *)(*(int *)((int)RVar3 + 0xc) + 8);
      iVar5 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleId((MethodInfo *)0x0);
      this_00 = 
      MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
      ;
      if (iVar4 == iVar5) break;
      iVar2 = iVar2 + 1;
    }
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar1,iVar2,
                       MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                      );
    if (RVar3 != (RegexCharClass_SingleRange)0x0) {
      iVar2 = *(int *)((int)RVar3 + 8);
      if (iVar2 == -1) {
        return;
      }
      pAVar6 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      if (pAVar6 != (AccessoryBundleClient *)0x0) {
        pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pAVar6->fields)._.accessoryBundleItems;
        iVar4 = 0;
        if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          while( true ) {
            if ((pLVar1->fields)._size <= iVar4) {
              return;
            }
            RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar1,iVar4,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                              );
            if ((RVar3 == (RegexCharClass_SingleRange)0x0) ||
               (pAVar7 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                   (*(int32_t *)((int)RVar3 + 0xc),(MethodInfo *)0x0),
               pAVar7 == (AccessoryDataClient *)0x0)) goto code_?;
            if ((pAVar7->fields)._.owns == 0) break;
            iVar4 = iVar4 + 1;
          }
          if (this_00->klass != (Il2CppClass *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_00->klass,1,(MethodInfo *)0x0);
            if (((Component *)this_00->return_type != (Component *)0x0) &&
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject
                                   ((Component *)this_00->return_type,(MethodInfo *)0x0),
               pGVar8 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,1,(MethodInfo *)0x0);
              bVar9 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                                (FirstTimeEvent__Enum_PM_AccessoryShop,(MethodInfo *)0x0);
              if (bVar9 == 0) {
                return;
              }
              if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              HighlightManager::HighlightManager_SetHighlightToSeen(iVar2,(MethodInfo *)0x0);
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if ((TypeInfo__AccessoryMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              callbackFunction = TypeInfo__AccessoryMenuButton____c->static_fields->__9__12_0;
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
                if ((TypeInfo__AccessoryMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                object = TypeInfo__AccessoryMenuButton____c->static_fields->__9;
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)object,
                           MethodInfo__AccessoryMenuButton____c___CalculateShouldShowBundleAd_b__12_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__AccessoryMenuButton____c->static_fields->__9__12_0 = callbackFunction;
                func_?();
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar8,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CalculateShouldShowHighlightIcon() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowHighlightIcon
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HighlightManager);
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            HighlightManager::HighlightManager_GetHighLights
                      (HighlightType__Enum_Accessory,
                       System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                      );
  id.m_value = 0;
  index = 0;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    for (; index < (this_01->fields)._size; index = index + 1) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,index,
                         MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                        );
      if ((RVar1 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar1 + 0xc) == 0))
      goto code_?;
      id.m_value = *(int32_t *)(*(int *)((int)RVar1 + 0xc) + 8);
      this_02 = (AccessoryData *)
                AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                          (id.m_value,(MethodInfo *)0x0);
      if (this_02 != (AccessoryData *)0x0) {
        this = (AccessoryMenuButton *)0x0;
        bVar2 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                AccessoryData_GetShowInShop(this_02,(MethodInfo *)0x0);
        if ((bVar2 != 0) && ((this_02->fields).owns == 0)) {
          id.m_value = id.m_value + 1;
        }
      }
    }
    this_00 = (this->fields).shineEffect;
    if ((this_00 != (AccessoryShinyButton *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
      IVar4.m_value = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0 < id.m_value,(MethodInfo *)0x0);
      pGVar3 = (this->fields).redDotNotification;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0 < IVar4.m_value,(MethodInfo *)0x0);
        pTVar5 = (this->fields).redDotNotificationText;
        pSStack6 =
             mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          pIStack7 = (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pTStack8 = pTVar5;
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnAccessoryDataReady() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnAccessoryDataReady
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
    func_?();
    (this->fields).playerReady = 1;
    AccessoryMenuButton_CalculateShouldShowHighlightIcon(this,(MethodInfo *)0x0);
    AccessoryMenuButton_CalculateShouldShowBundleAd(this,(MethodInfo *)0x0);
    AccessoryMenuButton_CalculateShouldShowAccessoryPopup(this,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUVar1;
  }
  if (pUVar2 == (UnityAction *)0x0) {
    func_?();
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_);
    func_?(&TypeInfo__System__Action<MVJoinState>);
    cRam_? = '\x01';
  }
  if (joinState == MVJoinState__Enum_Playing) {
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_MVJoinState_ *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      pAVar1 = (Action_1_MVJoinState_ *)func_?();
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
    func_?(&TypeInfo__AccessoryDataManager);
    func_?(&MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
    pUStack1 = extraout_ECX;
    pUStack2 = extraout_EDX;
  }
  else {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
    bVar3 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_01,(MethodInfo *)0x0);
    object = TypeInfo__UnityEngine__Events__UnityAction;
    if (bVar3 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)0x0,0,(MethodInfo *)0x0);
      return;
    }
    pUVar4 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)object,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
               (MethodInfo *)0x0);
    pUStack1 =
         (UnityAction *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar4,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUStack1 == (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
      pUVar4 = (UnityAction *)0x0;
code_?:
      pUStack1 = (UnityAction *)TypeInfo__AccessoryDataManager->static_fields;
      pUStack2 = (UnityAction__Class *)pUVar4;
      func_?();
      AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
      return;
    }
    pUVar4 = (UnityAction *)0x0;
    if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUStack1;
    }
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar4 == (UnityAction *)0x0) goto code_?;
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUStack1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUStack1;
    }
    pUStack2 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  pUStack2 = (UnityAction__Class *)func_?();
  pUStack1 = extraout_ECX_00;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_Start
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_);
    func_?(&TypeInfo__System__Action<MVJoinState>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    bVar3 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      a = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
      object = TypeInfo__System__Action<MVJoinState>;
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)object,
                 MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      if ((pDVar4 != (Delegate *)0x0) && (iVar5 = func_?(), iVar5 == 0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar6 != (MVGameControllerBase *)0x0) {
        (pMVar6->fields).onJoinStateChanged = in_stack_7;
        func_?();
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar6 != (MVGameControllerBase *)0x0) {
          if ((pMVar6->fields).onJoinStateChanged != (Action_1_MVJoinState_ *)0x0) {
            (*(((TypeInfo__MVGameControllerBase->static_fields->instance->fields).onJoinStateChanged
               )->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 != (MVLocalPlayer *)0x0)) {
        bVar3 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar2,(MethodInfo *)0x0);
        object_00 = TypeInfo__UnityEngine__Events__UnityAction;
        if (bVar3 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)0x0,0,(MethodInfo *)0x0);
          return;
        }
        pUVar8 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)object_00,
                   MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,(MethodInfo *)0x0);
        pUStack9 =
             (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar8,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pUStack9 != (UnityAction *)0x0) {
          pUVar8 = (UnityAction *)0x0;
          if (pUStack9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar8 = pUStack9;
          }
          pUStack10 = TypeInfo__UnityEngine__Events__UnityAction;
          if (pUVar8 != (UnityAction *)0x0) {
            TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar8;
            pUStack10 = (UnityAction__Class *)(UnityAction *)0x0;
            if (pUStack9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUStack10 = (UnityAction__Class *)pUStack9;
            }
            if (pUStack10 != (UnityAction__Class *)0x0) goto code_?;
            pUStack10 = TypeInfo__UnityEngine__Events__UnityAction;
            pUStack10 = (UnityAction__Class *)func_?();
            pUStack9 = extraout_ECX;
          }
          func_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
        pUStack10 = (UnityAction__Class *)0x0;
code_?:
        pUStack9 = (UnityAction *)TypeInfo__AccessoryDataManager->static_fields;
        func_?();
        AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    func_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

