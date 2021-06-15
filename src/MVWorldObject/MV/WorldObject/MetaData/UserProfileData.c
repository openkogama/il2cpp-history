
/* UserProfileData GetTouristProfileData(String) */

UserProfileData *
MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::UserProfileData_GetTouristProfileData
          (String *userName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__MetaData__UserProfileData;
  this = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00)
  ;
  if (this != (ScaleAnimationBase *)0x0) {
    bVar1 = cRam_? == '\0';
    *(undefined1 *)&(this->fields)._._._._.m_CachedPtr = 0;
    (this->fields).state = (int32_t)userName;
    (this->fields).originalScale.x = 0.0;
    if (bVar1) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)
              func_?(TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = (void *)0x0;
      (this->fields).originalScale.y = (float)this_00;
      return (UserProfileData *)this;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pUVar3 = (UserProfileData *)(*pcVar2)();
  return pUVar3;
}

