
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Boolean]::
     ThemeAttribute_1_System_Boolean__ApplyValue
               (ThemeAttribute_1_System_Boolean_ *this,MethodInfo *method)

{
  if (this != (ThemeAttribute_1_System_Boolean_ *)0x0) {
    (*(code *)(this->klass->vtable).__unknown_2.method)
              (this,(this->fields).value,this->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_Value() */

bool Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Boolean]::
     ThemeAttribute_1_System_Boolean__get_Value
               (ThemeAttribute_1_System_Boolean_ *this,MethodInfo *method)

{
  return (this->fields).value;
}

