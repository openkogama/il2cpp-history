
/* Nullable`1[Newtonsoft.Json.JsonToken] GetEndToken(JContainer) */

Nullable_1_Newtonsoft_Json_JsonToken_
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_GetEndToken
          (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                   );
    cRam_? = '\x01';
  }
  pJVar1 = c;
  if (c != (JContainer *)0x0) {
    uVar2 = (*(c->klass->vtable).__unknown_2.methodPtr)(c,(c->klass->vtable).__unknown_2.method);
    switch(uVar2) {
    case 1:
      value = 0xd;
      break;
    case 2:
      value = 0xe;
      break;
    case 3:
      value = 0xf;
      break;
    case 4:
      NVar3.hasValue = 0;
      uVar4._1_3_ = 0;
      register0x00000008 = 0;
      return NVar3;
    default:
      goto code_?;
    }
    NStack_5.hasValue = 0;
    NStack_5._1_3_ = 0;
    NStack_5.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_5,value,
               MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
              );
    NVar6.hasValue = NStack_5.hasValue;
    uVar7._1_3_ = NStack_5._1_3_;
    register0x00000008 = NStack_5.value;
    return NVar6;
  }
  func_?();
code_?:
  func_?(pJVar1);
  c = (JContainer *)func_?(0xd,pJVar1);
  uVar2 = func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenType,&c);
  actualValue = (Object *)func_?(uVar2);
  message = (String *)func_?(&StringLiteral_Unexpected_JContainer_type_);
  paramName = (String *)func_?(&StringLiteral_Type);
  pAVar8 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
                     (paramName,actualValue,message,(MethodInfo *)0x0);
  NStack_5.value =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Linq__JTokenReader__GetEndToken_Newtonsoft__Json__Linq__JContainer_
                      );
  NStack_5._0_4_ = pAVar8;
  func_?();
  pcVar9 = (code *)swi(3);
  NVar3 = (Nullable_1_Newtonsoft_Json_JsonToken_)(*pcVar9)();
  return NVar3;
}


/* Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
     JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo(JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  if ((((this->fields)._._currentState != 0) &&
      (pJVar1 = (this->fields)._current, pJVar1 != (this->fields)._parent)) &&
     (pJVar1 != (JToken *)0x0)) {
    bVar2 = func_?(0,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
    return bVar2;
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
        JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber
                  (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  if ((((this->fields)._._currentState != 0) &&
      (pJVar1 = (this->fields)._current, pJVar1 != (this->fields)._parent)) &&
     (pJVar1 != (JToken *)0x0)) {
    iVar2 = func_?(1,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
    return iVar2;
  }
  return 0;
}


/* Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::
        JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                  (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__IJsonLineInfo);
    cRam_? = '\x01';
  }
  if ((((this->fields)._._currentState != 0) &&
      (pJVar1 = (this->fields)._current, pJVar1 != (this->fields)._parent)) &&
     (pJVar1 != (JToken *)0x0)) {
    iVar2 = func_?(2,TypeInfo__Newtonsoft__Json__IJsonLineInfo,pJVar1);
    return iVar2;
  }
  return 0;
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_Read
               (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  t = (JToken__Class *)(this->fields)._current;
  if ((this->fields)._._currentState == 0) {
    JTokenReader_SetToken(this,(JToken *)t,(MethodInfo *)0x0);
    return 1;
  }
  if ((((t == (JToken__Class *)0x0) ||
       (pJVar1 = (JToken__Class *)(t->_0).image,
       (pJVar1->_1).typeHierarchyDepth <
       (TypeInfo__Newtonsoft__Json__Linq__JContainer->_1).typeHierarchyDepth)) ||
      ((JContainer__Class *)
       (pJVar1->_1).typeHierarchy
       [(TypeInfo__Newtonsoft__Json__Linq__JContainer->_1).typeHierarchyDepth - 1] !=
       TypeInfo__Newtonsoft__Json__Linq__JContainer)) ||
     ((JToken__Class *)(this->fields)._parent == t)) {
    bVar2 = JTokenReader_ReadOver(this,(JToken *)t,(MethodInfo *)0x0);
    return bVar2;
  }
  pJVar3 = (JToken *)(*(pJVar1->vtable).get_First.methodPtr)();
  if (pJVar3 != (JToken *)0x0) {
    JTokenReader_SetToken(this,pJVar3,(MethodInfo *)0x0);
    (this->fields)._current = pJVar3;
    func_?();
    (this->fields)._parent = (JToken *)t;
    func_?();
    return 1;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  NStack_4.hasValue = 0;
  NStack_4._1_3_ = 0;
  NStack_4.value = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar5 = (*(((JToken__Class *)(t->_0).image)->vtable).__unknown_2.methodPtr)();
  pJVar1 = (JToken__Class *)0x0;
  switch(uVar5) {
  case 1:
    NStack_6.hasValue = 0;
    NStack_6._1_3_ = 0;
    NStack_6.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_6,0xd,
               MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
              );
    uVar5 = NStack_6._0_4_;
    NStack_4.value = NStack_6.value;
    break;
  case 2:
    NStack_7.hasValue = 0;
    NStack_7._1_3_ = 0;
    NStack_7.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_7,0xe,
               MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
              );
    uVar5 = NStack_7._0_4_;
    NStack_4.value = NStack_7.value;
    break;
  case 3:
    NStack_8.hasValue = 0;
    NStack_8._1_3_ = 0;
    NStack_8.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_8,0xf,
               MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
              );
    goto code_?;
  case 4:
    NStack_8.hasValue = 0;
    NStack_8._1_3_ = 0;
    NStack_8.value = 0;
code_?:
    uVar5 = NStack_8._0_4_;
    NStack_4.value = NStack_8.value;
    break;
  default:
    goto code_?;
  }
  NStack_4.hasValue = (bool)uVar5;
  NStack_4._1_3_ = SUB43(uVar5,1);
  if ((bool)uVar5 != 0) {
    newToken = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                         (&NStack_4,
                          MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__get_Value__);
    JsonReader::JsonReader_SetToken((JsonReader *)this,newToken,(MethodInfo *)0x0);
    (this->fields)._current = (JToken *)t;
    func_?();
    (this->fields)._parent = (JToken *)t;
    func_?();
    return 1;
  }
  if (t == (JToken__Class *)(this->fields)._root) {
    return 0;
  }
  pJVar1 = (JToken__Class *)(t->_0).byval_arg.data.__klassIndex;
  if ((pJVar1 == (JToken__Class *)0x0) || (pJVar1 == t)) {
code_?:
    if (((JToken__Fields *)&(t->_0).name)->_parent == (JContainer *)0x0) {
      return 0;
    }
    bVar2 = JTokenReader_SetEnd(this,((JToken__Fields *)&(t->_0).name)->_parent,(MethodInfo *)0x0);
    return bVar2;
  }
  pJVar9 = ((JToken__Fields *)&(t->_0).name)->_parent;
  if (pJVar9 != (JContainer *)0x0) {
    pJVar10 = (JToken__Class *)(*(pJVar9->klass->vtable).get_Last.methodPtr)();
    if (t == pJVar10) goto code_?;
    (this->fields)._current = (JToken *)pJVar1;
    func_?();
    pJVar3 = (this->fields)._current;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (pJVar3 == (JToken *)0x0) goto code_?;
    uVar5 = (*(pJVar3->klass->vtable).__unknown_2.methodPtr)();
    switch(uVar5) {
    case 1:
      JsonReader::JsonReader_SetToken
                ((JsonReader *)this,JsonToken__Enum_StartObject,(MethodInfo *)0x0);
      return 1;
    case 2:
      JsonReader::JsonReader_SetToken
                ((JsonReader *)this,JsonToken__Enum_StartArray,(MethodInfo *)0x0);
      return 1;
    case 3:
      JsonReader::JsonReader_SetToken
                ((JsonReader *)this,JsonToken__Enum_StartConstructor,(MethodInfo *)0x0);
      return 1;
    case 4:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((JProperty__Class *)
          (pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
        func_?();
        return 1;
      }
      break;
    case 5:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 6:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 7:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 8:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 9:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 10:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 0xb:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 0xc:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 0xd:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 0xe:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        func_?();
        return 1;
      }
      break;
    case 0xf:
    case 0x10:
    case 0x11:
      pJVar1 = pJVar3->klass;
      if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
           (pJVar1->_1).typeHierarchyDepth) &&
         ((pJVar1->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
        if (pJVar3[1].monitor != (MonitorData *)0x0) {
          (**(code **)(*(int *)pJVar3[1].monitor + 0xd4))();
          func_?();
          return 1;
        }
        func_?();
        return 1;
      }
      break;
    default:
      goto code_?;
    }
    func_?();
code_?:
    func_?();
    func_?();
    func_?();
    pOVar11 = (Object *)func_?();
    pSVar12 = (String *)func_?();
    pSVar13 = (String *)func_?();
    pAVar14 = Json::Utilities::MiscellaneousUtils::
              MiscellaneousUtils_CreateArgumentOutOfRangeException
                        (pSVar13,pOVar11,pSVar12,(MethodInfo *)0x0);
    NStack_8.value = func_?();
    NStack_8._0_4_ = pAVar14;
    NStack_4.value = (uint32_t)&UNK_?;
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  pOVar11 = (Object *)func_?();
  pSVar12 = (String *)func_?();
  pSVar13 = (String *)func_?();
  pAVar14 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar13,pOVar11,pSVar12,(MethodInfo *)0x0);
  uVar5 = func_?();
  bVar15 = (undefined1 *)0xffffffdb < &stack0xffffffbc;
  NStack_4._0_4_ = uVar5;
  pAStack16 = pAVar14;
  uVar17 = func_?();
  pbVar18 = (byte *)((ulonglong)uVar17 >> 0x20);
  iVar19 = (int)uVar17;
  puVar20 = &pJVar1[-0x1b9403]._1.packingSize;
  bVar21 = (byte)((ulonglong)uVar17 >> 0x28);
  bVar22 = CARRY1(*puVar20,bVar21) || CARRY1(*puVar20 + bVar21,bVar15);
  *puVar20 = *puVar20 + bVar21 + bVar15;
  bVar23 = (byte)((uint)extraout_ECX >> 8);
  bVar15 = bVar23 + bVar21;
  bVar24 = CARRY1(bVar23,bVar21) || CARRY1(bVar15,bVar22);
  bVar25 = (byte)extraout_ECX;
  bVar15 = bVar15 + bVar22;
  pbVar26 = &(pJVar1 + -0x1f9ecb)[1]._0.this_arg.type;
  bVar27 = (byte)((uint)pJVar1 >> 8);
  bVar22 = CARRY1(*pbVar26,bVar27) || CARRY1(*pbVar26 + bVar27,bVar24);
  *pbVar26 = *pbVar26 + bVar27 + bVar24;
  bVar28 = (byte)((ulonglong)uVar17 >> 8);
  bVar23 = bVar27 + bVar28;
  bVar24 = CARRY1(bVar27,bVar28) || CARRY1(bVar23,bVar22);
  bVar27 = (byte)pJVar1;
  bVar23 = bVar23 + bVar22;
  bVar28 = bVar15 + bVar23;
  bVar22 = CARRY1(bVar15,bVar23) || CARRY1(bVar28,bVar24);
  pbVar29 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar28 + bVar24,bVar25));
  pbVar26 = (byte *)((int)&pOVar11[9].monitor + iVar19 * 2);
  bVar15 = *pbVar26 + (byte)uVar17;
  bVar24 = CARRY1(*pbVar26,(byte)uVar17) || CARRY1(bVar15,bVar22);
  *pbVar26 = bVar15 + bVar22;
  pbVar26 = (byte *)(CONCAT22((short)((uint)pJVar1 >> 0x10),CONCAT11(bVar23,bVar27)) + -0x2defb3b9)
  ;
  bVar22 = CARRY1(*pbVar26,bVar25) || CARRY1(*pbVar26 + bVar25,bVar24);
  *pbVar26 = *pbVar26 + bVar25 + bVar24;
  bVar24 = CARRY1(*pbVar29,bVar27) || CARRY1(*pbVar29 + bVar27,bVar22);
  *pbVar29 = *pbVar29 + bVar27 + bVar22;
  pbVar26 = (byte *)(iVar19 + 0x47);
  bVar15 = (byte)((uint)(iVar19 + -1) >> 8);
  bVar22 = CARRY1(*pbVar26,bVar15) || CARRY1(*pbVar26 + bVar15,bVar24);
  *pbVar26 = *pbVar26 + bVar15 + bVar24;
  pbVar26 = (byte *)((int)&pOVar11[-0x23df677].klass + 1);
  bVar24 = CARRY1(*pbVar26,bVar15) || CARRY1(*pbVar26 + bVar15,bVar22);
  *pbVar26 = *pbVar26 + bVar15 + bVar22;
  bVar15 = (char)(iVar19 + -1) - 1;
  bVar22 = CARRY1(bRam_?,bVar21);
  bVar21 = bRam_? + bVar21;
  bRam_? = bVar21 + bVar24;
  bVar22 = CARRY1(bVar27,bVar15) || CARRY1(bVar27 + bVar15,bVar22 || CARRY1(bVar21,bVar24));
  bVar25 = bVar25 - 2;
  bVar24 = CARRY1(*pbVar18,bVar25) || CARRY1(*pbVar18 + bVar25,bVar22);
  *pbVar18 = *pbVar18 + bVar25 + bVar22;
  pbVar26 = pbVar18 + -1;
  bVar15 = *pbVar26;
  bVar23 = *pbVar26;
  *pbVar26 = bVar23 + bVar25 + bVar24;
  pbVar18[-2] = pbVar18[-2] + bVar25 + (CARRY1(bVar15,bVar25) || CARRY1(bVar23 + bVar25,bVar24));
  in((short)((ulonglong)uVar17 >> 0x20) + -3);
  if ((int *)CONCAT22(in_stack_30,method._2_2_) != (int *)0x0) {
    bVar2 = (**(code **)(*(int *)CONCAT22(in_stack_30,method._2_2_) + 0xd4))();
    return bVar2;
  }
  return 0;
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsBytes
          (JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  message = this;
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar1 = (*(message->klass->vtable).get_TokenType.methodPtr)
                    (message,(message->klass->vtable).get_TokenType.method);
  if (iVar1 == 9) {
    pSVar2 = (String *)
             (*(message->klass->vtable).get_Value.methodPtr)
                       (message,(message->klass->vtable).get_Value.method);
    if (pSVar2 != (String *)0x0) {
      s = (String *)0x0;
      if (pSVar2->klass == TypeInfo__System__String) {
        s = pSVar2;
      }
      unaff_EDI = (Byte__Array__Class *)0x0;
      pSVar3 = TypeInfo__System__String;
      if (s != (String *)0x0) {
        if ((s->fields)._stringLength == 0) {
          pBVar4 = (Byte__Array *)func_?(TypeInfo__System__Byte,0);
        }
        else {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pBVar4 = mscorlib.dll::System::Convert::Convert_FromBase64String(s,(MethodInfo *)0x0);
        }
        (*(message->klass->vtable).SetToken.methodPtr)
                  (message,0x11,pBVar4,(message->klass->vtable).SetToken.method);
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    iVar1 = (*(message->klass->vtable).get_TokenType.methodPtr)
                      (message,(message->klass->vtable).get_TokenType.method);
    if (iVar1 == 0xb) {
      return (Byte__Array *)0x0;
    }
    iVar1 = (*(message->klass->vtable).get_TokenType.methodPtr)
                      (message,(message->klass->vtable).get_TokenType.method);
    if (iVar1 == 0x11) {
      message = (JTokenReader *)
                (*(message->klass->vtable).get_Value.methodPtr)
                          (message,(message->klass->vtable).get_Value.method);
      unaff_EDI = TypeInfo__System__Byte;
      if (message == (JTokenReader *)0x0) {
        return (Byte__Array *)0x0;
      }
      pBVar4 = (Byte__Array *)func_?(message,TypeInfo__System__Byte);
      if (pBVar4 != (Byte__Array *)0x0) {
        return pBVar4;
      }
      goto code_?;
    }
    uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar5);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar5);
    this = (JTokenReader *)func_?(7,message);
    uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
    uVar5 = func_?(uVar5);
    func_?(args);
    func_?(args,uVar5);
    func_?(0,uVar5);
    method_00 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_Error_reading_bytes__Expected_by);
    message = (JTokenReader *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar2,(IFormatProvider *)provider,args,method_00);
    uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    unaff_EDI = (Byte__Array__Class *)func_?(uVar5);
    func_?(unaff_EDI);
    JsonReaderException::JsonReaderException__ctor_1
              ((JsonReaderException *)unaff_EDI,(String *)message,(MethodInfo *)0x0);
    this = (JTokenReader *)
           func_?(&MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsBytes__);
    pSVar2 = (String *)func_?();
    pSVar3 = extraout_ECX;
code_?:
    func_?(pSVar2,pSVar3);
  }
  func_?();
code_?:
  func_?(message,unaff_EDI);
  pcVar6 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar6)();
  return pBVar4;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&
                    MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_
                   );
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = 0;
    *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0x10) {
    pMVar2 = (MethodInfo *)
             (*(this->klass->vtable).get_Value.methodPtr)
                       (this,(this->klass->vtable).get_Value.method);
    uVar3 = CONCAT44(TypeInfo__System__DateTime,pMVar2);
    DStack_4._dateTime._dateData._0_4_ = 0;
    DStack_4._dateTime._dateData._4_4_ = 0;
    DStack_4._offsetMinutes = 0;
    DStack_4._10_2_ = 0;
    DStack_4._12_4_ = 0;
    if (pMVar2 == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(pMVar2->methodPointer + 0x20) ==
        (TypeInfo__System__DateTime->_0).element_class) {
      iVar1 = func_?();
      dateTime._dateData._4_4_ = 0;
      dateTime._dateData._0_4_ = *(uint *)(iVar1 + 4);
      mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor_1(&DStack_4,dateTime,pMVar2);
      uStack_5 = (undefined4)DStack_4._dateTime._dateData;
      uStack_6 = DStack_4._dateTime._dateData._4_4_;
      iStack_7 = DStack_4._offsetMinutes;
      uStack_8 = DStack_4._10_2_;
      uStack_9 = DStack_4._12_4_;
      uVar10 = func_?(TypeInfo__System__DateTimeOffset,&uStack_5);
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,0x10,uVar10,(this->klass->vtable).SetToken.method);
      piVar11 = (int *)(*(this->klass->vtable).get_Value.methodPtr)
                                (this,(this->klass->vtable).get_Value.method);
      pMVar2 = 
      MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_;
      pJStack_12 = (JsonReaderException *)0x0;
      uStack_13 = 0;
      iStack_14 = 0;
      iStack_15 = 0;
      uStack_16._0_4_ = 0;
      uStack_16._4_4_ = 0;
      if (piVar11 == (int *)0x0) goto code_?;
      pDVar17 = TypeInfo__System__DateTimeOffset;
      if (*(Il2CppClass **)(*piVar11 + 0x20) == (TypeInfo__System__DateTimeOffset->_0).element_class)
      {
        iVar1 = func_?(piVar11);
        value.mid = (int32_t)pMVar2;
        value._0_12_ = *(undefined1 (*) [12])(iVar1 + 4);
        value.ulomidLE._0_4_ = unaff_EDI;
        value.ulomidLE._4_4_ = unaff_ESI;
        mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                  ((Nullable_1_Decimal_ *)&pJStack_12,value,in_stack_18);
        *(JsonReaderException **)__return_storage_ptr__ = pJStack_12;
        *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_13;
        *(int32_t *)&(__return_storage_ptr__->value)._dateTime._dateData = iStack_14;
        *(int32_t *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = iStack_15;
        *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = uStack_16;
        return __return_storage_ptr__;
      }
      goto code_?;
    }
  }
  else {
    uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar10);
    pCStack_19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    uVar10 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar10);
    uStack_20 = func_?(7,this);
    uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&uStack_20);
    uVar10 = func_?(uVar10);
    func_?(args);
    func_?(args,uVar10);
    func_?(0,uVar10);
    pMVar2 = (MethodInfo *)0x0;
    provider = pCStack_19;
    pSVar21 = (String *)func_?(&StringLiteral_Error_reading_date__Expected_byt);
    pSVar21 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar21,(IFormatProvider *)provider,args,pMVar2);
    uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (JsonReaderException *)func_?(uVar10);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar21,(MethodInfo *)0x0);
    uStack_13 = func_?(&
                                MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsDateTimeOffset__
                               );
    pJStack_12 = this_00;
    func_?();
    piVar11 = extraout_ECX;
    pDVar17 = extraout_EDX;
code_?:
    uVar3 = func_?(piVar11,pDVar17);
  }
  func_?(uVar3);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pNVar23 = (Nullable_1_DateTimeOffset_ *)(*pcVar22)();
  return pNVar23;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JTokenReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Decimal);
    func_?(&MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_);
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).Read.methodPtr)(this,(this->klass->vtable).Read.method);
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar1 == 7) {
code_?:
    pCStack_2 = (CultureInfo *)
                 (*(this->klass->vtable).get_Value.methodPtr)
                           (this,(this->klass->vtable).get_Value.method);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal_1
                       (&DStack_5,(Object *)pCStack_2,(IFormatProvider *)pCVar3,(MethodInfo *)0x0)
    ;
    DStack_5.ulomidLE._0_4_ = pDVar4->flags;
    DStack_5.ulomidLE._4_4_ = pDVar4->hi;
    iStack_6 = pDVar4->lo;
    iStack_7 = pDVar4->mid;
    uVar8 = func_?(TypeInfo__System__Decimal,&DStack_5.ulomidLE);
    (*(this->klass->vtable).SetToken.methodPtr)(this,8,uVar8,(this->klass->vtable).SetToken.method);
    piVar9 = (int *)(*(this->klass->vtable).get_Value.methodPtr)
                              (this,(this->klass->vtable).get_Value.method);
    pMVar10 = MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_;
    uVar8 = 0;
    iVar11 = 0;
    method_00 = (MethodInfo *)0x0;
    if (piVar9 == (int *)0x0) goto code_?;
    if (*(Il2CppClass **)(*piVar9 + 0x20) == (TypeInfo__System__Decimal->_0).element_class) {
      iVar1 = func_?();
      value.mid = (int32_t)pMVar10;
      value._0_12_ = *(undefined1 (*) [12])(iVar1 + 4);
      value.ulomidLE._0_4_ = uVar8;
      value.ulomidLE._4_4_ = iVar11;
      mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                ((Nullable_1_Decimal_ *)&stack0xffffffa0,value,method_00);
      *(MethodInfo **)__return_storage_ptr__ = pMVar10;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar8;
      (__return_storage_ptr__->value).flags = iVar11;
      (__return_storage_ptr__->value).hi = (int32_t)method_00;
      (__return_storage_ptr__->value).lo = 0;
      (__return_storage_ptr__->value).mid = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    iVar1 = (*(this->klass->vtable).get_TokenType.methodPtr)
                      (this,(this->klass->vtable).get_TokenType.method);
    if (iVar1 == 8) goto code_?;
    uVar8 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar8);
    pCStack_2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    uVar8 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar8);
    uStack_12 = func_?(7,this);
    uVar8 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&uStack_12);
    uVar8 = func_?(uVar8);
    func_?(args);
    func_?(args,uVar8);
    func_?(0,uVar8);
    pMVar10 = (MethodInfo *)0x0;
    pCVar3 = pCStack_2;
    pSVar13 = (String *)func_?(&StringLiteral_Error_reading_decimal__Expected_);
    pSVar13 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar13,(IFormatProvider *)pCVar3,args,pMVar10);
    uVar8 = func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    this_00 = (JsonReaderException *)func_?(uVar8);
    func_?(this_00);
    JsonReaderException::JsonReaderException__ctor_1(this_00,pSVar13,(MethodInfo *)0x0);
    func_?(&MethodInfo__Newtonsoft__Json__Linq__JTokenReader__ReadAsDecimal__);
    func_?();
    piVar9 = extraout_ECX;
  }
  func_?(piVar9);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pNVar15 = (Nullable_1_Decimal_ *)(*pcVar14)();
  return pNVar15;
}


/* Boolean ReadInto(JContainer) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadInto
               (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (c == (JContainer *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  token = (JToken *)(*(c->klass->vtable).get_First.methodPtr)(c,(c->klass->vtable).get_First.method)
  ;
  if (token != (JToken *)0x0) {
    JTokenReader_SetToken(this,token,(MethodInfo *)0x0);
    (this->fields)._current = token;
    func_?(&(this->fields)._current,token);
    (this->fields)._parent = (JToken *)c;
    func_?(&(this->fields)._parent,c);
    return 1;
  }
  bVar2 = JTokenReader_SetEnd(this,c,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ReadOver(JToken) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_ReadOver
               (JTokenReader *this,JToken *t,MethodInfo *method)

{
  if (t != (this->fields)._root) {
    if (t == (JToken *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pJVar3 = (t->fields)._next;
    if ((pJVar3 != (JToken *)0x0) && (pJVar3 != t)) {
      pJVar4 = (t->fields)._parent;
      if (pJVar4 == (JContainer *)0x0) goto code_?;
      pJVar5 = (JToken *)
               (*(pJVar4->klass->vtable).get_Last.methodPtr)
                         (pJVar4,(pJVar4->klass->vtable).get_Last.method);
      if (t != pJVar5) {
        (this->fields)._current = pJVar3;
        func_?(&(this->fields)._current,pJVar3);
        JTokenReader_SetToken(this,(this->fields)._current,(MethodInfo *)0x0);
        return 1;
      }
    }
    if ((t->fields)._parent != (JContainer *)0x0) {
      bVar2 = JTokenReader_SetEnd(this,(t->fields)._parent,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


/* String SafeToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SafeToString
                   (JTokenReader *this,Object *value,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    pSVar1 = (String *)
             (*(value->klass->vtable).ToString.methodPtr)
                       (value,(value->klass->vtable).ToString.method);
    return pSVar1;
  }
  return (String *)0x0;
}


/* Boolean SetEnd(JContainer) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SetEnd
               (JTokenReader *this,JContainer *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  uVar2 = 0;
  piStack_3 = (int *)0x0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (c != (JContainer *)0x0) {
    uVar4 = (*(c->klass->vtable).__unknown_2.methodPtr)();
    switch(uVar4) {
    case 1:
      NStack_5.hasValue = 0;
      NStack_5._1_3_ = 0;
      NStack_5.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_5,0xd,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      bVar6 = NStack_5.hasValue;
      piStack_3 = (int *)NStack_5.value;
      goto code_?;
    case 2:
      NStack_7.hasValue = 0;
      NStack_7._1_3_ = 0;
      NStack_7.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_7,0xe,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      bVar6 = NStack_7.hasValue;
      piStack_3 = (int *)NStack_7.value;
      goto code_?;
    case 3:
      NStack_8.hasValue = 0;
      NStack_8._1_3_ = 0;
      NStack_8.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_8,0xf,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      break;
    case 4:
      NStack_8.hasValue = 0;
      NStack_8._1_3_ = 0;
      NStack_8.value = 0;
      break;
    default:
      goto code_?;
    }
    piStack_3 = (int *)NStack_8.value;
    bVar6 = NStack_8.hasValue;
code_?:
    if (bVar6 != 0) {
      newToken = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                           (&stack0xffffffdc,
                            MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__get_Value__);
      JsonReader::JsonReader_SetToken((JsonReader *)this,newToken,(MethodInfo *)0x0);
      (this->fields)._current = (JToken *)c;
      NStack_9._0_4_ = c;
      func_?();
      (this->fields)._parent = (JToken *)c;
      func_?();
      return 1;
    }
    NStack_9 = (Nullable_1_UInt32_)(ZEXT48(piStack_3) << 0x20);
    bVar6 = JTokenReader_ReadOver(this,(JToken *)c,(MethodInfo *)0x0);
    return bVar6;
  }
  func_?();
code_?:
  func_?();
  piVar10 = (int *)func_?();
  func_?();
  pOVar11 = (Object *)func_?();
  pSVar12 = (String *)func_?();
  pSVar13 = (String *)func_?();
  pAVar14 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar13,pOVar11,pSVar12,(MethodInfo *)0x0);
  piStack_3 = (int *)func_?();
  bVar15 = (undefined1 *)0xffffffdb < &stack0xffffffc0;
  NStack_9._0_4_ = pAVar14;
  bVar16 = func_?();
  pcVar17 = (char *)(extraout_ECX * 2 + 0x4d3a104c);
  *pcVar17 = *pcVar17 + unaff_BL +
            (CARRY1(bVar16 % 0x4c,unaff_BH) || CARRY1(bVar16 % 0x4c + unaff_BH,bVar15));
  in(extraout_DX);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (piVar10 == (int *)0x0) {
    func_?();
    goto code_?;
  }
  uVar4 = (**(code **)(*piVar10 + 0x124))();
  switch(uVar4) {
  case 1:
    goto code_?;
  case 2:
    goto code_?;
  case 3:
code_?:
    bVar6 = (**(code **)(*piStack_3 + 0x134))();
    return bVar6;
  case 4:
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JProperty__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 5:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 6:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 7:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 8:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 9:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 10:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 0xb:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 0xc:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 0xd:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 0xe:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar6 = func_?();
      return bVar6;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar10 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar10 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if ((int *)piVar10[10] == (int *)0x0) {
        bVar6 = func_?();
        return bVar6;
      }
      (**(code **)(*(int *)piVar10[10] + 0xd4))();
      bVar6 = func_?();
      return bVar6;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  value = (JToken *)func_?();
  func_?();
  pOVar11 = (Object *)func_?();
  pSVar12 = (String *)func_?();
  pSVar13 = (String *)func_?();
  pAVar14 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar13,pOVar11,pSVar12,(MethodInfo *)0x0);
  uVar4 = func_?();
  bVar16 = (undefined1 *)0xffffffdb < &stack0xffffffbc;
  cVar18 = SCARRY4((int)&stack0xffffffbc,0x24);
  cVar19 = (int)&piStack_3 < 0;
  NStack_9._0_4_ = uVar4;
  uVar20 = func_?();
  if (cVar18 != cVar19) {
    func_?();
    uRam_? = 1;
    JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)value,StringLiteral_token,(MethodInfo *)0x0);
    (this->fields)._root = value;
    func_?();
    (this->fields)._current = value;
    bVar6 = func_?();
    return bVar6;
  }
  pbVar21 = extraout_EDX + -0x57efb3b2;
  bVar15 = (byte)extraout_EDX;
  bVar22 = CARRY1(*pbVar21,bVar15) || CARRY1(*pbVar21 + bVar15,bVar16);
  *pbVar21 = *pbVar21 + bVar15 + bVar16;
  pbVar21 = (byte *)((int)&pAVar14[0x69a8d].fields._._._.captured_traces + 1);
  bVar23 = CARRY1(*pbVar21,unaff_BH) || CARRY1(*pbVar21 + unaff_BH,bVar22);
  *pbVar21 = *pbVar21 + unaff_BH + bVar22;
  pbVar21 = (byte *)((int)&(pAVar14->fields)._actualValue + 2);
  bVar16 = *pbVar21 + (byte)uVar20;
  bVar22 = CARRY1(*pbVar21,(byte)uVar20) || CARRY1(bVar16,bVar23);
  *pbVar21 = bVar16 + bVar23;
  pbVar21 = extraout_EDX + -0x31efb3b1;
  bVar16 = *pbVar21 + (byte)extraout_CX;
  bVar23 = CARRY1(*pbVar21,(byte)extraout_CX) || CARRY1(bVar16,bVar22);
  *pbVar21 = bVar16 + bVar22;
  bVar22 = CARRY1(*extraout_EDX,bVar15) || CARRY1(*extraout_EDX + bVar15,bVar23);
  *extraout_EDX = *extraout_EDX + bVar15 + bVar23;
  pbVar21 = (byte *)((int)&(pAVar14->fields)._actualValue + 3);
  bVar23 = CARRY1(*pbVar21,bVar15) || CARRY1(*pbVar21 + bVar15,bVar22);
  *pbVar21 = *pbVar21 + bVar15 + bVar22;
  pbVar21 = extraout_EDX + -0x21efb3b0;
  bVar22 = CARRY1(*pbVar21,unaff_BL) || CARRY1(*pbVar21 + unaff_BL,bVar23);
  *pbVar21 = *pbVar21 + unaff_BL + bVar23;
  bVar15 = (byte)((ushort)uVar20 >> 8);
  bVar23 = CARRY1(*extraout_EDX,bVar15) || CARRY1(*extraout_EDX + bVar15,bVar22);
  *extraout_EDX = *extraout_EDX + bVar15 + bVar22;
  pAVar14 = pAVar14 + 1;
  bVar16 = *(char *)&pAVar14->klass + bVar15;
  bVar22 = CARRY1(*(byte *)&pAVar14->klass,bVar15) || CARRY1(bVar16,bVar23);
  *(byte *)&pAVar14->klass = bVar16 + bVar23;
  pbVar21 = extraout_EDX + -0x55efb3af;
  bVar16 = *pbVar21;
  bVar24 = (byte)((ushort)extraout_CX >> 8);
  bVar15 = *pbVar21;
  *pbVar21 = bVar15 + bVar24 + bVar22;
  extraout_EDX[-0x33efb3af] =
       extraout_EDX[-0x33efb3af] + bVar24 + (CARRY1(bVar16,bVar24) || CARRY1(bVar15 + bVar24,bVar22))
  ;
  pcVar25 = (code *)swi(3);
  bVar6 = (*pcVar25)();
  return bVar6;
}


/* Void SetToken(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SetToken
               (JTokenReader *this,JToken *token,MethodInfo *method)

{
  pJVar1 = token;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (pJVar1 == (JToken *)0x0) {
    func_?();
    goto code_?;
  }
  uVar2 = (*(pJVar1->klass->vtable).__unknown_2.methodPtr)();
  switch(uVar2) {
  case 1:
    token = (JToken *)0x1;
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 2:
    token = (JToken *)0x2;
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 3:
    token = (JToken *)0x3;
Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken:
    method = (MethodInfo *)0x0;
    (*(this->klass->vtable).SetToken.methodPtr)();
    return;
  case 4:
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((JProperty__Class *)
        (pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      func_?();
      return;
    }
    break;
  case 5:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 6:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 7:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 8:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 9:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 10:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xb:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xc:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xd:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xe:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (pJVar1->klass->_1).typeHierarchyDepth) &&
       ((pJVar1->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (pJVar1[1].monitor == (MonitorData *)0x0) {
        func_?();
        return;
      }
      (**(code **)(*(int *)pJVar1[1].monitor + 0xd4))();
      func_?();
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  token = (JToken *)func_?();
  func_?();
  actualValue = (Object *)func_?();
  message = (String *)func_?();
  paramName = (String *)func_?();
  pAVar3 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
                     (paramName,actualValue,message,(MethodInfo *)0x0);
  func_?();
  bVar4 = (undefined1 *)0xffffffdb < &stack0xffffffe0;
  cVar5 = SCARRY4((int)&stack0xffffffe0,0x24);
  cVar6 = (int)&this < 0;
  uVar7 = func_?();
  if (cVar5 != cVar6) {
    in_stack_8 = in_stack_8 + (char)((uint)extraout_EDX >> 8);
    func_?();
    pJVar9 = this;
    uRam_? = 1;
    JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
    pJVar1 = token;
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)token,StringLiteral_token,(MethodInfo *)0x0);
    (pJVar9->fields)._root = pJVar1;
    func_?();
    (pJVar9->fields)._current = pJVar1;
    func_?();
    return;
  }
  pbVar10 = extraout_EDX + -0x57efb3b2;
  bVar11 = (byte)extraout_EDX;
  bVar12 = CARRY1(*pbVar10,bVar11) || CARRY1(*pbVar10 + bVar11,bVar4);
  *pbVar10 = *pbVar10 + bVar11 + bVar4;
  pbVar10 = (byte *)((int)&pAVar3[0x69a8d].fields._._._.captured_traces + 1);
  bVar13 = CARRY1(*pbVar10,unaff_BH) || CARRY1(*pbVar10 + unaff_BH,bVar12);
  *pbVar10 = *pbVar10 + unaff_BH + bVar12;
  pbVar10 = (byte *)((int)&(pAVar3->fields)._actualValue + 2);
  bVar4 = *pbVar10 + (byte)uVar7;
  bVar12 = CARRY1(*pbVar10,(byte)uVar7) || CARRY1(bVar4,bVar13);
  *pbVar10 = bVar4 + bVar13;
  pbVar10 = extraout_EDX + -0x31efb3b1;
  bVar4 = *pbVar10 + (byte)extraout_CX;
  bVar13 = CARRY1(*pbVar10,(byte)extraout_CX) || CARRY1(bVar4,bVar12);
  *pbVar10 = bVar4 + bVar12;
  bVar12 = CARRY1(*extraout_EDX,bVar11) || CARRY1(*extraout_EDX + bVar11,bVar13);
  *extraout_EDX = *extraout_EDX + bVar11 + bVar13;
  pbVar10 = (byte *)((int)&(pAVar3->fields)._actualValue + 3);
  bVar13 = CARRY1(*pbVar10,bVar11) || CARRY1(*pbVar10 + bVar11,bVar12);
  *pbVar10 = *pbVar10 + bVar11 + bVar12;
  pbVar10 = extraout_EDX + -0x21efb3b0;
  bVar12 = CARRY1(*pbVar10,unaff_BL) || CARRY1(*pbVar10 + unaff_BL,bVar13);
  *pbVar10 = *pbVar10 + unaff_BL + bVar13;
  bVar11 = (byte)((ushort)uVar7 >> 8);
  bVar13 = CARRY1(*extraout_EDX,bVar11) || CARRY1(*extraout_EDX + bVar11,bVar12);
  *extraout_EDX = *extraout_EDX + bVar11 + bVar12;
  pAVar3 = pAVar3 + 1;
  bVar4 = *(char *)&pAVar3->klass + bVar11;
  bVar12 = CARRY1(*(byte *)&pAVar3->klass,bVar11) || CARRY1(bVar4,bVar13);
  *(byte *)&pAVar3->klass = bVar4 + bVar13;
  pbVar10 = extraout_EDX + -0x55efb3af;
  bVar4 = *pbVar10;
  bVar14 = (byte)((ushort)extraout_CX >> 8);
  bVar11 = *pbVar10;
  *pbVar10 = bVar11 + bVar14 + bVar12;
  extraout_EDX[-0x33efb3af] =
       extraout_EDX[-0x33efb3af] + bVar14 + (CARRY1(bVar4,bVar14) || CARRY1(bVar11 + bVar14,bVar12));
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* JTokenReader(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader__ctor
               (JTokenReader *this,JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_token);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)token,StringLiteral_token,(MethodInfo *)0x0);
  (this->fields)._root = token;
  func_?(&(this->fields)._root,token);
  (this->fields)._current = token;
  func_?(&(this->fields)._current,token);
  return;
}


/* Boolean get_IsEndElement() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_get_IsEndElement
               (JTokenReader *this,MethodInfo *method)

{
  return (this->fields)._current == (this->fields)._parent;
}

