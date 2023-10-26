
/* Boolean AssignableToTypeName(Type, String, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_AssignableToTypeName
               (Type *type,String *fullTypeName,Type **match,MethodInfo *method)

{
  pSVar1 = fullTypeName;
  pTVar2 = type;
  CVar3._source = (CancellationTokenSource *)type;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  while( true ) {
    left._source = CVar3._source;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar4 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) break;
    if (left._source == (CancellationTokenSource *)0x0) goto code_?;
    a = (String *)
        (*(code *)(left._source)->klass[1]._1.thread_static_fields_offset)
                  (left._source,(left._source)->klass[1]._1.flags);
    bVar4 = mscorlib.dll::System::String::String_Equals_4
                      (a,pSVar1,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      *match = (Type *)left._source;
      func_?();
      return 1;
    }
    type = (Type *)0x6f;
    CVar3._source = (CancellationTokenSource *)func_?();
    fullTypeName = (String *)left._source;
  }
  if (pTVar2 != (Type *)0x0) {
    iVar5 = (*(pTVar2->klass->vtable).__unknown_31.methodPtr)
                      (pTVar2,(pTVar2->klass->vtable).__unknown_31.method);
    uVar6 = 0;
    if (iVar5 != 0) {
      piVar7 = (int *)(iVar5 + 0x10);
      while( true ) {
        if (*(int *)(iVar5 + 0xc) <= (int)uVar6) {
          *match = (Type *)0x0;
          func_?(match,0);
          return 0;
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar6) break;
        piVar8 = (int *)*piVar7;
        if (piVar8 == (int *)0x0) goto code_?;
        pSVar1 = (String *)(**(code **)(*piVar8 + 0xf4))(piVar8,*(undefined4 *)(*piVar8 + 0xf8));
        bVar4 = mscorlib.dll::System::String::String_Equals_4
                          (pSVar1,fullTypeName,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          *match = type;
          func_?(match,type);
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar4 = (*pcVar9)();
  return bVar4;
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
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    cRam_? = '\x01';
  }
  if (member == (MemberInfo_1 *)0x0) {
    func_?();
    pFVar1 = extraout_EDX;
code_?:
    func_?(member,pFVar1);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = (*(member->klass->vtable).__unknown.methodPtr)
                    (member,(member->klass->vtable).__unknown.method);
  if (iVar4 == 4) {
    pFVar1 = TypeInfo__System__Reflection__FieldInfo;
    if (((member->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth) ||
       ((member->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) goto code_?;
    if ((nonPublic != 0) ||
       (bVar3 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPublic
                          ((FieldInfo_1 *)member,(MethodInfo *)0x0), bVar3 != 0)) {
      return 1;
    }
  }
  else if (iVar4 == 0x10) {
    pMVar5 = member->klass;
    pFVar1 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__PropertyInfo;
    if (((pMVar5->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((pMVar5->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) goto code_?;
    uVar6._0_2_ = pMVar5[1]._0.byval_arg.attrs;
    uVar6._2_1_ = pMVar5[1]._0.byval_arg.type;
    uVar6._3_1_ = pMVar5[1]._0.byval_arg.field_0x7;
    cVar7 = (*(code *)pMVar5[1]._0.byval_arg.data)(member,uVar6);
    if (cVar7 != '\0') {
      if (nonPublic != 0) {
        return 1;
      }
      iVar4 = (*(code *)member->klass[1]._0.declaringType)(member,0,member->klass[1]._0.parent);
      if (iVar4 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


/* Boolean CanSetMemberValue(MemberInfo, Boolean, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_CanSetMemberValue
               (MemberInfo_1 *member,bool nonPublic,bool canSetReadOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    cRam_? = '\x01';
  }
  if (member == (MemberInfo_1 *)0x0) {
    func_?();
    pFVar1 = extraout_EDX;
code_?:
    func_?(member,pFVar1);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar4 = (*(member->klass->vtable).__unknown.methodPtr)
                    (member,(member->klass->vtable).__unknown.method);
  if (iVar4 == 4) {
    pFVar1 = TypeInfo__System__Reflection__FieldInfo;
    if (((member->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth) ||
       ((member->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) goto code_?;
    bVar3 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsInitOnly
                      ((FieldInfo_1 *)member,(MethodInfo *)0x0);
    if ((bVar3 == 0) || (canSetReadOnly != 0)) {
      if ((nonPublic == 0) &&
         (bVar3 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPublic
                            ((FieldInfo_1 *)member,(MethodInfo *)0x0), bVar3 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else if (iVar4 == 0x10) {
    pMVar5 = member->klass;
    pFVar1 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__PropertyInfo;
    if (((pMVar5->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((pMVar5->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) goto code_?;
    uVar6._0_2_ = pMVar5[1]._0.this_arg.attrs;
    uVar6._2_1_ = pMVar5[1]._0.this_arg.type;
    uVar6._3_1_ = pMVar5[1]._0.this_arg.field_0x7;
    cVar7 = (*(code *)pMVar5[1]._0.this_arg.data)(member,uVar6);
    if (cVar7 != '\0') {
      if (nonPublic != 0) {
        return 1;
      }
      left = (PropertyInfo_1 *)
             (*(code *)member->klass[1]._0.interopData)(member,0,member->klass[1]._0.klass);
      bVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                        (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


/* Object CreateGeneric(Type, Type, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateGeneric
                   (Type *genericTypeDefinition,Type *innerType,Object__Array *args,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  innerTypes = (IList_1_System_Type_ *)func_?(TypeInfo__System__Type,1);
  if (innerTypes == (IList_1_System_Type_ *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if (innerType != (Type *)0x0) {
      iVar2 = func_?(innerType,(innerTypes->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (innerTypes[1].monitor != (MonitorData *)0x0) {
      innerTypes[2].klass = (IList_1_System_Type___Class *)innerType;
      func_?(innerTypes + 2,innerType);
      pOVar3 = ReflectionUtils_CreateGeneric_1
                         (genericTypeDefinition,innerTypes,args,(MethodInfo *)0x0);
      return pOVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* Object CreateGeneric(Type, IList`1[System.Type], Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateGeneric_1
                   (Type *genericTypeDefinition,IList_1_System_Type_ *innerTypes,Object__Array *args
                   ,MethodInfo *method)

{
  pTVar1 = genericTypeDefinition;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___CreateGeneric_b__44_0_System__Type__System__Collections__Generic__IList<System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
  }
  this = (MethodCall_2_System_Object_System_Object_ *)
         TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__44_0;
  if (this == (MethodCall_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    }
    object = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9;
    this = (MethodCall_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Func<System::Type,_System::Collections::Generic::IList<System::Object>,_System::Object>
                          );
    if (this != (MethodCall_2_System_Object_System_Object_ *)0x0) {
      MethodCall`2[System::Object,System::Object]::MethodCall_2_System_Object_System_Object___ctor
                (this,(Object *)object,
                 MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___CreateGeneric_b__44_0_System__Type__System__Collections__Generic__IList<System::Object>_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__44_0 =
           (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)this;
      func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->
                       __9__44_0,this);
      goto code_?;
    }
    func_?();
    innerTypes = (IList_1_System_Type_ *)unaff_EBX;
  }
  else {
code_?:
    if (cRam_? == '\0') {
      func_?(&
                      System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                     );
      func_?(&
                      void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                     );
      func_?(&StringLiteral_genericTypeDefinition);
      func_?(&StringLiteral_createInstance);
      func_?(&StringLiteral_innerTypes);
      cRam_? = '\x01';
    }
    paramName = StringLiteral_genericTypeDefinition;
    if (genericTypeDefinition == (Type *)0x0) goto code_?;
    ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
              ((ICollection_1_System_Object_ *)innerTypes,StringLiteral_innerTypes,
               void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
              );
    genericTypeDefinition = (Type *)StringLiteral_createInstance;
    if (this != (MethodCall_2_System_Object_System_Object_ *)0x0) {
      innerTypes_00 =
           (Type__Array *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                     ((IEnumerable_1_System_Object_ *)innerTypes,
                      System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                     );
      pTVar1 = ReflectionUtils_MakeGenericType(pTVar1,innerTypes_00,(MethodInfo *)0x0);
      pOVar2 = (Object *)
               (*(((Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object___Fields *)
                  &this->fields)->_)._.invoke_impl)
                         ((((Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object___Fields
                             *)&this->fields)->_)._.method_code,pTVar1,args,
                          (((Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object___Fields
                             *)&this->fields)->_)._.method);
      return pOVar2;
    }
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar4 = (ArgumentNullException *)func_?(uVar3);
  func_?(pAVar4);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar4,(String *)genericTypeDefinition,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
  paramName = (String *)innerTypes;
code_?:
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar4 = (ArgumentNullException *)func_?(uVar3);
  func_?(pAVar4);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar4,paramName,(MethodInfo *)0x0);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar4,uVar3);
  pcVar5 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar5)();
  return pOVar2;
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
    func_?(&
                    System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                   );
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                   );
    func_?(&StringLiteral_genericTypeDefinition);
    func_?(&StringLiteral_createInstance);
    func_?(&StringLiteral_innerTypes);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_genericTypeDefinition;
  if (genericTypeDefinition == (Type *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar2 = (ArgumentNullException *)func_?(uVar1);
    func_?(pAVar2);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar2,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar2,uVar1);
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
              ((ICollection_1_System_Object_ *)innerTypes,StringLiteral_innerTypes,
               void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
              );
    if (instanceCreator !=
        (Func_3_Type_System_Collections_Generic_IList_1_System_Object_Object_ *)0x0) {
      innerTypes_00 =
           (Type__Array *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                     ((IEnumerable_1_System_Object_ *)innerTypes,
                      System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                     );
      pTVar3 = ReflectionUtils_MakeGenericType
                         (genericTypeDefinition,innerTypes_00,(MethodInfo *)0x0);
      pOVar4 = (Object *)
               (*(instanceCreator->fields)._._.invoke_impl)
                         ((instanceCreator->fields)._._.method_code,pTVar3,args,
                          (instanceCreator->fields)._._.method);
      return pOVar4;
    }
  }
  paramName_00 = &TypeInfo__System__ArgumentNullException;
  uVar1 = func_?();
  pAVar2 = (ArgumentNullException *)func_?(uVar1);
  func_?(pAVar2);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar2,(String *)paramName_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Object CreateInstance(Type, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateInstance(Type *type,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (type != (Type *)0x0) {
    pOVar1 = mscorlib.dll::System::Activator::Activator_CreateInstance_1
                       (type,BindingFlags__Enum_CreateInstance|BindingFlags__Enum_Public|
                             BindingFlags__Enum_Instance,(Binder *)0x0,args,(CultureInfo *)0x0,
                        (Object__Array *)0x0,(MethodInfo *)0x0);
    return pOVar1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Object CreateUnitializedValue(Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_CreateUnitializedValue(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__System__Void);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (type == (Type *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)this,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
  }
  else {
    cVar3 = (*(type->klass->vtable).get_IsGenericTypeDefinition.methodPtr)
                      (type,(type->klass->vtable).get_IsGenericTypeDefinition.method);
    if (cVar3 == '\0') {
      bVar4 = mscorlib.dll::System::Type::Type_get_IsClass(type,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return (Object *)0x0;
      }
      bVar4 = mscorlib.dll::System::Type::Type_get_IsInterface(type,(MethodInfo *)0x0);
      handle = TypeRef__System__Void;
      if (bVar4 != 0) {
        return (Object *)0x0;
      }
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)type,(Object **)right,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return (Object *)0x0;
      }
      bVar4 = mscorlib.dll::System::Type::Type_get_IsValueType(type,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pOVar5 = mscorlib.dll::System::Activator::Activator_CreateInstance_4(type,(MethodInfo *)0x0)
        ;
        return pOVar5;
      }
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      ppSVar6 = &StringLiteral_Type__0__cannot_be_instantiated_;
    }
    else {
      uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar2);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar2 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar2);
      func_?(args);
      func_?(args,type);
      func_?(0,type);
      ppSVar6 = &StringLiteral_Type__0__is_a_generic_type_defin;
    }
    pMVar7 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(ppSVar6);
    pSVar1 = StringUtils::StringUtils_FormatWith(pSVar1,(IFormatProvider *)provider,args,pMVar7);
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar2);
    func_?(this);
    pMVar7 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_type);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4(this,pSVar1,paramName,pMVar7)
    ;
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__CreateUnitializedValue_System__Type_
                           );
  }
  func_?(this,uVar2);
  pcVar8 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar8)();
  return pOVar5;
}


/* Type EnsureNotNullableType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_EnsureNotNullableType(Type *t,MethodInfo *method)

{
  bVar1 = ReflectionUtils_IsNullableType(t,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar2 = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(t,(MethodInfo *)0x0);
    return pTVar2;
  }
  return t;
}


/* Nullable`1[Int32] GetAssemblyDelimiterIndex(String) */

Nullable_1_Int32_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetAssemblyDelimiterIndex(String *fullyQualifiedTypeName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  value = 0;
  if (fullyQualifiedTypeName == (String *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    NVar3 = (Nullable_1_Int32_)(*pcVar2)();
    return NVar3;
  }
  do {
    while( true ) {
      if ((fullyQualifiedTypeName->fields)._stringLength <= (int)value) {
        NVar3.hasValue = 0;
        uVar4._1_3_ = 0;
        register0x00000008 = 0;
        return NVar3;
      }
      uVar5 = mscorlib.dll::System::String::String_get_Chars
                        (fullyQualifiedTypeName,value,(MethodInfo *)0x0);
      if (uVar5 != 0x2c) break;
      if (iVar1 == 0) {
        NStack_6.hasValue = 0;
        NStack_6._1_3_ = 0;
        NStack_6.value = 0;
        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                  (&NStack_6,value,MethodInfo__System__Nullable<int>__Nullable_int_);
        NVar7.hasValue = NStack_6.hasValue;
        NVar7._1_3_ = NStack_6._1_3_;
        register0x00000008 = NStack_6.value;
        return NVar7;
      }
code_?:
      value = value + 1;
    }
    if (uVar5 != 0x5b) {
      if (uVar5 == 0x5d) {
        iVar1 = iVar1 + -1;
      }
      goto code_?;
    }
    iVar1 = iVar1 + 1;
    value = value + 1;
  } while( true );
}


/* Object GetAttribute[Object](ICustomAttributeProvider) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetAttribute
                   (ICustomAttributeProvider *attributeProvider,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (attributeProvider,1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar1;
}


/* Object GetAttribute[Object](ICustomAttributeProvider, Boolean) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetAttribute_1
                   (ICustomAttributeProvider *attributeProvider,bool inherit,MethodInfo *method)

{
  uVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (attributeProvider,_inherit,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  pOVar2 = (Object *)
           (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                     (uVar1,1,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  return pOVar2;
}


/* Object[] GetAttributes[Object](ICustomAttributeProvider, Boolean) */

Object__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttributes
          (ICustomAttributeProvider *attributeProvider,bool inherit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__Assembly);
    func_?(&TypeInfo__System__Reflection__ICustomAttributeProvider);
    func_?(&TypeInfo__System__Reflection__MemberInfo);
    func_?(&TypeInfo__System__Reflection__Module);
    func_?(&TypeInfo__System__Reflection__ParameterInfo);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_attributeProvider);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)attributeProvider,StringLiteral_attributeProvider,(MethodInfo *)0x0);
  if (attributeProvider == (ICustomAttributeProvider *)0x0) {
code_?:
    handle.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (attributeProvider != (ICustomAttributeProvider *)0x0) {
      uVar1 = 0;
      uVar2 = (attributeProvider->klass->_1).interface_offsets_count;
      if (uVar2 != 0) {
        do {
          if (attributeProvider->klass->interfaceOffsets[uVar1].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Reflection__ICustomAttributeProvider) {
            ppIVar3 = &(&(attributeProvider->klass->vtable).GetCustomAttributes)
                       [attributeProvider->klass->interfaceOffsets[uVar1].offset].methodPtr;
            pAVar4 = (Attribute__Array *)
                     (**ppIVar3)(attributeProvider,_inherit,_inherit,(MethodInfo *)ppIVar3[1],0);
            goto code_?;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      puVar5 = (undefined4 *)
               func_?(attributeProvider,
                               TypeInfo__System__Reflection__ICustomAttributeProvider,0);
      pAVar4 = (Attribute__Array *)(*(code *)*puVar5)(attributeProvider,_inherit,_inherit,puVar5[1])
      ;
code_?:
      func_?((method->field7_0x1c).rgctx_data,1);
      if (pAVar4 == (Attribute__Array *)0x0) {
        return (Object__Array *)0x0;
      }
      pOVar6 = (Object__Array *)func_?();
      if (pOVar6 != (Object__Array *)0x0) {
        return pOVar6;
      }
      goto code_?;
    }
    func_?();
  }
  else {
    pIVar7 = attributeProvider->klass;
    if (((pIVar7->_1).typeHierarchyDepth < (TypeInfo__System__Type->_1).typeHierarchyDepth) ||
       ((Type__Class *)
        (pIVar7->_1).typeHierarchy[(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] !=
        TypeInfo__System__Type)) {
      if (((pIVar7->_1).typeHierarchyDepth <
           (TypeInfo__System__Reflection__Assembly->_1).typeHierarchyDepth) ||
         ((attributeProvider->klass->_1).typeHierarchy
          [(TypeInfo__System__Reflection__Assembly->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__Assembly)) {
        if (((attributeProvider->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth) ||
           ((attributeProvider->klass->_1).typeHierarchy
            [(TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) {
          if (((attributeProvider->klass->_1).typeHierarchyDepth <
               (TypeInfo__System__Reflection__Module->_1).typeHierarchyDepth) ||
             ((attributeProvider->klass->_1).typeHierarchy
              [(TypeInfo__System__Reflection__Module->_1).typeHierarchyDepth - 1] !=
              (Il2CppClass *)TypeInfo__System__Reflection__Module)) {
            if (((attributeProvider->klass->_1).typeHierarchyDepth <
                 (TypeInfo__System__Reflection__ParameterInfo->_1).typeHierarchyDepth) ||
               ((attributeProvider->klass->_1).typeHierarchy
                [(TypeInfo__System__Reflection__ParameterInfo->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__System__Reflection__ParameterInfo)) goto code_?;
            IVar8 = *(method->field7_0x1c).rgctx_data;
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
            handle.value = TypeInfo__System__Reflection__ParameterInfo;
            if (((TypeInfo__System__Reflection__ParameterInfo->_1).typeHierarchyDepth <=
                 (attributeProvider->klass->_1).typeHierarchyDepth) &&
               ((attributeProvider->klass->_1).typeHierarchy
                [(TypeInfo__System__Reflection__ParameterInfo->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)TypeInfo__System__Reflection__ParameterInfo)) {
              pAVar4 = mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_2
                                 ((ParameterInfo *)attributeProvider,pTVar9,inherit,
                                  (MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            IVar8 = *(method->field7_0x1c).rgctx_data;
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
            handle.value = TypeInfo__System__Reflection__Module;
            if (((TypeInfo__System__Reflection__Module->_1).typeHierarchyDepth <=
                 (attributeProvider->klass->_1).typeHierarchyDepth) &&
               ((attributeProvider->klass->_1).typeHierarchy
                [(TypeInfo__System__Reflection__Module->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)TypeInfo__System__Reflection__Module)) {
              attributeProvider =
                   (ICustomAttributeProvider *)
                   mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_3
                             ((Module *)attributeProvider,pTVar9,inherit,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          IVar8 = *(method->field7_0x1c).rgctx_data;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
          handle.value = TypeInfo__System__Reflection__MemberInfo;
          if (((TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth <=
               (attributeProvider->klass->_1).typeHierarchyDepth) &&
             ((attributeProvider->klass->_1).typeHierarchy
              [(TypeInfo__System__Reflection__MemberInfo->_1).typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__System__Reflection__MemberInfo)) {
            attributeProvider =
                 (ICustomAttributeProvider *)
                 mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_1
                           ((MemberInfo_1 *)attributeProvider,pTVar9,inherit,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        IVar8 = *(method->field7_0x1c).rgctx_data;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
        handle.value = TypeInfo__System__Reflection__Assembly;
        if (((TypeInfo__System__Reflection__Assembly->_1).typeHierarchyDepth <=
             (attributeProvider->klass->_1).typeHierarchyDepth) &&
           ((attributeProvider->klass->_1).typeHierarchy
            [(TypeInfo__System__Reflection__Assembly->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__System__Reflection__Assembly)) {
          attributeProvider =
               (ICustomAttributeProvider *)
               mscorlib.dll::System::Attribute::Attribute_GetCustomAttributes_4
                         ((Assembly *)attributeProvider,pTVar9,inherit,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    else {
      IVar8 = *(method->field7_0x1c).rgctx_data;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)IVar8,(MethodInfo *)0x0);
      pIVar7 = attributeProvider->klass;
      handle.value = TypeInfo__System__Type;
      if (((TypeInfo__System__Type->_1).typeHierarchyDepth <= (pIVar7->_1).typeHierarchyDepth) &&
         ((Type__Class *)
          (pIVar7->_1).typeHierarchy[(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] ==
          TypeInfo__System__Type)) {
        attributeProvider =
             (ICustomAttributeProvider *)
             (*(code *)pIVar7[1].interfaceOffsets)
                       (attributeProvider,pTVar9,_inherit,pIVar7[1].static_fields);
code_?:
        handle.value = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
        if ((((Type__Class *)handle.value)->_1).initialized_and_no_error == 0) {
          handle.value = (void *)func_?();
        }
        if ((Attribute__Array *)attributeProvider == (Attribute__Array *)0x0) {
          return (Object__Array *)0x0;
        }
        pOVar6 = (Object__Array *)func_?();
        if (pOVar6 != (Object__Array *)0x0) {
          return pOVar6;
        }
      }
    }
  }
  func_?(attributeProvider,handle.value);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar6 = (Object__Array *)(*pcVar10)();
  return pOVar6;
}


/* Void GetChildPrivateFields(IList`1[System.Reflection.MemberInfo], Type, BindingFlags) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_GetChildPrivateFields
               (IList_1_System_Reflection_MemberInfo_ *initialFields,Type *targetType,
               BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Reflection::MemberInfo>_System__Collections__Generic__IList<System::Reflection::MemberInfo>__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetChildPrivateFields_b__52_0_System__Reflection__FieldInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    cRam_? = '\x01';
  }
  if ((bindingAttr & BindingFlags__Enum_NonPublic) == BindingFlags__Enum_Default) {
    return;
  }
  BVar1 = bindingAttr ^ BindingFlags__Enum_Public;
  if ((bindingAttr & BindingFlags__Enum_Public) == BindingFlags__Enum_Default) {
    BVar1 = bindingAttr;
  }
  if (targetType != (Type *)0x0) {
    while( true ) {
      targetType = (Type *)(*(code *)((CancellationTokenSource *)targetType)->klass[4]._1.actualSize
                           )(targetType,
                             ((CancellationTokenSource *)targetType)->klass[4]._1.element_size);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        ((CancellationToken)targetType,(CancellationToken)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if ((CancellationTokenSource *)targetType == (CancellationTokenSource *)0x0) break;
      pCVar3 = ((CancellationTokenSource *)targetType)->klass;
      uVar4._0_1_ = pCVar3[3]._1.typeHierarchyDepth;
      uVar4._1_1_ = pCVar3[3]._1.genericRecursionDepth;
      uVar4._2_1_ = pCVar3[3]._1.rank;
      uVar4._3_1_ = pCVar3[3]._1.minimumAlignment;
      pIVar5 = (IEnumerable_1_System_Object_ *)
               (**(code **)&pCVar3[3]._1.interfaces_count)(targetType,BVar1,uVar4);
      if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
      }
      this = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__52_0;
      if (this == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) {
        if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
        }
        object = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9;
        this = (Func_2_System_Reflection_FieldInfo_Boolean_ *)
               func_?(TypeInfo__System__Func<System::Reflection::FieldInfo,_bool>);
        if (this == (Func_2_System_Reflection_FieldInfo_Boolean_ *)0x0) break;
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this,(Object *)object,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetChildPrivateFields_b__52_0_System__Reflection__FieldInfo_
                   ,(MethodInfo *)0x0);
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__52_0 = this
        ;
        func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields
                         ->__9__52_0,this);
      }
      pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                         (pIVar5,(Func_2_Object_Boolean_ *)this,
                          System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::FieldInfo>_System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>__System__Func<System::Reflection::FieldInfo,_bool>_
                         );
      pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                         ((IEnumerable *)pIVar5,
                          System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                         );
      CollectionUtils::CollectionUtils_AddRange_1
                ((IList_1_System_Object_ *)initialFields,pIVar5,
                 void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<System::Reflection::MemberInfo>_System__Collections__Generic__IList<System::Reflection::MemberInfo>__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                );
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GetChildPrivateProperties(IList`1[System.Reflection.PropertyInfo], Type, BindingFlags) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_GetChildPrivateProperties
               (IList_1_System_Reflection_PropertyInfo_ *initialProperties,Type *targetType,
               BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<System::Reflection::PropertyInfo>_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>__System__Func<System::Reflection::PropertyInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::PropertyInfo,_bool>);
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Reflection::PropertyInfo>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<System::Reflection::PropertyInfo>
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass55_0___GetChildPrivateProperties_b__0_System__Reflection__PropertyInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass55_0);
    cRam_? = '\x01';
  }
  if ((bindingAttr & BindingFlags__Enum_NonPublic) == BindingFlags__Enum_Default) {
    return;
  }
  BVar1 = bindingAttr ^ BindingFlags__Enum_Public;
  if ((bindingAttr & BindingFlags__Enum_Public) == BindingFlags__Enum_Default) {
    BVar1 = bindingAttr;
  }
  if (targetType != (Type *)0x0) {
    while( true ) {
      targetType = (Type *)(*(targetType->klass->vtable).__unknown_29.methodPtr)
                                     (targetType,(targetType->klass->vtable).__unknown_29.method);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        ((CancellationToken)targetType,(CancellationToken)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if ((CancellationTokenSource *)targetType == (CancellationTokenSource *)0x0) break;
      iVar3 = (*(code *)((CancellationTokenSource *)targetType)->klass[4]._1.
                        initializationExceptionGCHandle)
                        (targetType,BVar1,
                         ((CancellationTokenSource *)targetType)->klass[4]._1.cctor_started);
      puVar4 = (undefined4 *)(iVar3 + 0x10);
      uVar5 = 0;
      if (iVar3 == 0) break;
      while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc)) {
        if (*(uint *)(iVar3 + 0xc) <= uVar5) {
          func_?();
          goto code_?;
        }
        pOVar6 = (Object__Class *)*puVar4;
        value = (Object *)
                func_?(
                               TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass55_0
                               );
        if (value == (Object *)0x0) goto code_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EDI);
        value[1].klass = pOVar6;
        func_?(value + 1,pOVar6);
        this = (Func_2_Object_Boolean_ *)
               func_?(TypeInfo__System__Func<System::Reflection::PropertyInfo,_bool>);
        if (this == (Func_2_Object_Boolean_ *)0x0) goto code_?;
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this,value,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass55_0___GetChildPrivateProperties_b__0_System__Reflection__PropertyInfo_
                   ,(MethodInfo *)0x0);
        iVar7 = CollectionUtils::CollectionUtils_IndexOf_1
                          ((IEnumerable_1_System_Object_ *)initialProperties,this,
                           int_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IndexOf<System::Reflection::PropertyInfo>_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>__System__Func<System::Reflection::PropertyInfo,_bool>_
                          );
        if (initialProperties == (IList_1_System_Reflection_PropertyInfo_ *)0x0)
        goto code_?;
        if (iVar7 == -1) {
          func_?(2,
                          TypeInfo__System__Collections__Generic__ICollection<System::Reflection::PropertyInfo>
                          ,initialProperties,value[1].klass);
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        else {
          func_?(1,
                          TypeInfo__System__Collections__Generic__IList<System::Reflection::PropertyInfo>
                          ,initialProperties,iVar7);
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Type GetCollectionItemType(Type) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetCollectionItemType(Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__IEnumerable);
    func_?(&TypeRef__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  pTVar2 = (Type *)0x0;
  if (type == (Type *)0x0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar3);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    uVar3 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar3);
code_?:
    func_?();
    func_?();
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    pSVar1 = (String *)func_?();
    pSVar1 = StringUtils::StringUtils_FormatWith
                       (pSVar1,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
    func_?();
    this_00 = (Exception *)func_?();
    func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
  else {
    bVar4 = mscorlib.dll::System::Type::Type_get_IsArray(type,(MethodInfo *)0x0);
    pIVar5 = TypeRef__System__Collections__Generic__IEnumerable;
    if (bVar4 != 0) {
      pTVar2 = (Type *)(*(type->klass->vtable).__unknown_14.methodPtr)
                                 (type,(type->klass->vtable).__unknown_14.method);
      return pTVar2;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    genericInterfaceDefinition =
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    bVar4 = ReflectionUtils_ImplementsGenericDefinition_1
                      (type,genericInterfaceDefinition,(Type **)&stack0xfffffff8,(MethodInfo *)0x0);
    pIVar5 = TypeRef__System__Collections__IEnumerable;
    if (bVar4 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
      if (pTVar2 == (Type *)0x0) goto code_?;
      cVar6 = (*(pTVar2->klass->vtable).IsAssignableFrom.methodPtr)();
      if (cVar6 != '\0') {
        return (Type *)0x0;
      }
      goto code_?;
    }
    if (pTVar2 == (Type *)0x0) goto code_?;
    cVar6 = (*(pTVar2->klass->vtable).get_IsGenericTypeDefinition.methodPtr)();
    if (cVar6 != '\0') goto code_?;
    if (pTVar2 == (Type *)0x0) goto code_?;
    iVar7 = (*(pTVar2->klass->vtable).GetGenericArguments.methodPtr)();
    if (iVar7 == 0) goto code_?;
    if (*(int *)(iVar7 + 0xc) != 0) {
      return *(Type **)(iVar7 + 0x10);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar8)();
  return pTVar2;
}


/* ConstructorInfo GetDefaultConstructor(Type) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetDefaultConstructor(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  types = (Type__Array *)func_?();
  if (t != (Type *)0x0) {
    pCVar1 = mscorlib.dll::System::Type::Type_GetConstructor_1
                       (t,BindingFlags__Enum_Public|BindingFlags__Enum_Instance,(Binder *)0x0,types,
                        (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
    return pCVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pCVar1 = (ConstructorInfo *)(*pcVar3)();
  return pCVar1;
}


/* ConstructorInfo GetDefaultConstructor(Type, Boolean) */

ConstructorInfo *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetDefaultConstructor_1(Type *t,bool nonPublic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  types = (Type__Array *)func_?();
  if (t != (Type *)0x0) {
    pCVar1 = mscorlib.dll::System::Type::Type_GetConstructor_1
                       (t,(uint)nonPublic * 0x20 + BindingFlags__Enum_Public |
                          BindingFlags__Enum_Instance,(Binder *)0x0,types,
                        (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
    return pCVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pCVar1 = (ConstructorInfo *)(*pcVar3)();
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
    func_?(&TypeRef__System__Collections__Generic__IDictionary);
    func_?(&TypeRef__System__Collections__IDictionary);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  pIVar2 = TypeRef__System__Collections__Generic__IDictionary;
  pTVar3 = (Type *)0x0;
  if (dictionaryType == (Type *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar4);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    uVar4 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar4);
code_?:
    func_?();
    func_?();
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?(args);
    func_?();
    pMVar5 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_Type__0__is_not_a_dictionary_);
    pSVar1 = StringUtils::StringUtils_FormatWith(pSVar1,(IFormatProvider *)provider,args,pMVar5);
    func_?();
    this_00 = (Exception *)func_?();
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetDictionaryKeyValueTypes_System__Type__System__Type___System__Type__
                   );
    func_?();
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar7 = ReflectionUtils_ImplementsGenericDefinition_1
                      (dictionaryType,pTVar6,(Type **)&stack0xfffffff8,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Collections__IDictionary;
    if (bVar7 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      pMVar5 = (pTVar3->klass->vtable).IsAssignableFrom.method;
      cVar8 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)();
      if (cVar8 != '\0') {
        pMVar5->methodPointer = (Il2CppMethodPointer)0x0;
        func_?();
        *valueType = (Type *)0x0;
        func_?(valueType);
        return;
      }
      goto code_?;
    }
    if (pTVar3 == (Type *)0x0) goto code_?;
    pTVar6 = (Type *)&UNK_?;
    cVar8 = (*(pTVar3->klass->vtable).get_IsGenericTypeDefinition.methodPtr)();
    if (cVar8 != '\0') goto code_?;
    if (pTVar6 == (Type *)0x0) goto code_?;
    iVar9 = (*(pTVar6->klass->vtable).GetGenericArguments.methodPtr)();
    if (iVar9 == 0) goto code_?;
    if (*(int *)(iVar9 + 0xc) != 0) {
      *keyType = *(Type **)(iVar9 + 0x10);
      func_?();
      if (1 < *(uint *)(iVar9 + 0xc)) {
        *valueType = *(Type **)(iVar9 + 0x14);
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::FieldInfo>_System__Collections__IEnumerable_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>);
    func_?(&StringLiteral_targetType);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_targetType;
  if (targetType == (Type *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this_00,uVar1);
  }
  else {
    collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 (*(targetType->klass->vtable).__unknown_23.methodPtr)
                           (targetType,bindingAttr,(targetType->klass->vtable).__unknown_23.method);
    this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>
                          );
    if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this,collection,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                );
      ReflectionUtils_GetChildPrivateFields
                ((IList_1_System_Reflection_MemberInfo_ *)this,targetType,bindingAttr,
                 (MethodInfo *)0x0);
      pIVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                         ((IEnumerable *)this,
                          System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::FieldInfo>_System__Collections__IEnumerable_
                         );
      return (IEnumerable_1_System_Reflection_FieldInfo_ *)pIVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_System_Reflection_FieldInfo_ *)(*pcVar3)();
  return pIVar4;
}


/* List`1[System.Reflection.MemberInfo] GetFieldsAndProperties(Type, BindingFlags) */

List_1_System_Reflection_MemberInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetFieldsAndProperties(Type *type,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__First<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>_MethodInfo__System__Linq__Enumerable__GroupBy<System::Reflection::MemberInfo,_System::String>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_System::String>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_MethodInfo__System__Linq__Enumerable__Select<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::MemberInfo,_bool>);
    func_?(&TypeInfo__System__Func<System::Reflection::MemberInfo,_System::String>);
    func_?(&
                    TypeInfo__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__AddRange_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetFieldsAndProperties_b__36_0_System__Reflection__MemberInfo_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetFieldsAndProperties_b__36_1_System__Linq__IGrouping<System::String,_System::Reflection::MemberInfo>_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass36_0___GetFieldsAndProperties_b__2_System__Reflection__MemberInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass36_0);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    func_?(&
                    MethodInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>__get_Count__
                   );
    func_?(&
                    MethodInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>__get_Members__
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass36_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)bindingAttr;
    this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>
                          );
    if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List__
                );
      bindingAttr_00 = value[1].klass;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?(&
                        TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>
                       );
        func_?(&StringLiteral_targetType);
        cRam_? = '\x01';
      }
      paramName = StringLiteral_targetType;
      if (type == (Type *)0x0) {
        func_?();
        this_03 = (ArgumentNullException *)func_?();
        func_?(this_03);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (this_03,paramName,(MethodInfo *)0x0);
        func_?(&
                        MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                       );
        func_?();
      }
      else {
        collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     (*(type->klass->vtable).__unknown_23.methodPtr)(type);
        pLVar4 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>
                                );
        if (pLVar4 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                    (pLVar4,collection,
                     MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                    );
          ReflectionUtils_GetChildPrivateFields
                    ((IList_1_System_Reflection_MemberInfo_ *)pLVar4,type,
                     (BindingFlags__Enum)bindingAttr_00,(MethodInfo *)0x0);
          pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                             ((IEnumerable *)pLVar4,
                              System__Collections__Generic__IEnumerable<System::Reflection::FieldInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::FieldInfo>_System__Collections__IEnumerable_
                             );
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                    (this,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                          pIVar5,
                     MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__AddRange_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                    );
          collection_00 =
               ReflectionUtils_GetProperties
                         (type,(BindingFlags__Enum)value[1].klass,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                    (this,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                          collection_00,
                     MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__AddRange_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                    );
          capacity = (this->fields)._size;
          pLVar4 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
          if (pLVar4 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
            UnitySynchronizationContext+WorkRequest]::
            List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_2
                      (pLVar4,capacity,
                       MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__List_int_
                      );
            if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
            }
            this_00 = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->
                      __9__36_0;
            if (this_00 == (Func_2_System_Reflection_MemberInfo_String_ *)0x0) {
              if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
              }
              pRVar6 = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->
                       __9;
              this_00 = (Func_2_System_Reflection_MemberInfo_String_ *)
                        func_?(
                                       TypeInfo__System__Func<System::Reflection::MemberInfo,_System::String>
                                       );
              if (this_00 == (Func_2_System_Reflection_MemberInfo_String_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
              Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                        ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_00,
                         (Object *)pRVar6,
                         MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetFieldsAndProperties_b__36_0_System__Reflection__MemberInfo_
                         ,(MethodInfo *)0x0);
              TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__36_0
                   = this_00;
              func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->
                               static_fields->__9__36_0,this_00);
            }
            source = System.Core.dll::System::Linq::Enumerable::Enumerable_GroupBy
                               ((IEnumerable_1_System_Object_ *)this,
                                (Func_2_Object_Object_ *)this_00,
                                System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>_MethodInfo__System__Linq__Enumerable__GroupBy<System::Reflection::MemberInfo,_System::String>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_System::String>_
                               );
            if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
            }
            this_01 = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->
                      __9__36_1;
            if (this_01 ==
                (Func_2_System_Linq_IGrouping_2_System_String_System_Reflection_MemberInfo_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
                 *)0x0) {
              if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
              }
              pRVar6 = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->
                       __9;
              this_01 = (Func_2_System_Linq_IGrouping_2_System_String_System_Reflection_MemberInfo_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
                         *)func_?(
                                          TypeInfo__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                                          );
              if (this_01 ==
                  (Func_2_System_Linq_IGrouping_2_System_String_System_Reflection_MemberInfo_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
                   *)0x0) goto code_?;
              mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
              Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                        ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,
                         (Object *)pRVar6,
                         MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetFieldsAndProperties_b__36_1_System__Linq__IGrouping<System::String,_System::Reflection::MemberInfo>_
                         ,(MethodInfo *)0x0);
              TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__36_1
                   = this_01;
              func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->
                               static_fields->__9__36_1,this_01);
            }
            pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_3
                               ((IEnumerable_1_System_Object_ *)source,
                                (Func_2_Object_Object_ *)this_01,
                                System__Collections__Generic__IEnumerable<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_MethodInfo__System__Linq__Enumerable__Select<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_System__Collections__Generic__IEnumerable<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>_>__System__Func<System::Linq::IGrouping<System::String,_System::Reflection::MemberInfo>,___f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>_
                               );
            if (pIVar5 != (IEnumerable_1_System_Object_ *)0x0) {
              piVar7 = (int *)func_?(0,
                                              TypeInfo__System__Collections__Generic__IEnumerable<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                                              ,pIVar5);
              puStack_1 = (undefined *)0x1;
              while( true ) {
                if (piVar7 == (int *)0x0) break;
                cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar7);
                if (cVar8 == '\0') {
                  puStack_1 = (undefined *)0xffffffff;
                  if (piVar7 != (int *)0x0) {
                    func_?(0,TypeInfo__System__IDisposable,piVar7);
                    *unaff_FS_OFFSET = uStack_3;
                    return (List_1_System_Reflection_MemberInfo_ *)pLVar4;
                  }
                  *unaff_FS_OFFSET = uStack_3;
                  return (List_1_System_Reflection_MemberInfo_ *)pLVar4;
                }
                if (piVar7 == (int *)0x0) break;
                uVar9 = 0;
                uVar10 = *(ushort *)(*piVar7 + 0xb2);
                if (uVar10 != 0) {
                  do {
                    if (*(IEnumerator_1_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo___Class
                          **)(*(int *)(*piVar7 + 0x58) + (uint)uVar9 * 8) ==
                        TypeInfo__System__Collections__Generic__IEnumerator<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                       ) {
                      puVar11 = (undefined4 *)
                               (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar9 * 8) * 8 + 0xbc
                               + *piVar7);
                      goto code_?;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar10);
                }
                puVar11 = (undefined4 *)
                         func_?(piVar7,
                                         TypeInfo__System__Collections__Generic__IEnumerator<__f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>_>
                                         ,0);
code_?:
                iVar12 = (*(code *)*puVar11)(piVar7,puVar11[1]);
                if (iVar12 == 0) break;
                pIVar5 = *(IEnumerable_1_System_Object_ **)(iVar12 + 0xc);
                if (*(int *)(iVar12 + 8) == 1) {
                  item = System.Core.dll::System::Linq::Enumerable::Enumerable_First_1
                                   (pIVar5,
                                    System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__First<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                                   );
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar4,item,
                             MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__Add_System__Reflection__MemberInfo_
                            );
                }
                else {
                  this_02 = (Func_2_Object_Boolean_ *)value[1].monitor;
                  if (this_02 == (Func_2_Object_Boolean_ *)0x0) {
                    this_02 = (Func_2_Object_Boolean_ *)
                              func_?(
                                             TypeInfo__System__Func<System::Reflection::MemberInfo,_bool>
                                             );
                    if (this_02 == (Func_2_Object_Boolean_ *)0x0) break;
                    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                              (this_02,value,
                               MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass36_0___GetFieldsAndProperties_b__2_System__Reflection__MemberInfo_
                               ,(MethodInfo *)0x0);
                    value[1].monitor = (MonitorData *)this_02;
                    func_?();
                  }
                  pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                                     (pIVar5,this_02,
                                      System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Where<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>__System__Func<System::Reflection::MemberInfo,_bool>_
                                     );
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                  UnitySynchronizationContext+WorkRequest]::
                  List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                            (pLVar4,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
                                     *)pIVar5,
                             MethodInfo__System__Collections__Generic__List<System::Reflection::MemberInfo>__AddRange_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                            );
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
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
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  pLVar1 = ReflectionUtils_GetFieldsAndProperties(type,bindingAttr,(MethodInfo *)0x0);
  return pLVar1;
}


/* MemberInfo GetMemberInfoFromType(Type, MemberInfo) */

MemberInfo_1 *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
ReflectionUtils_GetMemberInfoFromType(Type *targetType,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Type>_MethodInfo__System__Linq__Enumerable__Select<System::Reflection::ParameterInfo,_System::Type>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Type>_
                   );
    func_?(&
                    System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::ParameterInfo,_System::Type>);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetMemberInfoFromType_b__50_0_System__Reflection__ParameterInfo_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    iVar1 = (*(memberInfo->klass->vtable).__unknown.methodPtr)
                      (memberInfo,(memberInfo->klass->vtable).__unknown.method);
    if (iVar1 == 0x10) {
      pMVar2 = memberInfo->klass;
      pPVar3 = TypeInfo__System__Reflection__PropertyInfo;
      if (((pMVar2->_1).typeHierarchyDepth <
           (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
         ((pMVar2->_1).typeHierarchy
          [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) goto code_?;
      pIVar4 = (IEnumerable_1_System_Object_ *)
               (*(code *)pMVar2[1]._0.name)(memberInfo,pMVar2[1]._0.namespaze);
      if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
      }
      this = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__50_0;
      if (this == (Func_2_System_Reflection_ParameterInfo_Type_ *)0x0) {
        if ((TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
        }
        object = TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9;
        this = (Func_2_System_Reflection_ParameterInfo_Type_ *)
               func_?(
                              TypeInfo__System__Func<System::Reflection::ParameterInfo,_System::Type>
                              );
        if (this == (Func_2_System_Reflection_ParameterInfo_Type_ *)0x0) goto code_?;
        mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
        Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                  ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this,
                   (Object *)object,
                   MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c___GetMemberInfoFromType_b__50_0_System__Reflection__ParameterInfo_
                   ,(MethodInfo *)0x0);
        TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9__50_0 = this
        ;
        func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields
                         ->__9__50_0,this);
      }
      pIVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_3
                         (pIVar4,(Func_2_Object_Object_ *)this,
                          System__Collections__Generic__IEnumerable<System::Type>_MethodInfo__System__Linq__Enumerable__Select<System::Reflection::ParameterInfo,_System::Type>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Type>_
                         );
      types = (Type__Array *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                        (pIVar4,
                         System__Type__MethodInfo__System__Linq__Enumerable__ToArray<System::Type>_System__Collections__Generic__IEnumerable<System::Type>_____
                        );
      name = (String *)
             (*(memberInfo->klass->vtable).__unknown_1.methodPtr)
                       (memberInfo,(memberInfo->klass->vtable).__unknown_1.method);
      returnType = (Type *)(*(code *)memberInfo->klass[1]._0.image)
                                     (memberInfo,memberInfo->klass[1]._0.gc_desc);
      if (targetType != (Type *)0x0) {
        pPVar5 = mscorlib.dll::System::Type::Type_GetProperty_5
                           (targetType,name,
                            BindingFlags__Enum_NonPublic|BindingFlags__Enum_Public|
                            BindingFlags__Enum_Static|BindingFlags__Enum_Instance,(Binder *)0x0,
                            returnType,types,(ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
        return (MemberInfo_1 *)pPVar5;
      }
    }
    else {
      uVar6 = (*(memberInfo->klass->vtable).__unknown_1.methodPtr)
                        (memberInfo,(memberInfo->klass->vtable).__unknown_1.method);
      uVar7 = (*(memberInfo->klass->vtable).__unknown.methodPtr)
                        (memberInfo,(memberInfo->klass->vtable).__unknown.method);
      memberInfo = (MemberInfo_1 *)0x0;
      if (targetType != (Type *)0x0) {
        pIVar4 = (IEnumerable_1_System_Object_ *)
                 (*(targetType->klass->vtable).GetMember_2.methodPtr)
                           (targetType,uVar6,uVar7,0x3c,
                            (targetType->klass->vtable).GetMember_2.method);
        pMVar8 = (MemberInfo_1 *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_1
                           (pIVar4,
                            System__Reflection__MemberInfo_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                           );
        return pMVar8;
      }
    }
  }
code_?:
  func_?();
  pPVar3 = extraout_EDX;
code_?:
  func_?(memberInfo,pPVar3);
  pcVar9 = (code *)swi(3);
  pMVar8 = (MemberInfo_1 *)(*pcVar9)();
  return pMVar8;
}


/* Type GetMemberUnderlyingType(MemberInfo) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetMemberUnderlyingType(MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__EventInfo);
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&StringLiteral_member);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_member;
  if (member == (MemberInfo_1 *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    member = (MemberInfo_1 *)func_?(uVar2);
    func_?(member);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)member,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(member,uVar2);
    pFVar3 = extraout_EDX;
  }
  else {
    iVar4 = (*(member->klass->vtable).__unknown.methodPtr)
                      (member,(member->klass->vtable).__unknown.method);
    if (iVar4 == 2) {
      pMVar5 = member->klass;
      pFVar3 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__EventInfo;
      if (((TypeInfo__System__Reflection__EventInfo->_1).typeHierarchyDepth <=
           (pMVar5->_1).typeHierarchyDepth) &&
         ((pMVar5->_1).typeHierarchy
          [(TypeInfo__System__Reflection__EventInfo->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__System__Reflection__EventInfo)) {
        pTVar6 = (Type *)(*(code *)pMVar5[1]._0.declaringType)(member,pMVar5[1]._0.parent);
        return pTVar6;
      }
    }
    else if (iVar4 == 4) {
      pMVar5 = member->klass;
      pFVar3 = TypeInfo__System__Reflection__FieldInfo;
      if (((TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth <=
           (pMVar5->_1).typeHierarchyDepth) &&
         ((pMVar5->_1).typeHierarchy
          [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        pTVar6 = (Type *)(*(code *)pMVar5[1]._0.name)(member,pMVar5[1]._0.namespaze);
        return pTVar6;
      }
    }
    else {
      if (iVar4 != 0x10) goto code_?;
      pMVar5 = member->klass;
      pFVar3 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__PropertyInfo;
      if (((TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth <=
           (pMVar5->_1).typeHierarchyDepth) &&
         ((pMVar5->_1).typeHierarchy
          [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
        pTVar6 = (Type *)(*(code *)pMVar5[1]._0.image)(member,pMVar5[1]._0.gc_desc);
        return pTVar6;
      }
    }
  }
  func_?(member,pFVar3);
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar2);
  func_?(this);
  pSVar1 = (String *)func_?(&StringLiteral_member);
  message = (String *)func_?(&StringLiteral_MemberInfo_must_be_of_type_Field);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this,message,pSVar1,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetMemberUnderlyingType_System__Reflection__MemberInfo_
                 );
  func_?(this);
  pcVar7 = (code *)swi(3);
  pTVar6 = (Type *)(*pcVar7)();
  return pTVar6;
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
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&StringLiteral_target);
    func_?(&StringLiteral_member);
    cRam_? = '\x01';
  }
  paramName_00 = (MemberInfo_1__Class *)StringLiteral_member;
  if (member != (MemberInfo_1 *)0x0) {
    paramName_00 = (MemberInfo_1__Class *)StringLiteral_target;
    if (target != (Object *)0x0) {
      iVar4 = (*(member->klass->vtable).__unknown.methodPtr)
                        (member,(member->klass->vtable).__unknown.method);
      if (iVar4 == 4) {
        paramName_00 = member->klass;
        pFVar5 = TypeInfo__System__Reflection__FieldInfo;
        if (((TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth <=
             (paramName_00->_1).typeHierarchyDepth) &&
           ((paramName_00->_1).typeHierarchy
            [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
          pOVar6 = (Object *)
                   (*(code *)paramName_00[1]._0.properties)
                             (member,target,paramName_00[1]._0.methods);
          *unaff_FS_OFFSET = uStack_3;
          return pOVar6;
        }
      }
      else {
        if (iVar4 != 0x10) {
          uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar7);
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar7 = func_?(&TypeInfo__System__Object);
          args = (Object__Array *)func_?(uVar7);
          pCVar8 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          func_?(args);
          func_?(args,pCVar8);
          func_?();
          func_?(member);
          uVar7 = func_?(7,member);
          func_?(args);
          func_?(args,uVar7);
          func_?(1,uVar7);
          pMVar9 = (MethodInfo *)0x0;
          pSVar10 = (String *)func_?(&StringLiteral_MemberInfo___0___is_not_of_type_);
          pSVar10 = StringUtils::StringUtils_FormatWith
                             (pSVar10,(IFormatProvider *)provider,args,pMVar9);
          uVar7 = func_?(&TypeInfo__System__ArgumentException);
          this_00 = (ArgumentException *)func_?(uVar7);
          func_?(this_00);
          pMVar9 = (MethodInfo *)0x0;
          paramName = (String *)func_?();
          mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
                    (this_00,pSVar10,paramName,pMVar9);
          func_?();
          func_?();
          pcVar11 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar11)();
          return pOVar6;
        }
        paramName_00 = member->klass;
        uStack_1 = 0;
        pFVar5 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__PropertyInfo;
        if (((TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth <=
             (paramName_00->_1).typeHierarchyDepth) &&
           ((paramName_00->_1).typeHierarchy
            [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
          pOVar6 = (Object *)
                   (*(code *)paramName_00[1]._0.fields)(member,target,0,paramName_00[1]._0.events);
          *unaff_FS_OFFSET = uStack_3;
          return pOVar6;
        }
      }
      goto code_?;
    }
  }
  uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar7);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,(String *)paramName_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
  pFVar5 = extraout_EDX;
code_?:
  func_?(member,pFVar5);
  func_?((String__Class *)(paramName_00->_0).image);
  return (Object *)&UNK_?;
}


/* String GetNameAndAssessmblyName(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_GetNameAndAssessmblyName(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_t);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_t;
  if (t == (Type *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar2);
  }
  else {
    pSVar1 = (String *)
             (*(t->klass->vtable).__unknown_6.methodPtr)(t,(t->klass->vtable).__unknown_6.method);
    piVar3 = (int *)(*(t->klass->vtable).__unknown_7.methodPtr)
                              (t,(t->klass->vtable).__unknown_7.method);
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x144))(piVar3,*(undefined4 *)(*piVar3 + 0x148));
      if (iVar4 != 0) {
        pSVar1 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar1,::StringLiteral___,*(String **)(iVar4 + 8),(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Type GetObjectType(Object) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
       ReflectionUtils_GetObjectType(Object *v,MethodInfo *method)

{
  if (v != (Object *)0x0) {
    pTVar1 = (Type *)func_?(v);
    return pTVar1;
  }
  return (Type *)0x0;
}


/* IEnumerable`1[System.Reflection.PropertyInfo] GetProperties(Type, BindingFlags) */

IEnumerable_1_System_Reflection_PropertyInfo_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_GetProperties
          (Type *targetType,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__set_Item_int__System__Reflection__PropertyInfo_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>)
    ;
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_targetType);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_targetType;
  if (targetType == (Type *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this_00,uVar1);
code_?:
    func_?(paramName,TypeInfo__System__Reflection__PropertyInfo);
  }
  else {
    collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 (*(targetType->klass->vtable).__unknown_28.methodPtr)
                           (targetType,bindingAttr,(targetType->klass->vtable).__unknown_28.method);
    this = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>
                          );
    if (this != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this,collection,
                 MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__List_System__Collections__Generic__IEnumerable<System::Reflection::PropertyInfo>_
                );
      ReflectionUtils_GetChildPrivateProperties
                ((IList_1_System_Reflection_PropertyInfo_ *)this,targetType,bindingAttr,
                 (MethodInfo *)0x0);
      index = 0;
      while( true ) {
        right = 
        MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Item_int_
        ;
        if ((this->fields)._size <= index) {
          return (IEnumerable_1_System_Reflection_PropertyInfo_ *)this;
        }
        memberInfo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )this,index,
                                MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__get_Item_int_
                               );
        if (memberInfo == (RegexCharClass_SingleRange)0x0) break;
        left._source = (CancellationTokenSource *)(**(code **)(*(int *)memberInfo + 0xfc))();
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          left._source = (CancellationTokenSource *)TypeInfo__System__Type;
          func_?();
        }
        bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                          (left,(CancellationToken)right,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          targetType_00 = (Type *)func_?();
          paramName = (String *)
                      ReflectionUtils_GetMemberInfoFromType
                                (targetType_00,(MemberInfo_1 *)memberInfo,(MethodInfo *)0x0);
          value = (Object *)0x0;
          if (paramName != (String *)0x0) {
            value = (Object *)func_?(paramName,TypeInfo__System__Reflection__PropertyInfo);
            if (value == (Object *)0x0) goto code_?;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__set_Item
                    ((List_1_System_Object_ *)this,index,value,
                     MethodInfo__System__Collections__Generic__List<System::Reflection::PropertyInfo>__set_Item_int__System__Reflection__PropertyInfo_
                    );
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_System_Reflection_PropertyInfo_ *)(*pcVar3)();
  return pIVar4;
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
  if (t != (Type *)0x0) {
    pSVar1 = (String *)
             (*(t->klass->vtable).__unknown_5.methodPtr)(t,(t->klass->vtable).__unknown_5.method);
    if (assemblyFormat != FormatterAssemblyStyle__Enum_Simple) {
      if (assemblyFormat == FormatterAssemblyStyle__Enum_Full) {
        pSVar1 = (String *)
                 (*(t->klass->vtable).__unknown_5.methodPtr)
                           (t,(t->klass->vtable).__unknown_5.method);
        return pSVar1;
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Text__StringBuilder);
      cRam_? = '\x01';
    }
    this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    if (this != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
      bVar2 = false;
      bVar3 = false;
      index = 0;
      if (pSVar1 != (String *)0x0) {
        while (index < (pSVar1->fields)._stringLength) {
          value = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
          if (value == 0x2c) {
            if (bVar3) {
              index = index + 1;
              bVar2 = true;
            }
            else {
              bVar3 = true;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                        (this,0x2c,(MethodInfo *)0x0);
              index = index + 1;
            }
          }
          else if (value == 0x5b) {
            bVar2 = false;
            bVar3 = false;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0x5b,(MethodInfo *)0x0);
            index = index + 1;
          }
          else if (value == 0x5d) {
            bVar2 = false;
            bVar3 = false;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0x5d,(MethodInfo *)0x0);
            index = index + 1;
          }
          else {
            if (!bVar2) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                        (this,value,(MethodInfo *)0x0);
            }
            index = index + 1;
          }
        }
        pSVar1 = (String *)
                 (*(this->klass->vtable).ToString.methodPtr)
                           (this,(this->klass->vtable).ToString.method);
        return pSVar1;
      }
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar4);
  func_?(this_00);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar4 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetTypeName_System__Type__System__Runtime__Serialization__Formatters__FormatterAssemblyStyle__System__Runtime__Serialization__SerializationBinder_
                         );
  func_?(this_00,uVar4);
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Boolean HasDefaultConstructor(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_HasDefaultConstructor(Type *t,MethodInfo *method)

{
  bVar1 = ReflectionUtils_HasDefaultConstructor_1(t,0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean HasDefaultConstructor(Type, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_HasDefaultConstructor_1(Type *t,bool nonPublic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    func_?(&StringLiteral_t);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Type);
        cRam_? = '\x01';
      }
      types = (Type__Array *)func_?(TypeInfo__System__Type,0);
      left = mscorlib.dll::System::Type::Type_GetConstructor_1
                       (t,(uint)nonPublic * 0x20 + BindingFlags__Enum_Public |
                          BindingFlags__Enum_Instance,(Binder *)0x0,types,
                        (ParameterModifier__Array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                        (left,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
    return 1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
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
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_type);
    func_?(&StringLiteral_genericInterfaceDefinition);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (type == (Type *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar3 = (ArgumentNullException *)func_?(uVar2);
    func_?(pAVar3);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar3,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar3,uVar2);
code_?:
    func_?();
  }
  else {
    unaff_EBX = genericInterfaceDefinition;
    pSVar1 = StringLiteral_genericInterfaceDefinition;
    if (genericInterfaceDefinition == (Type *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::Type::Type_get_IsInterface
                      (genericInterfaceDefinition,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    cVar5 = (*(genericInterfaceDefinition->klass->vtable).get_IsGenericTypeDefinition.methodPtr)
                      (genericInterfaceDefinition,
                       (genericInterfaceDefinition->klass->vtable).get_IsGenericTypeDefinition.
                       method);
    if (cVar5 == '\0') goto code_?;
    bVar4 = mscorlib.dll::System::Type::Type_get_IsInterface(type,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      cVar5 = (*(type->klass->vtable).get_IsGenericType.methodPtr)
                        (type,(type->klass->vtable).get_IsGenericType.method);
      if (cVar5 != '\0') {
        ppOVar6 = (Object **)
                  (*(type->klass->vtable).GetGenericTypeDefinition.methodPtr)
                            (type,(type->klass->vtable).GetGenericTypeDefinition.method);
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)genericInterfaceDefinition,ppOVar6,(MethodInfo *)0x0);
        if (bVar4 != 0) {
code_?:
          *implementingType = type;
          func_?(implementingType,type);
          return 1;
        }
      }
    }
    pIVar7 = (Il2CppClass *)
             (*(type->klass->vtable).__unknown_31.methodPtr)
                       (type,(type->klass->vtable).__unknown_31.method);
    pcVar8 = (char *)0x0;
    if (pIVar7 != (Il2CppClass *)0x0) {
      unaff_EBX = (Type *)&((MethodInfo *)pIVar7)->name;
      while( true ) {
        unaff_EBX = (Type *)((int)unaff_EBX + 4);
        if ((int)((MethodInfo *)pIVar7)->name <= (int)pcVar8) {
          *implementingType = (Type *)0x0;
          func_?(implementingType,0);
          return 0;
        }
        if (((MethodInfo *)pIVar7)->name <= pcVar8) break;
        type = *(Type **)unaff_EBX;
        if (type == (Type *)0x0) goto code_?;
        pIVar7 = (Il2CppClass *)
                 (((Type__Class *)((Il2CppClass *)type)->image)->vtable).get_IsGenericType.method;
        cVar5 = (*(((Type__Class *)((Il2CppClass *)type)->image)->vtable).get_IsGenericType.
                  methodPtr)(type);
        if (cVar5 != '\0') {
          pIVar7 = (Il2CppClass *)type;
          ppOVar6 = (Object **)func_?(0x2f);
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)genericInterfaceDefinition,ppOVar6,(MethodInfo *)0x0);
          if (bVar4 != 0) goto code_?;
        }
        pcVar8 = pcVar8 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar2);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar2 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar2);
  func_?(args);
  func_?(args,unaff_EBX);
  func_?(0,unaff_EBX);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral___0___is_not_a_generic_interface);
  pSVar1 = StringUtils::StringUtils_FormatWith(pSVar1,(IFormatProvider *)provider,args,method_00);
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar3 = (ArgumentNullException *)func_?(uVar2);
  func_?(pAVar3);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar3,pSVar1,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__ImplementsGenericDefinition_System__Type__System__Type__System__Type__
                 );
  func_?();
  pcVar9 = (code *)swi(3);
  bVar4 = (*pcVar9)();
  return bVar4;
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Type,unaff_EBP);
      cRam_? = '\x01';
    }
    if (currentType == (Type *)0x0) {
      func_?(unaff_ESI,unaff_EBX);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    cVar3 = (*(currentType->klass->vtable).get_IsGenericType.methodPtr)
                      (currentType,(currentType->klass->vtable).get_IsGenericType.method);
    if (cVar3 != '\0') {
      ppOVar4 = (Object **)
                (*(currentType->klass->vtable).GetGenericTypeDefinition.methodPtr)
                          (currentType,(currentType->klass->vtable).GetGenericTypeDefinition.method)
      ;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)genericClassDefinition,ppOVar4,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        *implementingType = currentType;
        func_?(implementingType,currentType);
        return 1;
      }
    }
    ppOVar4 = (Object **)
              (*(currentType->klass->vtable).__unknown_29.methodPtr)
                        (currentType,(currentType->klass->vtable).__unknown_29.method);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      (ppOVar4,(Object **)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) break;
    unaff_EBP = (currentType->klass->vtable).__unknown_29.method;
    unaff_ESI = &UNK_?;
    unaff_EBX = currentType;
    currentType = (Type *)(*(currentType->klass->vtable).__unknown_29.methodPtr)();
  }
  *implementingType = (Type *)0x0;
  func_?(implementingType,0);
  return 0;
}


/* Boolean InheritsGenericDefinition(Type, Type, Type ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_InheritsGenericDefinition_1
               (Type *type,Type *genericClassDefinition,Type **implementingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_type);
    func_?(&StringLiteral_genericClassDefinition);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_type;
  if (type != (Type *)0x0) {
    unaff_EBX = genericClassDefinition;
    pSVar1 = StringLiteral_genericClassDefinition;
    if (genericClassDefinition != (Type *)0x0) {
      bVar2 = mscorlib.dll::System::Type::Type_get_IsClass(genericClassDefinition,(MethodInfo *)0x0)
      ;
      if (bVar2 != 0) {
        cVar3 = (*(genericClassDefinition->klass->vtable).get_IsGenericTypeDefinition.methodPtr)
                          (genericClassDefinition,
                           (genericClassDefinition->klass->vtable).get_IsGenericTypeDefinition.
                           method);
        if (cVar3 != '\0') {
          bVar2 = ReflectionUtils_InheritsGenericDefinitionInternal
                            (type,genericClassDefinition,implementingType,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar5 = (ArgumentNullException *)func_?(uVar4);
  func_?(pAVar5);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar5,pSVar1,(MethodInfo *)0x0);
  uVar4 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar5,uVar4);
  genericClassDefinition = unaff_EBX;
code_?:
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar4);
  func_?(args);
  func_?(args,genericClassDefinition);
  func_?(0,genericClassDefinition);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral___0___is_not_a_generic_class_def);
  pSVar1 = StringUtils::StringUtils_FormatWith(pSVar1,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar5 = (ArgumentNullException *)func_?(uVar4);
  func_?(pAVar5);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar5,pSVar1,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__InheritsGenericDefinition_System__Type__System__Type__System__Type__
                 );
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Boolean IsCompatibleValue(Object, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsCompatibleValue(Object *value,Type *type,MethodInfo *method)

{
  if (value == (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_t);
      cRam_? = '\x01';
    }
    paramName = StringLiteral_t;
    if (type != (Type *)0x0) {
      bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(type,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 1;
      }
      bVar1 = ReflectionUtils_IsNullableType(type,(MethodInfo *)0x0);
      return bVar1;
    }
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar2);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar2);
  }
  else {
    pTVar3 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    if (type != (Type *)0x0) {
      cVar4 = (*(type->klass->vtable).IsAssignableFrom.methodPtr)
                        (type,pTVar3,(type->klass->vtable).IsAssignableFrom.method);
      return cVar4 != '\0';
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Boolean IsIndexedProperty(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsIndexedProperty(MemberInfo_1 *member,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&StringLiteral_member);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_member;
  if (member != (MemberInfo_1 *)0x0) {
    if (((member->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((member->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left = (PropertyInfo_1 *)0x0;
    if (bVar1) {
      left = (PropertyInfo_1 *)member;
    }
    bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&StringLiteral_property);
      cRam_? = '\x01';
    }
    paramName = StringLiteral_property;
    if (left != (PropertyInfo_1 *)0x0) {
      iVar3 = (*(left->klass->vtable).__unknown_7.methodPtr)
                        (left,(left->klass->vtable).__unknown_7.method);
      if (iVar3 != 0) {
        return *(int *)(iVar3 + 0xc) != 0;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar4);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean IsIndexedProperty(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsIndexedProperty_1(PropertyInfo_1 *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_property);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_property;
  if (property == (PropertyInfo_1 *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar1);
  }
  else {
    iVar2 = (*(property->klass->vtable).__unknown_7.methodPtr)
                      (property,(property->klass->vtable).__unknown_7.method);
    if (iVar2 != 0) {
      return *(int *)(iVar2 + 0xc) != 0;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsInstantiatableType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsInstantiatableType(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__System__Void);
    func_?(&StringLiteral_t);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsAbstract(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Type::Type_get_IsInterface(t,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::Type::Type_get_IsArray(t,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          cVar2 = (*(t->klass->vtable).get_IsGenericTypeDefinition.methodPtr)();
          handle = TypeRef__System__Void;
          if (cVar2 == '\0') {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                              ((Object **)t,(Object **)right,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              bVar1 = ReflectionUtils_HasDefaultConstructor_1(t,0,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar3);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Boolean IsNullable(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullable
               (Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_t);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (t != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(t,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = ReflectionUtils_IsNullableType(t,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsNullableType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsNullableType(Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Nullable);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_t);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_t;
  if (t != (Type *)0x0) {
    cVar1 = (*(t->klass->vtable).get_IsGenericType.methodPtr)
                      (t,(t->klass->vtable).get_IsGenericType.method);
    if (cVar1 == '\0') {
      return 0;
    }
    left = (Object **)
           (*(t->klass->vtable).GetGenericTypeDefinition.methodPtr)
                     (t,(t->klass->vtable).GetGenericTypeDefinition.method);
    handle = TypeRef__System__Nullable;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      (left,(Object **)right,(MethodInfo *)0x0);
    return bVar2;
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar3);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean IsOverridenGenericMember(MemberInfo, BindingFlags) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsOverridenGenericMember
               (MemberInfo_1 *memberInfo,BindingFlags__Enum bindingAttr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    iVar1 = (*(memberInfo->klass->vtable).__unknown.methodPtr)
                      (memberInfo,(memberInfo->klass->vtable).__unknown.method);
    if ((iVar1 != 4) &&
       (iVar1 = (*(memberInfo->klass->vtable).__unknown.methodPtr)
                          (memberInfo,(memberInfo->klass->vtable).__unknown.method), iVar1 != 0x10))
    goto code_?;
    piVar2 = (int *)(*(memberInfo->klass->vtable).__unknown_2.methodPtr)
                              (memberInfo,(memberInfo->klass->vtable).__unknown_2.method);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 500))(piVar2,*(undefined4 *)(*piVar2 + 0x1f8));
      if (cVar3 == '\0') {
        return 0;
      }
      left = (Object **)(**(code **)(*piVar2 + 0x234))(piVar2,*(undefined4 *)(*piVar2 + 0x238));
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        (left,(Object **)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 0;
      }
      uVar5 = (*(memberInfo->klass->vtable).__unknown_1.methodPtr)
                        (memberInfo,(memberInfo->klass->vtable).__unknown_1.method);
      if ((left != (Object **)0x0) &&
         (iVar1 = (*(code *)(*left)[0x70].monitor)(left,uVar5,bindingAttr,(*left)[0x71].klass),
         iVar1 != 0)) {
        if (*(int *)(iVar1 + 0xc) == 0) {
          return 0;
        }
        pTVar6 = ReflectionUtils_GetMemberUnderlyingType
                           (*(MemberInfo_1 **)(iVar1 + 0x10),(MethodInfo *)0x0);
        if (pTVar6 != (Type *)0x0) {
          cVar3 = (*(pTVar6->klass->vtable).get_IsGenericParameter.methodPtr)
                            (pTVar6,(pTVar6->klass->vtable).get_IsGenericParameter.method);
          if (cVar3 == '\0') {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  func_?(this);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Member_must_be_a_field_or_proper);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,message,method_00);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__IsOverridenGenericMember_System__Reflection__MemberInfo__System__Reflection__BindingFlags_
                         );
  func_?(this,uVar5);
  func_?();
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Boolean IsPropertyIndexed(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsPropertyIndexed(PropertyInfo_1 *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<System::Reflection::ParameterInfo>_System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>_
                   );
    func_?(&StringLiteral_property);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_property;
  if (property != (PropertyInfo_1 *)0x0) {
    collection = (ICollection_1_System_Object_ *)
                 (*(property->klass->vtable).__unknown_7.methodPtr)
                           (property,(property->klass->vtable).__unknown_7.method);
    bVar1 = CollectionUtils::CollectionUtils_IsNullOrEmpty_1
                      (collection,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<System::Reflection::ParameterInfo>_System__Collections__Generic__ICollection<System::Reflection::ParameterInfo>_
                      );
    return bVar1 == 0;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar2);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsUnitializedValue(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_IsUnitializedValue(Object *value,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    type = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    pOVar1 = ReflectionUtils_CreateUnitializedValue(type,(MethodInfo *)0x0);
    bVar2 = (*(value->klass->vtable).Equals.methodPtr)
                      (value,pOVar1,(value->klass->vtable).Equals.method);
    return bVar2;
  }
  return 1;
}


/* Boolean IsVirtual(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::ReflectionUtils_IsVirtual
               (PropertyInfo_1 *propertyInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_propertyInfo);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_propertyInfo;
  if (propertyInfo == (PropertyInfo_1 *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this = (ArgumentNullException *)func_?(uVar1);
    func_?(this);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,paramName,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(this,uVar1);
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_GetGetMethod
                     (propertyInfo,(MethodInfo *)0x0);
  bVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)pMVar4,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (pMVar4 == (MethodInfo_1 *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                      ((MethodBase *)pMVar4,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  pMVar4 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_GetSetMethod
                     (propertyInfo,(MethodInfo *)0x0);
  bVar3 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    ((PropertyInfo_1 *)pMVar4,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (pMVar4 == (MethodInfo_1 *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Reflection::MethodBase::MethodBase_get_IsVirtual
                      ((MethodBase *)pMVar4,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}


/* Boolean ItemsUnitializedValue[Object](IList`1[System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_ItemsUnitializedValue(IList_1_System_Object_ *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  if (list != (IList_1_System_Object_ *)0x0) {
    type = mscorlib.dll::System::Object::Object_GetType((Object *)list,(MethodInfo *)0x0);
    unaff_EBX = ReflectionUtils_GetCollectionItemType(type,(MethodInfo *)0x0);
    if (unaff_EBX != (Type *)0x0) {
      bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(unaff_EBX,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        method = (MethodInfo *)&UNK_?;
        bVar1 = mscorlib.dll::System::Type::Type_get_IsClass(unaff_EBX,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          iVar2 = 0;
          while( true ) {
            if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[4].rgctxDataDummy + 0xba) & 1) == 0
               ) {
              func_?();
            }
            iVar3 = func_?();
            if (iVar3 <= iVar2) {
              return 1;
            }
            if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0
               ) {
              func_?();
            }
            method = (MethodInfo *)&UNK_?;
            iVar3 = func_?();
            if (iVar3 != 0) break;
            iVar2 = iVar2 + 1;
          }
          return 0;
        }
        goto code_?;
      }
      method = (MethodInfo *)&UNK_?;
      pOVar4 = ReflectionUtils_CreateUnitializedValue(unaff_EBX,(MethodInfo *)0x0);
      unaff_EBX = (Type *)0x0;
      while( true ) {
        if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[4].rgctxDataDummy + 0xba) & 1) == 0) {
          func_?();
        }
        iVar2 = func_?();
        if (iVar2 <= (int)unaff_EBX) {
          return 1;
        }
        if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
          func_?();
        }
        method = (MethodInfo *)&UNK_?;
        piVar5 = (int *)func_?();
        if (piVar5 == (int *)0x0) break;
        cVar6 = (**(code **)(*piVar5 + 0xbc))(piVar5,pOVar4,*(undefined4 *)(*piVar5 + 0xc0));
        if (cVar6 == '\0') {
          return 0;
        }
        unaff_EBX = (Type *)((int)&unaff_EBX->klass + 1);
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pTStack7 = (Type *)0x1;
  func_?();
  args = (Object__Array *)func_?();
  func_?();
  func_?();
  pTStack7 = unaff_EBX;
  func_?();
  pSVar8 = (String *)func_?();
  pSVar8 = StringUtils::StringUtils_FormatWith
                     (pSVar8,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
  func_?();
  this = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar8,(MethodInfo *)0x0);
  uStack9 = func_?();
  pEStack10 = this;
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
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
                   );
    func_?(&StringLiteral_Type__0__is_not_a_generic_type_d);
    func_?(&StringLiteral_genericTypeDefinition);
    func_?(&StringLiteral_innerTypes);
    cRam_? = '\x01';
  }
  args = (Object__Array *)StringLiteral_genericTypeDefinition;
  if (genericTypeDefinition == (Type *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar2 = (ArgumentNullException *)func_?(uVar1);
    func_?(pAVar2);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar2,(String *)args,(MethodInfo *)0x0);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(pAVar2,uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    func_?();
code_?:
    func_?();
    this = (ArgumentException *)func_?();
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
              (this,(String *)args,unaff_EBX,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentConditionTrue_bool__System__String__System__String_
                   );
    func_?();
  }
  else {
    ValidationUtils::ValidationUtils_ArgumentNotNullOrEmpty_3
              ((ICollection_1_System_Object_ *)innerTypes,StringLiteral_innerTypes,
               void_MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNullOrEmpty<System::Type>_System__Collections__Generic__ICollection<System::Type>__System__String_
              );
    cVar3 = (*(genericTypeDefinition->klass->vtable).get_IsGenericTypeDefinition.methodPtr)
                      (genericTypeDefinition,
                       (genericTypeDefinition->klass->vtable).get_IsGenericTypeDefinition.method);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    if (args == (Object__Array *)0x0) goto code_?;
    iVar4 = func_?(genericTypeDefinition,(args->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)genericTypeDefinition;
    func_?(args->vector,genericTypeDefinition);
    format = StringLiteral_Type__0__is_not_a_generic_type_d;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_format);
      cRam_? = '\x01';
    }
    if (format != (String *)0x0) {
      args = (Object__Array *)
             mscorlib.dll::System::String::String_Format_7
                       ((IFormatProvider *)provider,format,args,(MethodInfo *)0x0);
      unaff_EBX = StringLiteral_genericTypeDefinition;
      if (cVar3 != '\0') {
        pTVar5 = (Type *)(*(genericTypeDefinition->klass->vtable).MakeGenericType.methodPtr)
                                   (genericTypeDefinition);
        return pTVar5;
      }
      goto code_?;
    }
  }
  paramName = &TypeInfo__System__ArgumentNullException;
  uVar1 = func_?();
  pAVar2 = (ArgumentNullException *)func_?(uVar1);
  func_?(pAVar2);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar2,(String *)paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?(pAVar2);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pTVar5 = (Type *)(*pcVar6)();
  return pTVar5;
}


/* String RemoveAssemblyDetails(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
         ReflectionUtils_RemoveAssemblyDetails(String *fullyQualifiedTypeName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    bVar1 = false;
    bVar2 = false;
    index = 0;
    if (fullyQualifiedTypeName != (String *)0x0) {
      while (index < (fullyQualifiedTypeName->fields)._stringLength) {
        value = mscorlib.dll::System::String::String_get_Chars
                          (fullyQualifiedTypeName,index,(MethodInfo *)0x0);
        if (value == 0x2c) {
          if (bVar2) {
            index = index + 1;
            bVar1 = true;
          }
          else {
            bVar2 = true;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0x2c,(MethodInfo *)0x0);
            index = index + 1;
          }
        }
        else if (value == 0x5b) {
          bVar1 = false;
          bVar2 = false;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,0x5b,(MethodInfo *)0x0);
          index = index + 1;
        }
        else if (value == 0x5d) {
          bVar1 = false;
          bVar2 = false;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,0x5d,(MethodInfo *)0x0);
          index = index + 1;
        }
        else {
          if (!bVar1) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,value,(MethodInfo *)0x0);
          }
          index = index + 1;
        }
      }
      pSVar3 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
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
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    func_?(&StringLiteral_target);
    func_?(&StringLiteral_member);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_member;
  if (member == (MemberInfo_1 *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    member = (MemberInfo_1 *)func_?(uVar2);
    func_?(member);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)member,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                           );
    func_?(member,uVar2);
    pFVar3 = extraout_EDX;
    goto code_?;
  }
  paramName = (CultureInfo *)StringLiteral_target;
  if (target == (Object *)0x0) goto code_?;
  iVar4 = (*(member->klass->vtable).__unknown.methodPtr)
                    (member,(member->klass->vtable).__unknown.method);
  if (iVar4 == 4) {
    pFVar3 = TypeInfo__System__Reflection__FieldInfo;
    if (((TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth <=
         (member->klass->_1).typeHierarchyDepth) &&
       ((member->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
      mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_SetValue
                ((FieldInfo_1 *)member,target,value,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?(member,pFVar3);
  }
  else if (iVar4 == 0x10) {
    pMVar5 = member->klass;
    pFVar3 = (FieldInfo_1__Class *)TypeInfo__System__Reflection__PropertyInfo;
    if (((TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth <=
         (pMVar5->_1).typeHierarchyDepth) &&
       ((pMVar5->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      (*(code *)pMVar5[1]._0.nestedTypes)(member,target,value,0,pMVar5[1]._0.implementedInterfaces);
      return;
    }
    goto code_?;
  }
  uVar2 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar2);
  paramName = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
  uVar2 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar2);
  func_?(member);
  uVar2 = func_?(7,member);
  func_?(args);
  func_?(args,uVar2);
  func_?(0,uVar2);
  pMVar6 = (MethodInfo *)0x0;
  provider = paramName;
  pSVar1 = (String *)func_?(&StringLiteral_MemberInfo___0___must_be_of_type);
  pSVar1 = StringUtils::StringUtils_FormatWith(pSVar1,(IFormatProvider *)provider,args,pMVar6);
  uVar2 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar2);
  func_?(this);
  pMVar6 = (MethodInfo *)0x0;
  paramName_00 = (String *)func_?(&StringLiteral_member);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
            (this,pSVar1,paramName_00,pMVar6);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__SetMemberValue_System__Reflection__MemberInfo__System__Object__System__Object_
                 );
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,(String *)paramName,(MethodInfo *)0x0);
  uVar2 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this_00,uVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SplitFullyQualifiedTypeName(String, String ByRef, String ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils::
     ReflectionUtils_SplitFullyQualifiedTypeName
               (String *fullyQualifiedTypeName,String **typeName,String **assemblyName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<int>__get_Value__);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  iVar2 = 0;
  uVar3 = 0;
  if (fullyQualifiedTypeName != (String *)0x0) {
    while ((int)uVar3 < (fullyQualifiedTypeName->fields)._stringLength) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars
                        (fullyQualifiedTypeName,uVar3,(MethodInfo *)0x0);
      if (uVar4 == 0x2c) {
        if (iVar2 == 0) {
          NStack_5.hasValue = 0;
          NStack_5._1_3_ = 0;
          NStack_5.value = 0;
          mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                    (&NStack_5,uVar3,MethodInfo__System__Nullable<int>__Nullable_int_);
          goto code_?;
        }
code_?:
        uVar3 = uVar3 + 1;
      }
      else {
        if (uVar4 != 0x5b) {
          if (uVar4 == 0x5d) {
            iVar2 = iVar2 + -1;
          }
          goto code_?;
        }
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 + 1;
      }
    }
    NStack_5.hasValue = 0;
    NStack_5._1_3_ = 0;
    NStack_5.value = 0;
code_?:
    NStack_1 = NStack_5;
    if (NStack_5.hasValue == 0) {
      *typeName = fullyQualifiedTypeName;
      func_?(typeName,fullyQualifiedTypeName);
      *assemblyName = (String *)0x0;
      func_?(assemblyName,0);
      return;
    }
    uVar3 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                      (&NStack_1,MethodInfo__System__Nullable<int>__get_Value__);
    pSVar6 = mscorlib.dll::System::String::String_Substring_1
                       (fullyQualifiedTypeName,0,uVar3,(MethodInfo *)0x0);
    if (pSVar6 != (String *)0x0) {
      pSVar6 = mscorlib.dll::System::String::String_Trim(pSVar6,(MethodInfo *)0x0);
      *typeName = pSVar6;
      func_?(typeName,pSVar6);
      uVar3 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                        (&NStack_1,MethodInfo__System__Nullable<int>__get_Value__);
      iVar2 = (fullyQualifiedTypeName->fields)._stringLength;
      uVar7 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                        (&NStack_1,MethodInfo__System__Nullable<int>__get_Value__);
      pSVar6 = mscorlib.dll::System::String::String_Substring_1
                         (fullyQualifiedTypeName,uVar3 + 1,(iVar2 - uVar7) + -1,(MethodInfo *)0x0);
      if (pSVar6 != (String *)0x0) {
        pSVar6 = mscorlib.dll::System::String::String_Trim(pSVar6,(MethodInfo *)0x0);
        *assemblyName = pSVar6;
        func_?(assemblyName,pSVar6);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

