
/* Object <>m__0(Type, IList`1[System.Object]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         CollectionUtils+<CreateDictionaryWrapper>c__AnonStorey3::
         CollectionUtils_CreateDictionaryWrapper_c_AnonStorey3___m__0
                   (CollectionUtils_CreateDictionaryWrapper_c_AnonStorey3 *this,Type *t,
                   IList_1_System_Object_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  types = (Type__Array *)func_?(TypeInfo__System__Type,1);
  pTVar1 = (this->fields).dictionaryDefinition;
  if (types == (Type__Array *)0x0) goto code_?;
  if (pTVar1 == (Type *)0x0) {
code_?:
    if (types->max_length == 0) goto code_?;
    types->vector[0] = pTVar1;
    if (t == (Type *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    this_00 = mscorlib.dll::System::Type::Type_GetConstructor(t,types,(MethodInfo *)0x0);
    parameters = (Object__Array *)func_?(TypeInfo__System__Object,1);
    pOVar2 = (this->fields).dictionary;
    if (parameters == (Object__Array *)0x0) goto code_?;
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (parameters->max_length == 0) goto code_?;
      parameters->vector[0] = pOVar2;
      if (this_00 != (ConstructorInfo *)0x0) {
        pOVar2 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                           (this_00,parameters,(MethodInfo *)0x0);
        return pOVar2;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar2,(parameters->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  else {
    iVar3 = func_?(pTVar1,(types->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar5)();
  return pOVar2;
}

