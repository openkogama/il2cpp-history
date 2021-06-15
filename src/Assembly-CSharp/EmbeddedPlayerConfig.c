
/* Boolean DoesHostMatch(String, String[]) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_DoesHostMatch
               (String *allowedHost,String__Array *applicationHost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if ((::StringLiteral__ != (String *)0x0) &&
     (uVar1 = mscorlib.dll::System::String::String_get_Chars(::StringLiteral__,0,(MethodInfo *)0x0),
     separator != (Char__Array *)0x0)) {
    if (separator->max_length == 0) goto code_?;
    separator->vector[0] = uVar1;
    if (((allowedHost != (String *)0x0) &&
        (allowedHost = (String *)
                       mscorlib.dll::System::String::String_Split
                                 (allowedHost,separator,(MethodInfo *)0x0),
        applicationHost != (String__Array *)0x0)) &&
       ((String__Array *)allowedHost != (String__Array *)0x0)) {
      if ((int)applicationHost->max_length < (int)((String__Array *)allowedHost)->max_length) {
        return 0;
      }
      uVar2 = 0;
      ppSVar3 = ((String__Array *)allowedHost)->vector;
      while( true ) {
        uVar4 = ((String__Array *)allowedHost)->max_length;
        if ((int)uVar4 <= (int)uVar2) {
          return 1;
        }
        if ((uVar4 <= uVar2) ||
           (uVar4 = (applicationHost->max_length - uVar4) + uVar2,
           applicationHost->max_length <= uVar4)) break;
        if (*ppSVar3 == (String *)0x0) goto code_?;
        allowedHost = (String *)0x0;
        bVar5 = mscorlib.dll::System::String::String_Equals_2
                          (*ppSVar3,*(String **)((int)applicationHost + uVar4 * 4 + 0x10),
                           (MethodInfo *)0x0);
        if (bVar5 == 0) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        ppSVar3 = ppSVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* EmbeddedSiteConfigData GetCurrentSiteData() */

EmbeddedSiteConfigData *
Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
          (EmbeddedSiteConfigData *__return_storage_ptr__,EmbeddedPlayerConfig *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    uVar9 = (this->fields).currentSite.field_0xf;
    __return_storage_ptr__->sites = (this->fields).currentSite.sites;
    __return_storage_ptr__->siteEnum = iVar1;
    __return_storage_ptr__->showTouristPromotion = bVar2;
    __return_storage_ptr__->allowsOpenInNewTab = bVar3;
    __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
    __return_storage_ptr__->allowsModals = bVar5;
    __return_storage_ptr__->integratedSdk = bVar6;
    __return_storage_ptr__->allowsFallbackAds = bVar7;
    __return_storage_ptr__->showPlayButtonAd = bVar8;
    __return_storage_ptr__->field_0xf = uVar9;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
  iVar1 = (this->fields).kogamaDefaultData.siteEnum;
  bVar2 = (this->fields).kogamaDefaultData.showTouristPromotion;
  bVar3 = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
  bVar4 = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
  bVar5 = (this->fields).kogamaDefaultData.allowsModals;
  bVar6 = (this->fields).kogamaDefaultData.integratedSdk;
  bVar7 = (this->fields).kogamaDefaultData.allowsFallbackAds;
  bVar8 = (this->fields).kogamaDefaultData.showPlayButtonAd;
  uVar9 = (this->fields).kogamaDefaultData.field_0xf;
  __return_storage_ptr__->sites = (this->fields).kogamaDefaultData.sites;
  __return_storage_ptr__->siteEnum = iVar1;
  __return_storage_ptr__->showTouristPromotion = bVar2;
  __return_storage_ptr__->allowsOpenInNewTab = bVar3;
  __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
  __return_storage_ptr__->allowsModals = bVar5;
  __return_storage_ptr__->integratedSdk = bVar6;
  __return_storage_ptr__->allowsFallbackAds = bVar7;
  __return_storage_ptr__->showPlayButtonAd = bVar8;
  __return_storage_ptr__->field_0xf = uVar9;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_Initialize
               (EmbeddedPlayerConfig *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  uVar9 = (this->fields).kogamaDefaultData.field_0xf;
  (this->fields).currentSite.sites = (this->fields).kogamaDefaultData.sites;
  (this->fields).currentSite.siteEnum = iVar1;
  (this->fields).currentSite.showTouristPromotion = bVar2;
  (this->fields).currentSite.allowsOpenInNewTab = bVar3;
  (this->fields).currentSite.allowsRedirectToWebpage = bVar4;
  (this->fields).currentSite.allowsModals = bVar5;
  (this->fields).currentSite.integratedSdk = bVar6;
  (this->fields).currentSite.allowsFallbackAds = bVar7;
  (this->fields).currentSite.showPlayButtonAd = bVar8;
  (this->fields).currentSite.field_0xf = uVar9;
  EmbeddedPlayerConfig_InitializeWithURL(this,StringLiteral_kogama_com,(MethodInfo *)0x0);
  (this->fields).initialized = 1;
  return;
}


/* Void InitializeWithURL(String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_InitializeWithURL
               (EmbeddedPlayerConfig *this,String *url,MethodInfo *method)

{
  __return_storage_ptr__ = (List_1_EmbeddedSiteConfigData_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  ppSStack_1 = (String__Class **)&stack0xffffffc4;
  ppSVar2 = (String__Class **)&stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppSVar2 = ppSStack_1;
  }
  ppSStack_1 = ppSVar2;
  pUStack_3 = (Uri *)0x0;
  func_?();
  ppSStack_1 = (String__Class **)&stack0xffffffc4;
  if ((((uint)(TypeInfo__System__Uri->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (ppSStack_1 = (String__Class **)&stack0xffffffc4,
     (TypeInfo__System__Uri->_1).cctor_started == 0)) {
    ppSStack_1 = (String__Class **)&stack0xffffffc4;
    func_?(TypeInfo__System__Uri);
  }
  bVar4 = System.dll::System::Uri::Uri_TryCreate
                    (url,UriKind__Enum_Absolute,&pUStack_3,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (pUStack_3 == (Uri *)0x0) goto code_?;
    url = System.dll::System::Uri::Uri_get_Host(pUStack_3,(MethodInfo *)0x0);
  }
  url = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_UnEscapeURL(url,(MethodInfo *)0x0);
  pLVar5 = (List_1_VoxelHit_ *)(this->fields).kogamaDefaultData.sites;
  if (pLVar5 != (List_1_VoxelHit_ *)0x0) {
    pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (pLVar5,
                        MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    bVar4 = EmbeddedPlayerConfig_IsValidHost(url,(String__Array *)pVVar6,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pLVar7 = (this->fields).kogamaDefaultData.sites;
      iVar8 = (this->fields).kogamaDefaultData.siteEnum;
      uVar9._0_1_ = (this->fields).kogamaDefaultData.showTouristPromotion;
      uVar9._1_1_ = (this->fields).kogamaDefaultData.allowsOpenInNewTab;
      uVar9._2_1_ = (this->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uVar9._3_1_ = (this->fields).kogamaDefaultData.allowsModals;
      uVar10._0_1_ = (this->fields).kogamaDefaultData.integratedSdk;
      uVar10._1_1_ = (this->fields).kogamaDefaultData.allowsFallbackAds;
      uVar10._2_1_ = (this->fields).kogamaDefaultData.showPlayButtonAd;
      uVar10._3_1_ = (this->fields).kogamaDefaultData.field_0xf;
code_?:
      (this->fields).currentSite.sites = pLVar7;
      (this->fields).currentSite.siteEnum = iVar8;
      (this->fields).currentSite.showTouristPromotion = (char)uVar9;
      (this->fields).currentSite.allowsOpenInNewTab = (char)((uint)uVar9 >> 8);
      (this->fields).currentSite.allowsRedirectToWebpage = (char)((uint)uVar9 >> 0x10);
      (this->fields).currentSite.allowsModals = (char)((uint)uVar9 >> 0x18);
      (this->fields).currentSite.integratedSdk = (char)uVar10;
      (this->fields).currentSite.allowsFallbackAds = (char)((uint)uVar10 >> 8);
      (this->fields).currentSite.showPlayButtonAd = (char)((uint)uVar10 >> 0x10);
      (this->fields).currentSite.field_0xf = (char)((uint)uVar10 >> 0x18);
code_?:
      *unaff_FS_OFFSET = __return_storage_ptr__;
      return;
    }
    url = (String *)0x0;
    while (__return_storage_ptr__ = (this->fields).siteData,
          __return_storage_ptr__ != (List_1_EmbeddedSiteConfigData_ *)0x0) {
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          __return_storage_ptr__,
                          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Count__
                         );
      if ((int)pOVar11 <= (int)url) goto code_?;
      this_00 = (this->fields).siteData;
      if (this_00 == (List_1_EmbeddedSiteConfigData_ *)0x0) break;
      __return_storage_ptr__ = (List_1_EmbeddedSiteConfigData_ *)&stack0xffffffd0;
      pEVar12 = mscorlib.dll::System::Collections::Generic::List`1[EmbeddedSiteConfigData]::
               List_1_EmbeddedSiteConfigData__get_Item
                         ((EmbeddedSiteConfigData *)__return_storage_ptr__,this_00,(int32_t)url,
                          MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
                         );
      pLVar5 = (List_1_VoxelHit_ *)pEVar12->sites;
      if (pLVar5 == (List_1_VoxelHit_ *)0x0) break;
      pVVar6 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         (pLVar5,
                          MethodInfo__System__Collections__Generic__List<System::String>__ToArray__)
      ;
      bVar4 = EmbeddedPlayerConfig_IsValidHost
                        ((String *)pLVar5,(String__Array *)pVVar6,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pLStack13 = (this->fields).siteData;
        if (pLStack13 != (List_1_EmbeddedSiteConfigData_ *)0x0) {
          pMStack14 =
               MethodInfo__System__Collections__Generic__List<EmbeddedSiteConfigData>__get_Item_int_
          ;
          pSStack15 = url;
          puVar16 = (undefined4 *)func_?();
          pLVar7 = (List_1_System_String_ *)*puVar16;
          iVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          goto code_?;
        }
        break;
      }
      url = (String *)((int)&url->klass + 1);
    }
  }
code_?:
  func_?();
  pSStack_17 = url->klass;
  ppSStack_1 = &pSStack_17;
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean IsValidHost(String, String[]) */

bool Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_IsValidHost
               (String *host,String__Array *hosts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (host != (String *)0x0) {
    iVar1 = mscorlib.dll::System::String::String_IndexOf_5(host,StringLiteral____,(MethodInfo *)0x0)
    ;
    if (0 < iVar1) {
      host = mscorlib.dll::System::String::String_Substring(host,iVar1 + 3,(MethodInfo *)0x0);
    }
    this = (UriBuilder *)func_?(TypeInfo__System__UriBuilder);
    System.dll::System::UriBuilder::UriBuilder__ctor_1
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
          pSVar5 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0);
          if (pSVar5 == (String *)0x0) goto code_?;
          bVar6 = mscorlib.dll::System::String::String_Contains(pSVar5,pSVar4,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pSVar5 = System.dll::System::Uri::Uri_get_Host(this_00,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar4 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_Host_match_found__,pSVar4,StringLiteral__matching_,
                                pSVar5,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Void OnURLSet(Boolean, String) */

void Assembly-CSharp.dll::EmbeddedPlayerConfig::EmbeddedPlayerConfig_OnURLSet
               (EmbeddedPlayerConfig *this,bool ok,String *json,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_json__,json,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = TypeInfo__System__String->static_fields->Empty;
  if (ok == 0) {
    message = StringLiteral_requestDomain_failed_;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
      message = StringLiteral_requestDomain_failed_;
    }
  }
  else {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar3 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (json,
                        EmbeddedPlayerConfig__JSONDomainObject_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<EmbeddedPlayerConfig::JSONDomainObject>_System__String_
                       );
    if (pXVar3 == (XPLevelLimits *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar2 = (String *)(pXVar3->fields)._PrevXP_k__BackingField;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    uVar1 = 0;
    message = mscorlib.dll::System::String::String_Concat_2
                        (StringLiteral_URL__,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    unaff_EBP = (MethodInfo *)0x0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,unaff_EBP);
  EmbeddedPlayerConfig_InitializeWithURL((EmbeddedPlayerConfig *)0x0,pSVar2,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uVar1;
  return;
}

