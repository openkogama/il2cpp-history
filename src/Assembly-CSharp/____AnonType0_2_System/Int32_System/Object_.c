
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::<>__AnonType0`2[System::Int32,System::Object]::
     _AnonType0_2_System_Int32_System_Object__Equals
               (_AnonType0_2_System_Int32_System_Object_ *this,Object *obj,MethodInfo *method)

{
  iVar1 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  iVar1 = func_?(obj,iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if ((*(byte *)(iVar2 + 0xbf) & 2) != 0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      func_?(iVar2);
    }
  }
  puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
  piVar4 = (int *)(*(code *)*puVar3)(puVar3);
  if (piVar4 != (int *)0x0) {
    cVar5 = (**(code **)(*piVar4 + 0x108))
                      (piVar4,(this->fields)._Count_,*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(*piVar4 + 0x10c));
    if (cVar5 == '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    if ((*(byte *)(iVar2 + 0xbf) & 2) != 0) {
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      if (*(int *)(iVar2 + 0x70) == 0) {
        iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
        if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
          func_?(iVar2);
        }
        func_?(iVar2);
      }
    }
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    piVar4 = (int *)(*(code *)*puVar3)(puVar3);
    if (piVar4 != (int *)0x0) {
      cVar5 = (**(code **)(*piVar4 + 0x108))
                        (piVar4,(this->fields)._Members_,*(undefined4 *)(iVar1 + 0xc),
                         *(undefined4 *)(*piVar4 + 0x10c));
      return cVar5 != '\0';
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::<>__AnonType0`2[System::Int32,System::Object]::
        _AnonType0_2_System_Int32_System_Object__GetHashCode
                  (_AnonType0_2_System_Int32_System_Object_ *this,MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x70) == 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      func_?(iVar1);
    }
  }
  puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
  piVar3 = (int *)(*(code *)*puVar2)(puVar2);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x100))
                      (piVar3,(this->fields)._Count_,*(undefined4 *)(*piVar3 + 0x104));
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      if (*(int *)(iVar1 + 0x70) == 0) {
        iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
        if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
          func_?(iVar1);
        }
        func_?(iVar1);
      }
    }
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    piVar3 = (int *)(*(code *)*puVar2)(puVar2);
    if (piVar3 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar3 + 0x100))
                        (piVar3,(this->fields)._Members_,*(undefined4 *)(*piVar3 + 0x104));
      uVar4 = (uVar5 ^ (uVar4 ^ 0x811c9dc5) * 0x1000193) * 0x1326193;
      uVar4 = ((int)uVar4 >> 7 ^ uVar4) * 9;
      return ((int)uVar4 >> 0x11 ^ uVar4) * 0x21;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* String ToString() */

String * Assembly-CSharp.dll::<>__AnonType0`2[System::Int32,System::Object]::
         _AnonType0_2_System_Int32_System_Object__ToString
                   (_AnonType0_2_System_Int32_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) {
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
    if ((::StringLiteral__ != (String *)0x0) &&
       (iVar3 = func_?(::StringLiteral__,(values->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = ::StringLiteral__;
    if ((StringLiteral__Count___ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Count___,(values->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = StringLiteral__Count___;
    iStack_1 = (this->fields)._Count_;
    pSVar4 = (String *)func_?(&iStack_1,0);
    if ((pSVar4 != (String *)0x0) &&
       (iVar3 = func_?(pSVar4,(values->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = pSVar4;
    if ((StringLiteral___Members___ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral___Members___,(values->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = StringLiteral___Members___;
    pOVar5 = (this->fields)._Members_;
    if (pOVar5 == (Object *)0x0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    else {
      pSVar4 = (String *)
               (*(code *)(pOVar5->klass->vtable).ToString.method)(pOVar5,pOVar5->klass[1]._0.image);
    }
    if ((pSVar4 != (String *)0x0) &&
       (iVar3 = func_?(pSVar4,(values->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = pSVar4;
    if ((::StringLiteral___ == (String *)0x0) ||
       (iVar3 = func_?(::StringLiteral___,(values->klass->_0).element_class), iVar3 != 0))
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
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}

