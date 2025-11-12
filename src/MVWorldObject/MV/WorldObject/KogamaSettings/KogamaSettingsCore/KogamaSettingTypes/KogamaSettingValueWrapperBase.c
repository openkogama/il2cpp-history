
/* Void KogamaSettingOnOnValueChange(IKogamaSetting) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase_KogamaSettingOnOnValueChange
               (KogamaSettingValueWrapperBase *this,IKogamaSetting *obj,MethodInfo *method)

{
  if ((this->fields).OnValueChange !=
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingValueWrapperBase_
       *)0x0) {
    pAVar1 = (this->fields).OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,this,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase_ToString
                   (KogamaSettingValueWrapperBase *this,MethodInfo *method)

{
  plVar1 = (longlong *)
           (*(this->klass->vtable).__unknown.methodPtr)(this,(this->klass->vtable).__unknown.method)
  ;
  if (plVar1 != (longlong *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x168);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (String *)
             (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(*plVar1 + 0x170),UNRECOVERED_JUMPTABLE)
    ;
    return pSVar2;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  pSVar2 = (String *)(*UNRECOVERED_JUMPTABLE)();
  return pSVar2;
}


/* KogamaSettingValueWrapperBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
               (KogamaSettingValueWrapperBase *this,String *key,KogamaSettingsCollectionBase *parent
               ,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._._Parent_k__BackingField = parent;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._.key = key;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.key >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

