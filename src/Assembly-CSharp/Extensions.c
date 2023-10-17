
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
      uVar11 = *(ushort *)((int)&pIVar9[4].name + 2);
      if (uVar11 != 0) {
        do {
          if (*(IEnumerator__Class **)(pIVar9[2].name + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            pIVar9 = ((OStack_5.klass)->_0).image;
            puVar12 = &pIVar9[4].customAttributeCount +
                     *(int *)(pIVar9[2].name + (uint)uVar10 * 8 + 4) * 2;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (uint32_t *)
               func_?(OStack_5.klass,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      unaff_ESI = (Object *)(*(code *)*puVar12)(pOVar7,(Il2CppMetadataImageHandle)puVar12[1]);
      unaff_EBX = pIVar8;
      if (OStack_5.monitor._3_1_ == '\0' && eachEntryNewLine == 0) {
        pSVar13 = ::StringLiteral___;
        if (sb == (StringBuilder *)0x0) break;
      }
      else {
        OStack_5.monitor._3_1_ = '\0';
        if (sb == (StringBuilder *)0x0) break;
        iVar14 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_get_Length
                          (sb,(MethodInfo *)0x0);
        if (iVar14 != 0) {
          pSVar13 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar13,(MethodInfo *)0x0);
        }
        if (::StringLiteral__ == (String *)0x0) break;
        pSVar13 = mscorlib.dll::System::String::String_PadLeft
                            (::StringLiteral__,depth * 2,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (sb,pSVar13,(MethodInfo *)0x0);
      if (unaff_ESI == (Object *)0x0) {
code_?:
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_8
                  (sb,unaff_ESI,(MethodInfo *)0x0);
      }
      else {
        pOVar15 = (Object *)0x0;
        if ((KeyValuePair_2_System_Object_System_Object___Class *)unaff_ESI->klass ==
            TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>) {
          pOVar15 = unaff_ESI;
        }
        if (pOVar15 == (Object *)0x0) goto code_?;
        if ((unaff_ESI->klass->_0).element_class !=
            (TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>->
            _0).element_class) goto code_?;
        piVar16 = (int *)func_?();
        unaff_EBX = (IEnumerator__Class *)*piVar16;
        unaff_ESI = (Object *)piVar16[1];
        pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (sb,StringLiteral__k__,(MethodInfo *)0x0);
        if (((unaff_EBX == (IEnumerator__Class *)0x0) ||
            (pSVar13 = (String *)func_?(3,unaff_EBX), pSVar17 == (StringBuilder *)0x0)) ||
           (pSVar17 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar17,pSVar13,(MethodInfo *)0x0), pSVar17 == (StringBuilder *)0x0
           )) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar17,StringLiteral__v__,(MethodInfo *)0x0);
        iVar18 = func_?();
        if (iVar18 == 0) {
code_?:
          pSVar13 = StringLiteral_NULL;
          if (unaff_ESI != (Object *)0x0) {
            pSVar13 = (String *)func_?(3,unaff_ESI);
          }
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar13,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (sb,0x5d,(MethodInfo *)0x0);
        }
        else {
          if (unaff_ESI != (Object *)0x0) {
            pOVar15 = (Object *)0x0;
            if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
              pOVar15 = unaff_ESI;
            }
            if (pOVar15 != (Object *)0x0) goto code_?;
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
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* String BuildString[Object](IEnumerable`1[System.Object]) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString
                   (IEnumerable_1_System_Object_ *collection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (collection,0,1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    if (prependInfo != (String *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this,prependInfo,(MethodInfo *)0x0);
    }
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
    pSVar1 = (String *)(*(this->klass->vtable).ToString.methodPtr)();
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String BuildString[Object](IEnumerable`1[System.Object], Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_1
                   (IEnumerable_1_System_Object_ *collection,bool eachEntryNewLine,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (collection,0,_eachEntryNewLine,
                      ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pSVar1;
}


/* String BuildString[Object](IEnumerable`1[System.Object], String) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_2
                   (IEnumerable_1_System_Object_ *collection,String *prependInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = (String *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (collection,prependInfo,1,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pSVar1;
}


/* String BuildString[Object](IEnumerable`1[System.Object], String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_3
                   (IEnumerable_1_System_Object_ *collection,String *prependInfo,
                   bool eachEntryNewLine,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pIVar4 = (IEnumerator__Class *)func_?(TypeInfo__System__Text__StringBuilder);
  if (pIVar4 != (IEnumerator__Class *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
              ((StringBuilder *)pIVar4,(MethodInfo *)0x0);
    if (prependInfo != (String *)0x0) {
      this = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                       ((StringBuilder *)pIVar4,prependInfo,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this,pSVar5,(MethodInfo *)0x0);
    }
    uVar6 = 0x1000000;
    if (collection != (IEnumerable_1_System_Object_ *)0x0) {
      if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
        func_?();
      }
      pOVar7 = (Object *)func_?();
      uStack_1 = 1;
      while (pOVar7 != (Object *)0x0) {
        this_00 = TypeInfo__System__Collections__IEnumerator;
        cVar8 = func_?();
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          if (pOVar7 != (Object *)0x0) {
            func_?();
          }
          uStack_1 = 0xffffffff;
          pSVar5 = (String *)(*(code *)(pIVar4->_0).image[4].token)();
          *unaff_FS_OFFSET = uStack_3;
          return pSVar5;
        }
        if (pOVar7 == (Object *)0x0) break;
        pIVar9 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
        pOVar10 = pOVar7;
        if (pIVar9->initialized_and_no_error == 0) {
          this_00 = (IEnumerator__Class *)&UNK_?;
          pIVar9 = (Il2CppClass *)func_?();
        }
        pOVar11 = pOVar7->klass;
        uVar12 = 0;
        uVar13 = (pOVar11->_1).interface_offsets_count;
        if (uVar13 != 0) {
          do {
            if (pOVar11->interfaceOffsets[uVar12].interfaceType == pIVar9) {
              pVVar14 = &(pOVar11->vtable).Equals + pOVar11->interfaceOffsets[uVar12].offset;
              pOVar7 = pOVar10;
              goto code_?;
            }
            uVar12 = uVar12 + 1;
            pIVar4 = this_00;
          } while (uVar12 < uVar13);
        }
        this_00 = pIVar4;
        pVVar14 = (VirtualInvokeData *)func_?();
        pOVar7 = pOVar10;
code_?:
        pOVar10 = (Object *)(*pVVar14->methodPtr)();
        pIVar4 = this_00;
        if ((char)((uint)uVar6 >> 0x18) == '\0') {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    ((StringBuilder *)this_00,::StringLiteral___,(MethodInfo *)0x0);
          if (eachEntryNewLine == 0) goto code_?;
          pSVar5 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    ((StringBuilder *)this_00,pSVar5,(MethodInfo *)0x0);
          uVar6 = 0;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_8
                    ((StringBuilder *)this_00,pOVar10,(MethodInfo *)0x0);
          pOVar7 = pOVar10;
        }
        else {
          uVar6 = 0;
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_8
                    ((StringBuilder *)this_00,pOVar10,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar15)();
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
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
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
  fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle_12
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
  this = (Transform__Class *)0x0;
  if (transform != (Transform *)0x0) {
    pIStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (transform,(MethodInfo *)0x0);
    this = (Transform__Class *)&pIStack_5;
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
         (this = (Transform__Class *)
                 func_?(1,TypeInfo__System__Collections__IEnumerator,pIStack_6),
         this == (Transform__Class *)0x0)) break;
      pTVar8 = (Transform__Class *)(this->_0).image;
      pTVar9 = TypeInfo__UnityEngine__Transform;
      if (((pTVar8->_1).typeHierarchyDepth <
           (TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth) ||
         ((pTVar8->_1).typeHierarchy[(TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth - 1]
          != (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
      a = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                    ((Object_1 *)this,(MethodInfo *)0x0);
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
  transform_00 = this;
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
  this = (Transform__Class *)&pIStack_5;
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
    if (transform_00 == (Transform__Class *)0x0) {
      transform_00 = (Transform__Class *)0x0;
    }
    else {
      this = *(Transform__Class **)&transform_00->_0;
      pTVar8 = TypeInfo__UnityEngine__Transform;
      if (((this->_1).typeHierarchyDepth < (TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth
          ) || ((this->_1).typeHierarchy
                [(TypeInfo__UnityEngine__Transform->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
    }
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
  func_?(this,pTVar9);
  pTVar8 = extraout_EDX_00;
code_?:
  func_?(transform_00,pTVar8);
  pcVar11 = (code *)swi(3);
  pTVar12 = (Transform *)(*pcVar11)();
  return pTVar12;
}


/* String GenerateDictionaryString[Object,Object](Dictionary`2[System.Object,System.Object], String)
    */

String * Assembly-CSharp.dll::Extensions::Extensions_GenerateDictionaryString
                   (Dictionary_2_System_Object_System_Object_ *collection,String *prependInfo,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__k__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__v__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this = (MethodInfo *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (MethodInfo *)0x0) {
    method_00 = this;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
              ((StringBuilder *)this,prependInfo,(MethodInfo *)0x0);
    bVar7 = true;
    pMStack_8 = this;
    if (collection != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      puVar9 = (undefined4 *)(*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)()
      ;
      pDStack_10 = &DStack_6;
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar9;
      DStack_6._version = puVar9[1];
      DStack_6._index = puVar9[2];
      DStack_6._current.key = (Object *)puVar9[3];
      DStack_6._16_8_ = *(undefined8 *)(puVar9 + 4);
      ppMStack_11 = &method;
      uStack_12 = 0;
      uStack_1 = 1;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,(method->field7_0x1c).rgctx_data[8].method);
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)(method->field7_0x1c).rgctx_data[10],method_00);
          uStack_1 = 0xffffffff;
          pSVar14 = (String *)
                   (*(((StringBuilder__Class *)this->methodPointer)->vtable).ToString.methodPtr)
                             (this,(((StringBuilder__Class *)this->methodPointer)->vtable).ToString.
                                   method);
          *unaff_FS_OFFSET = uStack_3;
          return pSVar14;
        }
        value = DStack_6._current.value;
        pOStack_15 = DStack_6._current.key;
        if (bVar7) {
          bVar7 = false;
        }
        else {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    ((StringBuilder *)this,::StringLiteral___,(MethodInfo *)0x0);
        }
        method_00 = (MethodInfo *)
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              ((StringBuilder *)this,StringLiteral__k__,(MethodInfo *)0x0);
        if (method_00 == (MethodInfo *)0x0) break;
        this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_8
                            ((StringBuilder *)method_00,pOStack_15,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) break;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,StringLiteral__v__,(MethodInfo *)0x0);
        DStack_6._index = 0;
        DStack_6._version = *(int32_t *)&method->field7_0x1c;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        DStack_6._index = func_?();
        DStack_6._version = (int32_t)value;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        pOStack_15 = (Object *)func_?();
        if (pOStack_15 == (Object *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_8
                    ((StringBuilder *)this,value,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pSVar14 = (String *)
                   (*((method->field7_0x1c).rgctx_data[7].method)->virtualMethodPointer)
                             (pOStack_15,::StringLiteral__,
                              (method->field7_0x1c).rgctx_data[7].rgctxDataDummy);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    ((StringBuilder *)this,pSVar14,(MethodInfo *)0x0);
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  ((StringBuilder *)this,::StringLiteral__,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  pSVar14 = (String *)(*pcVar16)();
  return pSVar14;
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
        value = (Convert__Class *)*puVar6;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          value = pCVar7;
        }
        dVar8 = mscorlib.dll::System::Convert::Convert_ToDouble_9((float)value,(MethodInfo *)0x0);
        hashtable = (Dictionary_2_System_Object_System_Object_ *)(float)dVar8;
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (hashtable,(Object *)TypeInfo__Extensions->static_fields->obscuredString,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    return pOVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Boolean GetValueOrDefault[Boolean](Dictionary`2[System.Object,System.Object], String, Boolean) */

bool Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,bool defaultValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (hashtable,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
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
      cVar4 = (*(pTVar3->klass->vtable).get_IsEnum.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_IsEnum.method);
      if ((cVar4 == '\0') || (unaff_EDI == (Object *)0x0)) {
        return defaultValue;
      }
      pOVar5 = (Object *)0x0;
      if ((Int32__Class *)unaff_EDI->klass == TypeInfo__System__Int32) {
        pOVar5 = unaff_EDI;
      }
      if (pOVar5 == (Object *)0x0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI != (Object *)0x0) {
      if ((unaff_EDI->klass->_0).element_class == *(Il2CppClass **)(iVar2 + 0x20)) {
        pbVar6 = (bool *)func_?(unaff_EDI);
        return *pbVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI,iVar2);
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Int32 GetValueOrDefault[Int32](Dictionary`2[System.Object,System.Object], String, Int32) */

int32_t Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_1
                  (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                  int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (hashtable,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
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
      cVar4 = (*(pTVar3->klass->vtable).get_IsEnum.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_IsEnum.method);
      if ((cVar4 == '\0') || (unaff_EDI == (Object *)0x0)) {
        return defaultValue;
      }
      pOVar5 = (Object *)0x0;
      if ((Int32__Class *)unaff_EDI->klass == TypeInfo__System__Int32) {
        pOVar5 = unaff_EDI;
      }
      if (pOVar5 == (Object *)0x0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI != (Object *)0x0) {
      if ((unaff_EDI->klass->_0).element_class == *(Il2CppClass **)(iVar2 + 0x20)) {
        piVar6 = (int32_t *)func_?(unaff_EDI);
        return *piVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI,iVar2);
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Int32Enum GetValueOrDefault[Int32Enum](Dictionary`2[System.Object,System.Object], String,
   Int32Enum) */

Int32Enum__Enum
Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_2
          (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
          Int32Enum__Enum defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (hashtable,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
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
      cVar4 = (*(pTVar3->klass->vtable).get_IsEnum.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_IsEnum.method);
      if ((cVar4 == '\0') || (unaff_EDI == (Object *)0x0)) {
        return defaultValue;
      }
      pOVar5 = (Object *)0x0;
      if ((Int32__Class *)unaff_EDI->klass == TypeInfo__System__Int32) {
        pOVar5 = unaff_EDI;
      }
      if (pOVar5 == (Object *)0x0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI != (Object *)0x0) {
      if ((unaff_EDI->klass->_0).element_class == *(Il2CppClass **)(iVar2 + 0x20)) {
        pIVar6 = (Int32Enum__Enum *)func_?(unaff_EDI);
        return *pIVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI,iVar2);
  pcVar7 = (code *)swi(3);
  IVar8 = (*pcVar7)();
  return IVar8;
}


/* Object GetValueOrDefault[Object](Dictionary`2[System.Object,System.Object], String, Object) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_3
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   Object *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle.value = (void *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (hashtable,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
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
      cVar4 = (*(pTVar3->klass->vtable).get_IsEnum.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_IsEnum.method);
      if ((cVar4 == '\0') || (unaff_EDI == (Object *)0x0)) {
        return defaultValue;
      }
      pOVar5 = (Object *)0x0;
      if ((Int32__Class *)unaff_EDI->klass == TypeInfo__System__Int32) {
        pOVar5 = unaff_EDI;
      }
      if (pOVar5 == (Object *)0x0) {
        return defaultValue;
      }
    }
    handle.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)handle.value + 0xba) & 1) == 0) {
      handle.value = (void *)func_?(handle.value);
    }
    if (unaff_EDI == (Object *)0x0) {
      pOVar5 = (Object *)0x0;
    }
    else {
      pOVar5 = (Object *)func_?(unaff_EDI,handle.value);
      if (pOVar5 == (Object *)0x0) goto code_?;
    }
    return pOVar5;
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,handle.value);
  pcVar6 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar6)();
  return pOVar5;
}


/* Single GetValueOrDefault[Single](Dictionary`2[System.Object,System.Object], String, Single) */

float Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_4
                (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,float defaultValue
                ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)hashtable,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return defaultValue;
    }
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (hashtable,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((*(byte *)((int)((method->field7_0x1c).rgctx_data)->rgctxDataDummy + 0xba) & 1) == 0) {
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
      cVar4 = (*(pTVar3->klass->vtable).get_IsEnum.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_IsEnum.method);
      if ((cVar4 == '\0') || (unaff_EDI == (Object *)0x0)) {
        return defaultValue;
      }
      pOVar5 = (Object *)0x0;
      if ((Int32__Class *)unaff_EDI->klass == TypeInfo__System__Int32) {
        pOVar5 = unaff_EDI;
      }
      if (pOVar5 == (Object *)0x0) {
        return defaultValue;
      }
    }
    iVar2 = *(int *)(method->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (unaff_EDI != (Object *)0x0) {
      if ((unaff_EDI->klass->_0).element_class == *(Il2CppClass **)(iVar2 + 0x20)) {
        pfVar6 = (float *)func_?(unaff_EDI);
        return *pfVar6;
      }
      goto code_?;
    }
  }
code_?:
  iVar2 = func_?();
code_?:
  func_?(unaff_EDI,iVar2);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void Log[Object,Object](Dictionary`2[System.Object,System.Object], String) */

void Assembly-CSharp.dll::Extensions::Extensions_Log
               (Dictionary_2_System_Object_System_Object_ *collection,String *prependInfo,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  message = (Object *)
            (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                      (collection,prependInfo,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
  return;
}


/* Void LogError[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogError
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogError_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
               (MethodInfo *)0x0);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
              (((method->field7_0x1c).rgctx_data)->method,this,prependInfo);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    if (prependInfo != (String *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this,prependInfo,(MethodInfo *)0x0);
    }
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Extensions_AppendRecursive(this,_eachEntryNewLine,0,eachEntryNewLine,(MethodInfo *)0x0);
    pMVar1 = (this->klass->vtable).ToString.method;
    uVar2 = (*(this->klass->vtable).ToString.methodPtr)();
    if (pMVar1 != (MethodInfo *)0x0) {
      (*(code *)pMVar1->name)((pMVar1->field8_0x20).genericMethod,uVar2,pMVar1->return_type);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LogWarning[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarning
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__LogWarning_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
               (MethodInfo *)0x0);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
              (((method->field7_0x1c).rgctx_data)->method,this,prependInfo);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Log[Object](IEnumerable`1[System.Object], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_1
               (IEnumerable_1_System_Object_ *collection,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&MethodInfo__UnityEngine__Debug__Log_System__Object_);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  this = (Action_1_Object_ *)func_?(TypeInfo__System__Action<System::String>);
  if (this != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
               (MethodInfo *)0x0);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
              (((method->field7_0x1c).rgctx_data)->method,this,prependInfo);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Log[Object](IEnumerable`1[System.Object], Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_2
               (IEnumerable_1_System_Object_ *collection,Action_1_String_ *logFunc,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    IStack_1.rgctxDataDummy = &TypeInfo__Extensions;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    IStack_1 = (Il2CppRGCTXData)TypeInfo__Extensions;
    func_?();
  }
  IStack_1 = *(method->field7_0x1c).rgctx_data;
  puStack_2 = (undefined *)_eachEntryNewLine;
  pSStack_3 = prependInfo;
  uVar4 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)(collection);
  if (logFunc != (Action_1_String_ *)0x0) {
    IStack_1 = (Il2CppRGCTXData)(logFunc->fields)._._.method;
    pSStack_3 = (logFunc->fields)._._.method_code;
    puStack_2 = (undefined *)uVar4;
    (*(logFunc->fields)._._.invoke_impl)();
    return;
  }
  IStack_1 = (Il2CppRGCTXData)&stack0xfffffffc;
  uVar4 = func_?(&pSStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  BStack_2.m_Extents.y = 0.0;
  BStack_2.m_Extents.z = 0.0;
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value.m_Center.x = 0.0;
  NStack_1.value.m_Center.y = 0.0;
  NStack_1.value.m_Center.z = 0.0;
  BStack_2.m_Center.x = 0.0;
  BStack_2.m_Center.y = 0.0;
  BStack_2.m_Center.z = 0.0;
  BStack_2.m_Extents.x = 0.0;
  if (gameObject != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pNVar4 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                       (&NStack_5,pTVar3,(MethodInfo *)0x0);
    NStack_1.hasValue = pNVar4->hasValue;
    NStack_1._1_3_ = *(undefined3 *)&pNVar4->field_0x1;
    NStack_1.value.m_Center.x = (pNVar4->value).m_Center.x;
    NStack_1.value.m_Center.y = (pNVar4->value).m_Center.y;
    NStack_1.value.m_Center.z = (pNVar4->value).m_Center.z;
    NStack_1.value.m_Extents.x = (pNVar4->value).m_Extents.x;
    NStack_1.value.m_Extents.y = (pNVar4->value).m_Extents.y;
    NStack_1.value.m_Extents.z = (pNVar4->value).m_Extents.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar6->zeroVector).x;
    uVar8 = (pVVar6->zeroVector).y;
    fVar9 = (pVVar6->zeroVector).z;
    VStack_10.y = (float)uVar7;
    VStack_10.z = (float)uVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    center.y = VStack_10.z;
    center.x = VStack_10.y;
    center.z = fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
              (&BStack_2,center,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
               (MethodInfo *)0x0);
    if (NStack_1.hasValue == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Failed_to_find_bounds_,(MethodInfo *)0x0);
    }
    else {
      pBVar11 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
               Nullable_1_UnityEngine_Bounds__get_Value
                         (&NStack_5.value,&NStack_1,
                          MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
      BStack_2.m_Center.x = (pBVar11->m_Center).x;
      BStack_2.m_Center.y = (pBVar11->m_Center).y;
      BStack_2.m_Center.z = (pBVar11->m_Center).z;
      BStack_2.m_Extents.x = (pBVar11->m_Extents).x;
      BStack_2.m_Extents.y = (pBVar11->m_Extents).y;
      BStack_2.m_Extents.z = (pBVar11->m_Extents).z;
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                       (&VStack_10,&BStack_2,(MethodInfo *)0x0);
    VStack_10.z = pVVar12->x;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                       (&NStack_5.value.m_Extents,&BStack_2,(MethodInfo *)0x0);
    fVar9 = pVVar12->y;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                       (&NStack_5.value.m_Extents,&BStack_2,(MethodInfo *)0x0);
    if (fVar9 <= pVVar12->z) {
      fVar9 = pVVar12->z;
    }
    fVar13 = VStack_10.z;
    if (VStack_10.z <= fVar9) {
      fVar13 = fVar9;
    }
    fVar13 = targetSize / fVar13;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    VStack_10.x = fVar13;
    VStack_10.y = fVar13;
    VStack_10.z = fVar13;
    if (pTVar3 != (Transform *)0x0) {
      value.y = fVar13;
      value.x = fVar13;
      value.z = fVar13;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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


/* Void SetObscuredType[Object](Dictionary`2[System.Object,System.Object], String, Object) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (hashtable,(Object *)TypeInfo__Extensions->static_fields->obscuredString,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetObscuredType[ObscuredBool](Dictionary`2[System.Object,System.Object], String,
   ObscuredBool) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_1
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredBool value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    func_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?();
  }
  value_00 = (Object *)func_?(pvVar2);
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

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_2
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredFloat value
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    func_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?();
  }
  value_00 = (Object *)func_?(pvVar2);
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


/* Void SetObscuredType[ObscuredInt](Dictionary`2[System.Object,System.Object], String, ObscuredInt)
    */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_3
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredInt value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    func_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  func_?(TypeInfo__Extensions->static_fields);
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?();
  }
  value_00 = (Object *)func_?(pvVar2);
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::Single::Single_ToString_1
                       ((Single *)&vec,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(this,pSVar2,(MethodInfo *)0x0)
    ;
    pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                       (this,::StringLiteral__,(MethodInfo *)0x0);
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::Single::Single_ToString_1
                       ((Single *)&vec.y,(IFormatProvider *)pCVar1,(MethodInfo *)0x0);
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
        pSVar2 = (String *)(*(this->klass->vtable).ToString.methodPtr)();
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
  func_?(this);
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

