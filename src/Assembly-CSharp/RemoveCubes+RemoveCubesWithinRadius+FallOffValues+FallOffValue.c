
/* String ToString() */

String * Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues+FallOffValue::
         RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue_ToString
                   (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_squareDistance___0___damage__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = this->squaredDistance;
  arg0 = (Object *)FUN_?(uRam_?,afStackX_8);
  afStackX_8[0] = this->damage;
  arg1 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar1 = StringLiteral_squareDistance___0___damage__1__;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

