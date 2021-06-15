
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__ToString
                   (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
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


/* KogamaSettingNumeric`1[System.Int32](Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32___ctor
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,int32_t min,int32_t max,
               MethodInfo *method)

{
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
              ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pRVar2 = (RangeValidator_1_System_Int32_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(pRVar2,min,max,puVar3);
    (this->fields).RangeValidator = pRVar2;
    if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar3)(pRVar2,value,0,puVar3);
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar3)(this,value,puVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[System::Int32]::
KogamaSettingNumeric_1_System_Int32__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

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
         MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumeric<int>__get_KogamaSettingValueType__
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


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__get_NumericValue
                  (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    unaff_EDI = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(unaff_EDI + 0xbe) & 1) == 0) {
      func_?(unaff_EDI);
    }
    if (unaff_ESI != (IList_1_VoxelHit_ *)0x0) {
      if ((unaff_ESI->klass->_0).element_class == *(Il2CppClass **)(unaff_EDI + 0x20)) {
        piVar1 = (int32_t *)func_?(unaff_ESI);
        return *piVar1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__set_NumericValue
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  pMVar1 = method;
  this_00 = this;
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    this = (KogamaSettingNumeric_1_System_Int32_ *)(*(code *)*puVar3)(pRVar2,value,1,puVar3);
    iVar4 = *(int *)(*(int *)(pMVar1->name + 0x60) + 4);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    value_00 = (Object *)func_?(iVar4,&this);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

