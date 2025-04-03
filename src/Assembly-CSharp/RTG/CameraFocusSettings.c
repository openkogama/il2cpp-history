
/* CameraFocusSettings() */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings__ctor
               (CameraFocusSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._focusMode = 2;
  (this->fields)._constantSpeed = 10.0;
  (this->fields)._smoothTime = 1.5;
  (this->fields)._focusDistanceAdd = 1.2;
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


/* Void set_ConstantSpeed(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_ConstantSpeed
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._constantSpeed = value;
  return;
}


/* Void set_FocusDistanceAdd(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_FocusDistanceAdd
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._focusDistanceAdd = value;
  return;
}


/* Void set_SmoothTime(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_SmoothTime
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._smoothTime = value;
  return;
}

