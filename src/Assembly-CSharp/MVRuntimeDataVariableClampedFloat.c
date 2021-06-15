
/* MVRuntimeDataVariableClampedFloat(String, Single, Dictionary`2[System.Object,System.Object],
   Boolean, Single, Single) */

void Assembly-CSharp.dll::MVRuntimeDataVariableClampedFloat::MVRuntimeDataVariableClampedFloat__ctor
               (MVRuntimeDataVariableClampedFloat *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               float min,float max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVRuntimeDataVariable`1[System::Int32]::MVRuntimeDataVariable_1_System_Int32___ctor
            ((MVRuntimeDataVariable_1_System_Int32_ *)this,variableId,sendInterval,
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).min;
  max = (this->fields).max;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value,fVar1,max,(MethodInfo *)0x0);
  MVRuntimeDataVariable`1[System::Single]::MVRuntimeDataVariable_1_System_Single__set_Value
            ((MVRuntimeDataVariable_1_System_Single_ *)this,fVar1,
             MethodInfo__MVRuntimeDataVariable<float>__set_Value_float_);
  return;
}

