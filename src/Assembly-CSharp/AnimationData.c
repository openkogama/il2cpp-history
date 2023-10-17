
/* String ToString() */

String * Assembly-CSharp.dll::AnimationData::AnimationData_ToString
                   (AnimationData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_State___0___TimeStamp__1__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).state;
  this = (AnimationData *)(this->fields).timeStamp;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_State___0___TimeStamp__1__,(Object *)pSVar1,arg1,
                      (MethodInfo *)0x0);
  return pSVar1;
}

