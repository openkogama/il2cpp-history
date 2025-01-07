
/* String AddSpacesToSentence(String) */

String * Assembly-CSharp.dll::Extensions::Extensions_AddSpacesToSentence
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrWhiteSpace(text,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (text != (String *)0x0) {
      iVar2 = (text->fields)._stringLength;
      this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
                (this,iVar2 * 2,(MethodInfo *)0x0);
      uVar3 = mscorlib.dll::System::String::String_get_Chars(text,0,(MethodInfo *)0x0);
      if (this != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (this,uVar3,(MethodInfo *)0x0);
        for (iVar2 = 1; iVar2 < (text->fields)._stringLength; iVar2 = iVar2 + 1) {
          uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar2,(MethodInfo *)0x0);
          if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar1 = mscorlib.dll::System::Char::Char_IsUpper(uVar3,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            uVar3 = mscorlib.dll::System::String::String_get_Chars
                              (text,iVar2 + -1,(MethodInfo *)0x0);
            if (uVar3 != 0x20) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                        (this,0x20,(MethodInfo *)0x0);
            }
          }
          uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar2,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (this,uVar3,(MethodInfo *)0x0);
        }
        pSVar4 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
        return pSVar4;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar5)();
    return pSVar4;
  }
  return ::StringLiteral__;
}


/* Void AppendRecursive(StringBuilder, IEnumerable, Int32, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_AppendRecursive
               (StringBuilder *sb,IEnumerable *collection,int32_t depth,bool eachEntryNewLine,
               MethodInfo *method)

{
  _Stack_8.__klassIndex = -1;
  puStack_1 = &DAT_?;
  _Stack_10.dummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->dummy = &_Stack_10;
  pcStack_2 = &stack0xffffffbc;
  pcVar3 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_NULL);
    func_?(&StringLiteral__k__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__v__);
    cRam_? = '\x01';
    pcVar3 = pcStack_2;
  }
  pcStack_2 = pcVar3;
  pIStack_4 = (Il2CppImage *)0x0;
  OStack_5.monitor._3_1_ = '\x01';
  if (collection != (IEnumerable *)0x0) {
    OStack_5.klass =
         (Object__Class *)func_?(0,TypeInfo__System__Collections__IEnumerable,collection);
    unaff_ESI = &OStack_5;
    _Stack_8.__klassIndex = 1;
    unaff_EBX = (IEnumerator__Class *)&pIStack_4;
    while (OStack_5.klass != (Object__Class *)0x0) {
      cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,OStack_5.klass);
      pOVar7 = OStack_5.klass;
      pIVar8 = TypeInfo__System__Collections__IEnumerator;
      if (cVar6 == '\0') {
        _Stack_8.__klassIndex = -1;
        pIStack_4 = (Il2CppImage *)func_?(OStack_5.klass,TypeInfo__System__IDisposable);
        if (pIStack_4 == (Il2CppImage *)0x0) {
          *unaff_FS_OFFSET = _Stack_10;
          return;
        }
        func_?(0,TypeInfo__System__IDisposable,pIStack_4);
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      unaff_ESI = (Object *)0x0;
      if (OStack_5.klass == (Object__Class *)0x0) break;
      pIVar9 = ((OStack_5.klass)->_0).image;
      uVar10 = 0;
      uVar11 = *(ushort *)((int)&pIVar9[4].nameNoExt + 2);
      if (uVar11 != 0) {
        do {
          if (*(IEnumerator__Class **)(pIVar9[2].name + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            pIVar9 = ((OStack_5.klass)->_0).image;
            pp_Var8 = &pIVar9[4].metadataHandle +
                      *(int *)(pIVar9[2].name + (uint)uVar10 * 8 + 4) * 2;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      pp_Var8 = (Il2CppMetadataImageHandle *)
                func_?(OStack_5.klass,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      unaff_ESI = (Object *)
                  (*(code *)*pp_Var8)(pOVar7,(Il2CppNameToTypeHandleHashTable *)pp_Var8[1]);
      unaff_EBX = pIVar8;
      if (OStack_5.monitor._3_1_ == '\0' && eachEntryNewLine == 0) {
        pSVar12 = ::StringLiteral___;
        if (sb == (StringBuilder *)0x0) break;
      }
      else {
        OStack_5.monitor._3_1_ = '\0';
        if (sb == (StringBuilder *)0x0) break;
        iVar13 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_get_Length
                          (sb,(MethodInfo *)0x0);
        if (iVar13 != 0) {
          pSVar12 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar12,(MethodInfo *)0x0);
        }
        if (::StringLiteral__ == (String *)0x0) break;
        pSVar12 = mscorlib.dll::System::String::String_PadLeft
                            (::StringLiteral__,depth * 2,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (sb,pSVar12,(MethodInfo *)0x0);
      if (unaff_ESI == (Object *)0x0) {
code_?:
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_10
                  (sb,unaff_ESI,(MethodInfo *)0x0);
      }
      else {
        pOVar14 = (Object *)0x0;
        if ((KeyValuePair_2_System_Object_System_Object___Class *)unaff_ESI->klass ==
            TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>) {
          pOVar14 = unaff_ESI;
        }
        if (pOVar14 == (Object *)0x0) goto code_?;
        if ((unaff_ESI->klass->_0).element_class !=
            (TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>->
            _0).element_class) goto code_?;
        piVar15 = (int *)func_?();
        unaff_EBX = (IEnumerator__Class *)*piVar15;
        unaff_ESI = (Object *)piVar15[1];
        pSVar16 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (sb,StringLiteral__k__,(MethodInfo *)0x0);
        if (((unaff_EBX == (IEnumerator__Class *)0x0) ||
            (pSVar12 = (String *)func_?(3,unaff_EBX), pSVar16 == (StringBuilder *)0x0)) ||
           (pSVar16 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar16,pSVar12,(MethodInfo *)0x0), pSVar16 == (StringBuilder *)0x0
           )) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar16,StringLiteral__v__,(MethodInfo *)0x0);
        iVar17 = func_?();
        if (iVar17 == 0) {
code_?:
          pSVar12 = StringLiteral_NULL;
          if (unaff_ESI != (Object *)0x0) {
            pSVar12 = (String *)func_?(3,unaff_ESI);
          }
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar12,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (sb,0x5d,(MethodInfo *)0x0);
        }
        else {
          if (unaff_ESI != (Object *)0x0) {
            pOVar14 = (Object *)0x0;
            if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
              pOVar14 = unaff_ESI;
            }
            if (pOVar14 != (Object *)0x0) goto code_?;
          }
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          unaff_EBX = (IEnumerator__Class *)TypeInfo__System__Collections__IEnumerable;
          if (unaff_ESI == (Object *)0x0) {
            collection_00 = (IEnumerable *)0x0;
          }
          else {
            collection_00 =
                 (IEnumerable *)
                 func_?(unaff_ESI,TypeInfo__System__Collections__IEnumerable);
            if (collection_00 == (IEnumerable *)0x0) goto code_?;
          }
          Extensions_AppendRecursive(sb,collection_00,depth + 1,eachEntryNewLine,(MethodInfo *)0x0);
          OStack_5.monitor._3_1_ = '\x01';
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EBX);
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
                     (collection,0,1,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  return pSVar1;
}


/* String BuildStringRecursive(IEnumerable, String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildStringRecursive
                   (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,prependInfo,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    pIStack1 =
         (this->klass->vtable).System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr;
    pSStack2 = this;
    pSVar3 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
    return pSVar3;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_1
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
                     (collection,0,_eachEntryNewLine,
                      (method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  return pSVar1;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_2
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   String *prependInfo,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
                     (collection,prependInfo,1,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  return pSVar1;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_3
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  uVar4 = ((method->field7_0x1c).rgctx_data[4].klass)->actualSize;
  func_?();
  func_?();
  func_?(&stack0xffffffac,0,uVar4);
  this = (Il2CppClass *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
            ((StringBuilder *)this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (Il2CppClass *)0x0) goto code_?;
    this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        ((StringBuilder *)this,prependInfo,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
    if (this_00 == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,pSVar5,(MethodInfo *)0x0);
  }
  bVar6 = true;
  if (collection != (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    pIVar7 = (Il2CppClass *)func_?();
    uStack_1 = 1;
    while( true ) {
      if (pIVar7 == (Il2CppClass *)0x0) break;
      this_01 = pIVar7;
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (pIVar7 != (Il2CppClass *)0x0) {
          func_?();
        }
        uStack_1 = 0xffffffff;
        if (this != (Il2CppClass *)0x0) {
          pSVar5 = (String *)
                   (*(code *)(((StringBuilder__Class *)this->image)->vtable).ToString.method)();
          *unaff_FS_OFFSET = uStack_3;
          return pSVar5;
        }
        break;
      }
      if (pIVar7 == (Il2CppClass *)0x0) break;
      pIVar9 = (method->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar9->vtable[0].methodPtr & 0x100) == 0) {
        this_01 = pIVar9;
        pIVar9 = (Il2CppClass *)func_?();
      }
      pSVar10 = (StringBuilder__Class *)pIVar7->image;
      uVar11 = 0;
      uVar12._0_1_ = (pSVar10->_1).rank;
      uVar12._1_1_ = (pSVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if (pSVar10->interfaceOffsets[uVar11].interfaceType == pIVar9) {
            ppMVar13 = &(&(pSVar10->vtable).Equals)[pSVar10->interfaceOffsets[uVar11].offset].method;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
          this = this_01;
        } while (uVar11 < uVar12);
      }
      this_01 = this;
      ppMVar13 = (MethodInfo **)func_?();
code_?:
      (**(code **)((int)ppMVar13[1] + 8))();
      func_?();
      if (bVar6) {
        bVar6 = false;
      }
      else {
        if (this_01 == (Il2CppClass *)0x0) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  ((StringBuilder *)this_01,::StringLiteral___,(MethodInfo *)0x0);
        if (eachEntryNewLine != 0) {
          pSVar5 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    ((StringBuilder *)this_01,pSVar5,(MethodInfo *)0x0);
        }
      }
      func_?();
      value = (Object *)func_?();
      if (this_01 == (Il2CppClass *)0x0) break;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_10
                ((StringBuilder *)this_01,value,(MethodInfo *)0x0);
      this = this_01;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar14)();
  return pSVar5;
}


/* Boolean ContainsObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_ContainsObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)TypeInfo__Extensions->static_fields->obscuredString,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Single ConvertToSingle(String) */

float Assembly-CSharp.dll::Extensions::Extensions_ConvertToSingle(String *s,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle_13
                    (s,(IFormatProvider *)provider,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return fVar4;
}


/* Transform FindChildRecursively(Transform, String) */

Transform *
Assembly-CSharp.dll::Extensions::Extensions_FindChildRecursively
          (Transform *transform,String *child,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  _Stack_c.dummy = &DAT_?;
  pcStack_2 = (char *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pcStack_2;
  pcStack_3 = &stack0xffffffc0;
  pcVar4 = &stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
    pcVar4 = pcStack_3;
  }
  pcStack_3 = pcVar4;
  transform_00 = (Transform__Class *)0x0;
  pIStack_5 = (Il2CppImage *)0x0;
  if (transform != (Transform *)0x0) {
    pIStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (transform,(MethodInfo *)0x0);
    uStack_1._0_2_ = 1;
    uStack_1._2_1_ = 0;
    uStack_1._3_1_ = 0;
    while (pIStack_6 != (IEnumerator *)0x0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_6);
      if (cVar7 == '\0') {
        uStack_1._0_2_ = 0xffff;
        uStack_1._2_1_ = 0xff;
        uStack_1._3_1_ = 0xff;
        pIStack_5 = (Il2CppImage *)func_?(pIStack_6,TypeInfo__System__IDisposable);
        if (pIStack_5 != (Il2CppImage *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIStack_5);
        }
        goto code_?;
      }
      if ((pIStack_6 == (IEnumerator *)0x0) ||
         (unaff_EDI = (Transform__Class *)
                      func_?(1,TypeInfo__System__Collections__IEnumerator,pIStack_6),
         unaff_EDI == (Transform__Class *)0x0)) break;
      pTVar8 = (Transform__Class *)(unaff_EDI->_0).image;
      pTVar9 = TypeInfo__UnityEngine__Transform;
      if (((pTVar8->_1).naturalAligment < (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
         ((pTVar8->_1).typeHierarchy[(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
      a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                    ((Object_1 *)unaff_EDI,(MethodInfo *)0x0);
      bVar10 = mscorlib.dll::System::String::String_op_Equality(a,child,(MethodInfo *)0x0);
      if (bVar10 != 0) goto code_?;
    }
  }
  goto code_?;
code_?:
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  func_?();
  transform_00 = unaff_EDI;
code_?:
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)transform_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar10 == 0) {
code_?:
    *unaff_FS_OFFSET = pcStack_2;
    return (Transform *)transform_00;
  }
  pIStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (transform,(MethodInfo *)0x0);
  unaff_EDI = (Transform__Class *)&pIStack_5;
  uStack_1._0_2_ = 4;
  uStack_1._2_1_ = 0;
  uStack_1._3_1_ = 0;
  while (pIStack_6 != (IEnumerator *)0x0) {
    cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_6);
    if (cVar7 == '\0') {
      uStack_1._0_2_ = 0xffff;
      uStack_1._2_1_ = 0xff;
      uStack_1._3_1_ = 0xff;
      pIStack_5 = (Il2CppImage *)func_?(pIStack_6,TypeInfo__System__IDisposable);
      if (pIStack_5 != (Il2CppImage *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIStack_5);
        *unaff_FS_OFFSET = pcStack_2;
        return (Transform *)transform_00;
      }
      goto code_?;
    }
    if (pIStack_6 == (IEnumerator *)0x0) break;
    transform_00 = (Transform__Class *)
                   func_?(1,TypeInfo__System__Collections__IEnumerator,pIStack_6);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    if ((transform_00 != (Transform__Class *)0x0) &&
       ((unaff_EDI = *(Transform__Class **)&transform_00->_0,
        pTVar8 = TypeInfo__UnityEngine__Transform,
        (unaff_EDI->_1).naturalAligment < (TypeInfo__UnityEngine__Transform->_1).naturalAligment ||
        ((unaff_EDI->_1).typeHierarchy[(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1]
         != (Il2CppClass *)TypeInfo__UnityEngine__Transform)))) goto code_?;
    transform_00 = (Transform__Class *)
                   Extensions_FindChildRecursively
                             ((Transform *)transform_00,child,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)transform_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      uStack_1._0_2_ = 0xffff;
      uStack_1._2_1_ = 0xff;
      uStack_1._3_1_ = 0xff;
      func_?();
      *unaff_FS_OFFSET = pcStack_2;
      return (Transform *)transform_00;
    }
  }
code_?:
  func_?();
  pTVar9 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pTVar9);
  pTVar8 = extraout_EDX_00;
code_?:
  func_?(transform_00,pTVar8);
  pcVar11 = (code *)swi(3);
  pTVar12 = (Transform *)(*pcVar11)();
  return pTVar12;
}


/* String 
   GenerateDictionaryString[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

String * Assembly-CSharp.dll::Extensions::Extensions_GenerateDictionaryString
                   (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *collection,String *prependInfo,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__k__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__v__);
    puVar5 = puStack_4;
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
      puVar5 = puStack_4;
    }
  }
  puStack_4 = puVar5;
  uVar6 = ((method->field7_0x1c).rgctx_data[2].klass)->actualSize;
  pDStack_7 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)((method->field7_0x1c).rgctx_data[5].klass)->actualSize;
  if (((uint)((method->field7_0x1c).rgctx_data[2].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?((method->field7_0x1c).rgctx_data[2].klass);
  }
  func_?();
  puStack_4 = &stack0xffffffa0;
  func_?();
  puStack_8 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?();
  puStack_9 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?();
  pDVar10 = pDStack_7;
  pDStack_11 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?();
  pDStack_12 = (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?();
  puStack_13 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?(&stack0xffffffa0,0,uVar6);
  func_?();
  puStack_14 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  func_?(&stack0xffffffa0,0,pDVar10);
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
            (this,prependInfo,(MethodInfo *)0x0);
  prependInfo = (String *)CONCAT13(1,prependInfo._0_3_);
  if (collection !=
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    pMVar15 = (method->field7_0x1c).rgctx_data[1].method;
    pDStack_16 = pDStack_11;
    (*pMVar15->invoker_method)(pMVar15->methodPointer,pMVar15,collection,&pDStack_16,pDStack_11);
    func_?();
    uStack_1 = 1;
    while( true ) {
      pDVar10 = pDStack_12;
      cVar17 = (*((method->field7_0x1c).rgctx_data[0xc].method)->methodPointer)();
      if (cVar17 == '\0') break;
      collection = pDVar10;
      pMVar15 = (method->field7_0x1c).rgctx_data[3].method;
      (*pMVar15->invoker_method)(pMVar15->methodPointer,pMVar15,puStack_13,&collection,pDVar10);
      pDStack_12 = pDStack_7;
      pDStack_16 = pDVar10;
      func_?();
      if (prependInfo._3_1_ == '\0') {
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,::StringLiteral___,(MethodInfo *)0x0);
      }
      else {
        prependInfo = (String *)((uint)prependInfo & 0xffffff);
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      pSVar18 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (this,StringLiteral__k__,(MethodInfo *)0x0);
      func_?();
      pOVar19 = (Object *)func_?();
      if (pSVar18 == (StringBuilder *)0x0) goto code_?;
      pSVar18 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_10
                         (pSVar18,pOVar19,(MethodInfo *)0x0);
      if (pSVar18 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar18,StringLiteral__v__,(MethodInfo *)0x0);
      func_?();
      func_?();
      func_?();
      iVar20 = func_?();
      if (iVar20 == 0) {
        func_?();
        pOVar19 = (Object *)func_?();
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_10
                  (this,pOVar19,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar21 = (String *)(*((method->field7_0x1c).rgctx_data[0xb].method)->methodPointer)();
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,pSVar21,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this,::StringLiteral__,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    func_?();
    uStack_1 = 0xffffffff;
    if (this != (StringBuilder *)0x0) {
      pSVar21 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
      *unaff_FS_OFFSET = uStack_3;
      return pSVar21;
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pSVar21 = (String *)(*pcVar22)();
  return pSVar21;
}


/* Boolean GetBool(Dictionary`2[System.Object,System.Object], String, Boolean) */

bool Assembly-CSharp.dll::Extensions::Extensions_GetBool
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,bool defaultValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (hashtable,(Object *)key,&pOStack_1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((bVar3 != 0) && (pOStack_1 != (Object *)0x0)) {
    pOVar4 = (Object *)0x0;
    if ((Boolean__Class *)pOStack_1->klass == TypeInfo__System__Boolean) {
      pOVar4 = pOStack_1;
    }
    if (pOVar4 != (Object *)0x0) {
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar5 = (bool *)func_?();
        return *pbVar5;
      }
      goto code_?;
    }
  }
  return defaultValue;
}


/* Single GetClampedFloat(Dictionary`2[System.Object,System.Object], String, Single, Single, Single)
    */

float Assembly-CSharp.dll::Extensions::Extensions_GetClampedFloat
                (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,float min,
                float max,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (float)fVar3;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (hashtable,(Object *)key,&pOStack_1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((bVar4 != 0) && (pOStack_1 != (Object *)0x0)) {
    pOVar5 = (Object *)0x0;
    if ((Single__Class *)pOStack_1->klass == TypeInfo__System__Single) {
      pOVar5 = pOStack_1;
    }
    if (pOVar5 != (Object *)0x0) {
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar6 = (undefined4 *)func_?();
        pCVar7 = TypeInfo__System__Convert;
        t = (Convert__Class *)*puVar6;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          t = pCVar7;
        }
        hashtable = (Dictionary_2_System_Object_System_Object_ *)
                    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing
                    ::Easing_Linear((float)t,(MethodInfo *)0x0);
        if (((float)hashtable < min) || (min = max, max < (float)hashtable)) {
          hashtable = (Dictionary_2_System_Object_System_Object_ *)min;
        }
        return (float)hashtable;
      }
      goto code_?;
    }
  }
  return defaultValue;
}


/* Int32 GetClampedInt(Dictionary`2[System.Object,System.Object], String, Int32, Int32, Int32) */

int32_t Assembly-CSharp.dll::Extensions::Extensions_GetClampedInt
                  (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,int32_t min,
                  int32_t max,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (hashtable,(Object *)key,&pOStack_1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if ((bVar4 != 0) && (pOStack_1 != (Object *)0x0)) {
    pOVar5 = (Object *)0x0;
    if ((Int32__Class *)pOStack_1->klass == TypeInfo__System__Int32) {
      pOVar5 = pOStack_1;
    }
    if (pOVar5 != (Object *)0x0) {
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar6 = (int *)func_?();
        iVar7 = *piVar6;
        if ((iVar7 < min) || (min = max, max < iVar7)) {
          iVar7 = min;
        }
        return iVar7;
      }
      goto code_?;
    }
  }
  return defaultValue;
}


/* Color GetColor(Dictionary`2[System.Object,System.Object], String) */

Color * Assembly-CSharp.dll::Extensions::Extensions_GetColor
                  (Color *__return_storage_ptr__,
                  Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  if (cRam_? == '\0') {
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,colorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else {
    if (pOVar1[1].monitor != (MonitorData *)0x4) {
      __return_storage_ptr__->r = 0.0;
      __return_storage_ptr__->g = 0.0;
      __return_storage_ptr__->b = 0.0;
      __return_storage_ptr__->a = 0.0;
      return __return_storage_ptr__;
    }
    if ((((pOVar1[1].monitor != (MonitorData *)0x0) && ((MonitorData *)0x1 < pOVar1[1].monitor)) &&
        (pMVar2 = pOVar1[2].monitor, (MonitorData *)0x2 < pOVar1[1].monitor)) &&
       (pOVar3 = pOVar1[3].klass, (MonitorData *)0x3 < pOVar1[1].monitor)) {
      pMVar4 = pOVar1[3].monitor;
      __return_storage_ptr__->r = (float)pOVar1[2].klass;
      __return_storage_ptr__->g = (float)pMVar2;
      __return_storage_ptr__->b = (float)pOVar3;
      __return_storage_ptr__->a = (float)pMVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Color GetColorOrDefault(Dictionary`2[System.Object,System.Object], String, Color) */

Color * Assembly-CSharp.dll::Extensions::Extensions_GetColorOrDefault
                  (Color *__return_storage_ptr__,
                  Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,
                  Color defaultColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,colorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else {
    if (pOVar1[1].monitor != (MonitorData *)0x4) {
      __return_storage_ptr__->r = defaultColor.r;
      __return_storage_ptr__->g = defaultColor.g;
      __return_storage_ptr__->b = defaultColor.b;
      __return_storage_ptr__->a = defaultColor.a;
      return __return_storage_ptr__;
    }
    if ((((pOVar1[1].monitor != (MonitorData *)0x0) && ((MonitorData *)0x1 < pOVar1[1].monitor)) &&
        (pMVar2 = pOVar1[2].monitor, (MonitorData *)0x2 < pOVar1[1].monitor)) &&
       (pOVar3 = pOVar1[3].klass, (MonitorData *)0x3 < pOVar1[1].monitor)) {
      pMVar4 = pOVar1[3].monitor;
      __return_storage_ptr__->r = (float)pOVar1[2].klass;
      __return_storage_ptr__->g = (float)pMVar2;
      __return_storage_ptr__->b = (float)pOVar3;
      __return_storage_ptr__->a = (float)pMVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Object GetObscuredType(Dictionary`2[System.Object,System.Object], String) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetObscuredType
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)TypeInfo__Extensions->static_fields->obscuredString,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    return (Object *)TVar2.m_Index;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* Object GetTypedValueOrDefault[Object,Object](Dictionary`2[System.Object,System.Object], Object,
   Object) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetTypedValueOrDefault
                   (Dictionary_2_System_Object_System_Object_ *hashtable,Object *key,
                   Object *defaultValue,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  handle.value = (Il2CppClass *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,key
                       ,(method->field7_0x1c).rgctx_data[2].method);
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable
                           ,key,(method->field7_0x1c).rgctx_data[4].method);
    if (((uint)((method->field7_0x1c).rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    iVar2 = func_?();
    if (iVar2 == 0) {
      handle.value = (method->field7_0x1c).rgctx_data[5].rgctxDataDummy;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(code *)(pTVar3->klass->vtable).get_IsEnum.method)
                        (pTVar3,(pTVar3->klass->vtable).get_IsMarshalByRef.methodPtr);
      if ((cVar4 == '\0') || (unaff_EBX.m_Index == 0)) {
        return defaultValue;
      }
      TVar5.m_Index = 0;
      if (*(Int32__Class **)unaff_EBX.m_Index == TypeInfo__System__Int32) {
        TVar5 = unaff_EBX;
      }
      if (TVar5.m_Index == 0) {
        return defaultValue;
      }
    }
    handle.value = (method->field7_0x1c).rgctx_data[3].klass;
    if (((uint)((Il2CppClass *)handle.value)->vtable[0].methodPtr & 0x100) == 0) {
      handle.value = (void *)func_?(handle.value);
    }
    if (unaff_EBX.m_Index == 0) {
      pOVar6 = (Object *)0x0;
    }
    else {
      pOVar6 = (Object *)func_?(unaff_EBX.m_Index,handle.value);
      if (pOVar6 == (Object *)0x0) goto code_?;
    }
    return pOVar6;
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX.m_Index,handle.value);
  pcVar7 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar7)();
  return pOVar6;
}


/* __Il2CppFullySharedGenericType
   GetTypedValueOrDefault[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Extensions::Extensions_GetTypedValueOrDefault_1
          (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *hashtable,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *defaultValue
          ,MethodInfo *method)

{
  iVar1 = in_stack_2;
  if (*(int *)(in_stack_2 + 0x1c) == 0) {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_?();
    }
  }
  uStack_3 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0x84);
  uStack_4 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x84);
  func_?();
  puVar5 = &stack0xffffffdc;
  func_?();
  p_Var6 = (_Il2CppFullySharedGenericType *)&key;
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0x14) < 0) {
    p_Var6 = key;
  }
  puStack_6 = &stack0xffffffdc;
  func_?(&stack0xffffffdc,p_Var6,uStack_3);
  if (hashtable ==
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    p_Var6 = (_Il2CppFullySharedGenericType *)(*pcVar7)();
    return p_Var6;
  }
  puStack_8 = &stack0xffffffdc;
  if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0x14)) {
    puStack_8 = unaff_EDI;
  }
  iVar9 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  (**(code **)(iVar9 + 8))
            (**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 8),iVar9,hashtable,&puStack_8,
             (int)&stack0x00000014 + 3);
  uVar10 = uStack_4;
  if (in_stack_2._3_1_ == '\0') {
    p_Var6 = (_Il2CppFullySharedGenericType *)&defaultValue;
    if (*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x14) < 0) {
      p_Var6 = defaultValue;
    }
    func_?(&stack0xffffffdc,p_Var6,uStack_4);
    goto code_?;
  }
  p_Var6 = (_Il2CppFullySharedGenericType *)&key;
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0x14) < 0) {
    p_Var6 = key;
  }
  func_?(&stack0xffffffdc,p_Var6,uStack_3);
  puStack_11 = &stack0xffffffdc;
  if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0x14)) {
    puStack_11 = unaff_EDI;
  }
  iVar9 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x10);
  puStack_8 = &stack0xffffffdc;
  (**(code **)(iVar9 + 8))
            (**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 0x10),iVar9,hashtable,&puStack_11,
             &stack0xffffffdc);
  piVar12 = (int *)func_?(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc),&stack0xffffffdc);
  iVar9 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
  if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_?(iVar9);
  }
  iVar9 = func_?(piVar12,iVar9);
  if (iVar9 == 0) {
    handle.value = *(void **)(*(int *)(iVar1 + 0x1c) + 0x14);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pTVar13 == (Type *)0x0) goto code_?;
    cVar14 = (*(code *)(pTVar13->klass->vtable).get_IsEnum.method)
                      (pTVar13,(pTVar13->klass->vtable).get_IsMarshalByRef.methodPtr);
    uVar10 = uStack_4;
    puVar5 = puStack_6;
    if ((cVar14 != '\0') && (piVar12 != (int *)0x0)) {
      piVar15 = (int *)0x0;
      if ((Int32__Class *)*piVar12 == TypeInfo__System__Int32) {
        piVar15 = piVar12;
      }
      if (piVar15 != (int *)0x0) goto code_?;
    }
    p_Var6 = (_Il2CppFullySharedGenericType *)&defaultValue;
    if (*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x14) < 0) {
      p_Var6 = defaultValue;
    }
    func_?(puStack_6,p_Var6,uStack_4);
  }
  else {
code_?:
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    puVar5 = (undefined1 *)func_?(piVar12,iVar1,puStack_6);
    uVar10 = uStack_4;
  }
code_?:
  p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,puVar5,uVar10);
  return p_Var6;
}


/* Boolean GetValueOrDefault[Boolean](Dictionary`2[System.Object,System.Object], String, Boolean) */

bool Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,bool defaultValue,
               MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable
                           ,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    iVar2 = func_?();
    if (iVar2 == 0) {
      handle = (method->field7_0x1c).rgctx_data[1];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(code *)(pTVar3->klass->vtable).get_IsEnum.method)
                        (pTVar3,(pTVar3->klass->vtable).get_IsMarshalByRef.methodPtr);
      if ((cVar4 == '\0') || (unaff_EDI.m_Index == 0)) {
        return defaultValue;
      }
      TVar5.m_Index = 0;
      if (*(Int32__Class **)unaff_EDI.m_Index == TypeInfo__System__Int32) {
        TVar5 = unaff_EDI;
      }
      if (TVar5.m_Index == 0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI.m_Index != 0) {
      if (*(int *)(*(int *)unaff_EDI.m_Index + 0x20) == *(int *)(iVar2 + 0x20)) {
        pbVar6 = (bool *)func_?(unaff_EDI.m_Index);
        return *pbVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI.m_Index,iVar2);
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Int32Enum GetValueOrDefault[Int32Enum](Dictionary`2[System.Object,System.Object], String,
   Int32Enum) */

Int32Enum__Enum
Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_2
          (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
          Int32Enum__Enum defaultValue,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable
                           ,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    iVar2 = func_?();
    if (iVar2 == 0) {
      handle = (method->field7_0x1c).rgctx_data[1];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(code *)(pTVar3->klass->vtable).get_IsEnum.method)
                        (pTVar3,(pTVar3->klass->vtable).get_IsMarshalByRef.methodPtr);
      if ((cVar4 == '\0') || (unaff_EDI.m_Index == 0)) {
        return defaultValue;
      }
      TVar5.m_Index = 0;
      if (*(Int32__Class **)unaff_EDI.m_Index == TypeInfo__System__Int32) {
        TVar5 = unaff_EDI;
      }
      if (TVar5.m_Index == 0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI.m_Index != 0) {
      if (*(int *)(*(int *)unaff_EDI.m_Index + 0x20) == *(int *)(iVar2 + 0x20)) {
        pIVar6 = (Int32Enum__Enum *)func_?(unaff_EDI.m_Index);
        return *pIVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI.m_Index,iVar2);
  pcVar7 = (code *)swi(3);
  IVar8 = (*pcVar7)();
  return IVar8;
}


/* Object GetValueOrDefault[Object](Dictionary`2[System.Object,System.Object], String, Object) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_3
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   Object *defaultValue,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  handle.value = (Il2CppClass *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable
                           ,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    iVar2 = func_?();
    if (iVar2 == 0) {
      handle.value = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(code *)(pTVar3->klass->vtable).get_IsEnum.method)
                        (pTVar3,(pTVar3->klass->vtable).get_IsMarshalByRef.methodPtr);
      if ((cVar4 == '\0') || (unaff_EBX.m_Index == 0)) {
        return defaultValue;
      }
      TVar5.m_Index = 0;
      if (*(Int32__Class **)unaff_EBX.m_Index == TypeInfo__System__Int32) {
        TVar5 = unaff_EBX;
      }
      if (TVar5.m_Index == 0) {
        return defaultValue;
      }
    }
    handle.value = ((method->field7_0x1c).rgctx_data)->klass;
    if (((uint)((Il2CppClass *)handle.value)->vtable[0].methodPtr & 0x100) == 0) {
      handle.value = (void *)func_?(handle.value);
    }
    if (unaff_EBX.m_Index == 0) {
      pOVar6 = (Object *)0x0;
    }
    else {
      pOVar6 = (Object *)func_?(unaff_EBX.m_Index,handle.value);
      if (pOVar6 == (Object *)0x0) goto code_?;
    }
    return pOVar6;
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX.m_Index,handle.value);
  pcVar7 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar7)();
  return pOVar6;
}


/* Single GetValueOrDefault[Single](Dictionary`2[System.Object,System.Object], String, Single) */

float Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_4
                (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,float defaultValue
                ,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable
                           ,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    iVar2 = func_?();
    if (iVar2 == 0) {
      handle = (method->field7_0x1c).rgctx_data[1];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      if (pTVar3 == (Type *)0x0) goto code_?;
      cVar4 = (*(code *)(pTVar3->klass->vtable).get_IsEnum.method)
                        (pTVar3,(pTVar3->klass->vtable).get_IsMarshalByRef.methodPtr);
      if ((cVar4 == '\0') || (unaff_EDI.m_Index == 0)) {
        return defaultValue;
      }
      TVar5.m_Index = 0;
      if (*(Int32__Class **)unaff_EDI.m_Index == TypeInfo__System__Int32) {
        TVar5 = unaff_EDI;
      }
      if (TVar5.m_Index == 0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI.m_Index != 0) {
      if (*(int *)(*(int *)unaff_EDI.m_Index + 0x20) == *(int *)(iVar2 + 0x20)) {
        pfVar6 = (float *)func_?(unaff_EDI.m_Index);
        return *pfVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI.m_Index,iVar2);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* __Il2CppFullySharedGenericType
   GetValueOrDefault[__Il2CppFullySharedGenericType](Dictionary`2[System.Object,System.Object],
   String, __Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_5
          (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
          _Il2CppFullySharedGenericType *defaultValue,MethodInfo *method)

{
  iVar1 = in_stack_2;
  if (*(int *)(in_stack_2 + 0x1c) == 0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    if (*(int *)(in_stack_2 + 0x1c) == 0) {
      func_?();
    }
  }
  uVar3 = *(undefined4 *)(**(int **)(in_stack_2 + 0x1c) + 0x84);
  puVar4 = &stack0xffffffec;
  in_stack_2 = uVar3;
  func_?();
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
    return p_Var7;
  }
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                     (Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar6 == 0) {
    func_?();
    goto code_?;
  }
  TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)hashtable,
                     (Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((*(byte *)(**(int **)(iVar1 + 0x1c) + 0xbd) & 1) == 0) {
    func_?();
  }
  iVar8 = func_?();
  if (iVar8 == 0) {
    handle.value = *(void **)(*(int *)(iVar1 + 0x1c) + 4);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pTVar9 == (Type *)0x0) goto code_?;
    cVar10 = (*(code *)(pTVar9->klass->vtable).get_IsEnum.method)
                      (pTVar9,(pTVar9->klass->vtable).get_IsMarshalByRef.methodPtr);
    uVar3 = in_stack_2;
    if ((cVar10 != '\0') && (TVar7.m_Index != 0)) {
      TVar11.m_Index = 0;
      if (*(Int32__Class **)TVar7.m_Index == TypeInfo__System__Int32) {
        TVar11 = TVar7;
      }
      if (TVar11.m_Index != 0) goto code_?;
    }
    p_Var7 = (_Il2CppFullySharedGenericType *)&defaultValue;
    if (*(int *)(**(int **)(iVar1 + 0x1c) + 0x14) < 0) {
      p_Var7 = defaultValue;
    }
    func_?(&UNK_?,p_Var7,in_stack_2);
    puVar4 = &UNK_?;
  }
  else {
code_?:
    iVar1 = **(int **)(iVar1 + 0x1c);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    puVar4 = (undefined *)func_?(TVar7.m_Index,iVar1,&UNK_?);
  }
code_?:
  p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,puVar4,uVar3);
  return p_Var7;
}


/* Vector3 GetVector3(Dictionary`2[System.Object,System.Object], String) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_GetVector3
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Object_System_Object_ *hashtable,String *vectorKey,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  if (cRam_? == '\0') {
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,vectorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else {
    if (pOVar1[1].monitor != (MonitorData *)0x3) {
      __return_storage_ptr__->x = 0.0;
      __return_storage_ptr__->y = 0.0;
      __return_storage_ptr__->z = 0.0;
      return __return_storage_ptr__;
    }
    if (((pOVar1[1].monitor != (MonitorData *)0x0) && ((MonitorData *)0x1 < pOVar1[1].monitor)) &&
       (pMVar2 = pOVar1[2].monitor, (MonitorData *)0x2 < pOVar1[1].monitor)) {
      pOVar3 = pOVar1[3].klass;
      __return_storage_ptr__->x = (float)pOVar1[2].klass;
      __return_storage_ptr__->y = (float)pMVar2;
      __return_storage_ptr__->z = (float)pOVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Vector3 GetVector3OrDefault(Dictionary`2[System.Object,System.Object], String, Vector3) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_GetVector3OrDefault
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Object_System_Object_ *hashtable,String *vectorKey,
                    Vector3 defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,vectorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else {
    if (pOVar1[1].monitor != (MonitorData *)0x3) {
      __return_storage_ptr__->x = defaultValue.x;
      __return_storage_ptr__->y = defaultValue.y;
      __return_storage_ptr__->z = defaultValue.z;
      return __return_storage_ptr__;
    }
    if (((pOVar1[1].monitor != (MonitorData *)0x0) && ((MonitorData *)0x1 < pOVar1[1].monitor)) &&
       (pMVar2 = pOVar1[2].monitor, (MonitorData *)0x2 < pOVar1[1].monitor)) {
      pOVar3 = pOVar1[3].klass;
      __return_storage_ptr__->x = (float)pOVar1[2].klass;
      __return_storage_ptr__->y = (float)pMVar2;
      __return_storage_ptr__->z = (float)pOVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void 
   Log[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

void Assembly-CSharp.dll::Extensions::Extensions_Log
               (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *collection,String *prependInfo,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  message = (Object *)
            (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
                      (collection,prependInfo,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
  return;
}


/* Void 
   LogError[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogError
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogError_System__Object_);
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,_eachEntryNewLine);
  return;
}


/* Void LogErrorRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogErrorRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogError_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions_LogRecursive_1
            ((IEnumerable *)0x0,(Action_1_String_ *)this,prependInfo,eachEntryNewLine,
             (MethodInfo *)0x0);
  return;
}


/* Void LogRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__Log_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions_LogRecursive_1
            ((IEnumerable *)0x0,(Action_1_String_ *)this,prependInfo,eachEntryNewLine,
             (MethodInfo *)0x0);
  return;
}


/* Void LogRecursive(IEnumerable, Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive_1
               (IEnumerable *collection,Action_1_String_ *logFunc,String *prependInfo,
               bool eachEntryNewLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,prependInfo,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    pIStack1 =
         (this->klass->vtable).System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr;
    (*(code *)(this->klass->vtable).ToString.method)();
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void 
   LogWarning[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarning
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogWarning_System__Object_);
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,_eachEntryNewLine);
  return;
}


/* Void LogWarningRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarningRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogWarning_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions_LogRecursive_1
            ((IEnumerable *)0x0,(Action_1_String_ *)this,prependInfo,eachEntryNewLine,
             (MethodInfo *)0x0);
  return;
}


/* Void 
   Log[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_1
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__Log_System__Object_);
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  this = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
         func_?(TypeInfo__System__Action<System::String>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
             (MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,_eachEntryNewLine);
  return;
}


/* Void 
   Log[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_2
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               Action_1_String_ *logFunc,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__Extensions);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  uVar1 = (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
                    (collection,prependInfo,_eachEntryNewLine,
                     (method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
  if (logFunc != (Action_1_String_ *)0x0) {
    (*(logFunc->fields)._._.invoke_impl)
              ((logFunc->fields)._._.method_code,uVar1,(logFunc->fields)._._.method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean RemoveObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_RemoveObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      (hashtable,(Object *)TypeInfo__Extensions->static_fields->obscuredString,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void ScaleBounds(GameObject, Single) */

void Assembly-CSharp.dll::Extensions::Extensions_ScaleBounds
               (GameObject *gameObject,float targetSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_Failed_to_find_bounds_);
    cRam_? = '\x01';
  }
  NStack_1.value.m_Extents.x = 0.0;
  NStack_1.value.m_Extents.y = 0.0;
  NStack_1.value.m_Extents.z = 0.0;
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value.m_Center.x = 0.0;
  NStack_1.value.m_Center.y = 0.0;
  NStack_1.value.m_Center.z = 0.0;
  if (gameObject != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pNVar3 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       (&NStack_4,pTVar2,(MethodInfo *)0x0);
    NStack_1.hasValue = pNVar3->hasValue;
    NStack_1._1_3_ = *(undefined3 *)&pNVar3->field_0x1;
    NStack_1.value.m_Center.x = (pNVar3->value).m_Center.x;
    NStack_1.value.m_Center.y = (pNVar3->value).m_Center.y;
    NStack_1.value.m_Center.z = (pNVar3->value).m_Center.z;
    NStack_1.value.m_Extents.x = (pNVar3->value).m_Extents.x;
    NStack_1.value.m_Extents.y = (pNVar3->value).m_Extents.y;
    NStack_1.value.m_Extents.z = (pNVar3->value).m_Extents.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    BStack_6.m_Extents.x = (pVVar5->oneVector).x;
    BStack_6.m_Extents.y = (pVVar5->oneVector).y;
    NStack_4.value.m_Extents.z = (pVVar5->oneVector).z * _UNK_?;
    NStack_4.value.m_Extents.x = BStack_6.m_Extents.x * _UNK_?;
    NStack_4.value.m_Extents.y = BStack_6.m_Extents.y * _UNK_?;
    BStack_6.m_Extents.z = NStack_4.value.m_Extents.z;
    if (NStack_1.hasValue == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Failed_to_find_bounds_,(MethodInfo *)0x0);
    }
    else {
      pBVar7 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
               Nullable_1_UnityEngine_Bounds__get_Value
                         (&BStack_6,&NStack_1,
                          MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
      NStack_4.value.m_Center.x = (pBVar7->m_Center).x;
      NStack_4.value.m_Center.y = (pBVar7->m_Center).y;
      NStack_4.value.m_Center.z = (pBVar7->m_Center).z;
      NStack_4.value.m_Extents.x = (pBVar7->m_Extents).x;
      uVar8 = (pBVar7->m_Extents).y;
      uVar9 = (pBVar7->m_Extents).z;
      NStack_4.value.m_Extents.y = (float)uVar8;
      NStack_4.value.m_Extents.z = (float)uVar9;
    }
    fVar10 = NStack_4.value.m_Extents.y * _UNK_?;
    if (NStack_4.value.m_Extents.y * _UNK_? <= NStack_4.value.m_Extents.z * _UNK_?)
    {
      fVar10 = NStack_4.value.m_Extents.z * _UNK_?;
    }
    fVar11 = NStack_4.value.m_Extents.x * _UNK_?;
    if (NStack_4.value.m_Extents.x * _UNK_? <= fVar10) {
      fVar11 = fVar10;
    }
    fVar11 = targetSize / fVar11;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    BStack_6.m_Extents.y = fVar11;
    BStack_6.m_Extents.x = fVar11;
    BStack_6.m_Extents.z = fVar11;
    if (pTVar2 != (Transform *)0x0) {
      value.y = fVar11;
      value.x = fVar11;
      value.z = fVar11;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetColor(Dictionary`2[System.Object,System.Object], String, Color) */

void Assembly-CSharp.dll::Extensions::Extensions_SetColor
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,Color color,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  value = (Object *)func_?();
  if (value != (Object *)0x0) {
    if ((((value[1].monitor == (MonitorData *)0x0) ||
         (value[2].klass = (Object__Class *)color.r, value[1].monitor < (MonitorData *)0x2)) ||
        (value[2].monitor = (MonitorData *)color.g, value[1].monitor < (MonitorData *)0x3)) ||
       (value[3].klass = (Object__Class *)color.b, value[1].monitor < (MonitorData *)0x4)) {
      func_?();
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    value[3].monitor = (MonitorData *)color.a;
    if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (hashtable,(Object *)colorKey,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetObscuredType[ObscuredBool](Dictionary`2[System.Object,System.Object], String,
   ObscuredBool) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredBool value,
               MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  OStack_2.fakeValue = value.fakeValue;
  OStack_2.fakeValueChanged = value.fakeValueChanged;
  OStack_2.inited = value.inited;
  OStack_2._11_1_ = value._11_1_;
  OStack_2.currentCryptoKey = value.currentCryptoKey;
  OStack_2._1_3_ = value._1_3_;
  OStack_2.hiddenValue = value.hiddenValue;
  value_00 = (Object *)
             func_?(((method->field7_0x1c).rgctx_data)->rgctxDataDummy,&OStack_2);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (hashtable,(Object *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetObscuredType[ObscuredFloat](Dictionary`2[System.Object,System.Object], String,
   ObscuredFloat) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_1
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredFloat value
               ,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  bStack_2 = value.inited;
  uStack_3 = value._17_3_;
  iStack_4 = value.currentCryptoKey;
  AStack_5 = value.hiddenValue;
  pBStack_6 = value.hiddenValueOld;
  fStack_7 = value.fakeValue;
  value_00 = (Object *)
             func_?(((method->field7_0x1c).rgctx_data)->rgctxDataDummy,&iStack_4);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (hashtable,(Object *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetObscuredType[ObscuredInt](Dictionary`2[System.Object,System.Object], String, ObscuredInt)
    */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_2
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredInt value,
               MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  iStack_2 = value.currentCryptoKey;
  iStack_3 = value.hiddenValue;
  iStack_4 = value.fakeValue;
  bStack_5 = value.inited;
  uStack_6 = value._13_3_;
  value_00 = (Object *)
             func_?(((method->field7_0x1c).rgctx_data)->rgctxDataDummy,&iStack_2);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (hashtable,(Object *)pOVar1,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetObscuredType[__Il2CppFullySharedGenericType](Dictionary`2[System.Object,System.Object],
   String, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_3
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    if ((pMVar1->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pMVar1);
    }
  }
  uVar2 = ((pMVar1->field7_0x1c).rgctx_data)->klass->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xfffffff0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    method = (MethodInfo *)&stack0xfffffff0;
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar3;
  func_?();
  pMVar4 = method;
  pOVar3 = TypeInfo__Extensions->static_fields->obscuredString;
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)((pMVar1->field7_0x1c).rgctx_data)->method->return_type < 0) {
    p_Var6 = value;
  }
  func_?(method,p_Var6,uVar2);
  value_00 = (Object *)func_?(((pMVar1->field7_0x1c).rgctx_data)->rgctxDataDummy,pMVar4);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (hashtable,(Object *)pOVar3,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String ToSerializeString(Vector3) */

String * Assembly-CSharp.dll::Extensions::Extensions_ToSerializeString
                   (Vector3 vec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString_1
                     ((Single *)&vec,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    vec.y = 0.0;
    vec.x = (float)pSVar2;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(this,pSVar2,(MethodInfo *)0x0)
    ;
    vec.y = 0.0;
    vec.x = (float)::StringLiteral__;
    pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                       (this,::StringLiteral__,(MethodInfo *)0x0);
    vec.y = 0.0;
    vec.x = (float)&UNK_?;
    vec.x = (float)mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
    vec.y = 0.0;
    pSVar2 = mscorlib.dll::System::Single::Single_ToString_1
                       ((Single *)&vec.y,(IFormatProvider *)vec.x,(MethodInfo *)0x0);
    if (pSVar3 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar3,pSVar2,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (this,::StringLiteral__,(MethodInfo *)0x0);
      pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::Single::Single_ToString_1
                         ((Single *)&vec.z,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
      if (pSVar3 != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar3,pSVar2,(MethodInfo *)0x0);
        pSVar2 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
        return pSVar2;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
}


/* Vector3 ToVector3FromSerializeString(String) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_ToVector3FromSerializeString
                    (Vector3 *__return_storage_ptr__,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,1);
  if (separator == (Char__Array *)0x0) goto code_?;
  if (separator->max_length == 0) goto code_?;
  separator->vector[0] = 0x20;
  unaff_EDI = text;
  if (text == (String *)0x0) {
code_?:
    func_?();
    text = unaff_EDI;
  }
  else {
    pSVar1 = mscorlib.dll::System::String::String_Split_1(text,separator,(MethodInfo *)0x0);
    if (pSVar1 == (String__Array *)0x0) goto code_?;
    if (pSVar1->max_length == 3) {
      if (pSVar1->max_length != 0) {
        pSVar2 = pSVar1->vector[0];
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar3 = Extensions_ConvertToSingle(pSVar2,(MethodInfo *)0x0);
        if (1 < pSVar1->max_length) {
          fVar4 = Extensions_ConvertToSingle(pSVar1->vector[1],(MethodInfo *)0x0);
          if (2 < pSVar1->max_length) {
            fRam00000008 = Extensions_ConvertToSingle(pSVar1->vector[2],(MethodInfo *)0x0);
            fRam00000000 = fVar3;
            fRam00000004 = fVar4;
            return (Vector3 *)0x0;
          }
        }
      }
      goto code_?;
    }
  }
  method_00 = (MethodInfo *)0x0;
  pSVar2 = (String *)func_?(&StringLiteral_The_input_string_doesnt_contain_);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,text,method_00);
  uVar5 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar5);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  func_?(&MethodInfo__Extensions__ToVector3FromSerializeString_System__String_);
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Extensions() */

void Assembly-CSharp.dll::Extensions::Extensions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(::StringLiteral__,(MethodInfo *)0x0);
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields,pOVar1);
  return;
}

