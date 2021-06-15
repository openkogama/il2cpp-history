
/* Boolean AssignableToTypeName(Type, String, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_AssignableToTypeName
               (Type *type,String *fullTypeName,Type **match,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((type != (Type *)0x0) && (pTVar1 = type, type != (Type *)0x0)) {
    do {
      pSVar2 = (String *)
               (*(code *)(pTVar1->klass->vtable).__unknown_8.method)
                         (pTVar1,(pTVar1->klass->vtable).get_HasElementType.methodPtr);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar3 = mscorlib.dll::System::String::String_Equals_3
                        (pSVar2,fullTypeName,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        *match = pTVar1;
        return 1;
      }
      pTVar1 = (Type *)func_?(0x11,pTVar1);
    } while (pTVar1 != (Type *)0x0);
    iVar4 = (*(code *)(type->klass->vtable).__unknown_11.method)
                      (type,(type->klass->vtable).IsAssignableFrom.methodPtr);
    if (iVar4 != 0) {
      piVar5 = (int *)(iVar4 + 0x10);
      uVar6 = 0;
      while( true ) {
        if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar6) {
          *match = (Type *)0x0;
          return 0;
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar6) break;
        piVar7 = (int *)*piVar5;
        if (piVar7 == (int *)0x0) goto code_?;
        pSVar2 = (String *)(**(code **)(*piVar7 + 0x100))(piVar7,*(undefined4 *)(*piVar7 + 0x104));
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar3 = mscorlib.dll::System::String::String_Equals_3
                          (pSVar2,fullTypeName,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          *match = type;
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* Boolean AssignableToTypeName(Type, String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_AssignableToTypeName_1(Type *type,String *fullTypeName,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  bVar2 = ReflectionUtils_AssignableToTypeName(type,fullTypeName,&pTStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean CanReadMemberValue(MemberInfo, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_CanReadMemberValue(MemberInfo_1 *member,bool nonPublic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (member != (MemberInfo_1 *)0x0) {
    iVar1 = (*(code *)(member->klass->vtable).__unknown_1.method)
                      (member,(member->klass->vtable).__unknown_2.methodPtr);
    if (iVar1 == 4) {
      bVar2 = (TypeInfo__System__Reflection__FieldInfo->_1).naturalAligment;
      if (((member->klass->_1).naturalAligment < bVar2) ||
         ((member->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this = (FieldInfo_1 *)0x0;
      if (bVar3) {
        this = (FieldInfo_1 *)member;
      }
      pFVar4 = TypeInfo__System__Reflection__FieldInfo;
      if (this != (FieldInfo_1 *)0x0) {
        if ((nonPublic == 0) &&
           (bVar5 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPublic
                              (this,(MethodInfo *)0x0), bVar5 == 0)) {
          return 0;
        }
        return 1;
      }
      goto code_?;
    }
    if (iVar1 != 0x10) {
      return 0;
    }
    piVar6 = (int *)func_?(member,TypeInfo__System__Reflection__PropertyInfo);
    member = (MemberInfo_1 *)0x0;
    if (piVar6 != (int *)0x0) {
      cVar7 = (**(code **)(*piVar6 + 0x138))(piVar6,*(undefined4 *)(*piVar6 + 0x13c));
      if (cVar7 == '\0') {
        return 0;
      }
      if (nonPublic != 0) {
        return 1;
      }
      iVar1 = (**(code **)(*piVar6 + 0x160))(piVar6,0,*(undefined4 *)(*piVar6 + 0x164));
      return iVar1 != 0;
    }
  }
  func_?(0);
  pFVar4 = extraout_EDX;
code_?:
  func_?(member,pFVar4);
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Boolean CanSetMemberValue(MemberInfo, Boolean, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_CanSetMemberValue
               (MemberInfo_1 *member,bool nonPublic,bool canSetReadOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (member != (MemberInfo_1 *)0x0) {
    iVar1 = (*(code *)(member->klass->vtable).__unknown_1.method)
                      (member,(member->klass->vtable).__unknown_2.methodPtr);
    if (iVar1 == 4) {
      bVar2 = (TypeInfo__System__Reflection__FieldInfo->_1).naturalAligment;
      if (((member->klass->_1).naturalAligment < bVar2) ||
         ((member->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this = (FieldInfo_1 *)0x0;
      if (bVar3) {
        this = (FieldInfo_1 *)member;
      }
      pFVar4 = TypeInfo__System__Reflection__FieldInfo;
      if (this != (FieldInfo_1 *)0x0) {
        bVar5 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsInitOnly
                          (this,(MethodInfo *)0x0);
        if ((bVar5 != 0) && (canSetReadOnly == 0)) {
          return 0;
        }
        if ((nonPublic == 0) &&
           (bVar5 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPublic
                              (this,(MethodInfo *)0x0), bVar5 == 0)) {
          return 0;
        }
        return 1;
      }
      goto code_?;
    }
    if (iVar1 != 0x10) {
      return 0;
    }
    piVar6 = (int *)func_?(member,TypeInfo__System__Reflection__PropertyInfo);
    member = (MemberInfo_1 *)0x0;
    if (piVar6 != (int *)0x0) {
      cVar7 = (**(code **)(*piVar6 + 0x140))(piVar6,*(undefined4 *)(*piVar6 + 0x144));
      if (cVar7 == '\0') {
        return 0;
      }
      if (nonPublic != 0) {
        return 1;
      }
      iVar1 = (**(code **)(*piVar6 + 0x178))(piVar6,0,*(undefined4 *)(*piVar6 + 0x17c));
      return iVar1 != 0;
    }
  }
  func_?(0);
  pFVar4 = extraout_EDX;
code_?:
  func_?(member,pFVar4);
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Object CreateGeneric(Type, Type, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateGeneric
                   (Type *genericTypeDefinition,Type *innerType,Object__Array *args,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  innerTypes = (IList_1_System_Type_ *)func_?(TypeInfo__System__Type,1);
  if (innerTypes == (IList_1_System_Type_ *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if (innerType != (Type *)0x0) {
      iVar2 = func_?(innerType,(innerTypes->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (innerTypes[1].monitor != (MonitorData *)0x0) {
      bVar3 = cRam_? == '\0';
      innerTypes[2].klass = (IList_1_System_Type___Class *)innerType;
      if (bVar3) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache2 ==
          (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)0x0) {
        this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___CreateGeneric_m__2_System__Type__System__Collections__Generic__IList<System::Object>_
                   ,
                   MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache2 =
             (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)this;
      }
      pOVar4 = ReflectionUtils_CreateGeneric_2
                         (genericTypeDefinition,innerTypes,
                          TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->
                          __f__am_cache2,args,(MethodInfo *)0x0);
      return pOVar4;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Object CreateGeneric(Type, IList`1[System.Type], Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateGeneric_1
                   (Type *genericTypeDefinition,IList_1_System_Type_ *innerTypes,Object__Array *args
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache2 ==
      (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___CreateGeneric_m__2_System__Type__System__Collections__Generic__IList<System::Object>_
               ,
               MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache2 =
         (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)this;
  }
  pOVar1 = ReflectionUtils_CreateGeneric_2
                     (genericTypeDefinition,innerTypes,
                      TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->
                      __f__am_cache2,args,(MethodInfo *)0x0);
  return pOVar1;
}


/* Object CreateGeneric(Type, IList`1[System.Type],
   Func`3[Type,System.Collections.Generic.IList`1[System.Object],Object], Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateGeneric_2
                   (Type *genericTypeDefinition,IList_1_System_Type_ *innerTypes,
                   Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_
                   *instanceCreator,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_genericTypeDefinition;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (genericTypeDefinition == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_5
              ((ICollection_1_System_Type_ *)innerTypes,StringLiteral_innerTypes,
               void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
              );
    paramName = StringLiteral_createInstance;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (instanceCreator !=
        (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)0x0) {
      innerTypes_00 =
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)innerTypes,
                      System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                     );
      arg1 = ReflectionUtils_MakeGenericType
                       (genericTypeDefinition,(Type__Array *)innerTypes_00,(MethodInfo *)0x0);
      pOVar1 = System.Core.dll::System::Func`3[Type,System::Collections::Generic::IList`1[System::
               Object],Object]::
               Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object__Invoke
                         (instanceCreator,arg1,(IList_1_System_Object_ *)args,
                          MethodInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>__Invoke_System__Type__System__Collections__Generic__IList<System::Object>_
                         );
      return pOVar1;
    }
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  }
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object CreateInstance(Type, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateInstance(Type *type,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type != (Type *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?,unaff_EBP);
      cRam_? = '\x01';
    }
    activationAttributes = (Object__Array *)func_?(TypeInfo__System__Object,0,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__Reflection__Binder->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__System__Reflection__Binder->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Reflection__Binder);
    }
    binder = mscorlib.dll::System::Reflection::Binder::Binder_get_DefaultBinder((MethodInfo *)0x0);
    pOVar1 = mscorlib.dll::System::Activator::Activator_CreateInstance_3
                       (type,BindingFlags__Enum_Default,binder,args,(CultureInfo *)0x0,
                        activationAttributes,(MethodInfo *)0x0);
    return pOVar1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object CreateUnitializedValue(Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateUnitializedValue(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    cVar2 = (*(code *)(type->klass->vtable).get_IsGenericTypeDefinition.method)
                      (type,(type->klass->vtable).GetGenericTypeDefinition.methodPtr);
    if (cVar2 != '\0') goto code_?;
    bVar3 = mscorlib.dll::System::Type::Type_get_IsClass(type,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return (Object *)0x0;
    }
    bVar3 = mscorlib.dll::System::Type::Type_get_IsInterface(type,(MethodInfo *)0x0);
    handle = TypeRef__System__Void;
    if (bVar3 != 0) {
      return (Object *)0x0;
    }
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (type == pTVar4) {
      return (Object *)0x0;
    }
    bVar3 = mscorlib.dll::System::Type::Type_get_IsValueType(type,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pOVar5 = mscorlib.dll::System::Activator::Activator_CreateInstance(type,(MethodInfo *)0x0);
      return pOVar5;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar7 = (Object__Array *)func_?();
  func_?();
  func_?(pOVar7,type);
  func_?();
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral_Type__0__cannot_be_instantiated_,(IFormatProvider *)pCVar6,
                      pOVar7,(MethodInfo *)0x0);
  pAVar8 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (pAVar8,pSVar1,StringLiteral_type,(MethodInfo *)0x0);
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar7 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar7,0);
  func_?(pOVar7,type);
  func_?(0,type);
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral_Type__0__is_a_generic_type_defin,(IFormatProvider *)pCVar6,
                      pOVar7,(MethodInfo *)0x0);
  pAVar8 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (pAVar8,pSVar1,StringLiteral_type,(MethodInfo *)0x0);
  func_?();
  pcVar9 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar9)();
  return pOVar5;
}


/* Type EnsureNotNullableType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_EnsureNotNullableType(Type *t,MethodInfo *method)

{
  bVar1 = ReflectionUtils_IsNullableType(t,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return t;
  }
  pTVar2 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(t,(MethodInfo *)0x0);
  return pTVar2;
}


/* Nullable`1[Int32] GetAssemblyDelimiterIndex(String) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetAssemblyDelimiterIndex(String *fullyQualifiedTypeName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  index = 0;
  if (fullyQualifiedTypeName != (String *)0x0) {
    while( true ) {
      while( true ) {
        while( true ) {
          pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)fullyQualifiedTypeName,(MethodInfo *)0x0);
          if ((int)pIVar2 <= index) {
            NVar3.value = 0;
            NVar3.has_value = 0;
            NVar3._5_3_ = 0;
            return NVar3;
          }
          uVar4 = mscorlib.dll::System::String::String_get_Chars
                            (fullyQualifiedTypeName,index,(MethodInfo *)0x0);
          if (uVar4 != 0x5b) break;
          iVar1 = iVar1 + 1;
          index = index + 1;
        }
        if (uVar4 != 0x5d) break;
        iVar1 = iVar1 + -1;
        index = index + 1;
      }
      if ((uVar4 == 0x2c) && (iVar1 == 0)) break;
      index = index + 1;
    }
    NStack_5.value = 0;
    NStack_5.has_value = 0;
    NStack_5._5_3_ = 0;
    func_?(&NStack_5);
    return NStack_5;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  NVar3 = (Nullable_1_Int32_)(*pcVar6)();
  return NVar3;
}


/* Object GetAttribute[Object](ICustomAttributeProvider, Boolean) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetAttribute_1
                   (ICustomAttributeProvider *attributeProvider,bool inherit,MethodInfo *method)

{
  (*(code *)(*method->parameters)->data)(attributeProvider,_inherit,*method->parameters);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = (Object *)(*(code *)method->parameters[1]->data)();
  return pOVar1;
}


/* DescriptionAttribute GetAttribute[DescriptionAttribute](ICustomAttributeProvider) */

DescriptionAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttribute_2
          (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  pDVar1 = (DescriptionAttribute *)
           (*(code *)(*method->parameters)->data)(attributeProvider,1,*method->parameters);
  return pDVar1;
}


/* Object[] GetAttributes[Object](ICustomAttributeProvider, Boolean) */

Object__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttributes
          (ICustomAttributeProvider *attributeProvider,bool inherit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)attributeProvider,StringLiteral_attributeProvider,(MethodInfo *)0x0);
  pTVar1 = (Type *)attributeProvider;
  iVar2 = func_?(attributeProvider,TypeInfo__System__Type);
  if (iVar2 == 0) {
    iVar2 = func_?(attributeProvider,TypeInfo__System__Reflection__Assembly);
    if (iVar2 == 0) {
      iVar2 = func_?(attributeProvider,TypeInfo__System__Reflection__MemberInfo);
      if (iVar2 == 0) {
        iVar2 = func_?(attributeProvider,TypeInfo__System__Reflection__Module);
        if (iVar2 != 0) {
          RVar3.value = *method->parameters;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          element_00 = (Module *)
                       func_?(attributeProvider,TypeInfo__System__Reflection__Module);
          mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_2
                    (element_00,pTVar1,(bool)_inherit,method_00);
          if ((method->parameters[1][0x17].type & 1) == 0) {
            func_?();
          }
          pOVar4 = (Object__Array *)func_?();
          return pOVar4;
        }
        iVar2 = func_?(attributeProvider,TypeInfo__System__Reflection__ParameterInfo);
        RVar3.value = *method->parameters;
        if (iVar2 != 0) {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
          inherit_00 = 0x7a;
          element = (ParameterInfo *)
                    func_?(attributeProvider,TypeInfo__System__Reflection__ParameterInfo,
                                    pTVar5,_inherit,0);
          pAVar6 = mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_1
                             (element,pTVar1,inherit_00,(MethodInfo *)attributeProvider);
code_?:
          uVar7 = func_?(method->parameters[1]);
          pOVar4 = (Object__Array *)func_?(pAVar6,uVar7);
          return pOVar4;
        }
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
        if (attributeProvider != (ICustomAttributeProvider *)0x0) {
          pIVar8 = attributeProvider->klass;
          uVar9 = 0;
          uVar10._0_1_ = (pIVar8->_1).rank;
          uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
          if (uVar10 != 0) {
            do {
              if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Reflection__ICustomAttributeProvider) {
                ppMVar11 = &(&(attributeProvider->klass->vtable).GetCustomAttributes)
                           [attributeProvider->klass->interfaceOffsets[uVar9].offset].method;
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          ppMVar11 = (MethodInfo **)
                    func_?(attributeProvider,
                                    TypeInfo__System__Reflection__ICustomAttributeProvider,0,0);
code_?:
          pAVar6 = (Attribute__Array *)
                   (*(code *)*ppMVar11)(attributeProvider,_inherit,_inherit,ppMVar11[1]);
          goto code_?;
        }
        goto code_?;
      }
      RVar3.value = *method->parameters;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
      RVar3.value = TypeInfo__System__Reflection__MemberInfo;
      if (attributeProvider == (ICustomAttributeProvider *)0x0) {
        element_01 = (MemberInfo_1 *)0x0;
      }
      else {
        element_01 = (MemberInfo_1 *)
                     func_?(attributeProvider,TypeInfo__System__Reflection__MemberInfo);
        if (element_01 == (MemberInfo_1 *)0x0) goto code_?;
      }
      attributeProvider =
           (ICustomAttributeProvider *)
           mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_3
                     (element_01,pTVar1,inherit,(MethodInfo *)0x0);
    }
    else {
      RVar3.value = *method->parameters;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
      RVar3.value = TypeInfo__System__Reflection__Assembly;
      if (attributeProvider == (ICustomAttributeProvider *)0x0) {
        attributeProvider =
             (ICustomAttributeProvider *)
             mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes
                       ((Assembly *)0x0,pTVar1,inherit,(MethodInfo *)0x0);
      }
      else {
        element_02 = (Assembly *)
                     func_?(attributeProvider,TypeInfo__System__Reflection__Assembly);
        if (element_02 == (Assembly *)0x0) goto code_?;
        attributeProvider =
             (ICustomAttributeProvider *)
             mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes
                       (element_02,pTVar1,inherit,(MethodInfo *)0x0);
      }
    }
  }
  else {
    RVar3.value = *method->parameters;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
    RVar3.value = TypeInfo__System__Type;
    if (attributeProvider == (ICustomAttributeProvider *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    iVar2 = func_?(attributeProvider,TypeInfo__System__Type);
    pTVar12 = TypeInfo__System__Type;
    if ((iVar2 == 0) ||
       (piVar13 = (int *)func_?(attributeProvider,TypeInfo__System__Type),
       RVar3.value = pTVar12, piVar13 == (int *)0x0)) goto code_?;
    attributeProvider =
         (ICustomAttributeProvider *)
         (**(code **)(*piVar13 + 0x128))(piVar13,pTVar1,_inherit,*(undefined4 *)(*piVar13 + 300));
  }
  RVar3.value = method->parameters[1];
  if (((uint)(((Type__Class *)RVar3.value)->vtable).Equals.methodPtr & 0x10000) == 0) {
    func_?();
  }
  if ((Attribute__Array *)attributeProvider == (Attribute__Array *)0x0) {
    return (Object__Array *)0x0;
  }
  pOVar4 = (Object__Array *)func_?();
  if (pOVar4 != (Object__Array *)0x0) {
    return pOVar4;
  }
code_?:
  func_?(attributeProvider,RVar3.value);
  pcVar14 = (code *)swi(3);
  pOVar4 = (Object__Array *)(*pcVar14)();
  return pOVar4;
}


/* Void GetChildPrivateFields(IList`1[System.Reflection.MemberInfo], Type, BindingFlags) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_GetChildPrivateFields
               (IList_1_System_Reflection_MemberInfo_ *initialFields,Type *targetType,
               BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((bindingAttr & BindingFlags__Enum_NonPublic) != BindingFlags__Enum_Default) {
    if ((bindingAttr & BindingFlags__Enum_Public) != BindingFlags__Enum_Default) {
      bindingAttr = bindingAttr ^ BindingFlags__Enum_Public;
    }
    if (targetType == (Type *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    while (targetType = (Type *)(*(code *)(targetType->klass->vtable).__unknown_7.method)
                                          (targetType,
                                           (targetType->klass->vtable).__unknown_8.methodPtr),
          targetType != (Type *)0x0) {
      pIVar2 = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
               (*(code *)(targetType->klass->vtable).__unknown_16.method)
                         (targetType,bindingAttr,(targetType->klass->vtable).GetMember.methodPtr);
      if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache4 ==
          (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
        this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateFields_m__4_System__Reflection__FieldInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::FieldInfo,_bool>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache4 =
             (Func_2_System_Reflection_FieldInfo_Boolean_ *)this;
      }
      pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         (pIVar2,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                  *)TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->
                                    static_fields->__f__am_cache4,
                          System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                         );
      collection = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                             ((IEnumerable *)pIVar2,
                              System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                             );
      CollectionUtils::CollectionUtils_AddRange_4
                (initialFields,(IEnumerable_1_System_Reflection_MemberInfo_ *)collection,
                 void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Reflection::MemberInfo>_System__Collections__Generic__IList<System::Reflection::MemberInfo>__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                );
    }
  }
  return;
}


/* Void GetChildPrivateProperties(IList`1[System.Reflection.PropertyInfo], Type, BindingFlags) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_GetChildPrivateProperties
               (IList_1_System_Reflection_PropertyInfo_ *initialProperties,Type *targetType,
               BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((bindingAttr & BindingFlags__Enum_NonPublic) != BindingFlags__Enum_Default) {
    if ((bindingAttr & BindingFlags__Enum_Public) != BindingFlags__Enum_Default) {
      bindingAttr = bindingAttr ^ BindingFlags__Enum_Public;
    }
    if (targetType == (Type *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    while (targetType = (Type *)(*(code *)(targetType->klass->vtable).__unknown_7.method)
                                          (targetType,
                                           (targetType->klass->vtable).__unknown_8.methodPtr),
          targetType != (Type *)0x0) {
      iVar2 = (*(code *)(targetType->klass->vtable).__unknown_20.method)
                        (targetType,bindingAttr,(targetType->klass->vtable).GetProperty.methodPtr);
      iVar3 = 0;
      while( true ) {
        if (iVar2 == 0) goto code_?;
        if (*(int *)(iVar2 + 0xc) <= iVar3) break;
        pvVar4 = (void *)func_?(iVar3);
        method_00 = (MethodInfo *)&UNK_?;
        this = (ScaleAnimationBase *)
               func_?(
                              TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateProperties_c__AnonStorey1
                              );
        ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,method_00);
        if (this == (ScaleAnimationBase *)0x0) goto code_?;
        (this->fields)._._._._.m_CachedPtr = pvVar4;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<System::Reflection::PropertyInfo,_bool>)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateProperties_c__AnonStorey1____m__0_System__Reflection__PropertyInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::PropertyInfo,_bool>__Func_System__Object__void__
                  );
        iVar5 = CollectionUtils::CollectionUtils_IndexOf_4
                          ((IEnumerable_1_System_Reflection_PropertyInfo_ *)initialProperties,
                           (Func_2_System_Reflection_PropertyInfo_Boolean_ *)this_00,
                           int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<System::Reflection::PropertyInfo>_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>__System__Func<System::Reflection::PropertyInfo,_bool>_
                          );
        if (initialProperties == (IList_1_System_Reflection_PropertyInfo_ *)0x0)
        goto code_?;
        if (iVar5 == -1) {
          func_?(2,
                          TypeInfo__System__Collections__Generic__ICollection<System::Reflection::PropertyInfo>
                          ,initialProperties,(this->fields)._._._._.m_CachedPtr);
          iVar3 = iVar3 + 1;
        }
        else {
          func_?(4,
                          TypeInfo__System__Collections__Generic__IList<System::Reflection::PropertyInfo>
                          ,initialProperties,iVar5);
          iVar3 = iVar3 + 1;
        }
      }
    }
  }
  return;
}


/* Type GetCollectionItemType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetCollectionItemType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  pTVar2 = (Type *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar4 = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    pSVar1 = StringUtils::StringUtils_FormatWith
                       (StringLiteral_Type__0__is_not_a_collection_,(IFormatProvider *)pCVar3,pOVar4
                        ,(MethodInfo *)0x0);
    pIVar5 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar5,pSVar1,(MethodInfo *)0x0);
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
              ((MVSimpleOneSeatVehicle *)type,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Collections__Generic__IEnumerable;
    if (extraout_AL != '\0') {
      pTVar2 = (Type *)(*(code *)(type->klass->vtable).__unknown_12.method)
                                  (type,(type->klass->vtable).__unknown_13.methodPtr);
      return pTVar2;
    }
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    bVar7 = ReflectionUtils_ImplementsGenericDefinition_1
                      (type,genericInterfaceDefinition,(Type **)&stack0xfffffff8,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Collections__IEnumerable;
    if (bVar7 == 0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      if (pTVar2 == (Type *)0x0) goto code_?;
      cVar8 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)();
      if (cVar8 != '\0') {
        return (Type *)0x0;
      }
      goto code_?;
    }
    if (pTVar2 == (Type *)0x0) goto code_?;
    cVar8 = (*(code *)(pTVar2->klass->vtable).get_IsGenericTypeDefinition.method)();
    if (cVar8 == '\0') {
      iVar9 = (*(code *)(pTVar2->klass->vtable).GetGenericArguments.method)();
      if (iVar9 == 0) goto code_?;
      if (*(int *)(iVar9 + 0xc) != 0) {
        return *(Type **)(iVar9 + 0x10);
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar4 = (Object__Array *)func_?();
  func_?();
  func_?(pOVar4);
  func_?();
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral_Type__0__is_not_a_collection_,(IFormatProvider *)pCVar3,pOVar4,
                      (MethodInfo *)0x0);
  pIVar5 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar5,pSVar1,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar10)();
  return pTVar2;
}


/* ConstructorInfo GetDefaultConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetDefaultConstructor(Type *t,MethodInfo *method)

{
  pCVar1 = ReflectionUtils_GetDefaultConstructor_1(t,0,(MethodInfo *)0x0);
  return pCVar1;
}


/* ConstructorInfo GetDefaultConstructor(Type, Boolean) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetDefaultConstructor_1(Type *t,bool nonPublic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  types = (Type__Array *)func_?(TypeInfo__System__Type,0);
  if (t != (Type *)0x0) {
    pCVar1 = mscorlib.dll::System::Type::Type_GetConstructor_1
                       (t,(uint)nonPublic * 0x20 + BindingFlags__Enum_Public |
                          BindingFlags__Enum_Instance,(Binder *)0x0,types,
                        (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
    return pCVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pCVar1 = (ConstructorInfo *)(*pcVar2)();
  return pCVar1;
}


/* Type GetDictionaryKeyType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetDictionaryKeyType(Type *dictionaryType,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  pTStack_2 = (Type *)0x0;
  ReflectionUtils_GetDictionaryKeyValueTypes(dictionaryType,&pTStack_1,&pTStack_2,(MethodInfo *)0x0)
  ;
  return pTStack_1;
}


/* Void GetDictionaryKeyValueTypes(Type, Type ByRef, Type ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_GetDictionaryKeyValueTypes
               (Type *dictionaryType,Type **keyType,Type **valueType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  pTVar2 = (Type *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar3 = TypeRef__System__Collections__Generic__IDictionary;
  if (dictionaryType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar5 = (Object__Array *)func_?();
    func_?();
    func_?(pOVar5);
    func_?();
    pSVar1 = StringUtils::StringUtils_FormatWith
                       (StringLiteral_Type__0__is_not_a_dictionary_,(IFormatProvider *)pCVar4,pOVar5
                        ,(MethodInfo *)0x0);
    pIVar6 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar6,pSVar1,(MethodInfo *)0x0);
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    bVar7 = ReflectionUtils_ImplementsGenericDefinition_1
                      (dictionaryType,genericInterfaceDefinition,(Type **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    pIVar3 = TypeRef__System__Collections__IDictionary;
    if (bVar7 == 0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
      if (pTVar2 == (Type *)0x0) goto code_?;
      pIVar8 = (pTVar2->klass->vtable).IsInstanceOfType.methodPtr;
      cVar9 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)();
      if (cVar9 != '\0') {
        *(undefined4 *)pIVar8 = 0;
        *valueType = (Type *)0x0;
        return;
      }
      goto code_?;
    }
    if (pTVar2 == (Type *)0x0) goto code_?;
    cVar9 = (*(code *)(pTVar2->klass->vtable).get_IsGenericTypeDefinition.method)();
    if (cVar9 == '\0') {
      iVar10 = (*(code *)(pTVar2->klass->vtable).GetGenericArguments.method)();
      if (iVar10 == 0) goto code_?;
      if (*(int *)(iVar10 + 0xc) == 0) goto code_?;
      *keyType = *(Type **)(iVar10 + 0x10);
      if (1 < *(uint *)(iVar10 + 0xc)) {
        *valueType = *(Type **)(iVar10 + 0x14);
        return;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar5 = (Object__Array *)func_?();
  func_?(pOVar5);
  func_?(pOVar5,dictionaryType);
  func_?();
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral_Type__0__is_not_a_dictionary_,(IFormatProvider *)pCVar4,pOVar5,
                      (MethodInfo *)0x0);
  pIVar6 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar6,pSVar1,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Type GetDictionaryValueType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetDictionaryValueType(Type *dictionaryType,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  pTStack_2 = (Type *)0x0;
  ReflectionUtils_GetDictionaryKeyValueTypes(dictionaryType,&pTStack_1,&pTStack_2,(MethodInfo *)0x0)
  ;
  return pTStack_2;
}


/* IEnumerable`1[System.Reflection.FieldInfo] GetFields(Type, BindingFlags) */

IEnumerable_1_System_Reflection_FieldInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetFields
          (Type *targetType,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_targetType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (targetType != (Type *)0x0) {
    collection = (IEnumerable_1_VoxelHit_ *)
                 (*(code *)(targetType->klass->vtable).__unknown_16.method)
                           (targetType,bindingAttr,(targetType->klass->vtable).GetMember.methodPtr);
    this = (List_1_VoxelHit_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>
                          );
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this,collection,
               MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
              );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((bindingAttr & BindingFlags__Enum_NonPublic) != BindingFlags__Enum_Default) {
      if ((bindingAttr & BindingFlags__Enum_Public) != BindingFlags__Enum_Default) {
        bindingAttr = bindingAttr ^ BindingFlags__Enum_Public;
      }
      while( true ) {
        targetType = (Type *)(*(code *)(targetType->klass->vtable).__unknown_7.method)
                                       (targetType,(targetType->klass->vtable).__unknown_8.methodPtr
                                       );
        if (targetType == (Type *)0x0) break;
        pIVar1 = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                 (*(code *)(targetType->klass->vtable).__unknown_16.method)
                           (targetType,bindingAttr,(targetType->klass->vtable).GetMember.methodPtr);
        if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache4 ==
            (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
          this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_00,(Object *)0x0,
                     MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateFields_m__4_System__Reflection__FieldInfo_
                     ,
                     MethodInfo__System__Func<System::Reflection::FieldInfo,_bool>__Func_System__Object__void__
                    );
          TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache4 =
               (Func_2_System_Reflection_FieldInfo_Boolean_ *)this_00;
        }
        pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                           (pIVar1,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                    *)TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->
                                      static_fields->__f__am_cache4,
                            System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                           );
        pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                           ((IEnumerable *)pIVar1,
                            System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                           );
        CollectionUtils::CollectionUtils_AddRange_4
                  ((IList_1_System_Reflection_MemberInfo_ *)this,
                   (IEnumerable_1_System_Reflection_MemberInfo_ *)pIVar2,
                   void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Reflection::MemberInfo>_System__Collections__Generic__IList<System::Reflection::MemberInfo>__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                  );
      }
    }
    pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                       ((IEnumerable *)this,
                        System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::FieldInfo>_System__Collections__IEnumerable_
                       );
    return (IEnumerable_1_System_Reflection_FieldInfo_ *)pIVar2;
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar3 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_System_Reflection_FieldInfo_ *)(*pcVar3)();
  return pIVar4;
}


/* List`1[System.Reflection.MemberInfo] GetFieldsAndProperties(Type, BindingFlags) */

List_1_System_Reflection_MemberInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetFieldsAndProperties(Type *type,BindingFlags__Enum bindingAttr,MethodInfo *method)

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
  method_00 = 
  TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetFieldsAndProperties_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = (void *)bindingAttr;
    this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__
              );
    collection = ReflectionUtils_GetFields
                           (type,(BindingFlags__Enum)(this->fields)._._._._.m_CachedPtr,
                            (MethodInfo *)0x0);
    CollectionUtils::CollectionUtils_AddRange
              ((IList *)this_00,(IEnumerable *)collection,(MethodInfo *)0x0);
    collection_00 =
         ReflectionUtils_GetProperties
                   (type,(BindingFlags__Enum)(this->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0);
    CollectionUtils::CollectionUtils_AddRange
              ((IList *)this_00,(IEnumerable *)collection_00,(MethodInfo *)0x0);
    if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__get_Count__
                         );
      this_01 = (List_1_VoxelHit_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
      List_1_ThemeAttributes_ThemeAttribute___ctor
                ((List_1_ThemeAttributes_ThemeAttribute_ *)this_01,(int32_t)pOVar4,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_int_
                );
      if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache0 ==
          (Func_2_System_Reflection_MemberInfo_String_ *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Func<System::Reflection::MemberInfo,_System::String>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetFieldsAndProperties_m__0_System__Reflection__MemberInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::MemberInfo,_System::String>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache0 =
             (Func_2_System_Reflection_MemberInfo_String_ *)pUVar5;
      }
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                         ((IOrderedEnumerable_1_System_Object_ *)this_00,
                          (Func_2_Object_Int64_ *)
                          TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->
                          __f__am_cache0,
                          System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>_MethodInfo__System__Linq__Enumerable__GroupBy<System::Reflection::MemberInfo,_System::String>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_System::String>_
                         );
      if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache1 ==
          (Func_2_System_Linq_IGrouping_2_System_String_System_Reflection_MemberInfo_AnonType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
           *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,_____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetFieldsAndProperties_m__1_System__Linq__IGrouping<System::String,_System::Reflection::MemberInfo>_
                   ,
                   MethodInfo__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,_____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache1 =
             (Func_2_System_Linq_IGrouping_2_System_String_System_Reflection_MemberInfo_AnonType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
              *)pUVar5;
      }
      pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                         ((IEnumerable_1_System_Object_ *)source,
                          (Func_2_Object_Single_ *)
                          TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->
                          __f__am_cache1,
                          System__Collections__Generic__IEnumerable<____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_MethodInfo__System__Linq__Enumerable__Select<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,_____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,_____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_
                         );
      if (pIVar6 != (IEnumerable_1_System_Single_ *)0x0) {
        piVar7 = (int *)func_?(0);
        uStack_1 = 0;
        while (piVar7 != (int *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            if (piVar7 != (int *)0x0) {
              func_?();
            }
            *unaff_FS_OFFSET = uStack_3;
            return (List_1_System_Reflection_MemberInfo_ *)this_01;
          }
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar7 + 0xb6);
          if (uVar10 != 0) {
            iVar11 = *(int *)(*piVar7 + 0x58);
            do {
              if (*(IEnumerator_1_AnonType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo___Class
                    **)(iVar11 + (uint)uVar9 * 8) ==
                  TypeInfo__System__Collections__Generic__IEnumerator<____AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                 ) {
                puVar12 = (undefined4 *)
                          (*piVar7 + (*(int *)(iVar11 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar12 = (undefined4 *)func_?();
code_?:
          this_02 = (Collection_1_VoxelHit_ *)(*(code *)*puVar12)();
          if (this_02 == (Collection_1_VoxelHit_ *)0x0) break;
          pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              (this_02,
                               MethodInfo______AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>__get_Count__
                              );
          if (pIVar13 == (IList_1_VoxelHit_ *)0x1) {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                                MethodInfo______AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>__get_Members__
                               );
            item = System.Core.dll::System::Linq::Enumerable::Enumerable_First_4
                             ((IEnumerable_1_System_Reflection_MemberInfo_ *)pOVar4,
                              System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__First<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                             );
            if (this_01 == (List_1_VoxelHit_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                       MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
                      );
          }
          else {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                                MethodInfo______AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>__get_Members__
                               );
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Func<System::Reflection::MemberInfo,_bool>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,
                       MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetFieldsAndProperties_c__AnonStorey0____m__0_System__Reflection__MemberInfo_
                       ,
                       MethodInfo__System__Func<System::Reflection::MemberInfo,_bool>__Func_System__Object__void__
                      );
            collection_01 =
                 System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                           ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pOVar4,
                            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                             *)pUVar5,
                            System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                           );
            if (this_01 == (List_1_VoxelHit_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                      (this_01,(IEnumerable_1_VoxelHit_ *)collection_01,
                       MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__AddRange_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                      );
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pLVar15 = (List_1_System_Reflection_MemberInfo_ *)(*pcVar14)();
  return pLVar15;
}


/* List`1[System.Reflection.MemberInfo] GetFieldsAndProperties[Object](BindingFlags) */

List_1_System_Reflection_MemberInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetFieldsAndProperties_1(BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pLVar1 = ReflectionUtils_GetFieldsAndProperties(type,bindingAttr,(MethodInfo *)0x0);
  return pLVar1;
}


/* MemberInfo GetMemberInfoFromType(Type, MemberInfo) */

MemberInfo_1 *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetMemberInfoFromType(Type *targetType,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    iVar1 = (*(code *)(memberInfo->klass->vtable).__unknown_1.method)
                      (memberInfo,(memberInfo->klass->vtable).__unknown_2.methodPtr);
    pMVar2 = memberInfo->klass;
    if (iVar1 == 0x10) {
      bVar3 = (TypeInfo__System__Reflection__PropertyInfo->_1).naturalAligment;
      if (((pMVar2->_1).naturalAligment < bVar3) ||
         ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar5 = (MemberInfo_1 *)0x0;
      if (bVar4) {
        pMVar5 = memberInfo;
      }
      pPVar6 = TypeInfo__System__Reflection__PropertyInfo;
      if (pMVar5 == (MemberInfo_1 *)0x0) goto code_?;
      source = (IEnumerable_1_System_Object_ *)
               (*(code *)pMVar5->klass[1]._0.klass)(pMVar5,pMVar5->klass[1]._0.fields);
      if (TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache3 ==
          (Func_2_System_Reflection_ParameterInfo_Type_ *)0x0) {
        this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Func<System::Reflection::ParameterInfo,_System::Type>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetMemberInfoFromType_m__3_System__Reflection__ParameterInfo_
                   ,
                   MethodInfo__System__Func<System::Reflection::ParameterInfo,_System::Type>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->static_fields->__f__am_cache3 =
             (Func_2_System_Reflection_ParameterInfo_Type_ *)this;
      }
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                            (source,(Func_2_Object_Single_ *)
                                    TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils->
                                    static_fields->__f__am_cache3,
                             System__Collections__Generic__IEnumerable<System::Type>_MethodInfo__System__Linq__Enumerable__Select<System::Reflection::ParameterInfo,_System::Type>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Type>_
                            );
      memberInfo = (MemberInfo_1 *)
                   System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                             ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source_00
                              ,
                              System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                             );
      name = (String *)
             (*(code *)(pMVar5->klass->vtable).__unknown_2.method)
                       (pMVar5,(pMVar5->klass->vtable).__unknown_3.methodPtr);
      returnType = (Type *)(**(code **)&pMVar5->klass[1]._0.this_arg.attrs)
                                     (pMVar5,pMVar5->klass[1]._0.element_class);
      if (targetType != (Type *)0x0) {
        pPVar7 = mscorlib.dll::System::Type::Type_GetProperty_4
                           (targetType,name,
                            BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                            BindingFlags__Enum_Static|BindingFlags__Enum_Instance,(Binder *)0x0,
                            returnType,(Type__Array *)memberInfo,(ParameterModifier__Array *)0x0,
                            (MethodInfo *)0x0);
        return (MemberInfo_1 *)pPVar7;
      }
    }
    else {
      uVar8 = (*(code *)(pMVar2->vtable).__unknown_2.method)
                        (memberInfo,(pMVar2->vtable).__unknown_3.methodPtr);
      uVar9 = (*(code *)(memberInfo->klass->vtable).__unknown_1.method)
                        (memberInfo,(memberInfo->klass->vtable).__unknown_2.methodPtr);
      if (targetType != (Type *)0x0) {
        source_01 = (IEnumerable_1_System_Reflection_MemberInfo_ *)
                    (*(code *)(targetType->klass->vtable).GetMember_1.method)
                              (targetType,uVar8,uVar9,0x3c,
                               (targetType->klass->vtable).GetMethod.methodPtr);
        pMVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_5
                           (source_01,
                            System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                           );
        return pMVar5;
      }
    }
  }
  func_?(0);
  pPVar6 = extraout_EDX;
code_?:
  func_?(memberInfo,pPVar6);
  pcVar10 = (code *)swi(3);
  pMVar5 = (MemberInfo_1 *)(*pcVar10)();
  return pMVar5;
}


/* Type GetMemberUnderlyingType(MemberInfo) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetMemberUnderlyingType(MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_member;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (member == (MemberInfo_1 *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    iVar1 = (*(code *)(member->klass->vtable).__unknown_1.method)
                      (member,(member->klass->vtable).__unknown_2.methodPtr);
    if (iVar1 == 2) {
      iVar1 = func_?(member,TypeInfo__System__Reflection__EventInfo);
      if (iVar1 != 0) {
        method_00 = (MethodInfo *)0x0;
        this = (EventInfo_1 *)func_?(member,TypeInfo__System__Reflection__EventInfo);
        pTVar2 = mscorlib.dll::System::Reflection::EventInfo::EventInfo_1_get_EventHandlerType
                           (this,method_00);
        return pTVar2;
      }
      goto code_?;
    }
    if ((iVar1 != 3) && (iVar1 == 4)) {
      iVar1 = func_?(member,TypeInfo__System__Reflection__FieldInfo);
      if (iVar1 != 0) {
        piVar3 = (int *)func_?(member,TypeInfo__System__Reflection__FieldInfo);
        pTVar2 = (Type *)(**(code **)(*piVar3 + 0x140))(piVar3,*(undefined4 *)(*piVar3 + 0x144));
        return pTVar2;
      }
      goto code_?;
    }
    if (iVar1 == 0x10) {
      iVar1 = func_?(member,TypeInfo__System__Reflection__PropertyInfo);
      if (iVar1 != 0) {
        piVar3 = (int *)func_?(member,TypeInfo__System__Reflection__PropertyInfo);
        pTVar2 = (Type *)(**(code **)(*piVar3 + 0x148))(piVar3,*(undefined4 *)(*piVar3 + 0x14c));
        return pTVar2;
      }
      goto code_?;
    }
  }
  this_01 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_01,StringLiteral_MemberInfo_must_be_of_type_Field,StringLiteral_member,
             (MethodInfo *)0x0);
  func_?(this_01,0);
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar4)();
  return pTVar2;
}


/* Object GetMemberValue(MemberInfo, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetMemberValue(MemberInfo_1 *member,Object *target,MethodInfo *method)

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
  pSVar4 = StringLiteral_member;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar5 = StringLiteral_target;
  if (member == (MemberInfo_1 *)0x0) {
code_?:
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar4,(MethodInfo *)0x0);
    func_?();
    pFVar6 = extraout_EDX;
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pSVar4 = pSVar5;
    if (target == (Object *)0x0) goto code_?;
    iVar7 = (*(code *)(member->klass->vtable).__unknown_1.method)
                      (member,(member->klass->vtable).__unknown_2.methodPtr);
    if (iVar7 != 4) {
      if (iVar7 != 0x10) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        args = (Object__Array *)func_?(TypeInfo__System__Object,2);
        pCVar8 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        func_?(args,0);
        func_?(args,pCVar8);
        func_?();
        func_?(member,0);
        uVar9 = func_?(8,member);
        func_?(args,0);
        func_?(args,uVar9);
        func_?(1,uVar9);
        pSVar4 = StringUtils::StringUtils_FormatWith
                            (StringLiteral_MemberInfo___0___is_not_of_type_,
                             (IFormatProvider *)provider,args,(MethodInfo *)0x0);
        this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
        mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
                  (this_00,pSVar4,StringLiteral_member,(MethodInfo *)0x0);
        func_?();
        pcVar10 = (code *)swi(3);
        pOVar11 = (Object *)(*pcVar10)();
        return pOVar11;
      }
      uStack_1 = 0;
      iVar7 = func_?(member,TypeInfo__System__Reflection__PropertyInfo);
      if (iVar7 != 0) {
        piVar12 = (int *)func_?(member,TypeInfo__System__Reflection__PropertyInfo);
        pOVar11 = (Object *)
                 (**(code **)(*piVar12 + 0x180))(piVar12,target,0,*(undefined4 *)(*piVar12 + 0x184));
        *unaff_FS_OFFSET = uStack_3;
        return pOVar11;
      }
      goto code_?;
    }
    pMVar13 = member->klass;
    bVar14 = (TypeInfo__System__Reflection__FieldInfo->_1).naturalAligment;
    if (((pMVar13->_1).naturalAligment < bVar14) ||
       (bVar15 = true,
       (pMVar13->_1).typeHierarchy[bVar14 - 1] !=
       (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
      bVar15 = false;
    }
    pMVar16 = (MemberInfo_1 *)0x0;
    if (bVar15) {
      pMVar16 = member;
    }
    pFVar6 = TypeInfo__System__Reflection__FieldInfo;
    if (pMVar16 != (MemberInfo_1 *)0x0) {
      if (((pMVar13->_1).naturalAligment < bVar14) ||
         ((pMVar13->_1).typeHierarchy[bVar14 - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pMVar16 = (MemberInfo_1 *)0x0;
      if (bVar15) {
        pMVar16 = member;
      }
      if (pMVar16 != (MemberInfo_1 *)0x0) {
        pOVar11 = (Object *)
                 (**(code **)&pMVar16->klass[1]._0.this_arg.attrs)
                           (pMVar16,target,pMVar16->klass[1]._0.element_class);
        *unaff_FS_OFFSET = uStack_3;
        return pOVar11;
      }
    }
  }
  func_?(member,pFVar6);
code_?:
  func_?(0);
  return (Object *)&UNK_?;
}


/* String GetNameAndAssessmblyName(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetNameAndAssessmblyName(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t == (Type *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    pSVar1 = (String *)
             (*(code *)(t->klass->vtable).__unknown_8.method)
                       (t,(t->klass->vtable).get_HasElementType.methodPtr);
    piVar2 = (int *)(*(code *)(t->klass->vtable).__unknown_5.method)
                              (t,(t->klass->vtable).__unknown_6.methodPtr);
    if (piVar2 != (int *)0x0) {
      this = (Collection_1_VoxelHit_ *)
             (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
      if (this != (Collection_1_VoxelHit_ *)0x0) {
        str2 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar1,::StringLiteral___,str2,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Type GetObjectType(Object) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetObjectType(Object *v,MethodInfo *method)

{
  if (v == (Object *)0x0) {
    return (Type *)0x0;
  }
  pTVar1 = (Type *)func_?(v);
  return pTVar1;
}


/* IEnumerable`1[System.Reflection.PropertyInfo] GetProperties(Type, BindingFlags) */

IEnumerable_1_System_Reflection_PropertyInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetProperties
          (Type *targetType,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_targetType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (targetType == (Type *)0x0) {
    this_02 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    func_?(this_02,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    collection = (IEnumerable_1_VoxelHit_ *)
                 (*(code *)(targetType->klass->vtable).__unknown_20.method)
                           (targetType,bindingAttr,(targetType->klass->vtable).GetProperty.methodPtr
                           );
    this = (List_1_VoxelHit_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>
                          );
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this,collection,
               MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>_
              );
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((bindingAttr & BindingFlags__Enum_NonPublic) != BindingFlags__Enum_Default) {
      pTVar1 = targetType;
      if ((bindingAttr & BindingFlags__Enum_Public) != BindingFlags__Enum_Default) {
        bindingAttr = bindingAttr ^ BindingFlags__Enum_Public;
      }
      while (pTVar1 = (Type *)(*(code *)(pTVar1->klass->vtable).__unknown_7.method)
                                        (pTVar1,(pTVar1->klass->vtable).__unknown_8.methodPtr),
            pTVar1 != (Type *)0x0) {
        iVar2 = (*(code *)(pTVar1->klass->vtable).__unknown_20.method)
                          (pTVar1,bindingAttr,(pTVar1->klass->vtable).GetProperty.methodPtr);
        iVar3 = 0;
        while( true ) {
          if (iVar2 == 0) goto code_?;
          if (*(int *)(iVar2 + 0xc) <= iVar3) break;
          pvVar4 = (void *)func_?(iVar3);
          method_00 = (MethodInfo *)&UNK_?;
          this_00 = (ScaleAnimationBase *)
                    func_?(
                                   TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateProperties_c__AnonStorey1
                                   );
          ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
          if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
          (this_00->fields)._._._._.m_CachedPtr = pvVar4;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__System__Func<System::Reflection::PropertyInfo,_bool>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils___GetChildPrivateProperties_c__AnonStorey1____m__0_System__Reflection__PropertyInfo_
                     ,
                     MethodInfo__System__Func<System::Reflection::PropertyInfo,_bool>__Func_System__Object__void__
                    );
          iVar5 = CollectionUtils::CollectionUtils_IndexOf_4
                            ((IEnumerable_1_System_Reflection_PropertyInfo_ *)this,
                             (Func_2_System_Reflection_PropertyInfo_Boolean_ *)this_01,
                             int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<System::Reflection::PropertyInfo>_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>__System__Func<System::Reflection::PropertyInfo,_bool>_
                            );
          if (this == (List_1_VoxelHit_ *)0x0) goto code_?;
          if (iVar5 == -1) {
            func_?(2,
                            TypeInfo__System__Collections__Generic__ICollection<System::Reflection::PropertyInfo>
                            ,this,(this_00->fields)._._._._.m_CachedPtr);
            iVar3 = iVar3 + 1;
          }
          else {
            func_?(4,
                            TypeInfo__System__Collections__Generic__IList<System::Reflection::PropertyInfo>
                            ,this,iVar5);
            iVar3 = iVar3 + 1;
          }
        }
      }
    }
    iVar2 = 0;
    if (this != (List_1_VoxelHit_ *)0x0) {
      while( true ) {
        pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                            MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Count__
                           );
        if ((int)pOVar6 <= iVar2) {
          return (IEnumerable_1_System_Reflection_PropertyInfo_ *)this;
        }
        pMVar7 = (MemberInfo_1 *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this,iVar2,
                            MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Item_int_
                           );
        if (pMVar7 == (MemberInfo_1 *)0x0) break;
        pTVar1 = (Type *)(*(code *)(pMVar7->klass->vtable).__unknown.method)(pMVar7);
        if (pTVar1 != targetType) {
          pTVar1 = (Type *)func_?(6,pMVar7);
          pMVar7 = ReflectionUtils_GetMemberInfoFromType(pTVar1,pMVar7,(MethodInfo *)0x0);
          value = (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)
                  func_?(pMVar7,TypeInfo__System__Reflection__PropertyInfo);
          mscorlib.dll::System::Collections::Generic::
          List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
          List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                    ((List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)this
                     ,iVar2,value,
                     MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__set_Item_int__System__Reflection__PropertyInfo_
                    );
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pIVar9 = (IEnumerable_1_System_Reflection_PropertyInfo_ *)(*pcVar8)();
  return pIVar9;
}


/* String GetTypeName(Type, FormatterAssemblyStyle) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetTypeName
                   (Type *t,FormatterAssemblyStyle__Enum assemblyFormat,MethodInfo *method)

{
  pSVar1 = ReflectionUtils_GetTypeName_1
                     (t,assemblyFormat,(SerializationBinder *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetTypeName(Type, FormatterAssemblyStyle, SerializationBinder) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetTypeName_1
                   (Type *t,FormatterAssemblyStyle__Enum assemblyFormat,SerializationBinder *binder,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    this = (Collection_1_VoxelHit_ *)
           (*(code *)(t->klass->vtable).__unknown_6.method)
                     (t,(t->klass->vtable).get_Attributes.methodPtr);
    if (assemblyFormat != FormatterAssemblyStyle__Enum_Simple) {
      if (assemblyFormat == FormatterAssemblyStyle__Enum_Full) {
        pSVar1 = (String *)
                 (*(code *)(t->klass->vtable).__unknown_6.method)
                           (t,(t->klass->vtable).get_Attributes.methodPtr);
        return pSVar1;
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
    index = 0;
    bVar2 = false;
    bVar3 = false;
    if (this != (Collection_1_VoxelHit_ *)0x0) {
      while (iVar4 = index,
            pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0), iVar4 < (int)pIVar5)
      {
        value = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this,index,(MethodInfo *)0x0);
        if ((value == 0x5b) || ((value != 0x5c && (value == 0x5d)))) {
          bVar2 = false;
          bVar3 = false;
code_?:
          if (this_00 == (StringBuilder *)0x0) goto code_?;
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this_00,value,(MethodInfo *)0x0);
code_?:
          index = index + 1;
        }
        else {
          if (value != 0x2c) {
            if (!bVar2) goto code_?;
            goto code_?;
          }
          if (!bVar3) {
            bVar3 = true;
            if (this_00 != (StringBuilder *)0x0) {
              value = 0x2c;
              goto code_?;
            }
            goto code_?;
          }
          bVar2 = true;
          index = index + 1;
        }
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar1 = (String *)
                 (*(code *)(this_00->klass->vtable).ToString.method)
                           (this_00,(this_00->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
        return pSVar1;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  this_01 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this_01,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetTypeName_System__Type__System__Runtime__Serialization__Formatters__FormatterAssemblyStyle__System__Runtime__Serialization__SerializationBinder_
                 );
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* Boolean HasDefaultConstructor(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_HasDefaultConstructor(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pCVar2 = ReflectionUtils_GetDefaultConstructor_1(t,0,(MethodInfo *)0x0);
      return pCVar2 != (ConstructorInfo *)0x0;
    }
    return 1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean HasDefaultConstructor(Type, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_HasDefaultConstructor_1(Type *t,bool nonPublic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pCVar2 = ReflectionUtils_GetDefaultConstructor_1(t,nonPublic,(MethodInfo *)0x0);
      return pCVar2 != (ConstructorInfo *)0x0;
    }
    return 1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean ImplementsGenericDefinition(Type, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_ImplementsGenericDefinition
               (Type *type,Type *genericInterfaceDefinition,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  bVar2 = ReflectionUtils_ImplementsGenericDefinition_1
                    (type,genericInterfaceDefinition,&pTStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ImplementsGenericDefinition(Type, Type, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_ImplementsGenericDefinition_1
               (Type *type,Type *genericInterfaceDefinition,Type **implementingType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_genericInterfaceDefinition;
  if (type == (Type *)0x0) {
code_?:
    pAVar3 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar3,pSVar1,(MethodInfo *)0x0);
    func_?(pAVar3,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EBX = genericInterfaceDefinition;
    pSVar1 = pSVar2;
    if (genericInterfaceDefinition == (Type *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Type::Type_get_IsInterface
                      (genericInterfaceDefinition,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    cVar6 = (*(code *)(genericInterfaceDefinition->klass->vtable).get_IsGenericTypeDefinition.method
            )(genericInterfaceDefinition,
              (genericInterfaceDefinition->klass->vtable).GetGenericTypeDefinition.methodPtr);
    if (cVar6 == '\0') goto code_?;
    bVar5 = mscorlib.dll::System::Type::Type_get_IsInterface(type,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      cVar6 = (*(code *)(type->klass->vtable).get_IsGenericType.method)
                        (type,(type->klass->vtable).MakeGenericType.methodPtr);
      if (cVar6 != '\0') {
        pTVar7 = (Type *)(*(code *)(type->klass->vtable).GetGenericTypeDefinition.method)
                                   (type,(type->klass->vtable).get_IsGenericType.methodPtr);
        if (genericInterfaceDefinition == pTVar7) {
code_?:
          *implementingType = type;
          return 1;
        }
      }
    }
    iVar8 = (*(code *)(type->klass->vtable).__unknown_11.method)
                      (type,(type->klass->vtable).IsAssignableFrom.methodPtr);
    uVar9 = 0;
    if (iVar8 != 0) {
      unaff_EBX = (Type *)(iVar8 + 0x10);
      while( true ) {
        if ((int)*(uint *)(iVar8 + 0xc) <= (int)uVar9) {
          *implementingType = (Type *)0x0;
          return 0;
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar9) break;
        type = (Type *)unaff_EBX->klass;
        if ((Type__Class *)type == (Type__Class *)0x0) goto code_?;
        pTVar10 = (Type__Class *)(((Type__Class *)type)->_0).image;
        cVar6 = (*(code *)(pTVar10->vtable).get_IsGenericType.method)
                          (type,(pTVar10->vtable).MakeGenericType.methodPtr);
        if (cVar6 != '\0') {
          pTVar7 = (Type *)func_?(0x58,type);
          if (genericInterfaceDefinition == pTVar7) goto code_?;
        }
        uVar9 = uVar9 + 1;
        unaff_EBX = (Type *)&unaff_EBX->monitor;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
  genericInterfaceDefinition = unaff_EBX;
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,genericInterfaceDefinition);
  func_?(0,genericInterfaceDefinition);
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral___0___is_not_a_generic_interface,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  pAVar3 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar3,pSVar1,(MethodInfo *)0x0);
  func_?();
  pcVar11 = (code *)swi(3);
  bVar5 = (*pcVar11)();
  return bVar5;
}


/* Boolean InheritsGenericDefinition(Type, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_InheritsGenericDefinition
               (Type *type,Type *genericClassDefinition,MethodInfo *method)

{
  pTStack_1 = (Type *)0x0;
  bVar2 = ReflectionUtils_InheritsGenericDefinition_1
                    (type,genericClassDefinition,&pTStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean InheritsGenericDefinitionInternal(Type, Type, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_InheritsGenericDefinitionInternal
               (Type *currentType,Type *genericClassDefinition,Type **implementingType,
               MethodInfo *method)

{
  while( true ) {
    if (currentType == (Type *)0x0) {
      func_?(0,unaff_ESI,unaff_EBP);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    cVar3 = (*(code *)(currentType->klass->vtable).get_IsGenericType.method)
                      (currentType,(currentType->klass->vtable).MakeGenericType.methodPtr);
    if (cVar3 != '\0') {
      pTVar4 = (Type *)(*(code *)(currentType->klass->vtable).GetGenericTypeDefinition.method)
                                 (currentType,
                                  (currentType->klass->vtable).get_IsGenericType.methodPtr);
      if (genericClassDefinition == pTVar4) {
        *implementingType = currentType;
        return 1;
      }
    }
    iVar5 = (*(code *)(currentType->klass->vtable).__unknown_7.method)
                      (currentType,(currentType->klass->vtable).__unknown_8.methodPtr);
    if (iVar5 == 0) break;
    currentType = (Type *)(*(code *)(currentType->klass->vtable).__unknown_7.method)
                                    (currentType,(currentType->klass->vtable).__unknown_8.methodPtr)
    ;
  }
  *implementingType = (Type *)0x0;
  return 0;
}


/* Boolean InheritsGenericDefinition(Type, Type, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_InheritsGenericDefinition_1
               (Type *type,Type *genericClassDefinition,Type **implementingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_genericClassDefinition;
  if (type != (Type *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EBX = genericClassDefinition;
    pSVar1 = pSVar2;
    if (genericClassDefinition != (Type *)0x0) {
      bVar3 = mscorlib.dll::System::Type::Type_get_IsClass(genericClassDefinition,(MethodInfo *)0x0)
      ;
      if (bVar3 != 0) {
        cVar4 = (*(code *)(genericClassDefinition->klass->vtable).get_IsGenericTypeDefinition.method
                )(genericClassDefinition,
                  (genericClassDefinition->klass->vtable).GetGenericTypeDefinition.methodPtr);
        if (cVar4 != '\0') {
          bVar3 = ReflectionUtils_InheritsGenericDefinitionInternal
                            (type,genericClassDefinition,implementingType,(MethodInfo *)0x0);
          return bVar3;
        }
      }
      goto code_?;
    }
  }
  pAVar5 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar5,pSVar1,(MethodInfo *)0x0);
  func_?(pAVar5,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  genericClassDefinition = unaff_EBX;
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,genericClassDefinition);
  func_?(0,genericClassDefinition);
  pSVar1 = StringUtils::StringUtils_FormatWith
                     (StringLiteral___0___is_not_a_generic_class_def,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  pAVar5 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar5,pSVar1,(MethodInfo *)0x0);
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean IsCompatibleValue(Object, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsCompatibleValue(Object *value,Type *type,MethodInfo *method)

{
  if (value == (Object *)0x0) {
    bVar1 = ReflectionUtils_IsNullable(type,(MethodInfo *)0x0);
    return bVar1;
  }
  pTVar2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  if (type != (Type *)0x0) {
    cVar3 = (*(code *)(type->klass->vtable).IsAssignableFrom.method)(type,pTVar2);
    return cVar3 != '\0';
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean IsIndexedProperty(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsIndexedProperty(MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_member;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (member == (MemberInfo_1 *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    bVar1 = (TypeInfo__System__Reflection__PropertyInfo->_1).naturalAligment;
    if (((member->klass->_1).naturalAligment < bVar1) ||
       ((member->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar3 = (MemberInfo_1 *)0x0;
    if (bVar2) {
      pMVar3 = member;
    }
    if (pMVar3 == (MemberInfo_1 *)0x0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    iVar4 = (*(code *)pMVar3->klass[1]._0.klass)(pMVar3,pMVar3->klass[1]._0.fields);
    if (iVar4 != 0) {
      return 0 < *(int *)(iVar4 + 0xc);
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean IsIndexedProperty(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsIndexedProperty_1(PropertyInfo_1 *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_property;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property == (PropertyInfo_1 *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
  }
  else {
    iVar1 = (*(code *)(property->klass->vtable).__unknown_12.method)
                      (property,(property->klass->vtable).GetSetMethod.methodPtr);
    if (iVar1 != 0) {
      return 0 < *(int *)(iVar1 + 0xc);
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsInstantiatableType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsInstantiatableType(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsAbstract(t,(MethodInfo *)0x0);
    if ((((bVar1 == 0) &&
         (bVar1 = mscorlib.dll::System::Type::Type_get_IsInterface(t,(MethodInfo *)0x0), bVar1 == 0)
         ) && (MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect
                         ((MVSimpleOneSeatVehicle *)t,(MethodInfo *)0x0), extraout_AL == '\0')) &&
       (cVar2 = (*(code *)(t->klass->vtable).get_IsGenericTypeDefinition.method)(),
       handle = TypeRef__System__Void, cVar2 == '\0')) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (t != pTVar3) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
        if ((bVar1 == 0) &&
           (pCVar4 = ReflectionUtils_GetDefaultConstructor_1(t,0,(MethodInfo *)0x0),
           pCVar4 == (ConstructorInfo *)0x0)) {
          return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean IsNullable(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullable
               (Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = ReflectionUtils_IsNullableType(t,(MethodInfo *)0x0);
    return bVar1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsNullableType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsNullableType(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (t != (Type *)0x0) {
    cVar1 = (*(code *)(t->klass->vtable).get_IsGenericType.method)
                      (t,(t->klass->vtable).MakeGenericType.methodPtr);
    if (cVar1 == '\0') {
      return 0;
    }
    pTVar2 = (Type *)(*(code *)(t->klass->vtable).GetGenericTypeDefinition.method)
                               (t,(t->klass->vtable).get_IsGenericType.methodPtr);
    handle = TypeRef__System__Nullable;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    return pTVar2 == pTVar3;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsOverridenGenericMember(MemberInfo, BindingFlags) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsOverridenGenericMember
               (MemberInfo_1 *memberInfo,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) goto code_?;
  iVar1 = (*(code *)(memberInfo->klass->vtable).__unknown_1.method)
                    (memberInfo,(memberInfo->klass->vtable).__unknown_2.methodPtr);
  if ((iVar1 == 4) ||
     (iVar1 = (*(code *)(memberInfo->klass->vtable).__unknown_1.method)
                        (memberInfo,(memberInfo->klass->vtable).__unknown_2.methodPtr),
     iVar1 == 0x10)) {
    piVar2 = (int *)(*(code *)(memberInfo->klass->vtable).__unknown.method)
                              (memberInfo,(memberInfo->klass->vtable).__unknown_1.methodPtr);
    unaff_EDI = (String *)0x0;
    if (piVar2 == (int *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    cVar3 = (**(code **)(*piVar2 + 0x388))(piVar2,*(undefined4 *)(*piVar2 + 0x38c));
    if (cVar3 == '\0') {
      return 0;
    }
    unaff_EDI = (String *)(**(code **)(*piVar2 + 0x380))(piVar2,*(undefined4 *)(*piVar2 + 900));
    if (unaff_EDI == (String *)0x0) {
      return 0;
    }
    uVar4 = (*(code *)(memberInfo->klass->vtable).__unknown_2.method)
                      (memberInfo,(memberInfo->klass->vtable).__unknown_3.methodPtr);
    iVar1 = (*unaff_EDI->klass[1].vtable.Finalize.methodPtr)
                      (unaff_EDI,uVar4,bindingAttr,unaff_EDI->klass[1].vtable.Finalize.method);
    if (iVar1 == 0) goto code_?;
    if (*(int *)(iVar1 + 0xc) == 0) {
      return 0;
    }
    method_00 = *(MethodInfo **)(iVar1 + 0x10);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EDI = StringLiteral_member;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    iVar1 = (**(code **)(method_00->methodPointer + 0xf8))
                      (method_00,*(undefined4 *)(method_00->methodPointer + 0xfc));
    if (iVar1 == 2) {
      iVar1 = func_?(method_00,TypeInfo__System__Reflection__EventInfo);
      if (iVar1 != 0) {
        this = (EventInfo_1 *)func_?(method_00,TypeInfo__System__Reflection__EventInfo,0);
        pTVar5 = mscorlib.dll::System::Reflection::EventInfo::EventInfo_1_get_EventHandlerType
                           (this,method_00);
code_?:
        if (pTVar5 != (Type *)0x0) {
          cVar3 = (*(code *)(pTVar5->klass->vtable).get_IsGenericParameter.method)
                            (pTVar5,(pTVar5->klass->vtable).MakeArrayType.methodPtr);
          if (cVar3 == '\0') {
            return 0;
          }
          return 1;
        }
      }
      goto code_?;
    }
    if ((iVar1 != 3) && (iVar1 == 4)) {
      iVar1 = func_?(method_00,TypeInfo__System__Reflection__FieldInfo);
      if (iVar1 != 0) {
        piVar2 = (int *)func_?(method_00,TypeInfo__System__Reflection__FieldInfo);
        pTVar5 = (Type *)(**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
        goto code_?;
      }
      goto code_?;
    }
    if (iVar1 == 0x10) {
      iVar1 = func_?(method_00,TypeInfo__System__Reflection__PropertyInfo);
      if (iVar1 != 0) {
        piVar2 = (int *)func_?(method_00,TypeInfo__System__Reflection__PropertyInfo);
        pTVar5 = (Type *)(**(code **)(*piVar2 + 0x148))(piVar2,*(undefined4 *)(*piVar2 + 0x14c));
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    pAVar6 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (pAVar6,StringLiteral_Member_must_be_a_field_or_proper,(MethodInfo *)0x0);
    func_?(pAVar6,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__IsOverridenGenericMember_System__Reflection__MemberInfo__System__Reflection__BindingFlags_
                   );
  }
  pAVar6 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (pAVar6,StringLiteral_MemberInfo_must_be_of_type_Field,StringLiteral_member,
             (MethodInfo *)0x0);
  func_?(pAVar6,0);
code_?:
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,unaff_EDI,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean IsPropertyIndexed(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsPropertyIndexed(PropertyInfo_1 *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_property;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property != (PropertyInfo_1 *)0x0) {
    collection = (ICollection_1_System_Reflection_ParameterInfo_ *)
                 (*(code *)(property->klass->vtable).__unknown_12.method)
                           (property,(property->klass->vtable).GetSetMethod.methodPtr);
    bVar1 = CollectionUtils::CollectionUtils_IsNullOrEmpty_5
                      (collection,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<System::Reflection::ParameterInfo>_System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>_
                      );
    return bVar1 == 0;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsUnitializedValue(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsUnitializedValue(Object *value,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    type = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    pOVar1 = ReflectionUtils_CreateUnitializedValue(type,(MethodInfo *)0x0);
    bVar2 = (*(code *)(value->klass->vtable).Equals.method)
                      (value,pOVar1,(value->klass->vtable).Finalize.methodPtr);
    return bVar2;
  }
  return 1;
}


/* Boolean IsVirtual(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
               (PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_propertyInfo;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (propertyInfo == (PropertyInfo_1 *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_GetGetMethod
                     (propertyInfo,(MethodInfo *)0x0);
  if ((pMVar3 != (MethodInfo_1 *)0x0) &&
     (bVar2 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                        ((MethodBase *)pMVar3,(MethodInfo *)0x0), bVar2 != 0)) {
    return 1;
  }
  pMVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_GetSetMethod
                     (propertyInfo,(MethodInfo *)0x0);
  if ((pMVar3 != (MethodInfo_1 *)0x0) &&
     (bVar2 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                        ((MethodBase *)pMVar3,(MethodInfo *)0x0), bVar2 != 0)) {
    return 1;
  }
  return 0;
}


/* Boolean ItemsUnitializedValue[Object](IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_ItemsUnitializedValue(IList_1_System_Object_ *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  if (list != (IList_1_System_Object_ *)0x0) {
    type = mscorlib.dll::System::Object::Object_GetType((Object *)list,(MethodInfo *)0x0);
    method = (MethodInfo *)ReflectionUtils_GetCollectionItemType(type,(MethodInfo *)0x0);
    unaff_EBX = method;
    if (method != (MethodInfo *)0x0) {
      bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType((Type *)method,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Type::Type_get_IsClass((Type *)method,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          iVar2 = 0;
          while( true ) {
            if ((method->parameters[2][0x17].type & 1) == 0) {
              func_?();
            }
            iVar3 = func_?();
            if (iVar3 <= iVar2) break;
            if ((*(byte *)(*_UNK_? + 0xbe) & 1) == 0) {
              func_?();
            }
            method = (MethodInfo *)0x3;
            iVar3 = func_?();
            if (iVar3 != 0) {
              return 0;
            }
            iVar2 = iVar2 + 1;
          }
          return 1;
        }
        goto code_?;
      }
      pOVar4 = ReflectionUtils_CreateUnitializedValue((Type *)method,(MethodInfo *)0x0);
      unaff_EBX = (MethodInfo *)0x0;
      while( true ) {
        if ((method->parameters[2][0x17].type & 1) == 0) {
          func_?();
        }
        iVar2 = func_?();
        if (iVar2 <= (int)unaff_EBX) {
          return 1;
        }
        if ((*(byte *)(*_UNK_? + 0xbe) & 1) == 0) {
          func_?();
        }
        method = (MethodInfo *)0x3;
        piVar5 = (int *)func_?();
        if (piVar5 == (int *)0x0) break;
        cVar6 = (**(code **)(*piVar5 + 0xc0))(piVar5,pOVar4,*(undefined4 *)(*piVar5 + 0xc4));
        if (cVar6 == '\0') {
          return 0;
        }
        unaff_EBX = (MethodInfo *)((int)&unaff_EBX->methodPointer + 1);
      }
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?();
  func_?();
  func_?();
  pMStack7 = unaff_EBX;
  func_?();
  message = StringUtils::StringUtils_FormatWith
                      (StringLiteral_Type__0__is_neither_a_ValueType_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,message,(MethodInfo *)0x0);
  pMStack8 =
       bool_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__ItemsUnitializedValue<System::Object>_System__Collections__Generic__IList<System::Object>_
  ;
  uStack9 = 0;
  pIStack10 = this;
  func_?();
  pcVar11 = (code *)swi(3);
  bVar1 = (*pcVar11)();
  return bVar1;
}


/* Type MakeGenericType(Type, Type[]) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_MakeGenericType
                 (Type *genericTypeDefinition,Type__Array *innerTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)StringLiteral_genericTypeDefinition;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (genericTypeDefinition == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,(String *)args,(MethodInfo *)0x0);
    func_?(this,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_5
              ((ICollection_1_System_Type_ *)innerTypes,StringLiteral_innerTypes,
               void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
              );
    cVar2 = (*(code *)(genericTypeDefinition->klass->vtable).get_IsGenericTypeDefinition.method)
                      (genericTypeDefinition,
                       (genericTypeDefinition->klass->vtable).GetGenericTypeDefinition.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    unaff_EBX = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args == (Object__Array *)0x0) goto code_?;
    iVar3 = func_?(genericTypeDefinition,(args->klass->_0).element_class);
    if (iVar3 == 0) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)genericTypeDefinition;
    args = (Object__Array *)
           StringUtils::StringUtils_FormatWith
                     (StringLiteral_Type__0__is_not_a_generic_type_d,(IFormatProvider *)unaff_EBX,
                      args,(MethodInfo *)0x0);
    unaff_EBX = (CultureInfo *)StringLiteral_genericTypeDefinition;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cVar2 != '\0') {
      pTVar4 = (Type *)(*(code *)(genericTypeDefinition->klass->vtable).MakeGenericType.method)();
      return pTVar4;
    }
  }
  this_00 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_00,(String *)args,(String *)unaff_EBX,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pTVar4 = (Type *)(*pcVar5)();
  return pTVar4;
}


/* String RemoveAssemblyDetails(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_RemoveAssemblyDetails(String *fullyQualifiedTypeName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  index = 0;
  bVar1 = false;
  bVar2 = false;
  if (fullyQualifiedTypeName != (String *)0x0) {
    while (iVar3 = index,
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)fullyQualifiedTypeName,(MethodInfo *)0x0),
          iVar3 < (int)pIVar4) {
      value = mscorlib.dll::System::String::String_get_Chars
                        (fullyQualifiedTypeName,index,(MethodInfo *)0x0);
      if ((value == 0x5b) || ((value != 0x5c && (value == 0x5d)))) {
        bVar1 = false;
        bVar2 = false;
code_?:
        if (this == (StringBuilder *)0x0) goto code_?;
code_?:
        fullyQualifiedTypeName = (String *)0x0;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (this,value,(MethodInfo *)0x0);
code_?:
        index = index + 1;
      }
      else {
        if (value != 0x2c) {
          if (!bVar1) goto code_?;
          goto code_?;
        }
        if (!bVar2) {
          bVar2 = true;
          if (this != (StringBuilder *)0x0) {
            value = 0x2c;
            goto code_?;
          }
          goto code_?;
        }
        bVar1 = true;
        index = index + 1;
      }
    }
    if (this != (StringBuilder *)0x0) {
      pSVar5 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar5;
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* BindingFlags RemoveFlag(BindingFlags, BindingFlags) */

BindingFlags__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_RemoveFlag
          (BindingFlags__Enum bindingAttr,BindingFlags__Enum flag,MethodInfo *method)

{
  if ((bindingAttr & flag) == flag) {
    bindingAttr = bindingAttr ^ flag;
  }
  return bindingAttr;
}


/* Void SetMemberValue(MemberInfo, Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_SetMemberValue
               (MemberInfo_1 *member,Object *target,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = (CultureInfo *)StringLiteral_member;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  provider = (CultureInfo *)StringLiteral_target;
  if (member == (MemberInfo_1 *)0x0) {
    this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (target != (Object *)0x0) {
    iVar1 = (*(code *)(member->klass->vtable).__unknown_1.method)
                      (member,(member->klass->vtable).__unknown_2.methodPtr);
    if (iVar1 == 4) {
      pMVar2 = member->klass;
      bVar3 = (TypeInfo__System__Reflection__FieldInfo->_1).naturalAligment;
      if (((pMVar2->_1).naturalAligment < bVar3) ||
         (bVar4 = true,
         (pMVar2->_1).typeHierarchy[bVar3 - 1] !=
         (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar4 = false;
      }
      pMVar5 = (MemberInfo_1 *)0x0;
      if (bVar4) {
        pMVar5 = member;
      }
      if (pMVar5 != (MemberInfo_1 *)0x0) {
        if (((pMVar2->_1).naturalAligment < bVar3) ||
           ((pMVar2->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        this = (FieldInfo_1 *)0x0;
        if (bVar4) {
          this = (FieldInfo_1 *)member;
        }
        if (this != (FieldInfo_1 *)0x0) {
          mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_SetValue
                    (this,target,value,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(member,TypeInfo__System__Reflection__FieldInfo);
code_?:
      func_?(0);
    }
    else if (iVar1 == 0x10) {
      iVar1 = func_?(member,TypeInfo__System__Reflection__PropertyInfo);
      if (iVar1 != 0) {
        piVar6 = (int *)func_?(member,TypeInfo__System__Reflection__PropertyInfo);
        (**(code **)(*piVar6 + 400))(piVar6,target,value,0,*(undefined4 *)(*piVar6 + 0x194));
        return;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(member,0);
    uVar7 = func_?(8,member);
    func_?(args,0);
    func_?(args,uVar7);
    func_?(0,uVar7);
    message = StringUtils::StringUtils_FormatWith
                        (StringLiteral_MemberInfo___0___must_be_of_type,(IFormatProvider *)provider,
                         args,(MethodInfo *)0x0);
    this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
              (this_00,message,StringLiteral_member,(MethodInfo *)0x0);
    func_?(this_00);
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  paramName = provider;
code_?:
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,(String *)paramName,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SplitFullyQualifiedTypeName(String, String ByRef, String ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_SplitFullyQualifiedTypeName
               (String *fullyQualifiedTypeName,String **typeName,String **assemblyName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar2 = 0;
  iStack_3 = 0;
  if (fullyQualifiedTypeName != (String *)0x0) {
    while( true ) {
      iVar4 = iStack_3;
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)fullyQualifiedTypeName,(MethodInfo *)0x0);
      if ((int)pIVar5 <= iStack_3) break;
      uVar6 = mscorlib.dll::System::String::String_get_Chars
                        (fullyQualifiedTypeName,iVar4,(MethodInfo *)0x0);
      if (uVar6 == 0x5b) {
        iVar2 = iVar2 + 1;
        iStack_3 = iVar4 + 1;
      }
      else if (uVar6 == 0x5d) {
        iVar2 = iVar2 + -1;
        iStack_3 = iVar4 + 1;
      }
      else {
        if ((uVar6 == 0x2c) && (iVar2 == 0)) {
          uStack_7 = 0;
          func_?(&uStack_7);
          goto code_?;
        }
        iStack_3 = iVar4 + 1;
      }
    }
    uStack_7 = 0;
code_?:
    uStack_1 = uStack_7;
    cVar8 = func_?(&uStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
    if (cVar8 == '\0') {
      *typeName = fullyQualifiedTypeName;
      *assemblyName = (String *)0x0;
      return;
    }
    length = func_?(&uStack_1,MethodInfo__System__Nullable<int>__get_Value__);
    pSVar9 = mscorlib.dll::System::String::String_Substring_1
                       (fullyQualifiedTypeName,0,length,(MethodInfo *)0x0);
    if (pSVar9 != (String *)0x0) {
      pSVar9 = mscorlib.dll::System::String::String_Trim(pSVar9,(MethodInfo *)0x0);
      *typeName = pSVar9;
      iVar2 = func_?(&uStack_1,MethodInfo__System__Nullable<int>__get_Value__);
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)fullyQualifiedTypeName,(MethodInfo *)0x0);
      iVar4 = func_?(&uStack_1,MethodInfo__System__Nullable<int>__get_Value__);
      pSVar9 = mscorlib.dll::System::String::String_Substring_1
                         (fullyQualifiedTypeName,iVar2 + 1,(int)pIVar5 + (-1 - iVar4),
                          (MethodInfo *)0x0);
      if (pSVar9 != (String *)0x0) {
        pSVar9 = mscorlib.dll::System::String::String_Trim(pSVar9,(MethodInfo *)0x0);
        *assemblyName = pSVar9;
        return;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Object <CreateGeneric>m__2(Type, IList`1[System.Object]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils__CreateGeneric_m__2(Type *t,IList_1_System_Object_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
            ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)a,
             System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
            );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this);
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}


/* Boolean <GetChildPrivateFields>m__4(FieldInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils__GetChildPrivateFields_m__4(FieldInfo_1 *f,MethodInfo *method)

{
  if (f != (FieldInfo_1 *)0x0) {
    bVar1 = (*(code *)(f->klass->vtable).__unknown_6.method)
                      (f,(f->klass->vtable).__unknown_7.methodPtr);
    return (bVar1 & 7) == 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* String <GetFieldsAndProperties>m__0(MemberInfo) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils__GetFieldsAndProperties_m__0(MemberInfo_1 *m,MethodInfo *method)

{
  if (m != (MemberInfo_1 *)0x0) {
    pSVar1 = (String *)
             (*(code *)(m->klass->vtable).__unknown_2.method)
                       (m,(m->klass->vtable).__unknown_3.methodPtr);
    return pSVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* <>__AnonType0`2[System.Int32,System.Collections.Generic.IEnumerable`1[System.Reflection.MemberInfo]]
   <GetFieldsAndProperties>m__1(IGrouping`2[System.String,System.Reflection.MemberInfo]) */

_AnonType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils__GetFieldsAndProperties_m__1
          (IGrouping_2_System_String_System_Reflection_MemberInfo_ *g,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  direction = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_6
                        ((IEnumerable_1_MVSkybox_ *)g,
                         int_MethodInfo__System__Linq__Enumerable__Count<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                        );
  child_context =
       (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
       System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                 ((IEnumerable *)g,
                  System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                 );
  this = (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
         func_?(
                        TypeInfo______AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>
                        );
  System.Core.dll::System::Linq::SortContext`1[System::Collections::Generic::KeyValuePair`2[System::
  Int32,System::Int32]]::
  SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32___ctor
            (this,direction,child_context,
             MethodInfo______AnonType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>______AnonType0_int__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
            );
  return (_AnonType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
          *)this;
}


/* Type <GetMemberInfoFromType>m__3(ParameterInfo) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils__GetMemberInfoFromType_m__3(ParameterInfo *p,MethodInfo *method)

{
  if (p != (ParameterInfo *)0x0) {
    pTVar1 = (Type *)(*(code *)(p->klass->vtable).get_ParameterType.method)
                               (p,(p->klass->vtable).get_Attributes.methodPtr);
    return pTVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar2)();
  return pTVar1;
}

