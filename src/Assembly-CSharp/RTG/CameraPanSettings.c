
/* CameraPanSettings() */

void Assembly-CSharp.dll::RTG::CameraPanSettings::CameraPanSettings__ctor
               (CameraPanSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._standardPanSensitivity = 1.0;
  (this->fields)._smoothPanSensitivity = 0.7;
  (this->fields)._smoothValue = 4.0;
  (this->fields)._isPanningEnabled = 1;
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


/* Single get_Sensitivity() */

float Assembly-CSharp.dll::RTG::CameraPanSettings::CameraPanSettings_get_Sensitivity
                (CameraPanSettings *this,MethodInfo *method)

{
  if ((this->fields)._panMode == 0) {
    return (this->fields)._standardPanSensitivity;
  }
  return (this->fields)._smoothPanSensitivity;
}

