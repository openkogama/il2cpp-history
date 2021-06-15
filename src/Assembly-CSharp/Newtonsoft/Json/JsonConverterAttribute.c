
/* JsonConverter CreateJsonConverterInstance(Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::JsonConverterAttribute::
JsonConverterAttribute_CreateJsonConverterInstance(Type *converterType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  pJVar4 = (JsonConverter *)
           mscorlib.dll::System::Activator::Activator_CreateInstance
                     (converterType,(MethodInfo *)0x0);
  pJVar5 = pJVar4;
  if (pJVar4 != (JsonConverter *)0x0) {
    bVar6 = (TypeInfo__Newtonsoft__Json__JsonConverter->_1).naturalAligment;
    if (((pJVar4->klass->_1).naturalAligment < bVar6) ||
       ((pJVar4->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__JsonConverter)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pJVar5 = (JsonConverter *)0x0;
    if (bVar7) {
      pJVar5 = pJVar4;
    }
    if (pJVar5 == (JsonConverter *)0x0) {
      func_?();
      return (JsonConverter *)&UNK_?;
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return pJVar5;
}


/* JsonConverterAttribute(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConverterAttribute::JsonConverterAttribute__ctor
               (JsonConverterAttribute *this,Type *converterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  if (converterType != (Type *)0x0) {
    (this->fields)._converterType = converterType;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_converterType,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

