
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::HighlightSystem::AvailableHighlightData::
         AvailableHighlightData_ToString(AvailableHighlightData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  iStack_1 = (this->fields).id;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
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
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    iStack_5 = (this->fields).slot;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    uStack_6 = (this->fields).highlightType;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__HighlightSystem__HighlightType,&uStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    pSVar7 = (this->fields).payload;
    if (pSVar7 == (String *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pSVar7;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar7 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_id__0___slot__1___highlightType_,args,(MethodInfo *)0x0);
        return pSVar7;
      }
      goto code_?;
    }
    iVar4 = func_?(pSVar7,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}

