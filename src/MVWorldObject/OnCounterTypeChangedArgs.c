
/* String ToString() */

String * MVWorldObject.dll::OnCounterTypeChangedArgs::OnCounterTypeChangedArgs_ToString
                   (OnCounterTypeChangedArgs *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  uStack_1 = (this->fields).counterType;
  pOVar2 = (Object *)func_?(TypeInfo__GameStatCounterType,&uStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    iStack_5 = (this->fields).count;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    iStack_6 = (this->fields).actorNumber;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    iStack_7 = (this->fields).team;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&iStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    iStack_8 = (this->fields).otherID;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (4 < args->max_length) {
        args->vector[4] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_CounterType___0___Value___1___Ac,args,(MethodInfo *)0x0);
        return pSVar9;
      }
      goto code_?;
    }
    iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* OnCounterTypeChangedArgs(Int32, GameStatCounterType, Int32, MVTeam, Int32) */

void MVWorldObject.dll::OnCounterTypeChangedArgs::OnCounterTypeChangedArgs__ctor
               (OnCounterTypeChangedArgs *this,int32_t count,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t otherID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).otherID = -1;
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).count = count;
  (this->fields).counterType = (undefined1)counterType;
  (this->fields).actorNumber = actorNumber;
  (this->fields).team = team;
  (this->fields).otherID = otherID;
  return;
}

