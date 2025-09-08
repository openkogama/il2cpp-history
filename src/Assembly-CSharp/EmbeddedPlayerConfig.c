
/* Boolean DoesHostMatch(String, String[]) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_DoesHostMatch
               (String *allowedHost,String__Array *applicationHost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((((::StringLiteral__ == (String *)0x0) ||
       (separator = mscorlib.dll::System::String::String_get_Chars
                              (::StringLiteral__,0,(MethodInfo *)0x0), allowedHost == (String *)0x0)
       ) || (pSVar1 = mscorlib.dll::System::String::String_Split
                                (allowedHost,separator,StringSplitOptions__Enum_None,
                                 (MethodInfo *)0x0), applicationHost == (String__Array *)0x0)) ||
     (pSVar1 == (String__Array *)0x0)) {
code_?:
    func_?();
  }
  else {
    if ((int)applicationHost->max_length < (int)pSVar1->max_length) {
      return 0;
    }
    uVar2 = 0;
    ppSVar3 = pSVar1->vector;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return 1;
      }
      if ((pSVar1->max_length <= uVar2) ||
         (uVar4 = (applicationHost->max_length - pSVar1->max_length) + uVar2,
         applicationHost->max_length <= uVar4)) break;
      if (*ppSVar3 == (String *)0x0) goto code_?;
      bVar5 = mscorlib.dll::System::String::String_Equals_1
                        (*ppSVar3,*(String **)((int)applicationHost + uVar4 * 4 + 0x10),
                         (MethodInfo *)0x0);
      if (bVar5 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      ppSVar3 = ppSVar3 + 1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void ForceEmbedSite(String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_ForceEmbedSite
               (EmbeddedPlayerConfig *this,String *url,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)0xffffffff;
  puStack_2 = &DAT_?;
  pLStack_3 = (List_1_EmbeddedSiteConfigData_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pLStack_3;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  this_01 = (Uri *)0x0;
  if ((TypeInfo__System__Uri->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Uri);
  }
  bVar4 = System.dll::System::Uri::Uri_TryCreate
                    (url,UriKind__Enum_Absolute,(Uri **)&stack0xffffffe8,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (this_01 == (Uri *)0x0) goto code_?;
    url = System.dll::System::Uri::Uri_get_Host(this_01,(MethodInfo *)0x0);
  }
  host = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
         UnityWebRequest_UnEscapeURL(url,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).kogamaDefaultData.sites;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    bVar4 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pMVar5,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pLVar6 = (this->fields).kogamaDefaultData.sites;
      iVar7 = (this->fields).kogamaDefaultData.siteEnum;
      uVar8._0_1_ = (this->fields).kogamaDefaultData.showTouristPromotion;
      uVar8._1_1_ = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
      uVar8._2_1_ = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uVar8._3_1_ = (this->fields).kogamaDefaultData.allowsModals;
      uVar9._0_1_ = (this->fields).kogamaDefaultData.integratedSdk;
      uVar9._1_1_ = (this->fields).kogamaDefaultData.allowsFallbackAds;
      uVar9._2_1_ = (this->fields).kogamaDefaultData.showPlayButtonAd;
      uVar9._3_1_ = (this->fields).kogamaDefaultData.hideGoldShop;
      uVar10._0_1_ = (this->fields).kogamaDefaultData.allowInHouseAds;
      uVar10._1_1_ = (this->fields).kogamaDefaultData.removeFullscreenButton;
      uVar10._2_1_ = (this->fields).kogamaDefaultData.hideSignUp;
      uVar10._3_1_ = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
code_?:
      (this->fields).currentSite.sites = pLVar6;
      (this->fields).currentSite.siteEnum = iVar7;
      (this->fields).currentSite.showTouristPromotion = (char)uVar8;
      (this->fields).currentSite.allowsOpenInNewTab = (char)((uint)uVar8 >> 8);
      (this->fields).currentSite.allowsRedirectToWebpage = (char)((uint)uVar8 >> 0x10);
      (this->fields).currentSite.allowsModals = (char)((uint)uVar8 >> 0x18);
      (this->fields).currentSite.integratedSdk = (char)uVar9;
      (this->fields).currentSite.allowsFallbackAds = (char)((uint)uVar9 >> 8);
      (this->fields).currentSite.showPlayButtonAd = (char)((uint)uVar9 >> 0x10);
      (this->fields).currentSite.hideGoldShop = (char)((uint)uVar9 >> 0x18);
      (this->fields).currentSite.allowInHouseAds = (char)uVar10;
      (this->fields).currentSite.removeFullscreenButton = (char)((uint)uVar10 >> 8);
      (this->fields).currentSite.hideSignUp = (char)((uint)uVar10 >> 0x10);
      (this->fields).currentSite.noPlayButtonVideoIcon = (char)((uint)uVar10 >> 0x18);
      func_?();
code_?:
      *unaff_FS_OFFSET = (int)pLStack_3;
      return;
    }
    pMStack_1 = (MethodInfo *)0x0;
    index = (undefined *)0x0;
    while (pLVar11 = (this->fields).siteData, pLVar11 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
      if ((pLVar11->fields)._size <= (int)index) goto code_?;
      if (pLVar11 == (List_1_EmbeddedSiteConfigData_ *)0x0) break;
      pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&puStack_13,
                          (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                           *)pLVar11,(int32_t)index,
                          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                         );
      if ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)pIVar12->_index ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) break;
      pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pIVar12->_index,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      bVar4 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pMVar5,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLVar11 = (this->fields).siteData;
        if (pLVar11 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
          pMStack_1 = 
          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_;
          pLStack_3 = pLVar11;
          puStack_2 = index;
          puVar14 = (undefined4 *)func_?();
          pLVar6 = (List_1_System_String_ *)*puVar14;
          iVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          uVar10 = puVar14[4];
          goto code_?;
        }
        break;
      }
      index = index + 1;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* EmbeddedSiteConfigData GetCurrentSiteData() */

EmbeddedSiteConfigData *
Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
          (EmbeddedSiteConfigData *__return_storage_ptr__,EmbeddedPlayerConfig *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Embedded_site_data_not_initializ);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    iVar1 = (this->fields).currentSite.siteEnum;
    bVar2 = (this->fields).currentSite.showTouristPromotion;
    bVar3 = (this->fields).currentSite.allowsOpenInNewTab;
    bVar4 = (this->fields).currentSite.allowsRedirectToWebpage;
    bVar5 = (this->fields).currentSite.allowsModals;
    bVar6 = (this->fields).currentSite.integratedSdk;
    bVar7 = (this->fields).currentSite.allowsFallbackAds;
    bVar8 = (this->fields).currentSite.showPlayButtonAd;
    bVar9 = (this->fields).currentSite.hideGoldShop;
    bVar10 = (this->fields).currentSite.allowInHouseAds;
    bVar11 = (this->fields).currentSite.removeFullscreenButton;
    bVar12 = (this->fields).currentSite.hideSignUp;
    bVar13 = (this->fields).currentSite.noPlayButtonVideoIcon;
    __return_storage_ptr__->sites = (this->fields).currentSite.sites;
    __return_storage_ptr__->siteEnum = iVar1;
    __return_storage_ptr__->showTouristPromotion = bVar2;
    __return_storage_ptr__->allowsOpenInNewTab = bVar3;
    __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
    __return_storage_ptr__->allowsModals = bVar5;
    __return_storage_ptr__->integratedSdk = bVar6;
    __return_storage_ptr__->allowsFallbackAds = bVar7;
    __return_storage_ptr__->showPlayButtonAd = bVar8;
    __return_storage_ptr__->hideGoldShop = bVar9;
    __return_storage_ptr__->allowInHouseAds = bVar10;
    __return_storage_ptr__->removeFullscreenButton = bVar11;
    __return_storage_ptr__->hideSignUp = bVar12;
    __return_storage_ptr__->noPlayButtonVideoIcon = bVar13;
    return __return_storage_ptr__;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
  iVar1 = (this->fields).kogamaDefaultData.siteEnum;
  bVar2 = (this->fields).kogamaDefaultData.showTouristPromotion;
  bVar3 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
  bVar4 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
  bVar5 = (this->fields).kogamaDefaultData.allowsModals;
  bVar6 = (this->fields).kogamaDefaultData.integratedSdk;
  bVar7 = (this->fields).kogamaDefaultData.allowsFallbackAds;
  bVar8 = (this->fields).kogamaDefaultData.showPlayButtonAd;
  bVar9 = (this->fields).kogamaDefaultData.hideGoldShop;
  bVar10 = (this->fields).kogamaDefaultData.allowInHouseAds;
  bVar11 = (this->fields).kogamaDefaultData.removeFullscreenButton;
  bVar12 = (this->fields).kogamaDefaultData.hideSignUp;
  bVar13 = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
  __return_storage_ptr__->sites = (this->fields).kogamaDefaultData.sites;
  __return_storage_ptr__->siteEnum = iVar1;
  __return_storage_ptr__->showTouristPromotion = bVar2;
  __return_storage_ptr__->allowsOpenInNewTab = bVar3;
  __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
  __return_storage_ptr__->allowsModals = bVar5;
  __return_storage_ptr__->integratedSdk = bVar6;
  __return_storage_ptr__->allowsFallbackAds = bVar7;
  __return_storage_ptr__->showPlayButtonAd = bVar8;
  __return_storage_ptr__->hideGoldShop = bVar9;
  __return_storage_ptr__->allowInHouseAds = bVar10;
  __return_storage_ptr__->removeFullscreenButton = bVar11;
  __return_storage_ptr__->hideSignUp = bVar12;
  __return_storage_ptr__->noPlayButtonVideoIcon = bVar13;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize
               (EmbeddedPlayerConfig *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_No_embedded_site_set__starting_a);
    func_?(&StringLiteral_Embedded_site_set_to_);
    func_?(&StringLiteral_kogama_com);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).kogamaDefaultData.siteEnum;
  bVar2 = (this->fields).kogamaDefaultData.showTouristPromotion;
  bVar3 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
  bVar4 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
  bVar5 = (this->fields).kogamaDefaultData.allowsModals;
  bVar6 = (this->fields).kogamaDefaultData.integratedSdk;
  bVar7 = (this->fields).kogamaDefaultData.allowsFallbackAds;
  bVar8 = (this->fields).kogamaDefaultData.showPlayButtonAd;
  bVar9 = (this->fields).kogamaDefaultData.hideGoldShop;
  bVar10 = (this->fields).kogamaDefaultData.allowInHouseAds;
  bVar11 = (this->fields).kogamaDefaultData.removeFullscreenButton;
  bVar12 = (this->fields).kogamaDefaultData.hideSignUp;
  bVar13 = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
  (this->fields).currentSite.sites = (this->fields).kogamaDefaultData.sites;
  (this->fields).currentSite.siteEnum = iVar1;
  (this->fields).currentSite.showTouristPromotion = bVar2;
  (this->fields).currentSite.allowsOpenInNewTab = bVar3;
  (this->fields).currentSite.allowsRedirectToWebpage = bVar4;
  (this->fields).currentSite.allowsModals = bVar5;
  (this->fields).currentSite.integratedSdk = bVar6;
  (this->fields).currentSite.allowsFallbackAds = bVar7;
  (this->fields).currentSite.showPlayButtonAd = bVar8;
  (this->fields).currentSite.hideGoldShop = bVar9;
  (this->fields).currentSite.allowInHouseAds = bVar10;
  (this->fields).currentSite.removeFullscreenButton = bVar11;
  (this->fields).currentSite.hideSignUp = bVar12;
  (this->fields).currentSite.noPlayButtonVideoIcon = bVar13;
  func_?(&(this->fields).currentSite,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar14 != (GameSessionData *)0x0) {
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty
                       ((pGVar14->fields).embeddedSite,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_No_embedded_site_set__starting_a,(MethodInfo *)0x0);
      EmbeddedPlayerConfig_InitializeWithURL(this,StringLiteral_kogama_com,(MethodInfo *)0x0);
      (this->fields).initialized = 1;
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 != (GameSessionData *)0x0) {
      message = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Embedded_site_set_to_,(pGVar14->fields).embeddedSite,
                           (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar14 != (GameSessionData *)0x0) {
        EmbeddedPlayerConfig_InitializeWithURL(this,(pGVar14->fields).embeddedSite,(MethodInfo *)0x0)
        ;
        (this->fields).initialized = 1;
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void InitializeWithURL(String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_InitializeWithURL
               (EmbeddedPlayerConfig *this,String *url,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)0xffffffff;
  puStack_2 = &DAT_?;
  pLStack_3 = (List_1_EmbeddedSiteConfigData_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&pLStack_3;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  this_01 = (Uri *)0x0;
  if ((TypeInfo__System__Uri->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Uri);
  }
  bVar4 = System.dll::System::Uri::Uri_TryCreate
                    (url,UriKind__Enum_Absolute,(Uri **)&stack0xffffffe8,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (this_01 == (Uri *)0x0) goto code_?;
    url = System.dll::System::Uri::Uri_get_Host(this_01,(MethodInfo *)0x0);
  }
  host = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
         UnityWebRequest_UnEscapeURL(url,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)(this->fields).kogamaDefaultData.sites;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    bVar4 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pMVar5,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pLVar6 = (this->fields).kogamaDefaultData.sites;
      iVar7 = (this->fields).kogamaDefaultData.siteEnum;
      uVar8._0_1_ = (this->fields).kogamaDefaultData.showTouristPromotion;
      uVar8._1_1_ = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
      uVar8._2_1_ = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uVar8._3_1_ = (this->fields).kogamaDefaultData.allowsModals;
      uVar9._0_1_ = (this->fields).kogamaDefaultData.integratedSdk;
      uVar9._1_1_ = (this->fields).kogamaDefaultData.allowsFallbackAds;
      uVar9._2_1_ = (this->fields).kogamaDefaultData.showPlayButtonAd;
      uVar9._3_1_ = (this->fields).kogamaDefaultData.hideGoldShop;
      uVar10._0_1_ = (this->fields).kogamaDefaultData.allowInHouseAds;
      uVar10._1_1_ = (this->fields).kogamaDefaultData.removeFullscreenButton;
      uVar10._2_1_ = (this->fields).kogamaDefaultData.hideSignUp;
      uVar10._3_1_ = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
code_?:
      (this->fields).currentSite.sites = pLVar6;
      (this->fields).currentSite.siteEnum = iVar7;
      (this->fields).currentSite.showTouristPromotion = (char)uVar8;
      (this->fields).currentSite.allowsOpenInNewTab = (char)((uint)uVar8 >> 8);
      (this->fields).currentSite.allowsRedirectToWebpage = (char)((uint)uVar8 >> 0x10);
      (this->fields).currentSite.allowsModals = (char)((uint)uVar8 >> 0x18);
      (this->fields).currentSite.integratedSdk = (char)uVar9;
      (this->fields).currentSite.allowsFallbackAds = (char)((uint)uVar9 >> 8);
      (this->fields).currentSite.showPlayButtonAd = (char)((uint)uVar9 >> 0x10);
      (this->fields).currentSite.hideGoldShop = (char)((uint)uVar9 >> 0x18);
      (this->fields).currentSite.allowInHouseAds = (char)uVar10;
      (this->fields).currentSite.removeFullscreenButton = (char)((uint)uVar10 >> 8);
      (this->fields).currentSite.hideSignUp = (char)((uint)uVar10 >> 0x10);
      (this->fields).currentSite.noPlayButtonVideoIcon = (char)((uint)uVar10 >> 0x18);
      func_?();
code_?:
      *unaff_FS_OFFSET = (int)pLStack_3;
      return;
    }
    pMStack_1 = (MethodInfo *)0x0;
    index = (undefined *)0x0;
    while (pLVar11 = (this->fields).siteData, pLVar11 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
      if ((pLVar11->fields)._size <= (int)index) goto code_?;
      if (pLVar11 == (List_1_EmbeddedSiteConfigData_ *)0x0) break;
      pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&puStack_13,
                          (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                           *)pLVar11,(int32_t)index,
                          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                         );
      if ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)pIVar12->_index ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) break;
      pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)pIVar12->_index,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      bVar4 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pMVar5,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLVar11 = (this->fields).siteData;
        if (pLVar11 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
          pMStack_1 = 
          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_;
          pLStack_3 = pLVar11;
          puStack_2 = index;
          puVar14 = (undefined4 *)func_?();
          pLVar6 = (List_1_System_String_ *)*puVar14;
          iVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          uVar10 = puVar14[4];
          goto code_?;
        }
        break;
      }
      index = index + 1;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean IsSite(EmbeddedSite) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsSite
               (EmbeddedPlayerConfig *this,EmbeddedSite__Enum embeddedSite,MethodInfo *method)

{
  return (this->fields).currentSite.siteEnum == embeddedSite;
}


/* Boolean IsValidHost(String, String[]) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsValidHost
               (String *host,String__Array *hosts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__UriBuilder);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_Host_match_found__);
    func_?(&StringLiteral__matching_);
    func_?(&StringLiteral_https);
    cRam_? = '\x01';
  }
  if (host != (String *)0x0) {
    iVar1 = mscorlib.dll::System::String::String_IndexOf_3
                      (host,::StringLiteral____,(MethodInfo *)0x0);
    if (0 < iVar1) {
      host = mscorlib.dll::System::String::String_Substring_1
                       (host,iVar1 + 3,(host->fields)._stringLength - (iVar1 + 3),(MethodInfo *)0x0)
      ;
    }
    this = (UriBuilder *)func_?(TypeInfo__System__UriBuilder);
    System.dll::System::UriBuilder::UriBuilder__ctor_2
              (this,StringLiteral_https,host,(MethodInfo *)0x0);
    if (this != (UriBuilder *)0x0) {
      this_00 = System.dll::System::UriBuilder::UriBuilder_get_Uri(this,(MethodInfo *)0x0);
      uVar2 = 0;
      if (hosts != (String__Array *)0x0) {
        ppSVar3 = hosts->vector;
        while( true ) {
          if ((int)hosts->max_length <= (int)uVar2) {
            return 0;
          }
          if (hosts->max_length <= uVar2) break;
          pSVar4 = *ppSVar3;
          if (this_00 == (Uri *)0x0) goto code_?;
          this_01 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0);
          if (this_01 == (String *)0x0) goto code_?;
          bVar5 = mscorlib.dll::System::String::String_Contains(this_01,pSVar4,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pSVar4 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0);
            pSVar4 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral_Host_match_found__,pSVar4,StringLiteral__matching_,
                                pSVar4,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar4,(MethodInfo *)0x0);
            return 1;
          }
          uVar2 = uVar2 + 1;
          ppSVar3 = ppSVar3 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void OnURLSet(Boolean, String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_OnURLSet
               (EmbeddedPlayerConfig *this,bool ok,String *json,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    EmbeddedPlayerConfig__JSONDomainObject_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<EmbeddedPlayerConfig::JSONDomainObject>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_json__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_URL__);
    func_?(&StringLiteral_requestDomain_failed_);
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_json__,json,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  str1 = (Object__Class *)::StringLiteral__;
  if (ok == 0) {
    pSVar2 = StringLiteral_requestDomain_failed_;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      pSVar2 = StringLiteral_requestDomain_failed_;
    }
  }
  else {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (json,
                        EmbeddedPlayerConfig__JSONDomainObject_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<EmbeddedPlayerConfig::JSONDomainObject>_System__String_
                       );
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    str1 = pOVar3[1].klass;
    uVar1 = 0;
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_URL__,(String *)str1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_EBP = (MethodInfo *)0x0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,unaff_EBP);
  EmbeddedPlayerConfig_InitializeWithURL
            ((EmbeddedPlayerConfig *)0x0,(String *)str1,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uVar1;
  return;
}

