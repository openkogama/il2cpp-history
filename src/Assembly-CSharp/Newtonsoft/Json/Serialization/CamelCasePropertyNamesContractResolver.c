
/* String ResolvePropertyName(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
         CamelCasePropertyNamesContractResolver::
         CamelCasePropertyNamesContractResolver_ResolvePropertyName
                   (CamelCasePropertyNamesContractResolver *this,String *propertyName,
                   MethodInfo *method)

{
  pSVar1 = Json::Utilities::StringUtils::StringUtils_ToCamelCase(propertyName,(MethodInfo *)0x0);
  return pSVar1;
}


/* CamelCasePropertyNamesContractResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::
     CamelCasePropertyNamesContractResolver__ctor
               (CamelCasePropertyNamesContractResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0))
  {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._._DefaultMembersSearchFlags_k__BackingField = 0x14;
  (this->fields)._._sharedCache = 1;
  return;
}

