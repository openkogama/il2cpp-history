
/* String ToString() */

String * Assembly-CSharp.dll::<>f__AnonymousType0`2[System::Int32,System::Object]::
         _f_AnonymousType0_2_System_Int32_System_Object__ToString
                   (_f_AnonymousType0_2_System_Int32_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral____Count____0___Members____1____);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  pSVar1 = StringLiteral____Count____0___Members____1____;
  IStack_2.m_value = (this->fields)._Count_i__Field;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                     (&IStack_2,method->klass->rgctx_data[0xc].method);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    if ((pSVar3 != (String *)0x0) &&
       (iVar5 = func_?(pSVar3,(args->klass->_0).element_class), iVar5 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar3;
    func_?(args->vector,pSVar3);
    pOVar6 = (this->fields)._Members_i__Field;
    if (pOVar6 == (Object *)0x0) {
      pOVar6 = (Object *)0x0;
code_?:
      if (1 < args->max_length) {
        args->vector[1] = pOVar6;
        func_?(args->vector + 1,pOVar6);
        pSVar1 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)0x0,pSVar1,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    pOVar6 = (Object *)
             (*(pOVar6->klass->vtable).ToString.methodPtr)
                       (pOVar6,(pOVar6->klass->vtable).ToString.method);
    if ((pOVar6 == (Object *)0x0) ||
       (iVar5 = func_?(pOVar6,(args->klass->_0).element_class), iVar5 != 0))
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar7)();
  return pSVar1;
}

