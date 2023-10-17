
/* String ToString() */

String * Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues+FallOffValue::
         RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue_ToString
                   (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_squareDistance___0___damage__1__);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  this = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue *)this->squaredDistance;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pRVar1->damage;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_squareDistance___0___damage__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

