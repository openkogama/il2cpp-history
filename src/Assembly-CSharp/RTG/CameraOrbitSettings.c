
/* CameraOrbitSettings() */

void Assembly-CSharp.dll::RTG::CameraOrbitSettings::CameraOrbitSettings__ctor
               (CameraOrbitSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._standardOrbitSensitivity = 5.0;
  (this->fields)._smoothOrbitSensitivity = 5.0;
  (this->fields)._smoothValue = 8.0;
  (this->fields)._isOrbitEnabled = 1;
  if (bVar1) {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  *(String **)method_00 = StringLiteral_Settings;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Single get_OrbitSensitivity() */

float Assembly-CSharp.dll::RTG::CameraOrbitSettings::CameraOrbitSettings_get_OrbitSensitivity
                (CameraOrbitSettings *this,MethodInfo *method)

{
  if ((this->fields)._orbitMode == 1) {
    return (this->fields)._smoothOrbitSensitivity;
  }
  return (this->fields)._standardOrbitSensitivity;
}

