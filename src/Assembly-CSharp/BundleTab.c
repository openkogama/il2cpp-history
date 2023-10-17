
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
    func_?(&MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__);
    func_?(&TypeInfo__BundleTab____c__DisplayClass13_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral__0_d__1_h);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  _puStack_20 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__BundleTab____c__DisplayClass13_0);
  if (pOVar2 == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar3 = pOVar2;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar2,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar2[1].klass = (Object__Class *)this;
    func_?(pOVar2 + 1,this);
    pOVar2[1].monitor = (MonitorData *)tabId;
    this_00 = (this->fields).rectTransform;
    if (this_00 == (RectTransform *)0x0) goto code_?;
    VStack_4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    fVar5 = VStack_4.x;
    (this->fields).startPos = fVar5;
    if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HighlightManager);
      VStack_4.x = fVar5;
    }
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              HighlightManager::HighlightManager_GetHighLights
                        (HighlightType__Enum_AccessoryBundle,
                         System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_MV__WorldObject__HighlightSystem__HighlightType_
                        );
    pAStack_6 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                          ((MethodInfo *)0x0);
    index = 0;
    VVar7 = VStack_4;
    if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    for (; VStack_4.y = VVar7.y, index < (this_03->fields)._size; index = index + 1) {
      RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_03,index,
                         MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                        );
      VVar7 = (Vector2)((ulonglong)(uint)VStack_4.y << 0x20);
      if (((RVar8 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar8 + 0xc) == 0)) ||
         (pAStack_6 == (AccessoryBundleClient *)0x0)) goto code_?;
      if (*(int *)(*(int *)((int)RVar8 + 0xc) + 8) == (pAStack_6->fields)._.accessoryBundleID) {
        this_01 = (this->fields).redDot;
        if (this_01 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        VStack_4.y = (float)(this->fields).redDotCount;
        pLVar9 = (pAStack_6->fields)._.accessoryBundleItems;
        if (pLVar9 == (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0)
        goto code_?;
        IStack_1.m_value = (pLVar9->fields)._size;
        stack0xffffffe4 = &IStack_1;
        pTVar10 = (Text *)mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
        fVar5 = VStack_4.y;
        if ((Text *)VStack_4.y == (Text *)0x0) goto code_?;
        pOVar3 = (Object *)0x4b;
        stack0xffffffe4 = (Int32 *)&UNK_?;
        VStack_4.y = (float)pTVar10;
        func_?();
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,index,
                           MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessoryBundle>_>__get_Item_int_
                          );
        VVar7.y = VStack_4.y;
        VVar7.x = fVar5;
        if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
        (this->fields).highlightId = *(int32_t *)((int)RVar8 + 8);
        break;
      }
    }
    VStack_4.y = VVar7.y;
    pBVar11 = (this->fields).button;
    if (pBVar11 == (Button *)0x0) goto code_?;
    this_02 = (UnityEvent *)(pBVar11->fields).m_OnClick;
    VStack_4 = VVar7;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar12 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,pOVar3,MethodInfo__BundleTab____c__DisplayClass13_0___Initialize_b__0__,
               (MethodInfo *)0x0);
    if (this_02 == (UnityEvent *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (this_02,(UnityAction *)pNVar12,(MethodInfo *)0x0);
    pAVar13 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                        ((MethodInfo *)0x0);
    if ((pAVar13 == (AccessoryBundleClient *)0x0) ||
       (pAVar14 = (pAVar13->fields)._.timelimit, pAVar14 == (AccessoryTimelimit *)0x0))
    goto code_?;
    bVar15 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
            AccessoryTimelimit_get_IsTimeLimited(pAVar14,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      pAVar13 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                          ((MethodInfo *)0x0);
      if ((pAVar13 != (AccessoryBundleClient *)0x0) &&
         (pAVar14 = (pAVar13->fields)._.timelimit, pAVar14 != (AccessoryTimelimit *)0x0)) {
        _puStack_20 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
                      AccessoryTimelimit_GetTimeLeft(pAVar14,(MethodInfo *)0x0);
        pTVar10 = (this->fields).timeLimitText;
        mscorlib.dll::System::TimeSpan::TimeSpan_get_Days((TimeSpan *)&puStack_16,(MethodInfo *)0x0)
        ;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
        VStack_4.y = (float)mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                                       ((TimeSpan *)&puStack_16,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&VStack_4.y);
        pSVar17 = mscorlib.dll::System::String::String_Format_1
                            (StringLiteral__0_d__1_h,pOVar2,pOVar3,(MethodInfo *)0x0);
        if (pTVar10 != (Text *)0x0) {
          (*(pTVar10->klass->vtable).set_text.methodPtr)
                    (pTVar10,pSVar17,(pTVar10->klass->vtable).set_text.method);
          VStack_4 = (Vector2)((ulonglong)(uint)VStack_4.y << 0x20);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pAVar13 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                        ((MethodInfo *)0x0);
    if (pAVar13 == (AccessoryBundleClient *)0x0) goto code_?;
    if ((pAVar13->fields)._.level < 1) {
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
      VStack_4 = (Vector2)((ulonglong)(uint)VStack_4.y << 0x20);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__LevelingManager);
      VStack_4 = (Vector2)((ulonglong)(uint)VStack_4.y << 0x20);
      cRam_? = '\x01';
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
      VStack_4 = (Vector2)((ulonglong)(uint)VStack_4.y << 0x20);
    }
    if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
      BundleTab_SetLevelBadge(this,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar18 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar12 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)this,MethodInfo__BundleTab__SetLevelBadge__,(MethodInfo *)0x0);
    pUVar18 = (UnityAction *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar18,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pUVar18 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
      stack0xffffffe4 = (Int32 *)&UNK_?;
      func_?();
      return;
    }
    pUVar19 = (UnityAction *)0x0;
    if (pUVar18->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar19 = pUVar18;
    }
    if (pUVar19 == (UnityAction *)0x0) goto code_?;
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar19;
    pUVar19 = (UnityAction *)0x0;
    if (pUVar18->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar19 = pUVar18;
    }
    if (pUVar19 != (UnityAction *)0x0) {
      stack0xffffffe4 = (Int32 *)&UNK_?;
      func_?();
      return;
    }
  }
  stack0xffffffe4 = (Int32 *)&UNK_?;
  func_?();
code_?:
  stack0xffffffe4 = (Int32 *)&UNK_?;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  value = (Object *)func_?(TypeInfo__BundleTab___LerpToSize_d__20);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    value[2].monitor = (MonitorData *)size;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
    (this->fields).badgeTextureAsset = pTVar3;
    func_?(&(this->fields).badgeTextureAsset,pTVar3);
    pTVar3 = (this->fields).badgeTextureAsset;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pRVar1 = (this->fields).levelBadge;
      if (pRVar1 != (RawImage *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (pRVar1,(Texture *)(this->fields).badgeTextureAsset,(MethodInfo *)0x0);
        pRVar1 = (this->fields).levelBadge;
        if (pRVar1 != (RawImage *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0);
          if (pGVar4 != (GameObject *)0x0) {
            if (pcRam_? == (code *)0x0) {
              pcRam_? = (code *)func_?();
            }
            (*pcRam_?)();
            return;
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    (this->fields).badgeTextureAsset = (Texture2D *)0x0;
    func_?(&(this->fields).badgeTextureAsset);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      routine = BundleTab_LerpToSize(this,(this->fields).startPos,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
                     ((Color *)&stack0xffffffdc,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pIVar1 != (Image *)0x0) {
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
               (pIVar1->klass->vtable).set_color.method);
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
        if (pEVar5 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0)
        goto code_?;
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
        if (pEVar5 == (ExecuteEvents_EventFunction_1_IAccessoryClicked_ *)0x0)
        goto code_?;
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
                    ((Rect *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
          fVar7 = SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffec,
                             (MethodInfo *)0x0);
          routine = BundleTab_LerpToSize(this,(this->fields).offsetX + fVar7,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IBundleController_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pBVar6,
                       MethodInfo__BundleTab____c___SetAsSelected_b__17_2_UnityEngine__EventSystems__IBundleController__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__BundleTab____c->static_fields->__9__17_2 = callbackFunction;
            func_?(&TypeInfo__BundleTab____c->static_fields->__9__17_2,callbackFunction);
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
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
code_?:
    func_?();
  }
  else {
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
      pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                         ((MethodInfo *)0x0);
      if (pAVar2 != (AccessoryBundleClient *)0x0) {
        level = (pAVar2->fields)._.level;
        this_01 = (Action_1_Object_ *)
                  func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)&UNK_?,
                     MethodInfo__BundleTab__OnBadgeLoaded_UnityEngine__Networking__UnityWebRequest_,
                     (MethodInfo *)0x0);
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

