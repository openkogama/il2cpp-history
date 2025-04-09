
/* Void AvatarAccessoryCreateHandler(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_AvatarAccessoryCreateHandler
               (AccessoryView *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessoryCategory);
    func_?(&MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__);
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    func_?(&
                    AccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewer>_AccessoryPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_AvatarAccessory_);
    func_?(&StringLiteral_Image_unity3d);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__Images_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar3 = (this->fields).accessoryPreviewerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pAVar3 = (AccessoryPreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pAVar3,
                        AccessoryPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AccessoryPreviewer>_AccessoryPreviewer_
                       );
    (this->fields).previewer = pAVar3;
    func_?(&(this->fields).previewer,pAVar3);
    pAVar3 = (this->fields).previewer;
    if (pAVar3 != (AccessoryPreviewer *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pAVar3,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0);
        pAVar3 = (this->fields).previewer;
        pEVar4 = (Enum__Class *)0x0;
        pMVar5 = (MonitorData *)0x40333333;
        if (avatarAccessory != (AvatarAccessory *)0x0) {
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)avatarAccessory,(MethodInfo *)0x0);
          if (pAVar3 != (AccessoryPreviewer *)0x0) {
            cameraPosOffset.y = (float)pMVar5;
            cameraPosOffset.x = (float)pEVar4;
            cameraPosOffset.z = -3.5;
            AccessoryPreviewer::AccessoryPreviewer_Initialize
                      (pAVar3,0x200,0x200,LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
                       CameraClearFlags__Enum_Color,cameraPosOffset,(Vector3)ZEXT812(0xc0400000),
                       pGVar6,(this->fields).rootTransform,(MethodInfo *)0x0);
            if ((this->fields).OnFinished != (Action *)0x0) {
              (*(((this->fields).OnFinished)->fields)._._.invoke_impl)();
            }
            (this->fields).OnFinished = (Action *)0x0;
            func_?();
            if ((this->fields).accessoryDataClient != (AccessoryDataClient *)0x0) {
              pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral_AvatarAccessory_,pSVar7,StringLiteral__Images_,
                                  (MethodInfo *)0x0);
              pAVar8 = (this->fields).accessoryDataClient;
              if (pAVar8 != (AccessoryDataClient *)0x0) {
                pSVar9 = (pAVar8->fields)._.url;
                pSVar10 = (String__Array *)func_?(TypeInfo__System__String,1);
                pSVar11 = ::StringLiteral__;
                if (pSVar10 != (String__Array *)0x0) {
                  if (pSVar10->max_length != 0) {
                    pSVar10->vector[0] = ::StringLiteral__;
                    func_?(pSVar10->vector,pSVar11);
                    if (pSVar9 == (String *)0x0) goto code_?;
                    pSVar10 = mscorlib.dll::System::String::String_Split_4
                                       (pSVar9,pSVar10,StringSplitOptions__Enum_None,
                                        (MethodInfo *)0x0);
                    if (pSVar10 == (String__Array *)0x0) goto code_?;
                    if (pSVar10->max_length - 1 < pSVar10->max_length) {
                      pSVar9 = pSVar10->vector[pSVar10->max_length - 1];
                      pSVar10 = (String__Array *)func_?(TypeInfo__System__String,1);
                      pSVar11 = ::StringLiteral__;
                      if (pSVar10 == (String__Array *)0x0) goto code_?;
                      if (pSVar10->max_length != 0) {
                        pSVar10->vector[0] = ::StringLiteral__;
                        func_?(pSVar10->vector,pSVar11);
                        if (pSVar9 == (String *)0x0) goto code_?;
                        pSVar10 = mscorlib.dll::System::String::String_Split_4
                                           (pSVar9,pSVar10,StringSplitOptions__Enum_None,
                                            (MethodInfo *)0x0);
                        if (pSVar10 == (String__Array *)0x0) goto code_?;
                        if (pSVar10->max_length != 0) {
                          pSVar9 = mscorlib.dll::System::String::String_Concat_3
                                              (pSVar10->vector[0],StringLiteral_Image_unity3d,
                                               (MethodInfo *)0x0);
                          if (pSVar9 != (String *)0x0) {
                            pSVar9 = mscorlib.dll::System::String::String_ToLower
                                                (pSVar9,(MethodInfo *)0x0);
                            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                               (pSVar7,pSVar9,(MethodInfo *)0x0);
                            pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_GetComponentsInChildren
                                                ((Component *)avatarAccessory,
                                                 SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                                );
                            uVar13 = 0;
                            if (pOVar12 != (Object__Array *)0x0) {
                              ppOVar14 = pOVar12->vector;
                              for (; (int)uVar13 < (int)pOVar12->max_length; uVar13 = uVar13 + 1) {
                                if (pOVar12->max_length <= uVar13) goto code_?;
                                if ((SkinnedMeshOptimizer *)*ppOVar14 == (SkinnedMeshOptimizer *)0x0
                                   ) goto code_?;
                                SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                                          ((SkinnedMeshOptimizer *)*ppOVar14,(MethodInfo *)0x0);
                                ppOVar14 = ppOVar14 + 1;
                              }
                              this_00 = (this->fields).previewImageStreamingManager;
                              this_01 = (NavMesh_OnNavMeshPreUpdate *)
                                        func_?(TypeInfo__UnityEngine__Events__UnityAction);
                              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate
                              ::NavMesh_OnNavMeshPreUpdate__ctor
                                        (this_01,(Object *)this,
                                         MethodInfo__AccessoryView__OnPreviewImageFinishedDownloading__
                                         ,(MethodInfo *)0x0);
                              if (this_00 != (StreamedSpriteToImageManual *)0x0) {
                                StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                                          (this_00,pSVar7,(UnityAction *)this_01,(MethodInfo *)0x0);
                                (this->fields).previewImageUrl = pSVar7;
                                func_?(&(this->fields).previewImageUrl,pSVar7);
                                return;
                              }
                            }
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
code_?:
                  func_?();
                }
              }
            }
          }
        }
      }
    }
  }
  else if (avatarAccessory != (AvatarAccessory *)0x0) {
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)avatarAccessory,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar6,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void BackToShop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_BackToShop
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryView____c___BackToShop_b__50_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AccessoryView____c___BackToShop_b__50_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  (this->fields).rootTransform = (Transform *)0x0;
  func_?();
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  pAVar4 = (this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar4 = (this->fields).previewer;
    if (pAVar4 == (AccessoryPreviewer *)0x0) goto code_?;
    AccessoryPreviewer::AccessoryPreviewer_Destroy(pAVar4,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).tabMenu;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    x = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                  (this_00,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      AccessoryView_DestroyFeaturedTab(this,(MethodInfo *)0x0);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AccessoryView____c->static_fields->__9__50_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar5 = TypeInfo__AccessoryView____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar5,
                 MethodInfo__AccessoryView____c___BackToShop_b__50_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__50_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__AccessoryView____c->static_fields->__9__50_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar5 = TypeInfo__AccessoryView____c->static_fields->__9;
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pAVar5,
                 MethodInfo__AccessoryView____c___BackToShop_b__50_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__50_1 = callbackFunction_00;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
              );
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean CurrentlyViewingAccessory(AccessoryDataClient) */

bool Assembly-CSharp.dll::AccessoryView::AccessoryView_CurrentlyViewingAccessory
               (AccessoryView *this,AccessoryDataClient *data,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).accessoryDataClient == (AccessoryDataClient *)0x0) {
    return 0;
  }
  if (data != (AccessoryDataClient *)0x0) {
    return (((this->fields).accessoryDataClient)->fields)._.aMDID == (data->fields)._.aMDID;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Destroy
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  pTVar1 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  (this->fields).rootTransform = (Transform *)0x0;
  func_?();
  pAVar4 = (this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar4 = (this->fields).previewer;
    if (pAVar4 == (AccessoryPreviewer *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pAVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  return;
}


/* Void DestroyFeaturedTab() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_DestroyFeaturedTab
               (AccessoryView *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap
                         ((MethodInfo *)0x0);
  bVar4 = false;
  if (this_01 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd0,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                         );
      uStack_1 = 1;
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               pDVar5->_currentValue;
      while( true ) {
        this_03 = pLVar6;
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                          );
        if (bVar7 == 0) break;
        index = 0;
        pLVar6 = this_03;
        if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        for (; index < (this_03->fields)._size; index = index + 1) {
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_03,index,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
          if (*(char *)((int)RVar8 + 0x30) == '\0') {
            pLVar6 = this_03;
            in_stack_9 =
                 MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_;
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_03,index,
                               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                              );
            if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar8 + 0x12) != '\0') {
              bVar4 = true;
            }
          }
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                 ,in_stack_9);
      uStack_1 = 0xffffffff;
      if (!bVar4) {
        this_00 = (this->fields).tabMenu;
        if (this_00 == (TabMenuAccessoryShop *)0x0) goto code_?;
        TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                  (this_00,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void EquipPopupResultCallback() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_EquipPopupResultCallback
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryDataClient == (AccessoryDataClient *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryView____c);
    }
    callbackFunction = TypeInfo__AccessoryView____c->static_fields->__9__52_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
      if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AccessoryView____c);
      }
      pAVar2 = TypeInfo__AccessoryView____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar2,
                 MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__52_0 = callbackFunction;
      func_?(&TypeInfo__AccessoryView____c->static_fields->__9__52_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__AccessoryView____c->static_fields->__9__52_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
      if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar2 = TypeInfo__AccessoryView____c->static_fields->__9;
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pAVar2,
                 MethodInfo__AccessoryView____c___EquipPopupResultCallback_b__52_1_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryView____c->static_fields->__9__52_1 = callbackFunction_00;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
              );
  }
  return;
}


/* Void HandleNotOwnedUI() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandleNotOwnedUI
               (AccessoryView *this,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pAVar2 = (this->fields).accessoryDataClient;
      if (pAVar2 != (AccessoryDataClient *)0x0) {
        if ((pMVar1->fields)._.level < (pAVar2->fields)._.lvl) {
          AccessoryView_SetShowPrices(this,0,(MethodInfo *)0x0);
        }
        else {
          AccessoryView_HandlePrices(this,pAVar2,(MethodInfo *)0x0);
        }
        pAVar2 = (this->fields).accessoryDataClient;
        if ((pAVar2 != (AccessoryDataClient *)0x0) &&
           (pAVar3 = (this->fields).timeLimitDisplayer, pAVar3 != (AccessoryTimeLimitDisplayer *)0x0
           )) {
          (pAVar3->fields).accessoryTimeLimitData = (pAVar2->fields)._.time;
          func_?();
          pAVar3 = (this->fields).timeLimitDisplayer;
          if (pAVar3 != (AccessoryTimeLimitDisplayer *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pAVar3,(MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if (pAVar2 != (AccessoryDataClient *)0x0) {
              if ((pAVar2->fields)._.owns == 0) {
                this_00 = (pAVar2->fields)._.time;
                if (this_00 == (AccessoryTimelimit *)0x0) goto code_?;
                value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                        AccessoryTimelimit_get_IsTimeLimited(this_00,(MethodInfo *)0x0);
              }
              else {
                value = 0;
              }
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,value,(MethodInfo *)0x0);
                pAVar2 = (this->fields).accessoryDataClient;
                if ((pAVar2 != (AccessoryDataClient *)0x0) &&
                   (pGVar4 = (this->fields).newAccessoryImage, pGVar4 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,(pAVar2->fields)._.iNew,(MethodInfo *)0x0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePreviewing(MVBody) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePreviewing
               (AccessoryView *this,MVBody *avatarBody,MethodInfo *method)

{
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody,avatarBody);
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) && (avatarBody != (MVBody *)0x0)) {
    bVar2 = MVBody::MVBody_IsAccessoryEquipped(avatarBody,(pAVar1->fields)._.sAID,(MethodInfo *)0x0)
    ;
    pAVar3 = (this->fields).sizeSlider;
    (this->fields).isPreviewing = bVar2 ^ 1;
    if (pAVar3 != (AccessorySizeSlider *)0x0) {
      (pAVar3->fields).isInPreview = bVar2 ^ 1;
      pAVar4 = (this->fields).offsetSlider;
      if (pAVar4 != (AccessoryOffsetSlider *)0x0) {
        (pAVar4->fields).isInPreview = (this->fields).isPreviewing;
        pAVar1 = (this->fields).accessoryDataClient;
        if (pAVar1 != (AccessoryDataClient *)0x0) {
          bVar2 = MVBody::MVBody_IsAccessoryEquipped
                            (avatarBody,(pAVar1->fields)._.sAID,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            MVBody::MVBody_PreviewAccessory
                      (avatarBody,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePrices(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HandlePrices
               (AccessoryView *this,AccessoryDataClient *streamingAssetInfo,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_FREE);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  dStack_2 = (double)(ulonglong)in_stack_3;
  this_00 = (this->fields).buttonAnimation;
  if (((this_00 != (AccessoryShinyButton *)0x0) &&
      (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0), streamingAssetInfo != (AccessoryDataClient *)0x0)) {
    IVar5.m_value = (streamingAssetInfo->fields)._.dsc;
    pTVar6 = (this->fields).originalPriceText;
    if ((pTVar6 != (Text *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar6,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      dStack_2 = (double)((ulonglong)dStack_2 & 0xffffffff00000000);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0 < IVar5.m_value,(MethodInfo *)0x0);
      pTVar6 = (this->fields).goldSavedText;
      if (pTVar6 != (Text *)0x0) {
        dStack_2 = (double)CONCAT44(&UNK_?,in_stack_3);
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar6,(MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          IVar7.m_value = (int32_t)(0 < IVar5.m_value);
          IVar8.m_value = (int32_t)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0 < IVar5.m_value,(MethodInfo *)0x0);
          pGVar4 = (this->fields).discountTag;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0 < IVar7.m_value,(MethodInfo *)0x0);
            pTVar6 = (this->fields).claimText;
            if ((pTVar6 != (Text *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              this_01 = (this->fields).purchaseButton;
              if (this_01 != (Button *)0x0) {
                pIVar9 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   ((Selectable *)this_01,(MethodInfo *)0x0);
                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pCVar10 = Styles::Styles_GetColor
                                   ((Color *)&stack0xffffffd8,ColorStyle__Enum_ButtonSuccess,
                                    (MethodInfo *)0x0);
                if (pIVar9 != (Image *)0x0) {
                  (*(code *)(pIVar9->klass->vtable).set_color.method)
                            (pIVar9,pCVar10->r,pCVar10->g,pCVar10->b,pCVar10->a);
                  pGVar4 = (this->fields).lockIcon;
                  if (pGVar4 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,0,(MethodInfo *)0x0);
                    if (IVar7.m_value < 1) {
                      pTVar6 = (this->fields).priceTextWithoutDiscount;
                      if ((pTVar6 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,1,(MethodInfo *)0x0);
                      pTVar6 = (this->fields).priceText;
                      if ((pTVar6 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 0;
                    }
                    else {
                      pTVar6 = (this->fields).discountTagText;
                      pSVar11 = StringLiteral_FREE;
                      if (IVar7.m_value < 100) {
                        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                           (::StringLiteral__,pSVar11,::StringLiteral__,
                                            (MethodInfo *)0x0);
                      }
                      if (pTVar6 == (Text *)0x0) goto code_?;
                      (*(code *)(pTVar6->klass->vtable).set_text.method)
                                (pTVar6,pSVar11,
                                 (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
                      fVar12 = (float)IVar7.m_value / _UNK_?;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      dStack_2 = (double)((float)IVar8.m_value * fVar12);
                      fVar13 = (float10)func_?(dStack_2);
                      pTVar6 = (this->fields).originalPriceText;
                      in_stack_3 = SUB84((double)fVar13,0);
                      dStack_2 = (double)CONCAT44((int)fVar13,in_stack_3);
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                         ((Int32 *)&stack0xfffffff0,StringLiteral_N0,
                                          (MethodInfo *)0x0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar6 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar6->klass->vtable).set_text.method)(pTVar6,pSVar11);
                      pTVar6 = (this->fields).goldSavedText;
                      if ((pTVar6 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,1,(MethodInfo *)0x0);
                      pTVar6 = (this->fields).goldSavedText;
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                         (&IStack_14,StringLiteral_N0,(MethodInfo *)0x0);
                      if ((pSVar11 == (String *)0x0) ||
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar6 == (Text *)0x0))
                      goto code_?;
                      (*(code *)(pTVar6->klass->vtable).set_text.method)(pTVar6,pSVar11);
                      pTVar6 = (this->fields).priceTextWithoutDiscount;
                      if ((pTVar6 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      pTVar6 = (this->fields).priceText;
                      if ((pTVar6 == (Text *)0x0) ||
                         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                         pGVar4 == (GameObject *)0x0)) goto code_?;
                      this._0_1_ = 1;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,(bool)this,(MethodInfo *)0x0);
                    pTVar6 = (pAVar1->fields).priceText;
                    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                       ((Int32 *)&stack0xfffffff4,StringLiteral_N0,(MethodInfo *)0x0
                                       );
                    if ((pSVar11 != (String *)0x0) &&
                       (mscorlib.dll::System::String::String_Replace_1
                                  (pSVar11,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
                       pTVar6 != (Text *)0x0)) {
                      IVar5.m_value =
                           (int32_t)(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.
                                    methodPtr;
                      dStack_2 = (double)CONCAT44(pTVar6,&UNK_?);
                      (*(code *)(pTVar6->klass->vtable).set_text.method)();
                      pTVar6 = (pAVar1->fields).priceTextWithoutDiscount;
                      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString_1
                                         ((Int32 *)&stack0xfffffff4,StringLiteral_N0,
                                          (MethodInfo *)0x0);
                      if ((pSVar11 != (String *)0x0) &&
                         (pSVar11 = mscorlib.dll::System::String::String_Replace_1
                                             (pSVar11,::StringLiteral__,::StringLiteral__,
                                              (MethodInfo *)0x0), pTVar6 != (Text *)0x0)) {
                        (*(code *)(pTVar6->klass->vtable).set_text.method)(pTVar6,pSVar11);
                        this_02 = (pAVar1->fields).levelRequirementPurchaseButton;
                        if ((this_02 != (RawImage *)0x0) &&
                           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject
                                               ((Component *)this_02,(MethodInfo *)0x0),
                           pGVar4 != (GameObject *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar4,0,(MethodInfo *)0x0);
                          if ((Il2CppMethodPointer)IVar5.m_value != (Il2CppMethodPointer)0x0) {
                            return;
                          }
                          pTVar6 = (pAVar1->fields).goldSavedText;
                          if ((pTVar6 != (Text *)0x0) &&
                             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_gameObject
                                                 ((Component *)pTVar6,(MethodInfo *)0x0),
                             pGVar4 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                            pTVar6 = (pAVar1->fields).priceTextWithoutDiscount;
                            if ((pTVar6 != (Text *)0x0) &&
                               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar6,(MethodInfo *)0x0),
                               pGVar4 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                              pTVar6 = (pAVar1->fields).priceText;
                              if ((pTVar6 != (Text *)0x0) &&
                                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_get_gameObject
                                                     ((Component *)pTVar6,(MethodInfo *)0x0),
                                 pGVar4 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                pGVar4 = (pAVar1->fields).discountTag;
                                if (pGVar4 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                  pTVar6 = (pAVar1->fields).originalPriceText;
                                  if ((pTVar6 != (Text *)0x0) &&
                                     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                               Component_get_gameObject
                                                         ((Component *)pTVar6,(MethodInfo *)0x0),
                                     pGVar4 != (GameObject *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar4,0,(MethodInfo *)0x0);
                                    pTVar6 = (pAVar1->fields).claimText;
                                    if ((pTVar6 != (Text *)0x0) &&
                                       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                 ::Component_get_gameObject
                                                           ((Component *)pTVar6,(MethodInfo *)0x0),
                                       pGVar4 != (GameObject *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar4,1,(MethodInfo *)0x0);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HideNotLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_HideNotLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  this_00 = (this->fields).timeLimitDisplayer;
  if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).newAccessoryImage;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).discountTag;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Initialize
               (AccessoryView *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryView__AvatarAccessoryCreateHandler_AvatarAccessory_);
    func_?(&
                    MethodInfo__AccessoryView___Initialize_b__39_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__System__Action<AvatarAccessory>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Accessory_Preview);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar3,(MethodInfo *)0x0)
  ;
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar3,(MethodInfo *)0x0);
    (this->fields).rootTransform = pTVar1;
    func_?(&(this->fields).rootTransform);
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 != (Transform *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)pGVar3,StringLiteral_Accessory_Preview,(MethodInfo *)0x0);
        (this->fields).accessoryDataClient = accessoryData;
        func_?(&(this->fields).accessoryDataClient,accessoryData);
        MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar4 == MVGameMode__Enum_CharacterEditor) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                     MethodInfo__AccessoryView___Initialize_b__39_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                    );
        }
        else {
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
          this_05 = MVLocalPlayer::MVLocalPlayer_get_Body(pMVar5,(MethodInfo *)0x0);
          (this->fields).avatarBody = this_05;
          func_?(&(this->fields).avatarBody);
          pAVar6 = (this->fields).accessoryDataClient;
          if ((pAVar6 == (AccessoryDataClient *)0x0) || (this_05 == (MVBody *)0x0))
          goto code_?;
          bVar2 = MVBody::MVBody_IsAccessoryEquipped
                            (this_05,(pAVar6->fields)._.sAID,(MethodInfo *)0x0);
          pAVar7 = (this->fields).sizeSlider;
          (this->fields).isPreviewing = bVar2 ^ 1;
          if (pAVar7 == (AccessorySizeSlider *)0x0) goto code_?;
          (pAVar7->fields).isInPreview = bVar2 ^ 1;
          pAVar8 = (this->fields).offsetSlider;
          if (pAVar8 == (AccessoryOffsetSlider *)0x0) goto code_?;
          (pAVar8->fields).isInPreview = (this->fields).isPreviewing;
          pAVar6 = (this->fields).accessoryDataClient;
          if (pAVar6 == (AccessoryDataClient *)0x0) goto code_?;
          bVar2 = MVBody::MVBody_IsAccessoryEquipped
                            (this_05,(pAVar6->fields)._.sAID,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            MVBody::MVBody_PreviewAccessory
                      (this_05,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          }
        }
        pTVar9 = (this->fields).goldSavedText;
        if (pTVar9 != (Text *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar9,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            pTVar9 = (this->fields).nameText;
            if ((accessoryData != (AccessoryDataClient *)0x0) &&
               (pSVar10 = (accessoryData->fields)._.name, pSVar10 != (String *)0x0)) {
              mscorlib.dll::System::String::String_ToUpper(pSVar10,(MethodInfo *)0x0);
              if (pTVar9 != (Text *)0x0) {
                (*(code *)(pTVar9->klass->vtable).set_text.method)();
                pAVar8 = (this->fields).offsetSlider;
                if (pAVar8 != (AccessoryOffsetSlider *)0x0) {
                  AccessoryOffsetSlider::AccessoryOffsetSlider_Initialize
                            (pAVar8,(accessoryData->fields)._.slot,(accessoryData->fields)._.sAID,
                             (MethodInfo *)0x0);
                  pAVar7 = (this->fields).sizeSlider;
                  if (pAVar7 != (AccessorySizeSlider *)0x0) {
                    AccessorySizeSlider::AccessorySizeSlider_Initialize
                              (pAVar7,(accessoryData->fields)._.slot,(accessoryData->fields)._.sAID,
                               (MethodInfo *)0x0);
                    this_00 = (this->fields).accessoryItemBackground;
                    if (this_00 != (AccessoryItemBackground *)0x0) {
                      AccessoryItemBackground::AccessoryItemBackground_Initialize
                                (this_00,accessoryData,(MethodInfo *)0x0);
                      AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                      pBVar11 = (this->fields).purchaseButton;
                      if (pBVar11 != (Button *)0x0) {
                        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pBVar11,(MethodInfo *)0x0);
                        if (pGVar3 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar3,(accessoryData->fields)._.owns == 0,(MethodInfo *)0x0);
                          this_01 = (this->fields).levelRequirementPurchaseButton;
                          if (this_01 != (RawImage *)0x0) {
                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)this_01,(MethodInfo *)0x0);
                            if (pGVar3 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                              pAVar6 = (this->fields).accessoryDataClient;
                              if (pAVar6 != (AccessoryDataClient *)0x0) {
                                if ((pAVar6->fields)._.owns == 0) {
                                  AccessoryView_SetShowNotOwnedUI(this,1,(MethodInfo *)0x0);
                                  this_06 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                      ((MethodInfo *)0x0);
                                  if (this_06 == (MVNetworkGame *)0x0) goto code_?;
                                  pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                      (this_06,(MethodInfo *)0x0);
                                  if ((pMVar5 == (MVLocalPlayer *)0x0) ||
                                     (pAVar6 = (this->fields).accessoryDataClient,
                                     pAVar6 == (AccessoryDataClient *)0x0)) goto code_?;
                                  if ((pMVar5->fields)._.level < (pAVar6->fields)._.lvl) {
                                    AccessoryView_SetShowPrices(this,0,(MethodInfo *)0x0);
                                  }
                                  else {
                                    AccessoryView_HandlePrices(this,pAVar6,(MethodInfo *)0x0);
                                  }
                                  pAVar6 = (this->fields).accessoryDataClient;
                                  if ((pAVar6 == (AccessoryDataClient *)0x0) ||
                                     (pAVar12 = (this->fields).timeLimitDisplayer,
                                     pAVar12 == (AccessoryTimeLimitDisplayer *)0x0))
                                  goto code_?;
                                  (pAVar12->fields).accessoryTimeLimitData = (pAVar6->fields)._.time;
                                  func_?();
                                  pAVar12 = (this->fields).timeLimitDisplayer;
                                  if (pAVar12 == (AccessoryTimeLimitDisplayer *)0x0)
                                  goto code_?;
                                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pAVar12,(MethodInfo *)0x0);
                                  pAVar6 = (this->fields).accessoryDataClient;
                                  if (pAVar6 == (AccessoryDataClient *)0x0) goto code_?;
                                  if ((pAVar6->fields)._.owns == 0) {
                                    this_02 = (pAVar6->fields)._.time;
                                    if (this_02 == (AccessoryTimelimit *)0x0) goto code_?;
                                    this._0_1_ = MVWorldObject.dll::MV::WorldObject::Accessories::
                                                 AccessoryTimelimit::
                                                 AccessoryTimelimit_get_IsTimeLimited
                                                           (this_02,(MethodInfo *)0x0);
                                  }
                                  else {
                                    this._0_1_ = 0;
                                  }
                                  if (pGVar3 == (GameObject *)0x0) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar3,(bool)this,(MethodInfo *)0x0);
                                  pAVar6 = (object->fields).accessoryDataClient;
                                  if ((pAVar6 == (AccessoryDataClient *)0x0) ||
                                     (pGVar3 = (object->fields).newAccessoryImage,
                                     pGVar3 == (GameObject *)0x0)) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive
                                            (pGVar3,(pAVar6->fields)._.iNew,(MethodInfo *)0x0);
                                }
                                else {
                                  AccessoryView_SetShowNotOwnedUI(this,0,(MethodInfo *)0x0);
                                }
                                pAVar12 = (object->fields).timeLimitDisplayer;
                                if (pAVar12 != (AccessoryTimeLimitDisplayer *)0x0) {
                                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pAVar12,(MethodInfo *)0x0);
                                  if (pGVar3 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                    pGVar3 = (object->fields).newAccessoryImage;
                                    if (pGVar3 != (GameObject *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                      pGVar3 = (object->fields).discountTag;
                                      if (pGVar3 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                        pGVar3 = (object->fields).loadingWheel;
                                        if (pGVar3 != (GameObject *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                                          pGVar3 = (object->fields).emptyFrame;
                                          if (pGVar3 != (GameObject *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                                            pSVar10 = (accessoryData->fields)._.url;
                                            this_03 = (object->fields).accessoryLoader;
                                            this_07 = (
                                                  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                                  *)func_?();
                                            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity
                                            ::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity
                                            ::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
                                            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                                      (this_07,(Object *)object,
                                                                                                              
                                                  MethodInfo__AccessoryView__AvatarAccessoryCreateHandler_AvatarAccessory_
                                                  ,(MethodInfo *)0x0);
                                            if (this_03 != (AccessoryLoader *)0x0) {
                                              Assets::Scripts::WorldObjectTypes::Avatar::Accessories
                                              ::AccessoryLoader::AccessoryLoader_LoadAccessory
                                                        (this_03,pSVar10,
                                                         (Action_1_AvatarAccessory_ *)this_07,
                                                         (MethodInfo *)0x0);
                                              this_04 = (object->fields).embeddedPlayerConfig;
                                              if (this_04 != (EmbeddedPlayerConfig *)0x0) {
                                                pEVar13 = EmbeddedPlayerConfig::
                                                          EmbeddedPlayerConfig_GetCurrentSiteData
                                                                    ((EmbeddedSiteConfigData *)
                                                                     &stack0xffffffd4,this_04,
                                                                     (MethodInfo *)0x0);
                                                uVar14._0_1_ = pEVar13->showTouristPromotion;
                                                uVar14._1_1_ = pEVar13->allowsOpenInNewTab;
                                                uVar14._2_1_ = pEVar13->allowsRedirectToWebpage;
                                                uVar14._3_1_ = pEVar13->allowsModals;
                                                bVar2 = MVGameControllerBase::
                                                        MVGameControllerBase_get_IsTouristSession
                                                                  ((MethodInfo *)0x0);
                                                if (bVar2 != 0) {
                                                  pBVar11 = (object->fields).purchaseButton;
                                                  if (((char)(uVar14 >> 0x18) == '\0') &&
                                                     ((char)(uVar14 >> 8) == '\0')) {
                                                    uVar14 = uVar14 >> 0x10 & 0xff;
                                                  }
                                                  else {
                                                    uVar14 = 1;
                                                  }
                                                  if (pBVar11 == (Button *)0x0)
                                                  goto code_?;
                                                  UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                                  Selectable_set_interactable
                                                            ((Selectable *)pBVar11,uVar14 != 0,
                                                             (MethodInfo *)0x0);
                                                }
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
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnDisable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryView__EquipPopupResultCallback__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AvatarAccessoryEquipPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryEquipPopup>_AvatarAccessoryEquipPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryView____c__DisplayClass42_0___OnDisable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c__DisplayClass42_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).shopCloseButton;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,1,(MethodInfo *)0x0);
  if (((this->fields).accessoryDataClient != (AccessoryDataClient *)0x0) &&
     (pAVar2 = (this->fields).accessoryDataClient, (pAVar2->fields)._.owns != 0)) {
    pMVar3 = (this->fields).avatarBody;
    if (pMVar3 == (MVBody *)0x0) goto code_?;
    bVar4 = MVBody::MVBody_IsAccessoryEquipped(pMVar3,(pAVar2->fields)._.sAID,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      value = (Object *)func_?(TypeInfo__AccessoryView____c__DisplayClass42_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      original = (this->fields).avatarAccessoryEquipPopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          AvatarAccessoryEquipPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryEquipPopup>_AvatarAccessoryEquipPopup_
                         );
      if (value == (Object *)0x0) goto code_?;
      value[1].klass = pOVar5;
      func_?();
      pAVar2 = (this->fields).accessoryDataClient;
      if ((pAVar2 == (AccessoryDataClient *)0x0) ||
         (pMVar3 = (this->fields).avatarBody, pMVar3 == (MVBody *)0x0)) goto code_?;
      accessoryOffset =
           MVBody::MVBody_GetAccessoryOffset(pMVar3,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      if ((pAVar2 == (AccessoryDataClient *)0x0) ||
         (pMVar3 = (this->fields).avatarBody, pMVar3 == (MVBody *)0x0)) goto code_?;
      accessoryScale =
           MVBody::MVBody_GetAccessoryScale(pMVar3,(pAVar2->fields)._.slot,(MethodInfo *)0x0);
      pOVar5 = value[1].klass;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__AccessoryView__EquipPopupResultCallback__,
                 (MethodInfo *)0x0);
      if (pOVar5 == (Object__Class *)0x0) goto code_?;
      AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
                ((AvatarAccessoryEquipPopup *)pOVar5,(UnityAction *)this_01,
                 (this->fields).previewImageUrl,(this->fields).accessoryDataClient,accessoryOffset,
                 accessoryScale,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__AccessoryView____c__DisplayClass42_0___OnDisable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar4 != 0) {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) {
      return;
    }
    if ((this->fields).isPreviewing != 0) {
      pMVar3 = (this->fields).avatarBody;
      if (pMVar3 == (MVBody *)0x0) goto code_?;
      MVBody::MVBody_EndPreviewAccessory(pMVar3,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).tabMenu;
    if (this_00 == (TabMenuAccessoryShop *)0x0) {
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                        (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if ((this_02 == (TabMenuButtonBase *)0x0) ||
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_02,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
    pTVar8 = (this->fields).rootTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pTVar8 = (this->fields).rootTransform;
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar8,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
      (this->fields).rootTransform = (Transform *)0x0;
      func_?();
    }
    pAVar9 = (this->fields).previewer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar9 = (this->fields).previewer;
      if (pAVar9 == (AccessoryPreviewer *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar9,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    }
    if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy((this->fields).accessoryLoader,(MethodInfo *)0x0);
    }
    (this->fields).accessoryDataClient = (AccessoryDataClient *)0x0;
    func_?();
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnEnable
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenu;
  if (this_00 == (TabMenuAccessoryShop *)0x0) goto code_?;
  this_01 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                      (this_00,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (this_01 == (TabMenuButtonBase *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_01,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  pGVar2 = (this->fields).shopCloseButton;
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGoldPurchaseDialogResult(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnGoldPurchaseDialogResult
               (AccessoryView *this,bool result,MethodInfo *method)

{
  if (result == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    url = (pGVar1->fields).purchaseGoldURL;
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm);
    }
    BrowserComm::BrowserComm_ExecuteBrowserRequest(url,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnLevelRequirementLoaded
               (AccessoryView *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    cRam_? = '\x01';
  }
  value = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
          DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields).levelRequirementPurchaseButton;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)value,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Badge_not_loaded_for_accessory_l,(MethodInfo *)0x0);
  return;
}


/* Void OnPreviewImageFinishedDownloading() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPreviewImageFinishedDownloading
               (AccessoryView *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).accessoryDataClient;
      if (pAVar2 != (AccessoryDataClient *)0x0) {
        if ((pAVar2->fields)._.owns != 0) {
          return;
        }
        this_00 = (this->fields).timeLimitDisplayer;
        if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          pAVar2 = (this->fields).accessoryDataClient;
          if (((pAVar2 != (AccessoryDataClient *)0x0) &&
              (this_01 = (pAVar2->fields)._.time, this_01 != (AccessoryTimelimit *)0x0)) &&
             (value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                      AccessoryTimelimit_get_IsTimeLimited(this_01,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,value,(MethodInfo *)0x0);
            pAVar2 = (this->fields).accessoryDataClient;
            if ((pAVar2 != (AccessoryDataClient *)0x0) &&
               (pGVar1 = (this->fields).newAccessoryImage, pGVar1 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,(pAVar2->fields)._.iNew,(MethodInfo *)0x0);
              pAVar2 = (this->fields).accessoryDataClient;
              pGVar1 = (this->fields).discountTag;
              if (pAVar2 != (AccessoryDataClient *)0x0) {
                if ((pAVar2->fields)._.dsc < 1) {
                  value_00 = false;
                }
                else {
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((this_02 == (MVNetworkGame *)0x0) ||
                      (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (this_02,(MethodInfo *)0x0),
                      pMVar3 == (MVLocalPlayer *)0x0)) ||
                     (pAVar2 = (this->fields).accessoryDataClient,
                     pAVar2 == (AccessoryDataClient *)0x0)) goto code_?;
                  value_00 = (pAVar2->fields)._.lvl <= (pMVar3->fields)._.level;
                }
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPurchaseButtonPressed() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnPurchaseButtonPressed
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryView__OnTouristSignupClicked_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                   );
    func_?(&
                    LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryView____c__DisplayClass47_0___OnPurchaseButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c__DisplayClass47_0);
    func_?(&
                    MethodInfo__AccessoryView____c__DisplayClass47_1___OnPurchaseButtonPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c__DisplayClass47_1);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&StringLiteral_Sign_up);
    func_?(&StringLiteral_Signup_required);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      bVar3 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)pMVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            pAVar4 = (this->fields).accessoryDataClient;
            if (pAVar4 != (AccessoryDataClient *)0x0) {
              if ((pAVar4->fields)._.lvl <= (pMVar2->fields)._.level) {
                AccessoryView_Purchase(this,(MethodInfo *)0x0);
                return;
              }
              pOVar5 = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOVar5,ExceptionArgument__Enum_obj,method_00);
              original = (this->fields).insufficientLevelPopup;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pOVar6 = (Object__Class *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)original,
                                  LevelErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<LevelErrorPopup>_LevelErrorPopup_
                                 );
              if (pOVar5 != (Object *)0x0) {
                pOVar5[1].klass = pOVar6;
                func_?(pOVar5 + 1,pOVar6);
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                         func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar5,
                           MethodInfo__AccessoryView____c__DisplayClass47_1___OnPurchaseButtonPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar7,(BaseEventData *)0x0,pEVar8,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pAVar4 = (this->fields).accessoryDataClient;
                if ((pAVar4 != (AccessoryDataClient *)0x0) &&
                   (pOVar5[1].klass != (Object__Class *)0x0)) {
                  LevelErrorPopup::LevelErrorPopup_Initialize
                            ((LevelErrorPopup *)pOVar5[1].klass,(UnityAction *)0x0,
                             (pAVar4->fields)._.lvl,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      else {
        pOVar5 = (Object *)func_?(TypeInfo__AccessoryView____c__DisplayClass47_0);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar5,ExceptionArgument__Enum_obj,method_00);
        original_00 = (this->fields).touristErrorPopup;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original_00,
                            AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                           );
        if (pOVar5 != (Object *)0x0) {
          pOVar5[1].klass = pOVar6;
          func_?(pOVar5 + 1,pOVar6);
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar5,
                     MethodInfo__AccessoryView____c__DisplayClass47_0___OnPurchaseButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar7,(BaseEventData *)0x0,pEVar8,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pOVar6 = pOVar5[1].klass;
          this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_00,(Object *)this,MethodInfo__AccessoryView__OnTouristSignupClicked_bool_,
                     (MethodInfo *)0x0);
          previewImageUrl = (this->fields).previewImageUrl;
          pAVar4 = (this->fields).accessoryDataClient;
          header = TM::TM__(StringLiteral_Signup_required,(MethodInfo *)0x0);
          buttonText = TM::TM__(StringLiteral_Sign_up,(MethodInfo *)0x0);
          if (pOVar6 != (Object__Class *)0x0) {
            AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                      ((AvatarAccessoryErrorPopup *)pOVar6,(UnityAction_1_System_Boolean_ *)this_00,
                       previewImageUrl,pAVar4,header,buttonText,(MethodInfo *)0x0);
            return;
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


/* Void OnTouristSignupClicked(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_OnTouristSignupClicked
               (AccessoryView *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&StringLiteral_Signup_not_permitted_for_site_);
    cRam_? = '\x01';
  }
  if (confirmed != 0) {
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       (&EStack_3,this_00,(MethodInfo *)0x0);
    if (pEVar2->allowsModals != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,1,(MethodInfo *)0x0);
      return;
    }
    if (pEVar2->allowsOpenInNewTab != 0) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(1,0,(MethodInfo *)0x0);
      return;
    }
    if (pEVar2->allowsRedirectToWebpage == 0) {
      _confirmed = pEVar2->siteEnum;
      message = (Object *)func_?(TypeInfo__EmbeddedSite,&confirmed);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Signup_not_permitted_for_site_,(MethodInfo *)0x0);
      return;
    }
    BrowserCommGotoRequests::BrowserCommGotoRequests_GotoSignup(0,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Pop(AccessoryView *this,MethodInfo *method)

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
                    MethodInfo__AccessoryView____c___Pop_b__46_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AccessoryView____c);
  }
  callbackFunction = TypeInfo__AccessoryView____c->static_fields->__9__46_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AccessoryView____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryView____c);
    }
    object = TypeInfo__AccessoryView____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AccessoryView____c___Pop_b__46_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryView____c->static_fields->__9__46_0 = callbackFunction;
    func_?(&TypeInfo__AccessoryView____c->static_fields->__9__46_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_Purchase
               (AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryView__OnGoldPurchaseDialogResult_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                   );
    func_?(&
                    AvatarAccessoryPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryPurchasePopup>_AvatarAccessoryPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AccessoryView____c__DisplayClass48_0___Purchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c__DisplayClass48_0);
    func_?(&
                    MethodInfo__AccessoryView____c__DisplayClass48_1___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryView____c__DisplayClass48_1);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&StringLiteral_Get_gold);
    func_?(&StringLiteral_Not_enough_gold);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pUVar2 = (pMVar1->fields)._._UserProfileData_k__BackingField,
       pUVar2 != (UserProfileData *)0x0)) {
      iVar3 = (pUVar2->fields).Gold;
      this_00 = (AccessoryData *)(this->fields).accessoryDataClient;
      if (this_00 != (AccessoryData *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        iVar4 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                AccessoryData_get_DiscountedPrice(this_00,(MethodInfo *)0x0);
        if (iVar3 < iVar4) {
          pOVar5 = (Object *)func_?(TypeInfo__AccessoryView____c__DisplayClass48_1);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar5,ExceptionArgument__Enum_obj,method_00);
          if (pOVar5 != (Object *)0x0) {
            pOVar5[1].monitor = (MonitorData *)this;
            func_?(&pOVar5[1].monitor,this);
            original = (this->fields).insufficientResourcePopup;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar6 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original,
                                AvatarAccessoryErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryErrorPopup>_AvatarAccessoryErrorPopup_
                               );
            pOVar5[1].klass = pOVar6;
            func_?(pOVar5 + 1,pOVar6);
            pOVar6 = pOVar5[1].klass;
            this_02 = (UnityAction_1_System_Int32Enum_ *)
                      func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_02,(Object *)this,
                       MethodInfo__AccessoryView__OnGoldPurchaseDialogResult_bool_,(MethodInfo *)0x0
                      );
            previewImageUrl = (this->fields).previewImageUrl;
            accessoryData = (this->fields).accessoryDataClient;
            header = TM::TM__(StringLiteral_Not_enough_gold,(MethodInfo *)0x0);
            buttonText = TM::TM__(StringLiteral_Get_gold,(MethodInfo *)0x0);
            if (pOVar6 != (Object__Class *)0x0) {
              AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
                        ((AvatarAccessoryErrorPopup *)pOVar6,
                         (UnityAction_1_System_Boolean_ *)this_02,previewImageUrl,accessoryData,
                         header,buttonText,(MethodInfo *)0x0);
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar5,
                         MethodInfo__AccessoryView____c__DisplayClass48_1___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
code_?:
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
        else {
          pOVar5 = (Object *)func_?(TypeInfo__AccessoryView____c__DisplayClass48_0);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar5,ExceptionArgument__Enum_obj,method_00);
          if (pOVar5 != (Object *)0x0) {
            pOVar5[1].monitor = (MonitorData *)this;
            func_?(&pOVar5[1].monitor,this);
            original_00 = (this->fields).AvatarAccessoryPurchasePopupPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar6 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original_00,
                                AvatarAccessoryPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarAccessoryPurchasePopup>_AvatarAccessoryPurchasePopup_
                               );
            pOVar5[1].klass = pOVar6;
            func_?(pOVar5 + 1,pOVar6);
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              AvatarAccessoryPurchasePopup::AvatarAccessoryPurchasePopup_Initialize
                        ((AvatarAccessoryPurchasePopup *)pOVar5[1].klass,
                         (this->fields).accessoryDataClient,(this->fields).previewImageUrl,
                         (MethodInfo *)0x0);
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,pOVar5,
                         MethodInfo__AccessoryView____c__DisplayClass48_0___Purchase_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              goto code_?;
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


/* Void SetShowNotOwnedUI(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowNotOwnedUI
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      this_01 = (this->fields).timeLimitDisplayer;
      if (this_01 != (AccessoryTimeLimitDisplayer *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pGVar1 = (this->fields).newAccessoryImage;
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pTVar2 = (this->fields).originalPriceText;
            if (pTVar2 != (Text *)0x0) {
              pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar2,(MethodInfo *)0x0);
              if (pGVar1 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,shouldShow,(MethodInfo *)0x0);
                pGVar1 = (this->fields).discountTag;
                if (pGVar1 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,shouldShow,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).goldSavedText;
                  if (pTVar2 != (Text *)0x0) {
                    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0);
                    if (pGVar1 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar1,shouldShow,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetShowPrices(Boolean) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_SetShowPrices
               (AccessoryView *this,bool shouldShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonAnimation;
  if ((this_00 != (AccessoryShinyButton *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,shouldShow,(MethodInfo *)0x0);
    pTVar2 = (this->fields).priceTextWithoutDiscount;
    if ((pTVar2 != (Text *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,shouldShow,(MethodInfo *)0x0);
      pTVar2 = (this->fields).priceText;
      if ((pTVar2 != (Text *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,shouldShow,(MethodInfo *)0x0);
        pTVar2 = (this->fields).goldSavedText;
        if ((pTVar2 != (Text *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,shouldShow,(MethodInfo *)0x0);
          pTVar2 = (this->fields).originalPriceText;
          if ((pTVar2 != (Text *)0x0) &&
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar2,(MethodInfo *)0x0),
             pGVar1 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,shouldShow,(MethodInfo *)0x0);
            pGVar1 = (this->fields).discountTag;
            if (pGVar1 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,shouldShow,(MethodInfo *)0x0);
              pTVar2 = (this->fields).claimText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                 pGVar1 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,shouldShow,(MethodInfo *)0x0);
                this_01 = (this->fields).levelRequirementPurchaseButton;
                if ((this_01 != (RawImage *)0x0) &&
                   (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                   pGVar1 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar1,shouldShow ^ 1,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).claimText;
                  if ((pTVar2 != (Text *)0x0) &&
                     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pTVar2,(MethodInfo *)0x0),
                     pGVar1 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,shouldShow,(MethodInfo *)0x0);
                    pBVar3 = (this->fields).purchaseButton;
                    if (pBVar3 != (Button *)0x0) {
                      pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                         ((Selectable *)pBVar3,(MethodInfo *)0x0);
                      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pCVar5 = Styles::Styles_GetColor
                                         ((Color *)&stack0xffffffec,ColorStyle__Enum_ButtonSuccess,
                                          (MethodInfo *)0x0);
                      if (pIVar4 != (Image *)0x0) {
                        (*(code *)(pIVar4->klass->vtable).set_color.method)
                                  (pIVar4,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                                   (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
                        if (shouldShow != 0) {
                          return;
                        }
                        pGVar1 = (this->fields).lockIcon;
                        if (pGVar1 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,1,(MethodInfo *)0x0);
                          pBVar3 = (this->fields).purchaseButton;
                          if (pBVar3 != (Button *)0x0) {
                            pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                     Selectable_get_image((Selectable *)pBVar3,(MethodInfo *)0x0);
                            if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__Styles);
                            }
                            pCVar5 = Styles::Styles_GetColor
                                               ((Color *)&stack0xffffffec,
                                                ColorStyle__Enum_DisabledButton,(MethodInfo *)0x0);
                            if (pIVar4 != (Image *)0x0) {
                              (*(code *)(pIVar4->klass->vtable).set_color.method)
                                        (pIVar4,pCVar5->r,pCVar5->g,pCVar5->b,pCVar5->a,
                                         (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
                              pAVar6 = (this->fields).accessoryDataClient;
                              if (pAVar6 != (AccessoryDataClient *)0x0) {
                                level = (pAVar6->fields)._.lvl;
                                this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                           *)func_?(
                                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                                  );
                                DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity
                                ::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::
                                Metadata::__Il2CppFullySharedGenericType]::
                                DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                          (this_02,(Object *)this,
                                           MethodInfo__AccessoryView__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                                           ,(MethodInfo *)0x0);
                                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                BadgeManager::BadgeManager_GetBadgeTexture
                                          (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *
                                                 )this_02,(MethodInfo *)0x0);
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


/* Void ShowLoadedStreamingAssetsObject() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView_ShowLoadedStreamingAssetsObject
               (AccessoryView *this,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    if ((pAVar1->fields)._.owns != 0) {
      return;
    }
    this_00 = (this->fields).timeLimitDisplayer;
    if (this_00 != (AccessoryTimeLimitDisplayer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryDataClient;
      if (((pAVar1 != (AccessoryDataClient *)0x0) &&
          (this_01 = (pAVar1->fields)._.time, this_01 != (AccessoryTimelimit *)0x0)) &&
         (value = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                  AccessoryTimelimit_get_IsTimeLimited(this_01,(MethodInfo *)0x0),
         pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
        pAVar1 = (this->fields).accessoryDataClient;
        if ((pAVar1 != (AccessoryDataClient *)0x0) &&
           (pGVar2 = (this->fields).newAccessoryImage, pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(pAVar1->fields)._.iNew,(MethodInfo *)0x0);
          pAVar1 = (this->fields).accessoryDataClient;
          pGVar2 = (this->fields).discountTag;
          if (pAVar1 != (AccessoryDataClient *)0x0) {
            if ((pAVar1->fields)._.dsc < 1) {
              value_00 = false;
            }
            else {
              this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((this_02 == (MVNetworkGame *)0x0) ||
                  (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
                  pMVar3 == (MVLocalPlayer *)0x0)) ||
                 (pAVar1 = (this->fields).accessoryDataClient, pAVar1 == (AccessoryDataClient *)0x0)
                 ) goto code_?;
              value_00 = (pAVar1->fields)._.lvl <= (pMVar3->fields)._.level;
            }
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Initialize>b__39_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__Initialize_b__39_0
               (AccessoryView *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryView__HandlePreviewing_MVBody_);
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<MVBody>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryView__HandlePreviewing_MVBody_,
             (MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        ppMVar5 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar3].offset].GetCurrentBody.
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0)
  ;
code_?:
  (*(code *)*ppMVar5)(x,ppMVar5[1]);
  return;
}


/* AccessoryView() */

void Assembly-CSharp.dll::AccessoryView::AccessoryView__ctor(AccessoryView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                   );
    cRam_? = '\x01';
  }
  this_00 = (AccessoryLoader *)
            func_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                           );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_00,(MethodInfo *)0x0);
  (this->fields).accessoryLoader = this_00;
  func_?(&(this->fields).accessoryLoader,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

