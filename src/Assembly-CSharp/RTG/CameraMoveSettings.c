
/* CameraMoveSettings() */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraMoveSettings);
    cRam_? = '\x01';
  }
  TypeInfo__RTG__CameraMoveSettings->static_fields->_minMoveSpeed = 0.1;
  return;
}


/* CameraMoveSettings() */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings__ctor
               (CameraMoveSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._moveSpeed = 6.0;
  (this->fields)._accelerationRate = 15.0;
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


/* Void set_AccelerationRate(Single) */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings_set_AccelerationRate
               (CameraMoveSettings *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  (this->fields)._accelerationRate = fVar1;
  return;
}


/* Void set_MoveSpeed(Single) */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings_set_MoveSpeed
               (CameraMoveSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraMoveSettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraMoveSettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraMoveSettings);
  }
  fVar1 = TypeInfo__RTG__CameraMoveSettings->static_fields->_minMoveSpeed;
  if (fVar1 <= value) {
    fVar1 = value;
  }
  (this->fields)._moveSpeed = fVar1;
  return;
}

