
/* Void CheckInitialization() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::Utils::Utils_CheckInitialization
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  bVar1 = MobileAdsEventExecutor::MobileAdsEventExecutor_IsActive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_You_intitialized_an_ad_object_bu,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?();
  }
  MobileAdsEventExecutor::MobileAdsEventExecutor_Initialize((MethodInfo *)0x0);
  return;
}


/* Texture2D GetTexture2DFromByteArray(Byte[]) */

Texture2D *
Assembly-CSharp.dll::GoogleMobileAds::Common::Utils::Utils_GetTexture2DFromByteArray
          (Byte__Array *img,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
            (pTVar1,1,1,(MethodInfo *)0x0);
  bVar2 = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(pTVar1,img,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return pTVar1;
  }
  pIStack3 = TypeInfo__System__InvalidOperationException;
  this = (InvalidOperationException *)func_?();
  mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
            (this,StringLiteral_Could_not_load_custom_native_tem,(MethodInfo *)0x0);
  pMStack4 =
       MethodInfo__GoogleMobileAds__Common__Utils__GetTexture2DFromByteArray_System__Byte____;
  uStack5 = 0;
  pIStack6 = this;
  func_?();
  pcVar7 = (code *)swi(3);
  pTVar1 = (Texture2D *)(*pcVar7)();
  return pTVar1;
}

