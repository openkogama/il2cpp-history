
/* Boolean IsApproximatelyEqual(Single, Single, Single) */

bool MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_IsApproximatelyEqual
               (float a,float b,float delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  return (float)((uint)(a - b) & _UNK_?) < delta;
}


/* Boolean IsApproximatelyEqual(Double, Double, Double) */

bool MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_IsApproximatelyEqual_1
               (double a,double b,double delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  return (double)CONCAT44((uint)((ulonglong)(a - b) >> 0x20) & _UNK_?,
                          SUB84(a - b,0) & _UNK_?) < delta;
}


/* Double TryValidateDouble(Double) */

double MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_TryValidateDouble
                 (double d,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  uStack_1 = (uint)((ulonglong)d >> 0x20);
  if ((SUB84(d,0) != 0) || ((uStack_1 & 0x7fffffff) != 0x7ff00000)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__BitConverter);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__BitConverter);
    }
    if (((uStack_1 & 0x7fffffff) < 0x7ff00001) &&
       (((uStack_1 & 0x7fffffff) < 0x7ff00000 || (SUB84(d,0) == 0)))) {
      return d;
    }
  }
  uVar2 = func_?(&TypeInfo__MV__WorldObject__InvalidDoubleException);
  this = (InvalidDoubleException *)func_?(uVar2);
  func_?(this);
  InvalidDoubleException::InvalidDoubleException__ctor(this,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__MV__WorldObject__MVMath__TryValidateDouble_double_);
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (double)fVar4;
}


/* Single TryValidateFloat(Single) */

float MVWorldObject.dll::MV::WorldObject::MVMath::MVMath_TryValidateFloat
                (float f,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  if (ABS(f) != INFINITY) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__BitConverter);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__BitConverter);
    }
    if ((uint)ABS(f) < 0x7f800001) {
      return f;
    }
  }
  uVar1 = func_?(&TypeInfo__MV__WorldObject__InvalidFloatException);
  this = (InvalidFloatException *)func_?(uVar1);
  func_?(this);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  if (ABS(validateFloat) != INFINITY) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__BitConverter);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__BitConverter);
    }
    return (uint)ABS(validateFloat) < 0x7f800001;
  }
  return 0;
}

