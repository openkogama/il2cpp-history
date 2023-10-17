
/* MVRuntimeDataVariableClampedFloat(String, Single, Dictionary`2[System.Object,System.Object],
   Boolean, Single, Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::MVRuntimeDataVariableClampedFloat__ctor
               (MVRuntimeDataVariableClampedFloat *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               float min,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                   );
    cRam_? = '\x01';
  }
  MVRuntimeDataVariable`1[System::Single]::MVRuntimeDataVariable_1_System_Single___ctor
            ((MVRuntimeDataVariable_1_System_Single_ *)this,variableId,sendInterval,
             initialRuntimeData,writeThrough,
             MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
            );
  (this->fields).min = min;
  (this->fields).max = max;
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::
      MVRuntimeDataVariableClampedFloat_get_Value
                (MVRuntimeDataVariableClampedFloat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVRuntimeDataVariable<float>__get_Value__);
    cRam_? = '\x01';
  }
  fVar1 = MVRuntimeDataVariable`1[System::Single]::MVRuntimeDataVariable_1_System_Single__get_Value
                    ((MVRuntimeDataVariable_1_System_Single_ *)this,
                     MethodInfo__MVRuntimeDataVariable<float>__get_Value__);
  return fVar1;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::
     MVRuntimeDataVariableClampedFloat_set_Value
               (MVRuntimeDataVariableClampedFloat *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVRuntimeDataVariable<float>__set_Value_float_);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).min;
  if ((value < fVar1) || (fVar1 = (this->fields).max, fVar1 < value)) {
    value = fVar1;
  }
  MVRuntimeDataVariable`1[System::Single]::MVRuntimeDataVariable_1_System_Single__set_Value
            ((MVRuntimeDataVariable_1_System_Single_ *)this,value,
             MethodInfo__MVRuntimeDataVariable<float>__set_Value_float_);
  return;
}

