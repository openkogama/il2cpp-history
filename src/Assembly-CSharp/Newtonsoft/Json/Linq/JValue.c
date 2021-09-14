
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CloneToken
                   (JValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JValue);
  if (this != (JValue *)0x0) {
    pSVar1 = (ScaleAnimationBase__Class *)(this->fields)._value;
    pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             (*(code *)(this->klass->vtable).get_Type.method)
                       (this,(this->klass->vtable).get_HasValues.methodPtr);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)this);
    this_00[1].klass = pSVar1;
    (this_00->fields).OnScaleAnimationStopped = pSVar2;
    return (JToken *)this_00;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar3)();
  return pJVar4;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int32 Compare(JTokenType, Object, Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Compare
                  (JTokenType__Enum valueType,Object *objA,Object *objB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (EqualityComparer_1_WinningConditionType___Class *)objB;
  pOVar1 = objA;
  pUVar2 = TypeInfo__System__Uri;
  iStack_3 = 0;
  bStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  iStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  if (objA == (Object *)0x0) {
    if (objB != (Object *)0x0) {
      return -1;
    }
    return 0;
  }
  if (objB == (Object *)0x0) {
    return 1;
  }
  switch(valueType) {
  case JTokenType__Enum_Comment:
  case JTokenType__Enum_String:
  case JTokenType__Enum_Raw:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    unaff_EBX = (Uri__Class *)
                mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar18 = mscorlib.dll::System::Convert::Convert_ToString_2
                        (pOVar1,(IFormatProvider *)unaff_EBX,(MethodInfo *)0x0);
    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    strB = mscorlib.dll::System::Convert::Convert_ToString_2
                     ((Object *)this,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
    if (pSVar18 != (String *)0x0) {
      iVar20 = mscorlib.dll::System::String::String_CompareTo_1(pSVar18,strB,(MethodInfo *)0x0);
      return iVar20;
    }
    goto code_?;
  case JTokenType__Enum_Integer:
    pDVar21 = (Decimal__Class *)objA->klass;
    pOVar22 = (Object *)0x0;
    if (pDVar21 == (Decimal__Class *)TypeInfo__System__UInt64) {
      pOVar22 = objA;
    }
    if (pOVar22 == (Object *)0x0) {
      pDVar23 = (Decimal__Class *)objB->klass;
      pOVar22 = (Object *)0x0;
      if (pDVar23 == (Decimal__Class *)TypeInfo__System__UInt64) {
        pOVar22 = objB;
      }
      if (pOVar22 == (Object *)0x0) {
        pOVar22 = (Object *)0x0;
        if (pDVar21 == TypeInfo__System__Decimal) {
          pOVar22 = objA;
        }
        if (pOVar22 == (Object *)0x0) {
          pOVar22 = (Object *)0x0;
          if (pDVar23 == TypeInfo__System__Decimal) {
            pOVar22 = objB;
          }
          if (pOVar22 == (Object *)0x0) {
            pOVar22 = (Object *)0x0;
            if (pDVar21 == (Decimal__Class *)TypeInfo__System__Single) {
              pOVar22 = objA;
            }
            if (pOVar22 == (Object *)0x0) {
              pOVar22 = (Object *)0x0;
              if (pDVar23 == (Decimal__Class *)TypeInfo__System__Single) {
                pOVar22 = objB;
              }
              if (pOVar22 == (Object *)0x0) {
                pOVar22 = (Object *)0x0;
                if (pDVar21 == (Decimal__Class *)TypeInfo__System__Double) {
                  pOVar22 = objA;
                }
                if (pOVar22 == (Object *)0x0) {
                  pOVar22 = (Object *)0x0;
                  if (pDVar23 == (Decimal__Class *)TypeInfo__System__Double) {
                    pOVar22 = objB;
                  }
                  if (pOVar22 == (Object *)0x0) {
                    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.
                                methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__Globalization__CultureInfo);
                    }
                    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::
                              CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__Convert);
                    }
                    iStack_3 = mscorlib.dll::System::Convert::Convert_ToInt64_17
                                          (pOVar1,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
                    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::
                              CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                    iVar24 = mscorlib.dll::System::Convert::Convert_ToInt64_17
                                       ((Object *)this,(IFormatProvider *)pCVar19,(MethodInfo *)0x0)
                    ;
                    iVar20 = func_?(&iStack_3,(int)iVar24,(int)((ulonglong)iVar24 >> 0x20)
                                             ,0);
                    return iVar20;
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar25 = mscorlib.dll::System::Convert::Convert_ToDecimal_13
                        (&DStack_26,pOVar1,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
    uStack_6 = pDVar25->flags;
    uStack_7 = pDVar25->hi;
    uStack_8 = pDVar25->lo;
    uStack_9 = pDVar25->mid;
    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    mscorlib.dll::System::Convert::Convert_ToDecimal_13
              (&DStack_26,(Object *)this,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
    DStack_26.flags = 0;
    iVar20 = func_?();
    return iVar20;
  case JTokenType__Enum_Float:
code_?:
    iVar20 = JValue_CompareFloat(objA,objB,(MethodInfo *)0x0);
    return iVar20;
  case JTokenType__Enum_Boolean:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    bStack_4 = mscorlib.dll::System::Convert::Convert_ToBoolean_13
                         (pOVar1,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
    pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    bVar27 = mscorlib.dll::System::Convert::Convert_ToBoolean_13
                      ((Object *)this,(IFormatProvider *)pCVar19,(MethodInfo *)0x0);
    objA = (Object *)CONCAT31(objA._1_3_,bVar27);
    iVar20 = func_?(&bStack_4,objA,0);
    return iVar20;
  default:
    objA = (Object *)valueType;
    pOStack_28 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&objA);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    unaff_EBX = (Uri__Class *)
                mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    JStack_29 = valueType;
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenType,&JStack_29);
    func_?(args,0);
    func_?(args,this);
    func_?(0,this);
    pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_value_type___0_,(IFormatProvider *)unaff_EBX,args,
                         (MethodInfo *)0x0);
    pEVar30 = (EqualityComparer_1_WinningConditionType___Class *)
              Json::Utilities::MiscellaneousUtils::
              MiscellaneousUtils_CreateArgumentOutOfRangeException
                        (StringLiteral_valueType,pOStack_28,pSVar18,(MethodInfo *)0x0);
    goto code_?;
  case JTokenType__Enum_Date:
    pOVar22 = (Object *)0x0;
    if ((DateTime__Class *)objA->klass == TypeInfo__System__DateTime) {
      pOVar22 = objA;
    }
    if (pOVar22 != (Object *)0x0) {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      pDVar31 = mscorlib.dll::System::Convert::Convert_ToDateTime_5
                          ((DateTime *)&DStack_26,pOVar1,(IFormatProvider *)pCVar19,
                           (MethodInfo *)0x0);
      uStack_10 = (undefined4)(pDVar31->ticks)._ticks;
      uStack_11 = *(undefined4 *)((int)&(pDVar31->ticks)._ticks + 4);
      iStack_12 = pDVar31->kind;
      uStack_13 = *(undefined4 *)&pDVar31->field_0xc;
      pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      mscorlib.dll::System::Convert::Convert_ToDateTime_5
                ((DateTime *)&DStack_26,(Object *)this,(IFormatProvider *)pCVar19,(MethodInfo *)0x0)
      ;
      DStack_26.flags = 0;
      iVar20 = func_?();
      return iVar20;
    }
    pOVar1 = (Object *)0x0;
    if ((DateTimeOffset__Class *)objB->klass == TypeInfo__System__DateTimeOffset) {
      pOVar1 = objB;
    }
    if (pOVar1 != (Object *)0x0) {
      func_?(objA,TypeInfo__System__DateTimeOffset);
      puVar32 = (undefined4 *)func_?(this,TypeInfo__System__DateTimeOffset);
      iVar20 = func_?(&stack0xffffff88,*puVar32,puVar32[1],puVar32[2],puVar32[3],
                               (int)*(undefined8 *)(puVar32 + 4),
                               (int)((ulonglong)*(undefined8 *)(puVar32 + 4) >> 0x20),0);
      return iVar20;
    }
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__System__ArgumentException);
    pSVar18 = StringLiteral_Object_must_be_of_type_DateTimeO;
    break;
  case JTokenType__Enum_Bytes:
    iVar33 = func_?(objB,TypeInfo__System__Byte);
    if (iVar33 != 0) {
      a1 = (Byte__Array *)func_?(pOVar1,TypeInfo__System__Byte);
      a2 = (Byte__Array *)func_?(this,TypeInfo__System__Byte);
      if (a1 == (Byte__Array *)0x0) {
        return -1;
      }
      if (a2 == (Byte__Array *)0x0) {
        return 1;
      }
      iVar20 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ByteArrayCompare
                         (a1,a2,(MethodInfo *)0x0);
      return iVar20;
    }
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__System__ArgumentException);
    pSVar18 = StringLiteral_Object_must_be_of_type_byte___;
    break;
  case JTokenType__Enum_Guid:
    pOVar1 = (Object *)0x0;
    if ((Guid__Class *)objB->klass == TypeInfo__System__Guid) {
      pOVar1 = objB;
    }
    if (pOVar1 != (Object *)0x0) {
      puVar32 = (undefined4 *)func_?(objA,TypeInfo__System__Guid);
      uStack_14 = *puVar32;
      uStack_15 = puVar32[1];
      uStack_16 = puVar32[2];
      uStack_17 = puVar32[3];
      puVar32 = (undefined4 *)func_?(this,TypeInfo__System__Guid);
      iVar20 = func_?(&uStack_14,*puVar32,puVar32[1],puVar32[2],puVar32[3],0);
      return iVar20;
    }
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__System__ArgumentException);
    pSVar18 = StringLiteral_Object_must_be_of_type_Guid_;
    break;
  case JTokenType__Enum_Uri:
    iVar33 = func_?(objB,TypeInfo__System__Uri);
    if (iVar33 != 0) {
      iVar33 = func_?(pOVar1,pUVar2);
      unaff_EBX = (Uri__Class *)func_?(this,TypeInfo__System__Uri);
      if ((((uint)(TypeInfo__System__Collections__Generic__Comparer<System::String>->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Collections__Generic__Comparer<System::String>->_1).cctor_started == 0)
         ) {
        func_?();
      }
      this = (EqualityComparer_1_WinningConditionType___Class *)
             mscorlib.dll::System::Collections::Generic::EqualityComparer`1[WinningConditionType]::
             EqualityComparer_1_WinningConditionType__get_Default
                       (
                       MethodInfo__System__Collections__Generic__Comparer<System::String>__get_Default__
                       );
      if (((iVar33 != 0) && (func_?(), unaff_EBX != (Uri__Class *)0x0)) &&
         (func_?(), this != (EqualityComparer_1_WinningConditionType___Class *)0x0)) {
        iVar20 = (*(code *)(this->_0).image[5].customAttributeCount)();
        return iVar20;
      }
      goto code_?;
    }
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__System__ArgumentException);
    unaff_EBX = pUVar2;
    pSVar18 = StringLiteral_Object_must_be_of_type_Uri_;
    break;
  case JTokenType__Enum_TimeSpan:
    pOVar1 = (Object *)0x0;
    if ((TimeSpan__Class *)objB->klass == TypeInfo__System__TimeSpan) {
      pOVar1 = objB;
    }
    if (pOVar1 != (Object *)0x0) {
      puVar34 = (undefined8 *)func_?(objA,TypeInfo__System__TimeSpan);
      uStack_5 = *puVar34;
      puVar32 = (undefined4 *)func_?(this,TypeInfo__System__TimeSpan);
      iVar20 = func_?(&uStack_5,*puVar32,puVar32[1],0);
      return iVar20;
    }
    this = (EqualityComparer_1_WinningConditionType___Class *)
           func_?(TypeInfo__System__ArgumentException);
    pSVar18 = StringLiteral_Object_must_be_of_type_TimeSpan_;
  }
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            ((ArgumentException *)this,pSVar18,(MethodInfo *)0x0);
  pEVar30 = this;
code_?:
  func_?(pEVar30,0,
                  MethodInfo__Newtonsoft__Json__Linq__JValue__Compare_Newtonsoft__Json__Linq__JTokenType__System__Object__System__Object_
                 );
code_?:
  uVar35 = func_?();
  pbVar36 = (byte *)((int)uVar35 + (int)this * 2);
  bVar37 = (byte)((ulonglong)uVar35 >> 0x28);
  cVar38 = (char)((ulonglong)uVar35 >> 0x20);
  bVar39 = bVar37 + *pbVar36;
  bVar40 = (byte)unaff_EBX;
  cVar41 = (char)((uint)unaff_EBX >> 8) + cVar38 + CARRY1(bVar37,*pbVar36);
  pbVar36 = (byte *)((int)uVar35 + 0x10);
  *pbVar36 = *pbVar36 ^ bVar39;
  uVar42 = (uint3)((ulonglong)uVar35 >> 8);
  iVar33 = (uint)uVar42 * 0x100;
  *(uint *)(iVar33 + 0x10) = *(uint *)(iVar33 + 0x10) ^ (uint)this;
  pbVar36 = (byte *)(iVar33 + (int)this * 2);
  bVar43 = CARRY1(bVar39,*pbVar36);
  bVar37 = *pbVar36;
  pcVar44 = (char *)(CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar41,bVar40)) + 0x32);
  cVar45 = *pcVar44;
  cVar46 = *pcVar44;
  *pcVar44 = cVar46 + cVar41 + bVar43;
  if (SCARRY1(cVar45,cVar41) == SCARRY1(cVar46 + cVar41,bVar43)) {
    (this->_0).image = (Il2CppImage *)this;
    (this->_0).image = (Il2CppImage *)this;
  }
  else {
    pbVar36 = (byte *)(iVar33 + (int)this * 2);
    *pbVar36 = *pbVar36 ^ 0x10;
  }
  bVar37 = bVar39 + bVar37 ^ *(byte *)(iVar33 + 0x10);
  pbVar36 = (byte *)(iVar33 + (int)this * 2);
  pcVar44 = (char *)(CONCAT22((short)((ulonglong)uVar35 >> 0x30),CONCAT11(bVar37 + *pbVar36,cVar38))
                    + -0xaef8fcc);
  *pcVar44 = *pcVar44 + CARRY1(bVar37,*pbVar36);
  pcVar44 = (char *)CONCAT31(uVar42,0x70);
  bVar43 = CARRY1(in_stack_47,bVar40);
  bVar48 = SCARRY1(in_stack_47,bVar40);
  in_stack_47 = in_stack_47 + bVar40;
  if (bVar48) {
    *pcVar44 = *pcVar44 + 'p' + bVar43;
    if (*pcVar44 == '\0') {
      func_?();
      uRam_? = 1;
    }
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    this_00[1].klass = (ScaleAnimationBase__Class *)valueType;
    (this_00->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x5;
    return (int32_t)this_00;
  }
  pcVar49 = (code *)swi(3);
  iVar20 = (*pcVar49)();
  return iVar20;
}


/* Int32 CompareFloat(Object, Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CompareFloat
                  (Object *objA,Object *objB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  uStack_2 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                        (objA,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  d2 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                 (objB,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
  dStack3 = uStack_2;
  uStack_2 = (double)CONCAT44(&UNK_?,(undefined4)uStack_2);
  bVar4 = Json::Utilities::MathUtils::MathUtils_ApproxEquals(dStack3,d2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    puStack5 = &uStack_2;
    uStack6 = 0;
    iVar7 = func_?();
    return iVar7;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (JValue *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = (Object *)value;
  (this->fields)._valueType = 5;
  return this;
}


/* JValue CreateString(String) */

JValue * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_CreateString
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JValue;
  this = (JValue *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = (Object *)value;
  (this->fields)._valueType = 8;
  return this;
}


/* Boolean DeepEquals(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_DeepEquals
               (JValue *this,JToken *node,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (node != (JToken *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if (((node->klass->_1).naturalAligment < bVar1) ||
       ((node->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pJVar3 = (JValue *)0x0;
    if (bVar2) {
      pJVar3 = (JValue *)node;
    }
    if (pJVar3 != (JValue *)0x0) {
      if (this == pJVar3) {
        return 1;
      }
      if (this != (JValue *)0x0) {
        valueType = (this->fields)._valueType;
        if (valueType != (pJVar3->fields)._valueType) {
          return 0;
        }
        iVar4 = JValue_Compare(valueType,(this->fields)._value,(pJVar3->fields)._value,
                               (MethodInfo *)0x0);
        return 1 - (iVar4 != 0);
      }
      func_?(0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  return 0;
}


/* Boolean Equals(JValue) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Equals
               (JValue *this,JValue *other,MethodInfo *method)

{
  if (other == (JValue *)0x0) {
    return 0;
  }
  if (this == other) {
    return 1;
  }
  if (this == (JValue *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  valueType = (this->fields)._valueType;
  if (valueType != (other->fields)._valueType) {
    return 0;
  }
  iVar3 = JValue_Compare(valueType,(this->fields)._value,(other->fields)._value,(MethodInfo *)0x0);
  return 1 - (iVar3 != 0);
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_Equals_1
               (JValue *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
  if (((obj->klass->_1).naturalAligment < bVar1) ||
     ((obj->klass->_1).typeHierarchy[bVar1 - 1] !=
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pJVar3 = (JValue *)0x0;
  if (bVar2) {
    pJVar3 = (JValue *)obj;
  }
  if (pJVar3 == (JValue *)0x0) {
    return this == (JValue *)obj;
  }
  if (this == pJVar3) {
    return 1;
  }
  if (this != (JValue *)0x0) {
    valueType = (this->fields)._valueType;
    if (valueType != (pJVar3->fields)._valueType) {
      return 0;
    }
    iVar4 = JValue_Compare(valueType,(this->fields)._value,(pJVar3->fields)._value,(MethodInfo *)0x0
                          );
    return 1 - (iVar4 != 0);
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Int32 GetDeepHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetDeepHashCode
                  (JValue *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._value;
  if (pOVar1 == (Object *)0x0) {
    iVar2 = func_?(&(this->fields)._valueType,0);
    return iVar2;
  }
  uVar3 = (*(code *)(pOVar1->klass->vtable).GetHashCode.method)
                    (pOVar1,(pOVar1->klass->vtable).ToString.methodPtr);
  uVar4 = func_?(&(this->fields)._valueType,0);
  return uVar4 ^ uVar3;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetHashCode
                  (JValue *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._value;
  if (pOVar1 != (Object *)0x0) {
    iVar2 = (*(code *)(pOVar1->klass->vtable).GetHashCode.method)
                      (pOVar1,(pOVar1->klass->vtable).ToString.methodPtr);
    return iVar2;
  }
  return 0;
}


/* JTokenType GetStringValueType(Nullable`1[Newtonsoft.Json.Linq.JTokenType]) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetStringValueType
          (Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&current,
                          MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_HasValue__
                         );
  if (cVar1 != '\0') {
    iVar2 = func_?(&current,
                            MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                           );
    switch(iVar2) {
    case 5:
    case 8:
      break;
    default:
      if (iVar2 != 0xd) {
        return JTokenType__Enum_String;
      }
    }
    JVar3 = func_?(&current,
                            MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                           );
    return JVar3;
  }
  return JTokenType__Enum_String;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* JTokenType GetValueType(Nullable`1[Newtonsoft.Json.Linq.JTokenType], Object) */

JTokenType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_GetValueType
          (Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((((uint)(TypeInfo__System__DBNull->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DBNull->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DBNull);
    }
    if ((DBNull *)value != TypeInfo__System__DBNull->static_fields->Value) {
      pSVar1 = (String__Class *)value->klass;
      pOVar2 = (Object *)0x0;
      if (pSVar1 == TypeInfo__System__String) {
        pOVar2 = value;
      }
      if (pOVar2 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        cVar3 = func_?(&stack0xfffffff4,
                                MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_HasValue__
                               );
        if (cVar3 != '\0') {
          iVar4 = func_?(&stack0xfffffff4,
                                  MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                                 );
          switch(iVar4) {
          case 5:
          case 8:
            break;
          default:
            if (iVar4 != 0xd) {
              return JTokenType__Enum_String;
            }
          }
          JVar5 = func_?(&stack0xfffffff4,
                                   MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__get_Value__
                                  );
          return JVar5;
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
                    if ((pOVar2 == (Object *)0x0) &&
                       (iVar4 = func_?(value,TypeInfo__System__Enum), iVar4 == 0)) {
                      pOVar2 = (Object *)0x0;
                      if (pSVar1 == (String__Class *)TypeInfo__System__Double) {
                        pOVar2 = value;
                      }
                      if (pOVar2 == (Object *)0x0) {
                        pOVar2 = (Object *)0x0;
                        if (pSVar1 == (String__Class *)TypeInfo__System__Single) {
                          pOVar2 = value;
                        }
                        if (pOVar2 == (Object *)0x0) {
                          pOVar2 = (Object *)0x0;
                          if (pSVar1 == (String__Class *)TypeInfo__System__Decimal) {
                            pOVar2 = value;
                          }
                          if (pOVar2 == (Object *)0x0) {
                            pOVar2 = (Object *)0x0;
                            if (pSVar1 == (String__Class *)TypeInfo__System__DateTime) {
                              pOVar2 = value;
                            }
                            if (pOVar2 == (Object *)0x0) {
                              pOVar2 = (Object *)0x0;
                              if (pSVar1 == (String__Class *)TypeInfo__System__DateTimeOffset) {
                                pOVar2 = value;
                              }
                              if (pOVar2 == (Object *)0x0) {
                                iVar4 = func_?(value,TypeInfo__System__Byte);
                                if (iVar4 != 0) {
                                  return JTokenType__Enum_Bytes;
                                }
                                pBVar6 = (Boolean__Class *)value->klass;
                                pOVar2 = (Object *)0x0;
                                if (pBVar6 == TypeInfo__System__Boolean) {
                                  pOVar2 = value;
                                }
                                if (pOVar2 != (Object *)0x0) {
                                  return JTokenType__Enum_Boolean;
                                }
                                pOVar2 = (Object *)0x0;
                                if (pBVar6 == (Boolean__Class *)TypeInfo__System__Guid) {
                                  pOVar2 = value;
                                }
                                if (pOVar2 != (Object *)0x0) {
                                  return JTokenType__Enum_Guid;
                                }
                                iVar4 = func_?(value,TypeInfo__System__Uri);
                                if (iVar4 != 0) {
                                  return JTokenType__Enum_Uri;
                                }
                                pOVar2 = (Object *)0x0;
                                if (pBVar6 == (Boolean__Class *)TypeInfo__System__TimeSpan) {
                                  pOVar2 = value;
                                }
                                if (pOVar2 == (Object *)0x0) {
                                  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable)
                                              .Equals.methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__System__Globalization__CultureInfo->_1).
                                      cctor_started == 0)) {
                                    func_?(TypeInfo__System__Globalization__CultureInfo);
                                  }
                                  provider = mscorlib.dll::System::Globalization::CultureInfo::
                                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                                  args = (Object__Array *)
                                         func_?(TypeInfo__System__Object,1);
                                  func_?(value,0);
                                  pTVar7 = mscorlib.dll::System::Object::Object_GetType
                                                      (value,(MethodInfo *)0x0);
                                  func_?(args,0);
                                  func_?(args,pTVar7);
                                  func_?(0,pTVar7);
                                  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                                                      (
                                                  StringLiteral_Could_not_determine_JSON_object_,
                                                  (IFormatProvider *)provider,args,(MethodInfo *)0x0
                                                  );
                                  this = (ArgumentException *)
                                         func_?(TypeInfo__System__ArgumentException);
                                  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                                            (this,message,(MethodInfo *)0x0);
                                  pMVar8 = 
                                  MethodInfo__Newtonsoft__Json__Linq__JValue__GetValueType_System__Nullable<Newtonsoft::Json::Linq::JTokenType>__System__Object_
                                  ;
                                  uVar9 = func_?();
                                  if (SBORROW4(uRam_?,0x3d7c1070)) {
                                    *(char *)uVar9 =
                                         *(char *)uVar9 + (char)uVar9 +
                                         (uRam_? < 0x3d7c1070);
                                  }
                                  in((short)((uint6)uVar9 >> 0x20));
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  if (current._4_4_ == 0) {
                                    return JTokenType__Enum_Object;
                                  }
                                  bVar10 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).
                                          naturalAligment;
                                  if ((*(byte *)(*(int *)current._4_4_ + 0xb8) < bVar10) ||
                                     (*(JValue__Class **)
                                       (*(int *)(*(int *)current._4_4_ + 100) + -4 + (uint)bVar10 * 4
                                       ) != TypeInfo__Newtonsoft__Json__Linq__JValue)) {
                                    bVar11 = false;
                                  }
                                  else {
                                    bVar11 = true;
                                  }
                                  iVar4 = 0;
                                  if (bVar11) {
                                    iVar4 = current._4_4_;
                                  }
                                  if (iVar4 != 0) {
                                    iVar4 = func_?(current._4_4_);
                                    if (iVar4 == 0) {
                                      func_?();
                                      pcVar12 = (code *)swi(3);
                                      JVar5 = (*pcVar12)();
                                      return JVar5;
                                    }
                                    iVar4 = func_?(current._4_4_);
                                    current._4_4_ = *(undefined4 *)(iVar4 + 0x28);
                                  }
                                  JVar5 = JValue_Compare(pMVar8->token,*(Object **)&pMVar8->flags,
                                                          (Object *)current._4_4_,(MethodInfo *)0x0)
                                  ;
                                  return JVar5;
                                }
                                return JTokenType__Enum_TimeSpan;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Linq__JValue->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar1) ||
       ((obj->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pOVar3 = (Object *)0x0;
    if (bVar2) {
      pOVar3 = obj;
    }
    if (pOVar3 != (Object *)0x0) {
      iVar4 = func_?(obj,TypeInfo__Newtonsoft__Json__Linq__JValue);
      if (iVar4 == 0) {
        func_?(0);
        pcVar5 = (code *)swi(3);
        iVar6 = (*pcVar5)();
        return iVar6;
      }
      iVar4 = func_?(obj,TypeInfo__Newtonsoft__Json__Linq__JValue);
      obj = *(Object **)(iVar4 + 0x28);
    }
    iVar6 = JValue_Compare((this->fields)._valueType,(this->fields)._value,obj,(MethodInfo *)0x0);
    return iVar6;
  }
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString
                   (JValue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._value;
  if (pOVar1 != (Object *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pOVar1->klass->vtable).ToString.method)(pOVar1,pOVar1->klass[1]._0.image);
    return pSVar2;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  return TypeInfo__System__String->static_fields->Empty;
}


/* String ToString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_ToString_1
                   (JValue *this,String *format,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._value;
  if (pOVar1 == (Object *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    return TypeInfo__System__String->static_fields->Empty;
  }
  piVar2 = (int *)func_?(pOVar1,TypeInfo__System__IFormattable);
  if (piVar2 == (int *)0x0) {
    pOVar1 = (this->fields)._value;
    if (pOVar1 != (Object *)0x0) {
      pSVar3 = (String *)
               (*(code *)(pOVar1->klass->vtable).ToString.method)(pOVar1,pOVar1->klass[1]._0.image);
      return pSVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  uVar5 = 0;
  uVar6 = *(ushort *)(*piVar2 + 0xb6);
  if (uVar6 != 0) {
    iVar7 = *(int *)(*piVar2 + 0x58);
    do {
      if (*(IFormattable__Class **)(iVar7 + (uint)uVar5 * 8) == TypeInfo__System__IFormattable) {
        puVar8 = (undefined4 *)(*piVar2 + (*(int *)(iVar7 + 4 + (uint)uVar5 * 8) + 0x18) * 8);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  puVar8 = (undefined4 *)func_?(piVar2,TypeInfo__System__IFormattable,0);
code_?:
  pSVar3 = (String *)(*(code *)*puVar8)(piVar2,format,formatProvider,puVar8[1]);
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
    return 1 - (iVar1 != 0);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void WriteTo(JsonWriter, JsonConverter[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_WriteTo
               (JValue *this,JsonWriter *writer,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._valueType;
  switch(iVar1) {
  case 10:
    bVar2 = 0;
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteNull.method)();
      return;
    }
    break;
  case 0xb:
    bVar2 = 0;
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteUndefined.method)();
      return;
    }
    break;
  default:
    pOVar3 = (this->fields)._value;
    if (iVar1 == 5) {
      bVar2 = 0;
      if (pOVar3 != (Object *)0x0) {
        (*(code *)(pOVar3->klass->vtable).ToString.method)();
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          (*(code *)(writer->klass->vtable).WriteComment.method)(writer);
          return;
        }
      }
    }
    else {
      if (pOVar3 != (Object *)0x0) {
        objectType = mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
        pJVar4 = JsonSerializer::JsonSerializer_GetMatchingConverter_1
                           ((IList_1_Newtonsoft_Json_JsonConverter_ *)converters,objectType,
                            (MethodInfo *)0x0);
        unaff_EBX = 0;
        if (pJVar4 != (JsonConverter *)0x0) {
          this_01 = (JsonSerializer *)func_?();
          JsonSerializer::JsonSerializer__ctor(this_01,(MethodInfo *)0x0);
          (*(code *)(pJVar4->klass->vtable).__unknown.method)();
          return;
        }
      }
      switch((this->fields)._valueType) {
      case 6:
        this = (JValue *)(this->fields)._value;
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        mscorlib.dll::System::Convert::Convert_ToInt64_17
                  ((Object *)this,(IFormatProvider *)unaff_EDI,(MethodInfo *)0x0);
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          func_?(0x1a,writer);
          return;
        }
        break;
      case 7:
        this = (JValue *)(this->fields)._value;
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        mscorlib.dll::System::Convert::Convert_ToDouble_13
                  ((Object *)this,(IFormatProvider *)unaff_EDI,(MethodInfo *)0x0);
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          func_?(0x1d,writer);
          return;
        }
        break;
      case 8:
      case 0xf:
      case 0x10:
      case 0x11:
        if ((this->fields)._value != (Object *)0x0) {
          func_?();
        }
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          func_?(0x17);
          return;
        }
        break;
      case 9:
        this = (JValue *)(this->fields)._value;
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        mscorlib.dll::System::Convert::Convert_ToBoolean_13
                  ((Object *)this,(IFormatProvider *)unaff_EDI,(MethodInfo *)0x0);
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          func_?(0x1e);
          return;
        }
        break;
      default:
        func_?();
        pOVar3 = (Object *)func_?();
        Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
                  (StringLiteral_TokenType,pOVar3,StringLiteral_Unexpected_token_type_,
                   (MethodInfo *)0x0);
        bVar2 = (undefined1 *)0xffffffe7 < &stack0xffffffd8;
        func_?();
        break;
      case 0xc:
        this = (JValue *)(this->fields)._value;
        if (this != (JValue *)0x0) {
          pJVar5 = (JValue *)0x0;
          if (this->klass == (JValue__Class *)TypeInfo__System__DateTimeOffset) {
            pJVar5 = this;
          }
          if (pJVar5 != (JValue *)0x0) {
            bVar2 = 0;
            unaff_EDI = (CultureInfo *)0x0;
            if (writer != (JsonWriter *)0x0) {
              puVar6 = (undefined4 *)func_?();
              func_?(0x26,writer,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
              return;
            }
            break;
          }
        }
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        unaff_EDI = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        pDVar7 = mscorlib.dll::System::Convert::Convert_ToDateTime_5
                           ((DateTime *)&stack0xffffffec,(Object *)this,(IFormatProvider *)unaff_EDI
                            ,(MethodInfo *)0x0);
        bVar2 = 0;
        if (writer != (JsonWriter *)0x0) {
          func_?(0x25,writer,(int)(pDVar7->ticks)._ticks,
                          *(undefined4 *)((int)&(pDVar7->ticks)._ticks + 4));
          return;
        }
        break;
      case 0xe:
        bVar2 = 0;
        this = (JValue *)0x0;
        if (writer != (JsonWriter *)0x0) {
          uVar8 = func_?();
          func_?(0x3a,writer,uVar8);
          return;
        }
      }
    }
    break;
  case 0xd:
    pOVar3 = (this->fields)._value;
    if (pOVar3 != (Object *)0x0) {
      (*(code *)(pOVar3->klass->vtable).ToString.method)();
    }
    bVar2 = 0;
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteRawValue.method)(writer);
      return;
    }
  }
  uVar9 = func_?();
  uVar10 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar11 = (undefined3)((ulonglong)uVar9 >> 8);
  uVar12 = CONCAT31(uVar11,uRam_?);
  iVar1 = extraout_ECX + 1;
  bVar13 = (byte)((uint)in_stack_14 >> 8);
  bVar15 = true;
  uVar16 = uVar10;
  if (SCARRY4(extraout_ECX,1)) {
code_?:
    out(0x43,uVar12);
    uVar10 = uVar16;
    if (!bVar15) {
      bVar17 = (byte)iVar1;
      puVar18 = (uint *)(uVar12 + 0x10 + (int)this * 2);
      bVar19 = *puVar18 < uVar12 || *puVar18 - uVar12 < (uint)bVar2;
      *puVar18 = (*puVar18 - uVar12) - (uint)bVar2;
      goto code_?;
    }
code_?:
    pbVar20 = (byte *)(uVar10 + 0x45);
    bVar17 = *pbVar20;
    bVar21 = *pbVar20 + bVar13;
    bVar19 = CARRY1(*pbVar20,bVar13) || CARRY1(bVar21,bVar2);
    *pbVar20 = bVar21 + bVar2;
    bVar15 = false;
    puVar22 = &stack0xfffffffc;
    if (SCARRY1(bVar17,bVar13) == SCARRY1(bVar21,bVar2)) {
code_?:
      out(0x43,in_stack_14);
      if (!bVar15) {
        out(0x43,in_stack_14);
        bVar15 = false;
        goto code_?;
      }
      *in_stack_14 = *in_stack_14 + (char)in_stack_14 + bVar19;
      goto Assembly_CSharp_dll_Newtonsoft_Json_Linq_JValue_JValue__ctor_8;
    }
  }
  else {
    bVar19 = false;
    uVar23 = (undefined2)((ulonglong)uVar9 >> 0x20);
    uVar24 = in(uVar23);
    uVar12 = CONCAT31(uVar11,uVar24);
    bVar15 = SCARRY4(iVar1,1);
    iVar1 = extraout_ECX + 2;
    bVar17 = (byte)iVar1;
    if (bVar15) {
code_?:
      pbVar20 = (byte *)(unaff_EBX + -0x6def8fbb);
      bVar2 = CARRY1(*pbVar20,bVar17) || CARRY1(*pbVar20 + bVar17,bVar19);
      *pbVar20 = *pbVar20 + bVar17 + bVar19;
      bVar15 = SCARRY4((int)&stack0xffffffdc,1);
      if (!bVar15) goto code_?;
code_?:
      out(0x43,in_stack_14);
      if (bVar15) {
        *(int *)(unaff_EBX + 0x5c604c4) = *(int *)(unaff_EBX + 0x5c604c4) + 1;
        puVar25 = (undefined1 *)0xf0110e4;
        cRam_? = cRam_? + (char)in_stack_14 +
                       (((uint)in_stack_14 & 0x100) != 0);
        goto code_?;
      }
    }
    else {
      out(uVar23,uVar12);
      uVar16 = uVar10 + 1;
      if (!SCARRY4(uVar10,1)) {
        bVar15 = SCARRY4(unaff_EBX,1);
        unaff_EBX = unaff_EBX + 1;
        uVar10 = uVar12;
        bVar2 = bVar19;
        if (!bVar15) goto code_?;
        goto code_?;
      }
      pbVar20 = (byte *)(uVar10 + 0x8b107045);
      bVar2 = *pbVar20;
      bVar17 = (byte)uVar16;
      *pbVar20 = *pbVar20 + bVar17;
      if (!SCARRY4((int)&stack0xfffffffc,1)) {
        bVar26 = (byte)((uint)unaff_EBX >> 8);
        bVar21 = bVar26 + bVar13;
        bVar19 = CARRY1(bVar26,bVar13) || CARRY1(bVar21,CARRY1(bVar2,bVar17));
        iVar1 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                          CONCAT11(bVar21 + CARRY1(bVar2,bVar17),(char)unaff_EBX));
        bVar15 = SCARRY4(iVar1,1);
        unaff_EBX = iVar1 + 1;
        goto code_?;
      }
    }
Assembly_CSharp_dll_Newtonsoft_Json_Linq_JValue_JValue__ctor_8:
    puVar25 = &stack0xffffffd8;
    puVar22 = &stack0xffffffd8;
    if (cRam_? != '\0') goto code_?;
  }
  puVar25 = puVar22;
  func_?(_UNK_?);
  cRam_? = '\x01';
code_?:
  *(undefined4 *)(puVar25 + 0xc) = *(undefined4 *)(puVar25 + 0xc);
  *(undefined4 *)(puVar25 + 0x10) = *(undefined4 *)(puVar25 + 0x10);
  *(undefined4 *)(puVar25 + 0x14) = *(undefined4 *)(puVar25 + 0x14);
  *(undefined4 *)(puVar25 + 0x18) = *(undefined4 *)(puVar25 + 0x18);
  method_00 = TypeInfo__System__Guid;
  pSVar27 = (ScaleAnimationBase__Class *)
            func_?(TypeInfo__System__Guid,puVar25 + 0xc,unaff_EDI,this);
  this_00 = *(ScaleAnimationBase **)(puVar25 + 8);
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  this_00[1].klass = pSVar27;
  (this_00->fields).OnScaleAnimationStopped =
       (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x8;
  return;
}


/* JValue(Object, JTokenType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor
               (JValue *this,Object *value,JTokenType__Enum type,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._value = value;
  (this->fields)._valueType = type;
  return;
}


/* JValue(JValue) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_1
               (JValue *this,JValue *other,MethodInfo *method)

{
  if (other != (JValue *)0x0) {
    pOVar1 = (other->fields)._value;
    iVar2 = (*(code *)(other->klass->vtable).get_Type.method)
                      (other,(other->klass->vtable).get_HasValues.methodPtr);
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)other);
    (this->fields)._valueType = iVar2;
    (this->fields)._value = pOVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_10
               (JValue *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value._ticks;
  method_00 = TypeInfo__System__TimeSpan;
  pOVar4 = (Object *)func_?(TypeInfo__System__TimeSpan,&uStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar4;
  (this->fields)._valueType = 8;
  return;
}


/* JValue(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_11
               (JValue *this,Object *value,MethodInfo *method)

{
  JVar1 = JValue_GetValueType((Nullable_1_Newtonsoft_Json_Linq_JTokenType_)0x0,value,
                              (MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._valueType = JVar1;
  (this->fields)._value = value;
  return;
}


/* JValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_2
               (JValue *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value;
  method_00 = TypeInfo__System__Int64;
  pOVar4 = (Object *)func_?(TypeInfo__System__Int64,&uStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar4;
  (this->fields)._valueType = 6;
  return;
}


/* JValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_3
               (JValue *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = in_stack_2;
  uStack_3 = (undefined4)value;
  method_00 = TypeInfo__System__UInt64;
  pOVar4 = (Object *)func_?(TypeInfo__System__UInt64,&uStack_1);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar4;
  (this->fields)._valueType = 6;
  return;
}


/* JValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_4
               (JValue *this,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Double;
  pOVar1 = (Object *)func_?(TypeInfo__System__Double,&stack0x00000008);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  (this->fields)._valueType = 7;
  return;
}


/* JValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_5
               (JValue *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__DateTime;
  pOVar1 = (Object *)func_?(TypeInfo__System__DateTime,&stack0x00000008);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  (this->fields)._valueType = 0xc;
  return;
}


/* JValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_6
               (JValue *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack1 = value;
  method_00 = TypeInfo__System__Boolean;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar2;
  (this->fields)._valueType = 9;
  return;
}


/* JValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_8
               (JValue *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Guid;
  pOVar1 = (Object *)func_?(TypeInfo__System__Guid,&value);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._value = pOVar1;
  (this->fields)._valueType = 8;
  return;
}


/* JValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue__ctor_9
               (JValue *this,Uri *value,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._value = (Object *)value;
  (this->fields)._valueType = 8;
  return;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JValue::JValue_set_Value
               (JValue *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._value;
  if (this_00 == (Object *)0x0) {
    pTVar1 = (Type *)0x0;
  }
  else {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
  }
  if (value == (Object *)0x0) {
    pTVar2 = (Type *)0x0;
  }
  else {
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
  }
  if (pTVar1 != pTVar2) {
    NStack_3.value = 0;
    NStack_3.has_value = 0;
    NStack_3._5_3_ = 0;
    func_?(&NStack_3,(this->fields)._valueType,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Linq::JTokenType>__Nullable_Newtonsoft__Json__Linq__JTokenType_
                   );
    JVar4 = JValue_GetValueType(NStack_3,value,(MethodInfo *)0x0);
    (this->fields)._valueType = JVar4;
  }
  (this->fields)._value = value;
  return;
}

