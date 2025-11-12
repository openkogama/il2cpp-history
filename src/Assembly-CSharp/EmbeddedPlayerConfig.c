
/* Boolean DoesHostMatch(String, String[]) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_DoesHostMatch
               (String *allowedHost,String__Array *applicationHost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (::StringLiteral__ != (String *)0x0) {
    if ((::StringLiteral__->fields)._stringLength < 1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    if (allowedHost != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Split
                         (allowedHost,(::StringLiteral__->fields)._firstChar,
                          StringSplitOptions__Enum_None,(MethodInfo *)0x0);
      if ((applicationHost != (String__Array *)0x0) && (pSVar3 != (String__Array *)0x0)) {
        uVar4 = (uint)pSVar3->max_length;
        if ((int)applicationHost->max_length < (int)uVar4) {
code_?:
          bVar2 = 0;
        }
        else {
          uVar5 = (uint)applicationHost->max_length;
          ppSVar6 = pSVar3->vector;
          iVar7 = -uVar4;
          for (uVar8 = 0; (int)uVar8 < (int)uVar4; uVar8 = uVar8 + 1) {
            if ((uVar4 <= uVar8) || (uVar9 = iVar7 + uVar5, uVar5 <= uVar9)) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              bVar2 = (*pcVar1)();
              return bVar2;
            }
            pSVar10 = *ppSVar6;
            if (pSVar10 == (String *)0x0) goto code_?;
            pSVar11 = applicationHost->vector[(int)uVar9];
            if (pSVar10 != pSVar11) {
              if ((pSVar11 == (String *)0x0) ||
                 ((pSVar10->fields)._stringLength != (pSVar11->fields)._stringLength))
              goto code_?;
              bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar10->fields)._firstChar,
                                 (uint8_t *)&(pSVar11->fields)._firstChar,
                                 (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0);
              if (bVar2 == 0) goto code_?;
            }
            iVar7 = iVar7 + 1;
            ppSVar6 = ppSVar6 + 1;
          }
          bVar2 = 1;
        }
        return bVar2;
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void ForceEmbedSite(String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_ForceEmbedSite
               (EmbeddedPlayerConfig *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__,url,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  pUStackX_10 = (Uri *)0x0;
  if (*(int *)&(TypeInfo__System__Uri->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = System.dll::System::Uri::Uri_TryCreate
                     (url,UriKind__Enum_Absolute,&pUStackX_10,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pEVar3 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__WWWTranscoder);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    host = pSVar1;
    if (url != (String *)0x0) {
      iVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                         (&(url->fields)._firstChar,0x25,(url->fields)._stringLength,
                          (MethodInfo *)0x0);
      pSVar5 = pSVar1;
      if (iVar4 == -1) {
        iVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                           (&(url->fields)._firstChar,0x2b,(url->fields)._stringLength,
                            (MethodInfo *)0x0);
        pSVar5 = (String *)(ulonglong)(iVar4 == -1);
      }
      host = url;
      if ((char)pSVar5 == '\0') {
        if (pEVar3 == (Encoding *)0x0) goto code_?;
        pBVar6 = (Byte__Array *)
                  (*(pEVar3->klass->vtable).GetBytes_1.methodPtr)
                            (pEVar3,url,(pEVar3->klass->vtable).GetBytes_1.method);
        if (*(int *)&(TypeInfo__UnityEngine__WWWTranscoder->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar6 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWTranscoder::
                  WWWTranscoder_URLDecode(pBVar6,(MethodInfo *)0x0);
        host = (String *)(*(pEVar3->klass->vtable).GetString.methodPtr)(pEVar3,pBVar6);
      }
    }
    pLVar7 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)(this->fields).kogamaDefaultData.sites;
    if (pLVar7 != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) {
      pRVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                          (pLVar7,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      bVar2 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pRVar8,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        iVar4 = (this->fields).kogamaDefaultData.siteEnum;
        bVar2 = (this->fields).kogamaDefaultData.showTouristPromotion;
        bVar9 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
        bVar10 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
        bVar11 = (this->fields).kogamaDefaultData.allowsModals;
        (this->fields).currentSite.sites = (this->fields).kogamaDefaultData.sites;
        (this->fields).currentSite.siteEnum = iVar4;
        (this->fields).currentSite.showTouristPromotion = bVar2;
        (this->fields).currentSite.allowsOpenInNewTab = bVar9;
        (this->fields).currentSite.allowsRedirectToWebpage = bVar10;
        (this->fields).currentSite.allowsModals = bVar11;
        bVar2 = (this->fields).kogamaDefaultData.allowsFallbackAds;
        bVar9 = (this->fields).kogamaDefaultData.showPlayButtonAd;
        bVar10 = (this->fields).kogamaDefaultData.hideGoldShop;
        bVar11 = (this->fields).kogamaDefaultData.allowInHouseAds;
        bVar12 = (this->fields).kogamaDefaultData.removeFullscreenButton;
        bVar13 = (this->fields).kogamaDefaultData.hideSignUp;
        bVar14 = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
        (this->fields).currentSite.integratedSdk = (this->fields).kogamaDefaultData.integratedSdk;
        (this->fields).currentSite.allowsFallbackAds = bVar2;
        (this->fields).currentSite.showPlayButtonAd = bVar9;
        (this->fields).currentSite.hideGoldShop = bVar10;
        (this->fields).currentSite.allowInHouseAds = bVar11;
        (this->fields).currentSite.removeFullscreenButton = bVar12;
        (this->fields).currentSite.hideSignUp = bVar13;
        (this->fields).currentSite.noPlayButtonVideoIcon = bVar14;
        if (iRam_? != 0) {
          uVar15 = (uint)((ulonglong)&(this->fields).currentSite >> 0xc);
          puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar17 = *puVar16;
            LOCK();
            uVar18 = *puVar16;
            if (uVar17 == uVar18) {
              *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (uVar17 != uVar18);
        }
        return;
      }
      while (pLVar19 = (this->fields).siteData, pLVar19 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
        uVar15 = (uint)pSVar1;
        if ((pLVar19->fields)._size <= (int)uVar15) {
          return;
        }
        if (pLVar19 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
        if ((uint)(pLVar19->fields)._size <= uVar15) goto code_?;
        pEVar20 = (pLVar19->fields)._items;
        if (pEVar20 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
        if ((uint)pEVar20->max_length <= uVar15) goto code_?;
        pLVar7 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                  *)pEVar20->vector[(int)uVar15].sites;
        if (pLVar7 == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                       *)0x0) goto code_?;
        pRVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (pLVar7,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        bVar2 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pRVar8,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pLVar19 = (this->fields).siteData;
          if (pLVar19 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
          if ((uint)(pLVar19->fields)._size <= uVar15) goto code_?;
          pEVar20 = (pLVar19->fields)._items;
          if (pEVar20 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
          if (uVar15 < (uint)pEVar20->max_length) {
            pEVar21 = pEVar20->vector + (int)uVar15;
            uVar22 = *(undefined4 *)((longlong)&pEVar21->sites + 4);
            iVar4 = pEVar21->siteEnum;
            bVar2 = pEVar21->showTouristPromotion;
            bVar9 = pEVar21->allowsOpenInNewTab;
            bVar10 = pEVar21->allowsRedirectToWebpage;
            bVar11 = pEVar21->allowsModals;
            pEVar23 = pEVar20->vector + (int)uVar15;
            bVar12 = pEVar23->integratedSdk;
            bVar13 = pEVar23->allowsFallbackAds;
            bVar14 = pEVar23->showPlayButtonAd;
            bVar24 = pEVar23->hideGoldShop;
            bVar25 = pEVar23->allowInHouseAds;
            bVar26 = pEVar23->removeFullscreenButton;
            bVar27 = pEVar23->hideSignUp;
            bVar28 = pEVar23->noPlayButtonVideoIcon;
            *(undefined4 *)&(this->fields).currentSite.sites = *(undefined4 *)&pEVar21->sites;
            *(undefined4 *)((longlong)&(this->fields).currentSite.sites + 4) = uVar22;
            (this->fields).currentSite.siteEnum = iVar4;
            (this->fields).currentSite.showTouristPromotion = bVar2;
            (this->fields).currentSite.allowsOpenInNewTab = bVar9;
            (this->fields).currentSite.allowsRedirectToWebpage = bVar10;
            (this->fields).currentSite.allowsModals = bVar11;
            (this->fields).currentSite.integratedSdk = bVar12;
            (this->fields).currentSite.allowsFallbackAds = bVar13;
            (this->fields).currentSite.showPlayButtonAd = bVar14;
            (this->fields).currentSite.hideGoldShop = bVar24;
            (this->fields).currentSite.allowInHouseAds = bVar25;
            (this->fields).currentSite.removeFullscreenButton = bVar26;
            (this->fields).currentSite.hideSignUp = bVar27;
            (this->fields).currentSite.noPlayButtonVideoIcon = bVar28;
            func_?(&(this->fields).currentSite);
            return;
          }
          goto code_?;
        }
        pSVar1 = (String *)(ulonglong)(uVar15 + 1);
      }
      goto code_?;
    }
  }
  else if (pUStackX_10 != (Uri *)0x0) {
    url = System.dll::System::Uri::Uri_get_Host(pUStackX_10,(MethodInfo *)0x0);
    goto code_?;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* EmbeddedSiteConfigData GetCurrentSiteData() */

EmbeddedSiteConfigData *
Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
          (EmbeddedSiteConfigData *__return_storage_ptr__,EmbeddedPlayerConfig *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)&(this->fields).kogamaDefaultData.sites;
    uVar2 = *(undefined4 *)((longlong)&(this->fields).kogamaDefaultData.sites + 4);
    iVar3 = (this->fields).kogamaDefaultData.siteEnum;
    uVar4._0_1_ = (this->fields).kogamaDefaultData.showTouristPromotion;
    uVar4._1_1_ = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
    uVar4._2_1_ = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
    uVar4._3_1_ = (this->fields).kogamaDefaultData.allowsModals;
    uVar5._0_1_ = (this->fields).kogamaDefaultData.integratedSdk;
    uVar5._1_1_ = (this->fields).kogamaDefaultData.allowsFallbackAds;
    uVar5._2_1_ = (this->fields).kogamaDefaultData.showPlayButtonAd;
    uVar5._3_1_ = (this->fields).kogamaDefaultData.hideGoldShop;
    uVar5._4_1_ = (this->fields).kogamaDefaultData.allowInHouseAds;
    uVar5._5_1_ = (this->fields).kogamaDefaultData.removeFullscreenButton;
    uVar5._6_1_ = (this->fields).kogamaDefaultData.hideSignUp;
    uVar5._7_1_ = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
  }
  else {
    uVar1 = *(undefined4 *)&(this->fields).currentSite.sites;
    uVar2 = *(undefined4 *)((longlong)&(this->fields).currentSite.sites + 4);
    iVar3 = (this->fields).currentSite.siteEnum;
    uVar4._0_1_ = (this->fields).currentSite.showTouristPromotion;
    uVar4._1_1_ = (this->fields).currentSite.allowsOpenInNewTab;
    uVar4._2_1_ = (this->fields).currentSite.allowsRedirectToWebpage;
    uVar4._3_1_ = (this->fields).currentSite.allowsModals;
    uVar5._0_1_ = (this->fields).currentSite.integratedSdk;
    uVar5._1_1_ = (this->fields).currentSite.allowsFallbackAds;
    uVar5._2_1_ = (this->fields).currentSite.showPlayButtonAd;
    uVar5._3_1_ = (this->fields).currentSite.hideGoldShop;
    uVar5._4_1_ = (this->fields).currentSite.allowInHouseAds;
    uVar5._5_1_ = (this->fields).currentSite.removeFullscreenButton;
    uVar5._6_1_ = (this->fields).currentSite.hideSignUp;
    uVar5._7_1_ = (this->fields).currentSite.noPlayButtonVideoIcon;
  }
  *(undefined4 *)&__return_storage_ptr__->sites = uVar1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->sites + 4) = uVar2;
  __return_storage_ptr__->siteEnum = iVar3;
  __return_storage_ptr__->showTouristPromotion = (char)uVar4;
  __return_storage_ptr__->allowsOpenInNewTab = (char)((uint)uVar4 >> 8);
  __return_storage_ptr__->allowsRedirectToWebpage = (char)((uint)uVar4 >> 0x10);
  __return_storage_ptr__->allowsModals = (char)((uint)uVar4 >> 0x18);
  __return_storage_ptr__->integratedSdk = (char)uVar5;
  __return_storage_ptr__->allowsFallbackAds = (char)((ulonglong)uVar5 >> 8);
  __return_storage_ptr__->showPlayButtonAd = (char)((ulonglong)uVar5 >> 0x10);
  __return_storage_ptr__->hideGoldShop = (char)((ulonglong)uVar5 >> 0x18);
  __return_storage_ptr__->allowInHouseAds = (char)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->removeFullscreenButton = (char)((ulonglong)uVar5 >> 0x28);
  __return_storage_ptr__->hideSignUp = (char)((ulonglong)uVar5 >> 0x30);
  __return_storage_ptr__->noPlayButtonVideoIcon = (char)((ulonglong)uVar5 >> 0x38);
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize
               (EmbeddedPlayerConfig *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_embedded_site_set__starting_a);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_site_set_to_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_kogama_com);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  uVar2 = *(undefined4 *)((longlong)&(this->fields).kogamaDefaultData.sites + 4);
  iVar3 = (this->fields).kogamaDefaultData.siteEnum;
  bVar4 = (this->fields).kogamaDefaultData.showTouristPromotion;
  bVar5 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
  bVar6 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
  bVar7 = (this->fields).kogamaDefaultData.allowsModals;
  bVar8 = (this->fields).kogamaDefaultData.integratedSdk;
  bVar9 = (this->fields).kogamaDefaultData.allowsFallbackAds;
  bVar10 = (this->fields).kogamaDefaultData.showPlayButtonAd;
  bVar11 = (this->fields).kogamaDefaultData.hideGoldShop;
  bVar12 = (this->fields).kogamaDefaultData.allowInHouseAds;
  bVar13 = (this->fields).kogamaDefaultData.removeFullscreenButton;
  bVar14 = (this->fields).kogamaDefaultData.hideSignUp;
  bVar15 = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
  *(undefined4 *)&(this->fields).currentSite.sites =
       *(undefined4 *)&(this->fields).kogamaDefaultData.sites;
  *(undefined4 *)((longlong)&(this->fields).currentSite.sites + 4) = uVar2;
  (this->fields).currentSite.siteEnum = iVar3;
  (this->fields).currentSite.showTouristPromotion = bVar4;
  (this->fields).currentSite.allowsOpenInNewTab = bVar5;
  (this->fields).currentSite.allowsRedirectToWebpage = bVar6;
  (this->fields).currentSite.allowsModals = bVar7;
  (this->fields).currentSite.integratedSdk = bVar8;
  (this->fields).currentSite.allowsFallbackAds = bVar9;
  (this->fields).currentSite.showPlayButtonAd = bVar10;
  (this->fields).currentSite.hideGoldShop = bVar11;
  (this->fields).currentSite.allowInHouseAds = bVar12;
  (this->fields).currentSite.removeFullscreenButton = bVar13;
  (this->fields).currentSite.hideSignUp = bVar14;
  (this->fields).currentSite.noPlayButtonVideoIcon = bVar15;
  if (bVar1) {
    uVar16 = (uint)((ulonglong)&(this->fields).currentSite >> 0xc);
    puVar17 = (ulonglong *)((ulonglong)((uVar16 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar18 = *puVar17;
      LOCK();
      uVar19 = *puVar17;
      if (uVar18 == uVar19) {
        *puVar17 = uVar18 | 1L << (uVar16 & 0x3f);
      }
      UNLOCK();
    } while (uVar18 != uVar19);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar20 != (GameSessionData *)0x0) {
    pSVar21 = (pGVar20->fields).embeddedSite;
    if ((pSVar21 == (String *)0x0) || ((pSVar21->fields)._stringLength == 0)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_No_embedded_site_set__starting_a,(MethodInfo *)0x0);
      pSVar21 = StringLiteral_kogama_com;
code_?:
      EmbeddedPlayerConfig_InitializeWithURL(this,pSVar21,(MethodInfo *)0x0);
      (this->fields).initialized = 1;
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar20 != (GameSessionData *)0x0) {
      pSVar21 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Embedded_site_set_to_,(pGVar20->fields).embeddedSite,
                           (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar21,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar20 != (GameSessionData *)0x0) {
        pSVar21 = (pGVar20->fields).embeddedSite;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void InitializeWithURL(String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_InitializeWithURL
               (EmbeddedPlayerConfig *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  pUStackX_10 = (Uri *)0x0;
  if (*(int *)&(TypeInfo__System__Uri->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = System.dll::System::Uri::Uri_TryCreate
                     (url,UriKind__Enum_Absolute,&pUStackX_10,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pEVar3 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__WWWTranscoder);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    host = pSVar1;
    if (url != (String *)0x0) {
      iVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                         (&(url->fields)._firstChar,0x25,(url->fields)._stringLength,
                          (MethodInfo *)0x0);
      pSVar5 = pSVar1;
      if (iVar4 == -1) {
        iVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                           (&(url->fields)._firstChar,0x2b,(url->fields)._stringLength,
                            (MethodInfo *)0x0);
        pSVar5 = (String *)(ulonglong)(iVar4 == -1);
      }
      host = url;
      if ((char)pSVar5 == '\0') {
        if (pEVar3 == (Encoding *)0x0) goto code_?;
        pBVar6 = (Byte__Array *)
                  (*(pEVar3->klass->vtable).GetBytes_1.methodPtr)
                            (pEVar3,url,(pEVar3->klass->vtable).GetBytes_1.method);
        if (*(int *)&(TypeInfo__UnityEngine__WWWTranscoder->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar6 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWTranscoder::
                  WWWTranscoder_URLDecode(pBVar6,(MethodInfo *)0x0);
        host = (String *)(*(pEVar3->klass->vtable).GetString.methodPtr)(pEVar3,pBVar6);
      }
    }
    pLVar7 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)(this->fields).kogamaDefaultData.sites;
    if (pLVar7 != (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) {
      pRVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                          (pLVar7,
                           MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                          );
      bVar2 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pRVar8,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        iVar4 = (this->fields).kogamaDefaultData.siteEnum;
        bVar2 = (this->fields).kogamaDefaultData.showTouristPromotion;
        bVar9 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
        bVar10 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
        bVar11 = (this->fields).kogamaDefaultData.allowsModals;
        (this->fields).currentSite.sites = (this->fields).kogamaDefaultData.sites;
        (this->fields).currentSite.siteEnum = iVar4;
        (this->fields).currentSite.showTouristPromotion = bVar2;
        (this->fields).currentSite.allowsOpenInNewTab = bVar9;
        (this->fields).currentSite.allowsRedirectToWebpage = bVar10;
        (this->fields).currentSite.allowsModals = bVar11;
        bVar2 = (this->fields).kogamaDefaultData.allowsFallbackAds;
        bVar9 = (this->fields).kogamaDefaultData.showPlayButtonAd;
        bVar10 = (this->fields).kogamaDefaultData.hideGoldShop;
        bVar11 = (this->fields).kogamaDefaultData.allowInHouseAds;
        bVar12 = (this->fields).kogamaDefaultData.removeFullscreenButton;
        bVar13 = (this->fields).kogamaDefaultData.hideSignUp;
        bVar14 = (this->fields).kogamaDefaultData.noPlayButtonVideoIcon;
        (this->fields).currentSite.integratedSdk = (this->fields).kogamaDefaultData.integratedSdk;
        (this->fields).currentSite.allowsFallbackAds = bVar2;
        (this->fields).currentSite.showPlayButtonAd = bVar9;
        (this->fields).currentSite.hideGoldShop = bVar10;
        (this->fields).currentSite.allowInHouseAds = bVar11;
        (this->fields).currentSite.removeFullscreenButton = bVar12;
        (this->fields).currentSite.hideSignUp = bVar13;
        (this->fields).currentSite.noPlayButtonVideoIcon = bVar14;
        if (iRam_? != 0) {
          uVar15 = (uint)((ulonglong)&(this->fields).currentSite >> 0xc);
          puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar17 = *puVar16;
            LOCK();
            uVar18 = *puVar16;
            if (uVar17 == uVar18) {
              *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (uVar17 != uVar18);
        }
        return;
      }
      while (pLVar19 = (this->fields).siteData, pLVar19 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
        uVar15 = (uint)pSVar1;
        if ((pLVar19->fields)._size <= (int)uVar15) {
          return;
        }
        if (pLVar19 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
        if ((uint)(pLVar19->fields)._size <= uVar15) goto code_?;
        pEVar20 = (pLVar19->fields)._items;
        if (pEVar20 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
        if ((uint)pEVar20->max_length <= uVar15) goto code_?;
        pLVar7 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                  *)pEVar20->vector[(int)uVar15].sites;
        if (pLVar7 == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                       *)0x0) goto code_?;
        pRVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                            (pLVar7,
                             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                            );
        bVar2 = EmbeddedPlayerConfig_IsValidHost(host,(String__Array *)pRVar8,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pLVar19 = (this->fields).siteData;
          if (pLVar19 == (List_1_EmbeddedSiteConfigData_ *)0x0) goto code_?;
          if ((uint)(pLVar19->fields)._size <= uVar15) goto code_?;
          pEVar20 = (pLVar19->fields)._items;
          if (pEVar20 == (EmbeddedSiteConfigData__Array *)0x0) goto code_?;
          if (uVar15 < (uint)pEVar20->max_length) {
            pEVar21 = pEVar20->vector + (int)uVar15;
            uVar22 = *(undefined4 *)((longlong)&pEVar21->sites + 4);
            iVar4 = pEVar21->siteEnum;
            bVar2 = pEVar21->showTouristPromotion;
            bVar9 = pEVar21->allowsOpenInNewTab;
            bVar10 = pEVar21->allowsRedirectToWebpage;
            bVar11 = pEVar21->allowsModals;
            pEVar23 = pEVar20->vector + (int)uVar15;
            bVar12 = pEVar23->integratedSdk;
            bVar13 = pEVar23->allowsFallbackAds;
            bVar14 = pEVar23->showPlayButtonAd;
            bVar24 = pEVar23->hideGoldShop;
            bVar25 = pEVar23->allowInHouseAds;
            bVar26 = pEVar23->removeFullscreenButton;
            bVar27 = pEVar23->hideSignUp;
            bVar28 = pEVar23->noPlayButtonVideoIcon;
            *(undefined4 *)&(this->fields).currentSite.sites = *(undefined4 *)&pEVar21->sites;
            *(undefined4 *)((longlong)&(this->fields).currentSite.sites + 4) = uVar22;
            (this->fields).currentSite.siteEnum = iVar4;
            (this->fields).currentSite.showTouristPromotion = bVar2;
            (this->fields).currentSite.allowsOpenInNewTab = bVar9;
            (this->fields).currentSite.allowsRedirectToWebpage = bVar10;
            (this->fields).currentSite.allowsModals = bVar11;
            (this->fields).currentSite.integratedSdk = bVar12;
            (this->fields).currentSite.allowsFallbackAds = bVar13;
            (this->fields).currentSite.showPlayButtonAd = bVar14;
            (this->fields).currentSite.hideGoldShop = bVar24;
            (this->fields).currentSite.allowInHouseAds = bVar25;
            (this->fields).currentSite.removeFullscreenButton = bVar26;
            (this->fields).currentSite.hideSignUp = bVar27;
            (this->fields).currentSite.noPlayButtonVideoIcon = bVar28;
            func_?(&(this->fields).currentSite);
            return;
          }
          goto code_?;
        }
        pSVar1 = (String *)(ulonglong)(uVar15 + 1);
      }
      goto code_?;
    }
  }
  else if (pUStackX_10 != (Uri *)0x0) {
    url = System.dll::System::Uri::Uri_get_Host(pUStackX_10,(MethodInfo *)0x0);
    goto code_?;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__UriBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Host_match_found__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__matching_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (host != (String *)0x0) {
    iVar1 = mscorlib.dll::System::String::String_IndexOf_7
                      (host,::StringLiteral____,0,(host->fields)._stringLength,
                       StringComparison__Enum_CurrentCulture,(MethodInfo *)0x0);
    if (0 < iVar1) {
      host = mscorlib.dll::System::String::String_Substring_1
                       (host,iVar1 + 3,(host->fields)._stringLength - (iVar1 + 3),(MethodInfo *)0x0)
      ;
    }
    this = (UriBuilder *)FUN_?(TypeInfo__System__UriBuilder);
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
          if ((uint)hosts->max_length <= uVar2) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            bVar5 = (*pcVar4)();
            return bVar5;
          }
          pSVar6 = *ppSVar3;
          if ((this_00 == (Uri *)0x0) ||
             (pSVar7 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0),
             pSVar7 == (String *)0x0)) break;
          bVar5 = mscorlib.dll::System::String::String_Contains(pSVar7,pSVar6,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pSVar7 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_6
                               (StringLiteral_Host_match_found__,pSVar6,StringLiteral__matching_,
                                pSVar7,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar6,(MethodInfo *)0x0);
            return 1;
          }
          uVar2 = uVar2 + 1;
          ppSVar3 = ppSVar3 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnURLSet(Boolean, String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_OnURLSet
               (EmbeddedPlayerConfig *this,bool ok,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  EmbeddedPlayerConfig__JSONDomainObject_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<EmbeddedPlayerConfig::JSONDomainObject>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_json__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_URL__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_requestDomain_failed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_json__,json,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  str1 = (Object__Class *)::StringLiteral__;
  if (ok == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_requestDomain_failed_,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (json,
                        EmbeddedPlayerConfig__JSONDomainObject_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<EmbeddedPlayerConfig::JSONDomainObject>_System__String_
                       );
    if (pOVar2 == (Object *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    str1 = pOVar2[1].klass;
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_URL__,(String *)str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  EmbeddedPlayerConfig_InitializeWithURL(this,(String *)str1,(MethodInfo *)0x0);
  return;
}

