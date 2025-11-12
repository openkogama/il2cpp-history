
/* Boolean ShouldSerializeFirstTimeState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeFirstTimeState(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags & 1;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeFirstTimeState__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ShouldSerializeProfileHighlightState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeProfileHighlightState(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return ((this->fields).serializeFlags & 8) != 0;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeProfileHighlightState__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ShouldSerializeProfileSettingsState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeProfileSettingsState(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return ((this->fields).serializeFlags & 0x10) != 0;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeProfileSettingsState__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ShouldSerializeTestData() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeTestData(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return ((this->fields).serializeFlags & 4) != 0;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeTestData__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* ProfileMetaData() */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor
               (ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  this_00 = (FirstTimeState *)FUN_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  FirstTimeState::FirstTimeState__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).FirstTimeState = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).FirstTimeState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (ProfileHighlightState *)
            FUN_?(
                         TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                         );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).ProfileHighlightState = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ProfileHighlightState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (ProfileSettingsState *)
            FUN_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  ProfileSettingsState::ProfileSettingsState__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).ProfileSettingsState = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ProfileSettingsState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).serializeFlags = 0x7f;
  return;
}


/* ProfileMetaData(Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor_1
               (ProfileMetaData *this,bool isInitialized,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  this_00 = (FirstTimeState *)FUN_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  FirstTimeState::FirstTimeState__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).FirstTimeState = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).FirstTimeState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (ProfileHighlightState *)
            FUN_?(
                         TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                         );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).ProfileHighlightState = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ProfileHighlightState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_02 = (ProfileSettingsState *)
            FUN_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  ProfileSettingsState::ProfileSettingsState__ctor(this_02,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).ProfileSettingsState = this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ProfileSettingsState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).IsInitialized = isInitialized;
  (this->fields).serializeFlags = 0x7f;
  return;
}

