
/* Int32 ByteArrayCompare(Byte[], Byte[]) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
        MiscellaneousUtils_ByteArrayCompare(Byte__Array *a1,Byte__Array *a2,MethodInfo *method)

{
  pBVar1 = a1;
  iStack_2 = 0;
  if ((a1 != (Byte__Array *)0x0) && (iStack_2 = a1->max_length, a2 != (Byte__Array *)0x0)) {
    iVar3 = func_?(&iStack_2,a2->max_length,0);
    if (iVar3 == 0) {
      for (uVar4 = 0; uVar5 = pBVar1->max_length, (int)uVar4 < (int)uVar5; uVar4 = uVar4 + 1) {
        if ((a2->max_length <= uVar4) || (uVar5 <= uVar4)) goto code_?;
        a1 = (Byte__Array *)(uint)a2->vector[uVar4];
        iVar6 = func_?(pBVar1->vector + uVar4,a1,0);
        if (iVar6 != 0) {
          return iVar6;
        }
      }
      iVar3 = 0;
    }
    return iVar3;
  }
  func_?(0);
code_?:
  uVar7 = func_?(0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  iVar3 = (*pcVar8)();
  return iVar3;
}


/* String BytesToHex(Byte[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_BytesToHex(Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__BitConverter);
    }
    pSVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToString_1
                       (bytes,0,bytes->max_length,(MethodInfo *)0x0);
    return pSVar1;
  }
  this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this,0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String BytesToHex(Byte[], Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_BytesToHex_1(Byte__Array *bytes,bool removeDashes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__BitConverter);
  }
  pSVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToString(bytes,(MethodInfo *)0x0);
  if (removeDashes != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    if (pSVar1 == (String *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar2)();
      return pSVar1;
    }
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar1,::StringLiteral__,TypeInfo__System__String->static_fields->Empty,
                        (MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if (actualValue != (Object *)0x0) {
      iVar2 = func_?(actualValue,(args->klass->_0).element_class);
      if (iVar2 == 0) goto code_?;
    }
    if (args->max_length != 0) {
      args->vector[0] = actualValue;
      pSVar3 = StringUtils::StringUtils_FormatWith
                         (StringLiteral_Actual_value_was__0__,(IFormatProvider *)provider,args,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (message,unaff_EBX,pSVar3,(MethodInfo *)0x0);
      pAVar4 = (ArgumentOutOfRangeException *)func_?();
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (pAVar4,paramName,pSVar3,(MethodInfo *)0x0);
      return pAVar4;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar5 = (code *)swi(3);
  pAVar4 = (ArgumentOutOfRangeException *)(*pcVar5)();
  return pAVar4;
}


/* String GetLocalName(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_GetLocalName(String *qualifiedName,MethodInfo *method)

{
  pSStack_1 = (String *)0x0;
  pSStack_2 = (String *)0x0;
  MiscellaneousUtils_GetQualifiedNameParts(qualifiedName,&pSStack_1,&pSStack_2,(MethodInfo *)0x0);
  return pSStack_2;
}


/* String GetPrefix(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_GetPrefix(String *qualifiedName,MethodInfo *method)

{
  pSStack_1 = (String *)0x0;
  pSStack_2 = (String *)0x0;
  MiscellaneousUtils_GetQualifiedNameParts(qualifiedName,&pSStack_1,&pSStack_2,(MethodInfo *)0x0);
  return pSStack_1;
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
  length = (undefined1 *)
           mscorlib.dll::System::String::String_IndexOf_2(qualifiedName,0x3a,(MethodInfo *)0x0);
  if ((length != (undefined1 *)0xffffffff) && (length != (undefined1 *)0x0)) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)qualifiedName,(MethodInfo *)0x0);
    if ((undefined1 *)((int)&pIVar2[-1].monitor + 3) != length) {
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (qualifiedName,0,(int32_t)length,(MethodInfo *)0x0);
      *prefix = pSVar3;
      pSVar3 = mscorlib.dll::System::String::String_Substring
                         (qualifiedName,(int32_t)(length + 1),(MethodInfo *)0x0);
      *localName = pSVar3;
      return;
    }
  }
  *prefix = (String *)0x0;
  *localName = qualifiedName;
  return;
}


/* Byte[] HexToBytes(String) */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_HexToBytes
          (String *hex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if ((hex != (String *)0x0) &&
     (this = (Collection_1_VoxelHit_ *)
             mscorlib.dll::System::String::String_Replace_1
                       (hex,::StringLiteral__,TypeInfo__System__String->static_fields->Empty,
                        (MethodInfo *)0x0), this != (Collection_1_VoxelHit_ *)0x0)) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
    pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,(int)pIVar1 / 2);
    uVar3 = 4;
    hex = (String *)0x0;
    index = 0;
    pSVar4 = hex;
    while( true ) {
      hex = pSVar4;
      uVar5 = uVar3;
      iVar6 = index;
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
      if ((int)pIVar1 <= index) {
        return pBVar2;
      }
      uVar7 = mscorlib.dll::System::String::String_get_Chars((String *)this,index,(MethodInfo *)0x0)
      ;
      uVar8 = uVar7 - 0x30 & 0x8000001f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
      }
      cVar9 = (char)uVar8 + -7;
      if ((int)uVar8 < 10) {
        cVar9 = (char)uVar8;
      }
      if (pBVar2 == (Byte__Array *)0x0) break;
      pbVar10 = (byte *)func_?(hex,uVar5,pBVar2,iVar6);
      *pbVar10 = *pbVar10 | cVar9 << (sbyte)uVar3;
      uVar3 = uVar3 ^ 4;
      index = index + 1;
      pSVar4 = (String *)((int)&hex->klass + 1);
      if (uVar5 == 4) {
        pSVar4 = hex;
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  pBVar2 = (Byte__Array *)(*pcVar11)();
  return pBVar2;
}


/* String ToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::MiscellaneousUtils::
         MiscellaneousUtils_ToString(Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  pMVar3 = (pSVar1->vtable).ToString.method;
  if (pOVar2 == (Object *)0x0) {
    pSVar4 = (String *)(*(code *)pMVar3)(value,(pSVar1->vtable).GetTypeCode.methodPtr);
    return pSVar4;
  }
  pSVar4 = (String *)(*(code *)pMVar3)(value,(pSVar1->vtable).GetTypeCode.methodPtr);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                     (::StringLiteral__,pSVar4,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)creator,StringLiteral_creator,(MethodInfo *)0x0);
  uStack_1 = 0;
  if (creator != (Creator_1_System_Object_ *)0x0) {
    pOVar4 = (Object *)(*(code *)(*method->parameters)->data)();
    *output = pOVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (objA == (Object *)0x0) {
    if (objB == (Object *)0x0) {
      return 1;
    }
  }
  else if (objB != (Object *)0x0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(objA,(MethodInfo *)0x0);
    pTVar2 = mscorlib.dll::System::Object::Object_GetType(objB,(MethodInfo *)0x0);
    if (pTVar1 == pTVar2) {
      bVar3 = (*(code *)(objA->klass->vtable).Equals.method)(objA);
      return bVar3;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = ConvertUtils::ConvertUtils_IsInteger(objA,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = ConvertUtils::ConvertUtils_IsInteger(objB,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                           ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToDecimal_13
                  ((Decimal *)&stack0xffffffe4,objA,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
        pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                           ((MethodInfo *)0x0);
        mscorlib.dll::System::Convert::Convert_ToDecimal_13
                  ((Decimal *)&stack0xffffffe4,objB,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
        bVar3 = func_?();
        return bVar3;
      }
    }
    pDVar5 = (Decimal__Class *)objA->klass;
    pOVar6 = (Object *)0x0;
    if (pDVar5 == (Decimal__Class *)TypeInfo__System__Double) {
      pOVar6 = objA;
    }
    if (pOVar6 == (Object *)0x0) {
      pOVar6 = (Object *)0x0;
      if (pDVar5 == (Decimal__Class *)TypeInfo__System__Single) {
        pOVar6 = objA;
      }
      if (pOVar6 == (Object *)0x0) {
        pOVar6 = (Object *)0x0;
        if (pDVar5 == TypeInfo__System__Decimal) {
          pOVar6 = objA;
        }
        if (pOVar6 == (Object *)0x0) {
          return 0;
        }
      }
    }
    pDVar5 = (Decimal__Class *)objB->klass;
    pOVar6 = (Object *)0x0;
    if (pDVar5 == (Decimal__Class *)TypeInfo__System__Double) {
      pOVar6 = objB;
    }
    if (pOVar6 == (Object *)0x0) {
      pOVar6 = (Object *)0x0;
      if (pDVar5 == (Decimal__Class *)TypeInfo__System__Single) {
        pOVar6 = objB;
      }
      if (pOVar6 == (Object *)0x0) {
        pOVar6 = (Object *)0x0;
        if (pDVar5 == TypeInfo__System__Decimal) {
          pOVar6 = objB;
        }
        if (pOVar6 == (Object *)0x0) {
          return 0;
        }
      }
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    dVar7 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                      (objA,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
    pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)0x0);
    dVar8 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                      (objB,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
    return (double)CONCAT44((uint)((ulonglong)(dVar7 - dVar8) >> 0x20) & _UNK_?,
                            SUB84(dVar7 - dVar8,0) & _UNK_?) <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_?,
                            SUB84(dVar7,0) & _UNK_?) * _UNK_?;
  }
  return 0;
}

