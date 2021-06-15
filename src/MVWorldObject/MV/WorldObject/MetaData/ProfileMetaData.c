
/* Boolean ShouldSerializeFirstTimeState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeFirstTimeState(ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags & 1;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Can_t_serialize_meta_data__Not_i,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean ShouldSerializeMS() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeMS(ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags >> 4 & 1;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Can_t_serialize_meta_data__Not_i,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean ShouldSerializeProfileHighlightState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeProfileHighlightState(ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags >> 3 & 1;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Can_t_serialize_meta_data__Not_i,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Boolean ShouldSerializeTestData() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeTestData(ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags >> 2 & 1;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Can_t_serialize_meta_data__Not_i,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* ProfileMetaData() */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor
               (ProfileMetaData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__System__Collections__BitArray;
  this_01 = (BitArray *)func_?();
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_01,0,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_01);
  (this->fields).FirstTimeState = (FirstTimeState *)this_00;
  this_02 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_02,(MethodInfo *)0x0);
  (this->fields).ProfileHighlightState = this_02;
  (this->fields).MS = 1.0;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>;
  this_03 = (Dictionary_2_System_String_System_String_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields).TestData = this_03;
  (this->fields).serializeFlags = 0x7f;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* ProfileMetaData(Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor_1
               (ProfileMetaData *this,bool isInitialized,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).IsInitialized = 1;
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__System__Collections__BitArray;
  this_01 = (BitArray *)func_?();
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_01,0,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_01);
  (this->fields).FirstTimeState = (FirstTimeState *)this_00;
  this_02 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_02,(MethodInfo *)0x0);
  (this->fields).ProfileHighlightState = this_02;
  (this->fields).MS = 1.0;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>;
  this_03 = (Dictionary_2_System_String_System_String_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields).TestData = this_03;
  (this->fields).serializeFlags = 0x7f;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).IsInitialized = isInitialized;
  return;
}

