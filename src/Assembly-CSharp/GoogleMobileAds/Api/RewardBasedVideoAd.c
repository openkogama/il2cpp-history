
/* Boolean IsLoaded() */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd_IsLoaded
               (RewardBasedVideoAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
    bVar2 = func_?(0x12,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1
                           );
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void LoadAd(AdRequest, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd_LoadAd
               (RewardBasedVideoAd *this,AdRequest *request,String *adUnitId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 == (IRewardBasedVideoAdClient *)0x0) {
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
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).LoadAd)[pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,0x11
                           );
code_?:
  (*(code *)*ppMVar6)(pIVar1,request,adUnitId,ppMVar6[1]);
  return;
}


/* String MediationAdapterClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
         RewardBasedVideoAd_MediationAdapterClassName(RewardBasedVideoAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
    pSVar2 = (String *)
             func_?(0x13,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,
                             pIVar1);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd_SetUserId
               (RewardBasedVideoAd *this,String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
    func_?(0x15,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1,userId)
    ;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd_Show
               (RewardBasedVideoAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
    func_?(0x14,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <RewardBasedVideoAd>m__0(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__0
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardBasedVideoAd>m__1(Object, AdFailedToLoadEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__1
               (RewardBasedVideoAd *this,Object *sender,AdFailedToLoadEventArgs *args,
               MethodInfo *method)

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


/* Void <RewardBasedVideoAd>m__2(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__2
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardBasedVideoAd>m__3(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__3
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdStarted;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* Void <RewardBasedVideoAd>m__4(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__4
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardBasedVideoAd>m__5(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__5
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardBasedVideoAd>m__6(Object, Reward) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__6
               (RewardBasedVideoAd *this,Object *sender,Reward *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdRewarded;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__Invoke_System__Object__GoogleMobileAds__Api__Reward_
              );
  }
  return;
}


/* Void <RewardBasedVideoAd>m__7(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd__RewardBasedVideoAd_m__7
               (RewardBasedVideoAd *this,Object *sender,EventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdCompleted;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  return;
}


/* RewardBasedVideoAd() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (RewardBasedVideoAd *)func_?(TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd);
  RewardBasedVideoAd__ctor(this,(MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd->static_fields->instance = this;
  return;
}


/* RewardBasedVideoAd() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd__ctor
               (RewardBasedVideoAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_BuildRewardBasedVideoAdClient
                     ((MethodInfo *)0x0);
  (this->fields).client = pIVar1;
  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
    func_?(0x10,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1);
    pIVar1 = (this->fields).client;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__0_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
      func_?(0,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1,pUVar2);
      pIVar1 = (this->fields).client;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__1_System__Object__GoogleMobileAds__Api__AdFailedToLoadEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdFailedToLoadEventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
        func_?(2,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1,pUVar2
                       );
        pIVar1 = (this->fields).client;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__2_System__Object__System__EventArgs_
                   ,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
          func_?(4,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1,
                          pUVar2);
          pIVar1 = (this->fields).client;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__3_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
            func_?(6,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1,
                            pUVar2);
            pIVar1 = (this->fields).client;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__4_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
              func_?(10,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,pIVar1
                              ,pUVar2);
              pIVar1 = (this->fields).client;
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)this,
                         MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__5_System__Object__System__EventArgs_
                         ,
                         MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                        );
              if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
                func_?(0xc,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,
                                pIVar1,pUVar2);
                pIVar1 = (this->fields).client;
                pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(
                                           TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>
                                           );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar2,(Object *)this,
                           MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__6_System__Object__GoogleMobileAds__Api__Reward_
                           ,
                           MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__EventHandler_System__Object__void__
                          );
                if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
                  func_?(8,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient,
                                  pIVar1,pUVar2);
                  pIVar1 = (this->fields).client;
                  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar2,(Object *)this,
                             MethodInfo__GoogleMobileAds__Api__RewardBasedVideoAd___RewardBasedVideoAd_m__7_System__Object__System__EventArgs_
                             ,
                             MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                            );
                  if (pIVar1 != (IRewardBasedVideoAdClient *)0x0) {
                    func_?(0xe,TypeInfo__GoogleMobileAds__Common__IRewardBasedVideoAdClient
                                    ,pIVar1,pUVar2);
                    return;
                  }
                }
              }
            }
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


/* Void add_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdClosed
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void add_OnAdCompleted(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdCompleted
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdCompleted;
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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdFailedToLoad
               (RewardBasedVideoAd *this,
               EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,MethodInfo *method
               )

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdLeavingApplication
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdLoaded
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdOpening
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void add_OnAdRewarded(EventHandler`1[GoogleMobileAds.Api.Reward]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdRewarded
               (RewardBasedVideoAd *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdRewarded;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_Reward___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_Reward_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdStarted(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_add_OnAdStarted
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdStarted;
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


/* RewardBasedVideoAd get_Instance() */

RewardBasedVideoAd *
Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::RewardBasedVideoAd_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd);
  }
  return TypeInfo__GoogleMobileAds__Api__RewardBasedVideoAd->static_fields->instance;
}


/* Void remove_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdClosed
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void remove_OnAdCompleted(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdCompleted
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdCompleted;
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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdFailedToLoad
               (RewardBasedVideoAd *this,
               EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value,MethodInfo *method
               )

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdLeavingApplication
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdLoaded
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdOpening
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void remove_OnAdRewarded(EventHandler`1[GoogleMobileAds.Api.Reward]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdRewarded
               (RewardBasedVideoAd *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdRewarded;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_Reward___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_Reward_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdStarted(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardBasedVideoAd::
     RewardBasedVideoAd_remove_OnAdStarted
               (RewardBasedVideoAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdStarted;
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

