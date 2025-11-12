
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Int32]::
     ThemeAttribute_1_System_Int32__ApplyValue
               (ThemeAttribute_1_System_Int32_ *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).__unknown_2.methodPtr)
            (this,(ulonglong)(uint)(this->fields).value,(this->klass->vtable).__unknown_2.method);
  return;
}


/* Int32 get_Value() */

int32_t Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[System::Int32]::
        ThemeAttribute_1_System_Int32__get_Value
                  (ThemeAttribute_1_System_Int32_ *this,MethodInfo *method)

{
  return (this->fields).value;
}

