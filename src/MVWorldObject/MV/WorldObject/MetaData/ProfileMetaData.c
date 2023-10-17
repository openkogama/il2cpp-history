
/* Boolean ShouldSerializeFirstTimeState() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::ProfileMetaData::
     ProfileMetaData_ShouldSerializeFirstTimeState(ProfileMetaData *this,MethodInfo *method)

{
  if ((this->fields).IsInitialized != 0) {
    return (this->fields).serializeFlags & 1;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar1);
  func_?(this_00);
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
  func_?(this_00);
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
  func_?(this_00);
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
  func_?(this_00);
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
  this_00 = (FirstTimeState *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (this_00 != (FirstTimeState *)0x0) {
    FirstTimeState::FirstTimeState__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).FirstTimeState = this_00;
    func_?(&(this->fields).FirstTimeState,this_00);
    this_01 = (ProfileHighlightState *)
              func_?(
                             TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                             );
    if (this_01 != (ProfileHighlightState *)0x0) {
      HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
                (this_01,(MethodInfo *)0x0);
      (this->fields).ProfileHighlightState = this_01;
      func_?(&(this->fields).ProfileHighlightState,this_01);
      (this->fields).MS = 1.0;
      this_02 = (Dictionary_2_System_String_System_String_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                               );
      if (this_02 != (Dictionary_2_System_String_System_String_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                  );
        method_00 = (MethodInfo *)&(this->fields).TestData;
        (this->fields).TestData = this_02;
        func_?(method_00,this_02);
        (this->fields).serializeFlags = 0x7f;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (FirstTimeState *)func_?(TypeInfo__MV__WorldObject__MetaData__FirstTimeState);
  if (this_00 != (FirstTimeState *)0x0) {
    FirstTimeState::FirstTimeState__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).FirstTimeState = this_00;
    func_?(&(this->fields).FirstTimeState,this_00);
    this_01 = (ProfileHighlightState *)
              func_?(
                             TypeInfo__MV__WorldObject__HighlightSystem__HighlightPayloads__ProfileHighlightState
                             );
    if (this_01 != (ProfileHighlightState *)0x0) {
      HighlightSystem::HighlightPayloads::ProfileHighlightState::ProfileHighlightState__ctor
                (this_01,(MethodInfo *)0x0);
      (this->fields).ProfileHighlightState = this_01;
      func_?(&(this->fields).ProfileHighlightState,this_01);
      (this->fields).MS = 1.0;
      this_02 = (Dictionary_2_System_String_System_String_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                               );
      if (this_02 != (Dictionary_2_System_String_System_String_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                  );
        method_00 = (MethodInfo *)&(this->fields).TestData;
        (this->fields).TestData = this_02;
        func_?(method_00,this_02);
        (this->fields).serializeFlags = 0x7f;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        (this->fields).IsInitialized = isInitialized;
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

