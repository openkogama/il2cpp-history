
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_AddChild
               (KogamaSettingsCollectionBase *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((kogamaSetting != (KogamaSettingWrapperBase *)0x0) &&
     (this_00 = (this->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)(kogamaSetting->fields).key,(Object *)kogamaSetting,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase) */

KogamaSettingsCollectionBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_CopyWithOutChildren
          (KogamaSettingsCollectionBase *this,KogamaSettingsCollectionBase *parent,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                   );
    cRam_? = '\x01';
  }
  key = (this->fields)._.key;
  this_00 = (KogamaSettingsCollectionBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                           );
  KogamaSettingsCollectionBase__ctor(this_00,key,parent,(MethodInfo *)0x0);
  return this_00;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_ToString
                   (KogamaSettingsCollectionBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    cRam_? = '\x01';
  }
  pMVar1 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  pSVar2 = (this->fields)._.key;
  if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
      rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  }
  pIVar3 = (pMVar1->field7_0x1c).rgctx_data[2].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  if (pIVar3->cctor_finished_or_no_cctor == 0) {
    func_?(pIVar3);
  }
  pIVar3 = (pMVar1->field7_0x1c).rgctx_data[2].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_3
                     (pSVar2,*(Object__Array **)pIVar3->static_fields,(MethodInfo *)0x0);
  return pSVar2;
}


/* KogamaSettingsCollectionBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor
               (KogamaSettingsCollectionBase *this,String *key,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).children;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._._Parent_k__BackingField = kogamaSettingsCollection;
  func_?(&this->fields,kogamaSettingsCollection);
  ppSVar1 = &(this->fields)._.key;
  *ppSVar1 = key;
  func_?(ppSVar1,key);
  return;
}

