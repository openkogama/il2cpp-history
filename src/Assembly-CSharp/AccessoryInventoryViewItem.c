
/* Void AccessoryCreatedCallback(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_AccessoryCreatedCallback
               (AccessoryInventoryViewItem *this,AvatarAccessory *avatarAccessory,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessoryCategory);
    func_?(&MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__);
    func_?(&
                    SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
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
  if ((this->fields).wasDestroyed == 0) {
    pTVar1 = (this->fields).rootTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (avatarAccessory != (AvatarAccessory *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)avatarAccessory,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0);
          if ((this->fields).accessoryDataClient != (AccessoryDataClient *)0x0) {
            pSVar3 = mscorlib.dll::System::Enum::Enum_ToString
                               ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_AvatarAccessory_,pSVar3,StringLiteral__Images_,
                                (MethodInfo *)0x0);
            pAVar4 = (this->fields).accessoryDataClient;
            if (pAVar4 != (AccessoryDataClient *)0x0) {
              pSVar5 = (pAVar4->fields)._.url;
              pSVar6 = (String__Array *)func_?();
              pSVar7 = ::StringLiteral__;
              if (pSVar6 != (String__Array *)0x0) {
                if (pSVar6->max_length != 0) {
                  pSVar6->vector[0] = ::StringLiteral__;
                  func_?(pSVar6->vector,pSVar7);
                  if (pSVar5 == (String *)0x0) goto code_?;
                  pSVar6 = mscorlib.dll::System::String::String_Split_4
                                     (pSVar5,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0)
                  ;
                  if (pSVar6 == (String__Array *)0x0) goto code_?;
                  if (pSVar6->max_length - 1 < pSVar6->max_length) {
                    pSVar5 = pSVar6->vector[pSVar6->max_length - 1];
                    pSVar6 = (String__Array *)func_?(TypeInfo__System__String,1);
                    pSVar7 = ::StringLiteral__;
                    if (pSVar6 == (String__Array *)0x0) goto code_?;
                    if (pSVar6->max_length != 0) {
                      pSVar6->vector[0] = ::StringLiteral__;
                      func_?(pSVar6->vector,pSVar7);
                      if (pSVar5 == (String *)0x0) goto code_?;
                      pSVar6 = mscorlib.dll::System::String::String_Split_4
                                         (pSVar5,pSVar6,StringSplitOptions__Enum_None,
                                          (MethodInfo *)0x0);
                      if (pSVar6 == (String__Array *)0x0) goto code_?;
                      if (pSVar6->max_length != 0) {
                        pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                           (pSVar6->vector[0],StringLiteral_Image_unity3d,
                                            (MethodInfo *)0x0);
                        if (pSVar5 == (String *)0x0) goto code_?;
                        pSVar5 = mscorlib.dll::System::String::String_ToLower
                                           (pSVar5,(MethodInfo *)0x0);
                        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                           (pSVar3,pSVar5,(MethodInfo *)0x0);
                        this_00 = (this->fields).previewImageStreaminAssetManual;
                        this_01 = (NavMesh_OnNavMeshPreUpdate *)
                                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (this_01,(Object *)this,
                                   MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__
                                   ,(MethodInfo *)0x0);
                        if (this_00 == (StreamedSpriteToImageManual *)0x0) goto code_?;
                        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                                  (this_00,pSVar3,(UnityAction *)this_01,(MethodInfo *)0x0);
                        pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_GetComponentsInChildren
                                           ((Component *)avatarAccessory,
                                            SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                           );
                        uVar9 = 0;
                        if (pOVar8 == (Object__Array *)0x0) goto code_?;
                        ppOVar10 = pOVar8->vector;
                        while( true ) {
                          if ((int)pOVar8->max_length <= (int)uVar9) {
                            return;
                          }
                          if (pOVar8->max_length <= uVar9) break;
                          if ((SkinnedMeshOptimizer *)*ppOVar10 == (SkinnedMeshOptimizer *)0x0)
                          goto code_?;
                          SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                                    ((SkinnedMeshOptimizer *)*ppOVar10,(MethodInfo *)0x0);
                          uVar9 = uVar9 + 1;
                          ppOVar10 = ppOVar10 + 1;
                        }
                      }
                    }
                  }
                }
                func_?();
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  if (avatarAccessory != (AvatarAccessory *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)avatarAccessory,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(AccessoryDataClient, Transform, MVBody, Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
               (AccessoryInventoryViewItem *this,AccessoryDataClient *accessoryDataClient,
               Transform *rootTransform,MVBody *targetBody,bool bundleView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                   );
    func_?(&TypeInfo__System__Action<AvatarAccessory>);
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
  (this->fields).accessoryDataClient = accessoryDataClient;
  func_?(&(this->fields).accessoryDataClient,accessoryDataClient);
  (this->fields).rootTransform = rootTransform;
  func_?(&(this->fields).rootTransform,rootTransform);
  if (accessoryDataClient != (AccessoryDataClient *)0x0) {
    (this->fields).locked = (accessoryDataClient->fields)._.owns == 0;
    (this->fields).targetBody = targetBody;
    func_?(&(this->fields).targetBody,targetBody);
    (this->fields).bundleView = bundleView;
    if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HighlightManager);
    }
    this_04 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              HighlightManager::HighlightManager_GetHighLights
                        (HighlightType__Enum_Accessory,
                         System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                        );
    index = 0;
    if (this_04 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      for (; index < (this_04->fields)._size; index = index + 1) {
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_04,index,
                           MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                          );
        if ((RVar1 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar1 + 0xc) == 0))
        goto code_?;
        if (*(int *)(*(int *)((int)RVar1 + 0xc) + 8) == (accessoryDataClient->fields)._.aMDID) {
          pGVar2 = (this->fields).redDotNotification;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(this->fields).locked,(MethodInfo *)0x0);
          RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_04,index,
                             MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                            );
          if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
          (this->fields).highlightId = *(int32_t *)((int)RVar1 + 8);
        }
      }
      this_00 = (this->fields).purchasePopupButton;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,bundleView ^ 1,(MethodInfo *)0x0);
        this_01 = (this->fields).previewImage;
        if (this_01 != (RectTransform *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            this_02 = (this->fields).accessoryItemBackground;
            if (this_02 != (AccessoryItemBackground *)0x0) {
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
                pGVar2 = (this->fields).loadingWheel;
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,1,(MethodInfo *)0x0);
                  url = _UNK_?;
                  this_03 = (this->fields).accessoryLoader;
                  this_05 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                             *)func_?();
                  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP
                  ::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                  __Il2CppFullySharedGenericType]::
                  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                            (this_05,(Object *)this,
                             MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                             ,(MethodInfo *)0x0);
                  if (this_03 != (AccessoryLoader *)0x0) {
                    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
                    AccessoryLoader_LoadAccessory
                              (this_03,url,(Action_1_AvatarAccessory_ *)this_05,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator OnAndroidEndHoverEvent() */

IEnumerator *
Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnAndroidEndHoverEvent
          (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnClicked() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnClicked
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__HighlightManager);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).redDotNotification;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if ((bVar2 != 0) && ((this->fields).highlightId != -1)) {
      pGVar1 = (this->fields).redDotNotification;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      highlightId = (this->fields).highlightId;
      if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnDestroy
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__BadgeManager);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    this_00 = (this->fields).accessoryLoader;
    (this->fields).wasDestroyed = 1;
    if (this_00 != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
      func_?(&(this->fields).accessoryLoader,0);
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,(MethodInfo *)0x0);
      (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
      func_?();
      return;
    }
code_?:
    func_?();
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar2->fields).OnAccessoryUnequipped;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,(MethodInfo *)0x0)
    ;
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      *(undefined4 *)(unaff_EDI + 0xe8) = 0;
code_?:
      func_?();
      goto code_?;
    }
    pDVar4 = (Delegate *)0x0;
    if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
      pDVar4 = pDVar3;
    }
    if (pDVar4 == (Delegate *)0x0) goto code_?;
    *(Delegate **)(unaff_EDI + 0xe8) = pDVar4;
    pDVar4 = (Delegate *)0x0;
    if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
      pDVar4 = pDVar3;
    }
    if (pDVar4 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEquip(Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnEquip
               (AccessoryInventoryViewItem *this,bool onEquip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem___OnEquip_b__31_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  if ((this->fields).locked != 0) {
    return;
  }
  if (onEquip != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnEquip_b__31_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
              );
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,(MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    (pMVar1->fields).OnAccessoryUnequipped = (Action *)0x0;
code_?:
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar3 = (this->fields).targetBody;
    if (((pMVar3 != (MVBody *)0x0) &&
        (pAVar4 = (this->fields).accessoryDataClient, pAVar4 != (AccessoryDataClient *)0x0)) &&
       (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
                (this_01,(pMVar3->fields)._._._._.id,(pAVar4->fields)._.slot,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar5 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar2;
    }
    if (pAVar5 != (Action *)0x0) {
      (pMVar1->fields).OnAccessoryUnequipped = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar2;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
      func_?();
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator OnHoverEvent(Single) */

IEnumerator *
Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnHoverEvent
          (AccessoryInventoryViewItem *this,float sizeOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)sizeOffset;
  return (IEnumerator *)value;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_OnLevelRequirementLoaded
               (AccessoryInventoryViewItem *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Badge_not_loaded_for_accessory_l,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pRVar3 = (this->fields).levelRequirement;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if ((bVar2 == 0) || ((this->fields).wasDestroyed != 0)) {
      return;
    }
    pTVar4 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
    (this->fields).levelRequirementTextureAsset = pTVar4;
    func_?();
    pRVar3 = (this->fields).levelRequirement;
    if ((pRVar3 != (RawImage *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar3,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pRVar3 = (this->fields).levelRequirement;
      if (pRVar3 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRVar3,(Texture *)(this->fields).levelRequirementTextureAsset,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPointerEnter
               (AccessoryInventoryViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)0x41a00000;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPointerExit
               (AccessoryInventoryViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    routine = AccessoryInventoryViewItem_OnHoverEvent(this,-76.0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}


/* Void OnPreviewImageDownloadFinished() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_OnPreviewImageDownloadFinished
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryInventoryViewItem__OnEquip_bool_);
    func_?(&MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__);
    func_?(&
                    UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                   );
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral___0__);
    cRam_? = '\x01';
  }
  if ((this->fields).wasDestroyed != 0) {
    return;
  }
  this_00 = (this->fields).previewImage;
  if ((this_00 == (RectTransform *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).loadingWheel;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pAVar2 = (this->fields).accessoryItemBackground;
    if ((pAVar2 == (AccessoryItemBackground *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar2,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pAVar2 = (this->fields).accessoryItemBackground;
    if (pAVar2 == (AccessoryItemBackground *)0x0) goto code_?;
    AccessoryItemBackground::AccessoryItemBackground_Initialize
              (pAVar2,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
    pAVar3 = (this->fields).accessoryDataClient;
    unaff_ESI = (RectTransform__Class *)(this->fields).newAccessoryImage;
    if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
    if ((pAVar3->fields)._.iNew == 0) {
      pAVar4 = (pAVar3->fields)._.time;
      if (pAVar4 != (AccessoryTimelimit *)0x0) {
        bVar5 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                AccessoryTimelimit_get_IsTimeLimited(pAVar4,(MethodInfo *)0x0);
        if (bVar5 != 0) goto code_?;
        bVar6 = false;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pAVar3 = (this->fields).accessoryDataClient;
    if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
    bVar6 = (pAVar3->fields)._.owns == 0;
code_?:
    if (unaff_ESI == (RectTransform__Class *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)unaff_ESI,bVar6,(MethodInfo *)0x0);
    if ((this->fields).bundleView != 0) {
      return;
    }
    pAVar3 = (this->fields).accessoryDataClient;
    if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
    if (((pAVar3->fields)._.lvl == 0) || ((this->fields).locked == 0)) {
code_?:
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      unaff_ESI = TypeInfo__UnityEngine__RectTransform;
      if (pTVar7 != (Transform *)0x0) {
        pTVar8 = (Transform *)0x0;
        if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar8 = pTVar7;
        }
        if (pTVar8 == (Transform *)0x0) goto code_?;
        pTVar8 = (Transform *)0x0;
        if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar8 = pTVar7;
        }
        pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffe4,(RectTransform *)pTVar8,(MethodInfo *)0x0);
        pGVar1 = (this->fields).discount;
        pRVar10 = (RectTransform__Class *)0x3f800000;
        fVar11 = pRVar9->m_Width / _UNK_?;
        fVar12 = pRVar9->m_Height / _UNK_?;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
          value.y = fVar12;
          value.x = fVar11;
          value.z = (float)pRVar10;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar7,value,(MethodInfo *)0x0);
          pAVar13 = (this->fields).timeLimitDisplayer;
          unaff_ESI = pRVar10;
          if ((pAVar13 != (AccessoryTimeLimitDisplayer *)0x0) &&
             (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pAVar13,(MethodInfo *)0x0),
             pTVar7 != (Transform *)0x0)) {
            value_00.y = fVar12;
            value_00.x = fVar11;
            value_00.z = (float)pRVar10;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar7,value_00,(MethodInfo *)0x0);
            this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((this_04 != (MVNetworkGame *)0x0) &&
                (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0),
                pMVar14 != (MVLocalPlayer *)0x0)) &&
               (pAVar3 = (this->fields).accessoryDataClient, pAVar3 != (AccessoryDataClient *)0x0))
            {
              if ((pMVar14->fields)._.level < (pAVar3->fields)._.lvl) {
                return;
              }
              pAVar13 = (this->fields).timeLimitDisplayer;
              if (pAVar13 != (AccessoryTimeLimitDisplayer *)0x0) {
                pAVar4 = (pAVar3->fields)._.time;
                (pAVar13->fields).accessoryTimeLimitData = pAVar4;
                func_?(&(pAVar13->fields).accessoryTimeLimitData,pAVar4);
                pAVar13 = (this->fields).timeLimitDisplayer;
                if (pAVar13 != (AccessoryTimeLimitDisplayer *)0x0) {
                  unaff_ESI = (RectTransform__Class *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pAVar13,(MethodInfo *)0x0);
                  if ((this->fields).locked == 0) {
                    this._0_1_ = 0;
                  }
                  else {
                    pAVar3 = (this->fields).accessoryDataClient;
                    if ((pAVar3 == (AccessoryDataClient *)0x0) ||
                       (pAVar4 = (pAVar3->fields)._.time, pAVar4 == (AccessoryTimelimit *)0x0))
                    goto code_?;
                    this._0_1_ = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit
                                 ::AccessoryTimelimit_get_IsTimeLimited(pAVar4,(MethodInfo *)0x0);
                  }
                  if (unaff_ESI != (RectTransform__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              ((GameObject *)unaff_ESI,(bool)this,(MethodInfo *)0x0);
                    pAVar3 = (object->fields).accessoryDataClient;
                    if (pAVar3 != (AccessoryDataClient *)0x0) {
                      if ((pAVar3->fields)._.dsc < 100) {
                        bVar15 = (pAVar3->fields)._.cost == 0;
                      }
                      else {
                        bVar15 = true;
                      }
                      pGVar1 = (object->fields).discount;
                      if (((object->fields).locked == 0) || ((pAVar3->fields)._.dsc < 1)) {
                        this._0_1_ = 0;
                      }
                      else {
                        this._0_1_ = bVar15 ^ 1;
                      }
                      if (pGVar1 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar1,(bool)this,(MethodInfo *)0x0);
                        pGVar1 = (object->fields).freeLabel;
                        if (pGVar1 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,(object->fields).locked & bVar15,(MethodInfo *)0x0);
                          pAVar3 = (object->fields).accessoryDataClient;
                          unaff_ESI = (RectTransform__Class *)(object->fields).discountText;
                          if (pAVar3 != (AccessoryDataClient *)0x0) {
                            pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                                ((Int32 *)&(pAVar3->fields)._.dsc,(MethodInfo *)0x0)
                            ;
                            mscorlib.dll::System::String::String_Format
                                      (StringLiteral___0__,(Object *)pSVar16,(MethodInfo *)0x0);
                            if (unaff_ESI != (RectTransform__Class *)0x0) {
                              (*((Toggle__Class *)(unaff_ESI->_0).image)[1].vtable.Finalize.
                                methodPtr)();
                              pTVar17 = (object->fields).equipCheckbox;
                              if ((pTVar17 != (Toggle *)0x0) &&
                                 (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pTVar17,(MethodInfo *)0x0),
                                 pGVar1 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive
                                          (pGVar1,(object->fields).locked == 0,(MethodInfo *)0x0);
                                if ((object->fields).locked == 0) {
                                  pAVar3 = (object->fields).accessoryDataClient;
                                  unaff_ESI = (RectTransform__Class *)(object->fields).equipCheckbox
                                  ;
                                  if (((pAVar3 == (AccessoryDataClient *)0x0) ||
                                      (this_01 = (object->fields).targetBody,
                                      this_01 == (MVBody *)0x0)) ||
                                     (bVar5 = MVBody::MVBody_IsAccessoryEquipped
                                                        (this_01,(pAVar3->fields)._.sAID,
                                                         (MethodInfo *)0x0),
                                     unaff_ESI == (RectTransform__Class *)0x0))
                                  goto code_?;
                                  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                                            ((Toggle *)unaff_ESI,bVar5,(MethodInfo *)0x0);
                                }
                                pTVar17 = (object->fields).equipCheckbox;
                                if (pTVar17 != (Toggle *)0x0) {
                                  this_05 = (CanvasGroup *)
                                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_GetComponent_1
                                                      ((Component *)pTVar17,
                                                                                                              
                                                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                                                  );
                                  pTVar17 = (object->fields).equipCheckbox;
                                  if (pTVar17 != (Toggle *)0x0) {
                                    fVar11 = _UNK_?;
                                    if ((pTVar17->fields).m_IsOn != 0) {
                                      fVar11 = _UNK_?;
                                    }
                                    if (this_05 != (CanvasGroup *)0x0) {
                                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                      CanvasGroup_set_alpha(this_05,fVar11,(MethodInfo *)0x0);
                                      pTVar17 = (object->fields).equipCheckbox;
                                      if (pTVar17 != (Toggle *)0x0) {
                                        unaff_ESI = (RectTransform__Class *)
                                                    (pTVar17->fields).onValueChanged;
                                        this_06 = (UnityAction_1_System_Int32Enum_ *)
                                                  func_?();
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`1[System::Int32Enum]::
                                        UnityAction_1_System_Int32Enum___ctor
                                                  (this_06,(Object *)object,
                                                                                                      
                                                  MethodInfo__AccessoryInventoryViewItem__OnEquip_bool_
                                                  ,(MethodInfo *)0x0);
                                        if (unaff_ESI != (RectTransform__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Events::
                                          UnityEvent`1[UnityEngine::Vector2]::
                                          UnityEvent_1_UnityEngine_Vector2__AddListener
                                                    ((UnityEvent_1_UnityEngine_Vector2_ *)unaff_ESI,
                                                     (UnityAction_1_UnityEngine_Vector2_ *)this_06,
                                                                                                          
                                                  MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                                                  );
                                          pGVar1 = (object->fields).priceDisplay;
                                          if (pGVar1 != (GameObject *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive
                                                      (pGVar1,(object->fields).locked,
                                                       (MethodInfo *)0x0);
                                            pGVar1 = (object->fields).priceStrikeout;
                                            if ((object->fields).locked == 0) {
code_?:
                                              bVar6 = false;
                                            }
                                            else {
                                              pAVar3 = (object->fields).accessoryDataClient;
                                              if (pAVar3 == (AccessoryDataClient *)0x0)
                                              goto code_?;
                                              if ((pAVar3->fields)._.dsc < 1) goto code_?;
                                              bVar6 = 0 < (pAVar3->fields)._.cost;
                                            }
                                            if (pGVar1 != (GameObject *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_SetActive(pGVar1,bVar6,(MethodInfo *)0x0)
                                              ;
                                              pAVar3 = (object->fields).accessoryDataClient;
                                              unaff_ESI = (RectTransform__Class *)
                                                          (object->fields).priceStrikeoutText;
                                              if (((pAVar3 != (AccessoryDataClient *)0x0) &&
                                                  (pSVar16 = mscorlib.dll::System::Int32::
                                                             Int32_ToString_1((Int32 *)&(pAVar3->
                                                  fields)._.cost,StringLiteral_N0,(MethodInfo *)0x0)
                                                  , pSVar16 != (String *)0x0)) &&
                                                 (pSVar16 = mscorlib.dll::System::String::
                                                            String_Replace_1(pSVar16,::
                                                  StringLiteral__,::StringLiteral__,
                                                  (MethodInfo *)0x0),
                                                 unaff_ESI != (RectTransform__Class *)0x0)) {
                                                pTVar18 = (Toggle__Class *)(unaff_ESI->_0).image;
                                                (*pTVar18[1].vtable.Finalize.methodPtr)
                                                          (unaff_ESI,pSVar16,
                                                           pTVar18[1].vtable.Finalize.method);
                                                this_02 = (AccessoryData *)
                                                          (object->fields).accessoryDataClient;
                                                unaff_ESI = (RectTransform__Class *)
                                                            (object->fields).priceText;
                                                if (this_02 != (AccessoryData *)0x0) {
                                                  MVWorldObject.dll::MV::WorldObject::Accessories::
                                                  AccessoryData::AccessoryData_get_DiscountedPrice
                                                            (this_02,(MethodInfo *)0x0);
                                                  pSVar16 = mscorlib.dll::System::Int32::
                                                            Int32_ToString_1((Int32 *)&
                                                  stack0xfffffff4,StringLiteral_N0,(MethodInfo *)0x0
                                                  );
                                                  if ((pSVar16 != (String *)0x0) &&
                                                     (pSVar16 = mscorlib.dll::System::String::
                                                                String_Replace_1(pSVar16,::
                                                  StringLiteral__,::StringLiteral__,
                                                  (MethodInfo *)0x0),
                                                  unaff_ESI != (RectTransform__Class *)0x0)) {
                                                    pTVar18 = (Toggle__Class *)(unaff_ESI->_0).image;
                                                    (*pTVar18[1].vtable.Finalize.methodPtr)
                                                              (unaff_ESI,pSVar16,
                                                               pTVar18[1].vtable.Finalize.method);
                                                    pRVar19 = (object->fields).levelRequirement;
                                                    if (pRVar19 != (RawImage *)0x0) {
                                                      pTVar8 = (Transform *)
                                                                UnityEngine.UI.dll::UnityEngine::UI
                                                                ::Graphic::Graphic_get_rectTransform
                                                                          ((Graphic *)pRVar19,
                                                                           (MethodInfo *)0x0);
                                                      pRVar19 = (object->fields).levelRequirement;
                                                      if ((pRVar19 != (RawImage *)0x0) &&
                                                         (pTVar7 = (Transform *)
                                                                    UnityEngine.UI.dll::UnityEngine
                                                                    ::UI::Graphic::
                                                                    Graphic_get_rectTransform
                                                                              ((Graphic *)pRVar19,
                                                                               (MethodInfo *)0x0),
                                                         pTVar7 != (Transform *)0x0)) {
                                                        pVVar20 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_localPosition
                                                                            ((Vector3 *)
                                                                             &stack0xffffffe8,
                                                                             pTVar7,(MethodInfo *)
                                                                                     0x0);
                                                        fVar11 = pVVar20->x;
                                                        pRVar19 = (object->fields).levelRequirement;
                                                        if ((pRVar19 != (RawImage *)0x0) &&
                                                           (pTVar7 = (Transform *)
                                                                      UnityEngine.UI.dll::
                                                                      UnityEngine::UI::Graphic::
                                                                      Graphic_get_rectTransform
                                                                                ((Graphic *)pRVar19,
                                                                                 (MethodInfo *)0x0),
                                                           pTVar7 != (Transform *)0x0)) {
                                                          pVVar20 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_get_localPosition
                                                                              ((Vector3 *)
                                                                               &stack0xffffffe8,
                                                                               pTVar7,(MethodInfo *
                                                                                       )0x0);
                                                          fVar12 = pVVar20->y;
                                                          pGVar1 = (object->fields).priceDisplay;
                                                          if ((pGVar1 != (GameObject *)0x0) &&
                                                             (pTVar7 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::GameObject::
                                                                        GameObject_get_transform
                                                                                  (pGVar1,(
                                                  MethodInfo *)0x0),
                                                  unaff_ESI = TypeInfo__UnityEngine__RectTransform,
                                                  pTVar7 != (Transform *)0x0)) {
                                                    pTVar21 = (Transform *)0x0;
                                                    if (pTVar7->klass ==
                                                        (Transform__Class *)
                                                        TypeInfo__UnityEngine__RectTransform) {
                                                      pTVar21 = pTVar7;
                                                    }
                                                    if (pTVar21 == (Transform *)0x0)
                                                    goto code_?;
                                                    pTVar21 = (Transform *)0x0;
                                                    if (pTVar7->klass ==
                                                        (Transform__Class *)
                                                        TypeInfo__UnityEngine__RectTransform) {
                                                      pTVar21 = pTVar7;
                                                    }
                                                    pRVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::RectTransform::
                                                              RectTransform_get_rect
                                                                        ((Rect *)&stack0xffffffe4,
                                                                         (RectTransform *)pTVar21,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar8 != (Transform *)0x0) {
                                                      value_01.y = pRVar9->m_Height + fVar12;
                                                      value_01.x = fVar11;
                                                      value_01.z = 0.0;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_set_localPosition
                                                                (pTVar8,value_01,(MethodInfo *)0x0)
                                                      ;
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
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    cVar22 = func_?(0);
    if (cVar22 != '\0') {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                       );
        func_?(&MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__);
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        func_?(&TypeInfo__BadgeManager);
        func_?(&TypeInfo__LevelingManager);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      pUVar23 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      unaff_ESI = (RectTransform__Class *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,(MethodInfo *)0x0);
      pUVar23 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pUVar23,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
      if (pUVar23 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      }
      else {
        pUVar24 = (UnityAction *)0x0;
        if (pUVar23->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar24 = pUVar23;
        }
        if (pUVar24 == (UnityAction *)0x0) goto code_?;
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar24;
        pUVar24 = (UnityAction *)0x0;
        if (pUVar23->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar24 = pUVar23;
        }
        if (pUVar24 == (UnityAction *)0x0) goto code_?;
      }
      func_?();
      pAVar3 = (this->fields).accessoryDataClient;
      if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
      level = (pAVar3->fields)._.lvl;
      this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BadgeManager);
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,(MethodInfo *)0x0
                );
      goto code_?;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar23 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    unaff_ESI = (RectTransform__Class *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,(MethodInfo *)0x0);
    pUVar23 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar23,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    if (pUVar23 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pUVar24 = (UnityAction *)0x0;
    if (pUVar23->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar24 = pUVar23;
    }
    if (pUVar24 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar24;
      pUVar24 = (UnityAction *)0x0;
      if (pUVar23->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar24 = pUVar23;
      }
      if (pUVar24 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
  pTVar7 = extraout_EDX;
code_?:
  func_?(pTVar7,unaff_ESI);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnPurchasePopupPop() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPurchasePopupPop
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem____c___OnPurchasePopupPop_b__33_0_UnityEngine__EventSystems__IInventoryChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryInventoryViewItem____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AccessoryInventoryViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AccessoryInventoryViewItem____c);
  }
  callbackFunction = TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)0x0) {
    if ((TypeInfo__AccessoryInventoryViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AccessoryInventoryViewItem____c);
    }
    object = TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AccessoryInventoryViewItem____c___OnPurchasePopupPop_b__33_0_UnityEngine__EventSystems__IInventoryChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0 = callbackFunction;
    func_?(&TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9__33_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
            );
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_SetLevelBadge
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__);
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    pAVar2 = (this->fields).accessoryDataClient;
    if (pAVar2 != (AccessoryDataClient *)0x0) {
      level = (pAVar2->fields)._.lvl;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0
                );
      return;
    }
  }
  else {
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar1;
      }
      if (pUVar3 == (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnequipAccessoryCallback() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_UnequipAccessoryCallback
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,(MethodInfo *)0x0)
    ;
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pMVar1->fields).OnAccessoryUnequipped = (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
      (pMVar1->fields).OnAccessoryUnequipped = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) goto code_?;
    }
    func_?();
    pTVar4 = (this->fields).equipCheckbox;
    if (pTVar4 != (Toggle *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn(pTVar4,0,(MethodInfo *)0x0);
      pTVar4 = (this->fields).equipCheckbox;
      if (pTVar4 != (Toggle *)0x0) {
        this_01 = (CanvasGroup *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)pTVar4,
                             UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                            );
        pTVar4 = (this->fields).equipCheckbox;
        if (pTVar4 != (Toggle *)0x0) {
          value = _UNK_?;
          if ((pTVar4->fields).m_IsOn != 0) {
            value = _UNK_?;
          }
          if (this_01 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnClicked>b__30_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_b__30_0
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).accessoryDataClient;
  if ((pAVar2 != (AccessoryDataClient *)0x0) && (x != (IAccessoryClicked *)0x0)) {
    ppIStack_1 = (IAccessoryClicked__Class **)(pAVar2->fields)._.cat;
    pIStack_3 = x;
    pIStack_4 = TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?(2);
    return;
  }
  ppIStack_1 = (IAccessoryClicked__Class **)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnClicked>b__30_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_b__30_1
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (x != (IAccessoryClicked *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
          pIVar2 = x->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar2->vtable).OpenAccessoryManagementScreen)[iVar5].method)
                    (x,pAVar1,(&(pIVar2->vtable).OpenCategoryScreen)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0);
    (*(code *)*puVar6)(x,pAVar1,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnEquip>b__31_0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnEquip_b__31_0
               (AccessoryInventoryViewItem *this,IAttachToBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAttachToBody;
    func_?();
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).accessoryDataClient;
  if ((pAVar2 != (AccessoryDataClient *)0x0) && (x != (IAttachToBody *)0x0)) {
    ppIStack_1 = (IAttachToBody__Class **)0x3f800000;
    puStack_3 = (undefined *)0x0;
    iStack_4 = (pAVar2->fields)._.sAID;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IAttachToBody,x);
    return;
  }
  ppIStack_1 = (IAttachToBody__Class **)&stack0xfffffffc;
  uVar5 = func_?(&iStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AccessoryInventoryViewItem() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__ctor
               (AccessoryInventoryViewItem *this,MethodInfo *method)

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
  (this->fields).highlightId = -1;
  (this->fields).effectDuration = 0.1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

