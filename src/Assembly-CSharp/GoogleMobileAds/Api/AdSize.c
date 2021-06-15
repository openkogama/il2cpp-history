
/* AdSize CreateAnchoredAdaptiveAdSize(Int32, Orientation) */

AdSize * Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_CreateAnchoredAdaptiveAdSize
                   (int32_t width,Orientation__Enum orientation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoogleMobileAds__Api__AdSize;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).originalScale.x = (float)width;
  (this->fields).originalScale.y = 0.0;
  (this->fields)._._._._.m_CachedPtr = (void *)0x2;
  (this->fields).state = orientation;
  return (AdSize *)this;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_Equals
               (AdSize *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
    if (pTVar1 == pTVar2) {
      iVar3 = func_?(obj);
      if (iVar3 == 0) {
        func_?();
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      if ((((this->fields).width == *(int *)(iVar3 + 0x10)) &&
          ((this->fields).height == *(int *)(iVar3 + 0x14))) &&
         ((this->fields).type == *(int *)(iVar3 + 8))) {
        return (this->fields).orientation == *(int *)(iVar3 + 0xc);
      }
      return 0;
    }
  }
  return 0;
}


/* AdSize GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(Int32) */

AdSize * Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::
         AdSize_GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth
                   (int32_t width,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__AdSize->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GoogleMobileAds__Api__AdSize->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__AdSize);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoogleMobileAds__Api__AdSize;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).originalScale.x = (float)width;
  (this->fields).originalScale.y = 0.0;
  (this->fields)._._._._.m_CachedPtr = (void *)0x2;
  (this->fields).state = 0;
  return (AdSize *)this;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_GetHashCode
                  (AdSize *this,MethodInfo *method)

{
  uVar1 = func_?(&(this->fields).width,0);
  uVar2 = func_?(&(this->fields).height,0);
  uVar3 = func_?(&this->fields,0);
  uVar4 = func_?(&(this->fields).orientation,0);
  return uVar4 ^ (uVar3 ^ (uVar2 ^ (uVar1 ^ 0x30d) * 0xb) * 0xb) * 0xb;
}


/* AdSize GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(Int32) */

AdSize * Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::
         AdSize_GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(int32_t width,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__AdSize->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GoogleMobileAds__Api__AdSize->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__AdSize);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoogleMobileAds__Api__AdSize;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).originalScale.x = (float)width;
  (this->fields).originalScale.y = 0.0;
  (this->fields)._._._._.m_CachedPtr = (void *)0x2;
  (this->fields).state = 1;
  return (AdSize *)this;
}


/* AdSize GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(Int32) */

AdSize * Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::
         AdSize_GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(int32_t width,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__AdSize->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GoogleMobileAds__Api__AdSize->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__AdSize);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GoogleMobileAds__Api__AdSize;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).originalScale.x = (float)width;
  (this->fields).originalScale.y = 0.0;
  (this->fields)._._._._.m_CachedPtr = (void *)0x2;
  (this->fields).state = 2;
  return (AdSize *)this;
}


/* AdSize() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GoogleMobileAds__Api__AdSize;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
  (pSVar2->fields).originalScale.x = 4.48416e-43;
  (pSVar2->fields).originalScale.y = 7.00649e-44;
  (pSVar2->fields).state = 0;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->Banner = (AdSize *)pSVar2;
  pAVar1 = TypeInfo__GoogleMobileAds__Api__AdSize;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
  (pSVar2->fields).originalScale.x = 4.2039e-43;
  (pSVar2->fields).originalScale.y = 3.50325e-43;
  (pSVar2->fields).state = 0;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->MediumRectangle = (AdSize *)pSVar2;
  pAVar1 = TypeInfo__GoogleMobileAds__Api__AdSize;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
  (pSVar2->fields).originalScale.x = 6.55808e-43;
  (pSVar2->fields).originalScale.y = 8.40779e-44;
  (pSVar2->fields).state = 0;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->IABBanner = (AdSize *)pSVar2;
  pAVar1 = TypeInfo__GoogleMobileAds__Api__AdSize;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
  (pSVar2->fields).originalScale.x = 1.02015e-42;
  (pSVar2->fields).originalScale.y = 1.26117e-43;
  (pSVar2->fields).state = 0;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->Leaderboard = (AdSize *)pSVar2;
  pAVar1 = TypeInfo__GoogleMobileAds__Api__AdSize;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  (pSVar2->fields).originalScale.x = 0.0;
  (pSVar2->fields).originalScale.y = 0.0;
  (pSVar2->fields).state = 0;
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x1;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->SmartBanner = (AdSize *)pSVar2;
  TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->FullWidth = -1;
  return;
}


/* AdSize(Int32, Int32) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize__ctor
               (AdSize *this,int32_t width,int32_t height,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).width = width;
  (this->fields).type = 0;
  (this->fields).height = height;
  (this->fields).orientation = 0;
  return;
}


/* AdSize(Int32, Int32, AdSize+Type) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize__ctor_1
               (AdSize *this,int32_t width,int32_t height,AdSize_Type__Enum type,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).width = width;
  (this->fields).height = height;
  (this->fields).orientation = 0;
  (this->fields).type = type;
  return;
}


/* Int32 get_Width() */

int32_t Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_get_Width
                  (AdSize *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).width;
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__AdSize->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GoogleMobileAds__Api__AdSize->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__AdSize);
  }
  if (iVar1 != TypeInfo__GoogleMobileAds__Api__AdSize->static_fields->FullWidth) {
    return (this->fields).width;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__MobileAds->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__GoogleMobileAds__Api__MobileAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__MobileAds);
  }
  pIVar2 = TypeInfo__GoogleMobileAds__Api__MobileAds->static_fields->client;
  if (pIVar2 != (IMobileAdsClient *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IMobileAdsClient) {
          iVar1 = pIVar3->interfaceOffsets[uVar4].offset;
          iVar6 = (*(code *)(&(pIVar2->klass->vtable).GetDeviceSafeWidth)[iVar1].method)
                            (pIVar2,(&pIVar2->klass[1]._0.image)[iVar1 * 2]);
          return iVar6;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar2,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,6);
    iVar6 = (*(code *)*puVar7)(pIVar2,puVar7[1]);
    return iVar6;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  iVar6 = (*pcVar8)();
  return iVar6;
}


/* Boolean op_Equality(AdSize, AdSize) */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_op_Equality
               (AdSize *a,AdSize *b,MethodInfo *method)

{
  if (a != (AdSize *)0x0) {
    bVar1 = (*(code *)(a->klass->vtable).Equals.method)(a,b,(a->klass->vtable).Finalize.methodPtr);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Inequality(AdSize, AdSize) */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::AdSize::AdSize_op_Inequality
               (AdSize *a,AdSize *b,MethodInfo *method)

{
  if (a != (AdSize *)0x0) {
    cVar1 = (*(code *)(a->klass->vtable).Equals.method)(a,b,(a->klass->vtable).Finalize.methodPtr);
    return cVar1 == '\0';
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

