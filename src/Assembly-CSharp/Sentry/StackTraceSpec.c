
/* String ToString() */

String * Assembly-CSharp.dll::Sentry::StackTraceSpec::StackTraceSpec_ToString
                   (StackTraceSpec *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_filename___0___function__1___mod);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  pSVar1 = (this->fields).filename;
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    func_?(args->vector,pSVar1);
    pSVar1 = (this->fields).function;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar1;
    func_?(args->vector + 1,pSVar1);
    pSVar1 = (this->fields).module;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar1;
    func_?(args->vector + 2,pSVar1);
    iStack_4 = (this->fields).lineno;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    bStack_6 = (this->fields).in_app;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (4 < args->max_length) {
      args->vector[4] = pOVar5;
      func_?(args->vector + 4,pOVar5);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_filename___0___function__1___mod,args,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}


/* StackTraceSpec(String, String, Int32, Boolean) */

void Assembly-CSharp.dll::Sentry::StackTraceSpec::StackTraceSpec__ctor
               (StackTraceSpec *this,String *filename,String *function,int32_t lineNo,bool inApp,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&(this->fields).module;
  *(String **)method_00 = ::StringLiteral__;
  func_?(method_00,::StringLiteral__);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).filename = filename;
  func_?(&this->fields,filename);
  ppSVar1 = &(this->fields).function;
  *ppSVar1 = function;
  func_?(ppSVar1,function);
  (this->fields).lineno = lineNo;
  (this->fields).in_app = inApp;
  return;
}

