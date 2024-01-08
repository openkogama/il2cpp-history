
/* Boolean CheckUnderAge(Boolean, Nullable`1[DateTime]) */

bool MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::UserProfileData_CheckUnderAge
               (bool admin,Nullable_1_DateTime_ age,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    cRam_? = '\x01';
  }
  DStack_1._dateData = 0;
  if ((admin == 0) && (in_stack_2 != 0)) {
    DStack_3._dateData =
         (uint64_t)
         mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__get_Value
                   ((Nullable_1_TimeSpan_ *)&stack0x00000008,
                    MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar4 = mscorlib.dll::System::DateTime::DateTime_get_Year(&DStack_3,(MethodInfo *)0x0);
    month = mscorlib.dll::System::DateTime::DateTime_get_Month(&DStack_3,(MethodInfo *)0x0);
    mscorlib.dll::System::DateTime::DateTime__ctor_4(&DStack_1,iVar4,month,1,(MethodInfo *)0x0);
    DStack_1 = mscorlib.dll::System::DateTime::DateTime_AddMonths(&DStack_1,1,(MethodInfo *)0x0);
    DStack_5 = mscorlib.dll::System::DateTime::DateTime_get_Today((MethodInfo *)0x0);
    mscorlib.dll::System::DateTime::DateTime_AddYears(&DStack_5,-0xd,(MethodInfo *)0x0);
    age._4_4_ = &stack0xffffffdc;
    age.value._dateData._4_4_ = DStack_1._dateData._4_4_;
    age.value._dateData._0_4_ = (undefined4)DStack_1._dateData;
    age._0_4_ = &UNK_?;
    value._dateData._4_4_ = 0;
    value._dateData._0_4_ = DStack_1._dateData._4_4_;
    iVar4 = mscorlib.dll::System::DateTime::DateTime_CompareTo_1
                      ((DateTime *)age._4_4_,value,in_stack_6);
    return (bool)((uint)iVar4 >> 0x1f);
  }
  return 0;
}


/* UserProfileData CreateRegisteredProfileData(Boolean, String, Int32, Nullable`1[DateTime]) */

UserProfileData *
MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::
UserProfileData_CreateRegisteredProfileData
          (bool admin,String *username,int32_t gold,Nullable_1_DateTime_ age,MethodInfo *method)

{
  bVar1 = admin;
  _admin = (DateTime *)(uint)admin;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__UserProfileData);
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = _bStack00000010;
  auStack_2._4_4_ = age._0_4_;
  auStack_2._8_4_ = age._4_4_;
  uStack_3 = (UserProfileData *)age.value._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    cRam_? = '\x01';
  }
  age._4_4_ = 0;
  age.value._dateData._0_4_ = (UserProfileData *)0x0;
  if ((bVar1 == 0) && (auStack_2[0] != 0)) {
    DStack_4._dateData =
         (uint64_t)
         mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__get_Value
                   ((Nullable_1_TimeSpan_ *)auStack_2,
                    MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    iVar5 = mscorlib.dll::System::DateTime::DateTime_get_Year(&DStack_4,(MethodInfo *)0x0);
    month = mscorlib.dll::System::DateTime::DateTime_get_Month(&DStack_4,(MethodInfo *)0x0);
    mscorlib.dll::System::DateTime::DateTime__ctor_4
              ((DateTime *)&age.field_0x4,iVar5,month,1,(MethodInfo *)0x0);
    DVar6 = mscorlib.dll::System::DateTime::DateTime_AddMonths
                      ((DateTime *)&age.field_0x4,1,(MethodInfo *)0x0);
    age._4_4_ = SUB84(DVar6._dateData,0);
    age.value._dateData._0_4_ = (UserProfileData *)(DVar6._dateData >> 0x20);
    DStack_7 = mscorlib.dll::System::DateTime::DateTime_get_Today((MethodInfo *)0x0);
    DStack_8 = mscorlib.dll::System::DateTime::DateTime_AddYears(&DStack_7,-0xd,(MethodInfo *)0x0)
    ;
    _admin = &DStack_8;
    bStack9 = 0;
    uStack10 = 0;
    gold = (int32_t)(UserProfileData *)age.value._dateData;
    username = (String *)age._4_4_;
    DVar6._dateData._4_4_ = 0;
    DVar6._dateData._0_4_ = (uint)(UserProfileData *)age.value._dateData;
    iVar5 = mscorlib.dll::System::DateTime::DateTime_CompareTo_1
                      (_admin,DVar6,(MethodInfo *)age._0_4_);
    bVar1 = (bool)((uint)iVar5 >> 0x1f);
  }
  else {
    bVar1 = 0;
  }
  method_00 = TypeInfo__MV__WorldObject__MetaData__UserProfileData;
  age.value._dateData._4_4_ = &UNK_?;
  pUVar11 = (UserProfileData *)func_?();
  age.value._dateData._4_4_ = (undefined *)0x0;
  age._4_4_ = &UNK_?;
  age.value._dateData._0_4_ = pUVar11;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pUVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pUVar11 != (UserProfileData *)0x0) {
    (pUVar11->fields).IsAdmin = admin;
    ppSStack12 = &(pUVar11->fields).UserName;
    pSStack13 = username;
    (pUVar11->fields).UserName = username;
    func_?();
    (pUVar11->fields).Gold = gold;
    (pUVar11->fields).IsUnderAge = bVar1;
    (pUVar11->fields).IsTourist = 0;
    return pUVar11;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pUVar11 = (UserProfileData *)(*pcVar14)();
  return pUVar11;
}


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
    bVar2 = cRam_? == '\0';
    (pUVar1->fields).IsTourist = 1;
    (pUVar1->fields).IsUnderAge = 0;
    if (bVar2) {
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
  pcVar3 = (code *)swi(3);
  pUVar1 = (UserProfileData *)(*pcVar3)();
  return pUVar1;
}

