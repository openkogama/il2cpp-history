
/* Settings() */

void Assembly-CSharp.dll::RTG::Settings::Settings__ctor(Settings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Settings);
    cRam_? = '\x01';
  }
  (this->fields)._canBeDisplayed = 1;
  (this->fields)._isExpanded = 1;
  (this->fields)._foldoutLabel = StringLiteral_Settings;
  method_00 = (MethodInfo *)&(this->fields)._foldoutLabel;
  func_?(method_00,StringLiteral_Settings);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_FoldoutLabel(String) */

void Assembly-CSharp.dll::RTG::Settings::Settings_set_FoldoutLabel
               (Settings *this,String *value,MethodInfo *method)

{
  if (value != (String *)0x0) {
    (this->fields)._foldoutLabel = value;
    func_?(&(this->fields)._foldoutLabel,value);
  }
  return;
}

