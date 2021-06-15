
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Object]::KogamaSettingNumeric_1_System_Object__ToString
                   (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_System_Object_ *)0x0) {
    arg0 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    arg1 = (this->fields).RangeValidator;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_Value__0____1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0
                       );
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[System::Object]::
KogamaSettingNumeric_1_System_Object__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  RVar1.value = (void *)**(undefined4 **)(method->name + 0x60);
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__System__Int32,(MethodInfo *)0x0);
  if (pTVar2 != pTVar3) {
    RVar1.value = (void *)**(undefined4 **)(method->name + 0x60);
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Single,(MethodInfo *)0x0);
    if (pTVar2 == pTVar3) {
      return KogamaSettingValueType__Enum_Float;
    }
    RVar1.value = (void *)**(undefined4 **)(method->name + 0x60);
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Unknown_type_,(Object *)pTVar2,(MethodInfo *)0x0);
    this_00 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
    pMStack4 =
         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<System::Object>__get_KogamaSettingValueType__
    ;
    uStack5 = 0;
    pIStack6 = this_00;
    func_?();
    pcVar7 = (code *)swi(3);
    KVar8 = (*pcVar7)();
    return KVar8;
  }
  return KogamaSettingValueType__Enum_Int;
}


/* Object get_NumericValue() */

Object * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Object]::
         KogamaSettingNumeric_1_System_Object__get_NumericValue
                   (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

{
  if (this == (KogamaSettingNumeric_1_System_Object_ *)0x0) {
    func_?(0);
  }
  else {
    unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    unaff_ESI = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(unaff_ESI + 0xbe) & 1) == 0) {
      func_?(unaff_ESI);
    }
    if (unaff_EDI == (IList_1_VoxelHit_ *)0x0) {
      return (Object *)0x0;
    }
    pOVar1 = (Object *)func_?(unaff_EDI,unaff_ESI);
    if (pOVar1 != (Object *)0x0) {
      return pOVar1;
    }
  }
  func_?(unaff_EDI,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void set_NumericValue(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Object]::KogamaSettingNumeric_1_System_Object__set_NumericValue
               (KogamaSettingNumeric_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  pRVar1 = (this->fields).RangeValidator;
  if (pRVar1 != (RangeValidator_1_System_Object_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    value_00 = (Object *)(*(code *)*puVar2)(pRVar1,value,1,puVar2);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

