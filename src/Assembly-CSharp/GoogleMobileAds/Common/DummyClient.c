
/* Void CreateAdLoader(AdLoader+Builder) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_CreateAdLoader
               (DummyClient *this,AdLoader_Builder *builder,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__CreateAdLoader_GoogleMobileAds__Api__AdLoader__Builder_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__CreateAdLoader_GoogleMobileAds__Api__AdLoader__Builder_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__CreateAdLoader_GoogleMobileAds__Api__AdLoader__Builder_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateBannerView(String, AdSize, AdPosition) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_CreateBannerView
               (DummyClient *this,String *adUnitId,AdSize *adSize,AdPosition__Enum position,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__GoogleMobileAds__Api__AdPosition_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__GoogleMobileAds__Api__AdPosition_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__GoogleMobileAds__Api__AdPosition_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateBannerView(String, AdSize, Int32, Int32) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_CreateBannerView_1
               (DummyClient *this,String *adUnitId,AdSize *adSize,int32_t positionX,
               int32_t positionY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__int__int_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__int__int_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__CreateBannerView_System__String__GoogleMobileAds__Api__AdSize__int__int_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateInterstitialAd(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_CreateInterstitialAd
               (DummyClient *this,String *adUnitId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__CreateInterstitialAd_System__String_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__CreateInterstitialAd_System__String_->
       iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__CreateInterstitialAd_System__String_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateRewardBasedVideoAd() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_CreateRewardBasedVideoAd
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__CreateRewardBasedVideoAd__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__CreateRewardBasedVideoAd__->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__CreateRewardBasedVideoAd__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyBannerView() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_DestroyBannerView
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyBannerView__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyBannerView__->iflags & 0x200) != 0)
  {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyBannerView__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyInterstitial() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_DestroyInterstitial
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyInterstitial__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyInterstitial__->iflags & 0x200) != 0
     ) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyInterstitial__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyRewardBasedVideoAd() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_DestroyRewardBasedVideoAd(DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyRewardBasedVideoAd__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyRewardBasedVideoAd__->iflags & 0x200
      ) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__DestroyRewardBasedVideoAd__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetDeviceSafeWidth() */

int32_t Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_GetDeviceSafeWidth
                  (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceSafeWidth__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceSafeWidth__->iflags & 0x200) != 0)
  {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceSafeWidth__)
    ;
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return 0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Single GetDeviceScale() */

float Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_GetDeviceScale
                (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceScale__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceScale__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__GetDeviceScale__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return 0.0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetHeightInPixels() */

float Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_GetHeightInPixels
                (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__GetHeightInPixels__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__GetHeightInPixels__->iflags & 0x200) != 0)
  {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__GetHeightInPixels__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return 0.0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single GetWidthInPixels() */

float Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_GetWidthInPixels
                (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__GetWidthInPixels__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__GetWidthInPixels__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__GetWidthInPixels__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return 0.0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void HideBannerView() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_HideBannerView
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__HideBannerView__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__HideBannerView__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__HideBannerView__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_Initialize
               (DummyClient *this,String *appId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__String_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__String_->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__String_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Action`1[GoogleMobileAds.Api.InitializationStatus]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_Initialize_1
               (DummyClient *this,
               Action_1_GoogleMobileAds_Api_InitializationStatus_ *initCompleteAction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__Action<GoogleMobileAds::Api::InitializationStatus>_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__Action<GoogleMobileAds::Api::InitializationStatus>_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__Initialize_System__Action<GoogleMobileAds::Api::InitializationStatus>_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsLoaded() */

bool Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_IsLoaded
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__IsLoaded__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__IsLoaded__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__IsLoaded__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return 1;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Load(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_Load
               (DummyClient *this,AdRequest *request,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__Load_GoogleMobileAds__Api__AdRequest_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__Load_GoogleMobileAds__Api__AdRequest_->
       iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__Load_GoogleMobileAds__Api__AdRequest_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LoadAd(AdRequest) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_LoadAd
               (DummyClient *this,AdRequest *request,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest_->
       iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LoadAd(AdRequest, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_LoadAd_1
               (DummyClient *this,AdRequest *request,String *adUnitId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest__System__String_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest__System__String_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__LoadAd_GoogleMobileAds__Api__AdRequest__System__String_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String MediationAdapterClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
         DummyClient_MediationAdapterClassName(DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__MediationAdapterClassName__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__MediationAdapterClassName__->iflags & 0x200
      ) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__MediationAdapterClassName__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return (String *)0x0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void SetAdSize(AdSize) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetAdSize
               (DummyClient *this,AdSize *adSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetAdSize_GoogleMobileAds__Api__AdSize_
  ;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetAdSize_GoogleMobileAds__Api__AdSize_->
       iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetAdSize_GoogleMobileAds__Api__AdSize_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetApplicationMuted(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetApplicationMuted
               (DummyClient *this,bool muted,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationMuted_bool_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationMuted_bool_->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationMuted_bool_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetApplicationVolume(Single) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetApplicationVolume
               (DummyClient *this,float volume,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationVolume_float_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationVolume_float_->iflags & 0x200
      ) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetApplicationVolume_float_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPosition(AdPosition) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetPosition
               (DummyClient *this,AdPosition__Enum adPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_GoogleMobileAds__Api__AdPosition_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_GoogleMobileAds__Api__AdPosition_
       ->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_GoogleMobileAds__Api__AdPosition_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPosition(Int32, Int32) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetPosition_1
               (DummyClient *this,int32_t x,int32_t y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_int__int_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_int__int_->iflags & 0x200) != 0
     ) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__SetPosition_int__int_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_SetUserId
               (DummyClient *this,String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetUserId_System__String_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetUserId_System__String_->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetUserId_System__String_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetiOSAppPauseOnBackground(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_SetiOSAppPauseOnBackground(DummyClient *this,bool pause,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__SetiOSAppPauseOnBackground_bool_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__SetiOSAppPauseOnBackground_bool_->iflags &
      0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__SetiOSAppPauseOnBackground_bool_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowBannerView() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_ShowBannerView
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__ShowBannerView__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__ShowBannerView__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__ShowBannerView__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowInterstitial() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_ShowInterstitial
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__ShowInterstitial__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__ShowInterstitial__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__ShowInterstitial__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowRewardBasedVideoAd() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_ShowRewardBasedVideoAd
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__ShowRewardBasedVideoAd__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__ShowRewardBasedVideoAd__->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__ShowRewardBasedVideoAd__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DummyClient() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient__ctor
               (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__DummyClient__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__DummyClient__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)func_?();
  }
  piVar2 = (int *)func_?(pMVar1);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdClosed
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdCompleted
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdFailedToLoad
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value
               ,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_add_OnAdLeavingApplication
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdLoaded
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnAdLoaded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_OnAdOpening(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdOpening
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdRewarded
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_add_OnAdStarted
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void 
   add_OnCustomNativeTemplateAdLoaded(EventHandler`1[GoogleMobileAds.Api.CustomNativeEventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_add_OnCustomNativeTemplateAdLoaded
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *value,
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


/* String get_UserId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_get_UserId
                   (DummyClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__get_UserId__;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__get_UserId__->iflags & 0x200) != 0) {
    pMVar1 = (MethodInfo *)
             func_?(MethodInfo__GoogleMobileAds__Common__DummyClient__get_UserId__);
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return StringLiteral_UserId;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void remove_OnAdClosed(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdClosed
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdCompleted
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdFailedToLoad
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_AdFailedToLoadEventArgs_ *value
               ,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_remove_OnAdLeavingApplication
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdLoaded
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnAdLoaded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnAdOpening(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdOpening
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdRewarded
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_Reward_ *value,
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

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_remove_OnAdStarted
               (DummyClient *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

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


/* Void 
   remove_OnCustomNativeTemplateAdLoaded(EventHandler`1[GoogleMobileAds.Api.CustomNativeEventArgs])
    */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::
     DummyClient_remove_OnCustomNativeTemplateAdLoaded
               (DummyClient *this,EventHandler_1_GoogleMobileAds_Api_CustomNativeEventArgs_ *value,
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


/* Void set_UserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::DummyClient::DummyClient_set_UserId
               (DummyClient *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__GoogleMobileAds__Common__DummyClient__set_UserId_System__String_;
  if ((MethodInfo__GoogleMobileAds__Common__DummyClient__set_UserId_System__String_->iflags & 0x200)
      != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__DummyClient__set_UserId_System__String_
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->name);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

