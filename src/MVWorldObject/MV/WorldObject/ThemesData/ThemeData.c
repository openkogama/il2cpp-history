
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::ThemesData::ThemeData::ThemeData_ToString
                   (ThemeData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_id__0___themeIdentifier__1___pri);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  iStack_1 = (this->fields).id;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    pSVar5 = (this->fields).themeIdentifier;
    if (pSVar5 != (String *)0x0) {
      iVar4 = func_?(pSVar5,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar5;
    func_?(args->vector + 1,pSVar5);
    iStack_6 = (this->fields).priceGold;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    iStack_7 = (this->fields).levelRequirement;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (3 < args->max_length) {
      args->vector[3] = pOVar2;
      func_?(args->vector + 3,pOVar2);
      pSVar5 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_id__0___themeIdentifier__1___pri,args,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar8)();
  return pSVar5;
}


/* ThemeData(Int32, String, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::ThemesData::ThemeData::ThemeData__ctor_1
               (ThemeData *this,int32_t id,String *themeIdentifier,int32_t priceGold,
               int32_t levelRequirement,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).id = id;
  (this->fields).themeIdentifier = themeIdentifier;
  func_?(&(this->fields).themeIdentifier,themeIdentifier);
  (this->fields).priceGold = priceGold;
  (this->fields).levelRequirement = levelRequirement;
  return;
}

