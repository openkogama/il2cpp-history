
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConverter);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pJVar4 = (JsonConverter *)
           mscorlib.dll::System::Activator::Activator_CreateInstance_4
                     (converterType,(MethodInfo *)0x0);
  if (pJVar4 == (JsonConverter *)0x0) {
    *unaff_FS_OFFSET = uStack_3;
    return (JsonConverter *)0x0;
  }
  pJVar5 = pJVar4->klass;
  if (((TypeInfo__Newtonsoft__Json__JsonConverter->_1).typeHierarchyDepth <=
       (pJVar5->_1).typeHierarchyDepth) &&
     ((pJVar5->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__JsonConverter->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__JsonConverter)) {
    *unaff_FS_OFFSET = uStack_3;
    return pJVar4;
  }
  func_?();
  func_?((pJVar5->_0).image);
  return (JsonConverter *)&UNK_?;
}


/* JsonConverterAttribute(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConverterAttribute::JsonConverterAttribute__ctor
               (JsonConverterAttribute *this,Type *converterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)converterType,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields)._converterType = converterType;
    func_?();
    return;
  }
  func_?();
  this_00 = (ArgumentNullException *)func_?();
  func_?(this_00);
  paramName = (String *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  uStack2 = func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

