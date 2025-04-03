
/* CameraProjectionSwitchSettings() */

void Assembly-CSharp.dll::RTG::CameraProjectionSwitchSettings::CameraProjectionSwitchSettings__ctor
               (CameraProjectionSwitchSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._transitionDurationInSeconds = 0.23;
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

