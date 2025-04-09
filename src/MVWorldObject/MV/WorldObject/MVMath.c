
/* Single TryValidateFloat(Single) */

float MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_TryValidateFloat
                (float f,MethodInfo *method)

{
  if ((ABS(f) != INFINITY) && ((uint)ABS(f) < 0x7f800001)) {
    return f;
  }
  uVar1 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar1);
  InvalidFloatException::InvalidFloatException__ctor(this,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_);
  func_?(this,uVar1);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Boolean ValidateFloat(Single) */

bool MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_ValidateFloat
               (float validateFloat,MethodInfo *method)

{
  if ((ABS(validateFloat) != INFINITY) && ((uint)ABS(validateFloat) < 0x7f800001)) {
    return 1;
  }
  return 0;
}

