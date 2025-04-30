
/* UniversalGizmoConfig() */

void Assembly-CSharp.dll::RTG::UniversalGizmoConfig::UniversalGizmoConfig__ctor
               (UniversalGizmoConfig *this,MethodInfo *method)

{
  (this->fields)._inheritType = 3;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  *(String **)method_00 = StringLiteral_Settings;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

