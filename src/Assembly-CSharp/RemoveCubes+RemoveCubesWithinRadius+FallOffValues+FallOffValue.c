
/* String ToString() */

String * Assembly-CSharp.dll::RemoveCubes+RemoveCubesWithinRadius+FallOffValues+FallOffValue::
         RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue_ToString
                   (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue *this,
                   MethodInfo *method)

{
  pRVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (RemoveCubes_RemoveCubesWithinRadius_FallOffValues_FallOffValue *)pRVar1[1].squaredDistance
  ;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pRVar1[1].damage;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_squareDistance___0___damage__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

