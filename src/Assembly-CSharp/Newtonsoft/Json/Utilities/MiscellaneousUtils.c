
/* Int32 ByteArrayCompare(Byte[], Byte[]) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
        MiscellaneousUtils_ByteArrayCompare(Byte__Array *a1,Byte__Array *a2,MethodInfo *method)

{
  pBVar1 = a2;
  pBVar2 = a1;
  if ((a1 != (Byte__Array *)0x0) && (a1 = (Byte__Array *)a1->max_length, a2 != (Byte__Array *)0x0))
  {
    iVar3 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                      ((Int32 *)&a1,a2->max_length,(MethodInfo *)0x0);
    if (iVar3 == 0) {
      for (uVar4 = 0; (int)uVar4 < (int)pBVar2->max_length; uVar4 = uVar4 + 1) {
        if ((pBVar1->max_length <= uVar4) || (pBVar2->max_length <= uVar4)) goto code_?;
        iVar3 = mscorlib.dll::System::Byte::Byte_CompareTo_1
                          ((Byte *)(pBVar2->vector + uVar4),pBVar1->vector[uVar4],(MethodInfo *)0x0)
        ;
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar3 = 0;
    }
    return iVar3;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
}


/* String BytesToHex(Byte[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_BytesToHex(Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter,unaff_EBP);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__BitConverter);
    }
    pSVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToString
                       (bytes,0,bytes->max_length,(MethodInfo *)0x0);
    return pSVar1;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
            (ExceptionArgument__Enum_value,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String BytesToHex(Byte[], Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_BytesToHex_1(Byte__Array *bytes,bool removeDashes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToString_1(bytes,(MethodInfo *)0x0);
  if (removeDashes != 0) {
    if (pSVar1 == (String *)0x0) {
      uVar2 = func_?(&stack0xfffffff8);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar1,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* ArgumentOutOfRangeException CreateArgumentOutOfRangeException(String, Object, String) */

ArgumentOutOfRangeException *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
MiscellaneousUtils_CreateArgumentOutOfRangeException
          (String *paramName,Object *actualValue,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Actual_value_was__0__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
    pSVar2 = unaff_EBX;
  }
  else {
    if (actualValue != (Object *)0x0) {
      iVar3 = func_?(actualValue,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    pSVar2 = unaff_EBX;
    if (args->max_length != 0) {
      args->vector[0] = actualValue;
      func_?(args->vector,actualValue);
      format = StringLiteral_Actual_value_was__0__;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_format);
        cRam_? = '\x01';
      }
      pSVar2 = StringLiteral_format;
      if (format == (String *)0x0) goto code_?;
      pSVar2 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)provider,format,args,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (message,unaff_ESI,pSVar2,(MethodInfo *)0x0);
      pAVar4 = (ArgumentOutOfRangeException *)
               func_?(TypeInfo__System__ArgumentOutOfRangeException);
      if (pAVar4 != (ArgumentOutOfRangeException *)0x0) {
        mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                  (pAVar4,paramName,pSVar2,(MethodInfo *)0x0);
        return pAVar4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this = (ArgumentNullException *)func_?(uVar1);
  func_?(this);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,pSVar2,(MethodInfo *)0x0);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                         );
  func_?(this,uVar1);
  pcVar5 = (code *)swi(3);
  pAVar4 = (ArgumentOutOfRangeException *)(*pcVar5)();
  return pAVar4;
}


/* String GetLocalName(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_GetLocalName(String *qualifiedName,MethodInfo *method)

{
  pSVar1 = qualifiedName;
  if (qualifiedName != (String *)0x0) {
    length = mscorlib.dll::System::String::String_IndexOf(qualifiedName,0x3a,(MethodInfo *)0x0);
    if (((length == -1) || (length == 0)) || ((pSVar1->fields)._stringLength + -1 == length)) {
      qualifiedName = (String *)0x0;
      func_?(&qualifiedName);
    }
    else {
      qualifiedName =
           mscorlib.dll::System::String::String_Substring_1(pSVar1,0,length,(MethodInfo *)0x0);
      func_?(&qualifiedName);
      pSVar1 = mscorlib.dll::System::String::String_Substring(pSVar1,length + 1,(MethodInfo *)0x0);
    }
    puStack2 = &stack0xfffffff8;
    pSStack3 = pSVar1;
    func_?();
    return pSVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* String GetPrefix(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_GetPrefix(String *qualifiedName,MethodInfo *method)

{
  pSVar1 = qualifiedName;
  if (qualifiedName != (String *)0x0) {
    length = mscorlib.dll::System::String::String_IndexOf(qualifiedName,0x3a,(MethodInfo *)0x0);
    if (((length == -1) || (length == 0)) || ((pSVar1->fields)._stringLength + -1 == length)) {
      qualifiedName = (String *)0x0;
      func_?(&qualifiedName);
    }
    else {
      qualifiedName =
           mscorlib.dll::System::String::String_Substring_1(pSVar1,0,length,(MethodInfo *)0x0);
      func_?(&qualifiedName);
      pSVar1 = mscorlib.dll::System::String::String_Substring(pSVar1,length + 1,(MethodInfo *)0x0);
    }
    puStack2 = &stack0xfffffff8;
    pSStack3 = pSVar1;
    func_?();
    return qualifiedName;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Void GetQualifiedNameParts(String, String ByRef, String ByRef) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
     MiscellaneousUtils_GetQualifiedNameParts
               (String *qualifiedName,String **prefix,String **localName,MethodInfo *method)

{
  if (qualifiedName == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  length = mscorlib.dll::System::String::String_IndexOf(qualifiedName,0x3a,(MethodInfo *)0x0);
  if (((length != -1) && (length != 0)) && ((qualifiedName->fields)._stringLength + -1 != length)) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1
                       (qualifiedName,0,length,(MethodInfo *)0x0);
    *prefix = pSVar2;
    func_?(prefix,pSVar2);
    pSVar2 = mscorlib.dll::System::String::String_Substring
                       (qualifiedName,length + 1,(MethodInfo *)0x0);
    *localName = pSVar2;
    func_?(localName,pSVar2);
    return;
  }
  *prefix = (String *)0x0;
  func_?(prefix,0);
  *localName = qualifiedName;
  func_?(localName,qualifiedName);
  return;
}


/* Byte[] HexToBytes(String) */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_HexToBytes
          (String *hex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((hex != (String *)0x0) &&
     (this = mscorlib.dll::System::String::String_Replace_1
                       (hex,::StringLiteral__,TypeInfo__System__String->static_fields->Empty,
                        (MethodInfo *)0x0), this != (String *)0x0)) {
    pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,(this->fields)._stringLength / 2)
    ;
    index = 0;
    bVar2 = 4;
    hex = (String *)0x0;
    pSVar3 = hex;
    while( true ) {
      hex = pSVar3;
      if ((this->fields)._stringLength <= index) {
        return pBVar1;
      }
      uVar4 = mscorlib.dll::System::String::String_get_Chars(this,index,(MethodInfo *)0x0);
      uVar5 = uVar4 - 0x30 & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      cVar6 = (char)uVar5 + -7;
      if ((int)uVar5 < 10) {
        cVar6 = (char)uVar5;
      }
      if (pBVar1 == (Byte__Array *)0x0) break;
      pbVar7 = (byte *)func_?(hex);
      *pbVar7 = *pbVar7 | cVar6 << bVar2;
      bVar2 = bVar2 ^ 4;
      index = index + 1;
      pSVar3 = (String *)((int)&hex->klass + 1);
      if (bVar2 == 0) {
        pSVar3 = hex;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar8)();
  return pBVar1;
}


/* String ToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_ToString(Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__null_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    return StringLiteral__null_;
  }
  pSVar1 = (String__Class *)value->klass;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == TypeInfo__System__String) {
    pOVar2 = value;
  }
  pIVar3 = (pSVar1->vtable).ToString.methodPtr;
  pMVar4 = (pSVar1->vtable).ToString.method;
  if (pOVar2 != (Object *)0x0) {
    pSVar5 = (String *)(*pIVar3)(value,pMVar4);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,pSVar5,::StringLiteral__,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = (String *)(*pIVar3)(value,pMVar4);
  return pSVar5;
}


/* Boolean TryAction[Object](Creator`1[System.Object], Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
     MiscellaneousUtils_TryAction
               (Creator_1_System_Object_ *creator,Object **output,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_creator);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)creator,StringLiteral_creator,(MethodInfo *)0x0);
  uStack_1 = 0;
  if (creator != (Creator_1_System_Object_ *)0x0) {
    pOVar4 = (Object *)(*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)();
    *output = pOVar4;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean ValueEquals(Object, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
     MiscellaneousUtils_ValueEquals(Object *objA,Object *objB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (objA == (Object *)0x0) {
    if (objB == (Object *)0x0) {
      return 1;
    }
  }
  else if (objB != (Object *)0x0) {
    left._source = (CancellationTokenSource *)
                   mscorlib.dll::System::Object::Object_GetType(objA,(MethodInfo *)0x0);
    right._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Object::Object_GetType(objB,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = (*(objA->klass->vtable).Equals.methodPtr)();
      return bVar1;
    }
    if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = ConvertUtils::ConvertUtils_IsInteger(objA,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      bVar1 = ConvertUtils::ConvertUtils_IsInteger(objB,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToDecimal_1
                  ((Decimal *)&stack0xffffffe4,objA,(IFormatProvider *)pCVar2,(MethodInfo *)0x0);
        pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                           ((MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                           ((Decimal *)&stack0xffffffe4,objB,(IFormatProvider *)pCVar2,
                            (MethodInfo *)0x0);
        iStack4 = pDVar3->mid;
        uVar5 = pDVar3->hi;
        uVar6 = pDVar3->lo;
        uVar7 = pDVar3->mid;
        value.lo = uVar7;
        value.hi = uVar6;
        value.flags = uVar5;
        uStack8 = 0;
        value.mid = 0;
        value.ulomidLE = in_stack_9;
        bVar1 = mscorlib.dll::System::Decimal::Decimal_Equals_1
                          ((Decimal *)&stack0xffffffd4,value,in_stack_10);
        return bVar1;
      }
    }
    pOVar11 = (Object *)0x0;
    if ((Double__Class *)objA->klass == TypeInfo__System__Double) {
      pOVar11 = objA;
    }
    if (pOVar11 == (Object *)0x0) {
      pOVar11 = (Object *)0x0;
      if ((Single__Class *)objA->klass == TypeInfo__System__Single) {
        pOVar11 = objA;
      }
      if (pOVar11 == (Object *)0x0) {
        pOVar11 = (Object *)0x0;
        if ((Decimal__Class *)objA->klass == TypeInfo__System__Decimal) {
          pOVar11 = objA;
        }
        if (pOVar11 == (Object *)0x0) {
          return 0;
        }
      }
    }
    pOVar11 = (Object *)0x0;
    if ((Double__Class *)objB->klass == TypeInfo__System__Double) {
      pOVar11 = objB;
    }
    if (pOVar11 == (Object *)0x0) {
      pOVar11 = (Object *)0x0;
      if ((Single__Class *)objB->klass == TypeInfo__System__Single) {
        pOVar11 = objB;
      }
      if (pOVar11 == (Object *)0x0) {
        pOVar11 = (Object *)0x0;
        if ((Decimal__Class *)objB->klass == TypeInfo__System__Decimal) {
          pOVar11 = objB;
        }
        if (pOVar11 == (Object *)0x0) {
          return 0;
        }
      }
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    dVar12 = mscorlib.dll::System::Convert::Convert_ToDouble
                      (objA,(IFormatProvider *)pCVar2,(MethodInfo *)0x0);
    pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)((ulonglong)dVar12 >> 0x20));
    dVar13 = (double)ZEXT48(pCVar2);
    dVar12 = mscorlib.dll::System::Convert::Convert_ToDouble
                      (objB,(IFormatProvider *)pCVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    return (double)CONCAT44((uint)((ulonglong)(dVar13 - dVar12) >> 0x20) & _UNK_?,
                            SUB84(dVar13 - dVar12,0) & _UNK_?) <
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_?,
                            SUB84(dVar13,0) & _UNK_?) * _UNK_?;
  }
  return 0;
}

