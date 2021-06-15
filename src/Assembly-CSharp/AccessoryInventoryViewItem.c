
/* Void AccessoryCreatedCallback(AvatarAccessory) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_AccessoryCreatedCallback
               (AccessoryInventoryViewItem *this,AvatarAccessory *avatarAccessory,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).wasDestroyed == 0) {
    pTVar1 = (this->fields).rootTransform;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((avatarAccessory == (AvatarAccessory *)0x0) ||
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)avatarAccessory,(MethodInfo *)0x0),
         pTVar1 == (Transform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(this->fields).rootTransform,(MethodInfo *)0x0);
      pAVar3 = (this->fields).accessoryDataClient;
      if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
      piVar4 = (int *)func_?();
      if (piVar4 == (int *)0x0) goto code_?;
      pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
      piVar6 = (int32_t *)func_?(piVar4);
      (pAVar3->fields)._.cat = *piVar6;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      mscorlib.dll::System::String::String_Concat_3
                (StringLiteral_AvatarAccessory_,pSVar5,StringLiteral__Images_,(MethodInfo *)0x0);
      pAVar3 = (this->fields).accessoryDataClient;
      if (pAVar3 == (AccessoryDataClient *)0x0) goto code_?;
      pSVar5 = (pAVar3->fields)._.url;
      pSVar7 = (String__Array *)func_?(TypeInfo__System__String,1);
      if (pSVar7 == (String__Array *)0x0) goto code_?;
      if ((::StringLiteral__ == (String *)0x0) ||
         (iVar8 = func_?(::StringLiteral__,(pSVar7->klass->_0).element_class), iVar8 != 0))
      {
        if (pSVar7->max_length == 0) goto code_?;
        pSVar7->vector[0] = ::StringLiteral__;
        if ((pSVar5 == (String *)0x0) ||
           (pSVar7 = mscorlib.dll::System::String::String_Split_5
                               (pSVar5,pSVar7,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar7 == (String__Array *)0x0)) goto code_?;
        uVar9 = pSVar7->max_length;
        if (uVar9 <= uVar9 - 1) goto code_?;
        pSVar5 = pSVar7->vector[uVar9 - 1];
        pSVar7 = (String__Array *)func_?(TypeInfo__System__String,1);
        if (pSVar7 == (String__Array *)0x0) goto code_?;
        if ((::StringLiteral__ != (String *)0x0) &&
           (iVar8 = func_?(::StringLiteral__,(pSVar7->klass->_0).element_class), iVar8 == 0
           )) goto code_?;
        if (pSVar7->max_length == 0) goto code_?;
        pSVar7->vector[0] = ::StringLiteral__;
        if ((pSVar5 == (String *)0x0) ||
           (pSVar7 = mscorlib.dll::System::String::String_Split_5
                               (pSVar5,pSVar7,StringSplitOptions__Enum_None,(MethodInfo *)0x0),
           pSVar7 == (String__Array *)0x0)) goto code_?;
        if (pSVar7->max_length != 0) {
          pSVar5 = StringLiteral_Image_unity3d;
          pSVar10 = mscorlib.dll::System::String::String_Concat_2
                              (pSVar7->vector[0],StringLiteral_Image_unity3d,(MethodInfo *)0x0);
          if (pSVar10 == (String *)0x0) goto code_?;
          pSVar10 = mscorlib.dll::System::String::String_ToLower(pSVar10,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_2(pSVar5,pSVar10,(MethodInfo *)0x0);
          this_00 = (this->fields).previewImageStreaminAssetManual;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this,
                     MethodInfo__AccessoryInventoryViewItem__OnPreviewImageDownloadFinished__,
                     (MethodInfo *)0x0);
          if (this_00 == (StreamedSpriteToImageManual *)0x0) goto code_?;
          StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                    (this_00,pSVar5,(UnityAction *)this_01,(MethodInfo *)0x0);
          pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              ((GameObject *)avatarAccessory,
                               SkinnedMeshOptimizer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<SkinnedMeshOptimizer>______
                              );
          uVar9 = 0;
          if (pUVar11 == (UseInteratorVisualization__Array *)0x0) goto code_?;
          ppUVar12 = pUVar11->vector;
          while( true ) {
            if ((int)pUVar11->max_length <= (int)uVar9) {
              return;
            }
            if (pUVar11->max_length <= uVar9) break;
            if (*ppUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                      ((SkinnedMeshOptimizer *)*ppUVar12,(MethodInfo *)0x0);
            uVar9 = uVar9 + 1;
            ppUVar12 = ppUVar12 + 1;
          }
          goto code_?;
        }
      }
      else {
        uVar13 = func_?(0,0);
        func_?(uVar13);
code_?:
        uVar13 = func_?(0,0);
        func_?(uVar13);
code_?:
        uVar13 = func_?(0,0);
        func_?(uVar13);
code_?:
        uVar13 = func_?(0,0);
        func_?(uVar13);
code_?:
        uVar13 = func_?(0,0);
        func_?(uVar13);
      }
      uVar13 = func_?(0);
      func_?(uVar13);
      goto code_?;
    }
  }
  if (avatarAccessory != (AvatarAccessory *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)avatarAccessory,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize(AccessoryDataClient, Transform, MVBody, Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
               (AccessoryInventoryViewItem *this,AccessoryDataClient *accessoryDataClient,
               Transform *rootTransform,MVBody *targetBody,bool bundleView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).accessoryDataClient = accessoryDataClient;
  (this->fields).rootTransform = rootTransform;
  if (accessoryDataClient != (AccessoryDataClient *)0x0) {
    (this->fields).locked = (accessoryDataClient->fields)._.owns == 0;
    (this->fields).targetBody = targetBody;
    (this->fields).bundleView = bundleView;
    if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__HighlightManager);
    }
    this_04 = HighlightManager::HighlightManager_GetHighLights_2
                        (HighlightType__Enum_Accessory,
                         System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                        );
    index = 0;
    if (this_04 !=
        (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
         *)0x0) {
      while( true ) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                            MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                           );
        if ((int)pOVar1 <= index) break;
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index,
                            MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                           );
        if ((pIVar2 == (IEventSystemHandler *)0x0) || (pIVar2[1].monitor == (MonitorData *)0x0))
        goto code_?;
        if (*(int *)(pIVar2[1].monitor + 8) == (accessoryDataClient->fields)._.aMDID) {
          pGVar3 = (this->fields).redDotNotification;
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,(this->fields).locked,(MethodInfo *)0x0);
          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index,
                              MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                             );
          if (pIVar2 == (IEventSystemHandler *)0x0) goto code_?;
          (this->fields).highlightId = (int32_t)pIVar2[1].klass;
        }
        index = index + 1;
      }
      this_00 = (this->fields).purchasePopupButton;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,bundleView ^ 1,(MethodInfo *)0x0);
        this_01 = (this->fields).previewImage;
        if (this_01 != (RectTransform *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,0,(MethodInfo *)0x0);
            this_02 = (this->fields).accessoryItemBackground;
            if (this_02 != (AccessoryItemBackground *)0x0) {
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0);
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
                pGVar3 = (this->fields).loadingWheel;
                if (pGVar3 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,1,(MethodInfo *)0x0);
                  this_03 = (this->fields).accessoryLoader;
                  url = (accessoryDataClient->fields)._.url;
                  this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?(TypeInfo__System__Action<AvatarAccessory>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_05,(Object *)this,
                             MethodInfo__AccessoryInventoryViewItem__AccessoryCreatedCallback_AvatarAccessory_
                             ,
                             MethodInfo__System__Action<AvatarAccessory>__Action_System__Object__void__
                            );
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnClicked() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnClicked
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
        func_?();
      }
      HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem___OnClicked_m__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnClicked_m__1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnDestroy
               (AccessoryInventoryViewItem *this,MethodInfo *method)

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
code_?:
    this_00 = (this->fields).accessoryLoader;
    (this->fields).wasDestroyed = 1;
    if (this_00 != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
      (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pAVar4 = (pMVar3->fields).OnAccessoryUnequipped;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pAVar4 = (Action *)0x0;
      if (pAVar5 != (Action *)0x0) {
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar5;
        }
        pAVar6 = TypeInfo__System__Action;
        if (pAVar4 == (Action *)0x0) goto code_?;
      }
      (pMVar3->fields).OnAccessoryUnequipped = pAVar4;
      goto code_?;
    }
  }
  func_?(0);
  pAVar5 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pAVar5,pAVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEquip(Boolean) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnEquip
               (AccessoryInventoryViewItem *this,bool onEquip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).locked == 0) {
    if (onEquip == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,
                   (MethodInfo *)0x0);
        pAVar4 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pAVar2 = (Action *)0x0;
        if (pAVar4 != (Action *)0x0) {
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAVar2 = pAVar4;
          }
          if (pAVar2 == (Action *)0x0) {
            func_?(pAVar4,TypeInfo__System__Action);
            goto code_?;
          }
        }
        (pMVar1->fields).OnAccessoryUnequipped = pAVar2;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        this_00 = (this->fields).targetBody;
        if (this_00 != (MVBody *)0x0) {
          avatarBodyWoID =
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
          ;
          pAVar5 = (this->fields).accessoryDataClient;
          if ((pAVar5 != (AccessoryDataClient *)0x0) &&
             (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnEquipAccessory
                      (this_01,(int32_t)avatarBodyWoID,(pAVar5->fields)._.slot,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem___OnEquip_m__2_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
              );
  }
  return;
}


/* IEnumerator OnHoverEvent(Single) */

IEnumerator *
Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnHoverEvent
          (AccessoryInventoryViewItem *this,float sizeOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).testState = (int32_t)this;
    (this_00->fields).originalScale.y = sizeOffset;
    return (IEnumerator *)this_00;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Badge_not_loaded_for_accessory_l,pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pRVar3 = (this->fields).levelRequirement;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    pRVar3 = (this->fields).levelRequirement;
    if ((pRVar3 != (RawImage *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pRVar3,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
       ) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = 20.0;
    (this_00->fields).testState = (int32_t)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPointerExit
               (AccessoryInventoryViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem___OnHoverEvent_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = -76.0;
    (this_00->fields).testState = (int32_t)this;
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
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  iStack_3 = 0;
  if ((this->fields).wasDestroyed != 0) {
    return;
  }
  this_00 = (this->fields).previewImage;
  if ((this_00 != (RectTransform *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
  {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
    pGVar4 = (this->fields).loadingWheel;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pAVar5 = (this->fields).accessoryItemBackground;
      if ((pAVar5 != (AccessoryItemBackground *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pAVar5,(MethodInfo *)0x0),
         pGVar4 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pAVar5 = (this->fields).accessoryItemBackground;
        if (pAVar5 != (AccessoryItemBackground *)0x0) {
          AccessoryItemBackground::AccessoryItemBackground_Initialize
                    (pAVar5,(this->fields).accessoryDataClient,(MethodInfo *)0x0);
          pAVar6 = (this->fields).accessoryDataClient;
          pGVar4 = (this->fields).newAccessoryImage;
          if (pAVar6 != (AccessoryDataClient *)0x0) {
            if ((pAVar6->fields)._.iNew == 0) {
              if ((pAVar6 != (AccessoryDataClient *)0x0) &&
                 (pAVar7 = (pAVar6->fields)._.time, pAVar7 != (AccessoryTimelimit *)0x0)) {
                bVar8 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                         AccessoryTimelimit_get_IsTimeLimited(pAVar7,(MethodInfo *)0x0);
                if (bVar8 != 0) goto code_?;
                bVar9 = false;
                goto code_?;
              }
            }
            else {
code_?:
              pAVar6 = (this->fields).accessoryDataClient;
              if (pAVar6 != (AccessoryDataClient *)0x0) {
                bVar9 = (pAVar6->fields)._.owns == 0;
code_?:
                if (pGVar4 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,bVar9,(MethodInfo *)0x0);
                  if ((this->fields).bundleView != 0) {
                    return;
                  }
                  pAVar6 = (this->fields).accessoryDataClient;
                  if (pAVar6 != (AccessoryDataClient *)0x0) {
                    if (((pAVar6->fields)._.lvl != 0) && ((this->fields).locked != 0)) {
                      if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                        func_?(TypeInfo__LevelingManager);
                      }
                      bVar8 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0)
                      ;
                      if (bVar8 == 0) {
                        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000
                             ) != 0) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                          func_?(TypeInfo__LevelingManager);
                        }
                        pUVar10 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
                        pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar11,(Object *)this,
                                   MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
                                   (MethodInfo *)0x0);
                        pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pUVar10,(Delegate *)pUVar11,
                                             (MethodInfo *)0x0);
                        pLVar13 = TypeInfo__LevelingManager->static_fields;
                        pUVar10 = (UnityAction *)
                                  func_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction
                                                 );
                        pLVar13->OnLevelingInitialized = pUVar10;
                      }
                      else {
                        if (cRam_? == '\0') {
                          func_?(_UNK_?);
                          cRam_? = '\x01';
                        }
                        if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000
                             ) != 0) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                          func_?(TypeInfo__LevelingManager);
                        }
                        pUVar10 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
                        pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar11,(Object *)this,
                                   MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
                                   (MethodInfo *)0x0);
                        pUVar14 = (UnityAction *)
                                  mscorlib.dll::System::Delegate::Delegate_Remove
                                            ((Delegate *)pUVar10,(Delegate *)pUVar11,
                                             (MethodInfo *)0x0);
                        uVar15 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar14);
                        pUVar10 = (UnityAction *)0x0;
                        if (pUVar14 != (UnityAction *)0x0) {
                          if (pUVar14->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                            pUVar10 = pUVar14;
                          }
                          if (pUVar10 == (UnityAction *)0x0) goto code_?;
                        }
                        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar10;
                        pAVar6 = (this->fields).accessoryDataClient;
                        if (pAVar6 == (AccessoryDataClient *)0x0) goto code_?;
                        level = (pAVar6->fields)._.lvl;
                        pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(
                                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                                  );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar11,(Object *)this,
                                   MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                                   ,
                                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                                  );
                        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000)
                             != 0) && ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
                          func_?(TypeInfo__BadgeManager);
                        }
                        BadgeManager::BadgeManager_GetBadgeTexture
                                  (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar11
                                   ,(MethodInfo *)0x0);
                      }
                    }
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                    uVar15 = CONCAT44(TypeInfo__UnityEngine__RectTransform,pTVar16);
                    if (pTVar16 != (Transform *)0x0) {
                      pTVar17 = (Transform *)0x0;
                      if (pTVar16->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform
                         ) {
                        pTVar17 = pTVar16;
                      }
                      if (pTVar17 == (Transform *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)&stack0xffffffbc,(RectTransform *)pTVar17,(MethodInfo *)0x0
                                );
                      VStack_18.y = SubscribableVariableBase`1[System::Single]::
                                   SubscribableVariableBase_1_System_Single__get_Value
                                             ((SubscribableVariableBase_1_System_Single_ *)
                                              &stack0xffffffac,(MethodInfo *)0x0);
                      UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis
                      ::CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffac,
                                 (MethodInfo *)0x0);
                      func_?(&uStack_2);
                      pGVar4 = (this->fields).discount;
                      if ((pGVar4 != (GameObject *)0x0) &&
                         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                         pTVar16 != (Transform *)0x0)) {
                        value.z = fStack_1;
                        value.x = (float)(undefined4)uStack_2;
                        value.y = (float)uStack_2._4_4_;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                  (pTVar16,value,(MethodInfo *)0x0);
                        pAVar19 = (this->fields).timeLimitDisplayer;
                        if ((pAVar19 != (AccessoryTimeLimitDisplayer *)0x0) &&
                           (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)pAVar19,(MethodInfo *)0x0),
                           pTVar16 != (Transform *)0x0)) {
                          value_00.z = fStack_1;
                          value_00.x = (float)(undefined4)uStack_2;
                          value_00.y = (float)uStack_2._4_4_;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar16,value_00,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                            func_?(TypeInfo__MVGameControllerBase);
                          }
                          this_04 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((this_04 != (MVNetworkGame *)0x0) &&
                             (this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                  (this_04,(MethodInfo *)0x0),
                             this_05 != (MVLocalPlayer *)0x0)) {
                            pOVar20 = System.dll::System::Collections::Generic::
                                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                      ::Single,System::Object]::
                                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)this_05,(MethodInfo *)0x0);
                            pAVar6 = (this->fields).accessoryDataClient;
                            if (pAVar6 != (AccessoryDataClient *)0x0) {
                              if ((int)pOVar20 < (pAVar6->fields)._.lvl) {
                                return;
                              }
                              if ((pAVar6 != (AccessoryDataClient *)0x0) &&
                                 (pAVar19 = (this->fields).timeLimitDisplayer,
                                 pAVar19 != (AccessoryTimeLimitDisplayer *)0x0)) {
                                (pAVar19->fields).accessoryTimeLimitData = (pAVar6->fields)._.time;
                                pAVar19 = (this->fields).timeLimitDisplayer;
                                if (pAVar19 != (AccessoryTimeLimitDisplayer *)0x0) {
                                  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_1_get_gameObject
                                                      ((Component_1 *)pAVar19,(MethodInfo *)0x0);
                                  if ((this->fields).locked == 0) {
                                    this._0_1_ = 0;
                                  }
                                  else {
                                    pAVar6 = (this->fields).accessoryDataClient;
                                    if ((pAVar6 == (AccessoryDataClient *)0x0) ||
                                       (pAVar7 = (pAVar6->fields)._.time,
                                       pAVar7 == (AccessoryTimelimit *)0x0)) goto code_?;
                                    this._0_1_ = MVWorldObject.dll::MV::WorldObject::Accessories::
                                                 AccessoryTimelimit::
                                                 AccessoryTimelimit_get_IsTimeLimited
                                                           (pAVar7,(MethodInfo *)0x0);
                                  }
                                  if (pGVar4 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar4,(bool)this,(MethodInfo *)0x0);
                                    pAVar6 = (object->fields).accessoryDataClient;
                                    if (pAVar6 != (AccessoryDataClient *)0x0) {
                                      iVar21 = (pAVar6->fields)._.dsc;
                                      if (iVar21 < 100) {
                                        if (pAVar6 == (AccessoryDataClient *)0x0)
                                        goto code_?;
                                        fVar22 = (float)(uint)((pAVar6->fields)._.cost == 0);
                                      }
                                      else {
                                        fVar22 = 1.4013e-45;
                                      }
                                      VStack_18.y = fVar22;
                                      pGVar4 = (object->fields).discount;
                                      if ((object->fields).locked == 0) {
code_?:
                                        this._0_1_ = 0;
                                      }
                                      else {
                                        if (pAVar6 == (AccessoryDataClient *)0x0)
                                        goto code_?;
                                        if (iVar21 < 1) goto code_?;
                                        this._0_1_ = SUB41(fVar22,0) ^ 1;
                                      }
                                      if (pGVar4 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar4,(bool)this,(MethodInfo *)0x0);
                                        pGVar4 = (object->fields).freeLabel;
                                        if (pGVar4 != (GameObject *)0x0) {
                                          bVar8 = 0;
                                          if ((object->fields).locked != 0) {
                                            bVar8 = VStack_18.y._0_1_;
                                          }
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGVar4,bVar8,(MethodInfo *)0x0);
                                          pTVar23 = (object->fields).discountText;
                                          if ((object->fields).accessoryDataClient !=
                                              (AccessoryDataClient *)0x0) {
                                            pOVar20 = (Object *)func_?();
                                            if ((((uint)(TypeInfo__System__String->vtable).Equals.
                                                        methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__System__String->_1).cctor_started == 0))
                                            {
                                              func_?(TypeInfo__System__String);
                                            }
                                            pSVar24 = mscorlib.dll::System::String::String_Format
                                                                (StringLiteral___0__,pOVar20,
                                                                 (MethodInfo *)0x0);
                                            if (pTVar23 != (Text *)0x0) {
                                              (*(code *)(pTVar23->klass->vtable).set_text.method)
                                                        (pTVar23,pSVar24,
                                                         (pTVar23->klass->vtable).
                                                         CalculateLayoutInputHorizontal_1.methodPtr)
                                              ;
                                              pTVar25 = (object->fields).equipCheckbox;
                                              if ((pTVar25 != (Toggle *)0x0) &&
                                                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_1_get_gameObject
                                                                      ((Component_1 *)pTVar25,
                                                                       (MethodInfo *)0x0),
                                                 pGVar4 != (GameObject *)0x0)) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive
                                                          (pGVar4,(object->fields).locked == 0,
                                                           (MethodInfo *)0x0);
                                                if ((object->fields).locked == 0) {
                                                  pAVar6 = (object->fields).accessoryDataClient;
                                                  pTVar25 = (object->fields).equipCheckbox;
                                                  if (((pAVar6 == (AccessoryDataClient *)0x0) ||
                                                      (this_01 = (object->fields).targetBody,
                                                      this_01 == (MVBody *)0x0)) ||
                                                     (bVar8 = MVBody::MVBody_IsAccessoryEquipped
                                                                         (this_01,(pAVar6->fields)._
                                                                                  .sAID,
                                                                          (MethodInfo *)0x0),
                                                     pTVar25 == (Toggle *)0x0))
                                                  goto code_?;
                                                  UnityEngine.UI.dll::UnityEngine::UI::Toggle::
                                                  Toggle_Set(pTVar25,bVar8,(MethodInfo *)0x0);
                                                }
                                                pTVar25 = (object->fields).equipCheckbox;
                                                if (pTVar25 != (Toggle *)0x0) {
                                                  this_06 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_1_GetComponent_58
                                                                      ((Component_1 *)pTVar25,
                                                                                                                                              
                                                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                                                  );
                                                  pTVar25 = (object->fields).equipCheckbox;
                                                  if (pTVar25 != (Toggle *)0x0) {
                                                    bVar8 = UnityEngine.UI.dll::UnityEngine::UI::
                                                             Toggle::Toggle_get_isOn
                                                                       (pTVar25,(MethodInfo *)0x0);
                                                    fVar22 = _UNK_?;
                                                    if (bVar8 == 0) {
                                                      fVar22 = _UNK_?;
                                                    }
                                                    if (this_06 != (MVInteractableBase *)0x0) {
                                                      UnityEngine.UIModule.dll::UnityEngine::
                                                      CanvasGroup::CanvasGroup_set_alpha
                                                                ((CanvasGroup *)this_06,fVar22,
                                                                 (MethodInfo *)0x0);
                                                      pTVar25 = (object->fields).equipCheckbox;
                                                      if (pTVar25 != (Toggle *)0x0) {
                                                        this_02 = (UnityEvent_1_System_String_ *)
                                                                  (pTVar25->fields).onValueChanged;
                                                        pUVar11 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar11,(Object *)object,
                                                                                                                          
                                                  MethodInfo__AccessoryInventoryViewItem__OnEquip_bool_
                                                  ,
                                                  MethodInfo__UnityEngine__Events__UnityAction<bool>__UnityAction_System__Object__void__
                                                  );
                                                  if (this_02 != (UnityEvent_1_System_String_ *)0x0)
                                                  {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Events
                                                    ::UnityEvent`1[System::String]::
                                                    UnityEvent_1_System_String__AddListener
                                                              (this_02,(UnityAction_1_System_String_
                                                                        *)pUVar11,
                                                                                                                              
                                                  MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                                                  );
                                                  pGVar4 = (object->fields).priceDisplay;
                                                  if (pGVar4 != (GameObject *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar4,(object->fields).locked,
                                                               (MethodInfo *)0x0);
                                                    pGVar4 = (object->fields).priceStrikeout;
                                                    if ((object->fields).locked == 0) {
code_?:
                                                      bVar9 = false;
                                                    }
                                                    else {
                                                      pAVar6 = (object->fields).accessoryDataClient;
                                                      if (pAVar6 == (AccessoryDataClient *)0x0)
                                                      goto code_?;
                                                      if ((pAVar6->fields)._.dsc < 1)
                                                      goto code_?;
                                                      if (pAVar6 == (AccessoryDataClient *)0x0)
                                                      goto code_?;
                                                      bVar9 = 0 < (pAVar6->fields)._.cost;
                                                    }
                                                    if (pGVar4 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar4,bVar9,(MethodInfo *)0x0);
                                                      pAVar6 = (object->fields).accessoryDataClient;
                                                      pTVar23 = (object->fields).priceStrikeoutText;
                                                      if (((pAVar6 != (AccessoryDataClient *)0x0) &&
                                                          (pSVar24 = (String *)
                                                                     func_?(&(pAVar6->
                                                  fields)._.cost,StringLiteral_N0,0),
                                                  pSVar24 != (String *)0x0)) &&
                                                  (pSVar24 = mscorlib.dll::System::String::
                                                             String_Replace_1(pSVar24,::
                                                  StringLiteral__,::StringLiteral__,
                                                  (MethodInfo *)0x0), pTVar23 != (Text *)0x0)) {
                                                    (*(code *)(pTVar23->klass->vtable).set_text.
                                                              method)(pTVar23,pSVar24,
                                                                      (pTVar23->klass->vtable).
                                                                                                                                            
                                                  CalculateLayoutInputHorizontal_1.methodPtr);
                                                  this_03 = (AccessoryData *)
                                                            (object->fields).accessoryDataClient;
                                                  pTVar23 = (object->fields).priceText;
                                                  if (this_03 != (AccessoryData *)0x0) {
                                                    iStack_3 = MVWorldObject.dll::MV::WorldObject::
                                                                Accessories::AccessoryData::
                                                                AccessoryData_get_DiscountedPrice
                                                                          (this_03,(MethodInfo *)0x0
                                                                          );
                                                    pSVar24 = (String *)
                                                              func_?(&iStack_3,
                                                                              StringLiteral_N0,0);
                                                    if ((pSVar24 != (String *)0x0) &&
                                                       (pSVar24 = mscorlib.dll::System::String::
                                                                  String_Replace_1(pSVar24,::
                                                  StringLiteral__,::StringLiteral__,
                                                  (MethodInfo *)0x0), pTVar23 != (Text *)0x0)) {
                                                    (*(code *)(pTVar23->klass->vtable).set_text.
                                                              method)(pTVar23,pSVar24,
                                                                      (pTVar23->klass->vtable).
                                                                                                                                            
                                                  CalculateLayoutInputHorizontal_1.methodPtr);
                                                  pRVar26 = (object->fields).levelRequirement;
                                                  if (pRVar26 != (RawImage *)0x0) {
                                                    pTVar16 = (Transform *)
                                                              UnityEngine.UI.dll::UnityEngine::UI::
                                                              Graphic::Graphic_get_rectTransform
                                                                        ((Graphic *)pRVar26,
                                                                         (MethodInfo *)0x0);
                                                    pRVar26 = (object->fields).levelRequirement;
                                                    if ((pRVar26 != (RawImage *)0x0) &&
                                                       (pTVar17 = (Transform *)
                                                                  UnityEngine.UI.dll::UnityEngine::
                                                                  UI::Graphic::
                                                                  Graphic_get_rectTransform
                                                                            ((Graphic *)pRVar26,
                                                                             (MethodInfo *)0x0),
                                                       pTVar17 != (Transform *)0x0)) {
                                                      pVVar27 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_get_localPosition
                                                                          (&VStack_28,pTVar17,
                                                                           (MethodInfo *)0x0);
                                                      uVar29 = pVVar27->x;
                                                      pRVar26 = (object->fields).levelRequirement;
                                                      if ((pRVar26 != (RawImage *)0x0) &&
                                                         (pTVar17 = (Transform *)
                                                                    UnityEngine.UI.dll::UnityEngine
                                                                    ::UI::Graphic::
                                                                    Graphic_get_rectTransform
                                                                              ((Graphic *)pRVar26,
                                                                               (MethodInfo *)0x0),
                                                         pTVar17 != (Transform *)0x0)) {
                                                        pVVar27 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_get_localPosition
                                                                            ((Vector3 *)
                                                                             &stack0xffffffc0,
                                                                             pTVar17,(MethodInfo *)
                                                                                     0x0);
                                                        VStack_28.x = pVVar27->x;
                                                        VStack_28.y = pVVar27->y;
                                                        pGVar4 = (object->fields).priceDisplay;
                                                        if (pGVar4 != (GameObject *)0x0) {
                                                          pTVar17 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::GameObject::
                                                                    GameObject_get_transform
                                                                              (pGVar4,(MethodInfo *
                                                                                       )0x0);
                                                          uVar15 = CONCAT44(
                                                  TypeInfo__UnityEngine__RectTransform,pTVar17);
                                                  if (pTVar17 != (Transform *)0x0) {
                                                    this_07 = (Transform *)0x0;
                                                    if (pTVar17->klass ==
                                                        (Transform__Class *)
                                                        TypeInfo__UnityEngine__RectTransform) {
                                                      this_07 = pTVar17;
                                                    }
                                                    if (this_07 == (Transform *)0x0)
                                                    goto code_?;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    RectTransform::RectTransform_get_rect
                                                              ((Rect *)&stack0xffffffbc,
                                                               (RectTransform *)this_07,
                                                               (MethodInfo *)0x0);
                                                    UnityStandardAssets::CrossPlatformInput::
                                                    CrossPlatformInputManager+VirtualAxis::
                                                                                                        
                                                  CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                                            ((CrossPlatformInputManager_VirtualAxis
                                                              *)&stack0xffffff9c,(MethodInfo *)0x0);
                                                  VStack_18.x = 0.0;
                                                  VStack_18.y = 0.0;
                                                  func_?(&VStack_18,uVar29);
                                                  if ((((uint)(TypeInfo__UnityEngine__Vector2->
                                                              vtable).Equals.methodPtr & 0x2000000)
                                                       != 0) &&
                                                     ((TypeInfo__UnityEngine__Vector2->_1).
                                                      cctor_started == 0)) {
                                                    func_?(TypeInfo__UnityEngine__Vector2);
                                                  }
                                                  pVVar27 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Vector2::Vector2_op_Implicit_1
                                                                      ((Vector3 *)&stack0xffffffc0,
                                                                       VStack_18,(MethodInfo *)0x0);
                                                  if (pTVar16 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_localPosition
                                                              (pTVar16,*pVVar27,(MethodInfo *)0x0);
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
  uVar15 = func_?(0);
code_?:
  func_?(uVar15);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void OnPurchasePopupPop() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnPurchasePopupPop
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AccessoryInventoryViewItem->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AccessoryInventoryViewItem___OnPurchasePopupPop_m__3_UnityEngine__EventSystems__IInventoryChanged__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>__EventFunction_System__Object__void__
              );
    TypeInfo__AccessoryInventoryViewItem->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IInventoryChanged_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AccessoryInventoryViewItem->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IInventoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IInventoryChanged>_
            );
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem_SetLevelBadge
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__AccessoryInventoryViewItem__SetLevelBadge__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
  pAVar4 = (this->fields).accessoryDataClient;
  if (pAVar4 != (AccessoryDataClient *)0x0) {
    level = (pAVar4->fields)._.lvl;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
      func_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnequipAccessoryCallback() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem_UnequipAccessoryCallback
               (AccessoryInventoryViewItem *this,MethodInfo *method)

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
    pAVar2 = (pMVar1->fields).OnAccessoryUnequipped;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AccessoryInventoryViewItem__UnequipAccessoryCallback__,(MethodInfo *)0x0)
    ;
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar3 != (Action *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pMVar1->fields).OnAccessoryUnequipped = pAVar2;
    pTVar5 = (this->fields).equipCheckbox;
    if (pTVar5 != (Toggle *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar5,0,(MethodInfo *)0x0);
      pTVar5 = (this->fields).equipCheckbox;
      if (pTVar5 != (Toggle *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                            ((Component_1 *)pTVar5,
                             UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                            );
        pTVar5 = (this->fields).equipCheckbox;
        if (pTVar5 != (Toggle *)0x0) {
          bVar6 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn
                            (pTVar5,(MethodInfo *)0x0);
          value = _UNK_?;
          if (bVar6 == 0) {
            value = _UNK_?;
          }
          if (this_01 != (MVInteractableBase *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      ((CanvasGroup *)this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnClicked>m__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_m__0
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) && (x != (IAccessoryClicked *)0x0)) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,
                    (pAVar1->fields)._.cat);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnClicked>m__1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnClicked_m__1
               (AccessoryInventoryViewItem *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(x->klass->vtable).OpenAccessoryManagementScreen)[iVar5].method)
                    (x,pAVar1,(&(x->klass->vtable).OpenCategoryScreen)[iVar5].methodPtr);
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnEquip>m__2(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__OnEquip_m__2
               (AccessoryInventoryViewItem *this,IAttachToBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if (pAVar1 != (AccessoryDataClient *)0x0) {
    iVar2 = (pAVar1->fields)._.sAID;
    if (x != (IAttachToBody *)0x0) {
      pIVar3 = x->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAttachToBody) {
            ppMVar6 = &(&x->klass->vtable)[pIVar3->interfaceOffsets[uVar4].offset].AttachToBody.
                       method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IAttachToBody,0);
code_?:
      (*(code *)*ppMVar6)(x,iVar2,0,0x3f800000,ppMVar6[1]);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnPurchasePopupPop>m__3(IInventoryChanged, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::
     AccessoryInventoryViewItem__OnPurchasePopupPop_m__3
               (IInventoryChanged *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IInventoryChanged *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IInventoryChanged,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AccessoryInventoryViewItem() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem::AccessoryInventoryViewItem__ctor
               (AccessoryInventoryViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AccessoryLoader *)
            func_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                           );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_00,(MethodInfo *)0x0);
  (this->fields).accessoryLoader = this_00;
  (this->fields).highlightId = -1;
  (this->fields).effectDuration = 0.1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

