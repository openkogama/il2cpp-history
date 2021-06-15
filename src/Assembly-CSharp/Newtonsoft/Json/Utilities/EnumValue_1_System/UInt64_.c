
/* EnumValue`1[System.UInt64](String, UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumValue`1[System::UInt64]::
     EnumValue_1_System_UInt64___ctor
               (EnumValue_1_System_UInt64_ *this,String *name,uint64_t value,MethodInfo *method)

{
  if (this != (EnumValue_1_System_UInt64_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields)._name = name;
    (this->fields)._value = value;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

