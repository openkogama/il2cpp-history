
/* Boolean <>m__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     DefaultContractResolver+<CreateShouldSerializeTest>c__AnonStorey1::
     DefaultContractResolver_CreateShouldSerializeTest_c_AnonStorey1___m__0
               (DefaultContractResolver_CreateShouldSerializeTest_c_AnonStorey1 *this,Object *o,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).shouldSerializeCall;
  args = (Object__Array *)func_?(TypeInfo__System__Object,0);
  if (this_00 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = Json::Utilities::MethodCall`2[System::Object,System::Object]::
             MethodCall_2_System_Object_System_Object__Invoke
                       (this_00,o,args,
                        MethodInfo__Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>__Invoke_System__Object__System__Object____
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

