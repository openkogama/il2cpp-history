
/* KogamaSettingEnumBase(String, Int32, Int32, Int32, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
               (KogamaSettingEnumBase *this,String *key,int32_t value,int32_t min,int32_t max,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  KogamaSettingWrapperBase::KogamaSettingWrapperBase__ctor
            ((KogamaSettingWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  this_00 = (KogamaSettingEnum *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                         );
  KogamaSettingEnum::KogamaSettingEnum__ctor(this_00,value,min,max,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).KogamaSettingEnum = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).KogamaSettingEnum >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Int32 get_EnumValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingEnumBase::KogamaSettingEnumBase_get_EnumValue
                  (KogamaSettingEnumBase *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingEnum;
  if (pKVar1 != (KogamaSettingEnum *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(int32_t *)&pOVar2[1].klass;
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

