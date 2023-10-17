
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry_ToString
                   (HighScoreEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0____1____2____3__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  iStack_1 = (this->fields).profileID;
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
    pSVar5 = (this->fields).username;
    if (pSVar5 != (String *)0x0) {
      iVar4 = func_?(pSVar5,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar5;
    func_?(args->vector + 1,pSVar5);
    iStack_6 = (this->fields).gamePoints;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    bStack_7 = (this->fields).isSubscriber;
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (3 < args->max_length) {
      args->vector[3] = pOVar2;
      func_?(args->vector + 3,pOVar2);
      pSVar5 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral__0____1____2____3__,args,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar8)();
  return pSVar5;
}


/* HighScoreEntry() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry__ctor
               (HighScoreEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).username = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).username;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* HighScoreEntry(Int32, String, Int32, Boolean) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreEntry::HighScoreEntry__ctor_1
               (HighScoreEntry *this,int32_t profileID,String *username,int32_t gamePoints,
               bool isSubscriber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).username = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).username;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).profileID = profileID;
  (this->fields).username = username;
  func_?(&(this->fields).username,username);
  (this->fields).gamePoints = gamePoints;
  (this->fields).isSubscriber = isSubscriber;
  return;
}

