
/* Boolean CanConvertType(Type, Type, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_CanConvertType
               (Type *initialType,Type *targetType,bool allowTypeNameToString,MethodInfo *method)

{
  t = initialType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_initialType;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initialType == (Type *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  }
  else {
    initialType = (Type *)StringLiteral_targetType;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (targetType != (Type *)0x0) {
      bVar1 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        targetType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                               (targetType,(MethodInfo *)0x0);
      }
      pIVar2 = TypeRef__System__IConvertible;
      if (targetType == t) {
        return 1;
      }
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Type *)0x0) {
        cVar4 = (*(code *)(pTVar3->klass->vtable).IsAssignableFrom.method)(pTVar3);
        pIVar2 = TypeRef__System__IConvertible;
        if (cVar4 == '\0') {
code_?:
          pIVar2 = TypeRef__System__DateTime;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          pIVar2 = TypeRef__System__DateTimeOffset;
          if (t == pTVar3) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
            if (targetType == pTVar3) {
              return 1;
            }
          }
          pIVar2 = TypeRef__System__Guid;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          pIVar2 = TypeRef__System__Guid;
          if (t == pTVar3) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
            pIVar2 = TypeRef__System__String;
            if (targetType == pTVar3) {
              return 1;
            }
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
            if (targetType == pTVar3) {
              return 1;
            }
          }
          pIVar2 = TypeRef__System__Type;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          pIVar2 = TypeRef__System__String;
          if (t == pTVar3) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
            if (targetType == pTVar3) {
              return 1;
            }
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar5 = ConvertUtils_GetConverter(t,(MethodInfo *)0x0);
          if (pTVar5 != (TypeConverter *)0x0) {
            if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
              func_?();
            }
            bVar1 = ConvertUtils_IsComponentConverter(pTVar5,(MethodInfo *)0x0);
            if ((bVar1 == 0) &&
               (bVar1 = System.dll::System::ComponentModel::TypeConverter::
                        TypeConverter_CanConvertTo(pTVar5,targetType,(MethodInfo *)0x0), bVar1 != 0)
               ) {
              return 1;
            }
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar5 = ConvertUtils_GetConverter(targetType,(MethodInfo *)0x0);
          if (pTVar5 != (TypeConverter *)0x0) {
            if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
              func_?();
            }
            bVar1 = ConvertUtils_IsComponentConverter(pTVar5,(MethodInfo *)0x0);
            if ((bVar1 == 0) &&
               (bVar1 = System.dll::System::ComponentModel::TypeConverter::
                        TypeConverter_CanConvertFrom(pTVar5,t,(MethodInfo *)0x0), bVar1 != 0)) {
              return 1;
            }
          }
          pIVar2 = TypeRef__System__DBNull;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          if ((t == pTVar3) &&
             (bVar1 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0),
             bVar1 != 0)) {
            return 1;
          }
          return 0;
        }
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Type *)0x0) {
          cVar4 = (*(code *)(pTVar3->klass->vtable).IsAssignableFrom.method)(pTVar3);
          if (cVar4 != '\0') {
            return 1;
          }
          goto code_?;
        }
      }
      initialType = (Type *)0x0;
      func_?();
    }
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    paramName = (String *)initialType;
  }
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,paramName,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}


/* Object Convert(Object, CultureInfo, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_Convert
                   (Object *initialValue,CultureInfo *culture,Type *targetType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initialValue == (Object *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,StringLiteral_initialValue,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__Convert_System__Object__System__Globalization__CultureInfo__System__Type_
                   );
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar2 = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    pSVar3 = StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert_from__0__to__1__,(IFormatProvider *)pCVar1,
                        pOVar2,(MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    func_?();
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar2 = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    pSVar3 = StringUtils::StringUtils_FormatWith
                       (StringLiteral_Can_not_convert_null__0__into_no,(IFormatProvider *)pCVar1,
                        pOVar2,(MethodInfo *)0x0);
    pIVar4 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(pIVar4,pSVar3,(MethodInfo *)0x0);
    func_?();
  }
  else {
    bVar5 = ReflectionUtils::ReflectionUtils_IsNullableType(targetType,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      targetType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                             (targetType,(MethodInfo *)0x0);
    }
    pTVar6 = mscorlib.dll::System::Object::Object_GetType(initialValue,(MethodInfo *)0x0);
    pIVar7 = TypeRef__System__Type;
    if (targetType == pTVar6) {
      return initialValue;
    }
    pOVar8 = (Object *)0x0;
    if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
      pOVar8 = initialValue;
    }
    if (pOVar8 != (Object *)0x0) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
      if (pTVar9 == (Type *)0x0) goto code_?;
      cVar10 = (*(code *)(pTVar9->klass->vtable).IsAssignableFrom.method)();
      if (cVar10 != '\0') {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar3 = (String *)func_?();
        typeName = (String *)func_?(pSVar3);
        pTVar6 = mscorlib.dll::System::Type::Type_GetType_1(typeName,1,(MethodInfo *)0x0);
        if (pTVar6 == (Type *)0x0) {
          pTVar6 = mscorlib.dll::System::Type::Type_GetType_1(pSVar3,1,(MethodInfo *)0x0);
        }
        return (Object *)pTVar6;
      }
    }
    if (targetType == (Type *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Type::Type_get_IsInterface(targetType,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      cVar10 = (*(code *)(targetType->klass->vtable).get_IsGenericTypeDefinition.method)();
      if (cVar10 == '\0') {
        bVar5 = mscorlib.dll::System::Type::Type_get_IsAbstract(targetType,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          iVar11 = func_?();
          pIVar7 = TypeRef__System__IConvertible;
          if (iVar11 != 0) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            if (pTVar9 == (Type *)0x0) goto code_?;
            cVar10 = func_?();
            if (cVar10 != '\0') {
              bVar5 = mscorlib.dll::System::Type::Type_get_IsEnum(targetType,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pOVar8 = (Object *)0x0;
                if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
                  pOVar8 = initialValue;
                }
                if (pOVar8 != (Object *)0x0) {
                  pSVar3 = (String *)func_?();
                  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pOVar8 = mscorlib.dll::System::Enum::Enum_Parse_1
                                     (targetType,pSVar3,1,(MethodInfo *)0x0);
                  return pOVar8;
                }
                if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar5 = ConvertUtils_IsInteger(initialValue,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pOVar8 = mscorlib.dll::System::Enum::Enum_ToObject_4
                                     (targetType,initialValue,(MethodInfo *)0x0);
                  return pOVar8;
                }
              }
              if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                func_?();
              }
              pOVar8 = mscorlib.dll::System::Convert::Convert_ChangeType_1
                                 (initialValue,targetType,(IFormatProvider *)culture,
                                  (MethodInfo *)0x0);
              return pOVar8;
            }
          }
          pIVar7 = TypeRef__System__DateTimeOffset;
          pOVar8 = (Object *)0x0;
          if ((DateTime__Class *)initialValue->klass == TypeInfo__System__DateTime) {
            pOVar8 = initialValue;
          }
          if (pOVar8 != (Object *)0x0) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            if (targetType == pTVar9) {
              puVar12 = (undefined4 *)func_?();
              func_?(&stack0xffffffcc,*puVar12,puVar12[1]);
              pOVar8 = (Object *)func_?(TypeInfo__System__DateTimeOffset,&stack0xffffffe4);
              return pOVar8;
            }
          }
          pIVar7 = TypeRef__System__Guid;
          pOVar8 = (Object *)0x0;
          if ((String__Class *)initialValue->klass == TypeInfo__System__String) {
            pOVar8 = initialValue;
          }
          if (pOVar8 != (Object *)0x0) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            pIVar7 = TypeRef__System__Uri;
            if (targetType == pTVar9) {
              func_?();
              func_?();
              pOVar8 = (Object *)func_?(TypeInfo__System__Guid,&stack0xffffffd4);
              return pOVar8;
            }
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            pIVar7 = TypeRef__System__TimeSpan;
            if (targetType == pTVar9) {
              this = (Uri *)func_?(TypeInfo__System__Uri);
              pMVar13 = (MethodInfo *)0x0;
              pSVar3 = (String *)func_?(initialValue,TypeInfo__System__String);
              System.dll::System::Uri::Uri__ctor(this,pSVar3,pMVar13);
              return (Object *)this;
            }
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            if (targetType == pTVar9) {
              if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar13 = (MethodInfo *)0x0;
              pSVar3 = (String *)func_?(initialValue,TypeInfo__System__String);
              mscorlib.dll::System::TimeSpan::TimeSpan_Parse(pSVar3,pMVar13);
              pOVar8 = (Object *)func_?(TypeInfo__System__TimeSpan);
              return pOVar8;
            }
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar14 = ConvertUtils_GetConverter(pTVar6,(MethodInfo *)0x0);
          if (pTVar14 != (TypeConverter *)0x0) {
            bVar5 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                              (pTVar14,targetType,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pOVar8 = (Object *)(*(code *)(pTVar14->klass->vtable).ConvertTo.method)();
              return pOVar8;
            }
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar14 = ConvertUtils_GetConverter(targetType,(MethodInfo *)0x0);
          if (pTVar14 != (TypeConverter *)0x0) {
            bVar5 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertFrom
                              (pTVar14,pTVar6,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pOVar8 = (Object *)(*(code *)(pTVar14->klass->vtable).ConvertFrom.method)();
              return pOVar8;
            }
          }
          if ((((uint)(TypeInfo__System__DBNull->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__DBNull->_1).cctor_started == 0)) {
            func_?();
          }
          if ((DBNull *)initialValue != TypeInfo__System__DBNull->static_fields->Value)
          goto code_?;
          bVar5 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
              func_?();
            }
            pOVar8 = ConvertUtils_EnsureTypeAssignable
                               ((Object *)0x0,pTVar6,targetType,(MethodInfo *)0x0);
            return pOVar8;
          }
          goto code_?;
        }
      }
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar2 = (Object__Array *)func_?();
  func_?();
  func_?(pOVar2);
  func_?();
  pSVar3 = StringUtils::StringUtils_FormatWith
                     (StringLiteral_Target_type__0__is_not_a_value_t,(IFormatProvider *)pCVar1,
                      pOVar2,(MethodInfo *)0x0);
  this_01 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this_01,pSVar3,StringLiteral_targetType,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pOVar8 = (Object *)(*pcVar15)();
  return pOVar8;
}


/* Object ConvertOrCast(Object, CultureInfo, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_ConvertOrCast
                   (Object *initialValue,CultureInfo *culture,Type *targetType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Object;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (targetType == pTVar1) {
    return initialValue;
  }
  if (initialValue == (Object *)0x0) {
    bVar2 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return (Object *)0x0;
    }
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = initialValue;
    (this->fields).state = (int32_t)culture;
    (this->fields).originalScale.x = (float)targetType;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2____m__0__
               ,
               MethodInfo__Newtonsoft__Json__Utilities__Creator<System::Object>__Creator_System__Object__void__
              );
    output = (Object__Class *)&stack0xfffffff8;
    bVar2 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                      ((Creator_1_System_Object_ *)this_00,(Object **)output,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                      );
    if (bVar2 == 0) {
      if (initialValue == (Object *)0x0) {
        pTVar1 = (Type *)0x0;
      }
      else {
        pTVar1 = mscorlib.dll::System::Object::Object_GetType(initialValue,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar3 = ConvertUtils_EnsureTypeAssignable(initialValue,pTVar1,targetType,(MethodInfo *)0x0);
      return pOVar3;
    }
    return (Object *)output;
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(initialValue,pCVar1,*method->parameters)
  ;
  return pOVar2;
}


/* Object ConvertOrCast[Object](Object, CultureInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
         ConvertUtils_ConvertOrCast_2(Object *initialValue,CultureInfo *culture,MethodInfo *method)

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
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils_ConvertOrCast(initialValue,culture,targetType,(MethodInfo *)0x0);
  if ((method->parameters[1][0x17].type & 1) == 0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar2 = (Object *)(*(code *)(*method->parameters)->data)(initialValue,pCVar1,*method->parameters)
  ;
  return pOVar2;
}


/* Object Convert[Object](Object, CultureInfo) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_Convert_2
                   (Object *initialValue,CultureInfo *culture,MethodInfo *method)

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
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils_Convert(initialValue,culture,targetType,(MethodInfo *)0x0);
  if ((method->parameters[1][0x17].type & 1) == 0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils___CreateCastConverter_c__AnonStorey0;
  pSStack_1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSStack_1,0.0,(MethodInfo *)method_00);
  pTVar2 = (Type__Array *)func_?(TypeInfo__System__Type,1);
  if (pTVar2 == (Type__Array *)0x0) goto code_?;
  if (t._initialType == (Type *)0x0) {
code_?:
    if (pTVar2->max_length == 0) goto code_?;
    pTVar2->vector[0] = t._initialType;
    if (t._targetType == (Type *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    pMVar3 = mscorlib.dll::System::Type::Type_GetMethod_2
                       (t._targetType,StringLiteral_op_Implicit,pTVar2,(MethodInfo *)0x0);
    if (pMVar3 != (MethodInfo_1 *)0x0) {
code_?:
      if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->vtable
                  ).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).
          cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->vtable
                  ).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->_1).
          cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory);
      }
      pLVar4 = TypeInfo__Newtonsoft__Json__Utilities__LateBoundReflectionDelegateFactory->
               static_fields->_instance;
      if (pLVar4 != (LateBoundReflectionDelegateFactory *)0x0) {
        puVar5 = (undefined4 *)
                 func_?((&(pLVar4->klass->vtable).Finalize)
                                 [Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                  ->flags].methodPtr,
                                 Newtonsoft__Json__Utilities__MethodCall<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateMethodCall<System::Object>_System__Reflection__MethodBase_
                                );
        pvVar6 = (void *)(*(code *)*puVar5)(pLVar4,pMVar3,puVar5);
        if (pSStack_1 != (ScaleAnimationBase *)0x0) {
          (pSStack_1->fields)._._._._.m_CachedPtr = pvVar6;
          this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Func<System::Object,_System::Object>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this,(Object *)pSStack_1,
                     MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils___CreateCastConverter_c__AnonStorey0____m__0_System__Object_
                     ,
                     MethodInfo__System__Func<System::Object,_System::Object>__Func_System__Object__void__
                    );
          return (Func_2_Object_Object_ *)this;
        }
      }
      goto code_?;
    }
    pTVar2 = (Type__Array *)func_?(TypeInfo__System__Type);
    if (pTVar2 == (Type__Array *)0x0) goto code_?;
    if (t._initialType == (Type *)0x0) {
code_?:
      if (pTVar2->max_length == 0) goto code_?;
      pTVar2->vector[0] = t._initialType;
      pMVar3 = mscorlib.dll::System::Type::Type_GetMethod_2
                         (t._targetType,StringLiteral_op_Explicit,pTVar2,(MethodInfo *)0x0);
      if (pMVar3 == (MethodInfo_1 *)0x0) {
        return (Func_2_Object_Object_ *)0x0;
      }
      goto code_?;
    }
    iVar7 = func_?(t._initialType,(pTVar2->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
  }
  else {
    iVar7 = func_?(t._initialType,(pTVar2->klass->_0).element_class);
    if (iVar7 != 0) goto code_?;
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
  }
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0);
  func_?(uVar8);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    bVar1 = ReflectionUtils::ReflectionUtils_IsNullable(targetType,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (Object *)0x0;
    }
  }
  else {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    if (targetType == (Type *)0x0) goto code_?;
    cVar3 = (*(code *)(targetType->klass->vtable).IsAssignableFrom.method)
                      (targetType,pTVar2,(targetType->klass->vtable).IsInstanceOfType.methodPtr);
    if (cVar3 != '\0') {
      return value;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    }
    this = TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->CastConverters;
    if (this == (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Func_2_Object_Object_ *)0x0)
    goto code_?;
    key._targetType = targetType;
    key._initialType = pTVar2;
    this_00 = (Func_2_Object_Int32_ *)
              ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
              ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object__Get
                        ((ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *)this,key,
                         MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__Get_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
                        );
    if (this_00 != (Func_2_Object_Int32_ *)0x0) {
      pOVar4 = (Object *)
               System.Core.dll::System::Func`2[Object,Int32]::Func_2_Object_Int32__Invoke
                         (this_00,value,
                          MethodInfo__System__Func<System::Object,_System::Object>__Invoke_System__Object_
                         );
      return pOVar4;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  pSVar5 = StringLiteral__null_;
  format = StringLiteral_Could_not_cast_or_convert_from__;
  if (initialType != (Type *)0x0) {
    func_?(initialType,0);
    pSVar5 = (String *)func_?(3,initialType);
  }
  func_?(args,0);
  func_?(args,pSVar5);
  func_?(0,pSVar5);
  func_?(args,0);
  func_?(args,targetType);
  func_?(1,targetType);
  pSVar5 = StringUtils::StringUtils_FormatWith
                     (format,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
  func_?(this_01,0);
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* TypeConverter GetConverter(Type) */

TypeConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_GetConverter
          (Type *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if (t == (Type *)0x0) {
    this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,StringLiteral_type,(MethodInfo *)0x0);
    piVar1 = (int *)func_?(this_00,0,
                                    MethodInfo__System__ComponentModel__TypeDescriptor__GetConverter_System__Type_
                                   );
    pTVar2 = extraout_ECX;
code_?:
    func_?(piVar1,pTVar2);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar4 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
    }
    pAVar5 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetAttributes
                       (t,(MethodInfo *)0x0);
    pIVar6 = TypeRef__System__ComponentModel__TypeConverterAttribute;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (pAVar5 == (AttributeCollection *)0x0) goto code_?;
    piVar1 = (int *)(*(code *)(pAVar5->klass->vtable).get_Item.method)
                              (pAVar5,pTVar7,pAVar5->klass[1]._0.image);
    if (piVar1 == (int *)0x0) goto code_?;
    piVar8 = (int *)0x0;
    if ((TypeConverterAttribute__Class *)*piVar1 ==
        TypeInfo__System__ComponentModel__TypeConverterAttribute) {
      piVar8 = piVar1;
    }
    pTVar2 = TypeInfo__System__ComponentModel__TypeConverterAttribute;
    if (piVar8 == (int *)0x0) goto code_?;
    if ((Collection_1_VoxelHit_ *)piVar8[2] == (Collection_1_VoxelHit_ *)0x0)
    goto code_?;
    pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)piVar8[2],(MethodInfo *)0x0);
    if ((int)pIVar9 < 1) {
code_?:
      if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__ComponentModel__TypeDescriptor);
      }
      pTVar7 = System.dll::System::ComponentModel::TypeDescriptor::
               TypeDescriptor_FindDefaultConverterType(t,(MethodInfo *)0x0);
      if (pTVar7 == (Type *)0x0) {
        return (TypeConverter *)0x0;
      }
    }
    else {
      typeName = (String *)piVar8[2];
      if ((((uint)(TypeInfo__System__ComponentModel__TypeDescriptor->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__ComponentModel__TypeDescriptor->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar7 = System.dll::System::ComponentModel::TypeDescriptor::TypeDescriptor_GetTypeFromName
                         ((IComponent *)0x0,typeName,(MethodInfo *)0x0);
      if (pTVar7 == (Type *)0x0) goto code_?;
    }
    types = (Type__Array *)func_?();
    pIVar6 = TypeRef__System__Type;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
    if (types == (Type__Array *)0x0) goto code_?;
    if (pTVar10 != (Type *)0x0) {
      iVar11 = func_?(pTVar10,(types->klass->_0).element_class);
      if (iVar11 == 0) goto code_?;
    }
    if (types->max_length == 0) goto code_?;
    types->vector[0] = pTVar10;
    if (pTVar7 == (Type *)0x0) goto code_?;
    this = mscorlib.dll::System::Type::Type_GetConstructor(pTVar7,types,(MethodInfo *)0x0);
    pOVar12 = TypeInfo__System__Object;
    if (this == (ConstructorInfo *)0x0) {
      mscorlib.dll::System::Activator::Activator_CreateInstance(pTVar7,(MethodInfo *)0x0);
      pTVar13 = (TypeConverter *)func_?();
      return pTVar13;
    }
    parameters = (Object__Array *)func_?();
    if (parameters == (Object__Array *)0x0) goto code_?;
    func_?(parameters,pOVar12);
    uVar4 = 0;
    if (parameters->max_length != 0) {
      parameters->vector[0] = (Object *)pOVar12;
      pOVar14 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                          (this,parameters,(MethodInfo *)0x0);
      pTVar13 = (TypeConverter *)
                func_?(pOVar14,TypeInfo__System__ComponentModel__TypeConverter);
      return pTVar13;
    }
  }
  uVar3 = func_?(0,uVar4);
  func_?(uVar3);
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  pTVar13 = (TypeConverter *)(*pcVar15)();
  return pTVar13;
}


/* Boolean IsComponentConverter(TypeConverter) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::
     ConvertUtils_IsComponentConverter(TypeConverter *converter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (converter != (TypeConverter *)0x0) {
    bVar1 = (TypeInfo__System__ComponentModel__ComponentConverter->_1).naturalAligment;
    if ((bVar1 <= (converter->klass->_1).naturalAligment) &&
       ((converter->klass->_1).typeHierarchy[bVar1 - 1] ==
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  TVar1 = mscorlib.dll::System::Convert::Convert_GetTypeCode(value,(MethodInfo *)0x0);
  switch(TVar1) {
  case TypeCode__Enum_SByte:
  case TypeCode__Enum_Byte:
  case TypeCode__Enum_Int16:
  case TypeCode__Enum_UInt16:
  case TypeCode__Enum_Int32:
  case TypeCode__Enum_UInt32:
  case TypeCode__Enum_Int64:
  case TypeCode__Enum_UInt64:
    return 1;
  default:
    return 0;
  }
}


/* Boolean TryConvert(Object, CultureInfo, Type, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvert
               (Object *initialValue,CultureInfo *culture,Type *targetType,Object **convertedValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)culture;
    (this->fields)._._._._.m_CachedPtr = initialValue;
    (this->fields).originalScale.x = (float)targetType;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvert_c__AnonStorey2____m__0__
               ,
               MethodInfo__Newtonsoft__Json__Utilities__Creator<System::Object>__Creator_System__Object__void__
              );
    bVar1 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                      ((Creator_1_System_Object_ *)this_00,convertedValue,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                      );
    return bVar1;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvertOrCast_c__AnonStorey4;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields).state = (int32_t)culture;
    (this->fields)._._._._.m_CachedPtr = initialValue;
    (this->fields).originalScale.x = (float)targetType;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__Newtonsoft__Json__Utilities__Creator<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils___TryConvertOrCast_c__AnonStorey4____m__0__
               ,
               MethodInfo__Newtonsoft__Json__Utilities__Creator<System::Object>__Creator_System__Object__void__
              );
    bVar1 = MiscellaneousUtils::MiscellaneousUtils_TryAction
                      ((Creator_1_System_Object_ *)this_00,convertedValue,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__MiscellaneousUtils__TryAction<System::Object>_Newtonsoft__Json__Utilities__Creator<System::Object>__System__Object__
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryConvertOrCast[Object](Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvertOrCast_1
               (Object *initialValue,Object **convertedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  bVar2 = (*(code *)(*method->parameters)->data)
                    (initialValue,pCVar1,convertedValue,*method->parameters);
  return bVar2;
}


/* Boolean TryConvertOrCast[Object](Object, CultureInfo, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvertOrCast_2
               (Object *initialValue,CultureInfo *culture,Object **convertedValue,MethodInfo *method
               )

{
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  iVar2 = func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(iVar2,method->parameters[1]);
  if (iVar2 != 0) {
    *(Object **)(iVar2 + 8) = initialValue;
    pIVar1 = method->parameters[3];
    if ((pIVar1[0x17].type & 1) == 0) {
      func_?(pIVar1);
    }
    uVar3 = func_?(pIVar1);
    pIVar1 = method->parameters[4];
    (*(code *)pIVar1->data)(uVar3,iVar2,method->parameters[2],pIVar1);
    bVar4 = (*(code *)method->parameters[5]->data)(uVar3,convertedValue,method->parameters[5]);
    return bVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean TryConvert[Object](Object, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils_TryConvert_1
               (Object *initialValue,Object **convertedValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  bVar2 = (*(code *)(*method->parameters)->data)
                    (initialValue,pCVar1,convertedValue,*method->parameters);
  return bVar2;
}


/* ConvertUtils() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->__f__mg_cache0 ==
      (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Func_2_Object_Object_ *)0x0) {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__Utilities__ConvertUtils__CreateCastConverter_Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->__f__mg_cache0 =
         (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Func_2_Object_Object_ *)this;
  }
  creator = (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *)
            TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->__f__mg_cache0;
  this_00 = (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Func_2_Object_Object_ *)
            func_?(
                           TypeInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>
                           );
  ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
  ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object___ctor
            ((ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *)this_00,creator,
             MethodInfo__Newtonsoft__Json__Utilities__ThreadSafeStore<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>__ThreadSafeStore_System__Func<Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey,_System::Func<System::Object,_System::Object>_>_
            );
  TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->static_fields->CastConverters = this_00;
  return;
}

