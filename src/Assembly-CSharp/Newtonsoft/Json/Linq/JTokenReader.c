
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
  uVar2 = in(extraout_DX);
  cRam_? = cRam_? + (char)extraout_DX + ((byte)uVar2 < 0x4c);
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
  pAVar15 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar13,pOVar11,pSVar12,(MethodInfo *)0x0);
  uVar5 = func_?();
  bVar16 = (undefined1 *)0xffffffdb < &stack0xffffffbc;
  NStack_4._0_4_ = uVar5;
  pAVar14 = pAVar15;
  uVar17 = func_?();
  iVar18 = (int)((ulonglong)uVar17 >> 0x20);
  bVar19 = (char)uVar17 - 1;
  pppIVar20 = &pJVar1[-0x3bea3e]._0.nestedTypes;
  bVar21 = *(char *)pppIVar20 + bVar19;
  bVar22 = CARRY1(*(byte *)pppIVar20,bVar19) || CARRY1(bVar21,bVar16);
  *(byte *)pppIVar20 = bVar21 + bVar16;
  bVar19 = (char)uVar17 - 2;
  bVar16 = (byte)((uint)extraout_ECX >> 8);
  bVar21 = bVar16 + bVar19;
  bVar23 = CARRY1(bVar16,bVar19) || CARRY1(bVar21,bVar22);
  bVar16 = (byte)extraout_ECX;
  pbVar24 = (byte *)((int)uVar17 + -3);
  puVar25 = (undefined1 *)((int)&pJVar1[-0x3ff506].vtable.__unknown_3.method + 1);
  bVar26 = CARRY1(*puVar25,bVar16) || CARRY1(*puVar25 + bVar16,bVar23);
  *puVar25 = *puVar25 + bVar16 + bVar23;
  pbVar27 = (byte *)((int)&pAVar14[-0xa2ff0c].fields._._._._className + 1);
  bVar28 = (byte)((ulonglong)uVar17 >> 0x28);
  bVar19 = *pbVar27 + bVar28;
  bVar23 = CARRY1(*pbVar27,bVar28) || CARRY1(bVar19,bVar26);
  *pbVar27 = bVar19 + bVar26;
  iVar29 = CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar21 + bVar22,bVar16)) + -2;
  pbVar27 = (byte *)(iVar18 + iVar29 * 2);
  bVar19 = (byte)((ulonglong)uVar17 >> 0x20);
  bVar21 = *pbVar27 + bVar19;
  bVar22 = CARRY1(*pbVar27,bVar19) || CARRY1(bVar21,bVar23);
  *pbVar27 = bVar21 + bVar23;
  puVar25 = (undefined1 *)((int)&(pJVar1->_0).properties + 2);
  bVar21 = *puVar25 + (byte)pJVar1;
  bVar23 = CARRY1(*puVar25,(byte)pJVar1) || CARRY1(bVar21,bVar22);
  *puVar25 = bVar21 + bVar22;
  pbVar27 = (byte *)(iVar18 + -0x16efb3b6);
  bVar19 = (byte)((uint)pbVar24 >> 8);
  bVar21 = *pbVar27 + bVar19;
  bVar22 = CARRY1(*pbVar27,bVar19) || CARRY1(bVar21,bVar23);
  *pbVar27 = bVar21 + bVar23;
  iVar18 = iVar18 + -1;
  bVar21 = (byte)((uint)iVar18 >> 8);
  bVar23 = CARRY1(*pbVar24,bVar21) || CARRY1(*pbVar24 + bVar21,bVar22);
  *pbVar24 = *pbVar24 + bVar21 + bVar22;
  puVar30 = (undefined1 *)((int)&pJVar1[-1].vtable.__unknown_5.method + 3);
  pbVar27 = (byte *)((int)&(pAVar14->fields)._._paramName + 3);
  bVar22 = CARRY1(*pbVar27,bVar21) || CARRY1(*pbVar27 + bVar21,bVar23);
  *pbVar27 = *pbVar27 + bVar21 + bVar23;
  pbVar27 = (byte *)((int)&pAVar15[0x103427].fields._._._._helpURL + 3);
  bVar19 = (byte)((uint)puVar30 >> 8);
  bVar21 = *pbVar27 + bVar19;
  bVar23 = CARRY1(*pbVar27,bVar19) || CARRY1(bVar21,bVar22);
  *pbVar27 = bVar21 + bVar22;
  pbVar27 = &stack0x0000001c + iVar29 * 2;
  bVar21 = *pbVar27 + (byte)iVar29;
  bVar22 = CARRY1(*pbVar27,(byte)iVar29) || CARRY1(bVar21,bVar23);
  *pbVar27 = bVar21 + bVar23;
  puVar25 = (undefined1 *)((int)&pJVar1[-0x198e9f]._0.methods + 3);
  bVar21 = (byte)iVar18;
  bVar23 = CARRY1(*puVar25,bVar21) || CARRY1(*puVar25 + bVar21,bVar22);
  *puVar25 = *puVar25 + bVar21 + bVar22;
  bVar19 = (byte)puVar30;
  in((short)CONCAT31((int3)((uint)iVar18 >> 8),
                     bVar21 + bVar19 + bVar23 + bVar19 +
                     (CARRY1(bVar21,bVar19) || CARRY1(bVar21 + bVar19,bVar23))));
  if (method != (MethodInfo *)0x0) {
    bVar2 = (**(code **)(method->methodPointer + 0xd4))();
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (c != (JContainer *)0x0) {
    uVar1 = (*(c->klass->vtable).__unknown_2.methodPtr)();
    switch(uVar1) {
    case 1:
      NStack_2.hasValue = 0;
      NStack_2._1_3_ = 0;
      NStack_2.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_2,0xd,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      bVar3 = NStack_2.hasValue;
      goto code_?;
    case 2:
      NStack_4.hasValue = 0;
      NStack_4._1_3_ = 0;
      NStack_4.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_4,0xe,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      bVar3 = NStack_4.hasValue;
      goto code_?;
    case 3:
      NStack_5.hasValue = 0;
      NStack_5._1_3_ = 0;
      NStack_5.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_5,0xf,
                 MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__Nullable_Newtonsoft__Json__JsonToken_
                );
      break;
    case 4:
      NStack_5.hasValue = 0;
      NStack_5._1_3_ = 0;
      NStack_5.value = 0;
      break;
    default:
      goto code_?;
    }
    bVar3 = NStack_5.hasValue;
code_?:
    if (bVar3 != 0) {
      newToken = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                           ((Nullable_1_UInt32_ *)&stack0xffffffdc,
                            MethodInfo__System__Nullable<Newtonsoft::Json::JsonToken>__get_Value__);
      JsonReader::JsonReader_SetToken((JsonReader *)this,newToken,(MethodInfo *)0x0);
      (this->fields)._current = (JToken *)c;
      func_?();
      (this->fields)._parent = (JToken *)c;
      func_?();
      return 1;
    }
    bVar3 = JTokenReader_ReadOver(this,(JToken *)c,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?();
code_?:
  func_?();
  piVar6 = (int *)func_?();
  func_?();
  pOVar7 = (Object *)func_?();
  pSVar8 = (String *)func_?();
  pSVar9 = (String *)func_?();
  pAVar10 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar9,pOVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  bVar11 = (undefined1 *)0xffffffdb < &stack0xffffffc0;
  uVar12 = func_?();
  *(undefined1 *)&pOVar7->klass = *(undefined1 *)&pAVar10->klass;
  bVar13 = (byte)extraout_CX;
  bVar14 = (byte)((ushort)uVar12 >> 8);
  bVar15 = (byte)((ushort)extraout_CX >> 8);
  *extraout_EDX =
       *extraout_EDX + bVar13 +
       (CARRY1(bVar14,bVar15) ||
       CARRY1(bVar14 + bVar15,CARRY1((byte)uVar12,bVar13) || CARRY1((byte)uVar12 + bVar13,bVar11)));
  in((short)extraout_EDX);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (piVar6 == (int *)0x0) {
    func_?();
    goto code_?;
  }
  uVar1 = (**(code **)(*piVar6 + 0x124))();
  switch(uVar1) {
  case 1:
    goto code_?;
  case 2:
    goto code_?;
  case 3:
code_?:
    bVar3 = (*(code *)pAVar10->klass[1]._0.this_arg.data)();
    return bVar3;
  case 4:
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JProperty__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 5:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 6:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 7:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 8:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 9:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 10:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 0xb:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 0xc:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 0xd:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 0xe:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      bVar3 = func_?();
      return bVar3;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         *(byte *)(*piVar6 + 0xb4)) &&
       (*(JValue__Class **)
         (*(int *)(*piVar6 + 100) + -4 +
         (uint)(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth * 4) ==
        TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if ((int *)piVar6[10] == (int *)0x0) {
        bVar3 = func_?();
        return bVar3;
      }
      (**(code **)(*(int *)piVar6[10] + 0xd4))();
      bVar3 = func_?();
      return bVar3;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  pOVar7 = (Object *)func_?();
  pSVar8 = (String *)func_?();
  pSVar9 = (String *)func_?();
  pAVar10 = Json::Utilities::MiscellaneousUtils::
            MiscellaneousUtils_CreateArgumentOutOfRangeException
                      (pSVar9,pOVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  bVar14 = (undefined1 *)0xffffffdb < &stack0xffffffb8;
  uVar16 = func_?();
  iVar17 = (int)((ulonglong)uVar16 >> 0x20);
  pbVar18 = (byte *)(iVar17 + 0x51);
  bVar13 = (byte)((ulonglong)uVar16 >> 8);
  bVar19 = CARRY1(*pbVar18,bVar13) || CARRY1(*pbVar18 + bVar13,bVar14);
  *pbVar18 = *pbVar18 + bVar13 + bVar14;
  pbVar18 = (byte *)((int)uVar16 + 0x51);
  bVar11 = (byte)((uint)unaff_EBX >> 8);
  bVar20 = CARRY1(*pbVar18,bVar11) || CARRY1(*pbVar18 + bVar11,bVar19);
  *pbVar18 = *pbVar18 + bVar11 + bVar19;
  pbVar18 = (byte *)((int)&pAVar10[-0x92ff0c].fields._._._._data + 1);
  bVar14 = *pbVar18 + (byte)extraout_CX_00;
  bVar19 = CARRY1(*pbVar18,(byte)extraout_CX_00) || CARRY1(bVar14,bVar20);
  *pbVar18 = bVar14 + bVar20;
  bVar15 = (byte)((ulonglong)uVar16 >> 0x20);
  bVar14 = *(char *)&pAVar10->klass + bVar15;
  bVar20 = CARRY1(*(byte *)&pAVar10->klass,bVar15) || CARRY1(bVar14,bVar19);
  *(byte *)&pAVar10->klass = bVar14 + bVar19;
  pbVar18 = (byte *)(iVar17 + 0x52);
  bVar14 = (byte)unaff_EBX;
  bVar19 = CARRY1(*pbVar18,bVar14) || CARRY1(*pbVar18 + bVar14,bVar20);
  *pbVar18 = *pbVar18 + bVar14 + bVar20;
  pbVar18 = (byte *)((int)&pAVar10[-0x5fcbd9].fields._._._._stackTraceString + 2);
  bVar20 = CARRY1(*pbVar18,bVar14) || CARRY1(*pbVar18 + bVar14,bVar19);
  *pbVar18 = *pbVar18 + bVar14 + bVar19;
  bVar14 = *(char *)&pAVar10->klass + bVar13;
  bVar19 = CARRY1(*(byte *)&pAVar10->klass,bVar13) || CARRY1(bVar14,bVar20);
  *(byte *)&pAVar10->klass = bVar14 + bVar20;
  pbVar18 = (byte *)(iVar17 + 0x53);
  bVar14 = (byte)((ushort)extraout_CX_00 >> 8);
  bVar20 = CARRY1(*pbVar18,bVar14) || CARRY1(*pbVar18 + bVar14,bVar19);
  *pbVar18 = *pbVar18 + bVar14 + bVar19;
  pbVar18 = (byte *)((int)&pAVar10[-0x2c98a6].fields._._._._HResult + 3);
  bVar19 = CARRY1(*pbVar18,bVar14) || CARRY1(*pbVar18 + bVar14,bVar20);
  *pbVar18 = *pbVar18 + bVar14 + bVar20;
  bVar13 = (byte)((ulonglong)uVar16 >> 0x28);
  bVar14 = *(char *)&pAVar10->klass + bVar13;
  bVar20 = CARRY1(*(byte *)&pAVar10->klass,bVar13) || CARRY1(bVar14,bVar19);
  *(byte *)&pAVar10->klass = bVar14 + bVar19;
  pbVar18 = (byte *)(iVar17 + 0x54);
  bVar19 = CARRY1(*pbVar18,bVar11) || CARRY1(*pbVar18 + bVar11,bVar20);
  *pbVar18 = *pbVar18 + bVar11 + bVar20;
  pbVar18 = (byte *)(iVar17 + 0x54);
  bVar13 = *pbVar18;
  bVar14 = *pbVar18;
  *pbVar18 = bVar14 + bVar11 + bVar19;
  *(char *)(iVar17 + 0x54) =
       *(char *)(iVar17 + 0x54) + bVar11 + (CARRY1(bVar13,bVar11) || CARRY1(bVar14 + bVar11,bVar19))
  ;
  pcVar21 = (code *)swi(3);
  bVar3 = (*pcVar21)();
  return bVar3;
}


/* Void SetToken(JToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JTokenReader::JTokenReader_SetToken
               (JTokenReader *this,JToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (token == (JToken *)0x0) {
    func_?();
    goto code_?;
  }
  uVar1 = (*(token->klass->vtable).__unknown_2.methodPtr)();
  switch(uVar1) {
  case 1:
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 2:
    goto Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken;
  case 3:
Assembly_CSharp_dll_Newtonsoft_Json_JsonReader_JsonReader_SetToken:
    (*(this->klass->vtable).SetToken.methodPtr)();
    return;
  case 4:
    if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((JProperty__Class *)
        (token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
      func_?();
      return;
    }
    break;
  case 5:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 6:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 7:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 8:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 9:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 10:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xb:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xc:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xd:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      func_?();
      return;
    }
    break;
  case 0xe:
    if (((TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth <=
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
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
         (token->klass->_1).typeHierarchyDepth) &&
       ((token->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JValue->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JValue)) {
      if (token[1].monitor == (MonitorData *)0x0) {
        func_?();
        return;
      }
      (**(code **)(*(int *)token[1].monitor + 0xd4))();
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
  func_?();
  func_?();
  actualValue = (Object *)func_?();
  message = (String *)func_?();
  paramName = (String *)func_?();
  pAVar2 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_CreateArgumentOutOfRangeException
                     (paramName,actualValue,message,(MethodInfo *)0x0);
  func_?();
  bVar3 = (undefined1 *)0xffffffdb < &stack0xffffffe0;
  uVar4 = func_?();
  iVar5 = (int)((ulonglong)uVar4 >> 0x20);
  pbVar6 = (byte *)(iVar5 + 0x51);
  bVar7 = (byte)((ulonglong)uVar4 >> 8);
  bVar8 = CARRY1(*pbVar6,bVar7) || CARRY1(*pbVar6 + bVar7,bVar3);
  *pbVar6 = *pbVar6 + bVar7 + bVar3;
  pbVar6 = (byte *)((int)uVar4 + 0x51);
  bVar9 = (byte)((uint)unaff_EBX >> 8);
  bVar10 = CARRY1(*pbVar6,bVar9) || CARRY1(*pbVar6 + bVar9,bVar8);
  *pbVar6 = *pbVar6 + bVar9 + bVar8;
  pbVar6 = (byte *)((int)&pAVar2[-0x92ff0c].fields._._._._data + 1);
  bVar3 = *pbVar6 + (byte)extraout_CX;
  bVar8 = CARRY1(*pbVar6,(byte)extraout_CX) || CARRY1(bVar3,bVar10);
  *pbVar6 = bVar3 + bVar10;
  bVar11 = (byte)((ulonglong)uVar4 >> 0x20);
  bVar3 = *(char *)&pAVar2->klass + bVar11;
  bVar10 = CARRY1(*(byte *)&pAVar2->klass,bVar11) || CARRY1(bVar3,bVar8);
  *(byte *)&pAVar2->klass = bVar3 + bVar8;
  pbVar6 = (byte *)(iVar5 + 0x52);
  bVar3 = (byte)unaff_EBX;
  bVar8 = CARRY1(*pbVar6,bVar3) || CARRY1(*pbVar6 + bVar3,bVar10);
  *pbVar6 = *pbVar6 + bVar3 + bVar10;
  pbVar6 = (byte *)((int)&pAVar2[-0x5fcbd9].fields._._._._stackTraceString + 2);
  bVar10 = CARRY1(*pbVar6,bVar3) || CARRY1(*pbVar6 + bVar3,bVar8);
  *pbVar6 = *pbVar6 + bVar3 + bVar8;
  bVar3 = *(char *)&pAVar2->klass + bVar7;
  bVar8 = CARRY1(*(byte *)&pAVar2->klass,bVar7) || CARRY1(bVar3,bVar10);
  *(byte *)&pAVar2->klass = bVar3 + bVar10;
  pbVar6 = (byte *)(iVar5 + 0x53);
  bVar3 = (byte)((ushort)extraout_CX >> 8);
  bVar10 = CARRY1(*pbVar6,bVar3) || CARRY1(*pbVar6 + bVar3,bVar8);
  *pbVar6 = *pbVar6 + bVar3 + bVar8;
  pbVar6 = (byte *)((int)&pAVar2[-0x2c98a6].fields._._._._HResult + 3);
  bVar8 = CARRY1(*pbVar6,bVar3) || CARRY1(*pbVar6 + bVar3,bVar10);
  *pbVar6 = *pbVar6 + bVar3 + bVar10;
  bVar7 = (byte)((ulonglong)uVar4 >> 0x28);
  bVar3 = *(char *)&pAVar2->klass + bVar7;
  bVar10 = CARRY1(*(byte *)&pAVar2->klass,bVar7) || CARRY1(bVar3,bVar8);
  *(byte *)&pAVar2->klass = bVar3 + bVar8;
  pbVar6 = (byte *)(iVar5 + 0x54);
  bVar8 = CARRY1(*pbVar6,bVar9) || CARRY1(*pbVar6 + bVar9,bVar10);
  *pbVar6 = *pbVar6 + bVar9 + bVar10;
  pbVar6 = (byte *)(iVar5 + 0x54);
  bVar3 = *pbVar6;
  bVar7 = *pbVar6;
  *pbVar6 = bVar7 + bVar9 + bVar8;
  *(char *)(iVar5 + 0x54) =
       *(char *)(iVar5 + 0x54) + bVar9 + (CARRY1(bVar3,bVar9) || CARRY1(bVar7 + bVar9,bVar8));
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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

