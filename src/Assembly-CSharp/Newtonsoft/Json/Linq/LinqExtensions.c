
/* IJEnumerable`1[JToken] Ancestors[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Ancestors
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  pIVar1 = method->parameters[1];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  uVar2 = func_?(pIVar1);
  pIVar1 = method->parameters[2];
  (*(code *)pIVar1->data)(uVar2,0,*method->parameters,pIVar1);
  (*(code *)method->parameters[3]->data)(source,uVar2,method->parameters[3]);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar3 = LinqExtensions_AsJEnumerable_3
                     (in_stack_4,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar3;
}


/* IJEnumerable`1[JToken] AsJEnumerable(IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_AsJEnumerable
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_3
                     (source,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar1;
}


/* IJEnumerable`1[JToken] AsJEnumerable[JToken](IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_AsJEnumerable_3
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = source;
  if (source == (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    return (IJEnumerable_1_JToken_ *)0x0;
  }
  pIVar3 = *method->parameters;
  if ((pIVar3[0x17].type & 1) == 0) {
    func_?(pIVar3);
  }
  pIVar4 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)func_?(pIVar2,pIVar3);
  ppIVar5 = pMVar1->parameters;
  if (pIVar4 == (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    source = pIVar4;
    func_?(&source,pIVar2,ppIVar5[2]);
    pIStack_6 = source;
    pIVar3 = pMVar1->parameters[1];
    if ((pIVar3[0x17].type & 1) == 0) {
      func_?(pIVar3);
    }
    pIVar7 = (IJEnumerable_1_JToken_ *)func_?(pIVar3,&pIStack_6);
  }
  else {
    pIVar3 = *ppIVar5;
    if ((pIVar3[0x17].type & 1) == 0) {
      func_?(pIVar3);
    }
    pIVar7 = (IJEnumerable_1_JToken_ *)func_?(pIVar2,pIVar3);
    if (pIVar7 == (IJEnumerable_1_JToken_ *)0x0) {
      func_?(pIVar2,pIVar3);
      pcVar8 = (code *)swi(3);
      pIVar7 = (IJEnumerable_1_JToken_ *)(*pcVar8)();
      return pIVar7;
    }
  }
  return pIVar7;
}


/* IJEnumerable`1[JToken] Children[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Children
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  source_00 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
              (*(code *)(*method->parameters)->data)(source,*method->parameters);
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_3
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar1;
}


/* IEnumerable`1[System.Object] Children[Object,Object](IEnumerable`1[System.Object]) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Children_1
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  pIVar1 = method->parameters[1];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  uVar2 = func_?(pIVar1);
  pIVar1 = method->parameters[2];
  (*(code *)pIVar1->data)(uVar2,0,*method->parameters,pIVar1);
  (*(code *)method->parameters[3]->data)(source,uVar2,method->parameters[3]);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (IEnumerable_1_System_Object_ *)(*(code *)method->parameters[4]->data)();
  return pIVar3;
}


/* IEnumerable`1[System.Object] Convert[Object,Object](IEnumerable`1[System.Object]) */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Convert
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pIVar2 = (IEnumerable_1_System_Object_ *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pIVar2,method->parameters[1]);
  if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
    pIVar2[1].klass = (IEnumerable_1_System_Object___Class *)source;
    pIVar2[3].monitor = (MonitorData *)0xfffffffe;
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_System_Object_ *)(*pcVar3)();
  return pIVar2;
}


/* Object Convert[Object,Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Convert_1
                   (Object *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (token == (Object *)0x0) {
    return (Object *)0x0;
  }
  pIVar1 = method->parameters[1];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(token,pIVar1);
  if (iVar2 != 0) {
    RVar3.value = method->parameters[2];
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
    pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__IComparable,(MethodInfo *)0x0);
    if (pTVar4 != pTVar5) {
      RVar3.value = method->parameters[2];
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)TypeRef__System__IFormattable,(MethodInfo *)0x0);
      if (pTVar4 != pTVar5) {
        pIVar1 = method->parameters[1];
        goto code_?;
      }
    }
  }
  this = (NamedThemeAttribute_1_UnityEngine_Color_ *)
         func_?(token,TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    pTVar4 = mscorlib.dll::System::Object::Object_GetType(token,(MethodInfo *)0x0);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pTVar4 != (Type *)0x0) &&
       (iVar2 = func_?(pTVar4,(((String__Class *)args->klass)->_0).element_class,pCVar6),
       iVar2 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
  }
  else {
    pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name(this,(MethodInfo *)0x0);
    pIVar1 = method->parameters[1];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    iVar2 = func_?(pSVar7,pIVar1);
    if (iVar2 == 0) {
      RVar3.value = method->parameters[2];
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
      bVar8 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (pTVar4,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                 NamedThemeAttribute_1_UnityEngine_Color__get_Name(this,(MethodInfo *)0x0);
        if (pSVar7 == (String *)0x0) {
          return (Object *)0x0;
        }
        pTVar4 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                           (pTVar4,(MethodInfo *)0x0);
      }
      pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      token = mscorlib.dll::System::Convert::Convert_ChangeType_1
                        ((Object *)pSVar7,pTVar4,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
      pIVar1 = method->parameters[1];
code_?:
      if ((pIVar1[0x17].type & 1) == 0) {
        func_?(pIVar1);
      }
      pOVar9 = (Object *)func_?(token,pIVar1);
      return pOVar9;
    }
    args = (Object__Array *)
           ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name(this,(MethodInfo *)0x0);
    pTVar4 = (Type *)method->parameters[1];
    if (((uint)pTVar4[0xf].fields._impl.value & 0x10000) == 0) {
      func_?(pTVar4);
    }
    if (args == (Object__Array *)0x0) {
      return (Object *)0x0;
    }
    pOVar9 = (Object *)func_?(args,pTVar4);
    if (pOVar9 != (Object *)0x0) {
      return pOVar9;
    }
    func_?(args,pTVar4);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar10 = func_?(0,0);
    func_?(uVar10);
  }
  args->vector[0] = (Object *)pTVar4;
  RVar3.value = method->parameters[3];
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar4);
  provider = (IFormatProvider *)0x1;
  func_?(1,pTVar4);
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_cast__0__to__1__,provider,args,(MethodInfo *)0x0);
  this_00 = (InvalidCastException *)func_?(TypeInfo__System__InvalidCastException);
  mscorlib.dll::System::InvalidCastException::InvalidCastException__ctor_1
            (this_00,pSVar7,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar11)();
  return pOVar9;
}


/* IJEnumerable`1[JToken] Descendants[Object](IEnumerable`1[System.Object]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Descendants
          (IEnumerable_1_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  pIVar1 = method->parameters[1];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  uVar2 = func_?(pIVar1);
  pIVar1 = method->parameters[2];
  (*(code *)pIVar1->data)(uVar2,0,*method->parameters,pIVar1);
  (*(code *)method->parameters[3]->data)(source,uVar2,method->parameters[3]);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar3 = LinqExtensions_AsJEnumerable_3
                     (in_stack_4,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar3;
}


/* IJEnumerable`1[JProperty] Properties(IEnumerable`1[Newtonsoft.Json.Linq.JObject]) */

IJEnumerable_1_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Properties
          (IEnumerable_1_Newtonsoft_Json_Linq_JObject_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)source,StringLiteral_source,(MethodInfo *)0x0);
  if (TypeInfo__Newtonsoft__Json__Linq__LinqExtensions->static_fields->__f__am_cache0 ==
      (Func_2_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IEnumerable_1_Newtonsoft_Json_Linq_JProperty_
       *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Linq__LinqExtensions___Properties_m__2_Newtonsoft__Json__Linq__JObject_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Linq__LinqExtensions->static_fields->__f__am_cache0 =
         (Func_2_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IEnumerable_1_Newtonsoft_Json_Linq_JProperty_
          *)this;
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                        ((IEnumerable_1_System_Object_ *)
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Linq::JObject,_Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JObject>__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>_
                         ,(Func_2_Object_Single_ *)
                          TypeInfo__Newtonsoft__Json__Linq__LinqExtensions->static_fields->
                          __f__am_cache0,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Linq::JObject,_Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JObject>__System__Func<Newtonsoft::Json::Linq::JObject,_System::Collections::Generic::IEnumerable<Newtonsoft::Json::Linq::JProperty>_>_
                        );
  pIVar1 = LinqExtensions_AsJEnumerable_3
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JProperty>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_
                     );
  return (IJEnumerable_1_JProperty_ *)pIVar1;
}


/* Object Value[Object](IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Value
                   (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *value,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = (Object *)(*(code *)(*method->parameters)->data)();
  return pOVar1;
}


/* Object Value[Object,Object](IEnumerable`1[System.Object]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Value_1
                   (IEnumerable_1_System_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_source,(MethodInfo *)0x0);
  iVar1 = func_?(value,TypeInfo__Newtonsoft__Json__Linq__JToken);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pOVar2 = (Object *)(*(code *)(*method->parameters)->data)();
    return pOVar2;
  }
  this = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this,StringLiteral_Source_value_must_be_a_JToken_,(MethodInfo *)0x0);
  pMStack3 =
       System__Object_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Value<System::Object,_System::Object>_System__Collections__Generic__IEnumerable<System::Object>_
  ;
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar4)();
  return pOVar2;
}


/* IJEnumerable`1[JToken] Values(IEnumerable`1[Newtonsoft.Json.Linq.JToken], Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source_00 = LinqExtensions_Values_5
                        (source,key,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                        );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_3
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar1;
}


/* IJEnumerable`1[JToken] Values(IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_1
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source_00 = LinqExtensions_Values_5
                        (source,(Object *)0x0,
                         System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__Values<Newtonsoft::Json::Linq::JToken,_Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>__System__Object_
                        );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = LinqExtensions_AsJEnumerable_3
                     (source_00,
                      Newtonsoft__Json__Linq__IJEnumerable<Newtonsoft::Json::Linq::JToken>_MethodInfo__Newtonsoft__Json__Linq__LinqExtensions__AsJEnumerable<Newtonsoft::Json::Linq::JToken>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>_
                     );
  return pIVar1;
}


/* IEnumerable`1[System.Object] Values[Object](IEnumerable`1[Newtonsoft.Json.Linq.JToken], Object)
    */

IEnumerable_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,Object *key,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IEnumerable_1_System_Object_ *)(*(code *)(*method->parameters)->data)();
  return pIVar1;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken]
   Values[JToken,JToken](IEnumerable`1[Newtonsoft.Json.Linq.JToken], Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_5
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *source,Object *key,MethodInfo *method)

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(pIVar2,method->parameters[1]);
  if (pIVar2 != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    pIVar2[1].klass = (IEnumerable_1_Newtonsoft_Json_Linq_JToken___Class *)source;
    pIVar2[2].monitor = (MonitorData *)key;
    pIVar2[5].monitor = (MonitorData *)0xfffffffe;
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar3)();
  return pIVar2;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] <Ancestors`1>m__0[Object](Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions__Ancestors_1_m__0
          (Object *j,MethodInfo *method)

{
  if (j == (Object *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
    return pIVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___Ancestors_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)j;
    (this->fields).originalScale.z = -NAN;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] <Children`2>m__3[Object,Object](Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions__Children_2_m__3
          (Object *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (c != (Object *)0x0) {
    c = (Object *)(*(code *)c->klass[1]._1.actualSize)(c,c->klass[1]._1.element_size);
    pIVar1 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
             func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                             ,&c);
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
  return pIVar1;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] <Descendants`1>m__1[Object](Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions__Descendants_1_m__1
          (Object *j,MethodInfo *method)

{
  if (j == (Object *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
    return pIVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_c__Iterator0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).target = (Transform *)j;
    this[1].klass = (ScaleAnimationBase__Class *)0xfffffffe;
    return (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerable`1[Newtonsoft.Json.Linq.JProperty] <Properties>m__2(JObject) */

IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions__Properties_m__2
          (JObject *d,MethodInfo *method)

{
  if (d != (JObject *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    source = (IEnumerable *)
             (*(code *)(d->klass->vtable).get_ChildrenTokens.method)
                       (d,(d->klass->vtable).InsertItem.methodPtr);
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                       (source,
                        System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                       );
    return (IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *)pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *)(*pcVar2)();
  return pIVar3;
}

