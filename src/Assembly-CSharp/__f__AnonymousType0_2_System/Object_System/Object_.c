
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::<>f__AnonymousType0`2[System::Object,System::Object]::
     _f_AnonymousType0_2_System_Object_System_Object__Equals
               (_f_AnonymousType0_2_System_Object_System_Object_ *this,Object *value,
               MethodInfo *method)

{
  pOVar1 = method->klass->rgctx_data->rgctxDataDummy;
  if ((pOVar1->_1).initialized_and_no_error == 0) {
    pOVar1 = (Object__Class *)func_?(pOVar1);
  }
  if (value != (Object *)0x0) {
    pOVar2 = (Object *)0x0;
    if (value->klass == pOVar1) {
      pOVar2 = value;
    }
    if (pOVar2 != (Object *)0x0) {
      piVar3 = (int *)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                                (method->klass->rgctx_data[1].rgctxDataDummy);
      if (piVar3 != (int *)0x0) {
        cVar4 = (**(code **)(*piVar3 + 0xfc))
                          (piVar3,(this->fields)._Count_i__Field,pOVar2[1].klass,
                           *(undefined4 *)(*piVar3 + 0x100));
        if (cVar4 == '\0') {
          return 0;
        }
        piVar3 = (int *)(*(method->klass->rgctx_data[5].method)->virtualMethodPointer)
                                  (method->klass->rgctx_data[5].rgctxDataDummy);
        if (piVar3 != (int *)0x0) {
          bVar5 = (**(code **)(*piVar3 + 0xfc))
                            (piVar3,(this->fields)._Members_i__Field,pOVar2[1].monitor,
                             *(undefined4 *)(*piVar3 + 0x100));
          return bVar5;
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      bVar5 = (*pcVar6)();
      return bVar5;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::<>f__AnonymousType0`2[System::Object,System::Object]::
        _f_AnonymousType0_2_System_Object_System_Object__GetHashCode
                  (_f_AnonymousType0_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  piVar1 = (int *)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                            (method->klass->rgctx_data[1].rgctxDataDummy);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x104))
                      (piVar1,(this->fields)._Count_i__Field,*(undefined4 *)(*piVar1 + 0x108));
    piVar1 = (int *)(*(method->klass->rgctx_data[5].method)->virtualMethodPointer)
                              (method->klass->rgctx_data[5].rgctxDataDummy);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x104))
                        (piVar1,(this->fields)._Members_i__Field,*(undefined4 *)(*piVar1 + 0x108));
      return iVar3 + iVar2 * -0x5aaaaad7 + -0x550eeb86;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* String ToString() */

String * Assembly-CSharp.dll::<>f__AnonymousType0`2[System::Object,System::Object]::
         _f_AnonymousType0_2_System_Object_System_Object__ToString
                   (_f_AnonymousType0_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral____Count____0___Members____1____);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  pSVar1 = StringLiteral____Count____0___Members____1____;
  pOVar2 = (this->fields)._Count_i__Field;
  if (pOVar2 == (Object *)0x0) {
    pOVar2 = (Object *)0x0;
  }
  else {
    pOVar2 = (Object *)
             (*(pOVar2->klass->vtable).ToString.methodPtr)
                       (pOVar2,(pOVar2->klass->vtable).ToString.method);
  }
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    pOVar2 = (this->fields)._Members_i__Field;
    if (pOVar2 == (Object *)0x0) {
      pOVar2 = (Object *)0x0;
code_?:
      if (1 < args->max_length) {
        args->vector[1] = pOVar2;
        func_?(args->vector + 1,pOVar2);
        pSVar1 = mscorlib.dll::System::String::String_Format_7
                           ((IFormatProvider *)0x0,pSVar1,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    pOVar2 = (Object *)
             (*(pOVar2->klass->vtable).ToString.methodPtr)
                       (pOVar2,(pOVar2->klass->vtable).ToString.method);
    if ((pOVar2 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 != 0))
    goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}

