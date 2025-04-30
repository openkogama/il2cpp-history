
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase_ToString
                   (KogamaSettingValueWrapperBase *this,MethodInfo *method)

{
  pIStack_1 = this->klass[1]._0.image;
  pKStack_2 = this;
  piVar3 = (int *)(*(code *)(this->klass->vtable).__unknown.method)();
  if (piVar3 != (int *)0x0) {
    pIStack_1 = *(Il2CppImage **)(*piVar3 + 0xdc);
    pKStack_2 = (KogamaSettingValueWrapperBase *)piVar3;
    pSVar4 = (String *)(**(code **)(*piVar3 + 0xd8))();
    return pSVar4;
  }
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* KogamaSettingValueWrapperBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
               (KogamaSettingValueWrapperBase *this,String *key,KogamaSettingsCollectionBase *parent
               ,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._Parent_k__BackingField = parent;
  func_?(&this->fields,parent);
  ppSVar1 = &(this->fields)._.key;
  *ppSVar1 = key;
  func_?(ppSVar1,key);
  return;
}

