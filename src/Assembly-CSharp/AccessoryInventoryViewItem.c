
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
      if (((avatarAccessory == (AvatarAccessory *)0x0) ||
          (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)avatarAccessory,(MethodInfo *)0x0),
          pTVar1 == (Transform *)0x0)) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0),
         (this->fields).accessoryDataClient == (AccessoryDataClient *)0x0)) goto code_?;
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_AvatarAccessory_,pSVar3,StringLiteral__Images_,
                          (MethodInfo *)0x0);
      pAVar4 = (this->fields).accessoryDataClient;
      if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
      pSVar5 = (pAVar4->fields)._.url;
      pSVar6 = (String__Array *)func_?();
      if (pSVar6 == (String__Array *)0x0) goto code_?;
      if ((::StringLiteral__ == (String *)0x0) ||
         (iVar7 = func_?(::StringLiteral__,(pSVar6->klass->_0).element_class), iVar7 != 0))
      {
        pSVar8 = ::StringLiteral__;
        if (pSVar6->max_length != 0) {
          pSVar6->vector[0] = ::StringLiteral__;
          func_?(pSVar6->vector,pSVar8);
          if ((pSVar5 == (String *)0x0) ||
             (pSVar6 = mscorlib.dll::System::String::String_Split_4
                                 (pSVar5,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
             pSVar6 == (String__Array *)0x0)) goto code_?;
          if (pSVar6->max_length - 1 < pSVar6->max_length) {
            pSVar5 = pSVar6->vector[pSVar6->max_length - 1];
            pSVar6 = (String__Array *)func_?(TypeInfo__System__String,1);
            if (pSVar6 == (String__Array *)0x0) goto code_?;
            if ((::StringLiteral__ != (String *)0x0) &&
               (iVar7 = func_?(::StringLiteral__,(pSVar6->klass->_0).element_class),
               iVar7 == 0)) goto code_?;
            pSVar8 = ::StringLiteral__;
            if (pSVar6->max_length != 0) {
              pSVar6->vector[0] = ::StringLiteral__;
              func_?(pSVar6->vector,pSVar8);
              if ((pSVar5 == (String *)0x0) ||
                 (pSVar6 = mscorlib.dll::System::String::String_Split_4
                                     (pSVar5,pSVar6,StringSplitOptions__Enum_None,(MethodInfo *)0x0)
                 , pSVar6 == (String__Array *)0x0)) goto code_?;
              if (pSVar6->max_length != 0) {
                pSVar5 = mscorlib.dll::System::String::String_Concat_3
                                   (pSVar6->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0)
                ;
                if (pSVar5 == (String *)0x0) goto code_?;
                pSVar5 = mscorlib.dll::System::String::String_ToLower(pSVar5,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                   (pSVar3,pSVar5,(MethodInfo *)0x0);
                this_00 = (this->fields).previewImageStreaminAssetManual;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)
                          func_?(TypeInfo__UnityEngine__Events__UnityAction);
                if ((this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) ||
                   (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_01,(Object *)this,
                               MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__
                               ,(MethodInfo *)0x0), this_00 == (StreamedSpriteToImageManual *)0x0))
                goto code_?;
                StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                          (this_00,pSVar3,(UnityAction *)this_01,(MethodInfo *)0x0);
                pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                    ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)avatarAccessory,
                                     SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                                    );
                pMVar10 = (MonitorData *)0x0;
                if (pIVar9 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
                pIVar11 = pIVar9 + 2;
                while( true ) {
                  if ((int)pIVar9[1].monitor <= (int)pMVar10) {
                    return;
                  }
                  if (pIVar9[1].monitor <= pMVar10) break;
                  if (pIVar11->klass == (IEnumerable_1_System_Object___Class *)0x0)
                  goto code_?;
                  SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                            ((SkinnedMeshOptimizer *)pIVar11->klass,(MethodInfo *)0x0);
                  pMVar10 = pMVar10 + 1;
                  pIVar11 = (IEnumerable_1_System_Object_ *)&pIVar11->monitor;
                }
              }
            }
          }
        }
      }
      else {
        uVar12 = func_?(0);
        func_?(uVar12);
code_?:
        uVar12 = func_?(0);
        func_?(uVar12);
      }
      func_?();
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
                  this_05 = (Action_1_Object_ *)func_?();
                  if (this_05 != (Action_1_Object_ *)0x0) {
                    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                              (this_05,(Object *)this,
                               MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                               ,(MethodInfo *)0x0);
                    if (this_03 != (AccessoryLoader *)0x0) {
                      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
                      AccessoryLoader_LoadAccessory
                                (this_03,url,(Action_1_AvatarAccessory_ *)this_05,(MethodInfo *)0x0)
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
  this_00 = (SubscribableVariableBase_1_System_Int32Enum_ *)
            func_?(TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
  if (this_00 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    SubscribableVariableBase`1[System::Int32Enum]::
    SubscribableVariableBase_1_System_Int32Enum___ctor(this_00,0,(MethodInfo *)0x0);
    this_00[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
  if (pGVar1 == (GameObject *)0x0) goto code_?;
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
    if (pEVar3 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnClicked_b__30_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
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
  if (pEVar3 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
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
      this_02 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_02 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
    }
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar3 = (pMVar2->fields).OnAccessoryUnequipped;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,
                   MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                   (MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          (pMVar2->fields).OnAccessoryUnequipped = (Action *)0x0;
        }
        else {
          pAVar4 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar3;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
          (pMVar2->fields).OnAccessoryUnequipped = pAVar4;
          pAVar4 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar3;
          }
          if (pAVar4 == (Action *)0x0) goto code_?;
        }
        func_?();
        goto code_?;
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
  if (onEquip == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,
                   MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
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
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pMVar4 = (this->fields).targetBody;
        if (((pMVar4 != (MVBody *)0x0) &&
            (pAVar5 = (this->fields).accessoryDataClient, pAVar5 != (AccessoryDataClient *)0x0)) &&
           (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
                    (this_01,(pMVar4->fields)._._._._.id,(pAVar5->fields)._.slot,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem___OnEquip_b__31_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
                );
      return;
    }
  }
  func_?();
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
  this_00 = (SubscribableVariableBase_1_System_Int32Enum_ *)
            func_?(TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43);
  if (this_00 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    SubscribableVariableBase`1[System::Int32Enum]::
    SubscribableVariableBase_1_System_Int32Enum___ctor(this_00,0,(MethodInfo *)0x0);
    this_00[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    this_00[1].monitor = (MonitorData *)sizeOffset;
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  AccessoryInventoryViewItem_OnHoverEvent(this,20.0,(MethodInfo *)0x0);
  if (in_stack_1 == 0) {
    uVar2 = func_?();
    this_00 = (NullReferenceException *)func_?(uVar2);
    func_?(this_00);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar4,pMVar3);
    func_?();
    func_?();
  }
  else {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    cVar5 = (*pcRam_?)();
    if (cVar5 != '\0') {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)(in_stack_6);
      return;
    }
  }
  uVar2 = func_?();
  this_01 = (ArgumentException *)func_?(uVar2);
  func_?(this_01);
  pMVar3 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_01,pSVar4,pMVar3);
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (SubscribableVariableBase_1_System_Int32Enum_ *)
            func_?(TypeInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41);
  if (this_00 != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    SubscribableVariableBase`1[System::Int32Enum]::
    SubscribableVariableBase_1_System_Int32Enum___ctor(this_00,0,(MethodInfo *)0x0);
    this_00[1].klass = (SubscribableVariableBase_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreviewImageDownloadFinished() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_OnPreviewImageDownloadFinished
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  object = (RectTransform__Class *)this;
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
    this = (AccessoryInventoryViewItem *)object;
code_?:
    func_?();
code_?:
    func_?();
    pTVar2 = extraout_EDX;
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).loadingWheel;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pAVar3 = (this->fields).accessoryItemBackground;
    if ((pAVar3 == (AccessoryItemBackground *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar3,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pAVar3 = (this->fields).accessoryItemBackground;
    if (pAVar3 == (AccessoryItemBackground *)0x0) goto code_?;
    AccessoryItemBackground::AccessoryItemBackground_Initialize
              (pAVar3,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
    pAVar4 = (this->fields).accessoryDataClient;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
    unaff_EDI = (RectTransform__Class *)(this->fields).newAccessoryImage;
    if ((pAVar4->fields)._.iNew == 0) {
      pAVar5 = (pAVar4->fields)._.time;
      if (pAVar5 != (AccessoryTimelimit *)0x0) {
        bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                 AccessoryTimelimit_get_IsTimeLimited(pAVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) goto code_?;
        bVar7 = false;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pAVar4 = (this->fields).accessoryDataClient;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
    bVar7 = (pAVar4->fields)._.owns == 0;
code_?:
    if (unaff_EDI == (RectTransform__Class *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)unaff_EDI,bVar7,(MethodInfo *)0x0);
    if ((this->fields).bundleView != 0) {
      return;
    }
    pAVar4 = (this->fields).accessoryDataClient;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
    if (((pAVar4->fields)._.lvl != 0) && ((this->fields).locked != 0)) {
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      cVar8 = func_?(0);
      if (cVar8 != '\0') {
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
        pUVar9 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
        unaff_EDI = (RectTransform__Class *)
                    func_?(TypeInfo__UnityEngine__Events__UnityAction);
        if (unaff_EDI != (RectTransform__Class *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    ((NavMesh_OnNavMeshPreUpdate *)unaff_EDI,(Object *)this,
                     MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,(MethodInfo *)0x0);
          pUVar9 = (UnityAction *)
                    mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pUVar9,(Delegate *)unaff_EDI,(MethodInfo *)0x0);
          if (pUVar9 == (UnityAction *)0x0) {
            TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
          }
          else {
            pUVar10 = (UnityAction *)0x0;
            if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar10 = pUVar9;
            }
            if (pUVar10 == (UnityAction *)0x0) goto code_?;
            TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar10;
            pUVar10 = (UnityAction *)0x0;
            if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar10 = pUVar9;
            }
            if (pUVar10 == (UnityAction *)0x0) goto code_?;
          }
          func_?();
          pAVar4 = (this->fields).accessoryDataClient;
          if (pAVar4 != (AccessoryDataClient *)0x0) {
            level = (pAVar4->fields)._.lvl;
            this_04 = (Action_1_Object_ *)
                      func_?(
                                     TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                     );
            unaff_EDI = (RectTransform__Class *)0x0;
            if (this_04 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (this_04,(Object *)this,
                         MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              BadgeManager::BadgeManager_GetBadgeTexture
                        (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                         (MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      pUVar9 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      unaff_EDI = (RectTransform__Class *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
      if (unaff_EDI == (RectTransform__Class *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)unaff_EDI,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,(MethodInfo *)0x0);
      pUVar9 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar9,(Delegate *)unaff_EDI,(MethodInfo *)0x0);
      if (pUVar9 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
        func_?();
        goto code_?;
      }
      pUVar10 = (UnityAction *)0x0;
      if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar10 = pUVar9;
      }
      if (pUVar10 != (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar10;
        pUVar10 = (UnityAction *)0x0;
        if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar10 = pUVar9;
        }
        if (pUVar10 != (UnityAction *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__UnityEngine__RectTransform;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pTVar11 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar11 = pTVar2;
    }
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pTVar11 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar11 = pTVar2;
    }
    pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffe4,(RectTransform *)pTVar11,(MethodInfo *)0x0);
    fVar13 = SubscribableVariableBase`1[System::Single]::
             SubscribableVariableBase_1_System_Single__get_Value
                       ((SubscribableVariableBase_1_System_Single_ *)pRVar12->m_XMin,
                        (MethodInfo *)pRVar12->m_YMin);
    fVar13 = fVar13 / _UNK_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::Int32Enum,System::
    Single]::
    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                *)&stack0xffffffd4,(MethodInfo *)0x0);
    this_07 = (RectTransform__Class *)(this->fields).discount;
    if (this_07 == (RectTransform__Class *)0x0) goto code_?;
    puVar14 = &UNK_?;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_07,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    puVar15 = &UNK_?;
    value_01.y = (float)puVar14;
    value_01.x = fVar13;
    value_01.z = (float)this_07;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar2,value_01,(MethodInfo *)0x0);
    pAVar16 = (this->fields).timeLimitDisplayer;
    unaff_EDI = this_07;
    if ((pAVar16 == (AccessoryTimeLimitDisplayer *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar16,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    value.y = (float)pTVar2;
    value.x = (float)puVar15;
    value.z = (float)this_07;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar11,value,(MethodInfo *)0x0);
    this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_05 == (MVNetworkGame *)0x0) ||
       ((pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_05,(MethodInfo *)0x0),
        pMVar17 == (MVLocalPlayer *)0x0 ||
        (pAVar4 = (this->fields).accessoryDataClient, pAVar4 == (AccessoryDataClient *)0x0))))
    goto code_?;
    if ((pMVar17->fields)._.level < (pAVar4->fields)._.lvl) {
      return;
    }
    pAVar16 = (this->fields).timeLimitDisplayer;
    if (pAVar16 == (AccessoryTimeLimitDisplayer *)0x0) goto code_?;
    (pAVar16->fields).accessoryTimeLimitData = (pAVar4->fields)._.time;
    func_?();
    pAVar16 = (this->fields).timeLimitDisplayer;
    if (pAVar16 == (AccessoryTimeLimitDisplayer *)0x0) goto code_?;
    unaff_EDI = (RectTransform__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar16,(MethodInfo *)0x0);
    if ((this->fields).locked == 0) {
      this._0_1_ = 0;
    }
    else {
      pAVar4 = (this->fields).accessoryDataClient;
      if ((pAVar4 == (AccessoryDataClient *)0x0) ||
         (pAVar5 = (pAVar4->fields)._.time, pAVar5 == (AccessoryTimelimit *)0x0))
      goto code_?;
      this._0_1_ = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                   AccessoryTimelimit_get_IsTimeLimited(pAVar5,(MethodInfo *)0x0);
    }
    if (unaff_EDI == (RectTransform__Class *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)unaff_EDI,(bool)this,(MethodInfo *)0x0);
    pAVar4 = (((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
    if ((pAVar4->fields)._.dsc < 100) {
      bVar7 = (pAVar4->fields)._.cost == 0;
    }
    else {
      bVar7 = true;
    }
    pGVar1 = (((AccessoryInventoryViewItem *)object)->fields).discount;
    if (((((AccessoryInventoryViewItem *)object)->fields).locked == 0) ||
       ((pAVar4->fields)._.dsc < 1)) {
      this._0_1_ = 0;
    }
    else {
      this._0_1_ = bVar7 ^ 1;
    }
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(bool)this,(MethodInfo *)0x0);
    pGVar1 = (((AccessoryInventoryViewItem *)object)->fields).freeLabel;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(((AccessoryInventoryViewItem *)object)->fields).locked & bVar7,
               (MethodInfo *)0x0);
    pAVar4 = (((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
    unaff_EDI = (RectTransform__Class *)
                (((AccessoryInventoryViewItem *)object)->fields).discountText;
    if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
    pSVar18 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pAVar4->fields)._.dsc,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Format
              (StringLiteral___0__,(Object *)pSVar18,(MethodInfo *)0x0);
    if (unaff_EDI == (RectTransform__Class *)0x0) goto code_?;
    (*(code *)((Toggle__Class *)(unaff_EDI->_0).image)[1].vtable.Equals.method)();
    pTVar19 = (((AccessoryInventoryViewItem *)object)->fields).equipCheckbox;
    if ((pTVar19 == (Toggle *)0x0) ||
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar19,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(((AccessoryInventoryViewItem *)object)->fields).locked == 0,
               (MethodInfo *)0x0);
    if ((((AccessoryInventoryViewItem *)object)->fields).locked == 0) {
      pAVar4 = (((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
      unaff_EDI = (RectTransform__Class *)
                  (((AccessoryInventoryViewItem *)object)->fields).equipCheckbox;
      if (((pAVar4 == (AccessoryDataClient *)0x0) ||
          (this_01 = (((AccessoryInventoryViewItem *)object)->fields).targetBody,
          this_01 == (MVBody *)0x0)) ||
         (bVar6 = MVBody::MVBody_IsAccessoryEquipped
                             (this_01,(pAVar4->fields)._.sAID,(MethodInfo *)0x0),
         unaff_EDI == (RectTransform__Class *)0x0)) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                ((Toggle *)unaff_EDI,bVar6,(MethodInfo *)0x0);
    }
    pTVar19 = (((AccessoryInventoryViewItem *)object)->fields).equipCheckbox;
    if (pTVar19 == (Toggle *)0x0) goto code_?;
    this_06 = (CanvasGroup *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)pTVar19,
                         UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                        );
    pTVar19 = (((AccessoryInventoryViewItem *)object)->fields).equipCheckbox;
    if (pTVar19 == (Toggle *)0x0) goto code_?;
    fVar13 = _UNK_?;
    if ((pTVar19->fields).m_IsOn != 0) {
      fVar13 = _UNK_?;
    }
    if (this_06 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_06,fVar13,(MethodInfo *)0x0);
    pTVar19 = (((AccessoryInventoryViewItem *)object)->fields).equipCheckbox;
    if (pTVar19 == (Toggle *)0x0) goto code_?;
    this_02 = (UnityEvent_1_UnityEngine_Vector2_ *)(pTVar19->fields).onValueChanged;
    unaff_EDI = (RectTransform__Class *)func_?();
    if ((unaff_EDI == (RectTransform__Class *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  ((UnityAction_1_System_ByteEnum_ *)unaff_EDI,(Object *)object,
                   MethodInfo__AccessoryInventoryViewItem__OnEquip_bool_,(MethodInfo *)0x0),
       this_02 == (UnityEvent_1_UnityEngine_Vector2_ *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
    UnityEvent_1_UnityEngine_Vector2__AddListener
              (this_02,(UnityAction_1_UnityEngine_Vector2_ *)unaff_EDI,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
              );
    pGVar1 = (((AccessoryInventoryViewItem *)object)->fields).priceDisplay;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(((AccessoryInventoryViewItem *)object)->fields).locked,(MethodInfo *)0x0);
    pGVar1 = (((AccessoryInventoryViewItem *)object)->fields).priceStrikeout;
    if ((((AccessoryInventoryViewItem *)object)->fields).locked == 0) {
code_?:
      bVar7 = false;
    }
    else {
      pAVar4 = (((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
      if (pAVar4 == (AccessoryDataClient *)0x0) goto code_?;
      if ((pAVar4->fields)._.dsc < 1) goto code_?;
      bVar7 = 0 < (pAVar4->fields)._.cost;
    }
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,bVar7,(MethodInfo *)0x0);
    pAVar4 = (((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
    unaff_EDI = (RectTransform__Class *)
                (((AccessoryInventoryViewItem *)object)->fields).priceStrikeoutText;
    if (((pAVar4 == (AccessoryDataClient *)0x0) ||
        (pSVar18 = mscorlib.dll::System::Int32::Int32_ToString_1
                             ((Int32 *)&(pAVar4->fields)._.cost,StringLiteral_N0,(MethodInfo *)0x0),
        pSVar18 == (String *)0x0)) ||
       (pSVar18 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar18,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       unaff_EDI == (RectTransform__Class *)0x0)) goto code_?;
    pTVar20 = (Toggle__Class *)(unaff_EDI->_0).image;
    (*(code *)pTVar20[1].vtable.Equals.method)(unaff_EDI,pSVar18,pTVar20[1].vtable.Finalize.methodPtr)
    ;
    this_03 = (AccessoryData *)(((AccessoryInventoryViewItem *)object)->fields).accessoryDataClient;
    unaff_EDI = (RectTransform__Class *)(((AccessoryInventoryViewItem *)object)->fields).priceText;
    if (this_03 == (AccessoryData *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
    AccessoryData_get_DiscountedPrice(this_03,(MethodInfo *)0x0);
    pSVar18 = mscorlib.dll::System::Int32::Int32_ToString_1
                        ((Int32 *)&stack0xfffffff8,StringLiteral_N0,(MethodInfo *)0x0);
    if ((pSVar18 == (String *)0x0) ||
       (pSVar18 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar18,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       unaff_EDI == (RectTransform__Class *)0x0)) goto code_?;
    pTVar20 = (Toggle__Class *)(unaff_EDI->_0).image;
    (*(code *)pTVar20[1].vtable.Equals.method)(unaff_EDI,pSVar18,pTVar20[1].vtable.Finalize.methodPtr)
    ;
    pRVar21 = (((AccessoryInventoryViewItem *)object)->fields).levelRequirement;
    if (pRVar21 == (RawImage *)0x0) goto code_?;
    unaff_EDI = (RectTransform__Class *)
                UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                          ((Graphic *)pRVar21,(MethodInfo *)0x0);
    pRVar21 = (((AccessoryInventoryViewItem *)object)->fields).levelRequirement;
    if ((pRVar21 == (RawImage *)0x0) ||
       (pTVar2 = (Transform *)
                  UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pRVar21,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe8,pTVar2,(MethodInfo *)0x0);
    fVar13 = pVVar22->x;
    pRVar21 = (((AccessoryInventoryViewItem *)object)->fields).levelRequirement;
    if ((pRVar21 == (RawImage *)0x0) ||
       (pTVar2 = (Transform *)
                  UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pRVar21,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe8,pTVar2,(MethodInfo *)0x0);
    fVar23 = pVVar22->y;
    pGVar1 = (((AccessoryInventoryViewItem *)object)->fields).priceDisplay;
    if ((pGVar1 == (GameObject *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0),
       object = TypeInfo__UnityEngine__RectTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pTVar11 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar11 = pTVar2;
    }
    this = (AccessoryInventoryViewItem *)TypeInfo__UnityEngine__RectTransform;
    if (pTVar11 != (Transform *)0x0) {
      pTVar11 = (Transform *)0x0;
      if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar11 = pTVar2;
      }
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffe4,(RectTransform *)pTVar11,(MethodInfo *)0x0);
      fVar24 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
               Int32Enum,System::Single]::
               Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                           *)&stack0xffffffc4,(MethodInfo *)0x0);
      if (unaff_EDI != (RectTransform__Class *)0x0) {
        value_00.y = fVar24 + fVar23;
        value_00.x = fVar13;
        value_00.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  ((Transform *)unaff_EDI,value_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(pTVar2,this);
  pTVar2 = extraout_EDX_00;
code_?:
  func_?(pTVar2,unaff_EDI);
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
code_?:
    func_?();
  }
  else {
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
        this_01 = (Action_1_Object_ *)
                  func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          BadgeManager::BadgeManager_GetBadgeTexture
                    (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar3;
    pUVar3 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar3 = pUVar1;
    }
    if (pUVar3 != (UnityAction *)0x0) goto code_?;
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
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                 (MethodInfo *)0x0);
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
    uVar2 = 0;
    uVar3 = (x->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
          pVVar4 = &(x->klass->vtable).OpenAccessoryManagementScreen +
                   x->klass->interfaceOffsets[uVar2].offset;
          (*pVVar4->methodPtr)(x,pAVar1,pVVar4->method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0);
    (*(code *)*puVar5)(x,pAVar1,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnEquip>b__31_0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnEquip_b__31_0
               (AccessoryInventoryViewItem *this,IAttachToBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAttachToBody);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    iVar2 = (pAVar1->fields)._.sAID;
    if (x != (IAttachToBody *)0x0) {
      uVar3 = 0;
      uVar4 = (x->klass->_1).interface_offsets_count;
      if (uVar4 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAttachToBody) {
            pIVar5 = &x->klass->vtable + x->klass->interfaceOffsets[uVar3].offset;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      pIVar5 = (IAttachToBody__VTable *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IAttachToBody,0);
code_?:
      (*(pIVar5->AttachToBody).methodPtr)(x,iVar2,0,0x3f800000,(pIVar5->AttachToBody).method);
      return;
    }
  }
  func_?();
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
  if (this_00 != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
              (this_00,(MethodInfo *)0x0);
    (this->fields).accessoryLoader = this_00;
    func_?(&(this->fields).accessoryLoader,this_00);
    (this->fields).highlightId = -1;
    (this->fields).effectDuration = 0.1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

