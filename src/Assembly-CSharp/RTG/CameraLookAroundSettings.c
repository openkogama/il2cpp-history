
/* CameraLookAroundSettings() */

void Assembly-CSharp.dll::RTG::CameraLookAroundSettings::CameraLookAroundSettings__ctor
               (CameraLookAroundSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._standardLookAroundSensitivity = 5.0;
  (this->fields)._smoothLookAroundSensitivity = 5.0;
  (this->fields).smoothValue = 4.0;
  (this->fields)._isLookAroundEnabled = 1;
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

