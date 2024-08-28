
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::BundleTab::BundleTab_Initialize
               (BundleTab *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__BundleTab__SetLevelBadge__);
    func_?(&
                    System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__LevelingManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                   );
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__);
    func_?(&TypeInfo__BundleTab____c__DisplayClass13_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral__0_d__1_h);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  method_00 = TypeInfo__BundleTab____c__DisplayClass13_0;
  pOVar2 = (Object *)func_?();
  pOVar3 = pOVar2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar2 == (Object *)0x0) {
code_?:
    func_?();
    pUVar4 = extraout_EDX;
  }
  else {
    pOVar2[1].klass = (Object__Class *)this;
    func_?(pOVar2 + 1,this);
    pOVar2[1].monitor = (MonitorData *)tabId;
    this_00 = (this->fields).rectTransform;
    if (this_00 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
             RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    (this->fields).startPos = VVar5.x;
    if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HighlightManager);
    }
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              HighlightManager::HighlightManager_GetHighLights
                        (HighlightType__Enum_AccessoryBundle,
                         System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                        );
    pAStack_6 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                          ((MethodInfo *)0x0);
    index = 0;
    if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    for (; index < (this_03->fields)._size; index = index + 1) {
      RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_03,index,
                         MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                        );
      if (((RVar7 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar7 + 0xc) == 0)) ||
         (pAStack_6 == (AccessoryBundleClient *)0x0)) goto code_?;
      if (*(int *)(*(int *)((int)RVar7 + 0xc) + 8) == (pAStack_6->fields)._.accessoryBundleID) {
        this_01 = (this->fields).redDot;
        if (this_01 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        pLVar8 = (pAStack_6->fields)._.accessoryBundleItems;
        if (pLVar8 == (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0)
        goto code_?;
        IStack_1.m_value = (pLVar8->fields)._size;
        pUVar9 = (UnityAction *)0x0;
        pOVar3 = (Object *)&UNK_?;
        pAVar10 = (AccessoryBundleClient *)
                 mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
        if (pUVar9 == (UnityAction *)0x0) goto code_?;
        IStack_1.m_value = (int32_t)pUVar9;
        pAStack_6 = pAVar10;
        func_?();
        RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,index,
                           MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                          );
        if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
        (this->fields).highlightId = *(int32_t *)((int)RVar7 + 8);
        break;
      }
    }
    pBVar11 = (this->fields).button;
    if (pBVar11 == (Button *)0x0) goto code_?;
    this_02 = (UnityEvent *)(pBVar11->fields).m_OnClick;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,pOVar3,MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__,
               (MethodInfo *)0x0);
    if (this_02 == (UnityEvent *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (this_02,(UnityAction *)pNVar12,(MethodInfo *)0x0);
    pAVar10 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0)
    ;
    if ((pAVar10 == (AccessoryBundleClient *)0x0) ||
       (pAVar13 = (pAVar10->fields)._.timelimit, pAVar13 == (AccessoryTimelimit *)0x0))
    goto code_?;
    bVar14 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
            AccessoryTimelimit_get_IsTimeLimited(pAVar13,(MethodInfo *)0x0);
    if (bVar14 != 0) {
      pAVar10 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      if ((pAVar10 != (AccessoryBundleClient *)0x0) &&
         (pAVar13 = (pAVar10->fields)._.timelimit, pAVar13 != (AccessoryTimelimit *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
        AccessoryTimelimit_GetTimeLeft(pAVar13,(MethodInfo *)0x0);
        pTVar15 = (this->fields).timeLimitText;
        if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::TimeSpan::TimeSpan_get_Days
                  ((TimeSpan *)&stack0xffffffe0,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
        mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                  ((TimeSpan *)&stack0xffffffe0,(MethodInfo *)0x0);
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
        pSVar16 = mscorlib.dll::System::String::String_Format_1
                            (StringLiteral__0_d__1_h,pOVar3,pOVar2,(MethodInfo *)0x0);
        if (pTVar15 != (Text *)0x0) {
          (*(code *)(pTVar15->klass->vtable).set_text.method)
                    (pTVar15,pSVar16,
                     (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pAVar10 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0)
    ;
    if (pAVar10 == (AccessoryBundleClient *)0x0) goto code_?;
    if ((pAVar10->fields)._.level < 1) {
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__LevelingManager);
      cRam_? = '\x01';
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        func_?(&TypeInfo__BadgeManager);
        func_?(&
                        MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                       );
        func_?(&MethodInfo__BundleTab__SetLevelBadge__);
        func_?(&TypeInfo__LevelingManager);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction);
        cRam_? = '\x01';
      }
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      pUVar9 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar12,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
      pUVar9 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pUVar9,(Delegate *)pNVar12,(MethodInfo *)0x0);
      if (pUVar9 == (UnityAction *)0x0) {
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
        IStack_1.m_value = 0;
      }
      else {
        pUVar17 = (UnityAction *)0x0;
        if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar17 = pUVar9;
        }
        IStack_1.m_value = (int32_t)TypeInfo__UnityEngine__Events__UnityAction;
        if (pUVar17 == (UnityAction *)0x0) goto code_?;
        TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar17;
        IStack_1.m_value = (int32_t)(UnityAction *)0x0;
        if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          IStack_1.m_value = (int32_t)pUVar9;
        }
        pUVar4 = TypeInfo__UnityEngine__Events__UnityAction;
        if ((UnityAction *)IStack_1.m_value == (UnityAction *)0x0) goto code_?;
      }
      func_?();
      pAVar10 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      if (pAVar10 != (AccessoryBundleClient *)0x0) {
        level = (pAVar10->fields)._.level;
        this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?(
                                    TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                    );
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_04,(Object *)this,
                   MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
                   (MethodInfo *)0x0);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar9 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
    pUVar9 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar9,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pUVar9 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      IStack_1.m_value = 0;
code_?:
      func_?();
      return;
    }
    pUVar17 = (UnityAction *)0x0;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar17 = pUVar9;
    }
    IStack_1.m_value = (int32_t)TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar17 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar17;
    IStack_1.m_value = (int32_t)(UnityAction *)0x0;
    if (pUVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      IStack_1.m_value = (int32_t)pUVar9;
    }
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction;
    if ((UnityAction *)IStack_1.m_value != (UnityAction *)0x0) goto code_?;
  }
code_?:
  IStack_1.m_value = (int32_t)pUVar4;
  IStack_1.m_value = func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::BundleTab::BundleTab_LerpToSize(BundleTab *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BundleTab___LerpToSize_d__20);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BundleTab___LerpToSize_d__20;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)size;
  return (IEnumerator *)value;
}


/* Void OnBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnBadgeLoaded
               (BundleTab *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).levelBadge;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pTVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
    ppTVar4 = &(this->fields).badgeTextureAsset;
    *ppTVar4 = pTVar3;
    func_?(ppTVar4,pTVar3);
    pTVar3 = *ppTVar4;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pRVar1 = (this->fields).levelBadge;
      if (pRVar1 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRVar1,(Texture *)*ppTVar4,(MethodInfo *)0x0);
        pRVar1 = (this->fields).levelBadge;
        if (pRVar1 != (RawImage *)0x0) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0);
          if (pGVar5 != (GameObject *)0x0) {
            if (pcRam_? == (code *)0x0) {
              pcRam_? = (code *)func_?();
            }
            (*pcRam_?)();
            return;
          }
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BundleTab::BundleTab_OnDestroy(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_)
    ;
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  func_?();
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetAsDeselected(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      pMVar3 = (MonitorData *)(this->fields).startPos;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__BundleTab___LerpToSize_d__20;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      value[2].monitor = pMVar3;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__Styles);
    func_?(&
                    MethodInfo__BundleTab____c___SetAsSelected_b__17_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__BundleTab____c___SetAsSelected_b__17_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__BundleTab____c___SetAsSelected_b__17_2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BundleTab____c);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).icon;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    pGVar3 = (this->fields).redDot;
    if (pGVar3 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar3 = (this->fields).redDot;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        highlightId = (this->fields).highlightId;
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__HighlightManager);
        }
        HighlightManager::HighlightManager_SetHighlightToSeen(highlightId,(MethodInfo *)0x0);
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BundleTab____c);
      }
      pEVar5 = TypeInfo__BundleTab____c->static_fields->__9__17_0;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BundleTab____c);
        }
        pBVar6 = TypeInfo__BundleTab____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pBVar6,
                   MethodInfo__BundleTab____c___SetAsSelected_b__17_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BundleTab____c->static_fields->__9__17_0 = pEVar5;
        func_?(&TypeInfo__BundleTab____c->static_fields->__9__17_0,pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BundleTab____c);
      }
      pEVar5 = TypeInfo__BundleTab____c->static_fields->__9__17_1;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0) {
        if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BundleTab____c);
        }
        pBVar6 = TypeInfo__BundleTab____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pBVar6,
                   MethodInfo__BundleTab____c___SetAsSelected_b__17_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BundleTab____c->static_fields->__9__17_1 = pEVar5;
        func_?(&TypeInfo__BundleTab____c->static_fields->__9__17_1,pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        this_00 = (this->fields).rectTransform;
        if (this_00 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
          fVar7 = (this->fields).offsetX;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          method_00 = TypeInfo__BundleTab___LerpToSize_d__20;
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          value[1].klass = (Object__Class *)0x0;
          value[2].klass = (Object__Class *)this;
          func_?();
          value[2].monitor = (MonitorData *)((float)method_00 + fVar7);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__BundleTab____c->static_fields->__9__17_2;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0) {
            if ((TypeInfo__BundleTab____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pBVar6 = TypeInfo__BundleTab____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IBundleController_ *)func_?()
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pBVar6,
                       MethodInfo__BundleTab____c___SetAsSelected_b__17_2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__BundleTab____c->static_fields->__9__17_2 = callbackFunction;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IBundleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IBundleController>_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::BundleTab::BundleTab_SetLevelBadge(BundleTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_)
    ;
    func_?(&MethodInfo__BundleTab__SetLevelBadge__);
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
            (this_00,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
code_?:
    func_?();
    pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0)
    ;
    if (pAVar2 != (AccessoryBundleClient *)0x0) {
      level = (pAVar2->fields)._.level;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
                 (MethodInfo *)0x0);
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


/* BundleTab() */

void Assembly-CSharp.dll::BundleTab::BundleTab__ctor(BundleTab *this,MethodInfo *method)

{
  (this->fields).lerpTime = 1.0;
  (this->fields).startPos = 200.0;
  (this->fields).highlightId = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

