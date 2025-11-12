
/* Boolean HideFullscreen() */

bool Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager_HideFullscreen
               (DummyAdManager *this,MethodInfo *method)

{
  return (this->fields).siteData.removeFullscreenButton;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeAdConfigSettings
               (DummyAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config == (AdConfigSettings *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  iVar3 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum;
  bVar4 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion;
  bVar5 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab;
  bVar6 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage;
  bVar7 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals;
  bVar8 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk;
  bVar9 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds;
  bVar10 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd;
  bVar11 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideGoldShop;
  bVar12 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowInHouseAds;
  bVar13 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.removeFullscreenButton;
  bVar14 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideSignUp;
  bVar15 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.noPlayButtonVideoIcon;
  (this->fields).siteData.sites = (config->fields)._EmbeddedSiteConfigData_k__BackingField.sites;
  (this->fields).siteData.siteEnum = iVar3;
  (this->fields).siteData.showTouristPromotion = bVar4;
  (this->fields).siteData.allowsOpenInNewTab = bVar5;
  (this->fields).siteData.allowsRedirectToWebpage = bVar6;
  (this->fields).siteData.allowsModals = bVar7;
  (this->fields).siteData.integratedSdk = bVar8;
  (this->fields).siteData.allowsFallbackAds = bVar9;
  (this->fields).siteData.showPlayButtonAd = bVar10;
  (this->fields).siteData.hideGoldShop = bVar11;
  (this->fields).siteData.allowInHouseAds = bVar12;
  (this->fields).siteData.removeFullscreenButton = bVar13;
  (this->fields).siteData.hideSignUp = bVar14;
  (this->fields).siteData.noPlayButtonVideoIcon = bVar15;
  if (bVar2) {
    uVar16 = (uint)((ulonglong)&(this->fields).siteData >> 0xc);
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
  (this->fields).timeoutAsEnabled = (config->fields)._AdTimeoutAsSuccess_k__BackingField;
  (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeCallbackManager
               (DummyAdManager *this,IAdUIManager *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).adUIHandler = handler;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager_RequestInterstitial
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___RequestIntersti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___RequestIntersti);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = StringLiteral_DummyAdManager___RequestIntersti;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if ((this->fields).adUIHandler != (IAdUIManager *)0x0) {
    cVar1 = FUN_?();
    if (cVar1 == '\0') {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Start,context,
                   (MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        pIVar5 = (this->fields).adUIHandler;
        (this->fields).startTime = fVar4;
        if (pIVar5 != (IAdUIManager *)0x0) {
          FUN_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar5,
                        interstitialCallback);
          (this->fields).rewarded = 0;
          return;
        }
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_DummyAdManager___RequestIntersti,(MethodInfo *)0x0);
      if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0
         ) {
        (*(interstitialCallback->fields)._._.invoke_impl)
                  ((interstitialCallback->fields)._._.method_code,0,
                   (interstitialCallback->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager_RequestRewardedAd
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___RequestRewarded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___RequestRewarded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = StringLiteral_DummyAdManager___RequestRewarded;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if ((this->fields).adUIHandler != (IAdUIManager *)0x0) {
    cVar1 = FUN_?();
    if (cVar1 == '\0') {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Start,context,
                   (MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        pIVar5 = (this->fields).adUIHandler;
        (this->fields).startTime = fVar4;
        if (pIVar5 != (IAdUIManager *)0x0) {
          FUN_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar5,
                        rewardedAdCallback);
          (this->fields).rewarded = 1;
          return;
        }
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_DummyAdManager___RequestRewarded,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        (*(rewardedAdCallback->fields)._._.invoke_impl)
                  ((rewardedAdCallback->fields)._._.method_code,0,
                   (rewardedAdCallback->fields)._._.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_UpdateControllerUpdate(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___UpdateControlle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___UpdateControlle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DummyAdManager___UpdateControlle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).adUIHandler == (IAdUIManager *)0x0) goto code_?;
  cVar1 = FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
  if (cVar1 != '\0') {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    if ((this->fields).delay + (this->fields).startTime < fVar4) {
      args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
      afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,(this->fields).rewarded);
      lVar5 = FUN_?(lRam_?,afStackX_8);
      if (args == (Object__Array *)0x0) goto code_?;
      if ((lVar5 != 0) && (lVar6 = FUN_?(lVar5,(args->klass->_0).element_class), lVar6 == 0)
         ) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(args,0,lVar5);
      afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,(this->fields).timeoutAsEnabled);
      lVar5 = FUN_?(lRam_?,afStackX_8);
      if ((lVar5 != 0) && (lVar6 = FUN_?(lVar5,(args->klass->_0).element_class), lVar6 == 0)
         ) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(args,1,lVar5);
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      afStackX_8[0] = (float)(*pcRam_?)();
      afStackX_8[0] = afStackX_8[0] - (this->fields).startTime;
      lVar5 = FUN_?(uRam_?,afStackX_8);
      if ((lVar5 != 0) && (lVar6 = FUN_?(lVar5,(args->klass->_0).element_class), lVar6 == 0)
         ) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(args,2,lVar5);
      afStackX_8[0] = (float)(this->fields).timeoutSuccessDelay;
      lVar5 = FUN_?(uRam_?,afStackX_8);
      if ((lVar5 != 0) && (lVar5 = FUN_?(lVar5,(args->klass->_0).element_class), lVar5 == 0)
         ) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?(args,3);
      pSVar7 = StringLiteral_DummyAdManager___UpdateControlle;
      PStack_8._arg0 = (Object *)0x0;
      PStack_8._arg1 = (Object *)0x0;
      PStack_8._arg2 = (Object *)0x0;
      PStack_8._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_8,args,(MethodInfo *)0x0);
      PStack_9._arg0 = PStack_8._arg0;
      PStack_9._arg1 = PStack_8._arg1;
      PStack_9._arg2 = PStack_8._arg2;
      PStack_9._args = PStack_8._args;
      pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar7,&PStack_9,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar7,(MethodInfo *)0x0);
      if ((((this->fields).rewarded != 0) && ((this->fields).timeoutAsEnabled != 0)) &&
         (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         (float)(this->fields).timeoutSuccessDelay <= fVar4 - (this->fields).startTime)) {
        Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                  (StringLiteral_DummyAdManager___UpdateControlle,(MethodInfo *)0x0);
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar7 = mscorlib.dll::System::Boolean::Boolean_ToString
                         ((Boolean *)&(this->fields).rewarded,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_DummyAdManager___UpdateControlle,pSVar7,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar7,(MethodInfo *)0x0);
      if ((this->fields).rewarded == 0) {
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar10 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (pMVar10,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,
                   AdContext__Enum_None,(MethodInfo *)0x0);
        pIVar11 = (this->fields).adUIHandler;
        if (pIVar11 == (IAdUIManager *)0x0) goto code_?;
        uVar3 = 3;
      }
      else {
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar10 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (pMVar10,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
                   (MethodInfo *)0x0);
        pIVar11 = (this->fields).adUIHandler;
        if (pIVar11 == (IAdUIManager *)0x0) goto code_?;
        uVar3 = 4;
      }
      FUN_?(uVar3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar11,3);
    }
  }
  return;
}


/* DummyAdManager() */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager__ctor
               (DummyAdManager *this,MethodInfo *method)

{
  (this->fields).delay = 1.5;
  (this->fields).timeoutSuccessDelay = 0x1e;
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_RewardedAdNotAvailableText(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Ads_not_set_up_for_this_build_ta);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Ads_not_set_up_for_this_build_ta;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) ||
             (this_00 = (pTVar4->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastAd(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastInterstitial(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastRewarded(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

