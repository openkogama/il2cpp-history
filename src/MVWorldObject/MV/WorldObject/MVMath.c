
/* Single TryValidateFloat(Single) */

float MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_TryValidateFloat
                (float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(f,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(f,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return f;
    }
  }
  this = (JsonSchemaException *)func_?();
  Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor
            (this,(MethodInfo *)0x0);
  pMStack2 = MethodInfo__MV__WorldObject__MVMath__TryValidateFloat_float_;
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean ValidateFloat(Single) */

bool MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_ValidateFloat
               (float validateFloat,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsInfinity(validateFloat,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(validateFloat,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

