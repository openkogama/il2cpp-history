
/* Reward GetRewardItem() */

Reward * Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_GetRewardItem
                   (RewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    cVar2 = func_?(0xe,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1);
    if (cVar2 == '\0') {
      return (Reward *)0x0;
    }
    pIVar1 = (this->fields).client;
    if (pIVar1 != (IRewardedAdClient *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IRewardedAdClient) {
            iVar6 = pIVar3->interfaceOffsets[uVar4].offset;
            pRVar7 = (Reward *)
                     (*(code *)(&(pIVar1->klass->vtable).GetRewardItem)[iVar6].method)
                               (pIVar1,(&(pIVar1->klass->vtable).Show)[iVar6].methodPtr);
            return pRVar7;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      puVar8 = (undefined4 *)
               func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,0x10);
      pRVar7 = (Reward *)(*(code *)*puVar8)(pIVar1,puVar8[1]);
      return pRVar7;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pRVar7 = (Reward *)(*pcVar9)();
  return pRVar7;
}


/* Boolean IsLoaded() */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_IsLoaded
               (RewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    bVar2 = func_?(0xe,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void LoadAd(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_LoadAd
               (RewardedAd *this,AdRequest *request,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    func_?(0xd,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,request);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String MediationAdapterClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_MediationAdapterClassName
                   (RewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    pSVar2 = (String *)
             func_?(0xf,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void SetServerSideVerificationOptions(ServerSideVerificationOptions) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::
     RewardedAd_SetServerSideVerificationOptions
               (RewardedAd *this,ServerSideVerificationOptions *serverSideVerificationOptions,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IRewardedAdClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar1->klass->vtable).SetServerSideVerificationOptions)[iVar5].method)
                    (pIVar1,serverSideVerificationOptions,(&pIVar1->klass[1]._0.image)[iVar5 * 2]);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,0x12);
    (*(code *)*puVar6)(pIVar1,serverSideVerificationOptions,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_Show
               (RewardedAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).client;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    func_?(0x11,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <RewardedAd>m__0(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__0
               (RewardedAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardedAd>m__1(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__1
               (RewardedAd *this,Object *sender,AdErrorEventArgs *args,MethodInfo *method)

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
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__Invoke_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
              );
  }
  return;
}


/* Void <RewardedAd>m__2(Object, AdErrorEventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__2
               (RewardedAd *this,Object *sender,AdErrorEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnAdFailedToShow;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__Invoke_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
              );
  }
  return;
}


/* Void <RewardedAd>m__3(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__3
               (RewardedAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardedAd>m__4(Object, EventArgs) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__4
               (RewardedAd *this,Object *sender,EventArgs *args,MethodInfo *method)

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


/* Void <RewardedAd>m__5(Object, Reward) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RewardedAd_m__5
               (RewardedAd *this,Object *sender,Reward *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnUserEarnedReward;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)args,
               MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__Invoke_System__Object__GoogleMobileAds__Api__Reward_
              );
  }
  return;
}


/* RewardedAd(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__ctor
               (RewardedAd *this,String *adUnitId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pIVar1 = GoogleMobileAdsClientFactory::GoogleMobileAdsClientFactory_BuildRewardedAdClient
                     ((MethodInfo *)0x0);
  (this->fields).client = pIVar1;
  if (pIVar1 != (IRewardedAdClient *)0x0) {
    func_?(0xc,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,adUnitId);
    pIVar1 = (this->fields).client;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__0_System__Object__System__EventArgs_
               ,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pIVar1 != (IRewardedAdClient *)0x0) {
      func_?(0,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2);
      pIVar1 = (this->fields).client;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__1_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                 ,
                 MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                );
      if (pIVar1 != (IRewardedAdClient *)0x0) {
        func_?(2,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2);
        pIVar1 = (this->fields).client;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__2_System__Object__GoogleMobileAds__Api__AdErrorEventArgs_
                   ,
                   MethodInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>__EventHandler_System__Object__void__
                  );
        if (pIVar1 != (IRewardedAdClient *)0x0) {
          func_?(4,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2);
          pIVar1 = (this->fields).client;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__3_System__Object__System__EventArgs_
                     ,
                     MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                    );
          if (pIVar1 != (IRewardedAdClient *)0x0) {
            func_?(6,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2);
            pIVar1 = (this->fields).client;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__4_System__Object__System__EventArgs_
                       ,
                       MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                      );
            if (pIVar1 != (IRewardedAdClient *)0x0) {
              func_?(10,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2)
              ;
              pIVar1 = (this->fields).client;
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(
                                         TypeInfo__System__EventHandler<GoogleMobileAds::Api::Reward>
                                         );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)this,
                         MethodInfo__GoogleMobileAds__Api__RewardedAd___RewardedAd_m__5_System__Object__GoogleMobileAds__Api__Reward_
                         ,
                         MethodInfo__System__EventHandler<GoogleMobileAds::Api::Reward>__EventHandler_System__Object__void__
                        );
              if (pIVar1 != (IRewardedAdClient *)0x0) {
                func_?(8,TypeInfo__GoogleMobileAds__Common__IRewardedAdClient,pIVar1,pUVar2
                               );
                return;
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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdClosed
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void add_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdErrorEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToLoad
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *value,
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
      if ((EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdFailedToShow(EventHandler`1[GoogleMobileAds.Api.AdErrorEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdFailedToShow
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdFailedToShow;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnAdLoaded(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdLoaded
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnAdOpening
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void add_OnUserEarnedReward(EventHandler`1[GoogleMobileAds.Api.Reward]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_add_OnUserEarnedReward
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnUserEarnedReward;
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


/* Void remove_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdClosed
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void remove_OnAdFailedToLoad(EventHandler`1[GoogleMobileAds.Api.AdErrorEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdFailedToLoad
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *value,
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
      if ((EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdFailedToShow(EventHandler`1[GoogleMobileAds.Api.AdErrorEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdFailedToShow
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnAdFailedToShow;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<GoogleMobileAds::Api::AdErrorEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GoogleMobileAds_Api_AdErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdLoaded(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdLoaded
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnAdOpening
               (RewardedAd *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void remove_OnUserEarnedReward(EventHandler`1[GoogleMobileAds.Api.Reward]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd_remove_OnUserEarnedReward
               (RewardedAd *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnUserEarnedReward;
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

