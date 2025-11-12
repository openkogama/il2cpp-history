
/* String ToString() */

String * Assembly-CSharp.dll::AnimationData::AnimationData_ToString
                   (AnimationData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_State___0___TimeStamp__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).timeStamp;
  pSVar1 = (this->fields).state;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  format = StringLiteral_State___0___TimeStamp__1__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,(Object *)pSVar1,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,format,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

