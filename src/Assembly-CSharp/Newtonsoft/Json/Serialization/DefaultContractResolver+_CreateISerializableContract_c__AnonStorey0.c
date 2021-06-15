
/* Object <>m__0(Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
         DefaultContractResolver+<CreateISerializableContract>c__AnonStorey0::
         DefaultContractResolver_CreateISerializableContract_c_AnonStorey0___m__0
                   (DefaultContractResolver_CreateISerializableContract_c_AnonStorey0 *this,
                   Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).methodCall;
  if (this_00 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = Json::Utilities::MethodCall`2[System::Object,System::Object]::
             MethodCall_2_System_Object_System_Object__Invoke
                       (this_00,(Object *)0x0,args,
                        MethodInfo__Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>__Invoke_System__Object__System__Object____
                       );
    return pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}

