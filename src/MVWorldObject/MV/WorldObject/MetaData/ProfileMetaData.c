
/* Boolean ShouldSerializeFirstTimeState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeFirstTimeState(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags & 1;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeFirstTimeState__
                 );
  func_?(this_00);
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
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeProfileHighlightState__
                 );
  func_?(this_00);
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
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeProfileSettingsState__
                 );
  func_?(this_00);
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
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeTestData__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* ProfileMetaData() */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor
               (ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    func_?(&
                    TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                   );
    func_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  value = (FirstTimeState *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0,(MethodInfo *)0x0);
  method_01 = (MethodInfo *)&value->fields;
  ((FirstTimeState__Fields *)method_01)->bitArray = this_00;
  func_?(method_01,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_01);
  ppFVar1 = &(this->fields).FirstTimeState;
  *ppFVar1 = value;
  func_?(ppFVar1,value);
  this_01 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields).ProfileHighlightState;
  *ppPVar2 = this_01;
  func_?(ppPVar2,this_01);
  this_02 = (ProfileSettingsState *)
            func_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  ProfileSettingsState::ProfileSettingsState__ctor(this_02,(MethodInfo *)0x0);
  method_00 = &(this->fields).ProfileSettingsState;
  *method_00 = this_02;
  func_?();
  (this->fields).serializeFlags = 0x7f;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  return;
}


/* ProfileMetaData(Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor_1
               (ProfileMetaData *this,bool isInitialized,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    func_?(&
                    TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                   );
    func_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  value = (FirstTimeState *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0,(MethodInfo *)0x0);
  method_01 = (MethodInfo *)&value->fields;
  ((FirstTimeState__Fields *)method_01)->bitArray = this_00;
  func_?(method_01,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_01);
  ppFVar1 = &(this->fields).FirstTimeState;
  *ppFVar1 = value;
  func_?(ppFVar1,value);
  this_01 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  ppPVar2 = &(this->fields).ProfileHighlightState;
  *ppPVar2 = this_01;
  func_?(ppPVar2,this_01);
  this_02 = (ProfileSettingsState *)
            func_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  ProfileSettingsState::ProfileSettingsState__ctor(this_02,(MethodInfo *)0x0);
  method_00 = &(this->fields).ProfileSettingsState;
  *method_00 = this_02;
  func_?();
  (this->fields).serializeFlags = 0x7f;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  isInitialized = (bool)this_02;
  (this->fields).IsInitialized = isInitialized;
  return;
}

