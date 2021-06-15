
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributeSettingTypes::AttributeSettingBool::
         AttributeSettingBool_ToString(AttributeSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pKVar1 = (this->fields)._.KogamaSettingBool;
  if (pKVar1 == (KogamaSettingBool *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar3 = (pKVar1->fields)._.value;
    if (pOVar3 == (Object *)0x0) goto code_?;
    pBVar4 = TypeInfo__System__Boolean;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar5 = (char *)func_?(pOVar3);
    if (*pcVar5 == '\0') {
      iStack_6 = 0;
    }
    else {
      iStack_6 = (this->fields).AttributePointsValue;
    }
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar3 != (Object *)0x0) {
      iVar7 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    iStack_8 = (this->fields).AttributePointsValue;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if (pOVar3 != (Object *)0x0) {
      iVar7 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    iStack_9 = (this->fields)._ExclusivityFlag_k__BackingField;
    pOVar3 = (Object *)
             func_?(TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__AttributeSettingsExclusivityFlag
                             ,&iStack_9);
    if (pOVar3 != (Object *)0x0) {
      iVar7 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar3;
    pKVar1 = (this->fields)._.KogamaSettingBool;
    if (pKVar1 != (KogamaSettingBool *)0x0) {
      iVar7 = func_?(pKVar1,(args->klass->_0).element_class);
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (3 < args->max_length) {
      args->vector[3] = (Object *)pKVar1;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar10 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_AttributeValue__0___AttributePoi,args,(MethodInfo *)0x0);
      return pSVar10;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pOVar3 = extraout_ECX;
  pBVar4 = extraout_EDX;
code_?:
  func_?(pOVar3,pBVar4);
  pcVar11 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar11)();
  return pSVar10;
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
  (this->fields).AttributePointsValue = attributePointsValue;
  (this->fields)._ExclusivityFlag_k__BackingField = attributeSettingsExclusivityFlag;
  return;
}


/* Int32 get_AttributeValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributeSettingTypes::AttributeSettingBool::
        AttributeSettingBool_get_AttributeValue(AttributeSettingBool *this,MethodInfo *method)

{
  pKVar1 = (this->fields)._.KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pBVar3 = TypeInfo__System__Boolean;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar4 = (char *)func_?(pOVar2);
        if (*pcVar4 == '\0') {
          return 0;
        }
        return (this->fields).AttributePointsValue;
      }
      goto code_?;
    }
  }
  func_?(0);
  pOVar2 = extraout_ECX;
  pBVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pBVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

