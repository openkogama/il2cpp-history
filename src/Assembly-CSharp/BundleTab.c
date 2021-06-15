
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::BundleTab::BundleTab_Initialize
               (BundleTab *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BundleTab___Initialize_c__AnonStorey1;
  this_04 = (ScaleAnimationBase *)func_?();
  object = this_04;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,(MethodInfo *)method_00);
  if (this_04 != (ScaleAnimationBase *)0x0) {
    (this_04->fields)._._._._.m_CachedPtr = (void *)tabId;
    (this_04->fields).state = (int32_t)this;
    this_00 = (this->fields).rectTransform;
    if (this_00 != (RectTransform *)0x0) {
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
               RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
      (this->fields).startPos = VVar1.x;
      if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_05 = HighlightManager::HighlightManager_GetHighLights_2
                          (HighlightType__Enum_AccessoryBundle,
                           System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                          );
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?();
      }
      pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      tabId = 0;
      if (this_05 !=
          (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
           *)0x0) {
        for (; pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_05,
                                   MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                                  ), tabId < (int)pOVar3; tabId = tabId + 1) {
          object = (ScaleAnimationBase *)tabId;
          pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,tabId,
                              MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                             );
          if (((pIVar4 == (IEventSystemHandler *)0x0) || (pIVar4[1].monitor == (MonitorData *)0x0))
             || (pAVar2 == (AccessoryBundleClient *)0x0)) goto code_?;
          if (*(int *)(pIVar4[1].monitor + 8) == (pAVar2->fields)._.accessoryBundleID) {
            this_01 = (this->fields).redDot;
            if (this_01 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            this_02 = (pAVar2->fields)._.accessoryBundleItems;
            if (this_02 == (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                      );
            func_?();
            func_?();
            pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,
                                tabId,
                                MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                               );
            if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
            this = (BundleTab *)0x0;
            pIRam0000003c = pIVar4[1].klass;
            break;
          }
        }
        this_03 = (HoverCraftMotor *)(this->fields).button;
        if (this_03 != (HoverCraftMotor *)0x0) {
          this_06 = (UnityEvent *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_03,(MethodInfo *)0x0);
          pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar5,(Object *)object,
                     MethodInfo__BundleTab___Initialize_c__AnonStorey1____m__0__,(MethodInfo *)0x0);
          if (this_06 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (this_06,(UnityAction *)pUVar5,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__AccessoryDataManager);
            }
            pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                               ((MethodInfo *)0x0);
            if ((pAVar2 != (AccessoryBundleClient *)0x0) &&
               (pAVar6 = (pAVar2->fields)._.timelimit, pAVar6 != (AccessoryTimelimit *)0x0)) {
              bVar7 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                      AccessoryTimelimit_get_IsTimeLimited(pAVar6,(MethodInfo *)0x0);
              if (bVar7 == 0) {
code_?:
                if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
                  func_?();
                }
                pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                                   ((MethodInfo *)0x0);
                if (pAVar2 != (AccessoryBundleClient *)0x0) {
                  if ((pAVar2->fields)._.level < 1) {
                    return;
                  }
                  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0
                      ) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                    func_?();
                  }
                  bVar7 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
                  if (bVar7 == 0) {
                    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pUVar8 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
                    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar5,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,
                               (MethodInfo *)0x0);
                    pUVar9 = (UnityAction *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)pUVar8,(Delegate *)pUVar5,(MethodInfo *)0x0);
                    pUVar8 = (UnityAction *)0x0;
                    if (pUVar9 != (UnityAction *)0x0) {
                      if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                        pUVar8 = pUVar9;
                      }
                      if (pUVar8 == (UnityAction *)0x0) goto code_?;
                    }
                    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar8;
                    return;
                  }
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0
                      ) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pUVar8 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
                  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar5,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,
                             (MethodInfo *)0x0);
                  pUVar9 = (UnityAction *)
                           mscorlib.dll::System::Delegate::Delegate_Remove
                                     ((Delegate *)pUVar8,(Delegate *)pUVar5,(MethodInfo *)0x0);
                  pUVar8 = (UnityAction *)0x0;
                  if (pUVar9 != (UnityAction *)0x0) {
                    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                      pUVar8 = pUVar9;
                    }
                    if (pUVar8 == (UnityAction *)0x0) goto code_?;
                  }
                  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar8;
                  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                                     ((MethodInfo *)0x0);
                  if (pAVar2 != (AccessoryBundleClient *)0x0) {
                    level = (pAVar2->fields)._.level;
                    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar5,(Object *)this,
                               MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                               ,
                               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    BadgeManager::BadgeManager_GetBadgeTexture
                              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar5,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
                  func_?();
                }
                pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                                   ((MethodInfo *)0x0);
                if ((pAVar2 != (AccessoryBundleClient *)0x0) &&
                   (pAVar6 = (pAVar2->fields)._.timelimit, pAVar6 != (AccessoryTimelimit *)0x0)) {
                  MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                  AccessoryTimelimit_GetTimeLeft(pAVar6,(MethodInfo *)0x0);
                  pTVar10 = (this->fields).timeLimitText;
                  func_?();
                  pOVar3 = (Object *)func_?();
                  func_?(&stack0xffffffe4,0);
                  arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__String);
                  }
                  mscorlib.dll::System::String::String_Format_1
                            (StringLiteral__0_d__1_h,pOVar3,arg1,(MethodInfo *)0x0);
                  if (pTVar10 != (Text *)0x0) {
                    (*(code *)(pTVar10->klass->vtable).set_text.method)();
                    goto code_?;
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
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::BundleTab::BundleTab_LerpToSize(BundleTab *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BundleTab___LerpToSize_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.z = (float)this;
    (this_00->fields).originalScale.y = size;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnBadgeLoaded
               (BundleTab *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).levelBadge;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
        DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
    (this->fields).badgeTextureAsset = x;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pRVar1 = (this->fields).levelBadge;
      if (pRVar1 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRVar1,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
        pRVar1 = (this->fields).levelBadge;
        if ((pRVar1 != (RawImage *)0x0) &&
           (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pRVar1,(MethodInfo *)0x0),
           pGVar3 != (GameObject *)0x0)) {
          pcVar4 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar4 = (code *)func_?();
            if (pcVar4 == (code *)0x0) {
              puStack5 = (undefined *)0x0;
              puStack6 = (undefined *)0x0;
              puStack7 = (undefined *)func_?();
              func_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pcRam_? = pcVar4;
          (*pcRam_?)();
          return;
        }
      }
      puStack7 = (undefined *)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnDestroy(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnDisable(BundleTab *this,MethodInfo *method)

{
  pRVar1 = (this->fields).rectTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields).rectTransform;
    if (pRVar1 != (RectTransform *)0x0) {
      VVar2.y = VVar2.y;
      VVar2.x = (this->fields).startPos;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar1,VVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetAsDeselected(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      fVar3 = (this->fields).startPos;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
      if (this_01 != (ScaleAnimationBase *)0x0) {
        (this_01->fields).originalScale.y = fVar3;
        (this_01->fields).originalScale.z = (float)this;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetAsSelected(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&puStack_3,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    pGVar4 = (this->fields).redDot;
    if (pGVar4 != (GameObject *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pGVar4 = (this->fields).redDot;
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        highlightId = (this->fields).highlightId;
        if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__HighlightManager);
        }
        HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__BundleTab->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar6,(Object *)0x0,
                   MethodInfo__BundleTab___SetAsSelected_m__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                  );
        TypeInfo__BundleTab->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)pUVar6;
      }
      pEVar7 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__BundleTab->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar4,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__BundleTab->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar6,(Object *)0x0,
                   MethodInfo__BundleTab___SetAsSelected_m__1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
                  );
        TypeInfo__BundleTab->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)pUVar6;
      }
      pEVar7 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__BundleTab->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar4,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        this_00 = (this->fields).rectTransform;
        if (this_00 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&puStack_3,this_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)&UNK_?;
          fVar8 = SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe8,
                             (MethodInfo *)0x0);
          fVar9 = (this->fields).offsetX;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
          if (this_01 != (ScaleAnimationBase *)0x0) {
            (this_01->fields).originalScale.z = (float)this;
            (this_01->fields).originalScale.y = fVar9 + fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this,(IEnumerator *)this_01,(MethodInfo *)0x0);
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__BundleTab->static_fields->__f__am_cache2 ==
                (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
              pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar6,(Object *)0x0,
                         MethodInfo__BundleTab___SetAsSelected_m__2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>__EventFunction_System__Object__void__
                        );
              TypeInfo__BundleTab->static_fields->__f__am_cache2 =
                   (ExecuteEvents_EventFunction_1_IBundleController_ *)pUVar6;
            }
            pEVar7 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                     TypeInfo__BundleTab->static_fields->__f__am_cache2;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,pEVar7,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
                      );
            return;
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


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetLevelBadge(BundleTab *this,MethodInfo *method)

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
            (pUVar2,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
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
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar4 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  if (pAVar4 != (AccessoryBundleClient *)0x0) {
    pAStack5 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    level = (pAVar4->fields)._.level;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
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
  pAStack5 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <SetAsSelected>m__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab::BundleTab__SetAsSelected_m__0
               (IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SetAsSelected>m__1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab::BundleTab__SetAsSelected_m__1
               (IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,0xfe);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SetAsSelected>m__2(IBundleController, BaseEventData) */

void Assembly-CSharp.dll::BundleTab::BundleTab__SetAsSelected_m__2
               (IBundleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IBundleController *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IBundleController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* BundleTab() */

void Assembly-CSharp.dll::BundleTab::BundleTab__ctor(BundleTab *this,MethodInfo *method)

{
  (this->fields).lerpTime = 1.0;
  (this->fields).startPos = 200.0;
  (this->fields).highlightId = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

