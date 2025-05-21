
/* CameraBackgroundSettings() */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings__ctor
               (CameraBackgroundSettings *this,MethodInfo *method)

{
  pCVar1 = RTSystemValues::RTSystemValues_get_CameraBkGradientFirstColor
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields)._firstColor.r = pCVar1->r;
  (this->fields)._firstColor.g = fVar2;
  (this->fields)._firstColor.b = fVar3;
  (this->fields)._firstColor.a = fVar4;
  pCVar1 = RTSystemValues::RTSystemValues_get_CameraBkGradientSecondColor
                     ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
  bVar5 = cRam_? == '\0';
  fVar2 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  (this->fields)._secondColor.r = pCVar1->r;
  (this->fields)._secondColor.g = fVar2;
  (this->fields)._secondColor.b = fVar3;
  (this->fields)._secondColor.a = fVar4;
  if (bVar5) {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_GradientOffset(Single) */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings_set_GradientOffset
               (CameraBackgroundSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((_UNK_? <= value) && (fVar1 = _UNK_?, value <= _UNK_?)) {
    (this->fields)._gradientOffset = value;
    return;
  }
  (this->fields)._gradientOffset = fVar1;
  return;
}

