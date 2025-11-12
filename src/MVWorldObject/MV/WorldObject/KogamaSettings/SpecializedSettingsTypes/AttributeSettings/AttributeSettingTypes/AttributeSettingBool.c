
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingBool::
         AttributeSettingBool_ToString(AttributeSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttributeValue__0___AttributePoi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
  pKVar1 = (this->fields)._.KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      if (*(char *)&pOVar2[1].klass == '\0') {
        aiStackX_8[0] = 0;
      }
      else {
        aiStackX_8[0] = (this->fields).AttributePointsValue;
      }
      lVar5 = FUN_?(uRam_?,aiStackX_8);
      if (args != (Object__Array *)0x0) {
        if (lVar5 != 0) {
          lVar6 = FUN_?(lVar5,(args->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
        }
        FUN_?(args,0,lVar5);
        aiStackX_8[0] = (this->fields).AttributePointsValue;
        lVar5 = FUN_?(uRam_?,aiStackX_8);
        if (lVar5 != 0) {
          lVar6 = FUN_?(lVar5,(args->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
        }
        FUN_?(args,1,lVar5);
        aiStackX_8[0] = (this->fields)._ExclusivityFlag_k__BackingField;
        lVar5 = FUN_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                              ,aiStackX_8);
        if (lVar5 != 0) {
          lVar6 = FUN_?(lVar5,(args->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
        }
        FUN_?(args,2,lVar5);
        pKVar1 = (this->fields)._.KogamaSettingBool;
        if (pKVar1 != (KogamaSettingBool *)0x0) {
          lVar5 = FUN_?(pKVar1,(args->klass->_0).element_class);
          if (lVar5 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
        }
        FUN_?(args,3);
        pSVar4 = StringLiteral_AttributeValue__0___AttributePoi;
        PStack_8._arg0 = (Object *)0x0;
        PStack_8._arg1 = (Object *)0x0;
        PStack_8._arg2 = (Object *)0x0;
        PStack_8._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_8,args,(MethodInfo *)0x0);
        PStack_9._arg0 = PStack_8._arg0;
        PStack_9._arg1 = PStack_8._arg1;
        PStack_9._arg2 = PStack_8._arg2;
        PStack_9._args = PStack_8._args;
        pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar4,&PStack_9,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* AttributeSettingBool(String, Boolean, Int32, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingBool::AttributeSettingBool__ctor
               (AttributeSettingBool *this,String *key,bool value,int32_t attributePointsValue,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            ((KogamaSettingBoolBase *)this,key,value,kogamaSettingsCollection,(MethodInfo *)0x0);
  (this->fields).AttributePointsValue = attributePointsValue;
  return;
}


/* AttributeSettingBool(String, Boolean, Int32, AttributeSettingsExclusivityFlag,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributeSettingTypes::AttributeSettingBool::AttributeSettingBool__ctor_1
               (AttributeSettingBool *this,String *key,bool value,int32_t attributePointsValue,
               AttributeSettingsExclusivityFlag__Enum attributeSettingsExclusivityFlag,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
            ((KogamaSettingBoolBase *)this,key,value,kogamaSettingsCollection,(MethodInfo *)0x0);
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  (this->fields).AttributePointsValue = attributePointsValue;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingBool::
        AttributeSettingBool_get_AttributeValue(AttributeSettingBool *this,MethodInfo *method)

{
  pKVar1 = (this->fields)._.KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      if (*(char *)&pOVar2[1].klass == '\0') {
        return 0;
      }
      return (this->fields).AttributePointsValue;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

