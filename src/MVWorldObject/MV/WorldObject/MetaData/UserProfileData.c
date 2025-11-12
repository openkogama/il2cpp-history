
/* Boolean CheckUnderAge(Boolean, Nullable`1[DateTime]) */

bool MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::UserProfileData_CheckUnderAge
               (bool admin,Nullable_1_DateTime_ *age,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<System::DateTime>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<System::DateTime>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((admin == 0) && (age->hasValue != 0)) {
    DStackX_20._dateData = (age->value)._dateData;
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = mscorlib.dll::System::DateTime::DateTime_GetDatePart(&DStackX_20,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    month = mscorlib.dll::System::DateTime::DateTime_GetDatePart(&DStackX_20,2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DStackX_20._dateData =
         mscorlib.dll::System::DateTime::DateTime_DateToTicks(iVar1,month,1,(MethodInfo *)0x0);
    t2 = mscorlib.dll::System::DateTime::DateTime_AddMonths(&DStackX_20,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DStackX_20._dateData =
         (DVar2._dateData & 0x3fffffffffffffff) -
         (DVar2._dateData & 0x3fffffffffffffff) % 864000000000 |
         DVar2._dateData & 0xc000000000000000;
    DVar2 = mscorlib.dll::System::DateTime::DateTime_AddYears(&DStackX_20,-0xd,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar1 = mscorlib.dll::System::DateTime::DateTime_Compare(DVar2,t2,(MethodInfo *)0x0);
    return (bool)((uint)iVar1 >> 0x1f);
  }
  return 0;
}


/* UserProfileData CreateRegisteredProfileData(Boolean, String, Int32, Nullable`1[DateTime]) */

UserProfileData *
MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::
UserProfileData_CreateRegisteredProfileData
          (bool admin,String *username,int32_t gold,Nullable_1_DateTime_ *age,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__UserProfileData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  NStack_1.hasValue = age->hasValue;
  NStack_1._1_7_ = *(undefined7 *)&age->field_0x1;
  NStack_1.value._dateData = (age->value)._dateData;
  bVar2 = UserProfileData_CheckUnderAge(admin,&NStack_1,(MethodInfo *)0x0);
  pUVar3 = (UserProfileData *)FUN_?(TypeInfo__MV__WorldObject__MetaData__UserProfileData);
  if (pUVar3 == (UserProfileData *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pUVar3 = (UserProfileData *)(*pcVar4)();
    return pUVar3;
  }
  bVar5 = iRam_? != 0;
  (pUVar3->fields).IsAdmin = admin;
  (pUVar3->fields).UserName = username;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pUVar3->fields).UserName >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  (pUVar3->fields).Gold = gold;
  (pUVar3->fields).IsUnderAge = bVar2;
  (pUVar3->fields).IsTourist = 0;
  return pUVar3;
}


/* UserProfileData GetTouristProfileData(String) */

UserProfileData *
MVWorldObject.dll::MV::WorldObject::MetaData::UserProfileData::UserProfileData_GetTouristProfileData
          (String *userName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__UserProfileData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UserProfileData *)FUN_?(TypeInfo__MV__WorldObject__MetaData__UserProfileData);
  if (pUVar1 != (UserProfileData *)0x0) {
    bVar2 = iRam_? != 0;
    (pUVar1->fields).IsAdmin = 0;
    (pUVar1->fields).UserName = userName;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pUVar1->fields).UserName >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    (pUVar1->fields).IsTourist = 1;
    (pUVar1->fields).IsUnderAge = 0;
    bVar2 = cRam_? == '\0';
    (pUVar1->fields).Gold = 0;
    if (bVar2) {
      FUN_?(&TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar7 = (SubscriptionData *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
    if (pSVar7 != (SubscriptionData *)0x0) {
      bVar2 = iRam_? != 0;
      (pSVar7->fields).SubscriptionType = 0;
      (pUVar1->fields).SubscriptionData = pSVar7;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pUVar1->fields).SubscriptionData >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return pUVar1;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pUVar1 = (UserProfileData *)(*pcVar8)();
  return pUVar1;
}

