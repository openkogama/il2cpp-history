
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
         RangeValidator_1_System_Int32__ToString
                   (RangeValidator_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  pRVar2 = this;
  this = (RangeValidator_1_System_Int32_ *)(this->fields).min;
  iVar3 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  arg0 = (Object *)func_?(iVar3,&this);
  method = (MethodInfo *)(pRVar2->fields).max;
  iVar3 = **(int **)(pMVar1->name + 0x60);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  arg1 = (Object *)func_?(iVar3,&method);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
        RangeValidator_1_System_Int32__Validate
                  (RangeValidator_1_System_Int32_ *this,int32_t value,bool fixIfInValid,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&value,(this->fields).min,0);
  if (iVar1 < 0) {
    if (fixIfInValid != 0) {
      return (this->fields).min;
    }
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    message = StringLiteral_value__minVal;
  }
  else {
    iVar1 = func_?(&value,(this->fields).max,0);
    if (iVar1 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    message = StringLiteral_value___maxVal;
  }
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

