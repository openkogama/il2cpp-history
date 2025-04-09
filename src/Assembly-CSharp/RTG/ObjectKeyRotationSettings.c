
/* ObjectKeyRotationSettings() */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::ObjectKeyRotationSettings__ctor
               (ObjectKeyRotationSettings *this,MethodInfo *method)

{
  (this->fields)._xRotationStep = 90.0;
  (this->fields)._yRotationStep = 90.0;
  (this->fields)._zRotationStep = 90.0;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  *(String **)method_00 = StringLiteral_Settings;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_XRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_XRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._xRotationStep = fVar1;
  return;
}


/* Void set_YRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_YRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._yRotationStep = fVar1;
  return;
}


/* Void set_ZRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_ZRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._zRotationStep = fVar1;
  return;
}

