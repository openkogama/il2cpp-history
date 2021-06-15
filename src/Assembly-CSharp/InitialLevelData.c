
/* String ToString() */

String * Assembly-CSharp.dll::InitialLevelData::InitialLevelData_ToString
                   (InitialLevelData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  this_00 = (this->fields).BadgeUrlData;
  if (this_00 == (List_1_BadgeUrlData_ *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    pOStack_2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                           MethodInfo__System__Collections__Generic__List<BadgeUrlData>__get_Count__
                          );
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_2);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar3 != (Object *)0x0) {
      iVar4 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    iStack_5 = (this->fields).Level;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar3 != (Object *)0x0) {
      iVar4 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar3;
    iStack_6 = (this->fields).XP;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar3 != (Object *)0x0) {
      iVar4 = func_?(pOVar3,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar3;
    pXVar7 = (this->fields).XPLevelLimits;
    if (pXVar7 == (XPLevelLimits *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pXVar7;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_BadgeUrlData_Length__0___Level__,args,(MethodInfo *)0x0);
        return pSVar8;
      }
      goto code_?;
    }
    iVar4 = func_?(pXVar7,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar9 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar9)();
  return pSVar8;
}

