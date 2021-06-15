
/* Type get_MetadataClassType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::LateBoundMetadataTypeAttribute::
       LateBoundMetadataTypeAttribute_get_MetadataClassType
                 (LateBoundMetadataTypeAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute->static_fields->
      _metadataClassTypeProperty == (PropertyInfo_1 *)0x0) {
    this_00 = (this->fields)._attribute;
    if (this_00 == (Object *)0x0) goto code_?;
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
    if (pTVar1 == (Type *)0x0) goto code_?;
    pPVar2 = mscorlib.dll::System::Type::Type_GetProperty
                       (pTVar1,StringLiteral_MetadataClassType,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute->static_fields->
    _metadataClassTypeProperty = pPVar2;
  }
  pTVar1 = (Type *)Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                             ((MemberInfo_1 *)
                              TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute
                              ->static_fields->_metadataClassTypeProperty,(this->fields)._attribute,
                              (MethodInfo *)0x0);
  if (pTVar1 == (Type *)0x0) {
    return (Type *)0x0;
  }
  bVar3 = (TypeInfo__System__Type->_1).naturalAligment;
  if (((pTVar1->klass->_1).naturalAligment < bVar3) ||
     ((Type__Class *)(pTVar1->klass->_1).typeHierarchy[bVar3 - 1] != TypeInfo__System__Type)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pTVar5 = (Type *)0x0;
  if (bVar4) {
    pTVar5 = pTVar1;
  }
  if (pTVar5 != (Type *)0x0) {
    return pTVar5;
  }
  func_?();
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar6)();
  return pTVar1;
}

