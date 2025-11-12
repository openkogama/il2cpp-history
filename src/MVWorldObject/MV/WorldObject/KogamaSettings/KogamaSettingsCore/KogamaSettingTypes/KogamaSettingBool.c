
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingBool::KogamaSettingBool_ToString(KogamaSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Value__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Value__0_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_2,(this->fields)._.value,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool__ctor
               (KogamaSettingBool *this,bool value,MethodInfo *method)

{
  abStackX_10[0] = value;
  pOVar1 = (Object *)FUN_?(uRam_?,abStackX_10);
  bVar2 = iRam_? != 0;
  (this->fields)._.value = pOVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if ((this->fields)._.OnValueChange ==
      (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    return;
  }
  pAVar7 = (this->fields)._.OnValueChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar7->fields)._._.invoke_impl)
            ((pAVar7->fields)._._.method_code,this,(pAVar7->fields)._._.method);
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool_get_ValueBool(KogamaSettingBool *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._.value;
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    return *(bool *)&pOVar1[1].klass;
  }
  FUN_?(pOVar1,lRam_?);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

