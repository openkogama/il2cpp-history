
/* Type get_MetadataClassType() */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::LateBoundMetadataTypeAttribute::
       LateBoundMetadataTypeAttribute_get_MetadataClassType
                 (LateBoundMetadataTypeAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_MetadataClassType);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                    (TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute->
                     static_fields->_metadataClassTypeProperty,(PropertyInfo_1 *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields)._attribute;
    if (this_00 == (Object *)0x0) goto code_?;
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
    if (pTVar2 == (Type *)0x0) goto code_?;
    pPVar3 = mscorlib.dll::System::Type::Type_GetProperty
                       (pTVar2,StringLiteral_MetadataClassType,(MethodInfo *)0x0);
    TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute->static_fields->
    _metadataClassTypeProperty = pPVar3;
    func_?();
  }
  pTVar2 = (Type *)Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                             ((MemberInfo_1 *)
                              TypeInfo__Newtonsoft__Json__Serialization__LateBoundMetadataTypeAttribute
                              ->static_fields->_metadataClassTypeProperty,(this->fields)._attribute,
                              (MethodInfo *)0x0);
  if (pTVar2 == (Type *)0x0) {
    return (Type *)0x0;
  }
  if (((TypeInfo__System__Type->_1).typeHierarchyDepth <= (pTVar2->klass->_1).typeHierarchyDepth) &&
     ((Type__Class *)
      (pTVar2->klass->_1).typeHierarchy[(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] ==
      TypeInfo__System__Type)) {
    return pTVar2;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar4)();
  return pTVar2;
}

