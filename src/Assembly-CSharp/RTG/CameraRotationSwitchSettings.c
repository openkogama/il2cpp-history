
/* CameraRotationSwitchSettings() */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::CameraRotationSwitchSettings__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    cRam_? = '\x01';
  }
  TypeInfo__RTG__CameraRotationSwitchSettings->static_fields->_minConstantDuration = 0.1;
  return;
}


/* CameraRotationSwitchSettings() */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::CameraRotationSwitchSettings__ctor
               (CameraRotationSwitchSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._switchMode = 1;
  (this->fields)._constantSwitchDurationInSeconds = 0.3;
  (this->fields)._smoothValue = 8.0;
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


/* Void set_ConstantSwitchDurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::
     CameraRotationSwitchSettings_set_ConstantSwitchDurationInSeconds
               (CameraRotationSwitchSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraRotationSwitchSettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraRotationSwitchSettings);
  }
  fVar1 = TypeInfo__RTG__CameraRotationSwitchSettings->static_fields->_minConstantDuration;
  if (value <= fVar1) {
    value = fVar1;
  }
  (this->fields)._constantSwitchDurationInSeconds = value;
  return;
}

