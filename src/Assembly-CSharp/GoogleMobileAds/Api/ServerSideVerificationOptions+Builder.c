
/* ServerSideVerificationOptions Build() */

ServerSideVerificationOptions *
Assembly-CSharp.dll::GoogleMobileAds::Api::ServerSideVerificationOptions+Builder::
ServerSideVerificationOptions_Builder_Build
          (ServerSideVerificationOptions_Builder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoogleMobileAds__Api__ServerSideVerificationOptions;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this != (ServerSideVerificationOptions_Builder *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (this->fields)._UserId_k__BackingField;
    (this_00->fields).state = (int32_t)(this->fields)._CustomData_k__BackingField;
    return (ServerSideVerificationOptions *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pSVar2 = (ServerSideVerificationOptions *)(*pcVar1)();
  return pSVar2;
}

