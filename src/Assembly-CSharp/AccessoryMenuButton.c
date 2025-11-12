
/* Void CalculateShouldShowAccessoryPopup() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowAccessoryPopup
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryMenuButton____c__DisplayClass11_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryMenuButton____c__DisplayClass11_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass11_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AccessoryMenuButton____c__DisplayClass11_0);
  if (pOVar1 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  pOVar1[1].monitor = (MonitorData *)this;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  *(undefined1 *)&pOVar1[1].klass = 0;
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar9,pOVar1,
             MethodInfo__AccessoryMenuButton____c__DisplayClass11_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar8,(BaseEventData *)0x0,pEVar9,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(char *)&pOVar1[1].klass == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      pHVar10 = TypeInfo__HighlightManager;
      if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar11 = HighlightManager::HighlightManager_GetHighLights
                          ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar10 >> 8),3),
                           System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                          );
      previewedAccessories =
           (List_1_AccessoryDataClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                 previewedAccessories,
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
      uVar4 = 0;
      if (pLVar11 != (List_1_Highlight_1_System_Object_ *)0x0) {
        lVar12 = 0x20;
        for (; (int)uVar4 < (pLVar11->fields)._size; uVar4 = uVar4 + 1) {
          if ((uint)(pLVar11->fields)._size <= uVar4) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pHVar13 = (pLVar11->fields)._items;
          if (pHVar13 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
          if ((uint)pHVar13->max_length <= uVar4) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar14 = *(longlong *)((longlong)pHVar13->vector + lVar12 + -0x20);
          if ((lVar14 == 0) || (lVar14 = *(longlong *)(lVar14 + 0x18), lVar14 == 0))
          goto code_?;
          this_00 = (AccessoryData *)
                    AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (*(int32_t *)(lVar14 + 0x10),(MethodInfo *)0x0);
          if ((this_00 != (AccessoryData *)0x0) &&
             (((bVar15 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                        AccessoryData_GetShowInShop(this_00,(MethodInfo *)0x0), bVar15 != 0 &&
               ((this_00->fields).owns == 0)) && ((this_00->fields).iAvlb != 0)))) {
            lVar14 = FUN_?(pLVar11);
            if (lVar14 == 0) goto code_?;
            highlightId = *(int32_t *)(lVar14 + 0x10);
            if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
              FUN_?();
            }
            HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
            if (previewedAccessories == (List_1_AccessoryDataClient_ *)0x0)
            goto code_?;
            FUN_?();
            if (2 < (previewedAccessories->fields)._size) goto code_?;
          }
          lVar12 = lVar12 + 8;
        }
        if (previewedAccessories != (List_1_AccessoryDataClient_ *)0x0) {
code_?:
          if ((previewedAccessories->fields)._size < 1) {
            return;
          }
          pOVar1 = (Object *)FUN_?(TypeInfo__AccessoryMenuButton____c__DisplayClass11_1);
          original = (this->fields).accessoryPreviewPopup;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar16 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                              );
          if (pOVar1 != (Object *)0x0) {
            pOVar1[1].klass = pOVar16;
            func_?(pOVar1 + 1);
            pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                     FUN_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (pEVar9,pOVar1,
                       MethodInfo__AccessoryMenuButton____c__DisplayClass11_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar8,(BaseEventData *)0x0,pEVar9,
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
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryMenuButton____c___CalculateShouldShowBundleAd_b__13_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryMenuButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = TypeInfo__HighlightManager;
  if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar2 = HighlightManager::HighlightManager_GetHighLights
                     ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar1 >> 8),1),
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                     );
  uVar3 = 0;
  uVar4 = 0;
  if (pLVar2 != (List_1_Highlight_1_System_Object_ *)0x0) {
    lVar5 = 0x20;
    lVar6 = 0x20;
    cVar7 = cRam_?;
    while( true ) {
      if ((pLVar2->fields)._size <= (int)uVar4) {
        return;
      }
      if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
      pHVar8 = (pLVar2->fields)._items;
      if (pHVar8 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
      if ((uint)pHVar8->max_length <= uVar4) goto code_?;
      lVar9 = *(longlong *)((longlong)pHVar8->vector + lVar6 + -0x20);
      if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x18), lVar9 == 0))
      goto code_?;
      iVar10 = *(int *)(lVar9 + 0x10);
      if (cVar7 == '\0') {
        FUN_?(&TypeInfo__AccessoryDataManager);
        LOCK();
        UNLOCK();
        cVar7 = '\x01';
        cRam_? = '\x01';
      }
      pAVar11 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
      if ((pAVar11 == (AccessoryShopDataClient *)0x0) ||
         (pAVar12 = (pAVar11->fields).accessoryBundle, pAVar12 == (AccessoryBundleClient *)0x0))
      goto code_?;
      if (iVar10 == (pAVar12->fields)._.accessoryBundleID) break;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 8;
    }
    lVar6 = FUN_?();
    if (lVar6 != 0) {
      iVar10 = *(int *)(lVar6 + 0x10);
      if (iVar10 == -1) {
        return;
      }
      pAVar12 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                          ((MethodInfo *)0x0);
      if ((pAVar12 != (AccessoryBundleClient *)0x0) &&
         (pLVar13 = (pAVar12->fields)._.accessoryBundleItems,
         pLVar13 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0)) {
        do {
          if ((pLVar13->fields)._size <= (int)uVar3) {
            return;
          }
          if ((uint)(pLVar13->fields)._size <= uVar3) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pAVar15 = (pLVar13->fields)._items;
          if (pAVar15 == (AccessoryBundleItem__Array *)0x0) break;
          if ((uint)pAVar15->max_length <= uVar3) {
code_?:
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar6 = *(longlong *)((longlong)pAVar15->vector + lVar5 + -0x20);
          if ((lVar6 == 0) ||
             (pAVar16 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                  (*(int32_t *)(lVar6 + 0x14),(MethodInfo *)0x0),
             pAVar16 == (AccessoryDataClient *)0x0)) break;
          if ((pAVar16->fields)._.owns == 0) {
            pGVar17 = (this->fields).redDotNotification;
            if (pGVar17 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar17,1,(MethodInfo *)0x0);
              this_00 = (this->fields).shineEffect;
              if ((this_00 != (AccessoryShinyButton *)0x0) &&
                 (pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0),
                 pGVar17 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar17,1,(MethodInfo *)0x0);
                bVar18 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                                  (FirstTimeEvent__Enum_PM_AccessoryShop,(MethodInfo *)0x0);
                if (bVar18 == 0) {
                  return;
                }
                if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
                  FUN_?();
                }
                HighlightManager::HighlightManager_SetHighlightToSeen(iVar10,(MethodInfo *)0x0);
                pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__AccessoryMenuButton____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__AccessoryMenuButton____c);
                }
                this_01 = TypeInfo__AccessoryMenuButton____c->static_fields->__9__13_0;
                if (this_01 == (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
                  if (*(int *)&(TypeInfo__AccessoryMenuButton____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__AccessoryMenuButton____c);
                  }
                  object = TypeInfo__AccessoryMenuButton____c->static_fields->__9;
                  this_01 = (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                             (Object *)object,
                             MethodInfo__AccessoryMenuButton____c___CalculateShouldShowBundleAd_b__13_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__AccessoryMenuButton____c->static_fields->__9__13_0 = this_01;
                  func_?(&TypeInfo__AccessoryMenuButton____c->static_fields->__9__13_0)
                  ;
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar17,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
                          );
                return;
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + 8;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void CalculateShouldShowHighlightIcon() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_CalculateShouldShowHighlightIcon
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = TypeInfo__HighlightManager;
  if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar2 = HighlightManager::HighlightManager_GetHighLights
                     ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar1 >> 8),2),
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                     );
  value = 0;
  uVar3 = 0;
  if (pLVar2 != (List_1_Highlight_1_System_Object_ *)0x0) {
    lVar4 = 0x20;
    for (; (int)uVar3 < (pLVar2->fields)._size; uVar3 = uVar3 + 1) {
      if ((uint)(pLVar2->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pHVar6 = (pLVar2->fields)._items;
      if (pHVar6 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
      if ((uint)pHVar6->max_length <= uVar3) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pHVar6->vector + lVar4 + -0x20);
      if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x18), lVar7 == 0))
      goto code_?;
      this_00 = (AccessoryData *)
                AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                          (*(int32_t *)(lVar7 + 0x10),(MethodInfo *)0x0);
      if ((this_00 != (AccessoryData *)0x0) &&
         ((bVar8 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                   AccessoryData_GetShowInShop(this_00,(MethodInfo *)0x0), bVar8 != 0 &&
          ((this_00->fields).owns == 0)))) {
        value = value + 1;
      }
      lVar4 = lVar4 + 8;
    }
    obj = (this->fields).shineEffect;
    if (obj != (AccessoryShinyButton *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      pvVar9 = (void *)(*pcRam_?)(pvVar9);
      obj_01 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar9,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
      if (obj_01 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar11 = obj_01[1].klass;
        if (pOVar11 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj_01,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pOVar11);
        obj_00 = (this->fields).redDotNotification;
        if (obj_00 != (GameObject *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (obj_00->fields)._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar9,0 < value);
          pTVar12 = (this->fields).redDotNotificationText;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_13[0]._pointer._value = (void *)0x0;
          aRStack_13[0]._length = 0;
          aRStack_13[0]._12_4_ = 0;
          pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,aRStack_13,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if (pTVar12 != (Text *)0x0) {
            UNRECOVERED_JUMPTABLE = (pTVar12->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar12,pSVar14,(pTVar12->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAccessoryDataReady() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnAccessoryDataReady
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  (this->fields).playerReady = 1;
  AccessoryMenuButton_CalculateShouldShowHighlightIcon(this,(MethodInfo *)0x0);
  AccessoryMenuButton_CalculateShouldShowBundleAd(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryMenuButton____c__DisplayClass11_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryMenuButton____c__DisplayClass11_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryMenuButton____c__DisplayClass11_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar8 = (Object *)FUN_?(TypeInfo__AccessoryMenuButton____c__DisplayClass11_0);
  if (pOVar8 != (Object *)0x0) {
    bVar9 = iRam_? != 0;
    pOVar8[1].monitor = (MonitorData *)this;
    if (bVar9) {
      uVar4 = (uint)((ulonglong)&pOVar8[1].monitor >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    *(undefined1 *)&pOVar8[1].klass = 0;
    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar11,pOVar8,
               MethodInfo__AccessoryMenuButton____c__DisplayClass11_0___CalculateShouldShowAccessoryPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar10,(BaseEventData *)0x0,pEVar11,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&pOVar8[1].klass == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) {
        pHVar12 = TypeInfo__HighlightManager;
        if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar13 = HighlightManager::HighlightManager_GetHighLights
                            ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar12 >> 8),3),
                             System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                            );
        previewedAccessories =
             (List_1_AccessoryDataClient_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   previewedAccessories,
                   MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
        uVar4 = 0;
        if (pLVar13 != (List_1_Highlight_1_System_Object_ *)0x0) {
          lVar14 = 0x20;
          for (; (int)uVar4 < (pLVar13->fields)._size; uVar4 = uVar4 + 1) {
            if ((uint)(pLVar13->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pHVar15 = (pLVar13->fields)._items;
            if (pHVar15 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
            if ((uint)pHVar15->max_length <= uVar4) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar16 = *(longlong *)((longlong)pHVar15->vector + lVar14 + -0x20);
            if ((lVar16 == 0) || (lVar16 = *(longlong *)(lVar16 + 0x18), lVar16 == 0))
            goto code_?;
            this_01 = (AccessoryData *)
                      AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                                (*(int32_t *)(lVar16 + 0x10),(MethodInfo *)0x0);
            if ((this_01 != (AccessoryData *)0x0) &&
               (((bVar17 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                          AccessoryData_GetShowInShop(this_01,(MethodInfo *)0x0), bVar17 != 0 &&
                 ((this_01->fields).owns == 0)) && ((this_01->fields).iAvlb != 0)))) {
              lVar16 = FUN_?(pLVar13);
              if (lVar16 == 0) goto code_?;
              highlightId = *(int32_t *)(lVar16 + 0x10);
              if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
              if (previewedAccessories == (List_1_AccessoryDataClient_ *)0x0)
              goto code_?;
              FUN_?();
              if (2 < (previewedAccessories->fields)._size) goto code_?;
            }
            lVar14 = lVar14 + 8;
          }
          if (previewedAccessories != (List_1_AccessoryDataClient_ *)0x0) {
code_?:
            if ((previewedAccessories->fields)._size < 1) {
              return;
            }
            pOVar8 = (Object *)FUN_?(TypeInfo__AccessoryMenuButton____c__DisplayClass11_1);
            original = (this->fields).accessoryPreviewPopup;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pOVar18 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 AccessoryPreviewPopup_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewPopup>_AccessoryPreviewPopup_
                                );
            if (pOVar8 != (Object *)0x0) {
              pOVar8[1].klass = pOVar18;
              func_?(pOVar8 + 1);
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (pEVar11,pOVar8,
                         MethodInfo__AccessoryMenuButton____c__DisplayClass11_1___CalculateShouldShowAccessoryPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar10,(BaseEventData *)0x0,pEVar11,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              if (pOVar8[1].klass != (Object__Class *)0x0) {
                AccessoryPreviewPopup::AccessoryPreviewPopup_Initialize
                          ((AccessoryPreviewPopup *)pOVar8[1].klass,previewedAccessories,
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
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnEnable
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if ((this->fields).playerReady != 0) {
    pGVar1 = (this->fields).redDotNotification;
    if (pGVar1 == (GameObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__HighlightManager);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pHVar4 = TypeInfo__HighlightManager;
      if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar5 = HighlightManager::HighlightManager_GetHighLights
                         ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar4 >> 8),2),
                          System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                         );
      value = 0;
      uVar6 = 0;
      if (pLVar5 != (List_1_Highlight_1_System_Object_ *)0x0) {
        lVar7 = 0x20;
        for (; (int)uVar6 < (pLVar5->fields)._size; uVar6 = uVar6 + 1) {
          if ((uint)(pLVar5->fields)._size <= uVar6) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pHVar8 = (pLVar5->fields)._items;
          if (pHVar8 == (Highlight_1_System_Object___Array *)0x0) goto code_?;
          if ((uint)pHVar8->max_length <= uVar6) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar9 = *(longlong *)((longlong)pHVar8->vector + lVar7 + -0x20);
          if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x18), lVar9 == 0))
          goto code_?;
          this_00 = (AccessoryData *)
                    AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (*(int32_t *)(lVar9 + 0x10),(MethodInfo *)0x0);
          if ((this_00 != (AccessoryData *)0x0) &&
             ((bVar3 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                       AccessoryData_GetShowInShop(this_00,(MethodInfo *)0x0), bVar3 != 0 &&
              ((this_00->fields).owns == 0)))) {
            value = value + 1;
          }
          lVar7 = lVar7 + 8;
        }
        obj = (this->fields).shineEffect;
        if (obj != (AccessoryShinyButton *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          pvVar10 = (void *)(*pcRam_?)(pvVar10);
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar10,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
          if (obj_00 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar12 = obj_00[1].klass;
            if (pOVar12 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pOVar12);
            pGVar1 = (this->fields).redDotNotification;
            if (pGVar1 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar10 = (pGVar1->fields)._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar10,0 < value);
              pTVar13 = (this->fields).redDotNotificationText;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              auStack_14 = (undefined1  [8])0x0;
              puStack_15 = (undefined *)0x0;
              pSVar16 = mscorlib.dll::System::Number::Number_FormatInt32
                                  (value,(ReadOnlySpan_1_Char_ *)auStack_14,(IFormatProvider *)0x0,
                                   (MethodInfo *)0x0);
              if (pTVar13 != (Text *)0x0) {
                UNRECOVERED_JUMPTABLE = (pTVar13->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)
                          (pTVar13,pSVar16,(pTVar13->klass->vtable).set_text.method,
                           UNRECOVERED_JUMPTABLE);
                return;
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void OnJoinChanged(MVJoinState) */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_OnJoinChanged
               (AccessoryMenuButton *this,MVJoinState__Enum joinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (joinState == MVJoinState__Enum_Playing) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 == (MVGameControllerBase *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (pMVar1->fields).onJoinStateChanged;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<MVJoinState>;
    pAVar3 = (Action_1_MVJoinState_ *)0x0;
    if (pDVar4 != (Delegate *)0x0) {
      pAVar3 = (Action_1_MVJoinState_ *)FUN_?(pDVar4);
      if (pAVar3 == (Action_1_MVJoinState_ *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar3,(MethodInfo *)0x0);
    AccessoryMenuButton_PlayerReady(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void PlayerReady() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_PlayerReady
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pMVar3->fields)._._ProfileID_k__BackingField != 0) {
    pUVar5 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
               (MethodInfo *)0x0);
    pUVar5 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar5 == (UnityAction *)0x0) {
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    }
    else {
      pUVar6 = (UnityAction *)0x0;
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar6 = pUVar5;
      }
      if (pUVar6 == (UnityAction *)0x0) {
        FUN_?(pUVar5,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar6;
      pUVar6 = (UnityAction *)0x0;
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar6 = pUVar5;
      }
      if (pUVar6 == (UnityAction *)0x0) {
        FUN_?(pUVar5,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AccessoryDataManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar11 = TypeInfo__AccessoryDataManager->static_fields;
    if (pAVar11->accessoriesReady == 0) {
      if (pAVar11->accessoriesRequested == 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                  (this_01,(MethodInfo *)0x0);
        TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
        return;
      }
    }
    else if (pAVar11->readyCallback != (UnityAction *)0x0) {
      pUVar5 = pAVar11->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar5->fields)._._.invoke_impl)
                ((pUVar5->fields)._._.method_code,(pUVar5->fields)._._.method);
      return;
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (AccessoryMenuButton *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar12 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar12,0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryMenuButton::AccessoryMenuButton_Start
               (AccessoryMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVJoinState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    if ((pMVar4->fields)._.playerState == 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AccessoryDataManager);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
          (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
          pMVar4 == (MVLocalPlayer *)0x0)))) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pMVar4->fields)._._ProfileID_k__BackingField != 0) {
        pUVar6 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__AccessoryMenuButton__OnAccessoryDataReady__,
                   (MethodInfo *)0x0);
        pUVar6 = (UnityAction *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar6,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pUVar6 == (UnityAction *)0x0) {
          TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
        }
        else {
          pUVar7 = (UnityAction *)0x0;
          if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar7 = pUVar6;
          }
          if (pUVar7 == (UnityAction *)0x0) {
            FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar7;
          pUVar7 = (UnityAction *)0x0;
          if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar7 = pUVar6;
          }
          if (pUVar7 == (UnityAction *)0x0) {
            FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__AccessoryDataManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pAVar12 = TypeInfo__AccessoryDataManager->static_fields;
        if (pAVar12->accessoriesReady == 0) {
          if (pAVar12->accessoriesRequested == 0) {
            this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                      (this_00,(MethodInfo *)0x0);
            TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
            return;
          }
        }
        else if (pAVar12->readyCallback != (UnityAction *)0x0) {
          pUVar6 = pAVar12->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pUVar6->fields)._._.invoke_impl)
                    ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
          return;
        }
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (AccessoryMenuButton *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar13 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar13,0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pAVar15 = (pMVar1->fields).onJoinStateChanged;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<MVJoinState>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__AccessoryMenuButton__OnJoinChanged_MVJoinState_,
                 (MethodInfo *)0x0);
      pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar15,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar17 = TypeInfo__System__Action<MVJoinState>;
      pAVar15 = (Action_1_MVJoinState_ *)0x0;
      if ((pDVar16 != (Delegate *)0x0) &&
         (pAVar15 = (Action_1_MVJoinState_ *)
                    FUN_?(pDVar16,TypeInfo__System__Action<MVJoinState>),
         pAVar15 == (Action_1_MVJoinState_ *)0x0)) {
        FUN_?(pDVar16,pAVar17);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        bVar18 = iRam_? != 0;
        (pMVar1->fields).onJoinStateChanged = pAVar15;
        if (bVar18) {
          uVar8 = (uint)((ulonglong)&(pMVar1->fields).onJoinStateChanged >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar1 != (MVGameControllerBase *)0x0) {
          pAVar15 = (pMVar1->fields).onJoinStateChanged;
          if (pAVar15 == (Action_1_MVJoinState_ *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar15->fields)._._.invoke_impl)
                    ((pAVar15->fields)._._.method_code,
                     (TypeInfo__MVGameControllerBase->static_fields->instance->fields)._joinState,
                     (pAVar15->fields)._._.method);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

