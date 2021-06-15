
/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_ChangeBackground
               (TierUnlockedItemsRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = (undefined1)tier == GamePassTier__Enum_Tier1;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar3 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0x62,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_Initialize
               (TierUnlockedItemsRewardInfo *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  bVar1 = (undefined1)tier == GamePassTier__Enum_Tier2;
  (this->fields).tierShopData = tierShopData;
  pGVar2 = (this->fields).backgroundTier1;
  (this->fields).tier = (undefined1)tier;
  if (pGVar2 != (GameObject *)0x0) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if ((bool)bVar3 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar2 = (this->fields).backgroundTier1;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(undefined1)tier == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).backgroundTier2;
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      tier._0_1_ = (undefined1)tier == GamePassTier__Enum_Tier3;
      if ((bool)bVar3 != bVar1) {
        pGVar2 = (this->fields).backgroundTier2;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        tier._0_1_ = GamePassTier__Enum_Tier0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).backgroundTier3;
      if (pGVar2 != (GameObject *)0x0) {
        uVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (uVar4 != (undefined1)tier) {
          pGVar2 = (this->fields).backgroundTier3;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,(undefined1)tier,(MethodInfo *)0x0);
        }
        TierUnlockedItemsRewardInfo_UpdateItemAmountText(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSeeItemsButtonPressed() */

void Assembly-CSharp.dll::TierUnlockedItemsRewardInfo::
     TierUnlockedItemsRewardInfo_OnSeeItemsButtonPressed
               (TierUnlockedItemsRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockedItemsRewardInfo___OnSeeItemsButtonPressed_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tierUnlockedItemsPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      TierUnlockedItemsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsPopup>_TierUnlockedItemsPopup_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__TierUnlockedItemsRewardInfo___OnSeeItemsButtonPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this_01->fields)._._._._.m_CachedPtr;
    if (this_00 != (TierUnlockedItemsPopup *)0x0) {
      TierUnlockedItemsPopup::TierUnlockedItemsPopup_Initialize
                (this_00,(uint)(this->fields).tier,(this->fields).tierShopData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedItemsRewardInfo::
     TierUnlockedItemsRewardInfo_UpdateItemAmountText
               (TierUnlockedItemsRewardInfo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  iVar11 = 0;
  iStack_12 = 0;
  this_00 = (this->fields).tierShopData;
  puStack_13 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((this_00 != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) &&
     (puStack_13 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_15,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    pDStack_7 = (pDVar14->host_enumerator).dictionary;
    iStack_8 = (pDVar14->host_enumerator).next;
    iStack_9 = (pDVar14->host_enumerator).stamp;
    iStack_10 = (pDVar14->host_enumerator).current.key;
    pOStack_6 = (pDVar14->host_enumerator).current.value;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      this_02 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)func_?();
      if (this_02 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)
      goto code_?;
      pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_02,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      iVar11 = (int)&pOVar17->klass + iVar11;
      iStack_12 = iVar11;
    }
    *puStack_13 = 0x48;
    uStack_1 = 0xffffffff;
    func_?();
    pTVar18 = (this->fields).itemAmountText;
    pOVar17 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar19 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_x,pOVar17,(MethodInfo *)0x0);
    if (pTVar18 != (Text *)0x0) {
      (*(code *)(pTVar18->klass->vtable).set_text.method)
                (pTVar18,pSVar19,(pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}

