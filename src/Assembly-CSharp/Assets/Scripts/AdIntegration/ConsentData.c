
/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::ConsentData::ConsentData_ToString
                   (ConsentData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  uStack_1 = CONCAT13((this->fields).isAmerican,(undefined3)uStack_1);
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 3);
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
    uStack_1._0_3_ = CONCAT12((this->fields).isEuropean,(undefined2)uStack_1);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 2);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    uStack_1._0_2_ = CONCAT11((this->fields).isChild,(undefined1)uStack_1);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_1 + 1);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    uStack_1 = CONCAT31(uStack_1._1_3_,(this->fields).hasConsented);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_1);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_isAmerican__0___isEuropean__1___,args,(MethodInfo *)0x0);
        return pSVar5;
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
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* ConsentData() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::ConsentData::ConsentData__ctor
               (ConsentData *this,MethodInfo *method)

{
  (this->fields).isAmerican = 1;
  (this->fields).isEuropean = 1;
  return;
}

