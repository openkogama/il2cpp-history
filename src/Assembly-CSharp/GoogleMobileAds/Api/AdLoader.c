
/* Void LoadAd(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader_LoadAd
               (AdLoader *this,AdRequest *request,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adLoaderClient;
  if (pIVar1 != (IAdLoaderClient *)0x0) {
    func_?(4,TypeInfo__GoogleMobileAds__Common__IAdLoaderClient,pIVar1,request);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <AdLoader>m__0(Object, CustomNativeEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader__AdLoader_m__0
               (AdLoader *this,Object *sender,CustomNativeEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).OnCustomNativeTemplateAdLoaded;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>__Invoke_System__Object__GoogleMobileAds__Api__CustomNativeEventArgs_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <AdLoader>m__1(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader__AdLoader_m__1
               (AdLoader *this,Object *sender,AdFailedToLoadEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdFailedToLoad;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__Invoke_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
              );
  }
  return;
}


/* AdLoader(AdLoader+Builder) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader__ctor
               (AdLoader *this,AdLoader_Builder *builder,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (builder != (AdLoader_Builder *)0x0) {
    pSVar1 = (builder->fields)._AdUnitId_k__BackingField;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Copy(pSVar1,(MethodInfo *)0x0);
    (this->fields)._AdUnitId_k__BackingField = pSVar1;
    capacity = (builder->fields)._CustomNativeTemplateClickHandlers_k__BackingField;
    this_00 = (Dictionary_2_System_String_System_Action_2_GoogleMobileAds_Api_CustomNativeTemplateAd_String_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>
                                );
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_00,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>__Dictionary_System__Collections__Generic__IDictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>_
              );
    (this->fields)._CustomNativeTemplateClickHandlers_k__BackingField = this_00;
    capacity_00 = (builder->fields)._TemplateIds_k__BackingField;
    this_01 = (HashSet_1_System_String_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_01,(int32_t)capacity_00,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields)._TemplateIds_k__BackingField = this_01;
    capacity_01 = (builder->fields)._AdTypes_k__BackingField;
    this_02 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>
                             );
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_02,(int32_t)capacity_01,
               MethodInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>__HashSet_System__Collections__Generic__IEnumerable<GoogleMobileAds::Api::NativeAdType>_
              );
    (this->fields)._AdTypes_k__BackingField = this_02;
    pIVar2 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_BuildAdLoaderClient
                       (this,(MethodInfo *)0x0);
    (this->fields).adLoaderClient = pIVar2;
    GoogleMobileAds::Common::Utils::Utils_CheckInitialization((MethodInfo *)0x0);
    pIVar2 = (this->fields).adLoaderClient;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__GoogleMobileAds__Api__AdLoader___AdLoader_m__0_System__Object__GoogleMobileAds__Api__CustomNativeEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar2 != (IAdLoaderClient *)0x0) {
      pIVar4 = pIVar2->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IAdLoaderClient) {
            ppMVar7 = &(&(pIVar2->klass->vtable).add_OnCustomNativeTemplateAdLoaded)
                       [pIVar4->interfaceOffsets[uVar5].offset].method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(pIVar2,TypeInfo__GoogleMobileAds__Common__IAdLoaderClient,2);
code_?:
      (*(code *)*ppMVar7)(pIVar2,pUVar3,ppMVar7[1]);
      pIVar2 = (this->fields).adLoaderClient;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__GoogleMobileAds__Api__AdLoader___AdLoader_m__1_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar2 != (IAdLoaderClient *)0x0) {
        func_?(0,TypeInfo__GoogleMobileAds__Common__IAdLoaderClient,pIVar2,pUVar3);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void add_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdFailedToLoadEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader_add_OnAdFailedToLoad
               (AdLoader *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdFailedToLoad;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)
             func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   add_OnCustomNativeTemplateAdLoaded(EventHandler`1[GoogleMobileAds.Api.CustomNativeEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::
     AdLoader_add_OnCustomNativeTemplateAdLoaded
               (AdLoader *this,EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCustomNativeTemplateAdLoaded;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>)
        ;
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *)
             func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdFailedToLoadEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::AdLoader_remove_OnAdFailedToLoad
               (AdLoader *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdFailedToLoad;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void 
   remove_OnCustomNativeTemplateAdLoaded(EventHandler`1[GoogleMobileAds.Api.CustomNativeEventArgs])
    */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader::
     AdLoader_remove_OnCustomNativeTemplateAdLoaded
               (AdLoader *this,EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnCustomNativeTemplateAdLoaded;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::CustomNativeEventArgs>)
        ;
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

