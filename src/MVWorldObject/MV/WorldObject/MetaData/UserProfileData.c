
/* UserProfileData GetTouristProfileData(String) */

UserProfileData *
MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::UserProfileData_GetTouristProfileData
          (String *userName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__UserProfileData);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__MetaData__UserProfileData;
  pUVar1 = (UserProfileData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pUVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pUVar1 != (UserProfileData *)0x0) {
    (pUVar1->fields).IsAdmin = 0;
    (pUVar1->fields).UserName = userName;
    method_01 = (MethodInfo *)&UNK_?;
    func_?(&(pUVar1->fields).UserName,userName);
    (pUVar1->fields).Gold = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
      cRam_? = '\x01';
    }
    value = (SubscriptionData *)
            func_?(TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,method_01);
    if (value != (SubscriptionData *)0x0) {
      (value->fields).SubscriptionType = 0;
      (pUVar1->fields).SubscriptionData = value;
      func_?(&(pUVar1->fields).SubscriptionData,value);
      return pUVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pUVar1 = (UserProfileData *)(*pcVar2)();
  return pUVar1;
}

