
/* Object <>m__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ConvertUtils+<CreateCastConverter>c__AnonStorey0::
         ConvertUtils_CreateCastConverter_c_AnonStorey0___m__0
                   (ConvertUtils_CreateCastConverter_c_AnonStorey0 *this,Object *o,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).call;
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    if (o == (Object *)0x0) {
code_?:
      if (args->max_length == 0) goto code_?;
      args->vector[0] = o;
      if (this_00 != (MethodCall_2_System_Object_System_Object_ *)0x0) {
        pOVar1 = MethodCall`2[System::Object,System::Object]::
                 MethodCall_2_System_Object_System_Object__Invoke
                           (this_00,(Object *)0x0,args,
                            MethodInfo__Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>__Invoke_System__Object__System__Object____
                           );
        return pOVar1;
      }
      goto code_?;
    }
    iVar2 = func_?(o,(args->klass->_0).element_class);
    if (iVar2 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar4)();
  return pOVar1;
}

