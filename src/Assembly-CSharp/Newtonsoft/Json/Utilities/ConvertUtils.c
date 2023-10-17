
/* Boolean CanConvertType(Type, Type, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_CanConvertType
               (Type *initialType,Type *targetType,bool allowTypeNameToString,MethodInfo *method)

{
  t = initialType;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeRef__System__DBNull);
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeRef__System__DateTime);
    func_?(&TypeRef__System__Guid);
    func_?(&TypeRef__System__IConvertible);
    func_?(&TypeRef__System__String);
    func_?(&TypeRef__System__ComponentModel__TypeConverter);
    func_?(&TypeRef__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_initialType);
    func_?(&StringLiteral_targetType);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_initialType;
  if (initialType == (Type *)0x0) {
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
    initialType = (Type *)StringLiteral_targetType;
    if (targetType == (Type *)0x0) goto code_?;
    bVar3 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      targetType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                             (targetType,(MethodInfo *)0x0);
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)targetType,(Object **)t,(MethodInfo *)0x0);
    initialType = (Type *)TypeRef__System__IConvertible;
    if (bVar3 != 0) {
      return 1;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)initialType,(MethodInfo *)0x0);
    if (pTVar4 != (Type *)0x0) {
      _allowTypeNameToString = t;
      cVar5 = (*(pTVar4->klass->vtable).IsAssignableFrom.methodPtr)();
      initialType = (Type *)TypeRef__System__IConvertible;
      if (cVar5 == '\0') {
code_?:
        pIVar6 = TypeRef__System__DateTime;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
        pIVar6 = TypeRef__System__DateTimeOffset;
        if (bVar3 != 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)targetType,(Object **)pTVar4,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 1;
          }
        }
        pIVar6 = TypeRef__System__Guid;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
        pIVar6 = TypeRef__System__Guid;
        if (bVar3 != 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)targetType,(Object **)pTVar4,(MethodInfo *)0x0);
          pIVar6 = TypeRef__System__String;
          if (bVar3 != 0) {
            return 1;
          }
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)targetType,(Object **)pTVar4,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 1;
          }
        }
        pIVar6 = TypeRef__System__Type;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
        pIVar6 = TypeRef__System__String;
        if (bVar3 != 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)targetType,(Object **)pTVar4,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return 1;
          }
        }
        if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pTVar7 = ConvertUtils_GetConverter(t,(MethodInfo *)0x0);
        if (pTVar7 != (TypeConverter *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?();
          }
          bVar3 = ConvertUtils_IsComponentConverter(pTVar7,(MethodInfo *)0x0);
          if ((bVar3 == 0) &&
             (bVar3 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                                (pTVar7,targetType,(MethodInfo *)0x0), bVar3 != 0)) {
            if (allowTypeNameToString != 0) {
              return 1;
            }
            left._source = (CancellationTokenSource *)
                           mscorlib.dll::System::Object::Object_GetType
                                     ((Object *)pTVar7,(MethodInfo *)0x0);
            pIVar6 = TypeRef__System__ComponentModel__TypeConverter;
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            right._source =
                 (CancellationTokenSource *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
            bVar3 = mscorlib.dll::System::Threading::CancellationToken::
                    CancellationToken_op_Inequality(left,right,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return 1;
            }
          }
        }
        if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pTVar7 = ConvertUtils_GetConverter(targetType,(MethodInfo *)0x0);
        if (pTVar7 != (TypeConverter *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?();
          }
          bVar3 = ConvertUtils_IsComponentConverter(pTVar7,(MethodInfo *)0x0);
          if ((bVar3 == 0) &&
             (bVar3 = System.dll::System::ComponentModel::TypeConverter::
                      TypeConverter_CanConvertFrom(pTVar7,t,(MethodInfo *)0x0), bVar3 != 0)) {
            return 1;
          }
        }
        pIVar6 = TypeRef__System__DBNull;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
        if ((bVar3 != 0) &&
           (bVar3 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0),
           bVar3 != 0)) {
          return 1;
        }
        return 0;
      }
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)initialType,(MethodInfo *)0x0);
      if (pTVar4 != (Type *)0x0) {
        cVar5 = (*(pTVar4->klass->vtable).IsAssignableFrom.methodPtr)();
        _allowTypeNameToString = targetType;
        if (cVar5 != '\0') {
          return 1;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar2 = (ArgumentNullException *)func_?(uVar1);
  func_?(pAVar2);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar2,(String *)initialType,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(pAVar2,uVar1);
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Object Convert(Object, CultureInfo, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_Convert
                   (Object *initialValue,CultureInfo *culture,Type *targetType,MethodInfo *method)

{
  pOVar1 = initialValue;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__Convert_System__Object__System__Globalization__CultureInfo__System__Type_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__DBNull);
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__System__Guid);
    func_?(&TypeInfo__System__Guid);
    func_?(&TypeRef__System__IConvertible);
    func_?(&TypeInfo__System__IConvertible);
    func_?(&TypeInfo__System__String);
    func_?(&TypeRef__System__TimeSpan);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&MethodInfo__System__Type__GetType_System__String__bool_);
    func_?(&TypeRef__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__System__Uri);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  if (initialValue == (Object *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar2);
    func_?(this_01);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_initialValue);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,pSVar4,pMVar3);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__Convert_System__Object__System__Globalization__CultureInfo__System__Type_
                   );
  }
  else {
    bVar5 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      targetType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                             (targetType,(MethodInfo *)0x0);
    }
    t = mscorlib.dll::System::Object::Object_GetType(initialValue,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)targetType,(Object **)t,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__Type;
    if (bVar5 != 0) {
      return initialValue;
    }
    pOVar7 = (Object *)0x0;
    if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
      pOVar7 = initialValue;
    }
    if (pOVar7 != (Object *)0x0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      if (pTVar8 == (Type *)0x0) goto code_?;
      cVar9 = (*(pTVar8->klass->vtable).IsAssignableFrom.methodPtr)();
      if (cVar9 == '\0') goto code_?;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar1 = (Object *)0x0;
      if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
        pOVar1 = initialValue;
      }
      if (pOVar1 != (Object *)0x0) {
        pOVar1 = (Object *)func_?();
        return pOVar1;
      }
      goto code_?;
    }
code_?:
    if (targetType == (Type *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Type::Type_get_IsInterface(targetType,(MethodInfo *)0x0);
    if (((bVar5 != 0) ||
        (cVar9 = (*(targetType->klass->vtable).get_IsGenericTypeDefinition.methodPtr)(),
        cVar9 != '\0')) ||
       (bVar5 = mscorlib.dll::System::Type::Type_get_IsAbstract(targetType,(MethodInfo *)0x0),
       bVar5 != 0)) {
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      pMVar3 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?();
      pSVar4 = StringUtils::StringUtils_FormatWith
                          (pSVar4,(IFormatProvider *)provider,args,pMVar3);
      func_?();
      this_00 = (ArgumentException *)func_?();
      func_?();
      paramName = (String *)func_?();
      mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
                (this_00,pSVar4,paramName,(MethodInfo *)0x0);
      func_?();
      goto code_?;
    }
    iVar10 = func_?();
    pIVar6 = TypeRef__System__IConvertible;
    if (iVar10 != 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      if (pTVar8 == (Type *)0x0) goto code_?;
      cVar9 = func_?();
      if (cVar9 != '\0') {
        cVar9 = func_?();
        if (cVar9 != '\0') {
          pOVar1 = (Object *)0x0;
          if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
            pOVar1 = initialValue;
          }
          if (pOVar1 != (Object *)0x0) {
            pSVar4 = (String *)func_?();
            if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar1 = mscorlib.dll::System::Enum::Enum_Parse_1
                               (targetType,pSVar4,1,(MethodInfo *)0x0);
            return pOVar1;
          }
          if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor
              == 0) {
            func_?();
          }
          bVar5 = ConvertUtils_IsInteger(initialValue,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar1 = mscorlib.dll::System::Enum::Enum_ToObject
                               (targetType,initialValue,(MethodInfo *)0x0);
            return pOVar1;
          }
        }
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar1 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                           (initialValue,targetType,(IFormatProvider *)culture,(MethodInfo *)0x0);
        return pOVar1;
      }
    }
    pIVar6 = TypeRef__System__DateTimeOffset;
    pOVar7 = (Object *)0x0;
    if ((DateTime__Class *)initialValue->klass == TypeInfo__System__DateTime) {
      pOVar7 = initialValue;
    }
    if (pOVar7 != (Object *)0x0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)targetType,(Object **)pTVar8,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if ((initialValue->klass->_0).element_class ==
            (TypeInfo__System__DateTime->_0).element_class) {
          iVar10 = func_?();
          dateTime._dateData._4_4_ = 0;
          dateTime._dateData._0_4_ = *(uint *)(iVar10 + 4);
          mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor_1
                    ((DateTimeOffset *)&stack0xffffffec,dateTime,(MethodInfo *)initialValue);
          pOVar1 = (Object *)func_?();
          return pOVar1;
        }
        goto code_?;
      }
    }
    pIVar6 = TypeRef__System__Guid;
    pOVar7 = (Object *)0x0;
    if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
      pOVar7 = initialValue;
    }
    if (pOVar7 == (Object *)0x0) {
code_?:
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      pTVar11 = ConvertUtils_GetConverter(t,(MethodInfo *)0x0);
      if ((pTVar11 != (TypeConverter *)0x0) &&
         (bVar5 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                            (pTVar11,targetType,(MethodInfo *)0x0), bVar5 != 0)) {
        pOVar1 = (Object *)(*(pTVar11->klass->vtable).ConvertTo.methodPtr)();
        return pOVar1;
      }
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      pTVar11 = ConvertUtils_GetConverter(targetType,(MethodInfo *)0x0);
      initialValue = (Object *)t;
      if (pTVar11 != (TypeConverter *)0x0) {
        initialValue = (Object *)0x0;
        bVar5 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertFrom
                          (pTVar11,(Type *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pOVar1 = (Object *)(*(pTVar11->klass->vtable).ConvertFrom.methodPtr)();
          return pOVar1;
        }
      }
      if ((TypeInfo__System__DBNull->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((DBNull *)pOVar1 != TypeInfo__System__DBNull->static_fields->Value) goto code_?;
      bVar5 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        pOVar1 = ConvertUtils_EnsureTypeAssignable
                           ((Object *)0x0,(Type *)initialValue,targetType,(MethodInfo *)0x0);
        return pOVar1;
      }
      func_?();
      func_?();
      initialValue = (Object *)
                     mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      func_?();
      culture = (CultureInfo *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
    }
    else {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)targetType,(Object **)pTVar8,(MethodInfo *)0x0);
      pIVar6 = TypeRef__System__Uri;
      if (bVar5 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)targetType,(Object **)pTVar8,(MethodInfo *)0x0);
        pIVar6 = TypeRef__System__TimeSpan;
        if (bVar5 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)targetType,(Object **)pTVar8,(MethodInfo *)0x0);
          if (bVar5 == 0) goto code_?;
          if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar4 = (String *)0x0;
          if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
            pSVar4 = (String *)initialValue;
          }
          if (pSVar4 != (String *)0x0) {
            mscorlib.dll::System::TimeSpan::TimeSpan_Parse(pSVar4,(MethodInfo *)0x0);
            pOVar1 = (Object *)func_?();
            return pOVar1;
          }
          goto code_?;
        }
        this = (Uri *)func_?();
        if (this == (Uri *)0x0) goto code_?;
        pSVar4 = (String *)0x0;
        if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
          pSVar4 = (String *)initialValue;
        }
        if (pSVar4 != (String *)0x0) {
          System.dll::System::Uri::Uri__ctor(this,pSVar4,(MethodInfo *)0x0);
          return (Object *)this;
        }
      }
      else {
        pSVar4 = (String *)0x0;
        if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
          pSVar4 = (String *)initialValue;
        }
        if (pSVar4 != (String *)0x0) {
          mscorlib.dll::System::Guid::Guid__ctor_3
                    ((Guid *)&stack0xffffffec,pSVar4,(MethodInfo *)0x0);
          pOVar1 = (Object *)func_?();
          return pOVar1;
        }
code_?:
        func_?();
      }
      func_?();
code_?:
      func_?();
      func_?();
      initialValue = (Object *)
                     mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      func_?();
      culture = (CultureInfo *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
    }
    pSVar4 = (String *)func_?();
    pSVar4 = StringUtils::StringUtils_FormatWith
                        (pSVar4,(IFormatProvider *)initialValue,(Object__Array *)culture,
                         (MethodInfo *)0x0);
    func_?();
    this_02 = (Exception *)func_?();
    func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar4,(MethodInfo *)0x0);
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar12)();
  return pOVar1;
}


/* Object ConvertOrCast(Object, CultureInfo, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_ConvertOrCast
                   (Object *initialValue,CultureInfo *culture,Type *targetType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeRef__System__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Object;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  bVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)targetType,(Object **)pTVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return initialValue;
  }
  if (unaff_EBX == (Object__Class *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    paramName = StringLiteral_t;
    if (targetType == (Type *)0x0) {
      func_?();
      this = (ArgumentNullException *)func_?();
      func_?(this);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this,paramName,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                     );
      func_?();
      goto code_?;
    }
    bVar2 = mscorlib.dll::System::Type::Type_get_IsValueType(targetType,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return (Object *)0x0;
    }
    unaff_EDI = (MethodInfo *)targetType;
    bVar2 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return (Object *)0x0;
    }
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0___TryConvert_b__0__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0);
    cRam_? = '\x01';
  }
  pOVar3 = (Object *)func_?();
  if (pOVar3 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar3[1].klass = unaff_EBX;
    func_?();
    pOVar3[1].monitor = (MonitorData *)culture;
    func_?(&pOVar3[1].monitor,culture);
    pOVar3[2].klass = (Object__Class *)targetType;
    func_?(pOVar3 + 2,targetType);
    creator = (Creator_1_System_Object_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    if (creator != (Creator_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                ((RuntimePropertyInfo_StaticGetter_1_System_Object_ *)creator,pOVar3,
                 MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0___TryConvert_b__0__
                 ,(MethodInfo *)0x0);
      output = (Object__Class *)&stack0xfffffff8;
      bVar2 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                        (creator,(Object **)output,
                         bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                        );
      if (bVar2 != 0) {
        return (Object *)output;
      }
      if (unaff_EBX == (Object__Class *)0x0) {
        pTVar1 = (Type *)0x0;
      }
      else {
        pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)unaff_EBX,(MethodInfo *)0x0)
        ;
      }
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      pOVar3 = ConvertUtils_EnsureTypeAssignable
                         ((Object *)unaff_EBX,pTVar1,targetType,(MethodInfo *)0x0);
      return pOVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* Object ConvertOrCast[Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
         ConvertUtils_ConvertOrCast_1(Object *initialValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar2 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (initialValue,pCVar1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar2;
}


/* Object ConvertOrCast[Object](Object, CultureInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
         ConvertUtils_ConvertOrCast_2(Object *initialValue,CultureInfo *culture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils_ConvertOrCast(initialValue,culture,targetType,(MethodInfo *)0x0);
  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object Convert[Object](Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_Convert_1
                   (Object *initialValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar2 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (initialValue,pCVar1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar2;
}


/* Object Convert[Object](Object, CultureInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_Convert_2
                   (Object *initialValue,CultureInfo *culture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils_Convert(initialValue,culture,targetType,(MethodInfo *)0x0);
  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Func`2[Object,Object] CreateCastConverter(ConvertUtils+TypeConvertKey) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_CreateCastConverter
          (ConvertUtils_TypeConvertKey t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<System::Object,_System::Object>);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    func_?(&
                    Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass2_0___CreateCastConverter_b__0_System__Object_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass2_0);
    func_?(&StringLiteral_op_Implicit);
    func_?(&StringLiteral_op_Explicit);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass2_0)
  ;
  if (value == (Object *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pTVar2 = (Type__Array *)func_?(TypeInfo__System__Type,1);
    if (pTVar2 == (Type__Array *)0x0) goto code_?;
    if (t._initialType != (Type *)0x0) {
      iVar3 = func_?(t._initialType,(pTVar2->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pTVar2->max_length == 0) goto code_?;
    pTVar2->vector[0] = t._initialType;
    func_?(pTVar2->vector,t._initialType);
    if (t._targetType == (Type *)0x0) goto code_?;
    left = mscorlib.dll::System::Type::Type_GetMethod_2
                     (t._targetType,StringLiteral_op_Implicit,pTVar2,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                      ((PropertyInfo_1 *)left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
code_?:
      bVar4 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Equality
                        ((PropertyInfo_1 *)left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return (Func_2_Object_Object_ *)0x0;
      }
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
      }
      pRVar5 = Json::Serialization::JsonTypeReflector::
               JsonTypeReflector_get_ReflectionDelegateFactory((MethodInfo *)0x0);
      if (pRVar5 != (ReflectionDelegateFactory *)0x0) {
        func_?((&(pRVar5->klass->vtable).Equals)
                        [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                         ->slot].method,
                        Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                        ,&pcStack_6);
        pOVar7 = (Object__Class *)(*pcStack_6)(pRVar5,left,uStack_8);
        value[1].klass = pOVar7;
        func_?(value + 1,pOVar7);
        this = (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__Func<System::Object,_System::Object>);
        if (this != (RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
          Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                    (this,value,
                     MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass2_0___CreateCastConverter_b__0_System__Object_
                     ,(MethodInfo *)0x0);
          return (Func_2_Object_Object_ *)this;
        }
      }
      goto code_?;
    }
    pTVar2 = (Type__Array *)func_?(TypeInfo__System__Type,1);
    if (pTVar2 == (Type__Array *)0x0) goto code_?;
    if (t._initialType == (Type *)0x0) {
code_?:
      if (pTVar2->max_length == 0) goto code_?;
      pTVar2->vector[0] = t._initialType;
      func_?(pTVar2->vector,t._initialType);
      left = mscorlib.dll::System::Type::Type_GetMethod_2
                       (t._targetType,StringLiteral_op_Explicit,pTVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    iVar3 = func_?(t._initialType,(pTVar2->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pFVar10 = (Func_2_Object_Object_ *)(*pcVar9)();
  return pFVar10;
}


/* Object EnsureTypeAssignable(Object, Type, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
         ConvertUtils_EnsureTypeAssignable
                   (Object *value,Type *initialType,Type *targetType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__Get_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
                   );
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_t);
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_t;
    if (targetType != (Type *)0x0) {
      bVar2 = mscorlib.dll::System::Type::Type_get_IsValueType(targetType,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        bVar2 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
      return (Object *)0x0;
    }
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    targetType = (Type *)func_?(uVar3);
    func_?(targetType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)targetType,pSVar1,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                   );
    func_?();
  }
  else {
    pSVar1 = (String *)mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    if (targetType != (Type *)0x0) {
      cVar4 = (*(targetType->klass->vtable).IsAssignableFrom.methodPtr)
                        (targetType,pSVar1,(targetType->klass->vtable).IsAssignableFrom.method);
      if (cVar4 != '\0') {
        return value;
      }
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
      }
      this = (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->CastConverters;
      func_?(&stack0xfffffff4,pSVar1);
      key.TypeName = (String *)targetType;
      key.AssemblyName = pSVar1;
      func_?(&stack0xfffffff8,targetType);
      if (this != (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)0x0) {
        pOVar5 = ThreadSafeStore`2[Newtonsoft::Json::Serialization::
                 DefaultSerializationBinder+TypeNameKey,System::Object]::
                 ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Get
                           (this,key,
                            MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__Get_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
                           );
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)(*(code *)pOVar5[1].monitor)();
          return pOVar5;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
            ((MethodInfo *)0x0);
  func_?();
  args = (IFormatProvider *)func_?();
  func_?();
  func_?();
  bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                    ((CancellationToken)initialType,(CancellationToken)0x0,(MethodInfo *)0x0);
  func_?(&StringLiteral_Could_not_cast_or_convert_from__);
  if (bVar2 == 0) {
    func_?();
  }
  else {
    func_?();
    func_?();
    func_?();
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pSVar1 = StringUtils::StringUtils_FormatWith
                     ((String *)targetType,args,(Object__Array *)args,(MethodInfo *)0x0);
  func_?();
  this_00 = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  uStack6 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__EnsureTypeAssignable_System__Object__System__Type__System__Type_
                      );
  pEStack7 = this_00;
  func_?();
  pcVar8 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar8)();
  return pOVar5;
}


/* TypeConverter GetConverter(Type) */

TypeConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_GetConverter
          (Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__TypeDescriptor);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ICustomTypeDescriptor);
    func_?(&TypeInfo__System__ComponentModel__TypeDescriptor);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  pIVar1 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetDescriptor
                     (t,StringLiteral_type,(MethodInfo *)0x0);
  if (pIVar1 != (ICustomTypeDescriptor *)0x0) {
    pTVar2 = (TypeConverter *)func_?();
    return pTVar2;
  }
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar2 = (TypeConverter *)(*pcVar4)();
  return pTVar2;
}


/* Boolean IsComponentConverter(TypeConverter) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
     ConvertUtils_IsComponentConverter(TypeConverter *converter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ComponentConverter);
    cRam_? = '\x01';
  }
  if (converter != (TypeConverter *)0x0) {
    if (((TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth <=
         (converter->klass->_1).typeHierarchyDepth) &&
       ((converter->klass->_1).typeHierarchy
        [(TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__System__ComponentModel__ComponentConverter)) {
      return converter != (TypeConverter *)0x0;
    }
    return 0;
  }
  return 0;
}


/* Boolean IsInteger(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_IsInteger
               (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  TVar1 = mscorlib.dll::System::Convert::Convert_GetTypeCode(value,(MethodInfo *)0x0);
  return TVar1 - TypeCode__Enum_SByte < 8;
}


/* Boolean TryConvert(Object, CultureInfo, Type, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvert
               (Object *initialValue,CultureInfo *culture,Type *targetType,Object **convertedValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0___TryConvert_b__0__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)initialValue;
    func_?(value + 1,initialValue);
    value[1].monitor = (MonitorData *)culture;
    func_?(&value[1].monitor,culture);
    value[2].klass = (Object__Class *)targetType;
    func_?(value + 2,targetType);
    creator = (Creator_1_System_Object_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    if (creator != (Creator_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                ((RuntimePropertyInfo_StaticGetter_1_System_Object_ *)creator,value,
                 MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass10_0___TryConvert_b__0__
                 ,(MethodInfo *)0x0);
      bVar1 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                        (creator,convertedValue,
                         bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                        );
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryConvertOrCast(Object, CultureInfo, Type, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvertOrCast
               (Object *initialValue,CultureInfo *culture,Type *targetType,Object **convertedValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass16_0___TryConvertOrCast_b__0__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass16_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)initialValue;
    func_?(value + 1,initialValue);
    value[1].monitor = (MonitorData *)culture;
    func_?(&value[1].monitor,culture);
    value[2].klass = (Object__Class *)targetType;
    func_?(value + 2,targetType);
    creator = (Creator_1_System_Object_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    if (creator != (Creator_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+StaticGetter`1[System::Object]::
      RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                ((RuntimePropertyInfo_StaticGetter_1_System_Object_ *)creator,value,
                 MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass16_0___TryConvertOrCast_b__0__
                 ,(MethodInfo *)0x0);
      bVar1 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                        (creator,convertedValue,
                         bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                        );
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryConvertOrCast[Object](Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvertOrCast_1
               (Object *initialValue,Object **convertedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  bVar2 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (initialValue,pCVar1,convertedValue,
                     ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return bVar2;
}


/* Boolean TryConvertOrCast[Object](Object, CultureInfo, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvertOrCast_2
               (Object *initialValue,CultureInfo *culture,Object **convertedValue,MethodInfo *method
               )

{
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(pvVar1);
  if (iVar2 != 0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (iVar2,(method->field7_0x1c).rgctx_data[1].method);
    *(Object **)(iVar2 + 8) = initialValue;
    func_?(iVar2 + 8,initialValue);
    pvVar1 = (method->field7_0x1c).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    iVar3 = func_?(pvVar1);
    if (iVar3 != 0) {
      pMVar4 = (method->field7_0x1c).rgctx_data[4].method;
      (*pMVar4->virtualMethodPointer)
                (iVar3,iVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy,pMVar4);
      bVar5 = (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                        (iVar3,convertedValue,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean TryConvert[Object](Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvert_1
               (Object *initialValue,Object **convertedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  bVar2 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (initialValue,pCVar1,convertedValue,
                     ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return bVar2;
}


/* ConvertUtils() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__CreateCastConverter_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__ThreadSafeStore_System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  this = (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)
         func_?(
                        TypeInfo__System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                        );
  if (this != (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *
              )0x0) {
    mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,Object]::
    Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
              (this,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__CreateCastConverter_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
               ,(MethodInfo *)0x0);
    this_00 = (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *)
              func_?(
                             TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                             );
    if (this_00 != (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *)0x0) {
      ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
      ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object___ctor
                (this_00,(Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *)
                         this,
                 MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__ThreadSafeStore_System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>_
                );
      TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->CastConverters =
           (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Func_2_Object_Object_ *)this_00;
      func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields,this_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

