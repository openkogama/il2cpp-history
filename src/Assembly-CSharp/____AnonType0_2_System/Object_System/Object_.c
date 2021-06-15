
/* String ToString() */

String * Assembly-CSharp.dll::<>__AnonType0`2[System::Object,System::Object]::
         _AnonType0_2_System_Object_System_Object__ToString
                   (_AnonType0_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar2 = func_?(::StringLiteral__,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = ::StringLiteral__;
    if ((StringLiteral__Count___ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__Count___,(values->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = StringLiteral__Count___;
    pOVar3 = (this->fields)._Count_;
    if (pOVar3 == (Object *)0x0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    else {
      pSVar4 = (String *)
               (*(code *)(pOVar3->klass->vtable).ToString.method)(pOVar3,pOVar3->klass[1]._0.image);
    }
    if ((pSVar4 != (String *)0x0) &&
       (iVar2 = func_?(pSVar4,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = pSVar4;
    if ((StringLiteral___Members___ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral___Members___,(values->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = StringLiteral___Members___;
    pOVar3 = (this->fields)._Members_;
    if (pOVar3 == (Object *)0x0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    else {
      pSVar4 = (String *)
               (*(code *)(pOVar3->klass->vtable).ToString.method)(pOVar3,pOVar3->klass[1]._0.image);
    }
    if ((pSVar4 != (String *)0x0) &&
       (iVar2 = func_?(pSVar4,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = pSVar4;
    if ((::StringLiteral___ == (String *)0x0) ||
       (iVar2 = func_?(::StringLiteral___,(values->klass->_0).element_class), iVar2 != 0))
    {
      if (5 < values->max_length) {
        values->vector[5] = ::StringLiteral___;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        return pSVar4;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}

