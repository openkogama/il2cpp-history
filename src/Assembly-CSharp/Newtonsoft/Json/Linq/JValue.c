
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CloneToken
                   (JValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if ((pJVar1 != (JToken *)0x0) && (this != (JValue *)0x0)) {
    pOVar2 = (this->fields)._value;
    pJVar3 = (JToken__Class *)
             (*(this->klass->vtable).get_Type.methodPtr)(this,(this->klass->vtable).get_Type.method)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    pJVar1[1].monitor = (MonitorData *)pOVar2;
    func_?(&pJVar1[1].monitor,pOVar2);
    pJVar1[1].klass = pJVar3;
    return pJVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar4)();
  return pJVar1;
}


/* Int32 Compare(JTokenType, Object, Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Compare
                  (JTokenType__Enum valueType,Object *objA,Object *objB,MethodInfo *method)

{
  pAVar1 = (ArgumentException *)objB;
  pOVar2 = objA;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Comparer<System::String>__get_Default__
                   );
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Guid);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__System__UInt64);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  pUVar3 = TypeInfo__System__Uri;
  uVar4._0_1_ = 0;
  uVar4._1_1_ = 0;
  uVar4._2_1_ = 0;
  uVar4._3_1_ = 0;
  DStack_5.flags = 0;
  DStack_5.hi = 0;
  DStack_5.lo = 0;
  DStack_5.mid = 0;
  uVar6 = 0;
  pMVar7 = (MethodInfo *)0x0;
  if (pOVar2 == (Object *)0x0) {
    if (pAVar1 != (ArgumentException *)0x0) {
      return -1;
    }
    return 0;
  }
  if (pAVar1 == (ArgumentException *)0x0) {
    return 1;
  }
  JVar8 = valueType;
  switch(valueType) {
  case JTokenType__Enum_Comment:
  case JTokenType__Enum_String:
  case JTokenType__Enum_Raw:
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    unaff_EBX = (Uri__Class *)
                mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar9 = mscorlib.dll::System::Convert::Convert_ToString_1
                        (pOVar2,(IFormatProvider *)unaff_EBX,(MethodInfo *)0x0);
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Convert::Convert_ToString_1
                        ((Object *)pAVar1,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
    pOVar2 = (Object *)0x0;
    if (pSVar9 != (String *)0x0) {
      iVar12 = mscorlib.dll::System::String::String_CompareTo_1(pSVar9,pSVar11,(MethodInfo *)0x0);
      return iVar12;
    }
    goto code_?;
  case JTokenType__Enum_Integer:
    pOVar13 = (Object *)0x0;
    if ((UInt64__Class *)pOVar2->klass == TypeInfo__System__UInt64) {
      pOVar13 = pOVar2;
    }
    if (pOVar13 == (Object *)0x0) {
      pOVar13 = (Object *)0x0;
      if ((UInt64__Class *)((Object *)pAVar1)->klass == TypeInfo__System__UInt64) {
        pOVar13 = (Object *)pAVar1;
      }
      if (pOVar13 == (Object *)0x0) {
        pOVar13 = (Object *)0x0;
        if ((Decimal__Class *)pOVar2->klass == TypeInfo__System__Decimal) {
          pOVar13 = pOVar2;
        }
        if (pOVar13 == (Object *)0x0) {
          pOVar13 = (Object *)0x0;
          if ((Decimal__Class *)((Object *)pAVar1)->klass == TypeInfo__System__Decimal) {
            pOVar13 = (Object *)pAVar1;
          }
          if (pOVar13 == (Object *)0x0) {
            pOVar13 = (Object *)0x0;
            if ((Single__Class *)pOVar2->klass == TypeInfo__System__Single) {
              pOVar13 = pOVar2;
            }
            if (pOVar13 == (Object *)0x0) {
              pOVar13 = (Object *)0x0;
              if ((Single__Class *)((Object *)pAVar1)->klass == TypeInfo__System__Single) {
                pOVar13 = (Object *)pAVar1;
              }
              if (pOVar13 == (Object *)0x0) {
                pOVar13 = (Object *)0x0;
                if ((Double__Class *)pOVar2->klass == TypeInfo__System__Double) {
                  pOVar13 = pOVar2;
                }
                if (pOVar13 == (Object *)0x0) {
                  pOVar13 = (Object *)0x0;
                  if ((Double__Class *)((Object *)pAVar1)->klass == TypeInfo__System__Double) {
                    pOVar13 = (Object *)pAVar1;
                  }
                  if (pOVar13 == (Object *)0x0) {
                    if ((TypeInfo__System__Globalization__CultureInfo->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__System__Globalization__CultureInfo);
                    }
                    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                              CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__System__Convert);
                    }
                    IStack_14.m_value =
                         mscorlib.dll::System::Convert::Convert_ToInt64
                                   (pOVar2,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
                    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                              CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                    uVar15 = mscorlib.dll::System::Convert::Convert_ToInt64
                                       ((Object *)pAVar1,(IFormatProvider *)pCVar10,
                                        (MethodInfo *)0x0);
                    iVar12 = mscorlib.dll::System::Int64::Int64_CompareTo_1
                                       (&IStack_14,uVar15 >> 0x20,unaff_ESI);
                    return iVar12;
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar16 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                       ((Decimal *)&puStack_17,pOVar2,(IFormatProvider *)pCVar10,(MethodInfo *)0x0)
    ;
    DStack_5.flags = pDVar16->flags;
    DStack_5.hi = pDVar16->hi;
    DStack_5.lo = pDVar16->lo;
    DStack_5.mid = pDVar16->mid;
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pDVar16 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                       ((Decimal *)&puStack_17,(Object *)pAVar1,(IFormatProvider *)pCVar10,
                        (MethodInfo *)0x0);
    uVar18 = pDVar16->hi;
    uVar19 = pDVar16->lo;
    uVar20 = pDVar16->mid;
    value_00.lo = uVar20;
    value_00.hi = uVar19;
    value_00.flags = uVar18;
    value_00.mid = 0;
    value_00.ulomidLE._0_1_ = (uint8_t)uVar4;
    value_00.ulomidLE._1_1_ = SUB41(uVar4,1);
    value_00.ulomidLE._2_1_ = SUB41(uVar4,2);
    value_00.ulomidLE._3_1_ = SUB41(uVar4,3);
    value_00.ulomidLE._4_4_ = uVar6;
    iVar12 = mscorlib.dll::System::Decimal::Decimal_CompareTo_1(&DStack_5,value_00,pMVar7);
    return iVar12;
  case JTokenType__Enum_Float:
code_?:
    iVar12 = JValue_CompareFloat(pOVar2,(Object *)pAVar1,(MethodInfo *)0x0);
    return iVar12;
  case JTokenType__Enum_Boolean:
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    bVar21 = mscorlib.dll::System::Convert::Convert_ToBoolean
                      (pOVar2,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
    objA = (Object *)CONCAT13(bVar21,objA._0_3_);
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    bVar21 = mscorlib.dll::System::Convert::Convert_ToBoolean
                      ((Object *)pAVar1,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
    JStack_22 = CONCAT31(JStack_22._1_3_,bVar21);
    iVar12 = mscorlib.dll::System::Boolean::Boolean_CompareTo_1
                       ((Boolean *)((int)&objA + 3),bVar21,(MethodInfo *)0x0);
    return iVar12;
  default:
    goto code_?;
  case JTokenType__Enum_Date:
    pOVar13 = (Object *)0x0;
    if ((DateTime__Class *)pOVar2->klass == TypeInfo__System__DateTime) {
      pOVar13 = pOVar2;
    }
    if (pOVar13 != (Object *)0x0) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      DStack_23 = mscorlib.dll::System::Convert::Convert_ToDateTime
                            (pOVar2,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      DVar24 = mscorlib.dll::System::Convert::Convert_ToDateTime
                         ((Object *)pAVar1,(IFormatProvider *)pCVar10,(MethodInfo *)0x0);
      iVar12 = mscorlib.dll::System::DateTime::DateTime_CompareTo_1
                         (&DStack_23,(DateTime)(DVar24._dateData >> 0x20),unaff_ESI);
      return iVar12;
    }
    pOVar13 = (Object *)0x0;
    if ((DateTimeOffset__Class *)((Object *)pAVar1)->klass == TypeInfo__System__DateTimeOffset) {
      pOVar13 = (Object *)pAVar1;
    }
    if (pOVar13 != (Object *)0x0) {
      pDVar25 = TypeInfo__System__DateTimeOffset;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class
         ) {
        func_?(pOVar2);
        pDVar25 = TypeInfo__System__DateTimeOffset;
        if ((((Object *)pAVar1)->klass->_0).element_class ==
            (TypeInfo__System__DateTimeOffset->_0).element_class) {
          iVar26 = func_?(pAVar1);
          other._12_4_ = 0;
          other._0_12_ = *(undefined1 (*) [12])(iVar26 + 4);
          iVar12 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_CompareTo
                             ((DateTimeOffset *)&stack0xffffffb8,other,unaff_EDI);
          return iVar12;
        }
code_?:
        func_?(pAVar1,pDVar25);
        pDVar25 = extraout_ECX;
      }
code_?:
      func_?(pOVar2,pDVar25);
    }
    uVar6 = func_?(&TypeInfo__System__ArgumentException);
    pAVar1 = (ArgumentException *)func_?(uVar6);
    func_?(pAVar1);
    pMVar7 = (MethodInfo *)0x0;
    pSVar9 = (String *)func_?(&StringLiteral_Object_must_be_of_type_DateTimeO);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar1,pSVar9,pMVar7);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                   );
    func_?(pAVar1);
    break;
  case JTokenType__Enum_Bytes:
    iVar26 = func_?(pAVar1,TypeInfo__System__Byte);
    if (iVar26 != 0) {
      a1 = (Byte__Array *)func_?(pOVar2,TypeInfo__System__Byte);
      a2 = (Byte__Array *)func_?(pAVar1,TypeInfo__System__Byte);
      if (a1 == (Byte__Array *)0x0) {
        return -1;
      }
      if (a2 == (Byte__Array *)0x0) {
        return 1;
      }
      iVar12 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ByteArrayCompare
                         (a1,a2,(MethodInfo *)0x0);
      return iVar12;
    }
    break;
  case JTokenType__Enum_Guid:
    pOVar13 = (Object *)0x0;
    if ((Guid__Class *)((Object *)pAVar1)->klass == TypeInfo__System__Guid) {
      pOVar13 = (Object *)pAVar1;
    }
    if (pOVar13 != (Object *)0x0) {
      pDVar25 = (DateTimeOffset__Class *)TypeInfo__System__Guid;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Guid->_0).element_class) {
        iVar26 = func_?(pOVar2);
        uVar4 = *(undefined4 *)(iVar26 + 0xc);
        pDVar25 = (DateTimeOffset__Class *)TypeInfo__System__Guid;
        if ((((Object *)pAVar1)->klass->_0).element_class ==
            (TypeInfo__System__Guid->_0).element_class) {
          pGVar27 = (Guid *)func_?(pAVar1);
          iVar12 = mscorlib.dll::System::Guid::Guid_CompareTo_1
                             ((Guid *)&stack0xffffffa8,*pGVar27,(MethodInfo *)0x0);
          return iVar12;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  case JTokenType__Enum_Uri:
    iVar26 = func_?(pAVar1,TypeInfo__System__Uri);
    if (iVar26 != 0) {
      if (((pUVar3->_1).typeHierarchyDepth <= (pOVar2->klass->_1).typeHierarchyDepth) &&
         ((pOVar2->klass->_1).typeHierarchy[(pUVar3->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)pUVar3)) {
        if (((pUVar3->_1).typeHierarchyDepth <= (((Object *)pAVar1)->klass->_1).typeHierarchyDepth
            ) && ((((Object *)pAVar1)->klass->_1).typeHierarchy
                  [(pUVar3->_1).typeHierarchyDepth - 1] == (Il2CppClass *)pUVar3)) {
          pEVar28 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[UnityEngine::
                    UnitySynchronizationContext+WorkRequest]::
                    EqualityComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Default
                              (
                              MethodInfo__System__Collections__Generic__Comparer<System::String>__get_Default__
                              );
          pOVar2 = (Object *)func_?(3,pOVar2);
          func_?(3,pAVar1);
          unaff_EBX = (Uri__Class *)0x0;
          if (pEVar28 !=
              (EqualityComparer_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            iVar12 = (*(pEVar28->klass->vtable).Equals_1.methodPtr)();
            return iVar12;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  case JTokenType__Enum_TimeSpan:
    pOVar13 = (Object *)0x0;
    if ((TimeSpan__Class *)((Object *)pAVar1)->klass == TypeInfo__System__TimeSpan) {
      pOVar13 = (Object *)pAVar1;
    }
    if (pOVar13 != (Object *)0x0) {
      pDVar25 = (DateTimeOffset__Class *)TypeInfo__System__TimeSpan;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__TimeSpan->_0).element_class) {
        puVar29 = (undefined4 *)func_?(pOVar2);
        DStack_5.ulomidLE._0_4_ = *puVar29;
        DStack_5.ulomidLE._4_4_ = puVar29[1];
        pDVar25 = (DateTimeOffset__Class *)TypeInfo__System__TimeSpan;
        if ((((Object *)pAVar1)->klass->_0).element_class ==
            (TypeInfo__System__TimeSpan->_0).element_class) {
          iVar26 = func_?();
          value._ticks._4_4_ = 0;
          value._ticks._0_4_ = *(uint *)(iVar26 + 4);
          iVar12 = mscorlib.dll::System::TimeSpan::TimeSpan_CompareTo_1
                             ((TimeSpan *)&DStack_5.ulomidLE,value,(MethodInfo *)pAVar1);
          return iVar12;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  pAVar1 = (ArgumentException *)func_?(uVar6);
  func_?(pAVar1);
  pMVar7 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(&StringLiteral_Object_must_be_of_type_byte___);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar1,pSVar9,pMVar7);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                 );
  func_?(pAVar1);
code_?:
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  pAVar1 = (ArgumentException *)func_?(uVar6);
  func_?(pAVar1);
  pMVar7 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(&StringLiteral_Object_must_be_of_type_Guid_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar1,pSVar9,pMVar7);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                 );
  func_?(pAVar1);
code_?:
  func_?();
  pUVar3 = unaff_EBX;
code_?:
  func_?(pAVar1,pUVar3);
code_?:
  func_?(pOVar2,pUVar3);
code_?:
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  pAVar1 = (ArgumentException *)func_?(uVar6);
  func_?(pAVar1);
  pMVar7 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(&StringLiteral_Object_must_be_of_type_Uri_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar1,pSVar9,pMVar7);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                 );
  func_?(pAVar1);
code_?:
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  pAVar1 = (ArgumentException *)func_?(uVar6);
  func_?(pAVar1);
  pMVar7 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(&StringLiteral_Object_must_be_of_type_TimeSpan_);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(pAVar1,pSVar9,pMVar7);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                 );
  func_?(pAVar1);
  JVar8 = extraout_ECX_00;
code_?:
  bVar30 = (byte)uVar4;
  JStack_22 = JVar8;
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&JStack_22);
  pOStack_31 = (Object *)func_?(uVar4);
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  pCVar32 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,1);
  pOVar33 = (Object__Array *)func_?(uVar4);
  JStack_34 = valueType;
  uVar4 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&JStack_34);
  uVar4 = func_?(uVar4);
  func_?(pOVar33);
  func_?(pOVar33,uVar4);
  func_?(0,uVar4);
  pMVar7 = (MethodInfo *)0x0;
  pCVar10 = pCVar32;
  args = pOVar33;
  pSVar9 = (String *)func_?(&StringLiteral_Unexpected_value_type___0_);
  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar9,(IFormatProvider *)pCVar10,args,pMVar7);
  pMVar7 = (MethodInfo *)0x0;
  pOVar2 = pOStack_31;
  pSVar11 = (String *)func_?(&StringLiteral_valueType);
  pAVar35 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException(pSVar11,pOVar2,pSVar9,pMVar7);
  func_?();
  bVar36 = (undefined1 *)0xffffffeb < &stack0xffffff94;
  uVar37 = func_?();
  bVar38 = (byte)((ulonglong)uVar37 >> 0x28);
  bVar39 = bVar38 - *(byte *)(pOVar33[-0x8698c7].vector + 0xb);
  bVar40 = bVar38 < *(byte *)(pOVar33[-0x8698c7].vector + 0xb) || bVar39 < bVar36;
  bVar41 = (byte)((ulonglong)uVar37 >> 0x20);
  pbVar42 = (byte *)CONCAT22((short)((ulonglong)uVar37 >> 0x30),CONCAT11(bVar39 - bVar36,bVar41));
  bVar38 = (byte)((uint)extraout_ECX_01 >> 8);
  bVar39 = *(char *)&pOVar33->klass + bVar38;
  bVar43 = CARRY1(*(byte *)&pOVar33->klass,bVar38) || CARRY1(bVar39,bVar40);
  *(byte *)&pOVar33->klass = bVar39 + bVar40;
  bVar44 = (byte)extraout_ECX_01;
  bVar38 = *pbVar42;
  bVar45 = (byte)pCVar32;
  bVar39 = *pbVar42;
  *pbVar42 = bVar39 + bVar45 + bVar43;
  bVar36 = (byte)uVar37;
  bVar43 = CARRY1(bVar41,bVar36) ||
           CARRY1(bVar41 + bVar36,CARRY1(bVar38,bVar45) || CARRY1(bVar39 + bVar45,bVar43));
  bVar40 = 0x67 < bVar43;
  bVar41 = bVar43 + 0x98;
  bVar39 = *(char *)&pAVar35->klass + bVar41;
  bVar43 = CARRY1(*(byte *)&pAVar35->klass,bVar41) || CARRY1(bVar39,bVar40);
  *(byte *)&pAVar35->klass = bVar39 + bVar40;
  bVar40 = CARRY1(bRam_?,bVar45) || CARRY1(bRam_? + bVar45,bVar43);
  bRam_? = bRam_? + bVar45 + bVar43;
  pbVar42 = (byte *)((int)uVar37 + -0x1aefb349);
  bVar39 = *pbVar42;
  bVar38 = *pbVar42;
  *pbVar42 = bVar38 + bVar44 + bVar40;
  pcVar46 = (char *)(CONCAT22((short)((uint)extraout_ECX_01 >> 0x10),CONCAT11(bVar41,bVar44)) +
                   (int)pOVar33 * 4);
  *pcVar46 = *pcVar46 + bVar36 +
            (0xb3 < bVar30 ||
            CARRY1(bVar30 + 0x4c,CARRY1(bVar39,bVar44) || CARRY1(bVar38 + bVar44,bVar40)));
  pcVar47 = (code *)swi(3);
  iVar12 = (*pcVar47)();
  return iVar12;
}


/* Int32 CompareFloat(Object, Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CompareFloat
                  (Object *objA,Object *objB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  uStack_2 = mscorlib.dll::System::Convert::Convert_ToDouble
                        (objA,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  d2 = mscorlib.dll::System::Convert::Convert_ToDouble
                 (objB,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
  d1.m_value = uStack_2;
  uStack_2._4_4_ = &UNK_?;
  bVar3 = Json::Utilities::MathUtils::MathUtils_ApproxEquals(d1.m_value,d2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    uStack4 = SUB84(d1.m_value,0);
    iVar5 = mscorlib.dll::System::Double::Double_CompareTo_1
                      ((Double *)&uStack_2,d1.m_value >> 0x20,in_stack_6);
    return iVar5;
  }
  return 0;
}


/* Int32 CompareTo(JValue) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CompareTo
                  (JValue *this,JValue *obj,MethodInfo *method)

{
  if (obj != (JValue *)0x0) {
    iVar1 = JValue_Compare((this->fields)._valueType,(this->fields)._value,(obj->fields)._value,
                           (MethodInfo *)0x0);
    return iVar1;
  }
  return 1;
}


/* JValue CreateComment(String) */

JValue * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CreateComment
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JValue *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    (pJVar1->fields)._value = (Object *)value;
    func_?(&(pJVar1->fields)._value,value);
    (pJVar1->fields)._valueType = 5;
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JValue *)(*pcVar2)();
  return pJVar1;
}


/* JValue CreateString(String) */

JValue * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CreateString
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  pJVar1 = (JValue *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (pJVar1 != (JValue *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    (pJVar1->fields)._value = (Object *)value;
    func_?(&(pJVar1->fields)._value,value);
    (pJVar1->fields)._valueType = 8;
    return pJVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pJVar1 = (JValue *)(*pcVar2)();
  return pJVar1;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_DeepEquals
               (JValue *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (node->klass->_1).typeHierarchyDepth) &&
       ((node->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (this == (JValue *)node) {
        return 1;
      }
      if (this == (JValue *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      valueType = (JToken__Class *)(this->fields)._valueType;
      if (valueType == node[1].klass) {
        iVar3 = JValue_Compare((JTokenType__Enum)valueType,(this->fields)._value,
                               (Object *)node[1].monitor,(MethodInfo *)0x0);
        return iVar3 == 0;
      }
    }
  }
  return 0;
}


/* Boolean Equals(JValue) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Equals
               (JValue *this,JValue *other,MethodInfo *method)

{
  if (other != (JValue *)0x0) {
    if (this == other) {
      return 1;
    }
    if (this == (JValue *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    valueType = (this->fields)._valueType;
    if (valueType == (other->fields)._valueType) {
      iVar4 = JValue_Compare(valueType,(this->fields)._value,(other->fields)._value,
                             (MethodInfo *)0x0);
      return iVar4 == 0;
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Equals_1
               (JValue *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (((obj->klass->_1).typeHierarchyDepth <
       (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
     ((obj->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
    bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)this,(Object **)obj,(MethodInfo *)0x0);
    return bVar1;
  }
  if (this == (JValue *)obj) {
    return 1;
  }
  if (this != (JValue *)0x0) {
    valueType = (MonitorData *)(this->fields)._valueType;
    if (valueType != obj[4].monitor) {
      return 0;
    }
    iVar2 = JValue_Compare((JTokenType__Enum)valueType,(this->fields)._value,(Object *)obj[5].klass,
                           (MethodInfo *)0x0);
    return iVar2 == 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Int32 GetDeepHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetDeepHashCode
                  (JValue *this,MethodInfo *method)

{
  if ((this->fields)._value != (Object *)0x0) {
    pOVar1 = (this->fields)._value;
    pOVar2 = pOVar1->klass;
    uVar3 = (*(pOVar2->vtable).GetHashCode.methodPtr)(pOVar1,(pOVar2->vtable).GetHashCode.method);
    pvVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                       ((uint8_t *)&(this->fields)._valueType,(MethodInfo *)0x0);
    return (uint)pvVar4 ^ uVar3;
  }
  pvVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                     ((uint8_t *)&(this->fields)._valueType,(MethodInfo *)0x0);
  return (int32_t)pvVar4;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetHashCode
                  (JValue *this,MethodInfo *method)

{
  if ((this->fields)._value != (Object *)0x0) {
    pOVar1 = (this->fields)._value;
    pOVar2 = pOVar1->klass;
    iVar3 = (*(pOVar2->vtable).GetHashCode.methodPtr)(pOVar1,(pOVar2->vtable).GetHashCode.method);
    return iVar3;
  }
  return 0;
}


/* JTokenType GetStringValueType(Nullable`1[Newtonsoft.Json.Linq.JTokenType]) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetStringValueType
          (Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_HasValue__
                   );
    func_?(&MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__);
    cRam_? = '\x01';
  }
  if (current.hasValue != 0) {
    uVar1 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                      ((Nullable_1_UInt32_ *)&current,
                       MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                      );
    if (((uVar1 == 5) || (uVar1 == 8)) || (uVar1 == 0xd)) {
      JVar2 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                        ((Nullable_1_UInt32_ *)&current,
                         MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                        );
      return JVar2;
    }
  }
  return JTokenType__Enum_String;
}


/* JTokenType GetValueType(Nullable`1[Newtonsoft.Json.Linq.JTokenType], Object) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetValueType
          (Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__DBNull);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__System__Guid);
    func_?(&TypeInfo__System__Int16);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__System__SByte);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__System__UInt16);
    func_?(&TypeInfo__System__UInt32);
    func_?(&TypeInfo__System__UInt64);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((TypeInfo__System__DBNull->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DBNull);
    }
    if ((DBNull *)value != TypeInfo__System__DBNull->static_fields->Value) {
      pSVar1 = (String__Class *)value->klass;
      pOVar2 = (Object *)0x0;
      if (pSVar1 == TypeInfo__System__String) {
        pOVar2 = value;
      }
      if (pOVar2 != (Object *)0x0) {
        NStack_3.hasValue = current.hasValue;
        NStack_3._1_3_ = current._1_3_;
        NStack_3.value = current.value;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_HasValue__
                         );
          func_?(&
                          MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                         );
          cRam_? = '\x01';
        }
        if (NStack_3.hasValue != 0) {
          uVar4 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                            (&NStack_3,
                             MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                            );
          if (((uVar4 == 5) || (uVar4 == 8)) || (uVar4 == 0xd)) {
            JVar5 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                              (&NStack_3,
                               MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                              );
            return JVar5;
          }
        }
        return JTokenType__Enum_String;
      }
      pOVar2 = (Object *)0x0;
      if (pSVar1 == (String__Class *)TypeInfo__System__Int64) {
        pOVar2 = value;
      }
      if (pOVar2 == (Object *)0x0) {
        pOVar2 = (Object *)0x0;
        if (pSVar1 == (String__Class *)TypeInfo__System__Int32) {
          pOVar2 = value;
        }
        if (pOVar2 == (Object *)0x0) {
          pOVar2 = (Object *)0x0;
          if (pSVar1 == (String__Class *)TypeInfo__System__Int16) {
            pOVar2 = value;
          }
          if (pOVar2 == (Object *)0x0) {
            pOVar2 = (Object *)0x0;
            if (pSVar1 == (String__Class *)TypeInfo__System__SByte) {
              pOVar2 = value;
            }
            if (pOVar2 == (Object *)0x0) {
              pOVar2 = (Object *)0x0;
              if (pSVar1 == (String__Class *)TypeInfo__System__UInt64) {
                pOVar2 = value;
              }
              if (pOVar2 == (Object *)0x0) {
                pOVar2 = (Object *)0x0;
                if (pSVar1 == (String__Class *)TypeInfo__System__UInt32) {
                  pOVar2 = value;
                }
                if (pOVar2 == (Object *)0x0) {
                  pOVar2 = (Object *)0x0;
                  if (pSVar1 == (String__Class *)TypeInfo__System__UInt16) {
                    pOVar2 = value;
                  }
                  if (pOVar2 == (Object *)0x0) {
                    pOVar2 = (Object *)0x0;
                    if (pSVar1 == (String__Class *)TypeInfo__System__Byte) {
                      pOVar2 = value;
                    }
                    if (pOVar2 == (Object *)0x0) {
                      iVar6 = func_?(value,TypeInfo__System__Enum);
                      if (iVar6 == 0) {
                        pDVar7 = (Decimal__Class *)value->klass;
                        pOVar2 = (Object *)0x0;
                        if (pDVar7 == (Decimal__Class *)TypeInfo__System__Double) {
                          pOVar2 = value;
                        }
                        if (pOVar2 == (Object *)0x0) {
                          pOVar2 = (Object *)0x0;
                          if (pDVar7 == (Decimal__Class *)TypeInfo__System__Single) {
                            pOVar2 = value;
                          }
                          if (pOVar2 == (Object *)0x0) {
                            pOVar2 = (Object *)0x0;
                            if (pDVar7 == TypeInfo__System__Decimal) {
                              pOVar2 = value;
                            }
                            if (pOVar2 == (Object *)0x0) {
                              pOVar2 = (Object *)0x0;
                              if (pDVar7 == (Decimal__Class *)TypeInfo__System__DateTime) {
                                pOVar2 = value;
                              }
                              if (pOVar2 == (Object *)0x0) {
                                pOVar2 = (Object *)0x0;
                                if (pDVar7 == (Decimal__Class *)TypeInfo__System__DateTimeOffset) {
                                  pOVar2 = value;
                                }
                                if (pOVar2 == (Object *)0x0) {
                                  iVar6 = func_?(value,TypeInfo__System__Byte);
                                  if (iVar6 != 0) {
                                    return JTokenType__Enum_Bytes;
                                  }
                                  pOVar2 = (Object *)0x0;
                                  if ((Boolean__Class *)value->klass == TypeInfo__System__Boolean) {
                                    pOVar2 = value;
                                  }
                                  if (pOVar2 != (Object *)0x0) {
                                    return JTokenType__Enum_Boolean;
                                  }
                                  pOVar2 = (Object *)0x0;
                                  if ((Boolean__Class *)value->klass ==
                                      (Boolean__Class *)TypeInfo__System__Guid) {
                                    pOVar2 = value;
                                  }
                                  if (pOVar2 != (Object *)0x0) {
                                    return JTokenType__Enum_Guid;
                                  }
                                  iVar6 = func_?(value,TypeInfo__System__Uri);
                                  if (iVar6 != 0) {
                                    return JTokenType__Enum_Uri;
                                  }
                                  pOVar2 = (Object *)0x0;
                                  if ((TimeSpan__Class *)value->klass == TypeInfo__System__TimeSpan)
                                  {
                                    pOVar2 = value;
                                  }
                                  if (pOVar2 != (Object *)0x0) {
                                    return JTokenType__Enum_TimeSpan;
                                  }
                                  uVar8 = func_?(&
                                                  TypeInfo__System__Globalization__CultureInfo);
                                  func_?(uVar8);
                                  provider = mscorlib.dll::System::Globalization::CultureInfo::
                                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                                  uVar8 = func_?(&TypeInfo__System__Object,1);
                                  args = (Object__Array *)func_?(uVar8);
                                  func_?(value);
                                  pTVar9 = mscorlib.dll::System::Object::Object_GetType
                                                     (value,(MethodInfo *)0x0);
                                  func_?(args);
                                  func_?(args,pTVar9);
                                  func_?(0,pTVar9);
                                  method_00 = (MethodInfo *)0x0;
                                  pSVar10 = (String *)
                                           func_?(&
                                                  StringLiteral_Could_not_determine_JSON_object_);
                                  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                                     (pSVar10,(IFormatProvider *)provider,args,
                                                      method_00);
                                  uVar8 = func_?(&TypeInfo__System__ArgumentException);
                                  this = (ArgumentException *)func_?(uVar8);
                                  func_?(this);
                                  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                                            (this,pSVar10,(MethodInfo *)0x0);
                                  func_?(&
                                                  MethodInfo__Newtonsoft__Json__Linq__JValue__GetValueType_System__Nullable<Newtonsoft::Json::Linq::JTokenType>__System__Object_
                                                 );
                                  func_?();
                                  pcVar11 = (code *)swi(3);
                                  JVar5 = (*pcVar11)();
                                  return JVar5;
                                }
                              }
                              return JTokenType__Enum_Date;
                            }
                          }
                        }
                        return JTokenType__Enum_Float;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return JTokenType__Enum_Integer;
    }
  }
  return JTokenType__Enum_Null;
}


/* Int32 System.IComparable.CompareTo(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_System_IComparable_CompareTo
                  (JValue *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar1 = obj->klass;
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pOVar1->_1).typeHierarchyDepth) &&
       ((pOVar1->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (((pOVar1->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth) ||
         ((pOVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?(obj,TypeInfo__Newtonsoft__Json__Linq__JValue);
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      obj = (Object *)obj[5].klass;
    }
    iVar3 = JValue_Compare((this->fields)._valueType,(this->fields)._value,obj,(MethodInfo *)0x0);
    return iVar3;
  }
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString
                   (JValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if ((this->fields)._value != (Object *)0x0) {
    pOVar1 = (this->fields)._value;
    pOVar2 = pOVar1->klass;
    pSVar3 = (String *)
             (*(pOVar2->vtable).ToString.methodPtr)(pOVar1,(pOVar2->vtable).ToString.method);
    return pSVar3;
  }
  return TypeInfo__System__String->static_fields->Empty;
}


/* String ToString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString_1
                   (JValue *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                 ((MethodInfo *)0x0);
  pSVar1 = JValue_ToString_3(this,format,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(IFormatProvider) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString_2
                   (JValue *this,IFormatProvider *formatProvider,MethodInfo *method)

{
  pSVar1 = JValue_ToString_3(this,(String *)0x0,formatProvider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(String, IFormatProvider) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString_3
                   (JValue *this,String *format,IFormatProvider *formatProvider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IFormattable);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if ((this->fields)._value == (Object *)0x0) {
    return TypeInfo__System__String->static_fields->Empty;
  }
  piVar1 = (int *)func_?((this->fields)._value,TypeInfo__System__IFormattable);
  if (piVar1 == (int *)0x0) {
    pOVar2 = (this->fields)._value;
    if (pOVar2 != (Object *)0x0) {
      pSVar3 = (String *)
               (*(pOVar2->klass->vtable).ToString.methodPtr)
                         (pOVar2,(pOVar2->klass->vtable).ToString.method);
      return pSVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  uVar5 = 0;
  uVar6 = *(ushort *)(*piVar1 + 0xb2);
  if (uVar6 != 0) {
    do {
      if (*(IFormattable__Class **)(*(int *)(*piVar1 + 0x58) + (uint)uVar5 * 8) ==
          TypeInfo__System__IFormattable) {
        puVar7 = (undefined4 *)
                 (*(int *)(*(int *)(*piVar1 + 0x58) + 4 + (uint)uVar5 * 8) * 8 + 0xbc + *piVar1);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  puVar7 = (undefined4 *)func_?(piVar1,TypeInfo__System__IFormattable,0);
code_?:
  pSVar3 = (String *)(*(code *)*puVar7)(piVar1,format,formatProvider,puVar7[1]);
  return pSVar3;
}


/* Boolean ValuesEquals(JValue, JValue) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ValuesEquals
               (JValue *v1,JValue *v2,MethodInfo *method)

{
  if (v1 == v2) {
    return 1;
  }
  if ((v1 != (JValue *)0x0) && (v2 != (JValue *)0x0)) {
    valueType = (v1->fields)._valueType;
    if (valueType != (v2->fields)._valueType) {
      return 0;
    }
    iVar1 = JValue_Compare(valueType,(v1->fields)._value,(v2->fields)._value,(MethodInfo *)0x0);
    return iVar1 == 0;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_WriteTo
               (JValue *this,JsonWriter *writer,JsonConverter__Array *converters,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    ppJVar2 = &TypeInfo__Newtonsoft__Json__JsonSerializer;
    in_stack_3 = (String *)&UNK_?;
    func_?();
    cRam_? = '\x01';
    in_stack_4 = (MethodInfo **)ppJVar2;
  }
  iVar5 = (pJVar1->fields)._valueType;
  if (iVar5 == 5) {
    pOVar6 = (pJVar1->fields)._value;
    cVar7 = pOVar6 == (Object *)0x0;
    if (!(bool)cVar7) {
      uVar8 = (*(pOVar6->klass->vtable).ToString.methodPtr)
                        (pOVar6,(pOVar6->klass->vtable).ToString.method);
      cVar7 = writer == (JsonWriter *)0x0;
      if (!(bool)cVar7) {
        (*(writer->klass->vtable).WriteComment.methodPtr)
                  (writer,uVar8,(writer->klass->vtable).WriteComment.method);
        return;
      }
    }
  }
  else {
    switch(iVar5) {
    case 10:
      cVar7 = writer == (JsonWriter *)0x0;
      if (!(bool)cVar7) {
        func_?(0x13,writer);
        return;
      }
      break;
    case 0xb:
      cVar7 = writer == (JsonWriter *)0x0;
      if (!(bool)cVar7) {
        func_?(0x14,writer);
        return;
      }
      break;
    default:
      if ((pJVar1->fields)._value != (Object *)0x0) {
        objectType = mscorlib.dll::System::Object::Object_GetType
                               ((pJVar1->fields)._value,(MethodInfo *)0x0);
        unaff_EDI = (CultureInfo *)
                    JsonSerializer::JsonSerializer_GetMatchingConverter_1
                              ((IList_1_Newtonsoft_Json_JsonConverter_ *)converters,objectType,
                               (MethodInfo *)0x0);
        if (unaff_EDI != (CultureInfo *)0x0) {
          unaff_EBX = (Byte__Array__Class *)(pJVar1->fields)._value;
          this_00 = (JsonSerializer *)func_?();
          cVar7 = this_00 == (JsonSerializer *)0x0;
          if (!(bool)cVar7) {
            JsonSerializer::JsonSerializer__ctor(this_00,(MethodInfo *)0x0);
            (*(unaff_EDI->klass->vtable).Clone.methodPtr)
                      (unaff_EDI,writer,unaff_EBX,this_00,(unaff_EDI->klass->vtable).Clone.method);
            return;
          }
          break;
        }
      }
      pJVar9 = writer;
      pBVar10 = TypeInfo__System__Byte;
      switch((pJVar1->fields)._valueType) {
      case 6:
        in_stack_3 = (String *)(pJVar1->fields)._value;
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_4 = (MethodInfo **)unaff_EDI;
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt64
                           ((Object *)in_stack_3,(IFormatProvider *)unaff_EDI,
                            (MethodInfo *)0x0);
        cVar7 = writer == (JsonWriter *)0x0;
        if (!(bool)cVar7) {
          func_?(0x1a,writer,(int)iVar11,(int)((ulonglong)iVar11 >> 0x20));
          return;
        }
        break;
      case 7:
        in_stack_3 = (String *)(pJVar1->fields)._value;
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_4 = (MethodInfo **)unaff_EDI;
        dVar12 = mscorlib.dll::System::Convert::Convert_ToDouble
                           ((Object *)in_stack_3,(IFormatProvider *)unaff_EDI,
                            (MethodInfo *)0x0);
        cVar7 = writer == (JsonWriter *)0x0;
        if (!(bool)cVar7) {
          func_?(0x1d,writer,SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20));
          return;
        }
        break;
      case 8:
      case 0xf:
      case 0x10:
      case 0x11:
        if ((pJVar1->fields)._value == (Object *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = func_?(3,(pJVar1->fields)._value);
        }
        cVar7 = writer == (JsonWriter *)0x0;
        if (!(bool)cVar7) {
          func_?(0x17,writer,uVar8);
          return;
        }
        break;
      case 9:
        in_stack_3 = (String *)(pJVar1->fields)._value;
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_4 = (MethodInfo **)unaff_EDI;
        bVar13 = mscorlib.dll::System::Convert::Convert_ToBoolean
                          ((Object *)in_stack_3,(IFormatProvider *)unaff_EDI,
                           (MethodInfo *)0x0);
        this = (JValue *)CONCAT31(this._1_3_,bVar13);
        cVar7 = writer == (JsonWriter *)0x0;
        if (!(bool)cVar7) {
          func_?(0x1e,writer,this);
          return;
        }
        break;
      default:
        this = (JValue *)(pJVar1->fields)._valueType;
        uVar8 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&this);
        unaff_EDI = (CultureInfo *)func_?(uVar8);
        in_stack_3 = (String *)func_?(&StringLiteral_Unexpected_token_type_);
        pSVar14 = (String *)func_?(&StringLiteral_TokenType);
        in_stack_4 = (MethodInfo **)0x0;
        goto code_?;
      case 0xc:
        pSVar14 = (String *)(pJVar1->fields)._value;
        if (pSVar14 != (String *)0x0) {
          pSVar15 = (String *)0x0;
          if (pSVar14->klass == (String__Class *)TypeInfo__System__DateTimeOffset) {
            pSVar15 = pSVar14;
          }
          if (pSVar15 != (String *)0x0) {
            cVar7 = writer == (JsonWriter *)0x0;
            if ((!(bool)cVar7) && (cVar7 = pSVar14 == (String *)0x0, !(bool)cVar7)) {
              cVar7 = (pSVar14->klass->_0).element_class ==
                       (TypeInfo__System__DateTimeOffset->_0).element_class;
              pDVar16 = TypeInfo__System__DateTimeOffset;
              pBVar10 = unaff_EBX;
              pAVar17 = (ArgumentOutOfRangeException *)writer;
              if (!(bool)cVar7) goto code_?;
              puVar18 = (undefined4 *)func_?(pSVar14);
              (*(pJVar9->klass->vtable).WriteValue_15.methodPtr)
                        (pJVar9,*puVar18,puVar18[1],puVar18[2],puVar18[3],
                         (pJVar9->klass->vtable).WriteValue_15.method);
              return;
            }
            break;
          }
        }
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_4 = (MethodInfo **)unaff_EDI;
        DVar19 = mscorlib.dll::System::Convert::Convert_ToDateTime
                           ((Object *)pSVar14,(IFormatProvider *)unaff_EDI,(MethodInfo *)0x0);
        cVar7 = writer == (JsonWriter *)0x0;
        in_stack_3 = pSVar14;
        if (!(bool)cVar7) {
          (*(writer->klass->vtable).WriteValue_14.methodPtr)
                    (writer,(int)DVar19._dateData,(int)(DVar19._dateData >> 0x20),
                     (writer->klass->vtable).WriteValue_14.method);
          return;
        }
        break;
      case 0xe:
        cVar7 = writer == (JsonWriter *)0x0;
        unaff_EDI = (CultureInfo *)writer;
        if (!(bool)cVar7) {
          pAVar17 = (ArgumentOutOfRangeException *)(pJVar1->fields)._value;
          if (pAVar17 == (ArgumentOutOfRangeException *)0x0) {
            func_?(0x3a,writer,0);
            return;
          }
          iVar5 = func_?(pAVar17,TypeInfo__System__Byte);
          cVar7 = '\x01';
          unaff_EDI = (CultureInfo *)pJVar9;
          if (iVar5 == 0) goto code_?;
          func_?(0x3a,pJVar9,iVar5);
          return;
        }
      }
      break;
    case 0xd:
      if ((pJVar1->fields)._value == (Object *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = func_?(3,(pJVar1->fields)._value);
      }
      cVar7 = writer == (JsonWriter *)0x0;
      if (!(bool)cVar7) {
        func_?(0x16,writer,uVar8);
        return;
      }
    }
  }
  while (pSVar14 = (String *)func_?(), extraout_ECX_00 != 1 && cVar7 == '\0') {
code_?:
    pAVar17 = Json::Utilities::MiscellaneousUtils::
             MiscellaneousUtils_CreateArgumentOutOfRangeException
                       (pSVar14,(Object *)unaff_EDI,in_stack_3,
                        (MethodInfo *)in_stack_4);
    in_stack_4 =
         &
         MethodInfo__Newtonsoft__Json__Linq__JValue__WriteTo_Newtonsoft__Json__JsonWriter__Newtonsoft__Json__JsonConverter____
    ;
    in_stack_3 = (String *)&UNK_?;
    uVar8 = func_?();
    cVar7 = &stack0x00000000 == (undefined1 *)0x8;
    func_?(pAVar17,uVar8);
    pSVar14 = extraout_ECX;
    pDVar16 = extraout_EDX;
    pBVar10 = unaff_EBX;
code_?:
    func_?(pSVar14,pDVar16);
code_?:
    func_?(pAVar17,pBVar10);
    unaff_EBX = pBVar10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* JValue(Object, JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor
               (JValue *this,Object *value,JTokenType__Enum type,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value = value;
  func_?(&(this->fields)._value,value);
  (this->fields)._valueType = type;
  return;
}


/* JValue(JValue) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_1
               (JValue *this,JValue *other,MethodInfo *method)

{
  if (other != (JValue *)0x0) {
    pOVar1 = (other->fields)._value;
    iVar2 = (*(other->klass->vtable).get_Type.methodPtr)
                      (other,(other->klass->vtable).get_Type.method);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)other);
    (this->fields)._value = pOVar1;
    func_?(&(this->fields)._value,pOVar1);
    (this->fields)._valueType = iVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_10
               (JValue *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__TimeSpan;
  pOVar1 = (Object *)func_?(TypeInfo__System__TimeSpan,&stack0x00000008);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 8;
  return;
}


/* JValue(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_11
               (JValue *this,Object *value,MethodInfo *method)

{
  JVar1 = JValue_GetValueType((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,
                              (MethodInfo *)0x0);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._value = value;
  func_?(&(this->fields)._value,value);
  (this->fields)._valueType = JVar1;
  return;
}


/* JValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_2
               (JValue *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int64);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Int64;
  pOVar1 = (Object *)func_?(TypeInfo__System__Int64,&stack0x00000008);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 6;
  return;
}


/* JValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_3
               (JValue *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__UInt64);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__UInt64;
  pOVar1 = (Object *)func_?(TypeInfo__System__UInt64,&stack0x00000008);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 6;
  return;
}


/* JValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_4
               (JValue *this,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Double;
  pOVar1 = (Object *)func_?(TypeInfo__System__Double,&stack0x00000008);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 7;
  return;
}


/* JValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_5
               (JValue *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__DateTime;
  pOVar1 = (Object *)func_?(TypeInfo__System__DateTime,&stack0x00000008);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 0xc;
  return;
}


/* JValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_6
               (JValue *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  bStack1 = value;
  method_00 = TypeInfo__System__Boolean;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar2;
  func_?(&(this->fields)._value,pOVar2);
  (this->fields)._valueType = 9;
  return;
}


/* JValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_8
               (JValue *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Guid);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Guid;
  pOVar1 = (Object *)func_?(TypeInfo__System__Guid,&value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  func_?(&(this->fields)._value,pOVar1);
  (this->fields)._valueType = 8;
  return;
}


/* JValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_9
               (JValue *this,Uri *value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value = (Object *)value;
  func_?(&(this->fields)._value,value);
  (this->fields)._valueType = 8;
  return;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_set_Value
               (JValue *this,Object *value,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__Nullable_Newtonsoft__Json__Linq__JTokenType_
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((this->fields)._value == (Object *)0x0) {
    left._source = (CancellationTokenSource *)0x0;
  }
  else {
    left._source = (CancellationTokenSource *)
                   mscorlib.dll::System::Object::Object_GetType
                             ((this->fields)._value,(MethodInfo *)0x0);
  }
  if (value == (Object *)0x0) {
    this = (JValue *)0x0;
  }
  else {
    this = (JValue *)mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                    (left,(CancellationToken)this,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              ((Nullable_1_UInt32_ *)&stack0xfffffff4,0,(MethodInfo *)0x0);
    current.value = 0;
    current._0_4_ = value;
    JVar3 = JValue_GetValueType(current,value,(MethodInfo *)0x0);
    (pJVar1->fields)._valueType = JVar3;
  }
  ppOStack4 = &(pJVar1->fields)._value;
  (pJVar1->fields)._value = value;
  pOStack5 = value;
  func_?();
  return;
}

