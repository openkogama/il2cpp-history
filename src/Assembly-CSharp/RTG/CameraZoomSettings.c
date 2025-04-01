
/* Single GetZoomSensitivity(Camera) */

float Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_GetZoomSensitivity
                (CameraZoomSettings *this,Camera *camera,MethodInfo *method)

{
  iVar1 = (this->fields)._zoomMode;
  if (iVar1 == 0) {
    if (camera != (Camera *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (this->fields)._orthoStandardZoomSensitivity;
      }
      return (this->fields)._perspStandardZoomSensitivity;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0.0;
    }
    if (camera != (Camera *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (this->fields)._orthoSmoothZoomSensitivity;
      }
      return (this->fields)._perspSmoothZoomSensitivity;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single GetZoomSmoothValue(Camera) */

float Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_GetZoomSmoothValue
                (CameraZoomSettings *this,Camera *camera,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    uVar1 = func_?(&puStack_2);
    func_?(uVar1);
    pcVar3 = (code *)swi(3);
    fVar4 = (float10)(*pcVar3)();
    return (float)fVar4;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                    (camera,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    return (this->fields)._orthoZoomSmoothValue;
  }
  return (this->fields)._perspZoomSmoothValue;
}


/* CameraZoomSettings() */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings__ctor
               (CameraZoomSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._orthoStandardZoomSensitivity = 10.0;
  (this->fields)._perspStandardZoomSensitivity = 10.0;
  (this->fields)._orthoSmoothZoomSensitivity = 5.0;
  (this->fields)._perspSmoothZoomSensitivity = 5.0;
  (this->fields)._orthoZoomSmoothValue = 5.0;
  (this->fields)._perspZoomSmoothValue = 5.0;
  (this->fields)._isZoomEnabled = 1;
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


/* Void set_InvertZoomAxis(Boolean) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_InvertZoomAxis
               (CameraZoomSettings *this,bool value,MethodInfo *method)

{
  (this->fields)._invertZoomAxis = value;
  return;
}


/* Void set_OrthoSmoothZoomSensitivity(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_OrthoSmoothZoomSensitivity
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._orthoSmoothZoomSensitivity = value;
  return;
}


/* Void set_OrthoStandardZoomSensitivity(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::
     CameraZoomSettings_set_OrthoStandardZoomSensitivity
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._orthoStandardZoomSensitivity = value;
  return;
}


/* Void set_OrthoZoomSmoothValue(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_OrthoZoomSmoothValue
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._orthoZoomSmoothValue = value;
  return;
}


/* Void set_PerspSmoothZoomSensitivity(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_PerspSmoothZoomSensitivity
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._perspSmoothZoomSensitivity = value;
  return;
}


/* Void set_PerspStandardZoomSensitivity(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::
     CameraZoomSettings_set_PerspStandardZoomSensitivity
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._perspStandardZoomSensitivity = value;
  return;
}


/* Void set_PerspZoomSmoothValue(Single) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_PerspZoomSmoothValue
               (CameraZoomSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._perspZoomSmoothValue = value;
  return;
}

