
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Object]::
         RangeValidator_1_System_Object__ToString
                   (RangeValidator_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields).min;
  arg1 = (this->fields).max;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Object Validate(Object, Boolean) */

Object * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Object]::
         RangeValidator_1_System_Object__Validate
                   (RangeValidator_1_System_Object_ *this,Object *value,bool fixIfInValid,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).min;
  if (value == (Object *)0x0) {
    func_?(0);
  }
  else {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    iVar2 = func_?(0,iVar2,value,pOVar1);
    if (iVar2 < 0) {
      if (fixIfInValid != 0) {
        return (this->fields).min;
      }
      this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      message = StringLiteral_value__minVal;
      goto code_?;
    }
    pOVar1 = (this->fields).max;
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    iVar2 = func_?(0,iVar2,value,pOVar1);
    if (iVar2 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  message = StringLiteral_value___maxVal;
code_?:
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<System::Object>__Validate_System__Object__bool_
                 );
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}

