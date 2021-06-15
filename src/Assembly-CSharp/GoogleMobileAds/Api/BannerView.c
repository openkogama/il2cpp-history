
/* Void ConfigureBannerEvents() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_ConfigureBannerEvents
               (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__GoogleMobileAds__Api__BannerView___ConfigureBannerEvents_m__0_System__Object__System__EventArgs_
             ,
             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
            );
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,pUVar2);
    pIVar1 = (this->fields).client;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__GoogleMobileAds__Api__BannerView___ConfigureBannerEvents_m__1_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
               ,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (IBannerClient *)0x0) {
      func_?(2,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,pUVar2);
      pIVar1 = (this->fields).client;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__GoogleMobileAds__Api__BannerView___ConfigureBannerEvents_m__2_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (IBannerClient *)0x0) {
        func_?(4,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,pUVar2);
        pIVar1 = (this->fields).client;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__GoogleMobileAds__Api__BannerView___ConfigureBannerEvents_m__3_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (IBannerClient *)0x0) {
          func_?(6,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,pUVar2);
          pIVar1 = (this->fields).client;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__GoogleMobileAds__Api__BannerView___ConfigureBannerEvents_m__4_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (IBannerClient *)0x0) {
            func_?(8,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,pUVar2);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_Destroy
               (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0xf,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single GetHeightInPixels() */

float Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_GetHeightInPixels
                (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    fVar2 = (float10)func_?(0x10,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Single GetWidthInPixels() */

float Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_GetWidthInPixels
                (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    fVar2 = (float10)func_?(0x11,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* Void Hide() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_Hide
               (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0xe,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadAd(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_LoadAd
               (BannerView *this,AdRequest *request,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0xc,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,request);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String MediationAdapterClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_MediationAdapterClassName
                   (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    pSVar2 = (String *)func_?(0x14,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1)
    ;
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void SetPosition(AdPosition) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_SetPosition
               (BannerView *this,AdPosition__Enum adPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0x12,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1,adPosition);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPosition(Int32, Int32) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_SetPosition_1
               (BannerView *this,int32_t x,int32_t y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 == (IBannerClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IBannerClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).SetPosition_1)[pIVar3->interfaceOffsets[uVar4].offset].
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IBannerClient,0x13);
code_?:
  (*(code *)*ppMVar6)(pIVar1,x,y,ppMVar6[1]);
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_Show
               (BannerView *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IBannerClient *)0x0) {
    func_?(0xd,TypeInfo__GoogleMobileAds__Common__IBannerClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <ConfigureBannerEvents>m__0(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__0
               (BannerView *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdLoaded;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void <ConfigureBannerEvents>m__1(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__1
               (BannerView *this,Object *sender,AdFailedToLoadEventArgs *args,MethodInfo *method)

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


/* Void <ConfigureBannerEvents>m__2(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__2
               (BannerView *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdOpening;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void <ConfigureBannerEvents>m__3(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__3
               (BannerView *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdClosed;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void <ConfigureBannerEvents>m__4(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__4
               (BannerView *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).OnAdLeavingApplication;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* BannerView(String, AdSize, AdPosition) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ctor
               (BannerView *this,String *adUnitId,AdSize *adSize,AdPosition__Enum position,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_BuildBannerClient
                     ((MethodInfo *)0x0);
  (this->fields).client = pIVar1;
  if (pIVar1 == (IBannerClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IBannerClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).CreateBannerView)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IBannerClient,10);
code_?:
  (*(code *)*ppMVar6)(pIVar1,adUnitId,adSize,position,ppMVar6[1]);
  BannerView_ConfigureBannerEvents(this,(MethodInfo *)0x0);
  return;
}


/* BannerView(String, AdSize, Int32, Int32) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView__ctor_1
               (BannerView *this,String *adUnitId,AdSize *adSize,int32_t x,int32_t y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_BuildBannerClient
                     ((MethodInfo *)0x0);
  (this->fields).client = pIVar1;
  if (pIVar1 == (IBannerClient *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IBannerClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).CreateBannerView_1)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IBannerClient,0xb);
code_?:
  (*(code *)*ppMVar6)(pIVar1,adUnitId,adSize,x,y,ppMVar6[1]);
  BannerView_ConfigureBannerEvents(this,(MethodInfo *)0x0);
  return;
}


/* Void add_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_add_OnAdClosed
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdClosed;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdFailedToLoadEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_add_OnAdFailedToLoad
               (BannerView *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,
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


/* Void add_OnAdLeavingApplication(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_add_OnAdLeavingApplication
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdLeavingApplication;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdLoaded(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_add_OnAdLoaded
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdLoaded;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdOpening(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_add_OnAdOpening
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdOpening;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_remove_OnAdClosed
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdClosed;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdFailedToLoadEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_remove_OnAdFailedToLoad
               (BannerView *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,
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


/* Void remove_OnAdLeavingApplication(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_remove_OnAdLeavingApplication
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdLeavingApplication;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdLoaded(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_remove_OnAdLoaded
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdLoaded;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdOpening(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::BannerView::BannerView_remove_OnAdOpening
               (BannerView *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdOpening;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

