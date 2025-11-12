
/* Single GetZoomSensitivity(Camera) */

float Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_GetZoomSensitivity
                (CameraZoomSettings *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._zoomMode == 0) {
    if (camera != (Camera *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (this->fields)._orthoStandardZoomSensitivity;
      }
      return (this->fields)._perspStandardZoomSensitivity;
    }
  }
  else {
    if ((this->fields)._zoomMode != 1) {
      return 0.0;
    }
    if (camera != (Camera *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (this->fields)._orthoSmoothZoomSensitivity;
      }
      return (this->fields)._perspSmoothZoomSensitivity;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single GetZoomSmoothValue(Camera) */

float Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_GetZoomSmoothValue
                (CameraZoomSettings *this,Camera *camera,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcRam_? = pcVar1;
    cVar5 = (*pcRam_?)(pvVar3);
    if (cVar5 == '\0') {
      return (this->fields)._perspZoomSmoothValue;
    }
    return (this->fields)._orthoZoomSmoothValue;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* CameraZoomSettings() */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings__ctor
               (CameraZoomSettings *this,MethodInfo *method)

{
  (this->fields)._orthoStandardZoomSensitivity = 10.0;
  (this->fields)._perspStandardZoomSensitivity = 10.0;
  (this->fields)._orthoSmoothZoomSensitivity = 5.0;
  (this->fields)._perspSmoothZoomSensitivity = 5.0;
  (this->fields)._orthoZoomSmoothValue = 5.0;
  (this->fields)._perspZoomSmoothValue = 5.0;
  (this->fields)._isZoomEnabled = 1;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Boolean get_IsZoomEnabled() */

bool Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_get_IsZoomEnabled
               (CameraZoomSettings *this,MethodInfo *method)

{
  return (this->fields)._isZoomEnabled;
}


/* Void set_IsZoomEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::CameraZoomSettings::CameraZoomSettings_set_IsZoomEnabled
               (CameraZoomSettings *this,bool value,MethodInfo *method)

{
  (this->fields)._isZoomEnabled = value;
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

