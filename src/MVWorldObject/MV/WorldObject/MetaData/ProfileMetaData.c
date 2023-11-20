
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


/* Boolean ShouldSerializeMS() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeMS(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags >> 4 & 1;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Can_t_serialize_meta_data__Not_i);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__MV__WorldObject__MetaData__ProfileMetaData__ShouldSerializeMS__);
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
    return (this->fields).serializeFlags >> 3 & 1;
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


/* Boolean ShouldSerializeTestData() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeTestData(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags >> 2 & 1;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    func_?(&
                    TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                   );
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
  method_00 = (MethodInfo *)&value->fields;
  (value->fields).bitArray = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).FirstTimeState = value;
  func_?(&(this->fields).FirstTimeState,value);
  this_01 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields).ProfileHighlightState = this_01;
  func_?(&(this->fields).ProfileHighlightState,this_01);
  (this->fields).MS = 1.0;
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields).TestData = (Dictionary_2_System_String_System_String_ *)this_02;
  func_?();
  (this->fields).serializeFlags = 0x7f;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields).TestData);
  return;
}


/* ProfileMetaData(Boolean) */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::ProfileMetaData__ctor_1
               (ProfileMetaData *this,bool isInitialized,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
    func_?(&
                    TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                   );
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
  method_00 = (MethodInfo *)&value->fields;
  (value->fields).bitArray = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).FirstTimeState = value;
  func_?(&(this->fields).FirstTimeState,value);
  this_01 = (ProfileHighlightState *)
            func_?(
                           TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                           );
  HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields).ProfileHighlightState = this_01;
  func_?(&(this->fields).ProfileHighlightState,this_01);
  (this->fields).MS = 1.0;
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields).TestData = (Dictionary_2_System_String_System_String_ *)this_02;
  func_?();
  (this->fields).serializeFlags = 0x7f;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields).TestData);
  isInitialized = (bool)this_02;
  (this->fields).IsInitialized = isInitialized;
  return;
}

